// =============================================================================
// PATH ROOTS — where a run reads the game from and writes to
// =============================================================================
//
// This directory's build of path_roots.cpp takes the platform's data directory
// from NOCTURNE_TEST_DEFAULT_DATA_DIR, which each case sets to "default_data",
// made absolute against the working directory, and has no user directory: the
// arrangement where one folder holds both. Each case runs in a directory of its
// own and reads back what was handed to the resolver.

#include "core/path_roots.h"
#include "message_support.h"
#include "nocturne_test.h"
#include "watcom/path.h"

#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>

namespace {

namespace fs = std::filesystem;

void set_env(const char *name, const char *value) {
#if defined(_WIN32)
    _putenv_s(name, value != nullptr ? value : "");
#else
    if (value != nullptr) {
        setenv(name, value, 1);
    } else {
        unsetenv(name);
    }
#endif
}

struct Run {
    fs::path base;

    Run() {
        std::error_code ec;
        base = fs::temp_directory_path(ec) / "nocturne_init_path_roots_test";
        fs::current_path(fs::temp_directory_path(ec), ec);
        fs::remove_all(base, ec);
        fs::create_directories(base, ec);
        fs::current_path(base, ec);
        base = fs::current_path(ec);
        set_env("NOCTURNE_DATA_DIR", nullptr);
        set_env("NOCTURNE_USER_DIR", nullptr);
        set_env("NOCTURNE_TEST_DEFAULT_DATA_DIR", "default_data");
        watcom_set_path_roots({});
    }

    ~Run() {
        set_env("NOCTURNE_DATA_DIR", nullptr);
        set_env("NOCTURNE_USER_DIR", nullptr);
        watcom_set_path_roots({});
    }

    std::string at(const char *relative) const {
        return (base / relative).generic_string();
    }

    void make(const char *relative) const {
        std::error_code ec;
        fs::create_directories(base / relative, ec);
    }

    void write(const char *relative, const std::string &text) const {
        std::ofstream out((base / relative).string().c_str(), std::ios::binary);
        out << text;
    }

    template <int N>
    static void init(const char *(&args)[N]) {
        nocturne_init_path_roots(N, const_cast<char **>(args));
    }
};

} // namespace

// Nothing given: the compiled-in data directory, and no user directory.
NOCTURNE_TEST(with_nothing_given_the_platform_default_is_the_data_directory) {
    Run run;
    const char *args[] = {"nocturne"};
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, run.at("default_data"));
    CHECK_EQ(watcom_path_roots().user, std::string());
}

// Both spellings of an option, made absolute and without a trailing slash; the
// user directory is made if it is not there.
NOCTURNE_TEST(the_command_line_names_both_directories) {
    Run run;
    const char *args[] = {"nocturne",   nullptr, "--data-directory", "x",
                          "--data-dir", "game/", "--user-dir=saves"};
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, run.at("game"));
    CHECK_EQ(watcom_path_roots().user, run.at("saves"));
    std::error_code ec;
    CHECK(fs::is_directory(run.base / "saves", ec));
}

// An option with nothing after it is not given; an empty one is the working
// directory, which with no user directory leaves nothing to report.
NOCTURNE_TEST(an_option_without_a_value_is_not_given_and_an_empty_one_is_the_working_directory) {
    Run run;
    const char *trailing[] = {"nocturne", "--data-dir"};
    Run::init(trailing);
    CHECK_EQ(watcom_path_roots().data, run.at("default_data"));

    const char *empty[] = {"nocturne", "--data-dir="};
    Run::init(empty);
    CHECK_EQ(watcom_path_roots().data, std::string());
    CHECK_EQ(watcom_path_roots().user, std::string());

    const char *user_only[] = {"nocturne", "--data-dir=", "--user-dir", "saves"};
    Run::init(user_only);
    CHECK_EQ(watcom_path_roots().data, std::string());
    CHECK_EQ(watcom_path_roots().user, run.at("saves"));
}

// A platform with no data directory of its own runs from the working
// directory, and has nowhere to look for a data_dir.txt.
NOCTURNE_TEST(without_a_platform_default_the_working_directory_is_the_data_directory) {
    Run run;
    set_env("NOCTURNE_TEST_DEFAULT_DATA_DIR", nullptr);
    const char *args[] = {"nocturne"};
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, std::string());
    CHECK_EQ(watcom_path_roots().user, std::string());
}

#if !defined(_WIN32)
// The root keeps its slash.
NOCTURNE_TEST(the_root_directory_keeps_its_slash) {
    Run run;
    const char *args[] = {"nocturne", "--data-dir", "/"};
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, std::string("/"));
}
#endif

// The environment stands in for the command line, which wins over it.
NOCTURNE_TEST(the_environment_names_what_the_command_line_does_not) {
    Run run;
    set_env("NOCTURNE_DATA_DIR", "from_env");
    set_env("NOCTURNE_USER_DIR", "user_env");
    const char *args[] = {"nocturne", "--user-dir", "user_cli"};
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, run.at("from_env"));
    CHECK_EQ(watcom_path_roots().user, run.at("user_cli"));
}

