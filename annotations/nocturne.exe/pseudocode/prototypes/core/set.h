#pragma once

// Function prototypes for core/set.cpp
// Generated from Ghidra function signatures

// Original: core_set.cpp_staticInit_FUN_00506b40
// Address: 00506b40
void __cdecl staticInit(void);

// Original: core_set.cpp_CDemonSet_ctor_FUN_00506bc0
// Address: 00506bc0
CDemonSet * __cdecl CDemonSet::ctor(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_dtor_FUN_00506e50
// Address: 00506e50
CDemonSet * __cdecl CDemonSet::dtor(CDemonSet *this_ptr,uint flags);

// Original: core_set.cpp_CDemonSet_clear_FUN_00506ec0
// Address: 00506ec0
void __cdecl CDemonSet::clear(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_load_FUN_00506f10
// Address: 00506f10
void __cdecl CDemonSet::load(CDemonSet *this_ptr,char *filename);

// Original: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
// Address: 00507c80
void __cdecl CDemonSet::renderSceneGeometry(CDemonSet *this_ptr,float frustum_param,int render_mode);

// Original: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80
// Address: 00507f80
void __cdecl CDemonSet::precomputeLightVisibility(CDemonSet *this_ptr,int light_index);

// Original: core_set.cpp_CDemonSet_initScene_FUN_005084c0
// Address: 005084c0
void __cdecl CDemonSet::initScene(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750
// Address: 00508750
void __cdecl CDemonSet::renderBackgroundActors(CDemonSet *this_ptr,int layer_flag);

// Original: core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890
// Address: 00508890
void __cdecl CDemonSet::snapshotActorTransformState(CDemonSet *this_ptr,CDemonActor *actor);

// Original: core_set.cpp_CDemonSet_setCameraView_FUN_005088f0
// Address: 005088f0
void __cdecl CDemonSet::setCameraView(CDemonSet *this_ptr,int index);

// Original: core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0
// Address: 005090a0
int __cdecl CDemonSet::findCameraByName(CDemonSet *this_ptr,char *name);

// Original: core_set.cpp_CDemonSet_FUN_005090f0
// Address: 005090f0
void __cdecl CDemonSet(CDemonSet *this_ptr,undefined4 param_2,undefined4 param_3,int param_4);

// Original: core_set.cpp_CDemonSet_processActors_FUN_00509140
// Address: 00509140
void __cdecl CDemonSet::processActors(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760
// Address: 00509760
void __cdecl CDemonSet::renderStaticLights(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_FUN_00509a80
// Address: 00509a80
void __cdecl CDemonSet(CDemonSet *this_ptr,int skip_prerender);

// Original: core_set.cpp_CDemonSet_FUN_0050a260
// Address: 0050a260
void __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640
// Address: 0050a640
void __cdecl CDemonSet::renderOpaqueActors(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0
// Address: 0050a7e0
void __cdecl CDemonSet::renderTransparentActors(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970
// Address: 0050a970
void __cdecl CDemonSet::addDynamicLight(CDemonSet *this_ptr,CDemonLight *light);

// Original: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0
// Address: 0050a9f0
void __cdecl CDemonSet::addCoronaGlobe(CDemonSet *this_ptr,CDemonGlobe *globe);

// Original: core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20
// Address: 0050aa20
void __cdecl CDemonSet::addQueuedCoronaGlobe(CDemonSet *this_ptr,CDemonGlobe *globe);

// Original: core_set.cpp_CDemonSet_FUN_0050aa70
// Address: 0050aa70
void __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_FUN_0050aba0
// Address: 0050aba0
void __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_FUN_0050ad20
// Address: 0050ad20
void __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0
// Address: 0050adc0
void __cdecl CDemonSet::setLightingParameters(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix);

// Original: core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0
// Address: 0050aee0
int __cdecl CDemonSet::gatherVisibleLights(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix);

// Original: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
// Address: 0050b5c0
int __cdecl CDemonSet::calculateSpatialLighting(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal);

// Original: core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
// Address: 0050b7f0
void __cdecl CDemonSet::lightVertexColor(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation);

// Original: core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50
// Address: 0050bb50
void __cdecl CDemonSet::computeLighting(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count);

// Original: core_set.cpp_computeTriangleNormal_FUN_0050bbc0
// Address: 0050bbc0
void __cdecl computeTriangleNormal(CVector3i *vertex_array,SMRGLPrimitiveTriangle *triangle);

// Original: core_set.cpp_computeTriangleNormalIndexed_FUN_0050bcf0
// Address: 0050bcf0
void __cdecl computeTriangleNormalIndexed(CVector3i *vertex_array,ushort *triangle_indices,CVector3f *out_normal);

// Original: core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
// Address: 0050be20
void __cdecl CDemonSet::computeVertexOmniLighting(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index);

// Original: core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010
// Address: 0050c010
void __cdecl CDemonSet::pushScreenBoundsToCamera(CDemonSet *this_ptr,int vertex_count);

// Original: core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
// Address: 0050c200
void __cdecl CDemonSet::rotateVerticies(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices);

// Original: core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0
// Address: 0050c2d0
void __cdecl CDemonSet::lightVerticies(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals);

// Original: core_set.cpp_CDemonSet_process_FUN_0050d040
// Address: 0050d040
void __cdecl CDemonSet::process(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_getReverbPresetAtPosition_FUN_0050d1c0
// Address: 0050d1c0
float __cdecl CDemonSet::getReverbPresetAtPosition(CDemonSet *this_ptr,CVector3f *position);

// Original: core_set.cpp_CDemonSet_loadAssets_FUN_0050d280
// Address: 0050d280
void __cdecl CDemonSet::loadAssets(CDemonSet *this_ptr);

// Original: core_set.cpp_qsortByDisplayListEntry_FUN_0050d2a0
// Address: 0050d2a0
int __cdecl qsortByDisplayListEntry(SDisplayListSortEntry *a,SDisplayListSortEntry *b);

// Original: core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0
// Address: 0050d2d0
void __cdecl CDemonSet::buildDisplayList(CDemonSet *this_ptr,uint dirty_flags_mask);

// Original: core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_0050d640
// Address: 0050d640
void __cdecl CDemonSet::renderEnvMapBatchTri(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha);

// Original: core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0050d670
// Address: 0050d670
void __cdecl CDemonSet::renderEnvMapBatchQuad(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha);

// Original: core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0
// Address: 0050d6a0
void __cdecl CDemonSet::renderEnvMapPrimitives(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride);

// Original: core_set.cpp_CDemonSet_FUN_0050d910
// Address: 0050d910
void __cdecl CDemonSet(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha);

// Original: core_set.cpp_CDemonSet_FUN_0050dd60
// Address: 0050dd60
void __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_FUN_0050ddd0
// Address: 0050ddd0
void __cdecl CDemonSet(CDemonSet *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags);

// Original: core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0
// Address: 0050ded0
void __cdecl CDemonSet::renderFaceListOrEnvMap(CDemonSet *this_ptr,SInputFace *faces,int count,int flags);

// Original: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0050df40
// Address: 0050df40
void __cdecl CDemonSet::renderPrimitiveList(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count);

// Original: core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0
// Address: 0050dfe0
void __cdecl CDemonSet::renderTexturedPrimitiveListVariant(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count);

// Original: core_set.cpp_CDemonSet_FUN_0050e080
// Address: 0050e080
void __cdecl CDemonSet(CDemonSet *this_ptr,int mirror_index,int enable_flag);

// Original: core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190
// Address: 0050e190
void __cdecl CDemonSet::restoreCameraAfterMirror(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_buildMirrorList_FUN_0050e210
// Address: 0050e210
void __cdecl CDemonSet::buildMirrorList(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_markMirrorCameraDirty_FUN_0050e300
// Address: 0050e300
void __cdecl CDemonSet::markMirrorCameraDirty(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_restoreCameraView_FUN_0050e310
// Address: 0050e310
void __cdecl CDemonSet::restoreCameraView(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340
// Address: 0050e340
void __cdecl CDemonSet::setFlatColor(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale);

// Original: core_set.cpp_CDemonSet_FUN_0050e370
// Address: 0050e370
void __cdecl CDemonSet(CDemonSet *this_ptr,CVector3f *position);

// Original: core_set.cpp_CDemonSet_setGamma_FUN_0050e400
// Address: 0050e400
void __cdecl CDemonSet::setGamma(CDemonSet *this_ptr,int gamma);

// Original: core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
// Address: 0050e490
int __cdecl CDemonSet::renderSinglePrimitive(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0
// Address: 0050e4c0
void __cdecl CDemonSet::setCameraAmbientValue(CDemonSet *this_ptr,int index,float value);

// Original: core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0050e510
// Address: 0050e510
void __cdecl CDemonSet::setCameraAmbientValueByGroup(CDemonSet *this_ptr,int group_id,float value);

// Original: core_set.cpp_CDemonSet_FUN_0050e550
// Address: 0050e550
void __cdecl CDemonSet(CDemonSet *this_ptr,int param_2,int param_3);

// Original: core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580
// Address: 0050e580
void __cdecl CDemonSet::setCameraEnabledByGroup(CDemonSet *this_ptr,int group_id,int enabled);

// Original: core_set.cpp_CDemonSet_addLightFilter_FUN_0050e5d0
// Address: 0050e5d0
void __cdecl CDemonSet::addLightFilter(CDemonSet *this_ptr,char *light_name,C3DSLight **out_light,CDemonLight **out_master_light);

// Original: core_set.cpp_CDemonSet_FUN_0050e660
// Address: 0050e660
void __cdecl CDemonSet(CDemonSet *this_ptr,float param_2,float param_3,float param_4,float param_5);

// Original: core_set.cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0
// Address: 0050e6b0
void __cdecl CDemonSet::buildActorTypeLists(CDemonSet *this_ptr);

// Original: core_set.cpp_CDemonSet_loadMasterLightStates_FUN_0050e820
// Address: 0050e820
void __cdecl CDemonSet::loadMasterLightStates(CDemonSet *this_ptr,int *light_state_buffer);

// Original: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_0050e860
// Address: 0050e860
int __cdecl CDemonSet::saveMasterLightStates(CDemonSet *this_ptr,int *light_state_buffer);

// Original: core_set.cpp_CDemonSet_saveStateInfo_FUN_0050e8a0
// Address: 0050e8a0
void __cdecl CDemonSet::saveStateInfo(CDemonSet *this_ptr,_FILE *file_handle);

// Original: core_set.cpp_CDemonSet_loadStateInfo_FUN_0050e920
// Address: 0050e920
void __cdecl CDemonSet::loadStateInfo(CDemonSet *this_ptr,_FILE *file_handle);

// Original: core_set.cpp_CVector3f_equals_FUN_0050ea10
// Address: 0050ea10
int __cdecl CVector3f::equals(CVector3f *a,CVector3f *b);

// Original: core_set.cpp_SRoom_ctor_FUN_0050ea40
// Address: 0050ea40
SRoom * __cdecl SRoom::ctor(SRoom *this_ptr);

// Original: core_set.cpp_SRoom_dtor_FUN_0050ea50
// Address: 0050ea50
SRoom * __cdecl SRoom::dtor(SRoom *this_ptr,uint flags);

// Original: core_set.cpp_SVDBox_ctor_FUN_0050ea60
// Address: 0050ea60
SVDBox * __cdecl SVDBox::ctor(SVDBox *this_ptr);

// Original: core_set.cpp_SVDBox_dtor_FUN_0050ea70
// Address: 0050ea70
SVDBox * __cdecl SVDBox::dtor(SVDBox *this_ptr,uint flags);

// Original: core_set.cpp_C3DSLight_dtor_FUN_0050ea80
// Address: 0050ea80
C3DSLight * __cdecl C3DSLight::dtor(C3DSLight *this_ptr,uint flags);

// Original: core_set.cpp_CVector3f_copy_FUN_0050ea90
// Address: 0050ea90
CVector3f * __cdecl CVector3f::copy(CVector3f *a,CVector3f *b);

// Original: core_set.cpp_CVector3f_arrdtor_FUN_0050eae0
// Address: 0050eae0
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *this_ptr,uint flags);

// Original: core_set.cpp_C3DSCamera_arrdtor_FUN_0050eb00
// Address: 0050eb00
C3DSCamera * __cdecl C3DSCamera::arrdtor(C3DSCamera *this_ptr,uint flags);

// Original: core_set.cpp_C3DSLight_arrdtor_FUN_0050eb20
// Address: 0050eb20
C3DSLight * __cdecl C3DSLight::arrdtor(C3DSLight *this_ptr,uint flags);

// Original: core_set.cpp_SRoom_arrdtor_FUN_0050eb40
// Address: 0050eb40
SRoom * __cdecl SRoom::arrdtor(SRoom *this_ptr,uint flags);

// Original: core_set.cpp_SVDBox_arrdtor_FUN_0050eb60
// Address: 0050eb60
SVDBox * __cdecl SVDBox::arrdtor(SVDBox *this_ptr,uint flags);
