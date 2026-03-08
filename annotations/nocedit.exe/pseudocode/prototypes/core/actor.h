#pragma once

// Function prototypes for core/actor.cpp
// Generated from Ghidra function signatures

// Original: core_actor.cpp_staticInit_FUN_00408320
// Address: 00408320
void __cdecl staticInit(void);

// Original: core_actor.cpp_rayCylinderIntersect_FUN_00408340
// Address: 00408340
float __cdecl rayCylinderIntersect(SCollisionInfo *collision_info,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);

// Original: core_actor.cpp_trimActorName_FUN_004087b0
// Address: 004087b0
void __cdecl trimActorName(CDemonActor *actor_ptr);

// Original: core_actor.cpp_deleteActor_FUN_00408820
// Address: 00408820
void __cdecl deleteActor(CDemonActor *actor_ptr);

// Original: core_actor.cpp_initTransformCache_FUN_00408870
// Address: 00408870
CDemonActorTransformState * __cdecl initTransformCache(CDemonActorTransformState *transform_cache);

// Original: core_actor.cpp_CDemonActor_ctor_FUN_004088b0
// Address: 004088b0
CDemonActor * __cdecl CDemonActor::ctor(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_dtor_FUN_00408a30
// Address: 00408a30
CDemonActor * __cdecl CDemonActor::dtor(CDemonActor *this_ptr,uint flags);

// Original: core_actor.cpp_CDemonActor_process_FUN_00408a80
// Address: 00408a80
void __cdecl CDemonActor::process(CDemonActor *this_ptr,float delta_time);

// Original: core_actor.cpp_CDemonActor_renderOpaque_FUN_00408aa0
// Address: 00408aa0
int __cdecl CDemonActor::renderOpaque(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_renderTransparent_FUN_00408ac0
// Address: 00408ac0
int __cdecl CDemonActor::renderTransparent(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_renderBackground_FUN_00408ae0
// Address: 00408ae0
void __cdecl CDemonActor::renderBackground(CDemonActor *this_ptr,int layer_flag);

// Original: core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
// Address: 00408b00
void __cdecl CDemonActor::setupRenderState(CDemonActor *actor);

// Original: core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
// Address: 00408b40
void __cdecl CDemonActor::restoreRenderState(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_getActorType_FUN_00408b50
// Address: 00408b50
CDemonActorType * __cdecl CDemonActor::getActorType(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
// Address: 00408b90
char * __cdecl CDemonActor::getActorClassName(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_setup_FUN_00408bb0
// Address: 00408bb0
void __cdecl CDemonActor::setup(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
// Address: 00408c10
void __cdecl CDemonActor::updateOrientationMatrix(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_getBoundingBox_FUN_00408c70
// Address: 00408c70
CBoundingBox3D * __cdecl CDemonActor::getBoundingBox(CDemonActor *this_ptr,CBoundingBox3D *out_box);

// Original: core_actor.cpp_CDemonActor_getCollisionType_FUN_00408ca0
// Address: 00408ca0
ECollisionType __cdecl CDemonActor::getCollisionType(CDemonActor *this_ptr,SCollisionInfo *collision_info);

// Original: core_actor.cpp_CDemonActor_customRayIntersect_FUN_00408cc0
// Address: 00408cc0
float __cdecl CDemonActor::customRayIntersect(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);

// Original: core_actor.cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10
// Address: 00408d10
void __cdecl CDemonActor::customIntersectCylinderXZ(CDemonActor *this_ptr,SIntersectXZCylinder *cylinder);

// Original: core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_00408d50
// Address: 00408d50
int __cdecl CDemonActor::customGetFloorHeight(CDemonActor *this_ptr,float x_pos,float z_pos,float *out_floor_height);

// Original: core_actor.cpp_CDemonActor_getGroundType_FUN_00408d90
// Address: 00408d90
EGroundType __cdecl CDemonActor::getGroundType(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0
// Address: 00408db0
float __cdecl CDemonActor::cylinderGroundCheck(CDemonActor *this_ptr,float radius,CVector3f *out_normal);

// Original: core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
// Address: 00408e80
CVector3f * __cdecl CDemonActor::transformVector(CDemonActor *this_ptr,CVector3f *output,CVector3f *input);

// Original: core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
// Address: 00408ea0
CVector3f * __cdecl CDemonActor::inverseTransformVector(CDemonActor *this_ptr,CVector3f *output_vector,CVector3f *input_vector);

// Original: core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
// Address: 00408ec0
CVector3f * __cdecl CDemonActor::localToWorldPoint(CDemonActor *this_ptr,CVector3f *output_world_point,CVector3f *input_local_point);

// Original: core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
// Address: 00408f10
CVector3f * __cdecl CDemonActor::worldToLocalPoint(CDemonActor *this_ptr,CVector3f *output_local_point,CVector3f *input_world_point);

// Original: core_actor.cpp_CDemonActor_playSound_FUN_00408f60
// Address: 00408f60
uint __cdecl CDemonActor::playSound(CDemonActor *this_ptr,char *sound_name);

// Original: core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408f80
// Address: 00408f80
uint __cdecl CDemonActor::playAmbientSound(CDemonActor *this_ptr,char *sound_name);

// Original: core_actor.cpp_CDemonActor_playSoundWithDelay_FUN_00408fa0
// Address: 00408fa0
uint __cdecl CDemonActor::playSoundWithDelay(CDemonActor *this_ptr,char *sound_name,float delay);

// Original: core_actor.cpp_CDemonActor_playAmbientSoundWithDelay_FUN_00408fd0
// Address: 00408fd0
uint __cdecl CDemonActor::playAmbientSoundWithDelay(CDemonActor *this_ptr,char *sound_name,float delay);

// Original: core_actor.cpp_CDemonActor_canPickup_FUN_00409000
// Address: 00409000
int __cdecl CDemonActor::canPickup(CDemonActor *this_ptr,CDemonActor *picker);

// Original: core_actor.cpp_CDemonActor_pickup_FUN_00409020
// Address: 00409020
void __cdecl CDemonActor::pickup(CDemonActor *this_ptr,CDemonActor *carrier);

// Original: core_actor.cpp_CDemonActor_onDropped_FUN_00409040
// Address: 00409040
void __cdecl CDemonActor::onDropped(CDemonActor *this_ptr,CVector3f *drop_position);

// Original: core_actor.cpp_CDemonActor_getCarrier_FUN_00409060
// Address: 00409060
CDemonActor * __cdecl CDemonActor::getCarrier(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_drop_FUN_00409080
// Address: 00409080
void __cdecl CDemonActor::drop(CDemonActor *this_ptr,CDemonActor *carrier,CVector3f *drop_position);

// Original: core_actor.cpp_CDemonActor_getPathMap_FUN_004090a0
// Address: 004090a0
CPathMap * __cdecl CDemonActor::getPathMap(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0
// Address: 004090c0
int __cdecl CDemonActor::testPointInCylinder(CDemonActor *this_ptr,SCollisionReturnInfo *collision_info,float tolerance);

// Original: core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150
// Address: 00409150
int __cdecl CDemonActor::testLineIntersection(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point);

// Original: core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
// Address: 00409270
CBoundingBox3D * __cdecl CDemonActor::getWorldBoundingBox(CDemonActor *this_ptr,CBoundingBox3D *output_bbox,SCollisionInfo *collision_info,int bounding_box_type);

// Original: core_actor.cpp_CDemonActor_testRayIntersection_FUN_004093f0
// Address: 004093f0
float __cdecl CDemonActor::testRayIntersection(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_hit_normal,int ray_type,CBoundingBox3D *clip_bounds);

// Original: core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
// Address: 00409470
float __cdecl CDemonActor::rayIntersect(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_hit_normal,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox);

// Original: core_actor.cpp_CDemonActor_onLaserHit_FUN_00409840
// Address: 00409840
void __cdecl CDemonActor::onLaserHit(CDemonActor *this_ptr,SLaserInfo *laser_info);

// Original: core_actor.cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880
// Address: 00409880
int __cdecl CDemonActor::getBlockVirtualDirectorFlag(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_allowBulletHoles_FUN_004098a0
// Address: 004098a0
int __cdecl CDemonActor::allowBulletHoles(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_updateCollisionData_FUN_004098c0
// Address: 004098c0
void __cdecl CDemonActor::updateCollisionData(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_getTargetPoints_FUN_004098e0
// Address: 004098e0
int __cdecl CDemonActor::getTargetPoints(CDemonActor *this_ptr,CVector3f *out_points_array);

// Original: core_actor.cpp_plotPixelWithBoundsCheck_FUN_00409900
// Address: 00409900
void __cdecl plotPixelWithBoundsCheck(int x,int y);

// Original: core_actor.cpp_draw3DPointMarker_FUN_00409930
// Address: 00409930
void __cdecl draw3DPointMarker(CVector3f *world_position,int marker_color);

// Original: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90
// Address: 00409b90
void __cdecl CDemonActor::renderTargetPoints(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70
// Address: 00409e70
void __cdecl CDemonActor::spawnFlies(CDemonActor *this_ptr,int fly_count,float spawn_radius);

// Original: core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0
// Address: 00409ec0
void __cdecl CDemonActor::calculateChecksum(CDemonActor *this_ptr,uint *out_crc);

// Original: core_actor.cpp_CDemonActor_canLookAt_FUN_00409f20
// Address: 00409f20
int __cdecl CDemonActor::canLookAt(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40
// Address: 00409f40
float __cdecl CDemonActor::evaluateTriggerCondition(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_processActionButton_FUN_00409f60
// Address: 00409f60
int __cdecl CDemonActor::processActionButton(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
// Address: 00409fb0
void __cdecl CDemonActor::setPositionAndOrientation(CDemonActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation);

// Original: core_actor.cpp_CDemonActor_onPickup_FUN_0040a010
// Address: 0040a010
void __cdecl CDemonActor::onPickup(CDemonActor *this_ptr,CDemonActor *owner);

// Original: core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030
// Address: 0040a030
void __cdecl CDemonActor::getInteractionInfo(CDemonActor *this_ptr,SInteractionInfo *out_info);

// Original: core_actor.cpp_CDemonActor_startInteraction_FUN_0040a090
// Address: 0040a090
int __cdecl CDemonActor::startInteraction(CDemonActor *this_ptr,CDemonActor *user);

// Original: core_actor.cpp_CDemonActor_updateInteraction_FUN_0040a0b0
// Address: 0040a0b0
int __cdecl CDemonActor::updateInteraction(CDemonActor *this_ptr,UOrientationVector *user_orientation,SPlayerControl *player_control);

// Original: core_actor.cpp_CDemonActor_stopUsing_FUN_0040a0d0
// Address: 0040a0d0
void __cdecl CDemonActor::stopUsing(CDemonActor *this_ptr,CDemonActor *user);

// Original: core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0
// Address: 0040a0f0
int __cdecl CDemonActor::getAllowedMeleeAttackTypes(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210
// Address: 0040a210
int __cdecl CDemonActor::processMeleeHit(CDemonActor *this_ptr,int hit_type);

// Original: core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
// Address: 0040abc0
void __cdecl CDemonActor::fillAttackDamageInfo(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim);

// Original: core_actor.cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20
// Address: 0040ac20
void __cdecl CDemonActor::playAttackHitEffects(CDemonActor *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim);

// Original: core_actor.cpp_copyToActorDebugBuffer_FUN_0040ac30
// Address: 0040ac30
char * __cdecl copyToActorDebugBuffer(char *source_string);

// Original: core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
// Address: 0040ac80
void __cdecl CDemonActor::doCheckForInvalidPointers(CDemonActor *this_ptr,char *context_file,int context_line);

// Original: core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
// Address: 0040aee0
int __cdecl adjustIndentationLevel(int indent_delta);

// Original: core_actor.cpp_CDemonActor_save_FUN_0040af30
// Address: 0040af30
void __cdecl CDemonActor::save(CDemonActor *this_ptr,_FILE *file_handle);

// Original: core_actor.cpp_CDemonActor_load_FUN_0040b050
// Address: 0040b050
void __cdecl CDemonActor::load(CDemonActor *this_ptr,_FILE *file_handle);

// Original: core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
// Address: 0040b210
void __cdecl handleActorPropertyParseError(char *property_description,char *property_type);

// Original: core_actor.cpp_archiveDescription_FUN_0040b290
// Address: 0040b290
void __cdecl archiveDescription(char *property_description,char *property_name);

// Original: core_actor.cpp_archiveVector_FUN_0040b340
// Address: 0040b340
void __cdecl archiveVector(CVector3f *vector_ptr,char *property_name);

// Original: core_actor.cpp_archiveOrientation_FUN_0040b3e0
// Address: 0040b3e0
void __cdecl archiveOrientation(COrientation *orient_ptr,char *property_name);

// Original: core_actor.cpp_archiveLocation_FUN_0040b480
// Address: 0040b480
void __cdecl archiveLocation(CLocation *location_ptr,char *property_name);

// Original: core_actor.cpp_archiveQuaternion_FUN_0040b520
// Address: 0040b520
void __cdecl archiveQuaternion(CQuaternion4f *quat_ptr,char *property_type);

// Original: core_actor.cpp_archiveString_FUN_0040b5c0
// Address: 0040b5c0
void __cdecl archiveString(char *string_buffer,char *property_type);

// Original: core_actor.cpp_archiveLocalizedString_FUN_0040b6e0
// Address: 0040b6e0
void __cdecl archiveLocalizedString(char *string_buffer,char *localization_key);

// Original: core_actor.cpp_archiveFloat_FUN_0040b770
// Address: 0040b770
void __cdecl archiveFloat(float *float_ptr,char *property_name);

// Original: core_actor.cpp_archiveInteger_FUN_0040b7f0
// Address: 0040b7f0
void __cdecl archiveInteger(int *int_ptr,char *property_name);

// Original: core_actor.cpp_archiveActor_FUN_0040b870
// Address: 0040b870
void __cdecl archiveActor(CDemonActor **actor_ptr,char *property_name);

// Original: core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0
// Address: 0040b8f0
void __cdecl archiveKeyframedModelInstance(CKeyFramedModelInstance *model_ptr,char *property_name);

// Original: core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970
// Address: 0040b970
void __cdecl archiveDeformableModelInstance(CDeformableModelInstance *model_ptr,char *property_name);

// Original: core_actor.cpp_archiveMotionState_FUN_0040b9f0
// Address: 0040b9f0
void __cdecl archiveMotionState(CMotionController *motion_controller,char *property_name);

// Original: core_actor.cpp_archivePartStatus_FUN_0040bae0
// Address: 0040bae0
void __cdecl archivePartStatus(CDeformableModelInstance *model_ptr,char *property_name);

// Original: core_actor.cpp_archiveBox_FUN_0040bd70
// Address: 0040bd70
void __cdecl archiveBox(CBox *box_ptr,char *property_name);

// Original: core_actor.cpp_archiveClothList_FUN_0040be60
// Address: 0040be60
void __cdecl archiveClothList(CClothList *cloth_list,char *property_name);

// Original: core_actor.cpp_archiveRules_FUN_0040c000
// Address: 0040c000
void __cdecl archiveRules(CRuleList *rules,char *property_name);

// Original: core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
// Address: 0040c1c0
void __cdecl CDemonActor::archive(CDemonActor *this_ptr);

// Original: core_actor.cpp_updateClassNameHash_FUN_0040c260
// Address: 0040c260
uint __cdecl updateClassNameHash(uint current_hash,int character);

// Original: core_actor.cpp_hashClassName_FUN_0040c290
// Address: 0040c290
uint __cdecl hashClassName(char *class_name);

// Original: core_actor.cpp_registerActorClass_FUN_0040c2e0
// Address: 0040c2e0
CDemonActorType * __cdecl registerActorClass(CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factor_func,int *max_version,int version,CDemonActorType *parent_class_info);

// Original: core_actor.cpp_getActorClassByName_FUN_0040c3c0
// Address: 0040c3c0
CDemonActorType * __cdecl getActorClassByName(char *className);

// Original: core_actor.cpp_createActorByName_FUN_0040c430
// Address: 0040c430
CDemonActor * __cdecl createActorByName(char *class_name);

// Original: core_actor.cpp_skipWhitespace_FUN_0040c4d0
// Address: 0040c4d0
void __cdecl skipWhitespace(char **parse_pos);

// Original: core_actor.cpp_matchClassTerm_FUN_0040c4f0
// Address: 0040c4f0
int __cdecl matchClassTerm(CDemonActorType *type_ptr,char **parse_pos);

// Original: core_actor.cpp_matchClassExpression_FUN_0040c610
// Address: 0040c610
int __cdecl matchClassExpression(CDemonActorType *type_ptr,char **parse_pos);

// Original: core_actor.cpp_isOfClass_FUN_0040c6d0
// Address: 0040c6d0
int __cdecl isOfClass(CDemonActor *actor_ptr,char *class_name);

// Original: core_actor.cpp_checkNameHash_FUN_0040c700
// Address: 0040c700
int __cdecl checkNameHash(CDemonActorType *type_ptr,uint name_hash);

// Original: core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720
// Address: 0040c720
int __cdecl CDemonActor::shouldIgnoreForTargeting(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_initializeInEditor_FUN_0040c730
// Address: 0040c730
int __cdecl CDemonActor::initializeInEditor(CDemonActor *this_ptr);

// Original: core_actor.cpp_matchesClassName_FUN_0040c740
// Address: 0040c740
int __cdecl matchesClassName(CDemonActorType *type_ptr,char *class_name);

// Original: core_actor.cpp_isOfClassHash_FUN_0040c760
// Address: 0040c760
int __cdecl isOfClassHash(CDemonActor *actor_ptr,uint class_name_hash);

// Original: core_actor.cpp_castToClassHash_FUN_0040c790
// Address: 0040c790
CDemonActor * __cdecl castToClassHash(CDemonActor *actor_ptr,uint class_name_hash);

// Original: core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
// Address: 0040c7c0
void __cdecl syncActorTypeIDs(void);

// Original: core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0
// Address: 0040c7f0
void __cdecl resetActorTypeInfo(void);

// Original: core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830
// Address: 0040c830
int __cdecl CDemonActor::processFootstep(CDemonActor *this_ptr,float volume);

// Original: core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040c8f0
// Address: 0040c8f0
int __cdecl CDemonActor::processFootstepAt(CDemonActor *this_ptr,CVector3f *location,float volume);

// Original: core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10
// Address: 0040ca10
void __cdecl CDemonActor::handleFootstep(CDemonActor *this_ptr,CVector3f *position,int surface_type,float volume);

// Original: core_actor.cpp_setRandomSeed_FUN_0040cb90
// Address: 0040cb90
void __cdecl setRandomSeed(uint seed_value);

// Original: core_actor.cpp_generateRandomValue_FUN_0040cba0
// Address: 0040cba0
uint __cdecl generateRandomValue(void);

// Original: core_actor.cpp_getRandomFloat_FUN_0040cbc0
// Address: 0040cbc0
float __cdecl getRandomFloat(void);

// Original: core_actor.cpp_getRandomFloat_FUN_0040cc10
// Address: 0040cc10
float __cdecl getRandomFloat(float min_value,float max_value);

// Original: core_actor.cpp_getRandomInt_FUN_0040cc70
// Address: 0040cc70
int __cdecl getRandomInt(int min_value,int max_value);

// Original: core_actor.cpp_randomChance_FUN_0040cd10
// Address: 0040cd10
int __cdecl randomChance(float probability_threshold);

// Original: core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
// Address: 0040cd70
float __cdecl normalizeAngleToPi(float angle_radians);

// Original: core_actor.cpp_crc32ProcessByte_FUN_0040ce30
// Address: 0040ce30
void __cdecl crc32ProcessByte(uint *crc_state,byte input_byte);

// Original: core_actor.cpp_crc32ProcessBuffer_FUN_0040cf10
// Address: 0040cf10
void __cdecl crc32ProcessBuffer(uint *crc_state,byte *buffer,int buffer_length);

// Original: core_actor.cpp_crc32ProcessInt_FUN_0040cf50
// Address: 0040cf50
void __cdecl crc32ProcessInt(uint *crc_state,int value);

// Original: core_actor.cpp_crc32ProcessVector_FUN_0040cf70
// Address: 0040cf70
void __cdecl crc32ProcessVector(uint *crc_state,CVector3f *vector);

// Original: core_actor.cpp_crc32ProcessString_FUN_0040cf90
// Address: 0040cf90
void __cdecl crc32ProcessString(uint *crc_state,char *string);

// Original: core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
// Address: 0040cfd0
void __cdecl CDemonActor::addFilesToExtract(CDemonActor *this_ptr,_FILE *file_handle);

// Original: core_actor.cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0
// Address: 0040cfe0
void __cdecl CDemonActor::onAreaDeleted(CDemonActor *this_ptr,int deleted_area_index);

// Original: core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000
// Address: 0040d000
void __cdecl CDemonActor::onActorDeleted(CDemonActor *this_ptr,CDemonActor *deleted_actor);

// Original: core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
// Address: 0040d040
void __cdecl CDemonActor::processInEditor(CDemonActor *this_ptr);

// Original: core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
// Address: 0040d150
void __cdecl CDemonActor::showEditorHelp(CDemonActor *this_ptr,int *y_pos);

// Original: core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
// Address: 0040d1e0
void __cdecl drawTwoColumnPropertyLine(int *y_position,char *left_text,char *right_text);

// Original: core_actor.cpp_drawTextLine_FUN_0040d240
// Address: 0040d240
void __cdecl drawTextLine(int *y_position,char *text);

// Original: core_actor.cpp_CDemonActor_propertyValidatorCallback_FUN_0040d270
// Address: 0040d270
int __cdecl CDemonActor::propertyValidatorCallback(CDemonActor *this_ptr,int new_value);

// Original: core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
// Address: 0040d290
void __cdecl CDemonActor::getPropertyList(CDemonActor *this_ptr,CActorPropertyList *property_list);

// Original: core_actor.cpp_draw3DLineSegment_FUN_0040d330
// Address: 0040d330
void __cdecl draw3DLineSegment(CVector3i *start_point,CVector3f *direction_offset);

// Original: core_actor.cpp_drawBoundingBox_FUN_0040d470
// Address: 0040d470
void __cdecl drawBoundingBox(CBoundingBox3D *bbox,int line_color);

// Original: core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
// Address: 0040d940
void __cdecl CDemonActor::renderBoundingBox(CDemonActor *this_ptr,uint32_t color);

// Original: core_actor.cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0
// Address: 0040dec0
void __cdecl CDemonActor::renderBoundingBoxSolid(CDemonActor *this_ptr,int red,int green,int blue,int alpha);

// Original: core_actor.cpp_CActorPropertyList_init_FUN_0040e130
// Address: 0040e130
void __cdecl CActorPropertyList::init(CActorPropertyList *this_ptr);

// Original: core_actor.cpp_CActorPropertyList_resetSelection_FUN_0040e150
// Address: 0040e150
void __cdecl CActorPropertyList::resetSelection(CActorPropertyList *this_ptr);

// Original: core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
// Address: 0040e160
CActorProperty * __cdecl CActorPropertyList::addFloat(CActorPropertyList *this_ptr,char *property_name,float *data_ptr,CActorPropertyValidatorFunc *callback);

// Original: core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
// Address: 0040e1a0
CActorProperty * __cdecl CActorPropertyList::addFloatRange(CActorPropertyList *this_ptr,char *property_name,float *data_ptr,float min_value,float max_value,CActorPropertyValidatorFunc *callback);

// Original: core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0
// Address: 0040e1e0
CActorProperty * __cdecl CActorPropertyList::addInt(CActorPropertyList *this_ptr,char *property_name,int *data_ptr,CActorPropertyValidatorFunc *callback);

// Original: core_actor.cpp_CActorPropertyList_addIntRange_FUN_0040e220
// Address: 0040e220
CActorProperty * __cdecl CActorPropertyList::addIntRange(CActorPropertyList *this_ptr,char *property_name,int *data_ptr,int min_value,int max_value,CActorPropertyValidatorFunc *callback);

// Original: core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260
// Address: 0040e260
CActorProperty * __cdecl CActorPropertyList::addVector(CActorPropertyList *this_ptr,char *property_name,CVector3f *data_ptr,CActorPropertyValidatorFunc *callback);

// Original: core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
// Address: 0040e290
CActorProperty * __cdecl CActorPropertyList::addString(CActorPropertyList *this_ptr,char *property_name,char *data_ptr,int max_length,CActorPropertyValidatorFunc *callback);

// Original: core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0
// Address: 0040e2d0
CActorProperty * __cdecl CActorPropertyList::addSound(CActorPropertyList *this_ptr,char *property_name,void *data_ptr);

// Original: core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300
// Address: 0040e300
CActorProperty * __cdecl CActorPropertyList::addGroundType(CActorPropertyList *this_ptr,char *property_name,int *data_ptr);

// Original: core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
// Address: 0040e330
CActorProperty * __cdecl CActorPropertyList::addBool(CActorPropertyList *this_ptr,char *property_name,int *data_ptr);

// Original: core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
// Address: 0040e350
CActorProperty * __cdecl CActorPropertyList::addChoice(CActorPropertyList *this_ptr,char *property_name,CDemonActor **data_ptr,int default_index ,char *choices,CActorPropertyValidatorFunc *callback);

// Original: core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
// Address: 0040e3b0
CActorProperty * __cdecl CActorPropertyList::addModelKFM(CActorPropertyList *this_ptr,char *property_name,CKeyFramedModelInstance *data_ptr,int allow_none);

// Original: core_actor.cpp_CActorPropertyList_addFile_FUN_0040e3e0
// Address: 0040e3e0
CActorProperty * __cdecl CActorPropertyList::addFile(CActorPropertyList *this_ptr,char *property_name,void *data_ptr,char *search_path,char *extension,int allow_none);

// Original: core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
// Address: 0040e460
CActorProperty * __cdecl CActorPropertyList::addEvent(CActorPropertyList *this_ptr,char *property_name,char *data_ptr);

// Original: core_actor.cpp_CActorPropertyList_addButton_FUN_0040e480
// Address: 0040e480
CActorProperty * __cdecl CActorPropertyList::addButton(CActorPropertyList *this_ptr,char *property_name,char *data_ptr);

// Original: core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
// Address: 0040e4a0
CActorProperty * __cdecl CActorPropertyList::addModelDFM(CActorPropertyList *this_ptr,char *property_name,CDeformableModelInstance *data_ptr,int allow_none);

// Original: core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
// Address: 0040e4d0
CActorProperty * __cdecl CActorPropertyList::addMotion(CActorPropertyList *this_ptr,char *property_name,CDeformableModelInstance *data_ptr);

// Original: core_actor.cpp_CActorPropertyList_addClothList_FUN_0040e500
// Address: 0040e500
void __cdecl CActorPropertyList::addClothList(CActorPropertyList *this_ptr,char *property_name,CClothList *data_ptr,int max_count);

// Original: core_actor.cpp_CActorPropertyList_addRuleList_FUN_0040e5a0
// Address: 0040e5a0
void __cdecl CActorPropertyList::addRuleList(CActorPropertyList *this_ptr,char *property_name,CRuleList *data_ptr,int max_count);

// Original: core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640
// Address: 0040e640
CActorProperty * __cdecl CActorPropertyList::addEnumPair(CActorPropertyList *this_ptr,char *property_name,int num_pairs,SEnumPair *pairs,int *data_ptr);

// Original: core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670
// Address: 0040e670
CActorProperty * __cdecl CActorPropertyList::addAction(CActorPropertyList *this_ptr,char *property_name,CActorPropertyDisplayFunc *display_callback,CActorPropertyActionFunc *action_callback);

// Original: core_actor.cpp_CActorPropertyList_addFlags_FUN_0040e6a0
// Address: 0040e6a0
CActorProperty * __cdecl CActorPropertyList::addFlags(CActorPropertyList *this_ptr,char *property_name,int *data_ptr);

// Original: core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
// Address: 0040e6c0
CActorProperty * __cdecl CActorPropertyList::snag(CActorPropertyList *this_ptr,EActorPropertyType property_type,char *property_name,void *data_ptr,CActorPropertyValidatorFunc *callback);

// Original: core_actor.cpp_CActorPropertyList_calculateLayout_FUN_0040e770
// Address: 0040e770
void __cdecl CActorPropertyList::calculateLayout(CActorPropertyList *this_ptr,int x,int y,int width);

// Original: core_actor.cpp_CActorPropertyList_render_FUN_0040e850
// Address: 0040e850
void __cdecl CActorPropertyList::render(CActorPropertyList *this_ptr,int selected_index);

// Original: core_actor.cpp_CActorPropertyList_hitTest_FUN_0040e9c0
// Address: 0040e9c0
int __cdecl CActorPropertyList::hitTest(CActorPropertyList *this_ptr,int x,int y);

// Original: core_actor.cpp_CActorProperty_renderValue_FUN_0040ea50
// Address: 0040ea50
void __cdecl CActorProperty::renderValue(CActorProperty *this_ptr,CDemonActor *actor,char *output_buffer);

// Original: core_actor.cpp_CActorProperty_getNameWidth_FUN_0040ee30
// Address: 0040ee30
int __cdecl CActorProperty::getNameWidth(CActorProperty *this_ptr);

// Original: core_actor.cpp_CActorProperty_getValueWidth_FUN_0040ee50
// Address: 0040ee50
int __cdecl CActorProperty::getValueWidth(CActorProperty *this_ptr,int index);

// Original: core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
// Address: 0040eed0
int __cdecl CActorProperty::editInteractive(CActorProperty *this_ptr,CDemonActor *actor);

// Original: core_actor.cpp_CVector_ctor_FUN_00410340
// Address: 00410340
CVector3f * __cdecl CVector::ctor(CVector3f *this_ptr);

// Original: core_actor.cpp_CVector_dtor_FUN_00410350
// Address: 00410350
CVector3f * __cdecl CVector::dtor(CVector3f *this_ptr,uint flags);

// Original: core_actor.cpp_copyVector_FUN_00410360
// Address: 00410360
void __cdecl copyVector(CVector3f *dst_ptr,CVector3f *src_ptr);

// Original: core_actor.cpp_CVector3f_length_FUN_00410380
// Address: 00410380
float __cdecl CVector3f::length(CVector3f *this_ptr);

// Original: core_actor.cpp_CVector3f_zero_FUN_004103b0
// Address: 004103b0
void __cdecl CVector3f::zero(CVector3f *this_ptr);

// Original: core_actor.cpp_CVector3f_toFixed8_FUN_004103d0
// Address: 004103d0
void __cdecl CVector3f::toFixed8(CVector3f *this_ptr,CVector3f *other);

// Original: core_actor.cpp_CSlew_ctor_FUN_00410400
// Address: 00410400
CSlew * __cdecl CSlew::ctor(CSlew *this_ptr);

// Original: core_actor.cpp_CSlew_dtor_FUN_00410410
// Address: 00410410
CSlew * __cdecl CSlew::dtor(CSlew *this_ptr,uint flags);

// Original: core_actor.cpp_SDamageInfo_dtor_FUN_00410420
// Address: 00410420
SDamageInfo * __cdecl SDamageInfo::dtor(SDamageInfo *this_ptr,uint flags);

// Original: core_actor.cpp_CBoundingBox3D_ctor_FUN_00410430
// Address: 00410430
CBoundingBox3D * __cdecl CBoundingBox3D::ctor(CBoundingBox3D *this_ptr);

// Original: core_actor.cpp_CBoundingBox3D_copy_FUN_00410440
// Address: 00410440
CBoundingBox3D * __cdecl CBoundingBox3D::copy(CBoundingBox3D *this_ptr,CBoundingBox3D *other);

// Original: core_actor.cpp_CBoundingBox3D_dtor_FUN_00410490
// Address: 00410490
CBoundingBox3D * __cdecl CBoundingBox3D::dtor(CBoundingBox3D *this_ptr,uint flags);

// Original: core_actor.cpp_CVector_copy_FUN_004104a0
// Address: 004104a0
CVector3f * __cdecl CVector::copy(CVector3f *this_ptr,CVector3f *other);

// Original: core_actor.cpp_copyFloat_FUN_004104d0
// Address: 004104d0
float * __cdecl copyFloat(float *dst,float *src);

// Original: core_actor.cpp_copyFloat_FUN_004104e0
// Address: 004104e0
float * __cdecl copyFloat(float *dst,float *src);

// Original: core_actor.cpp_copyFloat_FUN_004104f0
// Address: 004104f0
float * __cdecl copyFloat(float *dst,float *src);

// Original: core_actor.cpp_CVector3f_arrdtor_FUN_00410500
// Address: 00410500
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *objs,uint flags);
