#pragma once

// Function prototypes for core/filmreel.cpp
// Generated from Ghidra function signatures

// Original: core_filmreel.cpp_staticInit_FUN_00481bb0
// Address: 00481bb0
void __cdecl staticInit(void);

// Original: core_filmreel.cpp_factoryFunc_FUN_00481c00
// Address: 00481c00
CFilmReel * __cdecl factoryFunc(void);

// Original: core_filmreel.cpp_CFilmReel_getActorType_FUN_00481c20
// Address: 00481c20
CDemonActorType * CFilmReel::getActorType(void);

// Original: core_filmreel.cpp_CFilmReel_ctor_FUN_00481c30
// Address: 00481c30
CFilmReel * __cdecl CFilmReel::ctor(CFilmReel *this_ptr);

// Original: core_filmreel.cpp_CFilmReel_setup_FUN_00481ca0
// Address: 00481ca0
void CFilmReel::setup(CDemonActor *param_1);

// Original: core_filmreel.cpp_CFilmReel_canPickup_FUN_00481d30
// Address: 00481d30
undefined4 CFilmReel::canPickup(undefined4 param_1,CDemonActor *param_2);

// Original: core_filmreel.cpp_CFilmReel_pickup_FUN_00481d50
// Address: 00481d50
void __cdecl CFilmReel::pickup(CFilmReel *this_ptr,CDemonActor *carrier);

// Original: core_filmreel.cpp_CFilmReel_onDropped_FUN_00481d60
// Address: 00481d60
void __cdecl CFilmReel::onDropped(CFilmReel *this_ptr,CVector3f *drop_position);

// Original: core_filmreel.cpp_CFilmReel_getCarrier_FUN_00481d70
// Address: 00481d70
CDemonActor * __cdecl CFilmReel::getCarrier(CFilmReel *this_ptr);

// Original: core_filmreel.cpp_CFilmReel_process_FUN_00481d80
// Address: 00481d80
void CFilmReel::process(void);

// Original: core_filmreel.cpp_CFilmReel_renderOpaque_FUN_00481d90
// Address: 00481d90
int CFilmReel::renderOpaque(int param_1);

// Original: core_filmreel.cpp_CFilmReel_renderBackground_FUN_00481e00
// Address: 00481e00
void CFilmReel::renderBackground(void);

// Original: core_filmreel.cpp_CFilmReel_archive_FUN_00481e20
// Address: 00481e20
void __cdecl CFilmReel::archive(CFilmReel *this_ptr);

// Original: core_filmreel.cpp_CFilmReel_getCollisionType_FUN_00481e70
// Address: 00481e70
ECollisionType __cdecl CFilmReel::getCollisionType(CFilmReel *this_ptr,SCollisionInfo *collision_info);

// Original: core_filmreel.cpp_CFilmReel_getBoundingBox_FUN_00481e90
// Address: 00481e90
CBoundingBox3D * __cdecl CFilmReel::getBoundingBox(CFilmReel *this_ptr,CBoundingBox3D *out_box);

// Original: core_filmreel.cpp_factoryFunc_FUN_00481ee0
// Address: 00481ee0
CFilmProjector * __cdecl factoryFunc(void);

// Original: core_filmreel.cpp_CFilmProjector_getActorType_FUN_00481f00
// Address: 00481f00
CDemonActorType * CFilmProjector::getActorType(void);

// Original: core_filmreel.cpp_CFilmProjector_ctor_FUN_00481f10
// Address: 00481f10
CFilmProjector * __cdecl CFilmProjector::ctor(CFilmProjector *this_ptr);

// Original: core_filmreel.cpp_CFilmProjector_setup_FUN_00481fd0
// Address: 00481fd0
void CFilmProjector::setup(CActorDestination *param_1);

// Original: core_filmreel.cpp_CFilmProjector_process_FUN_00482010
// Address: 00482010
void __cdecl CFilmProjector::process(CFilmProjector *this_ptr,float delta_time);

// Original: core_filmreel.cpp_CFilmProjector_getBoundingBox_FUN_004821a0
// Address: 004821a0
CBoundingBox3D * __cdecl CFilmProjector::getBoundingBox(CFilmProjector *this_ptr,CBoundingBox3D *out_box);

// Original: core_filmreel.cpp_CFilmProjector_renderOpaque_FUN_004821d0
// Address: 004821d0
int CFilmProjector::renderOpaque(CDemonActor *param_1);

// Original: core_filmreel.cpp_CFilmProjector_archive_FUN_004822c0
// Address: 004822c0
void CFilmProjector::archive(CActorDestination *param_1);

// Original: core_filmreel.cpp_CFilmReel_dtor_FUN_00482310
// Address: 00482310
CFilmReel * __cdecl CFilmReel::dtor(CFilmReel *this_ptr,uint flags);

// Original: core_filmreel.cpp_CFilmProjector_dtor_FUN_00482360
// Address: 00482360
CFilmProjector * __cdecl CFilmProjector::dtor(CFilmProjector *this_ptr,uint flags);
