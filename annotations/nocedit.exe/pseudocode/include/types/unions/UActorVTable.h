#pragma once

// Forward declarations
struct CCharacter_full_vtable;
struct CDemonActor_vtable;
struct CEnemy_full_vtable;
struct CHero_full_vtable;

// Dependencies
#include "system/basetypes.h"

// Union: UActorVTable
typedef union UActorVTable {
    struct CDemonActor_vtable* _ub;
    struct CCharacter_full_vtable* _uc;
    struct CEnemy_full_vtable* _ue;
    struct CHero_full_vtable* _uh;
} UActorVTable;

