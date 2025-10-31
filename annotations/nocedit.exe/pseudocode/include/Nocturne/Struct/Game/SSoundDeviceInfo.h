#pragma once

// Structure: SSoundDeviceInfo
// Ghidra size: 0x118 (280 bytes)
typedef struct SSoundDeviceInfo {
    char device_name[256]; // 0x0
    int api_type; // 0x100
    int device_id; // 0x104
    DWORD device_value1; // 0x108
    int flags; // 0x10c
    DWORD device_guid; // 0x110
    DWORD device_value2; // 0x114
} SSoundDeviceInfo;

