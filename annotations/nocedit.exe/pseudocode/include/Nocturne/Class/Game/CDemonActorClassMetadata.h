#pragma once

// Structure: CDemonActorClassMetadata
// Ghidra size: 0x30 (48 bytes)
typedef struct CDemonActorClassMetadata {
    CVector3f runtime_vector1; // 0x0
    CVector3f runtime_vector2; // 0xc
    int runtime_flags; // 0x18
    char field_28[8]; // 0x1c
    CDemonActor* next_actor; // 0x24
    char field_40[4]; // 0x28
    CDemonActor_vtable* vtable; // 0x2c
} CDemonActorClassMetadata;

