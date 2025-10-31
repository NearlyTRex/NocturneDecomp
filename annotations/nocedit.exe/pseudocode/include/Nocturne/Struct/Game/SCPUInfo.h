#pragma once

// Structure: SCPUInfo
// Ghidra size: 0x14 (20 bytes)
typedef struct SCPUInfo {
    int family; // 0x0
    int model; // 0x4
    int stepping; // 0x8
    int is_intel; // 0xc
    int mmx_supported; // 0x10
} SCPUInfo;

