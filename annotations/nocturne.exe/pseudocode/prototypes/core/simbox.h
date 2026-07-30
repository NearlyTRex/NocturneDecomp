#pragma once

// Function prototypes for core/simbox.cpp
// Generated from Ghidra function signatures

// Original: core_simbox.cpp_staticInit_FUN_00516b40
// Address: 00516b40
void __cdecl staticInit(void);

// Original: core_simbox.cpp_factoryFunc_FUN_00516b70
// Address: 00516b70
CSimBox * __cdecl factoryFunc(void);

// Original: core_simbox.cpp_CSimBox_getActorType_FUN_00516b90
// Address: 00516b90
CDemonActorType * CSimBox::getActorType(void);

// Original: core_simbox.cpp_CSimBox_ctor_FUN_00516ba0
// Address: 00516ba0
CSimBox * __cdecl CSimBox::ctor(CSimBox *this_ptr);

// Original: core_simbox.cpp_CSimBox_setup_FUN_00516c60
// Address: 00516c60
void CSimBox::setup(CDemonActor *param_1);

// Original: core_simbox.cpp_CSimBox_process_FUN_00516d80
// Address: 00516d80
void CSimBox::process(int param_1,float param_2);

// Original: core_simbox.cpp_CSimBox_renderOpaque_FUN_00516f50
// Address: 00516f50
int CSimBox::renderOpaque(CDemonActor *param_1);

// Original: core_simbox.cpp_CSimBox_getBoundingBox_FUN_00516fc0
// Address: 00516fc0
undefined4 * CSimBox::getBoundingBox(int param_1,undefined4 *param_2);

// Original: core_simbox.cpp_CSimBox_archive_FUN_00517010
// Address: 00517010
void CSimBox::archive(CDemonActor *param_1);

// Original: core_simbox.cpp_CSimBox_getCollisionType_FUN_005170c0
// Address: 005170c0
undefined4 CSimBox::getCollisionType(void);

// Original: core_simbox.cpp_CSimBox_dtor_FUN_005170d0
// Address: 005170d0
CSimBox * __cdecl CSimBox::dtor(CSimBox *this_ptr,uint flags);
