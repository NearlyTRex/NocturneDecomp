#pragma once

// Function prototypes for core/mobster.cpp
// Generated from Ghidra function signatures

// Original: core_mobster.cpp_staticInit_FUN_00525070
// Address: 00525070
void __cdecl staticInit(void);

// Original: core_mobster.cpp_FUN_005250a0
// Address: 005250a0
float * __cdecl FUN_005250a0(void);

// Original: core_mobster.cpp_FUN_00525110
// Address: 00525110
CVector3f * __cdecl FUN_00525110(void);

// Original: core_mobster.cpp_factoryFunc_FUN_005251c0
// Address: 005251c0
CMobster * __cdecl factoryFunc(void);

// Original: core_mobster.cpp_CMobster_getActorType_FUN_005251f0
// Address: 005251f0
CDemonActorType * __cdecl CMobster::getActorType(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_ctor_FUN_00525200
// Address: 00525200
CMobster * __cdecl CMobster::ctor(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_setup_FUN_00525340
// Address: 00525340
void __cdecl CMobster::setup(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_FUN_00525650
// Address: 00525650
void __cdecl CMobster(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_FUN_00525720
// Address: 00525720
void __cdecl CMobster(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_process_FUN_00525840
// Address: 00525840
void __cdecl CMobster::process(CMobster *this_ptr,float delta_time);

// Original: core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0
// Address: 005267a0
void __cdecl CMobster::aimTommyGun(CMobster *this_ptr,float delta_time);

// Original: core_mobster.cpp_FUN_00526b00
// Address: 00526b00
void __cdecl FUN_00526b00(void);

// Original: core_mobster.cpp_CMobster_getCarryObjToBodyXForm_FUN_00526b20
// Address: 00526b20
void __stack2_esi CMobster::getCarryObjToBodyXForm(CMobster *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_mobster.cpp_CMobster_FUN_00526d90
// Address: 00526d90
int __cdecl CMobster(CMobster *this_ptr,float delta_time);

// Original: core_mobster.cpp_CMobster_FUN_005271c0
// Address: 005271c0
void __cdecl CMobster(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_archive_FUN_00527230
// Address: 00527230
void __cdecl CMobster::archive(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_reset_FUN_00527360
// Address: 00527360
void __cdecl CMobster::reset(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_FUN_00527380
// Address: 00527380
void __cdecl CMobster(CMobster *this_ptr,SDamageInfo *damage_info);

// Original: core_mobster.cpp_CMobster_processDamage_FUN_00527740
// Address: 00527740
void __cdecl CMobster::processDamage(CMobster *this_ptr,SDamageInfo *damage_info);

// Original: core_mobster.cpp_CMobster_getTargetPoints_FUN_005278d0
// Address: 005278d0
int __cdecl CMobster::getTargetPoints(CMobster *this_ptr,CVector3f *out_points_array);

// Original: core_mobster.cpp_CMobster_getCollisionType_FUN_005279d0
// Address: 005279d0
ECollisionType __cdecl CMobster::getCollisionType(CMobster *this_ptr,SCollisionInfo *collision_info);

// Original: core_mobster.cpp_CMobster_FUN_005279f0
// Address: 005279f0
void __cdecl CMobster(CMobster *this_ptr,int taunt_category);

// Original: core_mobster.cpp_CMobster_getPropertyList_FUN_00527b70
// Address: 00527b70
void __cdecl CMobster::getPropertyList(CMobster *this_ptr,CActorPropertyList *property_list);

// Original: core_mobster.cpp_CMobster_FUN_00527c30
// Address: 00527c30
void __cdecl CMobster(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_addFilesToExtract_FUN_00527c40
// Address: 00527c40
void __cdecl CMobster::addFilesToExtract(CMobster *this_ptr,_FILE *file_handle);

// Original: core_mobster.cpp_CMobster_dtor_FUN_00527c70
// Address: 00527c70
CMobster * __cdecl CMobster::dtor(CMobster *this_ptr,uint flags);
