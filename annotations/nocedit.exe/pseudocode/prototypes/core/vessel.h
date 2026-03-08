#pragma once

// Function prototypes for core/vessel.cpp
// Generated from Ghidra function signatures

// Original: core_vessel.cpp_staticInit_FUN_005e8df0
// Address: 005e8df0
void __cdecl staticInit(void);

// Original: core_vessel.cpp_factoryFunc_FUN_005e8e20
// Address: 005e8e20
CCryptVessel * __cdecl factoryFunc(void);

// Original: core_vessel.cpp_CCryptVessel_getActorType_FUN_005e8e50
// Address: 005e8e50
CDemonActorType * __cdecl CCryptVessel::getActorType(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60
// Address: 005e8e60
CCryptVessel * __cdecl CCryptVessel::ctor(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_setup_FUN_005e8fc0
// Address: 005e8fc0
void __cdecl CCryptVessel::setup(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_canPickup_FUN_005e9100
// Address: 005e9100
int __cdecl CCryptVessel::canPickup(CCryptVessel *this_ptr,CDemonActor *picker);

// Original: core_vessel.cpp_CCryptVessel_pickup_FUN_005e9140
// Address: 005e9140
void __cdecl CCryptVessel::pickup(CCryptVessel *this_ptr,CDemonActor *carrier);

// Original: core_vessel.cpp_CCryptVessel_onDropped_FUN_005e9150
// Address: 005e9150
void __cdecl CCryptVessel::onDropped(CCryptVessel *this_ptr,CVector3f *drop_position);

// Original: core_vessel.cpp_CCryptVessel_getCarrier_FUN_005e9170
// Address: 005e9170
CDemonActor * __cdecl CCryptVessel::getCarrier(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_isStartLocTriggered_FUN_005e9180
// Address: 005e9180
int __cdecl isStartLocTriggered(CCryptVessel *actor);

// Original: core_vessel.cpp_CCryptVessel_process_FUN_005e91a0
// Address: 005e91a0
void __cdecl CCryptVessel::process(CCryptVessel *this_ptr,float delta_time);

// Original: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_005e9750
// Address: 005e9750
int __cdecl CCryptVessel::renderOpaque(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_005e98b0
// Address: 005e98b0
int __cdecl CCryptVessel::renderTransparent(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_renderBackground_FUN_005e9a00
// Address: 005e9a00
void __cdecl CCryptVessel::renderBackground(CCryptVessel *this_ptr,int layer_flag);

// Original: core_vessel.cpp_CCryptVessel_archive_FUN_005e9a80
// Address: 005e9a80
void __cdecl CCryptVessel::archive(CCryptVessel *this_ptr);

// Original: core_vessel.cpp_CCryptVessel_getCollisionType_FUN_005e9b90
// Address: 005e9b90
ECollisionType __cdecl CCryptVessel::getCollisionType(CCryptVessel *this_ptr,SCollisionInfo *collision_info);

// Original: core_vessel.cpp_CCryptVessel_getBoundingBox_FUN_005e9bb0
// Address: 005e9bb0
CBoundingBox3D * __cdecl CCryptVessel::getBoundingBox(CCryptVessel *this_ptr,CBoundingBox3D *out_box);

// Original: core_vessel.cpp_CCryptVessel_getPropertyList_FUN_005e9c00
// Address: 005e9c00
void __cdecl CCryptVessel::getPropertyList(CCryptVessel *this_ptr,CActorPropertyList *property_list);

// Original: core_vessel.cpp_CCryptVessel_addFilesToExtract_FUN_005e9d10
// Address: 005e9d10
void __cdecl CCryptVessel::addFilesToExtract(CCryptVessel *this_ptr,_FILE *file_handle);

// Original: core_vessel.cpp_CCryptVessel_dtor_FUN_005e9d30
// Address: 005e9d30
CCryptVessel * __cdecl CCryptVessel::dtor(CCryptVessel *this_ptr,uint flags);
