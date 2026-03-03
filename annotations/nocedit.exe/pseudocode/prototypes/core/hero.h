#pragma once

// Function prototypes for core/hero.cpp
// Generated from Ghidra function signatures

// Original: core_hero.cpp_staticInit_FUN_004f2120
// Address: 004f2120
void __cdecl staticInit(void);

// Original: core_hero.cpp_closestHeroToPoint_FUN_004f2170
// Address: 004f2170
int __cdecl closestHeroToPoint(CLocation *location);

// Original: core_hero.cpp_isAnyHeroWithinRadius_FUN_004f2220
// Address: 004f2220
int __cdecl isAnyHeroWithinRadius(CVector3f *point,float radius);

// Original: core_hero.cpp_isAnyHeroWithinCylinder_FUN_004f22a0
// Address: 004f22a0
int __cdecl isAnyHeroWithinCylinder(CVector3f *point,float horizontal_radius,float vertical_tolerance);

// Original: core_hero.cpp_CHero_ctor_FUN_004f2340
// Address: 004f2340
CHero * __cdecl CHero::ctor(CHero *this_ptr);

// Original: core_hero.cpp_CHero_dtor_FUN_004f2470
// Address: 004f2470
CHero * __cdecl CHero::dtor(CHero *this_ptr,uint flags);

// Original: core_hero.cpp_CHero_setup_FUN_004f2540
// Address: 004f2540
void __cdecl CHero::setup(CHero *this_ptr);

// Original: core_hero.cpp_CHero_testCylinderCollision_FUN_004f2580
// Address: 004f2580
int __cdecl CHero::testCylinderCollision(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance);

// Original: core_hero.cpp_CHero_testLineIntersection_FUN_004f25c0
// Address: 004f25c0
int __cdecl CHero::testLineIntersection(CHero *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point);

// Original: core_hero.cpp_CHero_archive_FUN_004f2610
// Address: 004f2610
void __cdecl CHero::archive(CHero *this_ptr);

// Original: core_hero.cpp_CHero_getPathMap_FUN_004f2870
// Address: 004f2870
CPathMap * __cdecl CHero::getPathMap(CHero *this_ptr);

// Original: core_hero.cpp_CHero_isGrabbable_FUN_004f2880
// Address: 004f2880
int __cdecl CHero::isGrabbable(CHero *this_ptr);

// Original: core_hero.cpp_CHero_canBeGrabbed_FUN_004f2890
// Address: 004f2890
int __cdecl CHero::canBeGrabbed(CHero *this_ptr,CDemonActor *grabber,int grab_type);

// Original: core_hero.cpp_CHero_canWalk_FUN_004f28a0
// Address: 004f28a0
int __cdecl CHero::canWalk(CHero *this_ptr);

// Original: core_hero.cpp_CHero_getGrabbed_FUN_004f28d0
// Address: 004f28d0
int __cdecl CHero::getGrabbed(CHero *this_ptr,CDemonActor *grabber,int grab_type);

// Original: core_hero.cpp_CHero_releaseFromGrab_FUN_004f29b0
// Address: 004f29b0
void __cdecl CHero::releaseFromGrab(CHero *this_ptr);

