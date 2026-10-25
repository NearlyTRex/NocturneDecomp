// =============================================================================
// WATCOM PATH ROOTS — a read-only install with a writable directory beside it
// =============================================================================
//
// The arrangement a console package or a sandboxed app has: the game's files in
// one directory that cannot be written, saves and settings in another. Each case
// builds both, asks for a path the way the game would, and checks where it lands.

#include "core/file_search.h"
#include "nocturne_test.h"
#include "system/watcom.h"
#include "watcom/path.h"

#include <filesystem>
#include <fstream>
#include <iterator>
#include <string>
#include <system_error>

namespace {

namespace fs = std::filesystem;

struct Install {
    fs::path base;
    fs::path data;
    fs::path user;

    Install() {
        std::error_code ec;
        base = fs::temp_directory_path(ec) / fs::path("nocturne_path_roots_test");
        fs::remove_all(base, ec);
        data = base / "data";
        user = base / "user";
        fs::create_directories(data / "SYSTEM", ec);
        fs::create_directories(data / "save", ec);
        fs::create_directories(user, ec);
        write(data / "SYSTEM" / "nocturne.ini", "shipped");
        write(data / "save" / "SLOT01.NOC", "shipped");
        write(data / "ACT1.POD", "pod");
        watcom_set_path_roots({data.generic_string(), user.generic_string()});
    }

    ~Install() {
        watcom_set_path_roots({});
        std::error_code ec;
        fs::remove_all(base, ec);
    }

    static void write(const fs::path &at, const char *text) {
        std::ofstream out(at.string().c_str());
        out << text;
    }

