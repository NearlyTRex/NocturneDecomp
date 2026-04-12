#pragma once

// Forward declarations
struct CCharacter_full_vtable;
struct CDemonActor_vtable;
struct CEnemy_full_vtable;
struct CHero_full_vtable;
struct CWeapon_full_vtable;

// Dependencies
#include "system/basetypes.h"

// Union: UActorVTable
#pragma pack(push, 1)
typedef union UActorVTable {
    struct CDemonActor_vtable* _ub;
    struct CCharacter_full_vtable* _uc;
    struct CEnemy_full_vtable* _ue;
    struct CHero_full_vtable* _uh;
    struct CWeapon_full_vtable* _uw;
} UActorVTable;
#pragma pack(pop)

