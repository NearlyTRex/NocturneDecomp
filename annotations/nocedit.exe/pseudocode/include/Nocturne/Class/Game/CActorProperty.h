#pragma once

// Structure: CActorProperty
// Ghidra size: 0xec (236 bytes)
typedef struct CActorProperty {
    int type; // 0x0
    char name[80]; // 0x4
    int field_54; // 0x54
    int field_58; // 0x58
    char field_92[12]; // 0x5c
    void* data1; // 0x68
    char field_108[124]; // 0x6c
    void* data2; // 0xe8
} CActorProperty;

