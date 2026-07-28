#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorDestination.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonCamera.h"
#include "types/classes/CDemonCube.h"
#include "types/classes/CDemonCubeTriangle.h"
#include "types/classes/CDemonFilter.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CDemonImage.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CFilterCache.h"
#include "types/classes/CFilterFx.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CRect.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SCoronaLightEntry.h"
#include "types/structs/SFog.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/STriangleRef.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x440000
// =============================================================================

void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_00440010(CDemonCamera *this_ptr,int screen_height);
void core_dcamera_cpp_FUN_004401b0(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_004401d0(CDemonCamera *this_ptr);
void core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00440240(undefined4 param_1,int param_2);
void __cdecl core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_00440270(CDemonCamera *this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(CDemonCamera *this_ptr,int skip_clear_buffers);
void __cdecl core_dcamera_cpp_CDemonCamera_pushRect_FUN_004405d0(CDemonCamera *this_ptr,int left,int top,int right,int bottom);
void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_00440610(CDemonCamera *this_ptr,CRect *rect_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710(CDemonCamera *this_ptr);
void core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(CDemonCamera *param_1,int param_2);
void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(CDemonCamera *this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(CDemonCamera *this_ptr,int restore_zbuffer);
void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40(CDemonCamera *this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(CDemonCamera *this_ptr);
void core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(int param_1,int param_2,int param_3);
void core_dcamera_cpp_CDemonCamera_worldToScreenCoord_FUN_00441150(int param_1,int *param_2);
int * core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0(int param_1,int *param_2);
float * core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_004412c0(int param_1,float *param_2,int param_3,int param_4);
int * core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440(int param_1,int *param_2);
void core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610(int param_1,int *param_2);
void core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_004418d0(int param_1,int *param_2);
CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector);
int core_dcamera_cpp_CDemonCamera_allocLight_FUN_00441c20(void);
void __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50(CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect);
void core_dcamera_cpp_FUN_004421b0(int param_1);
void core_dcamera_cpp_FUN_004425d0(undefined4 param_1,int param_2,int param_3);
int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity);
int core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50(CDemonCamera *param_1,CVector3i *param_2,CDemonLight *param_3,int *param_4);
void core_dcamera_cpp_FUN_00442d9c(void);
void core_dcamera_cpp_FUN_00443050(int param_1);
void core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_00443100(void);
void core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_00443180(void);
void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_00443250(CDemonCamera *this_ptr,char *filename);
void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_00444140(void);
void core_dcamera_cpp_renderCoronaDepthScanline_FUN_00444180(int param_1,int param_2,int param_3);
void core_dcamera_cpp_renderVolumetricLightScanline_FUN_004442a0(int param_1,int param_2,int param_3);
void core_dcamera_cpp_renderFlatColorScanline_FUN_00444440(int param_1,int param_2,int param_3);
void core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_00444600(int param_1,int param_2,int param_3);
void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810(CDemonCamera *this_ptr);
double core_dcamera_cpp_log2Custom_FUN_004448f0(void);
void core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920(int param_1,int param_2);
void __cdecl core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00444c90(CDemonCamera *this_ptr,CDemonLight *light_source);
int __cdecl core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20(CDemonCamera *this_ptr,CDemonLight *light_source);
void core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0(int param_1,int param_2);
void core_dcamera_cpp_CDemonCamera_processCorona_FUN_00444f90(CDemonCamera *param_1);
int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020(CDemonCamera *this_ptr);
bool core_dcamera_cpp_testCoronaVisibility_FUN_004450b0(int param_1,int param_2,int param_3);
void core_dcamera_cpp_renderCoronaScanlineSegment_FUN_004451a0(int param_1,int param_2,int param_3);
void core_dcamera_cpp_processCoronaScanline_FUN_00445310(int param_1,int param_2,int param_3,int param_4);
void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_00445650(int scanline_y,int x_start,int x_end,SCoronaLightEntry *source_entry);
SCoronaLightEntry * core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750(SCoronaLightEntry *param_1,SCoronaLightEntry *param_2,int param_3);
void core_dcamera_cpp_transformAndStoreVertex_FUN_00445f70(int param_1,float param_2,float param_3,float param_4);
int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max);
int __cdecl core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00446590(CDemonCamera *this_ptr,CVector3f *position,float radius);
void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740(CDemonCamera *this_ptr,float intensity);
float * core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_00446760(undefined4 param_1,float *param_2,undefined4 param_3,undefined4 param_4);
void core_dcamera_cpp_FUN_00446800(void);
void core_dcamera_cpp_FUN_00446810(int param_1);
void __cdecl core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00446ea0(CDemonCamera *this_ptr,int plane_index);
void __cdecl core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0(CDemonCamera *this_ptr,int plane_index,uint blend_alpha);
void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0(CDemonCamera *this_ptr);
void core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0(undefined4 param_1,int *param_2);
int core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0(int param_1,int *param_2);
void core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(undefined4 param_1,float *param_2,undefined4 param_3);
void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760(CDemonCamera *this_ptr,SRenderVertex *vertex);
void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_004477f0(CDemonCamera *this_ptr,int alpha_index);
void core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00447910(int param_1,int *param_2,int param_3);
void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00447a70(CDemonCamera *this_ptr,int gamma_value);
void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00447b30(CDemonCamera *this_ptr,int clear_color);
void core_dcamera_cpp_FUN_00447bb0(int param_1,int param_2,int param_3,int param_4);
void core_dcamera_cpp_FUN_00447c60(int param_1,int param_2,int param_3,int param_4);
void __cdecl core_dcamera_cpp_loadCameraFog_FUN_00447d10(SFog *fog,_FILE *file_handle,int file_version);
void core_dcamera_cpp_saveCameraFog_FUN_00447dd0(int param_1,undefined4 param_2);
void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00447e80(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time);
CBoundingBox3D * core_dcamera_cpp_FUN_00447f20(int param_1,CBoundingBox3D *param_2);
void core_dcamera_cpp_FUN_00448310(int param_1);
void core_dcamera_cpp_FUN_00448380(int param_1);
void core_dcamera_cpp_CVector3f_arrdtor_FUN_004483f0(void);
void __cdecl core_dcube_cpp_staticInit_FUN_00448410(void);
void core_dcube_cpp_FUN_004484a0(void);
void core_dcube_cpp_clipEdgeToPlane_FUN_004484c0(float *param_1,float *param_2,float *param_3,int param_4,uint param_5,int param_6,uint param_7,int param_8,uint param_9,double param_10);
void core_dcube_cpp_FUN_00448660(float param_1);
void core_dcube_cpp_FUN_004487c0(float param_1);
void core_dcube_cpp_FUN_00448930(float param_1);
void core_dcube_cpp_FUN_00448a90(float param_1);
void core_dcube_cpp_FUN_00448bf0(float param_1);
void core_dcube_cpp_FUN_00448d60(float param_1);
void core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0(int *param_1,_FILE *param_2,int param_3);
void core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00448f40(int *param_1,_FILE *param_2,int param_3);
void __cdecl core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_00448fb0(CDemonCubeTriangle *this_ptr);
void core_dcube_cpp_CDemonCubeTriangle_init_FUN_00449120(void);
float core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150(undefined4 *param_1,float *param_2,float *param_3);
int __cdecl core_dcube_cpp_intersectXZCylinder_FUN_004493a0(SIntersectXZCylinder *cylinder);
int __cdecl core_dcube_cpp_intersectXZCylinderWithHeight_FUN_00449680(SIntersectXZCylinder *cylinder,CVector3f *segment_start,CVector3f *segment_end);
uint __cdecl core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00449720(STriangleRef *triangle,SIntersectXZCylinder *cylinder);
uint __cdecl core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00449bc0(CVector3f *segment_start,CVector3f *segment_end,float radius,float *out_height);
uint __cdecl core_dcube_cpp_triangleCylinderCollision_FUN_00449d30(CDemonCubeTriangle *triangle,CVector3f *cylinder_center,float cylinder_radius,float *out_height);
undefined4 core_dcube_cpp_FUN_0044a150(undefined4 *param_1,float *param_2,float *param_3);
void core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60(int *param_1,int param_2);
void core_dcube_cpp_CDemonCube_ctor_FUN_0044abd0(undefined4 *param_1);
undefined4 core_dcube_cpp_CDemonCube_dtor_FUN_0044ac10(undefined4 param_1);
void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_0044ac30(CDemonCube *this_ptr);
void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0(CDemonCube *this_ptr);
void core_dcube_cpp_FUN_0044adf0(int *param_1);
void core_dcube_cpp_FUN_0044ae80(void);
SIZE_T core_dcube_cpp_CDemonCube_load_FUN_0044aed0(CDemonCube *param_1,_FILE *param_2);
void __cdecl core_dcube_cpp_CDemonCube_rotateVertices_FUN_0044aff0(CDemonCube *this_ptr,uint rendering_mode);
float core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,uint *param_5);
void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_0044b430(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder);
int __cdecl core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material);
void core_dcube_cpp_CVector3f_arrdtor_FUN_0044b640(void);
void core_dcube_cpp_FUN_0044b660(char *param_1);
void core_dcube_cpp_FUN_0044b720(void);
void __cdecl core_dest_cpp_staticInit_FUN_0044b740(void);
void core_dest_cpp_FUN_0044b770(void);
CDemonActorType * core_dest_cpp_FUN_0044b790(void);
CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_0044b7a0(CActorDestination *this_ptr);
void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0044b810(CActorDestination *this_ptr);
void __cdecl core_dest_cpp_CActorDestination_process_FUN_0044b850(CActorDestination *this_ptr,float delta_time);
undefined4 core_dest_cpp_FUN_0044ba10(void);
undefined4 * core_dest_cpp_CActorDestination_getBoundingBox_FUN_0044ba20(int param_1,undefined4 *param_2);
int __cdecl core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0(CActorDestination *this_ptr,CDemonActor *actor);
void __cdecl core_dest_cpp_CActorDestination_archive_FUN_0044bb10(CActorDestination *this_ptr);
CDemonActor * core_dest_cpp_FUN_0044bbd0(CDemonActor *param_1,byte param_2);
void __cdecl core_dfilter_cpp_staticInit_FUN_0044bc20(void);
CFilterCache * __cdecl core_dfilter_cpp_CFilterCache_ctor_FUN_0044bca0(CFilterCache *this_ptr);
CFilterCache * core_dfilter_cpp_FUN_0044bcb0(CFilterCache *param_1);
void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_0044bcd0(CFilterCache *this_ptr);
int core_dfilter_cpp_CFilterCache_getFilter_FUN_0044bd20(int *param_1,char *param_2,int param_3);
CDemonFilter * __cdecl core_dfilter_cpp_CFilterCache_findFilter_FUN_0044be60(CFilterCache *this_ptr,char *filter_name);
CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_ctor_FUN_0044beb0(CDemonFilter *this_ptr);
CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_dtor_FUN_0044bf00(CDemonFilter *this_ptr,uint flags);
void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0044bf20(CDemonFilter *this_ptr);
void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0044bf70(CDemonFilter *this_ptr);
void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_0044bf90(CDemonFilter *this_ptr,char *filename);
void __cdecl core_dfilter_cpp_CDemonFilter_init_FUN_0044c190(CDemonFilter *this_ptr,float init_value,int flags);
CFilterFx * __cdecl core_dfilter_cpp_CFilterFX_ctor_FUN_0044c2b0(CFilterFx *this_ptr);
CFilterFx * core_dfilter_cpp_CFilterFX_dtor_FUN_0044c2d0(CFilterFx *param_1);
void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_0044c2f0(CFilterFx *this_ptr);
void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_0044c310(CFilterFx *this_ptr,char *filename);
void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_0044c4a0(CFilterFx *this_ptr);
void core_dfilter_cpp_FUN_0044c540(void *param_1);
void core_dfont_cpp_FUN_0044c560(void);
void core_dfont_cpp_FUN_0044cc00(void);
void core_dfont_cpp_FUN_0044cd80(void);
void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(CDemonGlobe *this_ptr,CVector3f *position);
void __cdecl core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(CDemonGlobe *this_ptr,float radius);
void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0044ce80(CDemonGlobe *this_ptr);
void core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060(int param_1);
int __cdecl core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_0044d1f0(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max);
int core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0044d2d0(int param_1,int *param_2,int *param_3);
void core_dimage_cpp_CDemonImage_ctor_FUN_0044d430(void);
CDemonImage * core_dimage_cpp_FUN_0044d440(CDemonImage *param_1);
void __cdecl core_dimage_cpp_CDemonImage_allocMemory_FUN_0044d460(CDemonImage *this_ptr);
void __cdecl core_dimage_cpp_CDemonImage_freeMemory_FUN_0044d4c0(CDemonImage *this_ptr);
ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0044d4f0(CDemonImage *this_ptr,uint red,uint green,uint blue);
void core_dimage_cpp_CDemonImage_load_FUN_0044d550(CDemonImage *param_1,char *param_2,SIZE_T param_3,SIZE_T param_4);
void __cdecl core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f *this_ptr,CVector3f *euler_angles);
void core_dirmat_cpp_CMatrix3x3f_invert_FUN_0044d880(float *param_1);
float * core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(float *param_1,float *param_2,float *param_3);
float * core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(float *param_1,float *param_2,float *param_3);
float core_dirmat_cpp_FUN_0044db00(void);
CVector3f * __cdecl core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(CMatrix3x3f *this_ptr,CVector3f *euler_angles);
void core_dirmat_cpp_CMatrix3x3f_multiply_FUN_0044dfb0(float *param_1,float *param_2);
void __cdecl core_dlight_cpp_staticInit_FUN_0044e0f0(void);
CDemonLight * __cdecl core_dlight_cpp_CDemonLight_ctor_FUN_0044e110(CDemonLight *this_ptr,int shadow_map_width,int shadow_map_height);
void core_dlight_cpp_FUN_0044e1c0(undefined4 param_1);
void __cdecl core_dlight_cpp_CDemonLight_init_FUN_0044e1e0(CDemonLight *this_ptr);
void core_dlight_cpp_FUN_0044e2c0(int param_1);
void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_0044e340(int pixel_count);
void __cdecl core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0044e3b0(void);
void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0(CDemonLight *this_ptr);
void core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440(int param_1);
void __cdecl core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(CDemonLight *this_ptr,int skip_clear_buffers);
void __cdecl core_dlight_cpp_CDemonLight_blitZBuffer_FUN_0044e660(CDemonLight *this_ptr,CRect *source_rect);
void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(CDemonLight *this_ptr,int restore_viewport_state);
void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044e830(CDemonLight *this_ptr);
void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0044e920(CDemonLight *this_ptr);
void core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(CDemonLight *param_1);
ushort * __cdecl core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0044ec60(CDemonLight *this_ptr,CVector3i *projected_coord,uchar x_round_flag,uchar y_round_flag);
void core_dlight_cpp_FUN_0044ed50(int param_1,int param_2,int param_3);
void core_dlight_cpp_FUN_0044ed80(int param_1,int param_2,int param_3,int param_4);
void __cdecl core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0(CDemonLight *this_ptr);
void core_dlight_cpp_FUN_0044f0b0(CDemonLight *param_1);
void core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430(CDemonLight *param_1);
void core_dlight_cpp_FUN_0044f9b0(int param_1);

