// =============================================================================
// WATCOM PATH RESOLUTION — what it does, not how
// =============================================================================
//
// Every case here is written against a directory the test builds and a path the
// game would ask for, and checks the answer. Nothing refers to how the answer is
// reached — no directory scanning, no separator handling, no order of attempts.
// That is the point: the implementation moved from POSIX opendir/readdir to
// std::filesystem so the shim can build somewhere other than Linux, and a test
// coupled to the old calls would have had to be rewritten alongside it, which
// would have proved nothing about the change.
//
// The behaviour these pin down is what the game depends on:
//   - a Windows separator reaches the filesystem as one it accepts
//   - a name spelled in the wrong case still finds the file
//   - a name spelled in the right case is never quietly replaced
//   - a path that is not there comes back translated, so the caller still fails
//     the way it always failed

#include "nocturne_test.h"

#include "watcom/path.h"

#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>

namespace {

namespace fs = std::filesystem;

// A directory tree with the shape the game's install has: mixed case, nested,
// and a couple of names that differ from each other only in case.
struct Tree {
    fs::path root;
    fs::path previous;

    Tree() {
        std::error_code ec;
        previous = fs::current_path(ec);
        root = fs::temp_directory_path(ec) / fs::path("nocturne_path_test");
        fs::remove_all(root, ec);
        fs::create_directories(root / "SYSTEM", ec);
        fs::create_directories(root / "save", ec);
        fs::create_directories(root / "Levels" / "act1", ec);
        write(root / "SYSTEM" / "nocturne.ini");
        write(root / "save" / "SAVE1.noc");
        write(root / "Levels" / "act1" / "ACT1.POD");
        // Two names differing only in case, to pin down that an exact spelling
        // is never traded for a sibling that merely folds to the same thing.
        write(root / "Readme.txt");
        write(root / "README.TXT");
        fs::current_path(root, ec);
    }

    ~Tree() {
        std::error_code ec;
        fs::current_path(previous, ec);
        fs::remove_all(root, ec);
    }

    static void write(const fs::path &at) {
        std::ofstream out(at.string().c_str());
        out << "x";
    }

    // True when the resolved path names something that is really there.
    static bool opens(const std::string &resolved) {
        std::error_code ec;
        return fs::exists(fs::path(resolved), ec);
    }
};

}  // namespace

// -----------------------------------------------------------------------------
// The separator. The game spells every path with backslashes; on a filesystem
// where that is an ordinary character, an unresolved one names a file that does
// not exist and never will.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_windows_separator_reaches_a_file) {
    Tree tree;
    CHECK(Tree::opens(watcom_resolve_fs_path(".\\SYSTEM\\nocturne.ini")));
    CHECK(Tree::opens(watcom_resolve_fs_path("SYSTEM\\nocturne.ini")));
}

NOCTURNE_TEST(a_separator_is_translated_even_when_nothing_is_there) {
    Tree tree;
    // The caller is about to fail. It should fail on a path the filesystem could
    // have had, not on one with a backslash in the middle of a filename.
    const std::string resolved = watcom_resolve_fs_path("SYSTEM\\missing.dat");
    CHECK(resolved.find('\\') == std::string::npos);
    CHECK(!Tree::opens(resolved));
}

NOCTURNE_TEST(both_separators_in_one_path) {
    Tree tree;
    CHECK(Tree::opens(watcom_resolve_fs_path("Levels/act1\\ACT1.POD")));
}

// -----------------------------------------------------------------------------
// The case. The game's spelling and the installer's do not agree, and neither
// is wrong — Windows never made anyone choose.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_file_spelled_in_the_wrong_case_is_found) {
    Tree tree;
    CHECK(Tree::opens(watcom_resolve_fs_path("save\\save1.NOC")));
    CHECK(Tree::opens(watcom_resolve_fs_path("save\\SAVE1.NOC")));
}

NOCTURNE_TEST(a_directory_spelled_in_the_wrong_case_is_found) {
    Tree tree;
    CHECK(Tree::opens(watcom_resolve_fs_path("system\\nocturne.ini")));
    CHECK(Tree::opens(watcom_resolve_fs_path("SAVE\\SAVE1.noc")));
}

NOCTURNE_TEST(every_component_can_be_wrong_at_once) {
    Tree tree;
    CHECK(Tree::opens(watcom_resolve_fs_path("LEVELS\\ACT1\\act1.pod")));
    CHECK(Tree::opens(watcom_resolve_fs_path("levels\\Act1\\Act1.Pod")));
}

NOCTURNE_TEST(an_exact_spelling_is_never_traded_for_a_sibling) {
    Tree tree;
    // Both Readme.txt and README.TXT exist. Each spelling has to reach its own
    // file: folding first and matching afterwards would make the answer depend
    // on the order the filesystem happens to list them in.
    const std::string lower = watcom_resolve_fs_path("Readme.txt");
    const std::string upper = watcom_resolve_fs_path("README.TXT");
    CHECK(Tree::opens(lower));
    CHECK(Tree::opens(upper));
    CHECK(lower != upper);
    CHECK(lower.find("Readme.txt") != std::string::npos);
    CHECK(upper.find("README.TXT") != std::string::npos);
}

// -----------------------------------------------------------------------------
// Paths that are not there. The game asks for plenty — a missing save, an
// optional file — and those have to keep failing quietly.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_missing_file_resolves_to_something_that_still_fails) {
    Tree tree;
    CHECK(!Tree::opens(watcom_resolve_fs_path("save\\SAVE9.noc")));
    CHECK(!Tree::opens(watcom_resolve_fs_path("nothing\\at\\all.dat")));
}

NOCTURNE_TEST(a_missing_tail_keeps_the_part_that_was_found) {
    Tree tree;
    // The directories exist and the file does not. What comes back should still
    // be a usable path into the real tree, since the caller may be about to
    // create the file there.
    const std::string resolved = watcom_resolve_fs_path("SAVE\\newsave.noc");
    CHECK(resolved.find('\\') == std::string::npos);
    std::error_code ec;
    CHECK(fs::exists(fs::path(resolved).parent_path(), ec));
}

NOCTURNE_TEST(a_path_that_is_already_right_is_returned_as_it_was) {
    Tree tree;
    CHECK_EQ(watcom_resolve_fs_path("SYSTEM/nocturne.ini"), std::string("SYSTEM/nocturne.ini"));
}

// -----------------------------------------------------------------------------
// Degenerate input. These reach the shim from decompiled code, so they arrive.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(nothing_in_nothing_out) {
    Tree tree;
    CHECK_EQ(watcom_resolve_fs_path(nullptr), std::string());
    CHECK_EQ(watcom_resolve_fs_path(""), std::string());
}

NOCTURNE_TEST(a_leading_dot_slash_is_kept) {
    Tree tree;
    const std::string resolved = watcom_resolve_fs_path(".\\system\\nocturne.ini");
    CHECK(Tree::opens(resolved));
    // The game builds paths by concatenation and some of them are compared as
    // strings, so the shape it asked for is worth keeping.
    CHECK(resolved.compare(0, 2, "./") == 0);
}

NOCTURNE_TEST(an_absolute_path_stays_absolute) {
    Tree tree;
    const std::string wanted = (tree.root / "system" / "NOCTURNE.INI").string();
    const std::string resolved = watcom_resolve_fs_path(wanted.c_str());
    CHECK(Tree::opens(resolved));
    CHECK(resolved[0] == '/');
}

NOCTURNE_TEST_MAIN()
