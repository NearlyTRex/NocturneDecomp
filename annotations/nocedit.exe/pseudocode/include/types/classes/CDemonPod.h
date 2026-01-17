#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonPod_vtable.h"
#include "types/classes/CPod.h"
#include "types/classes/CPodFile.h"
#include "types/funcdefs/CPod_dismount.h"
#include "types/funcdefs/CPod_findFile.h"
#include "types/funcdefs/CPod_load.h"
#include "types/funcdefs/CPod_mount.h"
#include "types/funcdefs/CPod_remount.h"
#include "types/structs/SFoundFileInfo.h"

// Structure: CDemonPod
// Ghidra size: 0x198 (408 bytes)
typedef struct CDemonPod {
    int pod_file_count; // 0x0
    struct CPodFile* pod_files[100]; // 0x4
    struct CDemonPod_vtable* vtable; // 0x194
} CDemonPod;

