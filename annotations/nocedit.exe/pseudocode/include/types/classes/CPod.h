#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CPodFile.h"
#include "types/classes/CPod_vtable.h"
#include "types/funcdefs/CPod_dismount.h"
#include "types/funcdefs/CPod_findFile.h"
#include "types/funcdefs/CPod_load.h"
#include "types/funcdefs/CPod_mount.h"
#include "types/funcdefs/CPod_remount.h"
#include "types/structs/SFoundFileInfo.h"

// Structure: CPod
// Ghidra size: 0x198 (408 bytes)
typedef struct CPod {
    int pod_file_count; // 0x0
    struct CPodFile* pod_files[100]; // 0x4
    struct CPod_vtable* vtable; // 0x194
} CPod;

