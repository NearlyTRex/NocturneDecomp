#pragma once

// Function prototypes for core/set.cpp
// Generated from Ghidra function signatures

// Original: core_set.cpp_staticInit_FUN_00569040
// Address: 00569040
void __cdecl staticInit(void);

// Original: core_set.cpp_CDemonSet_ctor_FUN_005690c0
// Address: 005690c0
CDemonSet * __cdecl CDemonSet::ctor(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_dtor_FUN_00569350
// Address: 00569350
CDemonSet * __cdecl CDemonSet::dtor(CDemonSet *this_ptr,uint flags);

// Original: core_set.cpp_CDemonSet_clear_FUN_005693c0
// Address: 005693c0
void __cdecl CDemonSet::clear(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_load_FUN_00569410
// Address: 00569410
void __cdecl CDemonSet::load(CDemonSet *this_ptr,char *filename);

// Original: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
// Address: 0056a190
void __cdecl CDemonSet::renderSceneGeometry(CDemonSet *this_ptr,float frustum_param,int render_mode);

// Original: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
// Address: 0056a470
void __cdecl CDemonSet::precomputeLightVisibility(CDemonSet *this_ptr,int light_index);

// Original: core_set.cpp_CDemonSet_initScene_FUN_0056aa10
// Address: 0056aa10
void __cdecl CDemonSet::initScene(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0
// Address: 0056aca0
void __cdecl CDemonSet::renderBackgroundActors(CDemonSet *this_ptr,int layer_flag);

// Original: core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0
// Address: 0056ade0
void __cdecl CDemonSet::snapshotActorTransformState(CDemonSet *this_ptr,CDemonActor *actor);

// Original: core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
// Address: 0056ae50
void __cdecl CDemonSet::setCameraView(CDemonSet *this_ptr,int index);

// Original: core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790
// Address: 0056b790
int __cdecl CDemonSet::findCameraByName(CDemonSet *this_ptr,char *name);

// Original: core_set.cpp_CDemonSet_reinitCamera_FUN_0056b7e0
// Address: 0056b7e0
void __cdecl CDemonSet::reinitCamera(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height);

// Original: core_set.cpp_CDemonSet_processActors_FUN_0056b810
// Address: 0056b810
void __cdecl CDemonSet::processActors(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_renderStaticLights_FUN_0056be80
// Address: 0056be80
void __cdecl CDemonSet::renderStaticLights(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0
// Address: 0056c1a0
void __cdecl CDemonSet::renderScene(CDemonSet *this_ptr,int skip_prerender);

// Original: core_set.cpp_CDemonSet_renderFlashlightShadow_FUN_0056c990
// Address: 0056c990
void __cdecl CDemonSet::renderFlashlightShadow(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0056cd60
// Address: 0056cd60
void __cdecl CDemonSet::renderOpaqueActors(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_renderTransparentActors_FUN_0056cf00
// Address: 0056cf00
void __cdecl CDemonSet::renderTransparentActors(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_addDynamicLight_FUN_0056d090
// Address: 0056d090
void __cdecl CDemonSet::addDynamicLight(CDemonSet *this_ptr,CDemonLight *light);

// Original: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0056d110
// Address: 0056d110
void __cdecl CDemonSet::addCoronaGlobe(CDemonSet *this_ptr,CDemonGlobe *globe);

// Original: core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0056d140
// Address: 0056d140
void __cdecl CDemonSet::addQueuedCoronaGlobe(CDemonSet *this_ptr,CDemonGlobe *globe);

// Original: core_set.cpp_CDemonSet_renderLightDebugView_FUN_0056d190
// Address: 0056d190
void __cdecl CDemonSet::renderLightDebugView(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0
// Address: 0056d2d0
void __cdecl CDemonSet::clearLights(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380
// Address: 0056d380
void __cdecl CDemonSet::setLightingParameters(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix);

// Original: core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0
// Address: 0056d4a0
int __cdecl CDemonSet::gatherVisibleLights(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix);

// Original: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
// Address: 0056db80
int __cdecl CDemonSet::calculateSpatialLighting(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal);

// Original: core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
// Address: 0056ddb0
void __cdecl CDemonSet::lightVertexColor(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation);

// Original: core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
// Address: 0056e110
int __cdecl CDemonSet::computeLighting(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count);

// Original: core_set.cpp_computeTriangleNormal_FUN_0056e180
// Address: 0056e180
void __cdecl computeTriangleNormal(CVector3i *vertex_array,SMRGLPrimitiveTriangle *triangle);

// Original: core_set.cpp_computeTriangleNormalIndexed_FUN_0056e2b0
// Address: 0056e2b0
void __cdecl computeTriangleNormalIndexed(CVector3i *vertex_array,ushort *triangle_indices,CVector3f *out_normal);

// Original: core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0
// Address: 0056e3e0
void __cdecl CDemonSet::computeVertexOmniLighting(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index);

// Original: core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0056e5d0
// Address: 0056e5d0
void __cdecl CDemonSet::pushScreenBoundsToCamera(CDemonSet *this_ptr,int vertex_count);

// Original: core_set.cpp_CDemonSet_rotateVerticies_FUN_0056e7c0
// Address: 0056e7c0
void __cdecl CDemonSet::rotateVerticies(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices);

// Original: core_set.cpp_transformToWorldSpace_FUN_0056e890
// Address: 0056e890
CVector3i * __stack_esi transformToWorldSpace(CVector3i *input,CVector3i *output);

// Original: core_set.cpp_transformNormalFixedPoint_FUN_0056e960
// Address: 0056e960
CVector3i * __stack_esi transformNormalFixedPoint(CVector3i *input,CVector3i *output);

// Original: core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
// Address: 0056eac0
void __cdecl CDemonSet::lightVerticies(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals);

// Original: core_set.cpp_CDemonSet_process_FUN_0056f940
// Address: 0056f940
void __cdecl CDemonSet::process(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_getReverbPresetAtPosition_FUN_0056fac0
// Address: 0056fac0
float __cdecl CDemonSet::getReverbPresetAtPosition(CDemonSet *this_ptr,CVector3f *position);

// Original: core_set.cpp_CDemonSet_loadAssets_FUN_0056fb80
// Address: 0056fb80
void __cdecl CDemonSet::loadAssets(CDemonSet *this_ptr);

// Original: core_set.cpp_qsortByDisplayListEntry_FUN_0056fba0
// Address: 0056fba0
int __cdecl qsortByDisplayListEntry(SDisplayListSortEntry *a,SDisplayListSortEntry *b);

// Original: core_set.cpp_CDemonSet_buildDisplayList_FUN_0056fbd0
// Address: 0056fbd0
void __cdecl CDemonSet::buildDisplayList(CDemonSet *this_ptr,uint dirty_flags_mask);

// Original: core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_0056ffe0
// Address: 0056ffe0
void __cdecl CDemonSet::renderEnvMapBatchTri(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha);

// Original: core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_00570010
// Address: 00570010
void __cdecl CDemonSet::renderEnvMapBatchQuad(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha);

// Original: core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00570040
// Address: 00570040
void __cdecl CDemonSet::renderEnvMapPrimitives(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride);

// Original: core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
// Address: 005702b0
void __cdecl CDemonSet::renderEnvMapTriangles(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha);

// Original: core_set.cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_00570700
// Address: 00570700
void __cdecl CDemonSet::renderFaceBatchOrEnvMap(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int flags);

// Original: core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
// Address: 00570770
void __cdecl CDemonSet::renderPrimitiveBatch(CDemonSet *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags);

// Original: core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00570870
// Address: 00570870
void __cdecl CDemonSet::renderFaceListOrEnvMap(CDemonSet *this_ptr,SInputFace *faces,int count,int flags);

// Original: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0
// Address: 005708e0
void __cdecl CDemonSet::renderPrimitiveList(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count);

// Original: core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00570960
// Address: 00570960
void __cdecl CDemonSet::renderTexturedPrimitiveListVariant(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count);

// Original: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
// Address: 005709e0
void __cdecl CDemonSet::setupMirrorRendering(CDemonSet *this_ptr,int mirror_index,int enable_flag);

// Original: core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0
// Address: 00570af0
void __cdecl CDemonSet::restoreCameraAfterMirror(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70
// Address: 00570b70
void __cdecl CDemonSet::buildMirrorList(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_markMirrorCameraDirty_FUN_00570c60
// Address: 00570c60
void __cdecl CDemonSet::markMirrorCameraDirty(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_restoreCameraView_FUN_00570c70
// Address: 00570c70
void __cdecl CDemonSet::restoreCameraView(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_setScaleFactors_FUN_00570ca0
// Address: 00570ca0
void __cdecl CDemonSet::setScaleFactors(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale);

// Original: core_set.cpp_CDemonSet_cacheMirrorLighting_FUN_00570cd0
// Address: 00570cd0
void __cdecl CDemonSet::cacheMirrorLighting(CDemonSet *this_ptr,CVector3f *position);

// Original: core_set.cpp_CDemonSet_setGamma_FUN_00570d60
// Address: 00570d60
void __cdecl CDemonSet::setGamma(CDemonSet *this_ptr,int gamma);

// Original: core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0
// Address: 00570df0
int __cdecl CDemonSet::renderSinglePrimitive(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20
// Address: 00570e20
void __cdecl CDemonSet::setCameraAmbientValue(CDemonSet *this_ptr,int index,float value);

// Original: core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00570e60
// Address: 00570e60
void __cdecl CDemonSet::setCameraAmbientValueByGroup(CDemonSet *this_ptr,int group_id,float value);

// Original: core_set.cpp_CDemonSet_setCameraEnabled_FUN_00570ea0
// Address: 00570ea0
void __cdecl CDemonSet::setCameraEnabled(CDemonSet *this_ptr,int camera_index,int enabled);

// Original: core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_00570ec0
// Address: 00570ec0
void __cdecl CDemonSet::setCameraEnabledByGroup(CDemonSet *this_ptr,int group_id,int enabled);

// Original: core_set.cpp_CDemonSet_addLightFilter_FUN_00570f10
// Address: 00570f10
void __cdecl CDemonSet::addLightFilter(CDemonSet *this_ptr,char *light_name,C3DSLight **out_light,CDemonLight **out_master_light);

// Original: core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0
// Address: 00570fa0
void __cdecl CDemonSet::initCameraShake(CDemonSet *this_ptr,float peak,float attack,float sustain,float decay);

// Original: core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00570fc0
// Address: 00570fc0
void __cdecl CDemonSet::buildActorTypeLists(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_loadMasterLightStates_FUN_00571130
// Address: 00571130
void __cdecl CDemonSet::loadMasterLightStates(CDemonSet *this_ptr,int *light_state_buffer);

// Original: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_00571170
// Address: 00571170
int __cdecl CDemonSet::saveMasterLightStates(CDemonSet *this_ptr,int *light_state_buffer);

// Original: core_set.cpp_CDemonSet_saveStateInfo_FUN_005711b0
// Address: 005711b0
void __cdecl CDemonSet::saveStateInfo(CDemonSet *this_ptr,_FILE *file_handle);

// Original: core_set.cpp_CDemonSet_loadStateInfo_FUN_00571230
// Address: 00571230
void __cdecl CDemonSet::loadStateInfo(CDemonSet *this_ptr,_FILE *file_handle);

// Original: core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320
// Address: 00571320
int __cdecl CDemonSet::isCameraPanning(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_expireDecals_FUN_00571380
// Address: 00571380
void __cdecl CDemonSet::expireDecals(CDemonSet *this_ptr,int expire_flag);

// Original: core_set.cpp_CDemonSet_renderDecals_FUN_005713c0
// Address: 005713c0
void __cdecl CDemonSet::renderDecals(CDemonSet *this_ptr);

// Original: core_set.cpp_CVector3f_equals_FUN_00571410
// Address: 00571410
int __cdecl CVector3f::equals(CVector3f *a,CVector3f *b);

// Original: core_set.cpp_CVector3f_notEquals_FUN_00571440
// Address: 00571440
int __cdecl CVector3f::notEquals(CVector3f *a,CVector3f *b);

// Original: core_set.cpp_SRoom_ctor_FUN_00571470
// Address: 00571470
SRoom * __cdecl SRoom::ctor(SRoom *this_ptr);

// Original: core_set.cpp_SRoom_dtor_FUN_00571480
// Address: 00571480
SRoom * __cdecl SRoom::dtor(SRoom *this_ptr,uint flags);

// Original: core_set.cpp_SVDBox_ctor_FUN_00571490
// Address: 00571490
SVDBox * __cdecl SVDBox::ctor(SVDBox *this_ptr);

// Original: core_set.cpp_SVDBox_dtor_FUN_005714a0
// Address: 005714a0
SVDBox * __cdecl SVDBox::dtor(SVDBox *this_ptr,uint flags);

// Original: core_set.cpp_C3DSLight_dtor_FUN_005714b0
// Address: 005714b0
C3DSLight * __cdecl C3DSLight::dtor(C3DSLight *this_ptr,uint flags);

// Original: core_set.cpp_CVector3f_copy_FUN_005714c0
// Address: 005714c0
CVector3f * __cdecl CVector3f::copy(CVector3f *a,CVector3f *b);

// Original: core_set.cpp_CVector3f_arrdtor_FUN_00571510
// Address: 00571510
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *objs,uint flags);

// Original: core_set.cpp_C3DSCamera_arrdtor_FUN_00571530
// Address: 00571530
C3DSCamera * __cdecl C3DSCamera::arrdtor(C3DSCamera *objs,uint flags);

// Original: core_set.cpp_C3DSLight_arrdtor_FUN_00571550
// Address: 00571550
C3DSLight * __cdecl C3DSLight::arrdtor(C3DSLight *objs,uint flags);

// Original: core_set.cpp_SRoom_arrdtor_FUN_00571570
// Address: 00571570
SRoom * __cdecl SRoom::arrdtor(SRoom *objs,uint flags);

// Original: core_set.cpp_SVDBox_arrdtor_FUN_00571590
// Address: 00571590
SVDBox * __cdecl SVDBox::arrdtor(SVDBox *objs,uint flags);
