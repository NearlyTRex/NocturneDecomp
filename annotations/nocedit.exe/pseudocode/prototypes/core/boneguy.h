#pragma once

// Function prototypes for core/boneguy.cpp
// Generated from Ghidra function signatures

// Original: core_boneguy.cpp_staticInit_FUN_0041b6d0
// Address: 0041b6d0
void __cdecl staticInit(void);

// Original: core_boneguy.cpp_FUN_0041b700
// Address: 0041b700
float * __cdecl FUN_0041b700(void);

// Original: core_boneguy.cpp_FUN_0041b770
// Address: 0041b770
CVector3f * __cdecl FUN_0041b770(void);

// Original: core_boneguy.cpp_factoryFunc_FUN_0041b820
// Address: 0041b820
CBoneGuy * __cdecl factoryFunc(void);

// Original: core_boneguy.cpp_CBoneGuy_getActorType_FUN_0041b850
// Address: 0041b850
CDemonActorType * __cdecl CBoneGuy::getActorType(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_FUN_0041b860
// Address: 0041b860
float * __cdecl FUN_0041b860(void);

// Original: core_boneguy.cpp_FUN_0041ba10
// Address: 0041ba10
float * __cdecl FUN_0041ba10(void);

// Original: core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0
// Address: 0041bbc0
CBoneGuy * __cdecl CBoneGuy::ctor(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90
// Address: 0041bd90
void __cdecl CBoneGuy::explode(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_FUN_0041bf90
// Address: 0041bf90
void __cdecl FUN_0041bf90(void);

// Original: core_boneguy.cpp_FUN_0041ca40
// Address: 0041ca40
void __cdecl FUN_0041ca40(void);

// Original: core_boneguy.cpp_FUN_0041cc40
// Address: 0041cc40
int __cdecl FUN_0041cc40(void);

// Original: core_boneguy.cpp_FUN_0041d180
// Address: 0041d180
void __cdecl FUN_0041d180(void);

// Original: core_boneguy.cpp_FUN_0041d1b0
// Address: 0041d1b0
int __cdecl FUN_0041d1b0(void);

// Original: core_boneguy.cpp_CBoneGuy_serialize_FUN_0041d270
// Address: 0041d270
void __cdecl CBoneGuy::serialize(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_FUN_0041d4c0
// Address: 0041d4c0
int __cdecl CBoneGuy(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_processDamage_FUN_0041d4d0
// Address: 0041d4d0
void __cdecl CBoneGuy::processDamage(CBoneGuy *this_ptr,SDamageInfo *damage_info);

// Original: core_boneguy.cpp_CBoneGuy_getTargetPoints_FUN_0041d550
// Address: 0041d550
int __cdecl CBoneGuy::getTargetPoints(CBoneGuy *this_ptr,CVector3f *out_points_array);

// Original: core_boneguy.cpp_CBoneGuy_FUN_0041d680
// Address: 0041d680
void __cdecl CBoneGuy(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_FUN_0041d8a0
// Address: 0041d8a0
void __cdecl CBoneGuy(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_hasCollision_FUN_0041d970
// Address: 0041d970
int __cdecl CBoneGuy::hasCollision(CBoneGuy *this_ptr,SCollisionInfo *collision_info);

// Original: core_boneguy.cpp_CBoneGuy_getPropertyList_FUN_0041d990
// Address: 0041d990
void __cdecl CBoneGuy::getPropertyList(CBoneGuy *this_ptr,CActorPropertyList *property_list);

// Original: core_boneguy.cpp_CBoneGuy_FUN_0041da00
// Address: 0041da00
void __cdecl CBoneGuy(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_writeDependencies_FUN_0041da10
// Address: 0041da10
void __cdecl CBoneGuy::writeDependencies(CBoneGuy *this_ptr,_FILE *file_handle);

// Original: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40
// Address: 0041da40
CBoneGuy * __cdecl CBoneGuy::dtor(CBoneGuy *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8, uint d9);

// Original: core_boneguy.cpp_SBoneGuyBox_ctor_FUN_0041db10
// Address: 0041db10
SBoneGuyBox * __cdecl SBoneGuyBox::ctor(SBoneGuyBox *this_ptr);

// Original: core_boneguy.cpp_SBoneGuyBox_dtor_FUN_0041db20
// Address: 0041db20
SBoneGuyBox * __cdecl SBoneGuyBox::dtor(SBoneGuyBox *this_ptr);

// Original: core_boneguy.cpp_freeBoneGuyBoxes_FUN_0041db30
// Address: 0041db30
int __cdecl freeBoneGuyBoxes(SBoneGuyBox **objs);
