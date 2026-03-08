#pragma once

// Function prototypes for core/filmreel.cpp
// Generated from Ghidra function signatures

// Original: core_filmreel.cpp_staticInit_FUN_004be620
// Address: 004be620
void __cdecl staticInit(void);

// Original: core_filmreel.cpp_factoryFunc_FUN_004be670
// Address: 004be670
CFilmReel * __cdecl factoryFunc(void);

// Original: core_filmreel.cpp_CFilmReel_getActorType_FUN_004be6a0
// Address: 004be6a0
CDemonActorType * __cdecl CFilmReel::getActorType(CFilmReel *this_ptr);

// Original: core_filmreel.cpp_CFilmReel_ctor_FUN_004be6b0
// Address: 004be6b0
CFilmReel * __cdecl CFilmReel::ctor(CFilmReel *this_ptr);

// Original: core_filmreel.cpp_CFilmReel_setup_FUN_004be720
// Address: 004be720
void __cdecl CFilmReel::setup(CFilmReel *this_ptr);

// Original: core_filmreel.cpp_CFilmReel_canPickup_FUN_004be7b0
// Address: 004be7b0
int __cdecl CFilmReel::canPickup(CFilmReel *this_ptr,CDemonActor *picker);

// Original: core_filmreel.cpp_CFilmReel_pickup_FUN_004be7d0
// Address: 004be7d0
void __cdecl CFilmReel::pickup(CFilmReel *this_ptr,CDemonActor *carrier);

// Original: core_filmreel.cpp_CFilmReel_onDropped_FUN_004be7e0
// Address: 004be7e0
void __cdecl CFilmReel::onDropped(CFilmReel *this_ptr,CVector3f *drop_position);

// Original: core_filmreel.cpp_CFilmReel_getCarrier_FUN_004be7f0
// Address: 004be7f0
CDemonActor * __cdecl CFilmReel::getCarrier(CFilmReel *this_ptr);

// Original: core_filmreel.cpp_CFilmReel_process_FUN_004be800
// Address: 004be800
void __cdecl CFilmReel::process(CFilmReel *this_ptr,float delta_time);

// Original: core_filmreel.cpp_CFilmReel_renderOpaque_FUN_004be810
// Address: 004be810
int __cdecl CFilmReel::renderOpaque(CFilmReel *this_ptr);

// Original: core_filmreel.cpp_CFilmReel_renderBackground_FUN_004be880
// Address: 004be880
void __cdecl CFilmReel::renderBackground(CFilmReel *this_ptr,int layer_flag);

// Original: core_filmreel.cpp_CFilmReel_archive_FUN_004be8a0
// Address: 004be8a0
void __cdecl CFilmReel::archive(CFilmReel *this_ptr);

// Original: core_filmreel.cpp_CFilmReel_getCollisionType_FUN_004be8f0
// Address: 004be8f0
ECollisionType __cdecl CFilmReel::getCollisionType(CFilmReel *this_ptr,SCollisionInfo *collision_info);

// Original: core_filmreel.cpp_CFilmReel_getBoundingBox_FUN_004be910
// Address: 004be910
CBoundingBox3D * __cdecl CFilmReel::getBoundingBox(CFilmReel *this_ptr,CBoundingBox3D *out_box);

// Original: core_filmreel.cpp_CFilmReel_getPropertyList_FUN_004be960
// Address: 004be960
void __cdecl CFilmReel::getPropertyList(CFilmReel *this_ptr,CActorPropertyList *property_list);

// Original: core_filmreel.cpp_CFilmReel_addFilesToExtract_FUN_004be9b0
// Address: 004be9b0
void __cdecl CFilmReel::addFilesToExtract(CFilmReel *this_ptr,_FILE *file_handle);

// Original: core_filmreel.cpp_factoryFunc_FUN_004bea00
// Address: 004bea00
CFilmProjector * __cdecl factoryFunc(void);

// Original: core_filmreel.cpp_CFilmProjector_getActorType_FUN_004bea30
// Address: 004bea30
CDemonActorType * __cdecl CFilmProjector::getActorType(CFilmProjector *this_ptr);

// Original: core_filmreel.cpp_CFilmProjector_ctor_FUN_004bea40
// Address: 004bea40
CFilmProjector * __cdecl CFilmProjector::ctor(CFilmProjector *this_ptr);

// Original: core_filmreel.cpp_CFilmProjector_setup_FUN_004beb00
// Address: 004beb00
void __cdecl CFilmProjector::setup(CFilmProjector *this_ptr);

// Original: core_filmreel.cpp_CFilmProjector_archive_FUN_004beb40
// Address: 004beb40
void __cdecl CFilmProjector::archive(CFilmProjector *this_ptr);

// Original: core_filmreel.cpp_CFilmProjector_getBoundingBox_FUN_004becd0
// Address: 004becd0
CBoundingBox3D * __cdecl CFilmProjector::getBoundingBox(CFilmProjector *this_ptr,CBoundingBox3D *out_box);

// Original: core_filmreel.cpp_CFilmProjector_renderOpaque_FUN_004bed00
// Address: 004bed00
int __cdecl CFilmProjector::renderOpaque(CFilmProjector *this_ptr);

// Original: core_filmreel.cpp_CFilmProjector_archive_FUN_004bede0
// Address: 004bede0
void __cdecl CFilmProjector::archive(CFilmProjector *this_ptr);

// Original: core_filmreel.cpp_CFilmProjector_getPropertyList_FUN_004bee30
// Address: 004bee30
void __cdecl CFilmProjector::getPropertyList(CFilmProjector *this_ptr,CActorPropertyList *property_list);

// Original: core_filmreel.cpp_CFilmReel_dtor_FUN_004bee80
// Address: 004bee80
CFilmReel * __cdecl CFilmReel::dtor(CFilmReel *this_ptr,uint flags);

// Original: core_filmreel.cpp_CFilmProjector_dtor_FUN_004beed0
// Address: 004beed0
CFilmProjector * __cdecl CFilmProjector::dtor(CFilmProjector *this_ptr,uint flags);
