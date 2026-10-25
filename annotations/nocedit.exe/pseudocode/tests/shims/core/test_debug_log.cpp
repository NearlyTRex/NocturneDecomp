// =============================================================================
// DEBUG LOG — one file per subsystem, written where the other writes go
// =============================================================================
//
// The logger keeps its open files for the life of the process, so these tests
// share one directory and one table of subsystems, in the order they run. A
// subsystem name is kept by pointer, so every new one here is a literal.

#include "core/debug_log.h"
#include "nocturne_test.h"

#include <filesystem>
#include <fstream>
#include <iterator>
#include <string>
#include <system_error>

namespace {

namespace fs = std::filesystem;

// The directory every test logs into, made once and entered by each.
const fs::path &log_dir() {
    static const fs::path dir = [] {
        std::error_code ec;
        const fs::path made = fs::temp_directory_path(ec) / "nocturne_debug_log_test";
        fs::remove_all(made, ec);
        fs::create_directories(made, ec);
        return made;
    }();
    std::error_code ec;
    fs::current_path(dir, ec);
    return dir;
}

std::string contents(const char *subsys) {
    std::ifstream in((log_dir() / (std::string("nocturne_") + subsys + ".log")).string().c_str());
    return std::string(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
}

bool has(const std::string &text, const char *part) {
    return text.find(part) != std::string::npos;
}

} // namespace

NOCTURNE_TEST(a_message_goes_to_its_subsystems_file_with_where_it_came_from) {
    log_dir();
    DLOG("alpha", "hello %d", 7);
    const std::string text = contents("alpha");
    CHECK(has(text, "[test_debug_log.cpp:"));
    CHECK(has(text, "hello 7"));
}

// Either separator ends a directory, so every host logs just the file's name.
NOCTURNE_TEST(a_source_path_is_cut_to_its_file_name) {
    CHECK_EQ(std::string(_dlog_leaf("D:\\src\\shims/core\\x.cpp")), std::string("x.cpp"));
    CHECK_EQ(std::string(_dlog_leaf("/src/y.cpp")), std::string("y.cpp"));
    CHECK_EQ(std::string(_dlog_leaf("z.cpp")), std::string("z.cpp"));
}

// The same name by another pointer is the same subsystem and the same file.
NOCTURNE_TEST(a_subsystem_is_its_name_not_its_pointer) {
    log_dir();
    char name[] = "alpha";
    DLOG(name, "second");
    const std::string text = contents("alpha");
    CHECK(has(text, "hello 7"));
    CHECK(has(text, "second"));
}

// The first few, then one in every so many, each numbered.
NOCTURNE_TEST(a_rate_limited_message_is_thinned_out) {
    log_dir();
    for (int i = 0; i < 10; ++i)
        DLOG_RL("beta", 2, 4, "tick");
    const std::string text = contents("beta");
    CHECK(has(text, "#1 tick"));
    CHECK(has(text, "#2 tick"));
    CHECK(!has(text, "#3 tick"));
    CHECK(has(text, "#4 tick"));
    CHECK(has(text, "#8 tick"));
    CHECK(!has(text, "#9 tick"));
}

NOCTURNE_TEST(warnings_and_errors_reach_the_debug_log) {
    log_dir();
    DWARN("careful %s", "now");
    DERROR("broken");
    const std::string text = contents("debug");
    CHECK(has(text, "[WARN  test_debug_log.cpp:"));
    CHECK(has(text, "careful now"));
    CHECK(has(text, "[ERROR test_debug_log.cpp:"));
    CHECK(has(text, "broken"));
}

// A log that cannot be opened costs the messages for it and nothing else.
NOCTURNE_TEST(a_log_that_cannot_be_opened_is_skipped) {
    log_dir();
    watcom_set_path_roots({"", "/nonexistent_nocturne_log_root/deeper"});
    DLOG("gamma", "lost");
    DLOG("gamma", "lost again");
    watcom_set_path_roots({});
    std::error_code ec;
    CHECK(!fs::exists(log_dir() / "nocturne_gamma.log", ec));
}

// The table is small and fixed; once it is full a new subsystem logs nowhere,
// and the ones already there carry on.
NOCTURNE_TEST(a_full_table_turns_new_subsystems_away) {
    log_dir();
    static const char *const names[] = {"s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8"};
    for (const char *name : names)
        DLOG(name, "filling");
    std::error_code ec;
    CHECK(!fs::exists(log_dir() / "nocturne_s8.log", ec));
    DLOG("alpha", "still here");
    CHECK(has(contents("alpha"), "still here"));
}

NOCTURNE_TEST_MAIN()
