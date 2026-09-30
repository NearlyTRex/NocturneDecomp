// =============================================================================
// WATCOM IO — the CRT calls the game makes about files and directories
// =============================================================================
//
// These moved from POSIX to std::filesystem, and the move changed more than
// which header they include: what a call answers when it fails is part of the
// contract, and the two libraries disagree about several of them. Creating a
// directory that exists is success to one and failure to the other. Asking for
// the working directory with too small a buffer truncates in one and refuses in
// the other. Resolving a path that does not exist yet fails in one and succeeds
// in the other.
//
// The game reads those answers. So they are pinned here, against a directory
// each test builds, checking what comes back rather than how it was reached —
// the same tests would hold if the implementation went back to POSIX tomorrow.
//
// The find functions are here too. They are the reason core/file_search.cpp
// exists: this file and kernel32.cpp each had their own copy of the search and
// their own FindHandle, which is what made the ODR fault possible. The search is
// tested on its own beside this; what these check is Watcom's shape on top of
// it — a long handle, and an iterator that says it is done by returning -1.

#include "nocturne_test.h"

#include "system/watcom.h"

#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>

namespace {

namespace fs = std::filesystem;

struct Tree {
    fs::path root;
    fs::path previous;

    Tree() {
        std::error_code ec;
        previous = fs::current_path(ec);
        root = fs::temp_directory_path(ec) / fs::path("nocturne_watcom_io_test");
        fs::remove_all(root, ec);
        fs::create_directories(root / "SYSTEM", ec);
        fs::create_directories(root / "save", ec);
        write(root / "SYSTEM" / "nocturne.ini");
        write(root / "save" / "SAVE1.noc");
        write(root / "save" / "SAVE2.noc");
        write(root / "ACT1.POD");
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

}  // namespace

// -----------------------------------------------------------------------------
// _mkdir. Watcom answers 0 for made and -1 for not, and "it was already there"
// is not made. The game checks the result before deciding it has somewhere to
// save to.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(making_a_directory_says_whether_it_made_one) {
    Tree tree;
    CHECK_EQ(_mkdir("newdir"), 0);
    std::error_code ec;
    CHECK(fs::is_directory(fs::path("newdir"), ec));

    // Already there is not success.
    CHECK_EQ(_mkdir("newdir"), -1);
    // Neither is a directory whose parent does not exist.
    CHECK_EQ(_mkdir("nowhere/at/all"), -1);
}

// -----------------------------------------------------------------------------
// _getcwd. A buffer too small is refused rather than filled with a truncated
// path that would name the wrong directory.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(the_working_directory_comes_back_whole_or_not_at_all) {
    Tree tree;
    char buffer[4096];
    CHECK(_getcwd(buffer, (int)sizeof(buffer)) == buffer);

    std::error_code ec;
    CHECK(fs::equivalent(fs::path(buffer), tree.root, ec));

    // Too small to hold it: nothing is claimed.
    char tiny[4];
    CHECK(_getcwd(tiny, (int)sizeof(tiny)) == nullptr);
    CHECK(_getcwd(buffer, 0) == nullptr);
}

// -----------------------------------------------------------------------------
// _fullpath. The game asks it where a file WOULD be, so it has to answer for
// paths that do not exist — that is the whole use.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_full_path_is_absolute) {
    Tree tree;
    char buffer[4096];
    CHECK(_fullpath(buffer, "ACT1.POD", sizeof(buffer)) == buffer);
    CHECK(buffer[0] == '/');
    std::error_code ec;
    CHECK(fs::exists(fs::path(buffer), ec));
}

NOCTURNE_TEST(a_full_path_answers_for_something_not_there_yet) {
    Tree tree;
    char buffer[4096];
    // realpath, which this used to use, fails here and left the caller with the
    // relative path it started with.
    CHECK(_fullpath(buffer, "save/SAVE9.noc", sizeof(buffer)) == buffer);
    CHECK(buffer[0] == '/');
    CHECK(std::string(buffer).find("SAVE9.noc") != std::string::npos);
}

// -----------------------------------------------------------------------------
// __getfileattr. Windows has one read-only bit for a file; a POSIX host has
// three write bits for three audiences, and the owner's is the one that decides
// whether this process can write.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(file_attributes_say_directory_and_read_only) {
    Tree tree;
    const unsigned long kInvalid   = 0xFFFFFFFFul;
    const unsigned long kDirectory = 0x10;
    const unsigned long kReadOnly  = 0x01;

    CHECK_EQ(__getfileattr("SYSTEM"), kDirectory);
    CHECK_EQ(__getfileattr("ACT1.POD"), 0ul);
    CHECK_EQ(__getfileattr("no_such_file"), kInvalid);

    std::error_code ec;
    fs::permissions(fs::path("ACT1.POD"), fs::perms::owner_write,
                    fs::perm_options::remove, ec);
    CHECK_EQ(__getfileattr("ACT1.POD"), kReadOnly);
    // Put it back so the tree can be removed.
    fs::permissions(fs::path("ACT1.POD"), fs::perms::owner_write,
                    fs::perm_options::add, ec);
}

// -----------------------------------------------------------------------------
// The find API, in Watcom's shape: a long handle, -1 for no more.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(finding_walks_every_match_then_stops) {
    Tree tree;
    long handle = _findfirst("save\\*.noc", nullptr);
    CHECK(handle != -1);

    // Two files match, so one first and one next, and then the end.
    CHECK_EQ(_findnext(handle, nullptr), 0);
    CHECK_EQ(_findnext(handle, nullptr), -1);
    // Still the end however many times it is asked.
    CHECK_EQ(_findnext(handle, nullptr), -1);
    CHECK_EQ(_findclose(handle), 0);
}

NOCTURNE_TEST(finding_nothing_says_so_at_the_start) {
    Tree tree;
    CHECK_EQ(_findfirst("*.nothing", nullptr), -1);
    CHECK_EQ(_findfirst("no_such_dir\\*", nullptr), -1);

    // -1 is what _findfirst just returned, so it is the value most likely to be
    // passed back here by a caller that did not check. It is not a handle, and
    // walking it used to be a fault rather than an answer.
    CHECK_EQ(_findnext(-1, nullptr), -1);
    CHECK_EQ(_findnext(0, nullptr), -1);
    CHECK_EQ(_findclose(-1), -1);
    CHECK_EQ(_findclose(0), -1);
}

NOCTURNE_TEST(the_pattern_ignores_case_and_the_directory_does_not) {
    Tree tree;
    // The last component is a pattern and is matched without case, so a spec
    // shouting at a lower-case file finds it.
    long handle = _findfirst("save\\*.NOC", nullptr);
    CHECK(handle != -1);
    CHECK_EQ(_findclose(handle), 0);

    // The directory is used as spelled. This is what the POSIX version did too —
    // it opened the directory it was given — so it is not a change, but it is
    // worth writing down: on Windows the whole path would be found whatever its
    // case, and here only the last part is. Nothing in the game has needed the
    // difference, and a caller that does can resolve the path first.
    CHECK_EQ(_findfirst("SAVE\\*.noc", nullptr), -1);
}

NOCTURNE_TEST_MAIN()
