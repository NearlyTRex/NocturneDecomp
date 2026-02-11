#pragma once

// Function prototypes for core/imp.cpp
// Generated from Ghidra function signatures

// Original: core_imp.cpp_staticInit_FUN_004f9830
// Address: 004f9830
void __cdecl staticInit(void);

// Original: core_imp.cpp_factoryFunc_FUN_004f9860
// Address: 004f9860
CImp * __cdecl factoryFunc(void);

// Original: core_imp.cpp_CImp_getActorType_FUN_004f9890
// Address: 004f9890
CDemonActorType * __cdecl CImp::getActorType(CImp *this_ptr);

// Original: core_imp.cpp_CImp_ctor_FUN_004f98a0
// Address: 004f98a0
CImp * __cdecl CImp::ctor(CImp *this_ptr);

// Original: core_imp.cpp_CImp_setup_FUN_004f9910
// Address: 004f9910
void __cdecl CImp::setup(CImp *this_ptr);

// Original: core_imp.cpp_CImp_process_FUN_004f9c30
// Address: 004f9c30
void __cdecl CImp::process(CImp *this_ptr,float delta_time);

// Original: core_imp.cpp_FUN_004fa900
// Address: 004fa900
void __cdecl FUN_004fa900(void);

// Original: core_imp.cpp_CImp_getCarryObjToBodyXForm_FUN_004fa920
// Address: 004fa920
void __stack2_esi CImp::getCarryObjToBodyXForm(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_imp.cpp_CImp_attractActorToward_FUN_004faaf0
// Address: 004faaf0
int __cdecl CImp::attractActorToward(CImp *this_ptr,CDemonActor *actor,CVector3f *target_local_point);

// Original: core_imp.cpp_CImp_archive_FUN_004fab00
// Address: 004fab00
void __cdecl CImp::archive(CImp *this_ptr);

// Original: core_imp.cpp_CImp_FUN_004fab60
// Address: 004fab60
void __cdecl CImp(CImp *this_ptr);

// Original: core_imp.cpp_CImp_processDamage_FUN_004fae00
// Address: 004fae00
void __cdecl CImp::processDamage(CImp *this_ptr,SDamageInfo *damage_info);

// Original: core_imp.cpp_CImp_getTargetPoints_FUN_004faf40
// Address: 004faf40
int __cdecl CImp::getTargetPoints(CImp *this_ptr,CVector3f *out_points_array);

// Original: core_imp.cpp_CImp_hasCollision_FUN_004fb0f0
// Address: 004fb0f0
void __cdecl CImp::hasCollision(CImp *this_ptr,SCollisionInfo *collision_info);

// Original: core_imp.cpp_CImp_getPropertyList_FUN_004fb110
// Address: 004fb110
void __cdecl CImp::getPropertyList(CImp *this_ptr,CActorPropertyList *property_list);

// Original: core_imp.cpp_CImp_addFilesToExtract_FUN_004fb150
// Address: 004fb150
void __cdecl CImp::addFilesToExtract(CImp *this_ptr,_FILE *file_handle);

// Original: core_imp.cpp_CImp_dtor_FUN_004fb180
// Address: 004fb180
CImp * __cdecl CImp::dtor(CImp *this_ptr,uint flags);
