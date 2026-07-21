#pragma once

// Function prototypes for core/bodypart.cpp
// Generated from Ghidra function signatures

// Original: core_bodypart.cpp_createBodyPart_FUN_00415b30
// Address: 00415b30
int __cdecl createBodyPart(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);

// Original: core_bodypart.cpp_CBodyPart_ctor_FUN_00415d20
// Address: 00415d20
void __cdecl CBodyPart::ctor(undefined4 param_1);

// Original: core_bodypart.cpp_CBodyPart_dtor_FUN_00415e40
// Address: 00415e40
int CBodyPart::dtor(int param_1,byte param_2);

// Original: core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0
// Address: 00415ee0
void CBodyPart::setCounts(int param_1,undefined4 param_2,undefined4 param_3);

// Original: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030
// Address: 00416030
void __cdecl CBodyPart::renderGeometry(int param_1,undefined4 param_2);

// Original: core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00416430
// Address: 00416430
undefined4 CBodyPart::renderTransparent(int param_1);

// Original: core_bodypart.cpp_CBodyPart_setup_FUN_00416500
// Address: 00416500
void CBodyPart::setup(int param_1);

// Original: core_bodypart.cpp_CBodyPart_archive_FUN_00416570
// Address: 00416570
int CBodyPart::archive(int param_1);

// Original: core_bodypart.cpp_CBodyPart_process_FUN_004168d0
// Address: 004168d0
void CBodyPart::process(int param_1,float param_2);

// Original: core_bodypart.cpp_CBodyPart_processFires_FUN_00416b00
// Address: 00416b00
void __cdecl CBodyPart::processFires(int param_1,float param_2);

// Original: core_bodypart.cpp_CBodyPart_canPickup_FUN_00416c90
// Address: 00416c90
undefined4 CBodyPart::canPickup(int param_1);

// Original: core_bodypart.cpp_CBodyPart_onDropped_FUN_00416cc0
// Address: 00416cc0
void CBodyPart::onDropped(int param_1,int param_2);

// Original: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
// Address: 00416d40
void __cdecl CBodyPart::finalizeGeometry(int param_1);

// Original: core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320
// Address: 00417320
void __cdecl CBodyPart::applyRotation(int param_1,undefined4 param_2);

// Original: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730
// Address: 00417730
void __cdecl CBodyPart::optimizeBoundingBoxRotation(int param_1);

// Original: core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_00417ac0
// Address: 00417ac0
void __cdecl CBodyPart::addAttachedModel(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);

// Original: core_bodypart.cpp_CBodyPart_addFire_FUN_00417b40
// Address: 00417b40
void __cdecl CBodyPart::addFire(int param_1,undefined4 *param_2);

// Original: core_bodypart.cpp_CBodyPart_addTexture_FUN_00417c90
// Address: 00417c90
int __cdecl CBodyPart::addTexture(int param_1,char *param_2);

// Original: core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_00417d70
// Address: 00417d70
void CBodyPart::setupPhysicsBox(int param_1);

// Original: core_bodypart.cpp_CBodyPart_spawnGore_FUN_00417eb0
// Address: 00417eb0
void __cdecl CBodyPart::spawnGore(int param_1);

// Original: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_00417f10
// Address: 00417f10
void CBodyPart::fillAttackDamageInfo(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);

// Original: core_bodypart.cpp_scaleVector_FUN_00417f60
// Address: 00417f60
void __cdecl scaleVector(float *param_1,float *param_2,float *param_3);

// Original: core_bodypart.cpp_subtractVector_FUN_00417f90
// Address: 00417f90
void __cdecl subtractVector(float *param_1,float *param_2,float *param_3);

// Original: core_bodypart.cpp_addVector_FUN_00417fc0
// Address: 00417fc0
void __cdecl addVector(float *param_1,float *param_2,float *param_3);

// Original: core_bodypart.cpp_SBodyPartFire_ctor_FUN_004180a0
// Address: 004180a0
int SBodyPartFire::ctor(int param_1);

// Original: core_bodypart.cpp_SBodyPartFire_dtor_FUN_004180c0
// Address: 004180c0
int SBodyPartFire::dtor(int param_1);

// Original: core_bodypart.cpp_SBodyPartModel_ctor_FUN_004180e0
// Address: 004180e0
int SBodyPartModel::ctor(int param_1);

// Original: core_bodypart.cpp_SBodyPartModel_dtor_FUN_00418100
// Address: 00418100
undefined4 SBodyPartModel::dtor(undefined4 param_1);

// Original: core_bodypart.cpp_SBodyPartModel_arrdtor_FUN_00418110
// Address: 00418110
void __cdecl SBodyPartModel::arrdtor(undefined4 param_1);

// Original: core_bodypart.cpp_SBodyPartFire_arrdtor_FUN_00418130
// Address: 00418130
void __cdecl SBodyPartFire::arrdtor(undefined4 param_1);
