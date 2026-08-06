#pragma once

// Function prototypes for core/bodypart.cpp
// Generated from Ghidra function signatures

// Original: core_bodypart.cpp_staticInit_FUN_00415b00
// Address: 00415b00
void __cdecl staticInit(void);

// Original: core_bodypart.cpp_createBodyPart_FUN_00415b30
// Address: 00415b30
CBodyPart * __cdecl createBodyPart(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,int blood_type);

// Original: core_bodypart.cpp_factoryFunc_FUN_00415cf0
// Address: 00415cf0
CBodyPart * __cdecl factoryFunc(void);

// Original: core_bodypart.cpp_CBodyPart_getActorType_FUN_00415d10
// Address: 00415d10
CDemonActorType * __cdecl CBodyPart::getActorType(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_ctor_FUN_00415d20
// Address: 00415d20
CBodyPart * __cdecl CBodyPart::ctor(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_dtor_FUN_00415e40
// Address: 00415e40
CBodyPart * __cdecl CBodyPart::dtor(CBodyPart *this_ptr,uint flags);

// Original: core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0
// Address: 00415ee0
void __cdecl CBodyPart::setCounts(CBodyPart *this_ptr,int vertex_count,int tri_count);

// Original: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030
// Address: 00416030
void __cdecl CBodyPart::renderGeometry(CBodyPart *this_ptr,int render_flags);

// Original: core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004161a0
// Address: 004161a0
int __cdecl CBodyPart::renderOpaque(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00416300
// Address: 00416300
void __cdecl CBodyPart::renderBackground(CBodyPart *this_ptr,int layer_flag);

// Original: core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00416430
// Address: 00416430
int __cdecl CBodyPart::renderTransparent(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_setup_FUN_00416500
// Address: 00416500
void __cdecl CBodyPart::setup(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_archive_FUN_00416570
// Address: 00416570
void __cdecl CBodyPart::archive(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_process_FUN_004168d0
// Address: 004168d0
void __cdecl CBodyPart::process(CBodyPart *this_ptr,float delta_time);

// Original: core_bodypart.cpp_CBodyPart_processFires_FUN_00416b00
// Address: 00416b00
void __cdecl CBodyPart::processFires(CBodyPart *this_ptr,float delta_time);

// Original: core_bodypart.cpp_CBodyPart_getCollisionType_FUN_00416c40
// Address: 00416c40
ECollisionType __cdecl CBodyPart::getCollisionType(CBodyPart *this_ptr,SCollisionInfo *collision_info);

// Original: core_bodypart.cpp_CBodyPart_getBoundingBox_FUN_00416c50
// Address: 00416c50
CBoundingBox3D * __cdecl CBodyPart::getBoundingBox(CBodyPart *this_ptr,CBoundingBox3D *out_box);

// Original: core_bodypart.cpp_CBodyPart_canPickup_FUN_00416c90
// Address: 00416c90
int __cdecl CBodyPart::canPickup(CBodyPart *this_ptr,CDemonActor *picker);

// Original: core_bodypart.cpp_CBodyPart_pickup_FUN_00416cb0
// Address: 00416cb0
void __cdecl CBodyPart::pickup(CBodyPart *this_ptr,CDemonActor *carrier);

// Original: core_bodypart.cpp_CBodyPart_onDropped_FUN_00416cc0
// Address: 00416cc0
void __cdecl CBodyPart::onDropped(CBodyPart *this_ptr,CVector3f *drop_position);

// Original: core_bodypart.cpp_CBodyPart_getCarrier_FUN_00416d30
// Address: 00416d30
CDemonActor * __cdecl CBodyPart::getCarrier(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
// Address: 00416d40
void __cdecl CBodyPart::finalizeGeometry(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320
// Address: 00417320
void __cdecl CBodyPart::applyRotation(CBodyPart *this_ptr,CVector3f *euler_angles);

// Original: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730
// Address: 00417730
void __cdecl CBodyPart::optimizeBoundingBoxRotation(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max);

// Original: core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_00417ac0
// Address: 00417ac0
void __cdecl CBodyPart::addAttachedModel(CBodyPart *this_ptr,char *model_name,CVector3f *scale,CVector3f *position);

// Original: core_bodypart.cpp_CBodyPart_addFire_FUN_00417b40
// Address: 00417b40
void __cdecl CBodyPart::addFire(CBodyPart *this_ptr,CVector3f *position);

// Original: core_bodypart.cpp_CBodyPart_addTexture_FUN_00417c90
// Address: 00417c90
int __cdecl CBodyPart::addTexture(CBodyPart *this_ptr,char *texture_name);

// Original: core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_00417d70
// Address: 00417d70
void __cdecl CBodyPart::setupPhysicsBox(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_spawnGore_FUN_00417eb0
// Address: 00417eb0
void __cdecl CBodyPart::spawnGore(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_00417ef0
// Address: 00417ef0
int __cdecl CBodyPart::getAllowedMeleeAttackTypes(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_00417f10
// Address: 00417f10
void __cdecl CBodyPart::fillAttackDamageInfo(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim);

// Original: core_bodypart.cpp_scaleVector_FUN_00417f60
// Address: 00417f60
CVector3f * __cdecl scaleVector(CVector3f *src,CVector3f *dst,float *scalar);

// Original: core_bodypart.cpp_subtractVector_FUN_00417f90
// Address: 00417f90
CVector3f * __cdecl subtractVector(CVector3f *a,CVector3f *dst,CVector3f *b);

// Original: core_bodypart.cpp_addVector_FUN_00417fc0
// Address: 00417fc0
CVector3f * __cdecl addVector(CVector3f *a,CVector3f *dst,CVector3f *b);

// Original: core_bodypart.cpp_FUN_00417fec
// Address: 00417fec
void FUN_00417fec(void);

// Original: core_bodypart.cpp_boundingBoxExtent_FUN_00418010
// Address: 00418010
CBoundingBox3D * __cdecl boundingBoxExtent(CBoundingBox3D *src,CBoundingBox3D *dst);

// Original: core_bodypart.cpp_FUN_0041803d
// Address: 0041803d
float * FUN_0041803d(float *param_1);

// Original: core_bodypart.cpp_SBodyPartFire_ctor_FUN_004180a0
// Address: 004180a0
SBodyPartFire * __cdecl SBodyPartFire::ctor(SBodyPartFire *this_ptr);

// Original: core_bodypart.cpp_SBodyPartFire_dtor_FUN_004180c0
// Address: 004180c0
SBodyPartFire * __cdecl SBodyPartFire::dtor(SBodyPartFire *this_ptr,uint flags);

// Original: core_bodypart.cpp_SBodyPartModel_ctor_FUN_004180e0
// Address: 004180e0
SBodyPartModel * __cdecl SBodyPartModel::ctor(SBodyPartModel *this_ptr);

// Original: core_bodypart.cpp_SBodyPartModel_dtor_FUN_00418100
// Address: 00418100
SBodyPartModel * __cdecl SBodyPartModel::dtor(SBodyPartModel *this_ptr,uint flags);

// Original: core_bodypart.cpp_SBodyPartModel_arrdtor_FUN_00418110
// Address: 00418110
SBodyPartModel * __cdecl SBodyPartModel::arrdtor(SBodyPartModel *this_ptr,uint flags);

// Original: core_bodypart.cpp_SBodyPartFire_arrdtor_FUN_00418130
// Address: 00418130
SBodyPartFire * __cdecl SBodyPartFire::arrdtor(SBodyPartFire *this_ptr,uint flags);
