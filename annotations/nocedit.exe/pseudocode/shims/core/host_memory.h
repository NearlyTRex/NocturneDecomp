#pragma once

// =============================================================================
// HOST MEMORY — how much memory the machine has, and what Win32 says about it
// =============================================================================
//
// The one question in the shims with no portable answer: every host is asked
// differently, so this is the place that selects on the platform. What the game
// sees of it is GlobalMemoryStatus, whose 32-bit fields nocturne_memory_status
// fills from these figures.

#include "system/kernel32.h" // _MEMORYSTATUS

struct HostMemory {
    unsigned long long total_phys;
    unsigned long long avail_phys;
    unsigned long long total_commit; // Windows' commit limit: RAM plus backing
    unsigned long long avail_commit;
};

// The machine's figures. On Linux, available memory is MemAvailable from
// meminfo_path, or free plus buffers when that file does not say.
HostMemory nocturne_host_memory(const char *meminfo_path = "/proc/meminfo");

// MemAvailable from a /proc/meminfo-format file, in bytes; 0 when the file is
// missing or has no readable MemAvailable line.
unsigned long long nocturne_meminfo_available(const char *meminfo_path);

// GlobalMemoryStatus's answer for those figures.
void nocturne_memory_status(const HostMemory &memory, _MEMORYSTATUS *out);
