#pragma once

// Function prototypes for core/actor.cpp
// Generated from Ghidra function signatures

// Original: core_actor.cpp_staticInit_FUN_00409840
// Address: 00409840
void __cdecl staticInit(void);

// Original: core_actor.cpp_rayCylinderIntersect_FUN_00409860
// Address: 00409860
float __cdecl rayCylinderIntersect(SCollisionInfo *collision_info,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);

// Original: core_actor.cpp_destroyActor_FUN_00409cd0
// Address: 00409cd0
void __cdecl destroyActor(CDemonActor *actor);

// Original: core_actor.cpp_initTransformCache_FUN_00409cf0
// Address: 00409cf0
CDemonActorTransformState * __cdecl initTransformCache(CDemonActorTransformState *transform_cache);

// Original: core_actor.cpp_CDemonActor_ctor_FUN_00409d30
// Address: 00409d30
CDemonActor * __cdecl CDemonActor::ctor(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
// Address: 00409ea0
CDemonActor * __cdecl CDemonActor::dtor(CDemonActor *this_ptr,uint flags);

// Original: core_actor.cpp_CDemonActor_process_FUN_00409ed0
// Address: 00409ed0
void __cdecl CDemonActor::process(CDemonActor *this_ptr,float delta_time);

// Original: core_actor.cpp_CDemonActor_returnZero_FUN_00409f00
// Address: 00409f00
int __cdecl CDemonActor::returnZero(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_renderBackground_FUN_00409f10
// Address: 00409f10
void __cdecl CDemonActor::renderBackground(CDemonActor *this_ptr,int layer_flag);

// Original: core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
// Address: 00409f20
void __cdecl CDemonActor::setupRenderState(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
// Address: 00409f60
void __cdecl CDemonActor::restoreRenderState(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_getActorType_FUN_00409f70
// Address: 00409f70
CDemonActorType * __cdecl CDemonActor::getActorType(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
// Address: 00409fa0
char * __cdecl CDemonActor::getActorClassName(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_setup_FUN_00409fc0
// Address: 00409fc0
void __cdecl CDemonActor::setup(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
// Address: 0040a000
void __cdecl CDemonActor::updateOrientationMatrix(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_getBoundingBox_FUN_0040a060
// Address: 0040a060
CBoundingBox3D * __cdecl CDemonActor::getBoundingBox(CDemonActor *this_ptr,CBoundingBox3D *out_box);

// Original: core_actor.cpp_CDemonActor_getCollisionType_FUN_0040a090
// Address: 0040a090
ECollisionType __cdecl CDemonActor::getCollisionType(CDemonActor *this_ptr,SCollisionInfo *collision_info);

// Original: core_actor.cpp_CDemonActor_customRayIntersect_FUN_0040a0a0
// Address: 0040a0a0
float __cdecl CDemonActor::customRayIntersect(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);

// Original: core_actor.cpp_CDemonActor_customIntersectCylinderXZ_FUN_0040a0d0
// Address: 0040a0d0
void __cdecl CDemonActor::customIntersectCylinderXZ(CDemonActor *this_ptr,SIntersectXZCylinder *cylinder);

// Original: core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_0040a100
// Address: 0040a100
int __cdecl CDemonActor::customGetFloorHeight(CDemonActor *this_ptr,CVector3f *position,float search_radius,float *out_floor_height);

// Original: core_actor.cpp_CDemonActor_returnZero_FUN_0040a130
// Address: 0040a130
int __cdecl CDemonActor::returnZero(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140
// Address: 0040a140
float __cdecl CDemonActor::cylinderGroundCheck(CDemonActor *this_ptr,float radius,CVector3f *out_normal);

// Original: core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
// Address: 0040a200
CVector3f * __cdecl CDemonActor::transformVector(CDemonActor *this_ptr,CVector3f *output,CVector3f *input);

// Original: core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
// Address: 0040a220
CVector3f * __cdecl CDemonActor::inverseTransformVector(CDemonActor *this_ptr,CVector3f *output_vector,CVector3f *input_vector);

// Original: core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
// Address: 0040a240
CVector3f * __cdecl CDemonActor::localToWorldPoint(CDemonActor *this_ptr,CVector3f *output_world_point,CVector3f *input_local_point);

// Original: core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
// Address: 0040a290
CVector3f * __cdecl CDemonActor::worldToLocalPoint(CDemonActor *this_ptr,CVector3f *output_local_point,CVector3f *input_world_point);

// Original: core_actor.cpp_CDemonActor_playSound_FUN_0040a2e0
// Address: 0040a2e0
uint __cdecl CDemonActor::playSound(CDemonActor *this_ptr,char *sound_name);

// Original: core_actor.cpp_CDemonActor_playAmbientSound_FUN_0040a300
// Address: 0040a300
uint __cdecl CDemonActor::playAmbientSound(CDemonActor *this_ptr,char *sound_name);

// Original: core_actor.cpp_CDemonActor_playSoundWithDelay_FUN_0040a320
// Address: 0040a320
uint __cdecl CDemonActor::playSoundWithDelay(CDemonActor *this_ptr,char *sound_name,float volume);

// Original: core_actor.cpp_CDemonActor_playAmbientSoundWithDelay_FUN_0040a350
// Address: 0040a350
uint __cdecl CDemonActor::playAmbientSoundWithDelay(CDemonActor *this_ptr,char *sound_name,float delay);

// Original: core_actor.cpp_CDemonActor_doNothing_FUN_0040a380
// Address: 0040a380
void __cdecl CDemonActor::doNothing(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_testPointInCylinder_FUN_0040a390
// Address: 0040a390
int __cdecl CDemonActor::testPointInCylinder(CDemonActor *this_ptr,SCollisionReturnInfo *collision_info,float tolerance);

// Original: core_actor.cpp_CDemonActor_testLineIntersection_FUN_0040a420
// Address: 0040a420
int __cdecl CDemonActor::testLineIntersection(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point);

// Original: core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540
// Address: 0040a540
CBoundingBox3D * __cdecl CDemonActor::getWorldBoundingBox(CDemonActor *this_ptr,CBoundingBox3D *output_bbox,SCollisionInfo *collision_info,int bounding_box_type);

// Original: core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740
// Address: 0040a740
float __cdecl CDemonActor::rayIntersect(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox);

// Original: core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10
// Address: 0040ab10
void __cdecl CDemonActor::onLaserHit(CDemonActor *this_ptr,SLaserInfo *laser_info);

// Original: core_actor.cpp_CDemonActor_updateCollisionData_FUN_0040ab30
// Address: 0040ab30
void __cdecl CDemonActor::updateCollisionData(CDemonActor *this_ptr);

// Original: core_actor.cpp_draw3DPointMarker_FUN_0040ab70
// Address: 0040ab70
void __cdecl draw3DPointMarker(CVector3f *world_position,int marker_color);

// Original: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_0040add0
// Address: 0040add0
void __cdecl CDemonActor::renderTargetPoints(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_spawnFlies_FUN_0040b090
// Address: 0040b090
void __cdecl CDemonActor::spawnFlies(CDemonActor *this_ptr,int fly_count,float spawn_radius);

// Original: core_actor.cpp_CDemonActor_calculateChecksum_FUN_0040b0d0
// Address: 0040b0d0
void __cdecl CDemonActor::calculateChecksum(CDemonActor *this_ptr,uint *out_crc);

// Original: core_actor.cpp_CDemonActor_evaluateTriggerCondition_FUN_0040b110
// Address: 0040b110
float __cdecl CDemonActor::evaluateTriggerCondition(CDemonActor *this_ptr,CDemonActor *querying_actor,CVector3f *query_position);

// Original: core_actor.cpp_CDemonActor_processActionButton_FUN_0040b120
// Address: 0040b120
int __cdecl CDemonActor::processActionButton(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150
// Address: 0040b150
void __cdecl CDemonActor::setPositionAndOrientation(CDemonActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation);

// Original: core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0
// Address: 0040b1a0
void __cdecl CDemonActor::onPickup(CDemonActor *this_ptr,CDemonActor *owner);

// Original: core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040b1b0
// Address: 0040b1b0
void __cdecl CDemonActor::getInteractionInfo(CDemonActor *this_ptr,SInteractionInfo *out_info);

// Original: core_actor.cpp_CDemonActor_stopInteraction_FUN_0040b1f0
// Address: 0040b1f0
void __cdecl CDemonActor::stopInteraction(CDemonActor *this_ptr,CDemonActor *user);

// Original: core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040b200
// Address: 0040b200
int __cdecl CDemonActor::getAllowedMeleeAttackTypes(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040b300
// Address: 0040b300
int __cdecl CDemonActor::processMeleeHit(CDemonActor *this_ptr,int hit_type);

// Original: core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0
// Address: 0040bca0
void __cdecl CDemonActor::fillAttackDamageInfo(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim);

// Original: core_actor.cpp_CDemonActor_playAttackHitEffects_FUN_0040bce0
// Address: 0040bce0
void __cdecl CDemonActor::playAttackHitEffects(CDemonActor *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim);

// Original: core_actor.cpp_copyToActorDebugBuffer_FUN_0040bd40
// Address: 0040bd40
char * __cdecl copyToActorDebugBuffer(char *source_string);

// Original: core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040bd90
// Address: 0040bd90
void __cdecl CDemonActor::doCheckForInvalidPointers(CDemonActor *this_ptr,char *context_file,int context_line);

// Original: core_actor.cpp_adjustIndentationLevel_FUN_0040bff0
// Address: 0040bff0
int __cdecl adjustIndentationLevel(int indent_delta);

// Original: core_actor.cpp_CDemonActor_save_FUN_0040c040
// Address: 0040c040
void __cdecl CDemonActor::save(CDemonActor *this_ptr,_FILE *file_handle);

// Original: core_actor.cpp_CDemonActor_load_FUN_0040c160
// Address: 0040c160
void __cdecl CDemonActor::load(CDemonActor *this_ptr,_FILE *file_handle);

// Original: core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
// Address: 0040c320
void __cdecl handleActorPropertyParseError(char *property_description,char *property_type);

// Original: core_actor.cpp_archiveDescription_FUN_0040c3a0
// Address: 0040c3a0
void __cdecl archiveDescription(char *property_description,char *property_name);

// Original: core_actor.cpp_archiveVector_FUN_0040c450
// Address: 0040c450
void __cdecl archiveVector(CVector3f *vector_ptr,char *property_name);

// Original: core_actor.cpp_archiveOrientation_FUN_0040c4f0
// Address: 0040c4f0
void __cdecl archiveOrientation(COrientation *orient_ptr,char *property_name);

// Original: core_actor.cpp_archiveLocation_FUN_0040c590
// Address: 0040c590
void __cdecl archiveLocation(CLocation *location_ptr,char *property_name);

// Original: core_actor.cpp_archiveQuaternion_FUN_0040c630
// Address: 0040c630
void __cdecl archiveQuaternion(CQuaternion4f *quat_ptr,char *property_type);

// Original: core_actor.cpp_archiveString_FUN_0040c6d0
// Address: 0040c6d0
void __cdecl archiveString(char *string_buffer,char *property_type);

// Original: core_actor.cpp_archiveLocalizedString_FUN_0040c7f0
// Address: 0040c7f0
void __cdecl archiveLocalizedString(char *string_buffer,char *localization_key);

// Original: core_actor.cpp_archiveFloat_FUN_0040c880
// Address: 0040c880
void __cdecl archiveFloat(float *float_ptr,char *property_name);

// Original: core_actor.cpp_archiveInteger_FUN_0040c900
// Address: 0040c900
void __cdecl archiveInteger(int *int_ptr,char *property_name);

// Original: core_actor.cpp_archiveActor_FUN_0040c980
// Address: 0040c980
void __cdecl archiveActor(CDemonActor **actor_ptr,char *property_name);

// Original: core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
// Address: 0040ca00
void __cdecl archiveKeyframedModelInstance(CKeyFramedModelInstance *model_ptr,char *property_name);

// Original: core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
// Address: 0040ca80
void __cdecl archiveDeformableModelInstance(CDeformableModelInstance *model_ptr,char *property_name);

// Original: core_actor.cpp_archiveMotionState_FUN_0040cb00
// Address: 0040cb00
void __cdecl archiveMotionState(CMotionController *motion_controller,char *property_name);

// Original: core_actor.cpp_archivePartStatus_FUN_0040cbf0
// Address: 0040cbf0
void __cdecl archivePartStatus(CDeformableModelInstance *model_ptr,char *property_name);

// Original: core_actor.cpp_archiveBox_FUN_0040ce80
// Address: 0040ce80
void __cdecl archiveBox(CBox *box_ptr,char *property_name);

// Original: core_actor.cpp_archiveClothList_FUN_0040cf70
// Address: 0040cf70
void __cdecl archiveClothList(CClothList *cloth_list,char *property_name);

// Original: core_actor.cpp_archiveRules_FUN_0040d110
// Address: 0040d110
void __cdecl archiveRules(CRuleList *rules,char *property_name);

// Original: core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
// Address: 0040d2d0
void __cdecl CDemonActor::archive(CDemonActor *this_ptr);

// Original: core_actor.cpp_registerActorClass_FUN_0040d3f0
// Address: 0040d3f0
CDemonActorType * __cdecl registerActorClass(CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factor_func,int *max_version,int version,CDemonActorType *parent_class_info);

// Original: core_actor.cpp_getActorClassByName_FUN_0040d4d0
// Address: 0040d4d0
CDemonActorType * __cdecl getActorClassByName(char *className);

// Original: core_actor.cpp_createActorByName_FUN_0040d540
// Address: 0040d540
CDemonActor * __cdecl createActorByName(char *class_name);

// Original: core_actor.cpp_matchClassTerm_FUN_0040d600
// Address: 0040d600
int __cdecl matchClassTerm(CDemonActorType *type_ptr,char **parse_pos);

// Original: core_actor.cpp_matchClassExpression_FUN_0040d720
// Address: 0040d720
int __cdecl matchClassExpression(CDemonActorType *type_ptr,char **parse_pos);

// Original: core_actor.cpp_isOfClass_FUN_0040d7e0
// Address: 0040d7e0
int __cdecl isOfClass(CDemonActor *actor_ptr,char *class_name);

// Original: core_actor.cpp_checkNameHash_FUN_0040d810
// Address: 0040d810
int __cdecl checkNameHash(CDemonActorType *type_ptr,uint name_hash);

// Original: core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040d830
// Address: 0040d830
int __cdecl CDemonActor::shouldIgnoreForTargeting(CDemonActor *this_ptr);

// Original: core_actor.cpp_matchesClassName_FUN_0040d840
// Address: 0040d840
int __cdecl matchesClassName(CDemonActorType *type_ptr,char *class_name);

// Original: core_actor.cpp_isOfClassHash_FUN_0040d860
// Address: 0040d860
int __cdecl isOfClassHash(CDemonActor *actor_ptr,uint class_name_hash);

// Original: core_actor.cpp_castToClassHash_FUN_0040d890
// Address: 0040d890
CDemonActor * __cdecl castToClassHash(CDemonActor *actor_ptr,uint class_name_hash);

// Original: core_actor.cpp_syncActorTypeIDs_FUN_0040d8c0
// Address: 0040d8c0
void __cdecl syncActorTypeIDs(void);

// Original: core_actor.cpp_resetActorTypeInfo_FUN_0040d8f0
// Address: 0040d8f0
void __cdecl resetActorTypeInfo(void);

// Original: core_actor.cpp_CDemonActor_processFootstep_FUN_0040d930
// Address: 0040d930
int __cdecl CDemonActor::processFootstep(CDemonActor *this_ptr,float volume);

// Original: core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040d9f0
// Address: 0040d9f0
int __cdecl CDemonActor::processFootstepAt(CDemonActor *this_ptr,CVector3f *location,float volume);

// Original: core_actor.cpp_CDemonActor_handleFootstep_FUN_0040db50
// Address: 0040db50
int __cdecl CDemonActor::handleFootstep(CDemonActor *this_ptr,CVector3f *position,EGroundType ground_type,float volume);

// Original: core_actor.cpp_setRandomSeed_FUN_0040dd20
// Address: 0040dd20
void __cdecl setRandomSeed(uint seed_value);

// Original: core_actor.cpp_generateRandomValue_FUN_0040dd30
// Address: 0040dd30
uint __cdecl generateRandomValue(void);

// Original: core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
// Address: 0040dda0
float __cdecl getRandomFloatFromRange(float min_value,float max_value);

// Original: core_actor.cpp_getRandomInt_FUN_0040de00
// Address: 0040de00
int __cdecl getRandomInt(int min_value,int max_value);

// Original: core_actor.cpp_randomChance_FUN_0040dea0
// Address: 0040dea0
int __cdecl randomChance(float probability_threshold);

// Original: core_actor.cpp_normalizeAngleToPi_FUN_0040df00
// Address: 0040df00
float __cdecl normalizeAngleToPi(float angle_radians);

// Original: core_actor.cpp_crc32ProcessByte_FUN_0040dfc0
// Address: 0040dfc0
void __cdecl crc32ProcessByte(uint *crc_state,byte input_byte);

// Original: core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0
// Address: 0040e0a0
void __cdecl crc32ProcessBuffer(uint *crc_state,byte *buffer,int buffer_length);

// Original: core_actor.cpp_crc32ProcessInt_FUN_0040e0e0
// Address: 0040e0e0
void __cdecl crc32ProcessInt(uint *crc_state,int value);

// Original: core_actor.cpp_crc32ProcessVector_FUN_0040e100
// Address: 0040e100
void __cdecl crc32ProcessVector(uint *crc_state,CVector3f *vector);

// Original: core_actor.cpp_crc32ProcessString_FUN_0040e120
// Address: 0040e120
void __cdecl crc32ProcessString(uint *crc_state,char *string);

// Original: core_actor.cpp_CVector3f_ctor_FUN_0040e160
// Address: 0040e160
CVector3f * __cdecl CVector3f::ctor(CVector3f *this_ptr);

// Original: core_actor.cpp_CVector3f_dtor_FUN_0040e170
// Address: 0040e170
CVector3f * __cdecl CVector3f::dtor(CVector3f *this_ptr,uint flags);

// Original: core_actor.cpp_copyVector_FUN_0040e180
// Address: 0040e180
void __cdecl copyVector(CVector3f *dst_ptr,CVector3f *src_ptr);

// Original: core_actor.cpp_CVector3f_length_FUN_0040e1a0
// Address: 0040e1a0
float __cdecl CVector3f::length(CVector3f *this_ptr);

// Original: core_actor.cpp_CVector3f_zero_FUN_0040e1d0
// Address: 0040e1d0
void __cdecl CVector3f::zero(CVector3f *this_ptr);

// Original: core_actor.cpp_CVector3f_toFixed8_FUN_0040e1f0
// Address: 0040e1f0
void __cdecl CVector3f::toFixed8(CVector3f *this_ptr,CVector3i *other);

// Original: core_actor.cpp_SDamageInfo_dtor_FUN_0040e220
// Address: 0040e220
SDamageInfo * __cdecl SDamageInfo::dtor(SDamageInfo *this_ptr,uint flags);

// Original: core_actor.cpp_CBoundingBox3D_ctor_FUN_0040e230
// Address: 0040e230
CBoundingBox3D * __cdecl CBoundingBox3D::ctor(CBoundingBox3D *this_ptr);

// Original: core_actor.cpp_CBoundingBox3D_copy_FUN_0040e240
// Address: 0040e240
CBoundingBox3D * __cdecl CBoundingBox3D::copy(CBoundingBox3D *this_ptr,CBoundingBox3D *other);

// Original: core_actor.cpp_CBoundingBox3D_dtor_FUN_0040e290
// Address: 0040e290
CBoundingBox3D * __cdecl CBoundingBox3D::dtor(CBoundingBox3D *this_ptr,uint flags);

// Original: core_actor.cpp_CVector3f_copy_FUN_0040e2a0
// Address: 0040e2a0
CVector3f * __cdecl CVector3f::copy(CVector3f *this_ptr,CVector3f *other);

// Original: core_actor.cpp_copyFloat1_FUN_0040e2d0
// Address: 0040e2d0
float * __cdecl copyFloat1(float *dst,float *src);

// Original: core_actor.cpp_copyFloat2_FUN_0040e2e0
// Address: 0040e2e0
float * __cdecl copyFloat2(float *dst,float *src);

// Original: core_actor.cpp_copyFloat3_FUN_0040e2f0
// Address: 0040e2f0
float * __cdecl copyFloat3(float *dst,float *src);

// Original: core_actor.cpp_CVector3f_arrdtor10_FUN_0040e300
// Address: 0040e300
CVector3f * __cdecl CVector3f::arrdtor10(CVector3f *this_ptr,uint flags);
