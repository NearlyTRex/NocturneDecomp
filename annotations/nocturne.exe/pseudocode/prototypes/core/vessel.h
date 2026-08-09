#pragma once

// Function prototypes for core/vessel.cpp
// Generated from Ghidra function signatures

// Original: core_vessel.cpp_staticInit_FUN_0054f8c0
// Address: 0054f8c0
void __cdecl staticInit(void);

// Original: core_vessel.cpp_factoryFuncCryptVessel_FUN_0054f8f0
// Address: 0054f8f0
CCryptVessel * __cdecl factoryFuncCryptVessel(void);

// Original: core_vessel.cpp_CCryptVessel_getActorType_FUN_0054f910
// Address: 0054f910
CDemonActorType * __cdecl CCryptVessel::getActorType(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_ctor_FUN_0054f920
// Address: 0054f920
CCryptVessel * __cdecl CCryptVessel::ctor(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_setup_FUN_0054fa80
// Address: 0054fa80
void __cdecl CCryptVessel::setup(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_canPickup_FUN_0054fbc0
// Address: 0054fbc0
int __cdecl CCryptVessel::canPickup(CCryptVessel *this_ptr,CDemonActor *picker);

// Original: core_vessel.cpp_CCryptVessel_pickup_FUN_0054fc00
// Address: 0054fc00
void __cdecl CCryptVessel::pickup(CCryptVessel *this_ptr,CDemonActor *carrier);

// Original: core_vessel.cpp_CCryptVessel_onDropped_FUN_0054fc10
// Address: 0054fc10
void __cdecl CCryptVessel::onDropped(CCryptVessel *this_ptr,CVector3f *drop_position);

// Original: core_vessel.cpp_CCryptVessel_getCarrier_FUN_0054fc30
// Address: 0054fc30
CDemonActor * __cdecl CCryptVessel::getCarrier(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_FUN_0054fc40
// Address: 0054fc40
int __cdecl CCryptVessel(CCryptVessel *actor);

// Original: core_vessel.cpp_CCryptVessel_process_FUN_0054fc60
// Address: 0054fc60
void __cdecl CCryptVessel::process(CCryptVessel *this_ptr,float delta_time);

// Original: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_00550210
// Address: 00550210
int __cdecl CCryptVessel::renderOpaque(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_00550370
// Address: 00550370
int __cdecl CCryptVessel::renderTransparent(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_renderBackground_FUN_005504c0
// Address: 005504c0
void __cdecl CCryptVessel::renderBackground(CCryptVessel *this_ptr,int layer_flag);

// Original: core_vessel.cpp_CCryptVessel_archive_FUN_00550540
// Address: 00550540
void __cdecl CCryptVessel::archive(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_getCollisionType_FUN_00550650
// Address: 00550650
ECollisionType __cdecl CCryptVessel::getCollisionType(CCryptVessel *this_ptr,SCollisionInfo *collision_info);

// Original: core_vessel.cpp_CCryptVessel_getBoundingBox_FUN_00550670
// Address: 00550670
CBoundingBox3D * __cdecl CCryptVessel::getBoundingBox(CCryptVessel *this_ptr,CBoundingBox3D *out_box);

// Original: core_vessel.cpp_CCryptVessel_dtor_FUN_005506c0
// Address: 005506c0
CCryptVessel * __cdecl CCryptVessel::dtor(CCryptVessel *this_ptr,uint flags);
