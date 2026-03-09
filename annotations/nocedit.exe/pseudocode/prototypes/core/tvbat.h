#pragma once

// Function prototypes for core/tvbat.cpp
// Generated from Ghidra function signatures

// Original: core_tvbat.cpp_staticInit_FUN_005e3e50
// Address: 005e3e50
void __cdecl staticInit(void);

// Original: core_tvbat.cpp_factoryFunc_FUN_005e3e80
// Address: 005e3e80
CTVBat * __cdecl factoryFunc(void);

// Original: core_tvbat.cpp_CTVBat_getActorType_FUN_005e3eb0
// Address: 005e3eb0
CDemonActorType * __cdecl CTVBat::getActorType(CTVBat *this_ptr);

// Original: core_tvbat.cpp_jitterValue_FUN_005e3ec0
// Address: 005e3ec0
float __cdecl jitterValue(float value);

// Original: core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0
// Address: 005e3ef0
CTVBat * __cdecl CTVBat::ctor(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_setup_FUN_005e4050
// Address: 005e4050
void __cdecl CTVBat::setup(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_archive_FUN_005e40c0
// Address: 005e40c0
void __cdecl CTVBat::archive(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_process_FUN_005e4210
// Address: 005e4210
void __cdecl CTVBat::process(CTVBat *this_ptr,float delta_time);

// Original: core_tvbat.cpp_CTVBat_FUN_005e4d70
// Address: 005e4d70
void __cdecl CTVBat(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_renderOpaque_FUN_005e4d80
// Address: 005e4d80
int __cdecl CTVBat::renderOpaque(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_getBoundingBox_FUN_005e5050
// Address: 005e5050
CBoundingBox3D * __cdecl CTVBat::getBoundingBox(CTVBat *this_ptr,CBoundingBox3D *out_box);

// Original: core_tvbat.cpp_CTVBat_getCollisionType_FUN_005e50d0
// Address: 005e50d0
ECollisionType __cdecl CTVBat::getCollisionType(CTVBat *this_ptr,SCollisionInfo *collision_info);

// Original: core_tvbat.cpp_CTVBat_getTargetPoints_FUN_005e50f0
// Address: 005e50f0
int __cdecl CTVBat::getTargetPoints(CTVBat *this_ptr,CVector3f *out_points_array);

// Original: core_tvbat.cpp_CTVBat_getDeathState_FUN_005e5100
// Address: 005e5100
EDeathState __cdecl CTVBat::getDeathState(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_processDamage_FUN_005e5130
// Address: 005e5130
void __cdecl CTVBat::processDamage(CTVBat *this_ptr,SDamageInfo *damage_info);

// Original: core_tvbat.cpp_CTVBat_getPropertyList_FUN_005e51a0
// Address: 005e51a0
void __cdecl CTVBat::getPropertyList(CTVBat *this_ptr,CActorPropertyList *property_list);

// Original: core_tvbat.cpp_CTVBat_processInEditor_FUN_005e5260
// Address: 005e5260
void __cdecl CTVBat::processInEditor(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_showEditorHelp_FUN_005e5400
// Address: 005e5400
void __cdecl CTVBat::showEditorHelp(CTVBat *this_ptr,int *y_pos);

// Original: core_tvbat.cpp_CTVBat_addFilesToExtract_FUN_005e5440
// Address: 005e5440
void __cdecl CTVBat::addFilesToExtract(CTVBat *this_ptr,_FILE *file_handle);

// Original: core_tvbat.cpp_CTVBat_dtor_FUN_005e5460
// Address: 005e5460
CTVBat * __cdecl CTVBat::dtor(CTVBat *this_ptr,uint flags);