// One directory as both is the default arrangement: no overlay.
NOCTURNE_TEST(the_same_directory_for_both_has_no_user_directory) {
    Run run;
    const char *args[] = {"nocturne", "--data-dir", "game", "--user-dir", "game/"};
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, run.at("game"));
    CHECK_EQ(watcom_path_roots().user, std::string());
}

// data_dir.txt in the user directory names where the game files are, its line
// ending and trailing space dropped.
NOCTURNE_TEST(a_data_dir_file_in_the_user_directory_names_the_game_files) {
    Run run;
    run.make("install");
    run.make("saves");
    run.write("saves/data_dir.txt", run.at("install") + " \r\n");
    const char *args[] = {"nocturne", "--user-dir", "saves"};
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, run.at("install"));
    CHECK_EQ(watcom_path_roots().user, run.at("saves"));
}

// A file that names nothing there, or nothing at all, is passed over.
NOCTURNE_TEST(a_data_dir_file_naming_no_directory_is_passed_over) {
    Run run;
    run.make("saves");
    run.write("saves/data_dir.txt", run.at("gone") + "\n");
    const char *args[] = {"nocturne", "--user-dir", "saves"};
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, run.at("default_data"));

    run.write("saves/data_dir.txt", "");
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, run.at("default_data"));

    run.write("saves/data_dir.txt", "\n");
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, run.at("default_data"));
}

// With no user directory it is looked for in the default data directory, which
// then keeps what the game writes.
NOCTURNE_TEST(a_data_dir_file_in_the_default_folder_moves_only_the_reads) {
    Run run;
    run.make("install");
    run.make("default_data");
    run.write("default_data/data_dir.txt", run.at("install"));
    const char *args[] = {"nocturne"};
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, run.at("install"));
    CHECK_EQ(watcom_path_roots().user, run.at("default_data"));
}

// A data directory that was asked for is the one used.
NOCTURNE_TEST(a_data_directory_asked_for_wins_over_a_data_dir_file) {
    Run run;
    run.make("install");
    run.make("saves");
    run.write("saves/data_dir.txt", run.at("install"));
    const char *args[] = {"nocturne", "--data-dir", "chosen", "--user-dir", "saves"};
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, run.at("chosen"));
}

#if !defined(_WIN32)
// With no working directory to resolve against, a relative directory is kept
// as given.
NOCTURNE_TEST(a_relative_directory_with_no_working_directory_is_kept_as_given) {
    Run run;
    run.make("doomed");
    std::error_code ec;
    fs::current_path(run.base / "doomed", ec);
    fs::remove(run.base / "doomed", ec);
    const char *args[] = {"nocturne", "--data-dir", "game"};
    Run::init(args);
    CHECK_EQ(watcom_path_roots().data, std::string("game"));
    fs::current_path(run.base, ec);
}
#endif

// -----------------------------------------------------------------------------
// Whether the game is there
// -----------------------------------------------------------------------------

// A .pod, in any case, is the game; nothing is said.
NOCTURNE_TEST(a_data_directory_with_a_pod_has_the_game) {
    Run run;
    run.make("game");
    run.write("game/ACT1.Pod", "pod");
    message_support::shown = 0;
    const char *args[] = {"nocturne", "--data-dir", "game"};
    Run::init(args);
    CHECK_EQ(nocturne_check_game_data(), 1);
    CHECK_EQ(message_support::shown, 0);
}

// Without one it says where it looked; a data directory asked for is the one
// named, with no data_dir.txt to suggest.
NOCTURNE_TEST(without_a_pod_it_says_where_it_looked) {
    Run run;
    run.make("game");
    run.write("game/readme.txt", "not the game");
    message_support::shown = 0;
    const char *args[] = {"nocturne", "--data-dir", "game"};
    Run::init(args);
    CHECK_EQ(nocturne_check_game_data(), 0);
    CHECK_EQ(message_support::shown, 1);
    CHECK(message_support::last.find(run.at("game")) != std::string::npos);
    CHECK(message_support::last.find("data_dir.txt") == std::string::npos);
}

// Where a data_dir.txt would have been read, it says so and where.
NOCTURNE_TEST(without_a_pod_it_names_where_a_pointer_would_go) {
    Run run;
    run.make("saves");
    const char *args[] = {"nocturne", "--user-dir", "saves"};
    Run::init(args);
    CHECK_EQ(nocturne_check_game_data(), 0);
    CHECK(message_support::last.find("data_dir.txt in:\n\n" + run.at("saves")) !=
          std::string::npos);
}

#if !defined(_WIN32)
// With no data directory the game is where it was started.
NOCTURNE_TEST(with_no_data_directory_the_working_directory_is_looked_in) {
    Run run;
    run.write("ACT1.POD", "pod");
    const char *args[] = {"nocturne", "--data-dir="};
    Run::init(args);
    CHECK_EQ(nocturne_check_game_data(), 1);
}
#endif

NOCTURNE_TEST_MAIN()
