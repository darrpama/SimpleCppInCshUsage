using System;
using System.Collections.Generic;
using System.Globalization;
using System.Runtime.InteropServices;
using Models;

Console.WriteLine(CalcCore.Calculate("1+1"));
Console.WriteLine(CalcCore.Add(1, 1));

namespace Models
{
    public class CalcCore
    {
        [DllImport("../include/libExample.dylib", CallingConvention = CallingConvention.Cdecl)]
        private static extern string CalculateWrapper(string expression);

        [DllImport("./include/libExample.dylib", EntryPoint = "add" , CallingConvention = CallingConvention.Cdecl)]
        private static extern int add(int a, int b);

        [DllImport("./include/libExample.dylib", CallingConvention = CallingConvention.Cdecl)]
        private static extern int substract(int a, int b);

        public CalcCore()
        {
        }

        ~CalcCore()
        {
        }

        public static string Calculate(string? expression)
        {
            if (String.IsNullOrWhiteSpace(expression))
            {
                expression = "0";
            }

            string result = CalculateWrapper(expression);
            return result;
        }
        public static int Add(int a, int b)
        {
            return add(a, b);
        }

        public static int Substract(int a, int b)
        {
            return substract(a, b);
        }
    }
}
