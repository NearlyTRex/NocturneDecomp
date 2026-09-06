#pragma once

// =============================================================================
// WATCOM PATH RESOLUTION — a Windows path, resolved on whatever this is
// =============================================================================
//
// The game was built for Windows and hardcodes backslash separators and
// mixed-case filenames: ".\\system\\nocturne.ini", "ACT1.POD", "save\\SAVE1.NOC".
// Windows does not care about either — its separator accepts both and its
// filesystems compare names without case. Elsewhere both matter: a backslash is
// an ordinary character in a filename, and two names differing only in case are
// two different files. So a path the game is certain about does not open.
//
// Resolving one means translating the separator and then finding the name the
// filesystem actually has, component by component: where the exact spelling does
// not exist, the parent is scanned for one that differs only in case.
//
// Split out from crt.cpp so it can be tested. crt.cpp replaces two dozen CRT
// entry points, `remove` and `rename` among them, and linking that into a test
// would replace them for the test too — a fixture asking the filesystem for
// something would get the shim's answer instead of the truth, and the test would
// be describing itself.
//
// The resolution is a property of the path and the filesystem and nothing else,
// which is what makes it testable: give it a tree and a spelling, and the answer
// does not depend on how it was reached.

#include <string>

// The path the filesystem will accept for a path the game asked for.
//
// Never fails. A path that resolves to nothing on disk comes back translated but
// otherwise as given, so the open that follows fails the way it always did and
// the caller's errno still says what it always said. Callers depend on that:
// missing files are ordinary here, and the game asks for plenty that are not
// there.
std::string watcom_resolve_fs_path(const char *path);
