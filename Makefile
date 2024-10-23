CC = g++
CCFLAGS = -std=c++17
PROJECTDIR = .
INCLUDEDIR = src/include
DYNAMICLIB = libExample.dylib
DYNAMICLIBFLAGS = -fpic -shared

all: build

SOURCES = \
    $(PROJECTDIR)/src/Wrapper.cc

$(DYNAMICLIB):
	$(CC) $(DYNAMICLIBFLAGS) $(SOURCES) -I$(INCLUDEDIR) -o $@
	mv $@ $(INCLUDEDIR)/

build: $(DYNAMICLIB)
	cd src && dotnet run

.PHONY: clean
clean:
	@rm $(INCLUDEDIR)/$(DYNAMICLIB)
