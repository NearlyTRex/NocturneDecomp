#pragma once

// Function prototypes for core/stone.cpp
// Generated from Ghidra function signatures

// Original: core_stone.cpp_staticInit_FUN_00534ca0
// Address: 00534ca0
void __cdecl staticInit(void);

// Original: core_stone.cpp_factoryFunc_FUN_00534cd0
// Address: 00534cd0
CTempleStone * __cdecl factoryFunc(void);

// Original: core_stone.cpp_CTempleStone_getActorType_FUN_00534cf0
// Address: 00534cf0
CDemonActorType * CTempleStone::getActorType(void);

// Original: core_stone.cpp_CTempleStone_ctor_FUN_00534d00
// Address: 00534d00
CTempleStone * __cdecl CTempleStone::ctor(CTempleStone *this_ptr);

// Original: core_stone.cpp_CTempleStone_archive_FUN_00534d30
// Address: 00534d30
void CTempleStone::archive(CBoxActor *param_1);

// Original: core_stone.cpp_CTempleStone_canPickup_FUN_00534d60
// Address: 00534d60
undefined4 CTempleStone::canPickup(int param_1,CDemonActor *param_2);

// Original: core_stone.cpp_CTempleStone_dtor_FUN_00534dc0
// Address: 00534dc0
CTempleStone * __cdecl CTempleStone::dtor(CTempleStone *this_ptr,uint flags);
