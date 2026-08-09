#pragma once

// Function prototypes for core/spike.cpp
// Generated from Ghidra function signatures

// Original: core_spike.cpp_staticInit_FUN_005b81b0
// Address: 005b81b0
void __cdecl staticInit(void);

// Original: core_spike.cpp_factoryFuncSpike_FUN_005b81e0
// Address: 005b81e0
CSpike * __cdecl factoryFuncSpike(void);

// Original: core_spike.cpp_CSpike_getActorType_FUN_005b8210
// Address: 005b8210
CDemonActorType * __cdecl CSpike::getActorType(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_ctor_FUN_005b8220
// Address: 005b8220
CSpike * __cdecl CSpike::ctor(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_setup_FUN_005b8360
// Address: 005b8360
void __cdecl CSpike::setup(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_process_FUN_005b8410
// Address: 005b8410
void __cdecl CSpike::process(CSpike *this_ptr,float delta_time);

// Original: core_spike.cpp_CSpike_renderOpaque_FUN_005b8730
// Address: 005b8730
int __cdecl CSpike::renderOpaque(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_getBoundingBox_FUN_005b87a0
// Address: 005b87a0
CBoundingBox3D * __cdecl CSpike::getBoundingBox(CSpike *this_ptr,CBoundingBox3D *out_box);

// Original: core_spike.cpp_CSpike_archive_FUN_005b87f0
// Address: 005b87f0
void __cdecl CSpike::archive(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_getCollisionType_FUN_005b8940
// Address: 005b8940
ECollisionType __cdecl CSpike::getCollisionType(CSpike *this_ptr,SCollisionInfo *collision_info);

// Original: core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_005b8950
// Address: 005b8950
void __cdecl CSpike::testCollisionWithCharacters(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_getPropertyList_FUN_005b8e90
// Address: 005b8e90
void __cdecl CSpike::getPropertyList(CSpike *this_ptr,CActorPropertyList *property_list);

// Original: core_spike.cpp_CSpike_processInEditor_FUN_005b9020
// Address: 005b9020
void __cdecl CSpike::processInEditor(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_addFilesToExtract_FUN_005b9030
// Address: 005b9030
void __cdecl CSpike::addFilesToExtract(CSpike *this_ptr,_FILE *file_handle);

// Original: core_spike.cpp_CSpike_dtor_FUN_005b9050
// Address: 005b9050
CSpike * __cdecl CSpike::dtor(CSpike *this_ptr,uint flags);
