#pragma once

// Function prototypes for core/stone.cpp
// Generated from Ghidra function signatures

// Original: core_stone.cpp_staticInit_FUN_005baca0
// Address: 005baca0
void __cdecl staticInit(void);

// Original: core_stone.cpp_factoryFunc_FUN_005bacd0
// Address: 005bacd0
CTempleStone * __cdecl factoryFunc(void);

// Original: core_stone.cpp_CTempleStone_getActorType_FUN_005bad00
// Address: 005bad00
CDemonActorType * __cdecl CTempleStone::getActorType(CTempleStone *this_ptr);

// Original: core_stone.cpp_CTempleStone_ctor_FUN_005bad10
// Address: 005bad10
CTempleStone * __cdecl CTempleStone::ctor(CTempleStone *this_ptr);

// Original: core_stone.cpp_CTempleStone_archive_FUN_005bad40
// Address: 005bad40
void __cdecl CTempleStone::archive(CTempleStone *this_ptr);

// Original: core_stone.cpp_CTempleStone_canPickup_FUN_005bad70
// Address: 005bad70
int __cdecl CTempleStone::canPickup(CTempleStone *this_ptr,CDemonActor *picker);

// Original: core_stone.cpp_CTempleStone_getPropertyList_FUN_005badd0
// Address: 005badd0
void __cdecl CTempleStone::getPropertyList(CTempleStone *this_ptr,CActorPropertyList *property_list);

// Original: core_stone.cpp_CTempleStone_dtor_FUN_005bae10
// Address: 005bae10
CTempleStone * __cdecl CTempleStone::dtor(CTempleStone *this_ptr,uint flags);
