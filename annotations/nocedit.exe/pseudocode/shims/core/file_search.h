#pragma once

// =============================================================================
// FILE SEARCH — one directory search, for the two APIs that emulate one
// =============================================================================
//
// The game looks for files two ways: Watcom's _findfirst/_findnext from its CRT,
// and Win32's FindFirstFileA/FindNextFileA. They are different APIs with
// different handles and different out-parameters, and underneath they are the
// same question — which files in this directory match this pattern, ignoring
// case — answered twice.
//
// It was answered twice literally: watcom.cpp and kernel32.cpp each had their
// own copy of the scan, and each declared its own `struct FindHandle` at file
// scope with a different layout. Two definitions of one class name in a program
// is an ODR violation, and the linker resolves it by keeping one inline
// destructor for both; whichever it kept read the other type's first field as
// its own. Destroying one handle ran the other's destructor, which took an
// integer tag as the address of a string. Internal linkage stopped the crash,
// but two implementations of one behaviour is what made it possible.
//
// So the search lives here once, both façades keep their own shape on top of it,
// and it is written against the standard library rather than against POSIX so it
// builds wherever the rest of this does.

#include <string>
#include <vector>

// Whether `name` matches a Windows wildcard `pattern`, ignoring case.
//
// `*` matches any run of characters including none, `?` matches exactly one.
// Nothing else is special — deliberately. The POSIX matcher this replaces also
// honoured bracket expressions like [a-z], which Windows never had and no
// pattern in the game uses, so dropping them is a step towards the API being
// emulated rather than away from it.
//
// Case folding is ASCII and fixed, not the locale's: the names are asset
// filenames from a 1999 Windows build, and a locale-sensitive fold would answer
// differently on a machine configured for Turkish and nowhere else.
bool nocturne_name_matches(const char *pattern, const char *name);

// Every path matching `filespec`, which is a directory and a wildcard: "*.POD",
// "art\\*.raw", "save/*". Either separator is accepted. Results carry the
// directory the spec named, so they can be opened as they are, and a spec with
// no directory returns bare names.
//
// Ordered by name, which the APIs being emulated do not promise and the
// filesystems underneath do not provide. Enumeration order is otherwise
// whatever the filesystem feels like — it varies between filesystems, and
// between runs on the same one — which cannot be tested and cannot be
// reproduced from a bug report.
//
// Empty when the directory cannot be read or nothing matches; both are ordinary
// and neither is an error here.
std::vector<std::string> nocturne_find_files(const char *filespec);
