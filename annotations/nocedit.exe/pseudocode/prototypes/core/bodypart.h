#pragma once

// Function prototypes for core/bodypart.cpp
// Generated from Ghidra function signatures

// Original: core_bodypart.cpp_staticInit_FUN_00418de0
// Address: 00418de0
void __cdecl staticInit(void);

// Original: core_bodypart.cpp_createBodyPart_FUN_00418e10
// Address: 00418e10
CBodyPart * __cdecl createBodyPart(void);

// Original: core_bodypart.cpp_factoryFunc_FUN_00418fd0
// Address: 00418fd0
CBodyPart * __cdecl factoryFunc(void);

// Original: core_bodypart.cpp_CBodyPart_getActorType_FUN_00419000
// Address: 00419000
CDemonActorType * __cdecl CBodyPart::getActorType(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
// Address: 00419010
CBodyPart * __cdecl CBodyPart::ctor(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_dtor_FUN_00419130
// Address: 00419130
CBodyPart * __cdecl CBodyPart::dtor(CBodyPart *this_ptr,uint flags);

// Original: core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
// Address: 004191d0
void __cdecl CBodyPart::setCounts(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_FUN_00419340
// Address: 00419340
void __cdecl CBodyPart(CBodyPart *this_ptr,int render_flags);

// Original: core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0
// Address: 004194b0
int __cdecl CBodyPart::renderOpaque(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610
// Address: 00419610
void __cdecl CBodyPart::renderBackground(CBodyPart *this_ptr,int layer_flag);

// Original: core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419740
// Address: 00419740
int __cdecl CBodyPart::renderTransparent(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_setup_FUN_00419810
// Address: 00419810
void __cdecl CBodyPart::setup(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_archive_FUN_00419880
// Address: 00419880
void __cdecl CBodyPart::archive(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_process_FUN_00419be0
// Address: 00419be0
void __cdecl CBodyPart::process(CBodyPart *this_ptr,float delta_time);

// Original: core_bodypart.cpp_CBodyPart_FUN_00419e10
// Address: 00419e10
void __cdecl CBodyPart(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_hasCollision_FUN_00419f50
// Address: 00419f50
int __cdecl CBodyPart::hasCollision(CBodyPart *this_ptr,SCollisionInfo *collision_info);

// Original: core_bodypart.cpp_CBodyPart_getBoundingBox_FUN_00419f60
// Address: 00419f60
CBoundingBox3D * __cdecl CBodyPart::getBoundingBox(CBodyPart *this_ptr,CBoundingBox3D *out_box);

// Original: core_bodypart.cpp_CBodyPart_canPickup_FUN_00419fa0
// Address: 00419fa0
int __cdecl CBodyPart::canPickup(CBodyPart *this_ptr,CDemonActor *picker);

// Original: core_bodypart.cpp_CBodyPart_pickup_FUN_00419fc0
// Address: 00419fc0
void __cdecl CBodyPart::pickup(CBodyPart *this_ptr,CDemonActor *carrier);

// Original: core_bodypart.cpp_CBodyPart_onDropped_FUN_00419fd0
// Address: 00419fd0
void __cdecl CBodyPart::onDropped(CBodyPart *this_ptr,CVector3f *drop_position);

// Original: core_bodypart.cpp_CBodyPart_getCarrier_FUN_0041a040
// Address: 0041a040
CDemonActor * __cdecl CBodyPart::getCarrier(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_FUN_0041a050
// Address: 0041a050
void __cdecl CBodyPart(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_FUN_0041a630
// Address: 0041a630
void __cdecl CBodyPart(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_FUN_0041aa40
// Address: 0041aa40
void __cdecl CBodyPart(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_FUN_0041add0
// Address: 0041add0
void __cdecl CBodyPart(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_FUN_0041ae50
// Address: 0041ae50
void __cdecl CBodyPart(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_FUN_0041af90
// Address: 0041af90
int __cdecl CBodyPart(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_FUN_0041b070
// Address: 0041b070
void __cdecl CBodyPart(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_FUN_0041b1b0
// Address: 0041b1b0
void __cdecl CBodyPart(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0
// Address: 0041b1f0
int __cdecl CBodyPart::getAllowedMeleeAttackTypes(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210
// Address: 0041b210
void __cdecl CBodyPart::fillAttackDamageInfo(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim);

// Original: core_bodypart.cpp_CBodyPart_processInEditor_FUN_0041b260
// Address: 0041b260
void __cdecl CBodyPart::processInEditor(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280
// Address: 0041b280
int __cdecl CBodyPart::initializeInEditor(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_FUN_0041b4e0
// Address: 0041b4e0
void __cdecl FUN_0041b4e0(void);

// Original: core_bodypart.cpp_FUN_0041b510
// Address: 0041b510
void __cdecl FUN_0041b510(void);

// Original: core_bodypart.cpp_FUN_0041b540
// Address: 0041b540
void __cdecl FUN_0041b540(void);

// Original: core_bodypart.cpp_FUN_0041b570
// Address: 0041b570
void __cdecl FUN_0041b570(void);

// Original: core_bodypart.cpp_FUN_0041b590
// Address: 0041b590
float * __cdecl FUN_0041b590(void);

// Original: core_bodypart.cpp_FUN_0041b5c0
// Address: 0041b5c0
float * __cdecl FUN_0041b5c0(void);

// Original: core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b620
// Address: 0041b620
SBodyPartFire * __cdecl SBodyPartFire::ctor(SBodyPartFire *this_ptr);

// Original: core_bodypart.cpp_SBodyPartFire_dtor_FUN_0041b640
// Address: 0041b640
SBodyPartFire * __cdecl SBodyPartFire::dtor(SBodyPartFire *this_ptr,uint flags);

// Original: core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b660
// Address: 0041b660
SBodyPartModel * __cdecl SBodyPartModel::ctor(SBodyPartModel *this_ptr);

// Original: core_bodypart.cpp_SBodyPartModel_dtor_FUN_0041b680
// Address: 0041b680
SBodyPartModel * __cdecl SBodyPartModel::dtor(SBodyPartModel *this_ptr,uint flags);

// Original: core_bodypart.cpp_SBodyPartModel_arrdtor_FUN_0041b690
// Address: 0041b690
SBodyPartModel * __cdecl SBodyPartModel::arrdtor(SBodyPartModel *objs,uint flags);

// Original: core_bodypart.cpp_SBodyPartFire_arrdtor_FUN_0041b6b0
// Address: 0041b6b0
SBodyPartFire * __cdecl SBodyPartFire::arrdtor(SBodyPartFire *objs,uint flags);
