// =============================================================================
// WATCOM PATH ROOTS — a read-only install with a writable directory beside it
// =============================================================================
//
// The arrangement a console package or a sandboxed app has: the game's files in
// one directory that cannot be written, saves and settings in another. Each case
// builds both, asks for a path the way the game would, and checks where it lands.

#include "nocturne_test.h"

#include "core/file_search.h"
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

    std::string in_user(const char *relative) const { return (user / relative).generic_string(); }
    std::string in_data(const char *relative) const { return (data / relative).generic_string(); }
};

}  // namespace

NOCTURNE_TEST(a_read_finds_the_shipped_file_in_any_case) {
    Install install;
    CHECK_EQ(watcom_resolve_fs_path(".\\system\\NOCTURNE.INI"),
             install.in_data("SYSTEM/nocturne.ini"));
    CHECK_EQ(watcom_resolve_fs_path("act1.pod"), install.in_data("ACT1.POD"));
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

NOCTURNE_TEST(no_roots_is_the_working_directory) {
    watcom_set_path_roots({});
    CHECK_EQ(watcom_resolve_fs_path("no\\such\\file", WatcomPathUse::Write),
             std::string("no/such/file"));
    CHECK_EQ(watcom_resolve_fs_dirs("save").size(), (size_t)1);
}

NOCTURNE_TEST_MAIN()
