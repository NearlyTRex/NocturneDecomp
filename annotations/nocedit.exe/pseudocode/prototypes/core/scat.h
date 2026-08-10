#pragma once

// Function prototypes for core/scat.cpp
// Generated from Ghidra function signatures

// Original: core_scat.cpp_staticInit_FUN_00556e00
// Address: 00556e00
void __cdecl staticInit(void);

// Original: core_scat.cpp_factoryFuncScat_FUN_00556e90
// Address: 00556e90
CScat * __cdecl factoryFuncScat(void);

// Original: core_scat.cpp_CScat_getActorType_FUN_00556ec0
// Address: 00556ec0
CDemonActorType * __cdecl CScat::getActorType(CScat *this_ptr);

// Original: core_scat.cpp_CScat_ctor_FUN_00556ed0
// Address: 00556ed0
CScat * __cdecl CScat::ctor(CScat *this_ptr);

// Original: core_scat.cpp_CScat_setup_FUN_00556f90
// Address: 00556f90
void __cdecl CScat::setup(CScat *this_ptr);

// Original: core_scat.cpp_CScat_createDefaultWeapon_FUN_00557150
// Address: 00557150
void __cdecl CScat::createDefaultWeapon(CScat *this_ptr);

// Original: core_scat.cpp_CScat_process_FUN_005571f0
// Address: 005571f0
void __cdecl CScat::process(CScat *this_ptr,float delta_time);

// Original: core_scat.cpp_CScat_updateAI_FUN_005578e0
// Address: 005578e0
void __cdecl CScat::updateAI(CScat *this_ptr,float delta_time);

// Original: core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_00557d20
// Address: 00557d20
void __cdecl CScat::advanceMotionWithGrabDamage(CScat *this_ptr,float delta_time);

// Original: core_scat.cpp_CScat_archive_FUN_00557db0
// Address: 00557db0
void __cdecl CScat::archive(CScat *this_ptr);

// Original: core_scat.cpp_CScat_renderOpaque_FUN_00557df0
// Address: 00557df0
int __cdecl CScat::renderOpaque(CScat *this_ptr);

// Original: core_scat.cpp_CScat_processDamage_FUN_00557ea0
// Address: 00557ea0
void __cdecl CScat::processDamage(CScat *this_ptr,SDamageInfo *damage_info);

// Original: core_scat.cpp_CScat_isWeaponDrawn_FUN_00557ff0
// Address: 00557ff0
int __cdecl CScat::isWeaponDrawn(CScat *this_ptr);

// Original: core_scat.cpp_CScat_drawWeapon_FUN_00558000
// Address: 00558000
void __cdecl CScat::drawWeapon(CScat *this_ptr,int drawn);

// Original: core_scat.cpp_CScat_isWeaponReady_FUN_00558010
// Address: 00558010
int __cdecl CScat::isWeaponReady(CScat *this_ptr);

// Original: core_scat.cpp_CScat_updateWeaponState_FUN_00558060
// Address: 00558060
void __cdecl CScat::updateWeaponState(CScat *this_ptr,float delta_time);

// Original: core_scat.cpp_CScat_blendLayerAction_FUN_005582c0
// Address: 005582c0
void __cdecl CScat::blendLayerAction(CScat *this_ptr);

// Original: core_scat.cpp_CScat_blendAimBones_FUN_005584a0
// Address: 005584a0
void __cdecl CScat::blendAimBones(CScat *this_ptr,int hand_index);

// Original: core_scat.cpp_CScat_updateAiming_FUN_00558720
// Address: 00558720
void __cdecl CScat::updateAiming(CScat *this_ptr,float delta_time,int is_holstered);

// Original: core_scat.cpp_CScat_scoreAimTarget_FUN_00558cf0
// Address: 00558cf0
int __cdecl CScat::scoreAimTarget(CScat *this_ptr,CDemonActor *target,int hand_index);

// Original: core_scat.cpp_CScat_updateWeaponAttachment_FUN_00558fd0
// Address: 00558fd0
void __cdecl CScat::updateWeaponAttachment(CScat *this_ptr);

// Original: core_scat.cpp_CScat_onActorDeleted_FUN_00559100
// Address: 00559100
void __cdecl CScat::onActorDeleted(CScat *this_ptr,CDemonActor *deleted_actor);

// Original: core_scat.cpp_CScat_getPropertyList_FUN_00559120
// Address: 00559120
void __cdecl CScat::getPropertyList(CScat *this_ptr,CActorPropertyList *property_list);

// Original: core_scat.cpp_CScat_addFilesToExtract_FUN_00559140
// Address: 00559140
void __cdecl CScat::addFilesToExtract(CScat *this_ptr,_FILE *file_handle);

// Original: core_scat.cpp_CScat_dtor_FUN_00559160
// Address: 00559160
CScat * __cdecl CScat::dtor(CScat *this_ptr,uint flags);
