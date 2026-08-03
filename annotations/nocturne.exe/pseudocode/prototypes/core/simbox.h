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
CDemonActorType * __cdecl CSimBox::getActorType(CSimBox *this_ptr);

// Original: core_simbox.cpp_CSimBox_ctor_FUN_00516ba0
// Address: 00516ba0
CSimBox * __cdecl CSimBox::ctor(CSimBox *this_ptr);

// Original: core_simbox.cpp_CSimBox_setup_FUN_00516c60
// Address: 00516c60
void __cdecl CSimBox::setup(CSimBox *this_ptr);

// Original: core_simbox.cpp_CSimBox_process_FUN_00516d80
// Address: 00516d80
void __cdecl CSimBox::process(CSimBox *this_ptr,float delta_time);

// Original: core_simbox.cpp_CSimBox_renderOpaque_FUN_00516f50
// Address: 00516f50
int __cdecl CSimBox::renderOpaque(CSimBox *this_ptr);

// Original: core_simbox.cpp_CSimBox_getBoundingBox_FUN_00516fc0
// Address: 00516fc0
CBoundingBox3D * __cdecl CSimBox::getBoundingBox(CSimBox *this_ptr,CBoundingBox3D *out_box);

// Original: core_simbox.cpp_CSimBox_archive_FUN_00517010
// Address: 00517010
void __cdecl CSimBox::archive(CSimBox *this_ptr);

// Original: core_simbox.cpp_CSimBox_getCollisionType_FUN_005170c0
// Address: 005170c0
ECollisionType __cdecl CSimBox::getCollisionType(CSimBox *this_ptr,SCollisionInfo *collision_info);

// Original: core_simbox.cpp_CSimBox_dtor_FUN_005170d0
// Address: 005170d0
CSimBox * __cdecl CSimBox::dtor(CSimBox *this_ptr,uint flags);
