#pragma once

// Function prototypes for core/imp.cpp
// Generated from Ghidra function signatures

// Original: core_imp.cpp_staticInit_FUN_004bb700
// Address: 004bb700
void __cdecl staticInit(void);

// Original: core_imp.cpp_factoryFuncImp_FUN_004bb730
// Address: 004bb730
CImp * __cdecl factoryFuncImp(void);

// Original: core_imp.cpp_CImp_getActorType_FUN_004bb750
// Address: 004bb750
CDemonActorType * __cdecl CImp::getActorType(CImp *this_ptr);

// Original: core_imp.cpp_CImp_ctor_FUN_004bb760
// Address: 004bb760
CImp * __cdecl CImp::ctor(CImp *this_ptr);

// Original: core_imp.cpp_CImp_setup_FUN_004bb7d0
// Address: 004bb7d0
void __cdecl CImp::setup(CImp *this_ptr);

// Original: core_imp.cpp_CImp_process_FUN_004bbaf0
// Address: 004bbaf0
void __cdecl CImp::process(CImp *this_ptr,float delta_time);

// Original: core_imp.cpp_setVector_FUN_004bc7c0
// Address: 004bc7c0
CVector3f * __cdecl setVector(CVector3f *out,float x,float y,float z);

// Original: core_imp.cpp_CImp_getCarryObjToBodyXForm_FUN_004bc7e0
// Address: 004bc7e0
void __stack2_esi CImp::getCarryObjToBodyXForm(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_imp.cpp_CImp_attractActorToward_FUN_004bc9b0
// Address: 004bc9b0
int __cdecl CImp::attractActorToward(CImp *this_ptr,CDemonActor *actor,CVector3f *target_local_point);

// Original: core_imp.cpp_CImp_archive_FUN_004bc9c0
// Address: 004bc9c0
void __cdecl CImp::archive(CImp *this_ptr);

// Original: core_imp.cpp_CImp_processDismemberment_FUN_004bca20
// Address: 004bca20
void __cdecl CImp::processDismemberment(CImp *this_ptr,SDamageInfo *damage_info);

// Original: core_imp.cpp_CImp_processDamage_FUN_004bccc0
// Address: 004bccc0
void __cdecl CImp::processDamage(CImp *this_ptr,SDamageInfo *damage_info);

// Original: core_imp.cpp_CImp_getTargetPoints_FUN_004bce00
// Address: 004bce00
int __cdecl CImp::getTargetPoints(CImp *this_ptr,CVector3f *out_points_array);

// Original: core_imp.cpp_CImp_getCollisionType_FUN_004bcfb0
// Address: 004bcfb0
ECollisionType __cdecl CImp::getCollisionType(CImp *this_ptr,SCollisionInfo *collision_info);

// Original: core_imp.cpp_CImp_dtor_FUN_004bcfd0
// Address: 004bcfd0
CImp * __cdecl CImp::dtor(CImp *this_ptr,uint flags);
