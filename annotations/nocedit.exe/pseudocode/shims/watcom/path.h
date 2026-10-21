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
#include <vector>

// Where a relative path lands. Both empty, the default, is the working directory
// for everything, which is how the game has always run.
//
// `data` moves the install the game reads from. `user` takes every write, and is
// looked in first on every read, so an install that cannot be written (a console
// package, a sandboxed app, a shared system directory) still keeps its saves,
// settings and logs. A file written once is read back from `user` from then on;
// the shipped copy in `data` is never changed.
struct WatcomPathRoots {
    std::string data;
    std::string user;
};

// Defined here rather than in path.cpp so the debug log can find its directory
// without linking the resolver into everything that logs.
inline WatcomPathRoots &watcom_path_roots_storage() {
    static WatcomPathRoots roots;
    return roots;
}
inline void watcom_set_path_roots(const WatcomPathRoots &roots) { watcom_path_roots_storage() = roots; }
inline const WatcomPathRoots &watcom_path_roots() { return watcom_path_roots_storage(); }

// Where a log file named `name` is written: the user directory, else the data
// directory, else the working directory. Logs are never read back, so unlike
// a game write nothing is copied or looked up.
inline std::string watcom_log_path(const char *name) {
    const WatcomPathRoots &roots = watcom_path_roots();
    const std::string &dir = !roots.user.empty() ? roots.user : roots.data;
    return dir.empty() ? std::string(name) : dir + "/" + name;
}

// What the caller is about to do with the path. A write goes to the user
// directory, creating the directories above it there; a read takes the user
// directory's copy when there is one and the data directory's otherwise.
enum class WatcomPathUse { Read, Write };

// The path the filesystem will accept for a path the game asked for.
//
// Never fails. A path that resolves to nothing on disk comes back translated but
// otherwise as given, so the open that follows fails the way it always did and
// the caller's errno still says what it always said. Callers depend on that:
// missing files are ordinary here, and the game asks for plenty that are not
// there. An absolute path ignores the roots.
std::string watcom_resolve_fs_path(const char *path, WatcomPathUse use = WatcomPathUse::Read);

// Every place a relative directory's contents can be, user directory first, for
// listing it: the directory as resolved under each root that has one. With no
// roots set, the one directory the game named.
std::vector<std::string> watcom_resolve_fs_dirs(const char *directory);

// Whether an fopen mode string can create or change the file.
inline bool watcom_mode_writes(const char *mode) {
    if (mode == nullptr) return false;
    for (const char *p = mode; *p != '\0'; p++) {
        if (*p == 'w' || *p == 'a' || *p == '+') return true;
    }
    return false;
}

// The last component of a Windows-style path: everything after the last '\',
// '/' or drive ':'. The extension is left on; callers differ on whether a name
// ends at its first dot or its last.
inline const char *watcom_path_leaf(const char *path) {
    const char *leaf = path;
    for (const char *p = path; *p != '\0'; p++) {
        if (*p == '\\' || *p == '/' || *p == ':') {
            leaf = p + 1;
        }
    }
    return leaf;
}
