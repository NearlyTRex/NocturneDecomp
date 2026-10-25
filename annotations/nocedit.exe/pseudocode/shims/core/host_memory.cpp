// =============================================================================
// HOST MEMORY — implementation
// =============================================================================
//
// See host_memory.h. Written so that a host nobody has tried still compiles and
// still starts the game.

#include "core/host_memory.h"

#include <stdint.h>
#include <stdio.h>
#include <string.h>

#if defined(__linux__)
#include <sys/sysinfo.h>
#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
#include <sys/sysctl.h>
#endif

// MemAvailable is the kernel's own estimate of what a new allocation could
// actually get. Linux counts reclaimable page cache as used, so free memory
// badly understates it — on a normally-warm machine it can sit under the 200 MB
// the game's swap warning tests against while gigabytes are in fact available.
unsigned long long nocturne_meminfo_available(const char *meminfo_path) {
    FILE *f = fopen(meminfo_path, "r");
    if (!f)
        return 0;
    char line[256];
    unsigned long long kb = 0;
    while (fgets(line, sizeof(line), f)) {
        if (strncmp(line, "MemAvailable:", 13) == 0) {
            if (sscanf(line + 13, "%llu", &kb) != 1)
                kb = 0;
            break;
        }
    }
    fclose(f);
    return kb * 1024ull;
}

#if defined(__linux__)

// sysinfo fails only for a bad pointer, which a local is not, and has set
// mem_unit since Linux 2.3.23, which added it.
HostMemory nocturne_host_memory(const char *meminfo_path) {
    struct sysinfo si;
    sysinfo(&si);
    HostMemory memory;
    const unsigned long long unit = si.mem_unit;
    memory.total_phys = (unsigned long long)si.totalram * unit;
    memory.avail_phys = nocturne_meminfo_available(meminfo_path);
    if (memory.avail_phys == 0) {
        memory.avail_phys =
            ((unsigned long long)si.freeram + (unsigned long long)si.bufferram) * unit;
    }
    // The page-file fields are Windows' commit limit and remaining commit,
    // which span RAM plus backing store — not the swap device alone. A swapless
    // host would otherwise report a 0-byte page file and trip the "runs best
    // with at least 200MB free" warning on every start.
    memory.total_commit = memory.total_phys + (unsigned long long)si.totalswap * unit;
    memory.avail_commit = memory.avail_phys + (unsigned long long)si.freeswap * unit;
    return memory;
}

#else

// The figures used when the host cannot be asked. Not zero: the game warns that
// it "runs best with at least 200MB free" and would say so on every start, and
// sizes caches from these. A modest machine is the safe thing to claim to be.
static HostMemory host_memory_fallback(void) {
    HostMemory memory;
    memory.total_phys = 256ull * 1024 * 1024;
    memory.avail_phys = 128ull * 1024 * 1024;
    memory.total_commit = 512ull * 1024 * 1024;
    memory.avail_commit = 512ull * 1024 * 1024;
    return memory;
}

#if defined(_WIN32)

// Declared here rather than included. <windows.h> would bring its own DWORD,
// HANDLE and MEMORYSTATUS, and system/kernel32.h has already defined all three
// with the layouts the decompiled binary expects — the two sets cannot coexist
// in one TU. One struct and one import is a smaller thing to own than that
// collision, and the layout is fixed ABI.
extern "C" {
struct NOC_MEMORYSTATUSEX {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    unsigned long long ullTotalPhys;
    unsigned long long ullAvailPhys;
    unsigned long long ullTotalPageFile;
    unsigned long long ullAvailPageFile;
    unsigned long long ullTotalVirtual;
    unsigned long long ullAvailVirtual;
    unsigned long long ullAvailExtendedVirtual;
};
__declspec(dllimport) int __stdcall GlobalMemoryStatusEx(NOC_MEMORYSTATUSEX *);
}

// Straight through: the game is asking a Windows question and this is a
// Windows host.
HostMemory nocturne_host_memory(const char *meminfo_path) {
    (void)meminfo_path;
    NOC_MEMORYSTATUSEX status;
    status.dwLength = sizeof(status);
    if (!GlobalMemoryStatusEx(&status))
        return host_memory_fallback();
    HostMemory memory;
    memory.total_phys = status.ullTotalPhys;
    memory.avail_phys = status.ullAvailPhys;
    memory.total_commit = status.ullTotalPageFile;
    memory.avail_commit = status.ullAvailPageFile;
    return memory;
}

#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)

// The BSDs and macOS answer through sysctl. Total is asked for directly;
// available is not reported in a form that means the same thing, so it is left
// as a fraction of total rather than invented more precisely than it is known.
HostMemory nocturne_host_memory(const char *meminfo_path) {
    (void)meminfo_path;
    uint64_t total = 0;
    size_t length = sizeof(total);
#if defined(__APPLE__)
    const char *name = "hw.memsize";
#else
    const char *name = "hw.physmem";
#endif
    if (sysctlbyname(name, &total, &length, NULL, 0) != 0 || total == 0) {
        return host_memory_fallback();
    }
    HostMemory memory;
    memory.total_phys = total;
    memory.avail_phys = total / 2;
    memory.total_commit = total;
    memory.avail_commit = total / 2;
    return memory;
}

#else

// A host nobody has tried yet: the figures say a modest machine.
HostMemory nocturne_host_memory(const char *meminfo_path) {
    (void)meminfo_path;
    return host_memory_fallback();
}

#endif
#endif

// Every MEMORYSTATUS field is capped at INT_MAX, because the game copies
// dwTotalPhys and dwAvailPageFile into `int` globals (g_TotalPhysicalMemory /
// g_AvailableSwapSpace) and then, in initializeGameSystems, compares them
// SIGNED against 60 MB and 200 MB to decide whether to raise the "Nocturne
// requires at least 64MB of system RAM" warning. A value past INT_MAX arrives
// negative, trips both checks, and prints a negative megabyte figure — which
// is exactly how this warning misfires on modern Windows, where the same
// 32-bit-era API is documented to report -1 above 4 GB. Saturating keeps the
// value positive and comfortably over both thresholds.
static SIZE_T clamp(unsigned long long bytes) {
    const unsigned long long cap = 0x7FFFFFFFull;
    return (SIZE_T)(bytes > cap ? cap : bytes);
}

void nocturne_memory_status(const HostMemory &memory, _MEMORYSTATUS *out) {
    memset(out, 0, sizeof(_MEMORYSTATUS));
    out->dwLength = sizeof(_MEMORYSTATUS);
    out->dwTotalPhys = clamp(memory.total_phys);
    out->dwAvailPhys = clamp(memory.avail_phys);
    out->dwTotalPageFile = clamp(memory.total_commit);
    out->dwAvailPageFile = clamp(memory.avail_commit);
    // Address space, not memory: the 2 GB user half of a 32-bit process.
    out->dwTotalVirtual = 0x7FFFFFFF;
    out->dwAvailVirtual = 0x7FFFFFFF;
    out->dwMemoryLoad =
        (memory.total_phys != 0 && memory.avail_phys < memory.total_phys)
            ? (DWORD)(((memory.total_phys - memory.avail_phys) * 100) / memory.total_phys)
            : 0;
}
