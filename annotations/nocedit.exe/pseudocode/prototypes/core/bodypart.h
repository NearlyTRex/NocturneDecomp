#pragma once

// Function prototypes for core/bodypart.cpp
// Generated from Ghidra function signatures

// Original: core_bodypart.cpp_staticInit_FUN_00418de0
// Address: 00418de0
void staticInit(void);

// Original: core_bodypart.cpp_CreateBodyPart_FUN_00418e10
// Address: 00418e10
undefined CreateBodyPart();

// Original: core_bodypart.cpp_createBodyPart_FUN_00418fd0
// Address: 00418fd0
CBodyPart * createBodyPart(void);

// Original: core_bodypart.cpp_CBodyPart_getActorType_FUN_00419000
// Address: 00419000
CDemonActorType * CBodyPart::getActorType(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
// Address: 00419010
CBodyPart * CBodyPart::ctor(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_CBodyPart_dtor_FUN_00419130
// Address: 00419130
CBodyPart * CBodyPart::dtor(CBodyPart * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6);

// Original: core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
// Address: 004191d0
void CBodyPart::setCounts(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_FUN_00419340
// Address: 00419340
undefined FUN_00419340();

// Original: core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0
// Address: 004194b0
int CBodyPart::renderOpaque(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610
// Address: 00419610
void CBodyPart::renderBackground(CBodyPart * this_ptr, int layer_flag);

// Original: core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419740
// Address: 00419740
int CBodyPart::renderTransparent(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_CBodyPart_setup_FUN_00419810
// Address: 00419810
void CBodyPart::setup(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_CBodyPart_serialize_FUN_00419880
// Address: 00419880
void CBodyPart::serialize(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_CBodyPart_process_FUN_00419be0
// Address: 00419be0
void CBodyPart::process(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_FUN_00419e10
// Address: 00419e10
undefined FUN_00419e10();

// Original: core_bodypart.cpp_CBodyPart_hasCollision_FUN_00419f50
// Address: 00419f50
int CBodyPart::hasCollision(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_CBodyPart_getBoundingBox_FUN_00419f60
// Address: 00419f60
CBoundingBox3D * CBodyPart::getBoundingBox(CBodyPart * this_ptr, CBoundingBox3D * out_box);

// Original: core_bodypart.cpp_CBodyPart_canPickup_FUN_00419fa0
// Address: 00419fa0
int CBodyPart::canPickup(CBodyPart * this_ptr, CDemonActor * picker);

// Original: core_bodypart.cpp_CBodyPart_pickup_FUN_00419fc0
// Address: 00419fc0
void CBodyPart::pickup(CBodyPart * this_ptr, CDemonActor * carrier);

// Original: core_bodypart.cpp_CBodyPart_onDropped_FUN_00419fd0
// Address: 00419fd0
void CBodyPart::onDropped(CBodyPart * this_ptr, CVector3f * drop_position);

// Original: core_bodypart.cpp_CBodyPart_getCarrier_FUN_0041a040
// Address: 0041a040
CDemonActor * CBodyPart::getCarrier(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_FUN_0041a050
// Address: 0041a050
undefined FUN_0041a050();

// Original: core_bodypart.cpp_FUN_0041a630
// Address: 0041a630
undefined FUN_0041a630();

// Original: core_bodypart.cpp_FUN_0041aa40
// Address: 0041aa40
undefined FUN_0041aa40();

// Original: core_bodypart.cpp_FUN_0041add0
// Address: 0041add0
undefined FUN_0041add0();

// Original: core_bodypart.cpp_FUN_0041ae50
// Address: 0041ae50
undefined FUN_0041ae50();

// Original: core_bodypart.cpp_CBodyPart_FUN_0041af90
// Address: 0041af90
int CBodyPart(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_CBodyPart_FUN_0041b070
// Address: 0041b070
void CBodyPart(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_FUN_0041b1b0
// Address: 0041b1b0
undefined FUN_0041b1b0();

// Original: core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0
// Address: 0041b1f0
int CBodyPart::getAllowedMeleeAttackTypes(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210
// Address: 0041b210
void CBodyPart::fillAttackDamageInfo(CBodyPart * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim);

// Original: core_bodypart.cpp_CBodyPart_processInEditor_FUN_0041b260
// Address: 0041b260
void CBodyPart::processInEditor(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280
// Address: 0041b280
int CBodyPart::initializeInEditor(CBodyPart * this_ptr);

// Original: core_bodypart.cpp_FUN_0041b4e0
// Address: 0041b4e0
undefined FUN_0041b4e0();

// Original: core_bodypart.cpp_FUN_0041b510
// Address: 0041b510
undefined FUN_0041b510();

// Original: core_bodypart.cpp_FUN_0041b540
// Address: 0041b540
undefined FUN_0041b540();

// Original: core_bodypart.cpp_FUN_0041b570
// Address: 0041b570
undefined FUN_0041b570();

// Original: core_bodypart.cpp_FUN_0041b590
// Address: 0041b590
undefined FUN_0041b590();

// Original: core_bodypart.cpp_FUN_0041b5c0
// Address: 0041b5c0
undefined FUN_0041b5c0();

// Original: core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b620
// Address: 0041b620
SBodyPartFire * SBodyPartFire::ctor(SBodyPartFire * this_ptr);

// Original: core_bodypart.cpp_SBodyPartFire_dtor_FUN_0041b640
// Address: 0041b640
SBodyPartFire * SBodyPartFire::dtor(SBodyPartFire * this_ptr);

// Original: core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b660
// Address: 0041b660
SBodyPartModel * SBodyPartModel::ctor(SBodyPartModel * this_ptr);

// Original: core_bodypart.cpp_SBodyPartModel_dtor_FUN_0041b680
// Address: 0041b680
SBodyPartModel * SBodyPartModel::dtor(SBodyPartModel * this_ptr);

// Original: core_bodypart.cpp_freeBodyPartModels_FUN_0041b690
// Address: 0041b690
int freeBodyPartModels(SBodyPartModel * * objs);

// Original: core_bodypart.cpp_freeBodyPartFires_FUN_0041b6b0
// Address: 0041b6b0
int freeBodyPartFires(SBodyPartFire * * objs);