// Original: core_hero.cpp_CHero_createDefaultWeapon_FUN_004f2a30
// Address: 004f2a30
void __cdecl CHero::createDefaultWeapon(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryInteract_FUN_004f2af0
// Address: 004f2af0
int __cdecl CHero::tryInteract(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40
// Address: 004f2c40
int __cdecl CHero::tryTalkToNearbyCharacter(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70
// Address: 004f2d70
int __cdecl CHero::tryOpenNearbyDoor(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryOpenDoor_FUN_004f2ed0
// Address: 004f2ed0
int __cdecl CHero::tryOpenDoor(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryPullLever_FUN_004f2f50
// Address: 004f2f50
int __cdecl CHero::tryPullLever(CHero *this_ptr);

// Original: core_hero.cpp_CHero_executeLeverPull_FUN_004f30f0
// Address: 004f30f0
int __cdecl CHero::executeLeverPull(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryPushNearbyBox_FUN_004f3120
// Address: 004f3120
int __cdecl CHero::tryPushNearbyBox(CHero *this_ptr);

// Original: core_hero.cpp_CHero_stopPushingBox_FUN_004f3350
// Address: 004f3350
void __cdecl CHero::stopPushingBox(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004f33b0
// Address: 004f33b0
int __cdecl CHero::tryApproachNearbyActor(CHero *this_ptr);

// Original: core_hero.cpp_CHero_stopNearbyInteraction_FUN_004f3580
// Address: 004f3580
void __cdecl CHero::stopNearbyInteraction(CHero *this_ptr);

// Original: core_hero.cpp_CHero_findItemUseTarget_FUN_004f35b0
// Address: 004f35b0
int __cdecl CHero::findItemUseTarget(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryUseSelectedItem_FUN_004f3760
// Address: 004f3760
int __cdecl CHero::tryUseSelectedItem(CHero *this_ptr);

// Original: core_hero.cpp_CHero_canLookAt_FUN_004f37d0
// Address: 004f37d0
int __cdecl CHero::canLookAt(CHero *this_ptr);

// Original: core_hero.cpp_CHero_executeObjectPickup_FUN_004f3890
// Address: 004f3890
void __cdecl CHero::executeObjectPickup(CHero *this_ptr,int hand_index);

// Original: core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004f38d0
// Address: 004f38d0
void __cdecl CHero::addCarriedItemToInventory(CHero *this_ptr,int hand_index);

// Original: core_hero.cpp_CHero_removeMatchingKeys_FUN_004f3910
// Address: 004f3910
void __cdecl CHero::removeMatchingKeys(CHero *this_ptr,uint key_mask);

// Original: core_hero.cpp_CHero_setAiTask_FUN_004f3930
// Address: 004f3930
void __cdecl CHero::setAiTask(CHero *this_ptr,int ai_task);

// Original: core_hero.cpp_CHero_findNearestEnemy_FUN_004f3960
// Address: 004f3960
float __cdecl CHero::findNearestEnemy(CHero *this_ptr,float *out_distance);

// Original: core_hero.cpp_CHero_kill_FUN_004f3af0
// Address: 004f3af0
void __cdecl CHero::kill(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force);

// Original: core_hero.cpp_CHero_reset_FUN_004f3b20
// Address: 004f3b20
void __cdecl CHero::reset(CHero *this_ptr);

// Original: core_hero.cpp_factoryFunc_FUN_004f3bc0
// Address: 004f3bc0
CHeroPlaceholder * __cdecl factoryFunc(void);

// Original: core_hero.cpp_CHeroPlaceholder_getActorType_FUN_004f3bf0
// Address: 004f3bf0
CDemonActorType * __cdecl CHeroPlaceholder::getActorType(CHeroPlaceholder *this_ptr);

// Original: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004f3c00
// Address: 004f3c00
CHeroPlaceholder * __cdecl CHeroPlaceholder::ctor(CHeroPlaceholder *this_ptr);

// Original: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004f3c30
// Address: 004f3c30
CHeroPlaceholder * __cdecl CHeroPlaceholder::dtor(CHeroPlaceholder *this_ptr,uint flags);

// Original: core_hero.cpp_CHeroPlaceholder_renderTransparent_FUN_004f3c90
// Address: 004f3c90
int __cdecl CHeroPlaceholder::renderTransparent(CHeroPlaceholder *this_ptr);

// Original: core_hero.cpp_CHeroPlaceholder_getBoundingBox_FUN_004f3d20
// Address: 004f3d20
CBoundingBox3D * __cdecl CHeroPlaceholder::getBoundingBox(CHeroPlaceholder *this_ptr,CBoundingBox3D *out_box);

// Original: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80
// Address: 004f3d80
CDemonActor * __cdecl CHeroPlaceholder::createHero(CHeroPlaceholder *this_ptr,int param_2);

// Original: core_hero.cpp_CHeroPlaceholder_archive_FUN_004f3ef0
// Address: 004f3ef0
void __cdecl CHeroPlaceholder::archive(CHeroPlaceholder *this_ptr);

// Original: core_hero.cpp_CHero_getPropertyList_FUN_004f3f20
// Address: 004f3f20
void __cdecl CHero::getPropertyList(CHero *this_ptr,CActorPropertyList *property_list);

// Original: core_hero.cpp_CHeroPlaceholder_getPropertyList_FUN_004f3f60
// Address: 004f3f60
void __cdecl CHeroPlaceholder::getPropertyList(CHeroPlaceholder *this_ptr,CActorPropertyList *property_list);

// Original: core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0
// Address: 004f3fa0
void __cdecl CHero::addFilesToExtract(CHero *this_ptr,_FILE *file_handle);
