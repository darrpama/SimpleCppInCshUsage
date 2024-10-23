CC = g++
CCFLAGS = -std=c++17
PROJECTDIR = .
INCLUDEDIR = include
DYNAMICLIB = libExample.dylib
DYNAMICLIBFLAGS = -fpic -shared

SOURCES = \
    $(PROJECTDIR)/src/Wrapper.cc

$(DYNAMICLIB):
	$(CC) $(DYNAMICLIBFLAGS) $(SOURCES) -I$(INCLUDEDIR) -o $@
	mv $@ $(INCLUDEDIR)/

.PHONY: clean
clean:
	@rm $(INCLUDEDIR)/$(DYNAMICLIB)