    static std::string read(const std::string &at) {
        std::ifstream in(at.c_str());
        return std::string(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
    }

    std::string in_user(const char *relative) const {
        return (user / relative).generic_string();
    }
    std::string in_data(const char *relative) const {
        return (data / relative).generic_string();
    }
};

} // namespace

NOCTURNE_TEST(a_read_finds_the_shipped_file_in_any_case) {
    Install install;
    // The same file, not the same spelling: on Windows the name as asked already
    // opens it, so the resolver keeps it rather than reading the disk's.
    CHECK(fs::equivalent(watcom_resolve_fs_path(".\\system\\NOCTURNE.INI"),
                         install.in_data("SYSTEM/nocturne.ini")));
    CHECK(fs::equivalent(watcom_resolve_fs_path("act1.pod"), install.in_data("ACT1.POD")));
}

NOCTURNE_TEST(a_write_lands_in_the_user_directory_and_leaves_the_install_alone) {
    Install install;
    const std::string target =
        watcom_resolve_fs_path(".\\system\\nocturne.ini", WatcomPathUse::Write);
    // Spelled as asked: the user directory had no system directory to match.
    CHECK_EQ(target, install.in_user("system/nocturne.ini"));
    // Copied across first, so an append or an in-place rewrite starts from it.
    CHECK_EQ(Install::read(target), std::string("shipped"));
    Install::write(target, "changed");
    CHECK_EQ(Install::read(install.in_data("SYSTEM/nocturne.ini")), std::string("shipped"));
}

NOCTURNE_TEST(a_written_file_is_the_one_read_back) {
    Install install;
    Install::write(watcom_resolve_fs_path("save\\SLOT01.NOC", WatcomPathUse::Write), "mine");
    CHECK_EQ(Install::read(watcom_resolve_fs_path("save\\slot01.noc")), std::string("mine"));
}

NOCTURNE_TEST(a_new_file_gets_its_directories_made_in_the_user_directory) {
    Install install;
    const std::string target =
        watcom_resolve_fs_path("save\\quicksavedgame.noc", WatcomPathUse::Write);
    CHECK_EQ(target, install.in_user("save/quicksavedgame.noc"));
    std::error_code ec;
    CHECK(fs::is_directory(install.user / "save", ec));
    CHECK(!fs::exists(fs::path(target), ec));
}

// The game's startup checks it can change stderr.txt's mode and quits when it
// cannot, so the file has to be found where the reads find it, on every
// platform.
NOCTURNE_TEST(a_mode_change_finds_the_file_in_the_data_directory) {
    Install install;
    CHECK_EQ(_chmod("act1.pod", 0x1c0), 0);
    CHECK_EQ(__getfileattr("ACT1.POD") & 0x01ul, 0ul);
}

NOCTURNE_TEST(an_absolute_path_ignores_the_roots) {
    Install install;
    const std::string absolute = install.in_data("ACT1.POD");
    CHECK_EQ(watcom_resolve_fs_path(absolute.c_str(), WatcomPathUse::Write), absolute);
}

NOCTURNE_TEST(a_listing_covers_both_directories_once) {
    Install install;
    Install::write(watcom_resolve_fs_path("save\\SLOT01.NOC", WatcomPathUse::Write), "mine");
    Install::write(watcom_resolve_fs_path("save\\SLOT02.NOC", WatcomPathUse::Write), "mine");
    const std::vector<std::string> found = nocturne_find_files("save\\*.noc");
    CHECK_EQ(found.size(), (size_t)2);
    if (found.size() == 2) {
        CHECK_EQ(found[0], std::string("save/SLOT01.NOC"));
        CHECK_EQ(found[1], std::string("save/SLOT02.NOC"));
    }
}

// A file already in the user directory is the one written: the shipped copy is
// brought across only the first time.
NOCTURNE_TEST(a_file_already_written_is_not_copied_over_again) {
    Install install;
    Install::write(watcom_resolve_fs_path("system\\nocturne.ini", WatcomPathUse::Write), "mine");
    const std::string again = watcom_resolve_fs_path("system\\nocturne.ini", WatcomPathUse::Write);
    CHECK_EQ(Install::read(again), std::string("mine"));
}

// With only a user directory, what it does not have is looked for where the
// game runs, and that is what a first write copies from.
NOCTURNE_TEST(a_user_directory_alone_falls_back_to_the_working_directory) {
    Install install;
    std::error_code ec;
    const fs::path previous = fs::current_path(ec);
    fs::current_path(install.data, ec);
    watcom_set_path_roots({"", install.user.generic_string()});

    CHECK(fs::equivalent(watcom_resolve_fs_path("act1.pod"), install.in_data("ACT1.POD")));
    const std::string target = watcom_resolve_fs_path("system\\nocturne.ini", WatcomPathUse::Write);
    CHECK_EQ(target, install.in_user("system/nocturne.ini"));
    CHECK_EQ(Install::read(target), std::string("shipped"));
    const std::vector<std::string> dirs = watcom_resolve_fs_dirs("save");
    CHECK_EQ(dirs.size(), (size_t)2);
    if (dirs.size() == 2) {
        CHECK_EQ(dirs[0], install.in_user("save"));
        CHECK_EQ(dirs[1], std::string("save"));
    }
    fs::current_path(previous, ec);
}

// With only a data directory, there is nowhere to prefer and one place to list.
NOCTURNE_TEST(a_data_directory_alone_is_the_only_place) {
    Install install;
    watcom_set_path_roots({install.data.generic_string(), ""});
    CHECK(fs::equivalent(watcom_resolve_fs_path("act1.pod"), install.in_data("ACT1.POD")));
    const std::vector<std::string> dirs = watcom_resolve_fs_dirs("SAVE");
    CHECK_EQ(dirs.size(), (size_t)1);
    if (dirs.size() == 1)
        CHECK(fs::equivalent(dirs[0], install.in_data("save")));
}

// "." is the root itself, and no directory at all lists both roots whole. A name
// that only starts with a dot is an ordinary name under them.
NOCTURNE_TEST(the_current_directory_is_each_root_itself) {
    Install install;
    CHECK_EQ(watcom_resolve_fs_path("."), install.user.generic_string());
    CHECK_EQ(watcom_resolve_fs_path(".hidden"), install.in_data(".hidden"));
    const std::vector<std::string> dirs = watcom_resolve_fs_dirs(nullptr);
    CHECK_EQ(dirs.size(), (size_t)2);
    if (dirs.size() == 2) {
        CHECK_EQ(dirs[0], install.user.generic_string());
        CHECK_EQ(dirs[1], install.data.generic_string());
    }
}

// A drive letter makes a path absolute, either case; anything else before a
// colon is an ordinary name and goes under the roots.
NOCTURNE_TEST(a_drive_letter_is_a_letter_and_a_colon) {
    Install install;
    CHECK_EQ(watcom_resolve_fs_path("C:\\games\\x"), std::string("C:/games/x"));
    CHECK_EQ(watcom_resolve_fs_path("c:\\games\\x"), std::string("c:/games/x"));
    // Joined as strings: a Windows path library reads any "X:" as a drive.
    const std::string data = install.data.generic_string();
    CHECK_EQ(watcom_resolve_fs_path("1:\\x"), data + "/1:/x");
    CHECK_EQ(watcom_resolve_fs_path("{:\\x"), data + "/{:/x");
}

// A read that found its file is answered the same way until something could
// have changed it: a copy put in the user directory behind the resolver's back
// is not seen until the game writes, or the roots are set again.
NOCTURNE_TEST(a_found_read_holds_until_a_write_or_new_roots) {
    Install install;
    CHECK(fs::equivalent(watcom_resolve_fs_path("act1.pod"), install.in_data("ACT1.POD")));
    Install::write(install.user / "ACT1.POD", "mine");
    CHECK(fs::equivalent(watcom_resolve_fs_path("act1.pod"), install.in_data("ACT1.POD")));

    watcom_resolve_fs_path("save\\other.noc", WatcomPathUse::Write);
    CHECK(fs::equivalent(watcom_resolve_fs_path("act1.pod"), install.in_user("ACT1.POD")));

    std::error_code ec;
    fs::remove(install.user / "ACT1.POD", ec);
    watcom_set_path_roots({install.data.generic_string(), install.user.generic_string()});
    CHECK(fs::equivalent(watcom_resolve_fs_path("act1.pod"), install.in_data("ACT1.POD")));
}

// A read that found nothing is asked again, so a file that appears is found.
NOCTURNE_TEST(a_missing_read_is_looked_for_again) {
    Install install;
    std::error_code ec;
    CHECK(!fs::exists(fs::path(watcom_resolve_fs_path("save\\later.noc")), ec));
    Install::write(install.data / "save" / "later.noc", "late");
    CHECK(fs::equivalent(watcom_resolve_fs_path("save\\later.noc"),
                         install.in_data("save/later.noc")));
}

// Past its limit the store starts over rather than growing, and what it forgot
// is worked out again.
NOCTURNE_TEST(a_full_store_starts_over) {
    Install install;
    std::string spelling = "act1.pod";
    for (int i = 0; i <= 1024; ++i) {
        watcom_resolve_fs_path(spelling.c_str());
        spelling = ".\\" + spelling;
    }
    Install::write(install.user / "ACT1.POD", "mine");
    CHECK(fs::equivalent(watcom_resolve_fs_path("act1.pod"), install.in_user("ACT1.POD")));
}

NOCTURNE_TEST(no_roots_is_the_working_directory) {
    watcom_set_path_roots({});
    CHECK_EQ(watcom_resolve_fs_path("no\\such\\file", WatcomPathUse::Write),
             std::string("no/such/file"));
    CHECK_EQ(watcom_resolve_fs_dirs("save").size(), (size_t)1);
}

NOCTURNE_TEST_MAIN()
