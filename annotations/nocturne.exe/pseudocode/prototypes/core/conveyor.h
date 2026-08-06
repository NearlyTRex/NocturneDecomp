#pragma once

// Function prototypes for core/conveyor.cpp
// Generated from Ghidra function signatures

// Original: core_conveyor.cpp_staticInit_FUN_0043aff0
// Address: 0043aff0
void __cdecl staticInit(void);

// Original: core_conveyor.cpp_factoryFunc_FUN_0043b020
// Address: 0043b020
CConveyor * __cdecl factoryFunc(void);

// Original: core_conveyor.cpp_CConveyor_getActorType_FUN_0043b040
// Address: 0043b040
CDemonActorType * __cdecl CConveyor::getActorType(CConveyor *this_ptr);

// Original: core_conveyor.cpp_CConveyor_ctor_FUN_0043b050
// Address: 0043b050
CConveyor * __cdecl CConveyor::ctor(CConveyor *this_ptr);

// Original: core_conveyor.cpp_CConveyor_setup_FUN_0043b110
// Address: 0043b110
void __cdecl CConveyor::setup(CConveyor *this_ptr);

// Original: core_conveyor.cpp_CConveyor_process_FUN_0043b1a0
// Address: 0043b1a0
void __cdecl CConveyor::process(CConveyor *this_ptr,float delta_time);

// Original: core_conveyor.cpp_CConveyor_renderOpaque_FUN_0043b2f0
// Address: 0043b2f0
int __cdecl CConveyor::renderOpaque(CConveyor *this_ptr);

// Original: core_conveyor.cpp_CConveyor_renderBackground_FUN_0043b300
// Address: 0043b300
void __cdecl CConveyor::renderBackground(CConveyor *this_ptr,int layer_flag);

// Original: core_conveyor.cpp_CConveyor_archive_FUN_0043b310
// Address: 0043b310
void __cdecl CConveyor::archive(CConveyor *this_ptr);

// Original: core_conveyor.cpp_CConveyor_getCollisionType_FUN_0043b3b0
// Address: 0043b3b0
ECollisionType __cdecl CConveyor::getCollisionType(CConveyor *this_ptr,SCollisionInfo *collision_info);

// Original: core_conveyor.cpp_CConveyor_getBoundingBox_FUN_0043b3c0
// Address: 0043b3c0
CBoundingBox3D * __cdecl CConveyor::getBoundingBox(CConveyor *this_ptr,CBoundingBox3D *out_box);

// Original: core_conveyor.cpp_CConveyor_dtor_FUN_0043b420
// Address: 0043b420
CConveyor * __cdecl CConveyor::dtor(CConveyor *this_ptr,uint flags);

// Original: core_conveyor.cpp_CPlatform_dtor_FUN_0043b490
// Address: 0043b490
CPlatform * __cdecl CPlatform::dtor(CPlatform *this_ptr,uint flags);
