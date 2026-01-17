#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CPod.h"
#include "types/funcdefs/CPod_dismount.h"
#include "types/funcdefs/CPod_findFile.h"
#include "types/funcdefs/CPod_load.h"
#include "types/funcdefs/CPod_mount.h"
#include "types/funcdefs/CPod_remount.h"
#include "types/structs/SFoundFileInfo.h"

// Structure: CDemonPod_vtable
// Ghidra size: 0x18 (24 bytes)
typedef struct CDemonPod_vtable {
    void* dtor; // 0x0
    CPod_load* load; // 0x4
    CPod_findFile* findFile; // 0x8
    CPod_mount* mount; // 0xc
    CPod_dismount* dismount; // 0x10
    CPod_remount* remount; // 0x14
} CDemonPod_vtable;

