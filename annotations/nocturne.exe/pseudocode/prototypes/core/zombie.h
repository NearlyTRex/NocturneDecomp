#pragma once

// Function prototypes for core/zombie.cpp
// Generated from Ghidra function signatures

// Original: core_zombie.cpp_staticInit_FUN_0055e780
// Address: 0055e780
void __cdecl staticInit(void);

// Original: core_zombie.cpp_classifyObjectShape_FUN_0055e940
// Address: 0055e940
int __cdecl classifyObjectShape(CVector3f *dimensions);

// Original: core_zombie.cpp_factoryFuncZombie_FUN_0055ea90
// Address: 0055ea90
CZombie * __cdecl factoryFuncZombie(void);

// Original: core_zombie.cpp_CZombie_getActorType_FUN_0055eab0
// Address: 0055eab0
CDemonActorType * __cdecl CZombie::getActorType(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_ctor_FUN_0055eac0
// Address: 0055eac0
CZombie * __cdecl CZombie::ctor(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_setup_FUN_0055ec20
// Address: 0055ec20
void __cdecl CZombie::setup(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_process_FUN_0055ef50
// Address: 0055ef50
void __cdecl CZombie::process(CZombie *this_ptr,float delta_time);

// Original: core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_00560cd0
// Address: 00560cd0
void __stack2_esi CZombie::getCarryObjToBodyXForm(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_zombie.cpp_CZombie_processPickup_FUN_00561010
// Address: 00561010
int __cdecl CZombie::processPickup(CZombie *this_ptr,float delta_time);

// Original: core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005617e0
// Address: 005617e0
int __cdecl CZombie::getPickupHandIndex(CZombie *this_ptr,int object_shape_type);

// Original: core_zombie.cpp_CZombie_canPickupWithHand_FUN_00561880
// Address: 00561880
int __cdecl CZombie::canPickupWithHand(CZombie *this_ptr,int object_shape_type);

// Original: core_zombie.cpp_CZombie_dropAndClearTarget_FUN_005618c0
// Address: 005618c0
void __cdecl CZombie::dropAndClearTarget(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_renderOpaque_FUN_00561900
// Address: 00561900
int __cdecl CZombie::renderOpaque(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_renderTransparent_FUN_00561940
// Address: 00561940
int __cdecl CZombie::renderTransparent(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_archive_FUN_00561aa0
// Address: 00561aa0
void __cdecl CZombie::archive(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_canBeAttracted_FUN_00561bf0
// Address: 00561bf0
int __cdecl CZombie::canBeAttracted(CZombie *this_ptr,CVector3f *out_attract_position);

// Original: core_zombie.cpp_CZombie_processDismemberment_FUN_00561cf0
// Address: 00561cf0
void __cdecl CZombie::processDismemberment(CZombie *this_ptr,SDamageInfo *damage_info);

// Original: core_zombie.cpp_CZombie_processDamage_FUN_00561fc0
// Address: 00561fc0
void __cdecl CZombie::processDamage(CZombie *this_ptr,SDamageInfo *damage_info);

// Original: core_zombie.cpp_CZombie_getTargetPoints_FUN_005621f0
// Address: 005621f0
int __cdecl CZombie::getTargetPoints(CZombie *this_ptr,CVector3f *out_points_array);

// Original: core_zombie.cpp_CZombie_isGrabbable_FUN_005623f0
// Address: 005623f0
int __cdecl CZombie::isGrabbable(CZombie *this_ptr,CDemonActor *grabber);

// Original: core_zombie.cpp_CZombie_canBeGrabbed_FUN_00562430
// Address: 00562430
int __cdecl CZombie::canBeGrabbed(CZombie *this_ptr,CDemonActor *grabber,int grab_type);

// Original: core_zombie.cpp_CZombie_getGrabbed_FUN_00562440
// Address: 00562440
int __cdecl CZombie::getGrabbed(CZombie *this_ptr,CDemonActor *grabber,int grab_type);

// Original: core_zombie.cpp_CZombie_shouldIgnoreForTargeting_FUN_005624b0
// Address: 005624b0
int __cdecl CZombie::shouldIgnoreForTargeting(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_resetChaseState_FUN_005624e0
// Address: 005624e0
void __cdecl CZombie::resetChaseState(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_dtor_FUN_00562550
// Address: 00562550
CZombie * __cdecl CZombie::dtor(CZombie *this_ptr,uint flags);
