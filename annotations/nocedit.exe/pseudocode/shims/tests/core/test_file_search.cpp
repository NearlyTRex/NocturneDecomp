// =============================================================================
// FILE SEARCH — what a directory search answers
// =============================================================================
//
// The matcher is tested on strings, which needs no filesystem. The search is
// tested against a directory the test builds. Neither refers to how either is
// done — the POSIX opendir/readdir/fnmatch these replaced could be dropped back
// in and every case here would still hold, which is what makes them worth having
// through a port.

#include "nocturne_test.h"

#include "core/file_search.h"

#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>
#include <vector>

namespace {

namespace fs = std::filesystem;

struct Tree {
    fs::path root;
    fs::path previous;

    Tree() {
        std::error_code ec;
        previous = fs::current_path(ec);
        root = fs::temp_directory_path(ec) / fs::path("nocturne_search_test");
        fs::remove_all(root, ec);
        fs::create_directories(root / "art", ec);
        fs::create_directories(root / "SAVE", ec);
        write(root / "ACT1.POD");
        write(root / "act2.pod");
        write(root / "readme");          // no extension
        write(root / "art" / "wall.raw");
        write(root / "art" / "FLOOR.RAW");
        write(root / "art" / "notes.txt");
        write(root / "SAVE" / "SAVE1.noc");
        write(root / "SAVE" / "SAVE2.noc");
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
};

bool contains(const std::vector<std::string> &all, const std::string &wanted) {
    for (size_t i = 0; i < all.size(); ++i) {
        if (all[i] == wanted) return true;
    }
    return false;
}

}  // namespace

// -----------------------------------------------------------------------------
// The matcher.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_pattern_without_wildcards_is_a_name) {
    CHECK(nocturne_name_matches("ACT1.POD", "ACT1.POD"));
    CHECK(!nocturne_name_matches("ACT1.POD", "ACT2.POD"));
    CHECK(!nocturne_name_matches("ACT1.POD", "ACT1.POD.BAK"));
}

NOCTURNE_TEST(case_never_matters) {
    CHECK(nocturne_name_matches("act1.pod", "ACT1.POD"));
    CHECK(nocturne_name_matches("*.RAW", "wall.raw"));
    CHECK(nocturne_name_matches("*.raw", "WALL.RAW"));
}

NOCTURNE_TEST(a_star_takes_any_run_including_none) {
    CHECK(nocturne_name_matches("*", "anything"));
    CHECK(nocturne_name_matches("*.pod", "act1.pod"));
    CHECK(nocturne_name_matches("act*", "act1.pod"));
    CHECK(nocturne_name_matches("act*.pod", "act.pod"));      // none
    CHECK(nocturne_name_matches("APIDLL*", "APIDLLinit"));
    CHECK(!nocturne_name_matches("*.pod", "act1.podx"));
}

NOCTURNE_TEST(a_question_mark_takes_exactly_one) {
    CHECK(nocturne_name_matches("act?.pod", "act1.pod"));
    CHECK(!nocturne_name_matches("act?.pod", "act.pod"));
    CHECK(!nocturne_name_matches("act?.pod", "act12.pod"));
}

NOCTURNE_TEST(a_star_gives_characters_back_when_it_has_to) {
    // The naive reading of "*b" against "abcb" takes everything at the star and
    // then has nothing left for the b. It has to give characters back.
    CHECK(nocturne_name_matches("*b", "abcb"));
    CHECK(nocturne_name_matches("*.*.bak", "save.1.bak"));
    CHECK(nocturne_name_matches("a*b*c", "axxbyyc"));
    CHECK(!nocturne_name_matches("a*b*c", "axxbyy"));
}

NOCTURNE_TEST(many_stars_do_not_take_forever) {
    // A pattern of nothing but stars against a long name is where a recursive
    // matcher stops being a matcher and becomes a stack overflow.
    const std::string name(2000, 'a');
    CHECK(nocturne_name_matches("**********", name.c_str()));
    CHECK(nocturne_name_matches("*a*a*a*a*a*", name.c_str()));
}

NOCTURNE_TEST(a_dot_star_still_wants_a_dot) {
    // Windows treats "*.*" as everything, including names with no dot. The POSIX
    // matcher this replaced did not, and neither does this: the port was meant
    // to change where the code runs, not what it answers. Recorded here so the
    // difference is a decision someone can find rather than a surprise.
    CHECK(nocturne_name_matches("*.*", "act1.pod"));
    CHECK(!nocturne_name_matches("*.*", "readme"));
}

NOCTURNE_TEST(nothing_matches_nothing) {
    CHECK(!nocturne_name_matches(nullptr, "x"));
    CHECK(!nocturne_name_matches("*", nullptr));
    CHECK(nocturne_name_matches("", ""));
    CHECK(!nocturne_name_matches("", "x"));
}

// -----------------------------------------------------------------------------
// The search.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_spec_with_no_directory_returns_bare_names) {
    Tree tree;
    const std::vector<std::string> found = nocturne_find_files("*.POD");
    CHECK_EQ((int)found.size(), 2);
    CHECK(contains(found, "ACT1.POD"));
    CHECK(contains(found, "act2.pod"));      // case-insensitively
}

NOCTURNE_TEST(a_spec_with_a_directory_returns_paths_that_open) {
    Tree tree;
    const std::vector<std::string> found = nocturne_find_files("art\\*.raw");
    CHECK_EQ((int)found.size(), 2);
    std::error_code ec;
    for (size_t i = 0; i < found.size(); ++i) {
        CHECK(found[i].find("art/") == 0);
        CHECK(fs::exists(fs::path(found[i]), ec));
    }
}

NOCTURNE_TEST(either_separator_is_accepted) {
    Tree tree;
    CHECK_EQ((int)nocturne_find_files("art\\*.raw").size(), 2);
    CHECK_EQ((int)nocturne_find_files("art/*.raw").size(), 2);
}

NOCTURNE_TEST(the_directory_is_matched_as_spelled) {
    Tree tree;
    // Only the last component is a pattern. The directory is used as given, so
    // a spec naming it in the wrong case finds nothing rather than guessing —
    // callers that need the case resolved go through the path shim first.
    CHECK_EQ((int)nocturne_find_files("SAVE\\*.noc").size(), 2);
}

NOCTURNE_TEST(nothing_found_is_not_an_error) {
    Tree tree;
    CHECK_EQ((int)nocturne_find_files("*.nothing").size(), 0);
    CHECK_EQ((int)nocturne_find_files("no_such_directory\\*").size(), 0);
    CHECK_EQ((int)nocturne_find_files(nullptr).size(), 0);
}

NOCTURNE_TEST(results_are_ordered) {
    Tree tree;
    // Neither API being emulated promises an order and no filesystem provides a
    // stable one. An unordered answer cannot be tested and cannot be reproduced
    // from a bug report, so this one is sorted.
    const std::vector<std::string> found = nocturne_find_files("SAVE/*.noc");
    CHECK_EQ((int)found.size(), 2);
    CHECK(found[0] < found[1]);

    const std::vector<std::string> again = nocturne_find_files("SAVE/*.noc");
    CHECK(found == again);
}

NOCTURNE_TEST_MAIN()
