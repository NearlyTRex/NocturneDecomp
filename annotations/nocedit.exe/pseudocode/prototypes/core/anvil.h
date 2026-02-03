#pragma once

// Function prototypes for core/anvil.cpp
// Generated from Ghidra function signatures

// Original: core_anvil.cpp_staticInit_FUN_00411c70
// Address: 00411c70
void __cdecl staticInit(void);

// Original: core_anvil.cpp_factoryFunc_FUN_00411ca0
// Address: 00411ca0
CAnvil * __cdecl factoryFunc(void);

// Original: core_anvil.cpp_CAnvil_getActorType_FUN_00411cd0
// Address: 00411cd0
CDemonActorType * __cdecl CAnvil::getActorType(CAnvil *this_ptr);

// Original: core_anvil.cpp_CAnvil_ctor_FUN_00411ce0
// Address: 00411ce0
CAnvil * __cdecl CAnvil::ctor(CAnvil *this_ptr);

// Original: core_anvil.cpp_CAnvil_setup_FUN_00411d70
// Address: 00411d70
void __cdecl CAnvil::setup(CAnvil *this_ptr);

// Original: core_anvil.cpp_CAnvil_process_FUN_00411d90
// Address: 00411d90
void __cdecl CAnvil::process(CAnvil *this_ptr,float delta_time);

// Original: core_anvil.cpp_CAnvil_renderOpaque_FUN_00411ec0
// Address: 00411ec0
int __cdecl CAnvil::renderOpaque(CAnvil *this_ptr);

// Original: core_anvil.cpp_CAnvil_archive_FUN_00411f50
// Address: 00411f50
void __cdecl CAnvil::archive(CAnvil *this_ptr);

// Original: core_anvil.cpp_CAnvil_hasCollision_FUN_00411fd0
// Address: 00411fd0
int __cdecl CAnvil::hasCollision(CAnvil *this_ptr,SCollisionInfo *collision_info);

// Original: core_anvil.cpp_CAnvil_getBoundingBox_FUN_00411fe0
// Address: 00411fe0
CBoundingBox3D * __cdecl CAnvil::getBoundingBox(CAnvil *this_ptr,CBoundingBox3D *out_box);

// Original: core_anvil.cpp_CAnvil_getPropertyList_FUN_00412030
// Address: 00412030
void __cdecl CAnvil::getPropertyList(CAnvil *this_ptr,CActorPropertyList *property_list);

// Original: core_anvil.cpp_CAnvil_writeDependencies_FUN_00412090
// Address: 00412090
void __cdecl CAnvil::writeDependencies(CAnvil *this_ptr,_FILE *file_handle);

// Original: core_anvil.cpp_CAnvil_dtor_FUN_004120e0
// Address: 004120e0
CAnvil * __cdecl CAnvil::dtor(CAnvil *this_ptr,uint flags);
