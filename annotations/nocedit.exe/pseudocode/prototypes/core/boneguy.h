#pragma once

// Function prototypes for core/boneguy.cpp
// Generated from Ghidra function signatures

// Original: core_boneguy.cpp_staticInit_FUN_0041b6d0
// Address: 0041b6d0
void __cdecl staticInit(void);

// Original: core_boneguy.cpp_getLocalBoundingBoxCenter_FUN_0041b700
// Address: 0041b700
CVector3f * __cdecl getLocalBoundingBoxCenter(CVector3f *out,CDemonActor *actor);

// Original: core_boneguy.cpp_getWorldBoundingBoxCenter_FUN_0041b770
// Address: 0041b770
CVector3f * __cdecl getWorldBoundingBoxCenter(CVector3f *out,CDemonActor *actor);

// Original: core_boneguy.cpp_factoryFuncBoneGuy_FUN_0041b820
// Address: 0041b820
CBoneGuy * __cdecl factoryFuncBoneGuy(void);

// Original: core_boneguy.cpp_CBoneGuy_getActorType_FUN_0041b850
// Address: 0041b850
CDemonActorType * __cdecl CBoneGuy::getActorType(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_rgbToHsv_FUN_0041b860
// Address: 0041b860
CColor3f * __cdecl rgbToHsv(CColor3f *out_hsv,CColor3f *in_rgb);

// Original: core_boneguy.cpp_hsvToRgb_FUN_0041ba10
// Address: 0041ba10
CColor3f * __cdecl hsvToRgb(CColor3f *out_rgb,CColor3f *in_hsv);

// Original: core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0
// Address: 0041bbc0
CBoneGuy * __cdecl CBoneGuy::ctor(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_setup_FUN_0041bd90
// Address: 0041bd90
void __cdecl CBoneGuy::setup(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90
// Address: 0041bf90
void __cdecl CBoneGuy::process(CBoneGuy *this_ptr,float delta_time);

// Original: core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041ca40
// Address: 0041ca40
void __stack2_esi CBoneGuy::getCarryObjToBodyXForm(CBoneGuy *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_0041cc40
// Address: 0041cc40
int __cdecl CBoneGuy::updatePickupBehavior(CBoneGuy *this_ptr,float delta_time);

// Original: core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_0041d180
// Address: 0041d180
void __cdecl CBoneGuy::renderOpaque(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_0041d1b0
// Address: 0041d1b0
int __cdecl CBoneGuy::renderTransparent(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_archive_FUN_0041d270
// Address: 0041d270
void __cdecl CBoneGuy::archive(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_reset_FUN_0041d4c0
// Address: 0041d4c0
void __cdecl CBoneGuy::reset(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_processDamage_FUN_0041d4d0
// Address: 0041d4d0
void __cdecl CBoneGuy::processDamage(CBoneGuy *this_ptr,SDamageInfo *damage_info);

// Original: core_boneguy.cpp_CBoneGuy_getTargetPoints_FUN_0041d550
// Address: 0041d550
int __cdecl CBoneGuy::getTargetPoints(CBoneGuy *this_ptr,CVector3f *out_points_array);

// Original: core_boneguy.cpp_CBoneGuy_explode_FUN_0041d680
// Address: 0041d680
void __cdecl CBoneGuy::explode(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_0041d8a0
// Address: 0041d8a0
void __cdecl CBoneGuy::beginRecombine(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_getCollisionType_FUN_0041d970
// Address: 0041d970
ECollisionType __cdecl CBoneGuy::getCollisionType(CBoneGuy *this_ptr,SCollisionInfo *collision_info);

// Original: core_boneguy.cpp_CBoneGuy_getPropertyList_FUN_0041d990
// Address: 0041d990
void __cdecl CBoneGuy::getPropertyList(CBoneGuy *this_ptr,CActorPropertyList *property_list);

// Original: core_boneguy.cpp_CBoneGuy_randomize_FUN_0041da00
// Address: 0041da00
void __cdecl CBoneGuy::randomize(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_addFilesToExtract_FUN_0041da10
// Address: 0041da10
void __cdecl CBoneGuy::addFilesToExtract(CBoneGuy *this_ptr,_FILE *file_handle);

// Original: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40
// Address: 0041da40
CBoneGuy * __cdecl CBoneGuy::dtor(CBoneGuy *this_ptr,uint flags);

// Original: core_boneguy.cpp_SBoneGuyBox_ctor_FUN_0041db10
// Address: 0041db10
SBoneGuyBox * __cdecl SBoneGuyBox::ctor(SBoneGuyBox *this_ptr);

// Original: core_boneguy.cpp_SBoneGuyBox_dtor_FUN_0041db20
// Address: 0041db20
SBoneGuyBox * __cdecl SBoneGuyBox::dtor(SBoneGuyBox *this_ptr,uint flags);

// Original: core_boneguy.cpp_SBoneGuyBox_arrdtor20_FUN_0041db30
// Address: 0041db30
SBoneGuyBox * __cdecl SBoneGuyBox::arrdtor20(SBoneGuyBox *objs,uint flags);
