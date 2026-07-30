#pragma once

// Function prototypes for core/vessel.cpp
// Generated from Ghidra function signatures

// Original: core_vessel.cpp_staticInit_FUN_0054f8c0
// Address: 0054f8c0
void __cdecl staticInit(void);

// Original: core_vessel.cpp_factoryFunc_FUN_0054f8f0
// Address: 0054f8f0
CCryptVessel * __cdecl factoryFunc(void);

// Original: core_vessel.cpp_CCryptVessel_getActorType_FUN_0054f910
// Address: 0054f910
CDemonActorType * CCryptVessel::getActorType(void);

// Original: core_vessel.cpp_CCryptVessel_ctor_FUN_0054f920
// Address: 0054f920
CCryptVessel * __cdecl CCryptVessel::ctor(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_setup_FUN_0054fa80
// Address: 0054fa80
void CCryptVessel::setup(CDemonActor *param_1);

// Original: core_vessel.cpp_CCryptVessel_canPickup_FUN_0054fbc0
// Address: 0054fbc0
undefined4 CCryptVessel::canPickup(int param_1,CDemonActor *param_2);

// Original: core_vessel.cpp_CCryptVessel_pickup_FUN_0054fc00
// Address: 0054fc00
void CCryptVessel::pickup(int param_1,undefined4 param_2);

// Original: core_vessel.cpp_CCryptVessel_onDropped_FUN_0054fc10
// Address: 0054fc10
void CCryptVessel::onDropped(int param_1);

// Original: core_vessel.cpp_CCryptVessel_getCarrier_FUN_0054fc30
// Address: 0054fc30
undefined4 CCryptVessel::getCarrier(int param_1);

// Original: core_vessel.cpp_FUN_0054fc40
// Address: 0054fc40
int __cdecl FUN_0054fc40(CCryptVessel *actor);

// Original: core_vessel.cpp_CCryptVessel_process_FUN_0054fc60
// Address: 0054fc60
void CCryptVessel::process(int param_1,float param_2);

// Original: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_00550210
// Address: 00550210
undefined4 CCryptVessel::renderOpaque(int param_1);

// Original: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_00550370
// Address: 00550370
undefined4 CCryptVessel::renderTransparent(int param_1);

// Original: core_vessel.cpp_CCryptVessel_renderBackground_FUN_005504c0
// Address: 005504c0
void CCryptVessel::renderBackground(void);

// Original: core_vessel.cpp_CCryptVessel_archive_FUN_00550540
// Address: 00550540
void CCryptVessel::archive(CDemonActor *param_1);

// Original: core_vessel.cpp_CCryptVessel_getCollisionType_FUN_00550650
// Address: 00550650
ECollisionType __cdecl CCryptVessel::getCollisionType(CCryptVessel *this_ptr,SCollisionInfo *collision_info);

// Original: core_vessel.cpp_CCryptVessel_getBoundingBox_FUN_00550670
// Address: 00550670
CBoundingBox3D * __cdecl CCryptVessel::getBoundingBox(CCryptVessel *this_ptr,CBoundingBox3D *out_box);

// Original: core_vessel.cpp_CCryptVessel_dtor_FUN_005506c0
// Address: 005506c0
CCryptVessel * __cdecl CCryptVessel::dtor(CCryptVessel *this_ptr,uint flags);
