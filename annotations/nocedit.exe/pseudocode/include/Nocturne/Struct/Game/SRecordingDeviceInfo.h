#pragma once

// Structure: SRecordingDeviceInfo
// Ghidra size: 0x108 (264 bytes)
typedef struct SRecordingDeviceInfo {
    char device_name[256]; // 0x0
    int api_type; // 0x100
    int device_id; // 0x104
} SRecordingDeviceInfo;

