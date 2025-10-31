#pragma once

// CKeyFramedModelInstance - CORRECTED ANALYSIS
// Based on constructor and usage analysis
// Total size: 0x17c (380 bytes)
//
// This is a confirmed class (has Watcom type info)
// This is a lightweight reference object that points to the actual
// CKeyFramedModel data. Multiple instances can reference the same model.
//
// Analysis sources:
// - core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
// - core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00

typedef struct CKeyFramedModelInstance {
    // === INITIALIZATION FLAGS (0x000 - 0x077) ===
    // Offset 0x000: Array of 30 integers (120 bytes total)
    // Initialized to 1 by init function
    // Assembly: 00478d09 MOV [EAX],0x1 (loop fills 0x0 to 0x78)
    // Purpose: Likely per-part or per-frame flags/state
    // Could be:
    // - Part visibility flags (30 parts max in CKeyFramedModel)
    // - Frame state flags
    // - Cache validity flags
    int init_flags[30];  // 30 * 4 = 120 bytes

    // === MODEL NAME (0x078 - 0x0DB) ===
    // Offset 0x078: Model filename/identifier (100 bytes)
    // Used to look up the actual CKeyFramedModel
    // Assembly: 00478ce5 MOV byte ptr [EBX + 0x78],0x0 (null-terminate)
    // Assembly: 00478d06 ADD EDX,0x78 (used as loop terminator)
    char model_name[100];

    // === UNKNOWN REGION (0x0DC - 0x177) ===
    // Offset 0x0DC: Unknown data (156 bytes)
    // May include:
    // - Current frame index
    // - Animation state
    // - Transform matrices
    // - Cached render data
    // - Instance-specific overrides
    //
    // This region needs further analysis by examining usage
    // in rendering and animation functions
    char unknown_0xdc[156];

    // === MODEL POINTER (0x178 - 0x17B) ===
    // Offset 0x178: Pointer to the actual CKeyFramedModel data
    // Multiple instances can share the same model
    // Assembly: 00478cea MOV [EBX + 0x178],0x0 (initialized to NULL)
    CKeyFramedModel* model_ptr;

    // Total size: 0x17C (380 bytes)
} CKeyFramedModelInstance;

// Size verification:
// 0x000-0x077: 120 (init_flags: 30 * 4)
// 0x078-0x0DB: 100 (model_name)
// 0x0DC-0x177: 156 (unknown region)
// 0x178-0x17B: 4   (model_ptr)
// Total: 0x17C = 380 bytes ✓

// Usage pattern:
// - CKeyFramedModelInstance is embedded in actor objects
// - Contains instance-specific state and animation data
// - References shared CKeyFramedModel geometry/texture data
// - Allows multiple actors to use the same model efficiently
