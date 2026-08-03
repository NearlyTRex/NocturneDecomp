#pragma once

// Function prototypes for core/anvil.cpp
// Generated from Ghidra function signatures

// Original: core_anvil.cpp_staticInit_FUN_0040f500
// Address: 0040f500
void __cdecl staticInit(void);

// Original: core_anvil.cpp_factoryFunc_FUN_0040f530
// Address: 0040f530
CAnvil * __cdecl factoryFunc(void);

// Original: core_anvil.cpp_CAnvil_getActorType_FUN_0040f550
// Address: 0040f550
CDemonActorType * __cdecl CAnvil::getActorType(CAnvil *this_ptr);

// Original: core_anvil.cpp_CAnvil_ctor_FUN_0040f560
// Address: 0040f560
CAnvil * __cdecl CAnvil::ctor(CAnvil *this_ptr);

// Original: core_anvil.cpp_CAnvil_setup_FUN_0040f5f0
// Address: 0040f5f0
void __cdecl CAnvil::setup(CAnvil *this_ptr);

// Original: core_anvil.cpp_CAnvil_process_FUN_0040f610
// Address: 0040f610
void __cdecl CAnvil::process(CAnvil *this_ptr,float delta_time);

// Original: core_anvil.cpp_CAnvil_renderOpaque_FUN_0040f740
// Address: 0040f740
int __cdecl CAnvil::renderOpaque(CAnvil *this_ptr);

// Original: core_anvil.cpp_CAnvil_archive_FUN_0040f7d0
// Address: 0040f7d0
void __cdecl CAnvil::archive(CAnvil *this_ptr);

// Original: core_anvil.cpp_CAnvil_getCollisionType_FUN_0040f850
// Address: 0040f850
ECollisionType __cdecl CAnvil::getCollisionType(CAnvil *this_ptr,SCollisionInfo *collision_info);

// Original: core_anvil.cpp_CAnvil_getBoundingBox_FUN_0040f860
// Address: 0040f860
CBoundingBox3D * __cdecl CAnvil::getBoundingBox(CAnvil *this_ptr,CBoundingBox3D *out_box);

// Original: core_anvil.cpp_CAnvil_dtor_FUN_0040f8b0
// Address: 0040f8b0
CAnvil * __cdecl CAnvil::dtor(CAnvil *this_ptr,uint flags);
