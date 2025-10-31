#pragma once

// Structure: CPodAuditRecord
// Ghidra size: 0x138 (312 bytes)
typedef struct CPodAuditRecord {
    int day; // 0x0
    int month; // 0x4
    int year; // 0x8
    uint timestamp; // 0xc
    char status[8]; // 0x10
    int user_id; // 0x18
    int file_size; // 0x1c
    int checksum; // 0x20
    int padding; // 0x24
    char filename_path[256]; // 0x28
    char reserved[16]; // 0x128
} CPodAuditRecord;

