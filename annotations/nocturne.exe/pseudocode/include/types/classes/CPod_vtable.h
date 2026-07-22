#pragma once

// Forward declarations
struct CPod;
struct SFoundFileInfo;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CPod_dismount.h"
#include "types/funcdefs/CPod_findFile.h"
#include "types/funcdefs/CPod_load.h"
#include "types/funcdefs/CPod_mount.h"
#include "types/funcdefs/CPod_remount.h"

// Structure: CPod_vtable
// Ghidra size: 0x18 (24 bytes)
#pragma pack(push, 1)
typedef struct CPod_vtable {
    void* dtor; // 0x0
    CPod_load* load; // 0x4
    CPod_findFile* findFile; // 0x8
    CPod_mount* mount; // 0xc
    CPod_dismount* dismount; // 0x10
    CPod_remount* remount; // 0x14
} CPod_vtable;
#pragma pack(pop)

