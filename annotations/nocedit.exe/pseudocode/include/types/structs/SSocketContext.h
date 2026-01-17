#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winsock.h"

// Structure: SSocketContext
// Ghidra size: 0x24 (36 bytes)
typedef struct SSocketContext {
    SOCKET socket; // 0x0
    SOCKADDR_IN local_addr; // 0x4
    SOCKADDR_IN remote_addr; // 0x14
} SSocketContext;

