#pragma once

// Function prototypes for core/bodypart.cpp
// Generated from Ghidra function signatures

// Original: core_bodypart.cpp_staticInit_FUN_00418de0
// Address: 00418de0
void __cdecl staticInit(void);

// Original: core_bodypart.cpp_createBodyPart_FUN_00418e10
// Address: 00418e10
CBodyPart * __cdecl createBodyPart(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,int blood_type);

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
void __cdecl CBodyPart::setCounts(CBodyPart *this_ptr,int vertex_count,int tri_count);

// Original: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00419340
// Address: 00419340
void __cdecl CBodyPart::renderGeometry(CBodyPart *this_ptr,int render_flags);

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

// Original: core_bodypart.cpp_CBodyPart_processFires_FUN_00419e10
// Address: 00419e10
void __cdecl CBodyPart::processFires(CBodyPart *this_ptr,float delta_time);

// Original: core_bodypart.cpp_CBodyPart_getCollisionType_FUN_00419f50
// Address: 00419f50
ECollisionType __cdecl CBodyPart::getCollisionType(CBodyPart *this_ptr,SCollisionInfo *collision_info);

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

// Original: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050
// Address: 0041a050
void __cdecl CBodyPart::finalizeGeometry(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a630
// Address: 0041a630
void __cdecl CBodyPart::applyRotation(CBodyPart *this_ptr,CVector3f *euler_angles);

// Original: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40
// Address: 0041aa40
void __cdecl CBodyPart::optimizeBoundingBoxRotation(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max);

// Original: core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_0041add0
// Address: 0041add0
void __cdecl CBodyPart::addAttachedModel(CBodyPart *this_ptr,char *model_name,CVector3i *scale,CVector3i *position);

// Original: core_bodypart.cpp_CBodyPart_addFire_FUN_0041ae50
// Address: 0041ae50
void __cdecl CBodyPart::addFire(CBodyPart *this_ptr,CVector3f *position);

// Original: core_bodypart.cpp_CBodyPart_addTexture_FUN_0041af90
// Address: 0041af90
int __cdecl CBodyPart::addTexture(CBodyPart *this_ptr,char *texture_name);

// Original: core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_0041b070
// Address: 0041b070
void __cdecl CBodyPart::setupPhysicsBox(CBodyPart *this_ptr);

// Original: core_bodypart.cpp_CBodyPart_spawnGore_FUN_0041b1b0
// Address: 0041b1b0
void __cdecl CBodyPart::spawnGore(CBodyPart *this_ptr);

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

// Original: core_bodypart.cpp_scaleVector_FUN_0041b4e0
// Address: 0041b4e0
CVector3f * __cdecl scaleVector(CVector3f *src,CVector3f *dst,float *scalar);

// Original: core_bodypart.cpp_subtractVector_FUN_0041b510
// Address: 0041b510
CVector3f * __cdecl subtractVector(CVector3f *a,CVector3f *dst,CVector3f *b);

// Original: core_bodypart.cpp_addVector_FUN_0041b540
// Address: 0041b540
CVector3f * __cdecl addVector(CVector3f *a,CVector3f *dst,CVector3f *b);

// Original: core_bodypart.cpp_copyVector_FUN_0041b570
// Address: 0041b570
CVector3f * __cdecl copyVector(CVector3f *dst,CVector3f *src);

// Original: core_bodypart.cpp_boundingBoxExtent_FUN_0041b590
// Address: 0041b590
CBoundingBox3D * __cdecl boundingBoxExtent(CBoundingBox3D *src,CBoundingBox3D *dst);

// Original: core_bodypart.cpp_boundingBoxCenter_FUN_0041b5c0
// Address: 0041b5c0
CBoundingBox3D * __cdecl boundingBoxCenter(CBoundingBox3D *src,CBoundingBox3D *dst);

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
