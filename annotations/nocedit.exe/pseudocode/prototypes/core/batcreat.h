#pragma once

// Function prototypes for core/batcreat.cpp
// Generated from Ghidra function signatures

// Original: core_batcreat.cpp_staticInit_FUN_00415080
// Address: 00415080
void __cdecl staticInit(void);

// Original: core_batcreat.cpp_factoryFuncBatCreature_FUN_004150b0
// Address: 004150b0
CBatCreature * __cdecl factoryFuncBatCreature(void);

// Original: core_batcreat.cpp_CBatCreature_getActorType_FUN_004150e0
// Address: 004150e0
CDemonActorType * __cdecl CBatCreature::getActorType(CBatCreature *this_ptr);

// Original: core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0
// Address: 004150f0
CBatCreature * __cdecl CBatCreature::ctor(CBatCreature *this_ptr);

// Original: core_batcreat.cpp_CBatCreature_setup_FUN_00415150
// Address: 00415150
void __cdecl CBatCreature::setup(CBatCreature *this_ptr);

// Original: core_batcreat.cpp_CBatCreature_process_FUN_00415470
// Address: 00415470
void __cdecl CBatCreature::process(CBatCreature *this_ptr,float delta_time);

// Original: core_batcreat.cpp_CBatCreature_archive_FUN_00415d70
// Address: 00415d70
void __cdecl CBatCreature::archive(CBatCreature *this_ptr);

// Original: core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00415dd0
// Address: 00415dd0
void __cdecl CBatCreature::processDismemberment(CBatCreature *this_ptr,SDamageInfo *damage_info);

// Original: core_batcreat.cpp_CBatCreature_processDamage_FUN_00416030
// Address: 00416030
void __cdecl CBatCreature::processDamage(CBatCreature *this_ptr,SDamageInfo *damage_info);

// Original: core_batcreat.cpp_CBatCreature_getTargetPoints_FUN_00416240
// Address: 00416240
int __cdecl CBatCreature::getTargetPoints(CBatCreature *this_ptr,CVector3f *out_points_array);

// Original: core_batcreat.cpp_CBatCreature_getCollisionType_FUN_00416290
// Address: 00416290
ECollisionType __cdecl CBatCreature::getCollisionType(CBatCreature *this_ptr,SCollisionInfo *collision_info);

// Original: core_batcreat.cpp_CBatCreature_getPropertyList_FUN_004162b0
// Address: 004162b0
void __cdecl CBatCreature::getPropertyList(CBatCreature *this_ptr,CActorPropertyList *property_list);

// Original: core_batcreat.cpp_CBatCreature_addFilesToExtract_FUN_004162f0
// Address: 004162f0
void __cdecl CBatCreature::addFilesToExtract(CBatCreature *this_ptr,_FILE *file_handle);

// Original: core_batcreat.cpp_CBatCreature_dtor_FUN_00416320
// Address: 00416320
CBatCreature * __cdecl CBatCreature::dtor(CBatCreature *this_ptr,uint flags);
