// =============================================================================
// CRASH SIGNALS — the report a fault leaves where there is no core dump
// =============================================================================
//
// Where the platform file asks for it, each fault signal is caught: the report
// names the signal and the build, goes to stderr and to nocturne_crash.txt in
// the directory named for it, and the process still ends by that signal. Each
// case faults in a child the test forks, and reads what it left. Windows has
// its own handler (test_crash_report_app.cpp).

#include "core/crash_report.h"
#include "nocturne_test.h"

#if !defined(_WIN32)

#include <csignal>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <string>
#include <sys/wait.h>
#include <system_error>
#include <unistd.h>

namespace {

namespace fs = std::filesystem;

fs::path report_dir() {
    std::error_code ec;
    const fs::path dir = fs::temp_directory_path(ec) / "nocturne_crash_signals_test";
    fs::remove_all(dir, ec);
    fs::create_directories(dir, ec);
    return dir;
}

std::string read(const fs::path &file) {
    std::ifstream in(file.string().c_str());
    std::stringstream text;
    text << in.rdbuf();
    return text.str();
}

// The signal the child, with the handler on and `dir` named, ended by; with
// no stderr, if asked.
int fault_in_child(int sig, const std::string &dir, bool no_stderr = false) {
    const pid_t child = fork();
    if (child == 0) {
        if (no_stderr)
            close(STDERR_FILENO);
        g_nocturne_crash_signals = 1;
        nocturne_install_crash_handler("NocturneDecomp test-version");
        nocturne_crash_report_set_dir(dir.c_str());
        if (sig == SIGSEGV) {
            volatile int *nothing = nullptr;
            *nothing = 1;
        }
        raise(sig);
        _exit(0);
    }
    int status = 0;
    waitpid(child, &status, 0);
    return WIFSIGNALED(status) ? WTERMSIG(status) : 0;
}

} // namespace

// Each fault is named, and still ends the process.
NOCTURNE_TEST(each_fault_leaves_its_report_and_still_ends_the_process) {
    const struct {
        int sig;
        const char *name;
    } faults[] = {
        {SIGSEGV, "segmentation fault"},
        {SIGBUS, "bus error"},
        {SIGILL, "illegal instruction"},
        {SIGFPE, "floating-point exception"},
        {SIGABRT, "abort"},
    };
    for (const auto &fault : faults) {
        const fs::path dir = report_dir();
        CHECK_EQ(fault_in_child(fault.sig, dir.string()), fault.sig);
        const std::string report = read(dir / "nocturne_crash.txt");
        CHECK(report.find("Nocturne crash report\nNocturneDecomp test-version\n") == 0);
        CHECK(report.find("signal: " + std::to_string(fault.sig) + " (" + fault.name + ")") !=
              std::string::npos);
        CHECK(report.find("\nstack:\n") != std::string::npos);
    }
}

// With no directory, or one that is not there, it goes to stderr alone.
NOCTURNE_TEST(without_a_directory_the_report_is_stderr_alone) {
    CHECK_EQ(fault_in_child(SIGABRT, ""), SIGABRT);
    const fs::path dir = report_dir();
    CHECK_EQ(fault_in_child(SIGABRT, (dir / "missing").string()), SIGABRT);
    std::error_code ec;
    CHECK(!fs::exists(dir / "missing" / "nocturne_crash.txt", ec));
}

// With no stderr to write to, the file still has it.
NOCTURNE_TEST(without_stderr_the_file_still_has_the_report) {
    const fs::path dir = report_dir();
    CHECK_EQ(fault_in_child(SIGABRT, dir.string(), true), SIGABRT);
    CHECK(read(dir / "nocturne_crash.txt").find("signal: ") != std::string::npos);
}

// Off, as on the desktop, nothing is installed; a directory too long for the
// report's buffer is cut to it, and none is none.
NOCTURNE_TEST(off_nothing_is_installed) {
    g_nocturne_crash_signals = 0;
    nocturne_install_crash_handler(nullptr);
    nocturne_crash_report_set_dir(std::string(5000, 'd').c_str());
    nocturne_crash_report_set_dir(nullptr);

    const fs::path dir = report_dir();
    const pid_t child = fork();
    if (child == 0) {
        nocturne_install_crash_handler("off");
        nocturne_crash_report_set_dir(dir.string().c_str());
        raise(SIGABRT);
        _exit(0);
    }
    int status = 0;
    waitpid(child, &status, 0);
    CHECK(WIFSIGNALED(status) && WTERMSIG(status) == SIGABRT);
    std::error_code ec;
    CHECK(!fs::exists(dir / "nocturne_crash.txt", ec));
}

#else

NOCTURNE_TEST(windows_has_its_own_handler) {
    CHECK(true);
}

#endif

NOCTURNE_TEST_MAIN()
