// =============================================================================
// HOST MEMORY — what the machine has, and the 32-bit answer the game gets
// =============================================================================
//
// The game reads GlobalMemoryStatus into signed ints and warns below 60 MB of
// RAM and 200 MB of page file, so what matters is that real figures never come
// out negative or zero. The MEMORYSTATUS policy is checked on figures chosen
// here; the host itself only for being self-consistent, since its numbers are
// whatever the machine running the test has.

#include "core/host_memory.h"
#include "nocturne_test.h"

#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>

namespace {

namespace fs = std::filesystem;

const SIZE_T kIntMax = 0x7FFFFFFF;
const unsigned long long kMegabyte = 1024ull * 1024;

// A meminfo-format file with the given contents, removed with the object.
struct Meminfo {
    fs::path path;
    explicit Meminfo(const std::string &contents) {
        std::error_code ec;
        path = fs::temp_directory_path(ec) / "nocturne_host_memory_meminfo";
        std::ofstream(path.string().c_str()) << contents;
    }
    ~Meminfo() {
        std::error_code ec;
        fs::remove(path, ec);
    }
};

HostMemory figures(unsigned long long total, unsigned long long avail,
                   unsigned long long total_commit, unsigned long long avail_commit) {
    HostMemory memory;
    memory.total_phys = total;
    memory.avail_phys = avail;
    memory.total_commit = total_commit;
    memory.avail_commit = avail_commit;
    return memory;
}

} // namespace

// -----------------------------------------------------------------------------
// MemAvailable, read from a file in /proc/meminfo's format.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(available_memory_is_read_in_kilobytes_and_returned_in_bytes) {
    Meminfo meminfo("MemTotal:       16000000 kB\n"
                    "MemFree:         1000000 kB\n"
                    "MemAvailable:    8000000 kB\n"
                    "Buffers:          200000 kB\n");
    CHECK_EQ(nocturne_meminfo_available(meminfo.path.string().c_str()), 8000000ull * 1024);
}

NOCTURNE_TEST(a_meminfo_that_does_not_say_what_is_available_reads_as_zero) {
    Meminfo none("MemTotal: 16000000 kB\nMemFree: 1000000 kB\n");
    CHECK_EQ(nocturne_meminfo_available(none.path.string().c_str()), 0ull);
}

NOCTURNE_TEST(an_unreadable_available_line_reads_as_zero) {
    Meminfo garbled("MemAvailable: plenty\nMemAvailable: 5 kB\n");
    CHECK_EQ(nocturne_meminfo_available(garbled.path.string().c_str()), 0ull);
}

NOCTURNE_TEST(a_missing_meminfo_reads_as_zero) {
    CHECK_EQ(nocturne_meminfo_available("no_such_dir/meminfo"), 0ull);
}

// -----------------------------------------------------------------------------
// The host. Whatever the machine has, the figures hang together.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(the_host_reports_memory_it_has) {
    const HostMemory memory = nocturne_host_memory();
    CHECK(memory.total_phys > 0);
    CHECK(memory.avail_phys > 0);
    CHECK(memory.avail_phys <= memory.total_phys);
    CHECK(memory.total_commit >= memory.total_phys);
    CHECK(memory.avail_commit >= memory.avail_phys);
}

// Where MemAvailable cannot be read, free memory stands in for it rather than
// nothing, which the game would warn about on every start.
NOCTURNE_TEST(without_meminfo_the_host_still_reports_memory_available) {
    const HostMemory memory = nocturne_host_memory("no_such_dir/meminfo");
    CHECK(memory.total_phys > 0);
    CHECK(memory.avail_phys > 0);
    CHECK(memory.avail_commit >= memory.avail_phys);
}

// -----------------------------------------------------------------------------
// MEMORYSTATUS. 32-bit fields the game reads as signed.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(figures_that_fit_are_reported_as_they_are) {
    _MEMORYSTATUS status;
    nocturne_memory_status(
        figures(512 * kMegabyte, 128 * kMegabyte, 1024 * kMegabyte, 256 * kMegabyte), &status);
    CHECK_EQ(status.dwLength, (DWORD)sizeof(_MEMORYSTATUS));
    CHECK_EQ(status.dwTotalPhys, (SIZE_T)(512 * kMegabyte));
    CHECK_EQ(status.dwAvailPhys, (SIZE_T)(128 * kMegabyte));
    CHECK_EQ(status.dwTotalPageFile, (SIZE_T)(1024 * kMegabyte));
    CHECK_EQ(status.dwAvailPageFile, (SIZE_T)(256 * kMegabyte));
    CHECK_EQ(status.dwMemoryLoad, 75u);
    // The address space of a 32-bit process, whatever the machine.
    CHECK_EQ(status.dwTotalVirtual, kIntMax);
    CHECK_EQ(status.dwAvailVirtual, kIntMax);
}

// Past INT_MAX a field would read negative and trip the low-memory warnings.
NOCTURNE_TEST(figures_past_int_max_saturate_rather_than_go_negative) {
    _MEMORYSTATUS status;
    const unsigned long long lots = 64ull * 1024 * kMegabyte;
    nocturne_memory_status(figures(lots, lots / 2, lots * 2, lots), &status);
    CHECK_EQ(status.dwTotalPhys, kIntMax);
    CHECK_EQ(status.dwAvailPhys, kIntMax);
    CHECK_EQ(status.dwTotalPageFile, kIntMax);
    CHECK_EQ(status.dwAvailPageFile, kIntMax);
    // The load is worked out from the real figures, not the clamped ones.
    CHECK_EQ(status.dwMemoryLoad, 50u);
}

NOCTURNE_TEST(the_load_is_zero_when_it_cannot_be_worked_out) {
    _MEMORYSTATUS status;
    nocturne_memory_status(figures(0, 0, 0, 0), &status);
    CHECK_EQ(status.dwMemoryLoad, 0u);
    // All of it free, or more free than there is: nothing in use.
    nocturne_memory_status(figures(100 * kMegabyte, 100 * kMegabyte, 0, 0), &status);
    CHECK_EQ(status.dwMemoryLoad, 0u);
    nocturne_memory_status(figures(100 * kMegabyte, 200 * kMegabyte, 0, 0), &status);
    CHECK_EQ(status.dwMemoryLoad, 0u);
}

NOCTURNE_TEST_MAIN()
