#pragma once

// =============================================================================
// NOCTURNE MASTER INCLUDE
// =============================================================================
// Include this file in all source files to get access to all declarations.
// This provides all type definitions, constants, globals, and prototypes.

// Build-time behavior toggles.
#include "shim_config.h"

// System type definitions (Windows API, C runtime, DirectX, DirectSound, etc.)
#include "system.h"

// Game type definitions (classes, structs, unions, function pointer types)
#include "types.h"

// Symbolic constants (#define macros extracted from Ghidra equates)
#include "defines.h"

// Constant data (const arrays, lookup tables, string literals)
#include "constants.h"

// Global variables (extern declarations for all global state)
#include "globals.h"

// Function prototypes (declarations for all decompiled functions)
#include "prototypes.h"

