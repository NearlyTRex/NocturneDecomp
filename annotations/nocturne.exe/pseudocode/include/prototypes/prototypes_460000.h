#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonCube.h"
#include "types/classes/CDemonRaytrace.h"
#include "types/classes/CDemonRenderer.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CDrip.h"
#include "types/classes/CDrone.h"
#include "types/classes/CDynamite.h"
#include "types/classes/CEditorTools.h"
#include "types/classes/CInputString.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/enums/ECollisionType.h"
#include "types/funcdefs/CustomScanlineFunc.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SFace.h"
#include "types/structs/SInputFace.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLPrimitivePoly.h"
#include "types/structs/SMRGLPrimitiveQuad.h"
#include "types/structs/SMRGLPrimitiveTriangle.h"
#include "types/structs/SMRGLSkyTexture.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SRGBColorPalette.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/SSoftwareEdge.h"
#include "types/structs/STrianglePackedIndices.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x460000
// =============================================================================

void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);
void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);
void __cdecl engine_drender_cpp_CDemonRenderer_renderOverlayDirect_FUN_004604c0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderOverlayPoly_FUN_00460590(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);
void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0(CDemonRenderer *this_ptr,CVector3i *origin);
void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700(CDemonRenderer *this_ptr,CVector3f *point_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_00460760(CDemonRenderer *this_ptr,CVector3i *rotation);
void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(CDemonRenderer *this_ptr,CVector3f *euler_angles);
void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix);
void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0(CDemonRenderer *this_ptr,CVector3f *input_point);
void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer *this_ptr,CVector3f *world_position);
void __cdecl engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation);
void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer *this_ptr,CVector3f *position,CVector3f *rotation);
void __cdecl engine_drender_cpp_CDemonRenderer_matrixPush_FUN_00460be0(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(CDemonRenderer *this_ptr,float field_of_view);
void engine_drender_cpp_FUN_00460c26(void);
void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_00460c40(CDemonRenderer *this_ptr,float intensity);
void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_00460c70(CDemonRenderer *this_ptr,CVector3i *direction);
void engine_drender_cpp_FUN_00460c90(undefined4 param_1,float *param_2);
void engine_drender_cpp_FUN_00460d10(void);
CVector3f * __cdecl engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(CDemonRenderer *this_ptr,CVector3f *output);
void engine_drender_cpp_FUN_00460d90(void);
CVector3f * __cdecl engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(CDemonRenderer *this_ptr,CVector3f *output);
float __cdecl engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_00460e20(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40(CDemonRenderer *this_ptr,int x,int y,int width,int height);
void __cdecl engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer);
template<typename T_func0>
inline void engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,T_func0 scanline_renderer) {
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80(this_ptr, prim, (CustomScanlineFunc *)scanline_renderer);
}
void __cdecl engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10(CDemonRenderer *this_ptr,int color);
void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component);
void __cdecl engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(CDemonRenderer *this_ptr,int enabled);
void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer *this_ptr,int state_flag);
void __cdecl engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer *this_ptr,int blend_mode);
int __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer *this_ptr,int render_alpha);
void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020(CDemonRenderer *this_ptr,float render_alpha);
void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer *this_ptr,int enabled);
void __cdecl engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(CDemonRenderer *this_ptr,int value);
int __cdecl engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2);
void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_004613a0(CDemonRenderer *this_ptr,int alpha_mask);
int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0(CDemonRenderer *this_ptr,int enabled);
void __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0(CDemonRenderer *this_ptr,SMRGLPrimitiveTriangle *primitive_array,int primitive_count ,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_renderQuadBatch_FUN_00461440(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_004614b0(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags);
void __cdecl engine_drender_cpp_FUN_00461720(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(CDemonRenderer *this_ptr,int enable_advanced_mode);
void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_00461a30(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_00461bd0(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags);
int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_00461d50(SFace **face_ptr_a,SFace **face_ptr_b);
int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00461d80(SFace **face_ptr_a,SFace **face_ptr_b);
void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture);
void __cdecl engine_drender_cpp_CDemonRenderer_updateTexture_FUN_00461f60(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture,SRGBColorPalette *palette);
int __cdecl engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80(CDemonRenderer *this_ptr,SRenderVertex *vertex_ptr);
void __cdecl core_drip_cpp_staticInit_FUN_00461ff0(void);
CDrip * __cdecl core_drip_cpp_factoryFuncDrip_FUN_00462030(void);
CDemonActorType * __cdecl core_drip_cpp_CDrip_getActorType_FUN_00462050(CDrip *this_ptr);
CDrip * __cdecl core_drip_cpp_CDrip_ctor_FUN_00462060(CDrip *this_ptr);
void __cdecl core_drip_cpp_CDrip_setup_FUN_00462140(CDrip *this_ptr);
void __cdecl core_drip_cpp_CDrip_archive_FUN_004621d0(CDrip *this_ptr);
void __cdecl core_drip_cpp_CDrip_process_FUN_00462300(CDrip *this_ptr,float delta_time);
void __cdecl core_drip_cpp_FUN_00462710(CDrip *this_ptr);
int __cdecl core_drip_cpp_CDrip_renderOpaque_FUN_00462720(CDrip *this_ptr);
CBoundingBox3D * __cdecl core_drip_cpp_CDrip_getBoundingBox_FUN_004627a0(CDrip *this_ptr,CBoundingBox3D *out_box);
ECollisionType __cdecl core_drip_cpp_CDrip_getCollisionType_FUN_00462880(CDrip *this_ptr,SCollisionInfo *collision_info);
CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_00462890(CDrip *this_ptr,uint flags);
void __cdecl core_drone_cpp_staticInit_FUN_004628e0(void);
CDrone * __cdecl core_drone_cpp_factoryFuncDrone_FUN_00462910(void);
CDemonActorType * __cdecl core_drone_cpp_CDrone_getActorType_FUN_00462930(CDrone *this_ptr);
CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_00462940(CDrone *this_ptr);
void __cdecl core_drone_cpp_CDrone_setup_FUN_004629b0(CDrone *this_ptr);
void __cdecl core_drone_cpp_CDrone_process_FUN_00462a60(CDrone *this_ptr,float delta_time);
void __cdecl core_drone_cpp_CDrone_archive_FUN_004630e0(CDrone *this_ptr);
void __cdecl core_drone_cpp_CDrone_processDamage_FUN_00463150(CDrone *this_ptr,SDamageInfo *damage_info);
int __cdecl core_drone_cpp_CDrone_getTargetPoints_FUN_004632c0(CDrone *this_ptr,CVector3f *out_points_array);
CDrone * __cdecl core_drone_cpp_CDrone_dtor_FUN_00463310(CDrone *this_ptr,uint flags);
void __cdecl core_dskybox_cpp_staticInit_FUN_004633d0(void);
SMRGLSkyTexture * __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_00463400(SMRGLSkyTexture *texture);
void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_00463440(SMRGLSkyTexture *sky_texture,int u_coord,int v_coord,int vertex_index);
void __cdecl core_dskybox_cpp_renderSkyDome_FUN_00463580(SMRGLSkyTexture *sky_texture,char *texture_name,int brightness_factor);
void __mmx_save core_dstrender_cpp_saveMMXRegisters_FUN_00463a40(ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5,ulonglong mm6,ulonglong mm7);
void __edi_esi_ebx core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderDepth16BitConditional_FUN_00463ac7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00463c42(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderDepthInterlacedProfiled_FUN_00463f77(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderScreenDepthTestInterlacedProfiled_FUN_00463ff5(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderDepthTestStatistics16xUnrolled_FUN_00464075(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_004649dd(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __cdecl core_dstrender_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00464afc(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00464fda(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_004652d0(uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index);
void __cdecl core_dstrender_cpp_memcpyMMX_FUN_00465341(void *dest,void *src,int byte_count);
void __cdecl core_dstrender_cpp_verticalBlur3TapMMXStride320_FUN_00465382(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count);
void __cdecl core_dstrender_cpp_spatialFilter9TapMMX_FUN_004654c5(uint *output_buffer,uint *input_buffer,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapShared4U64toU64pBB12Px4MMX_FUN_0046556f(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapShared4U64toU64pAmbientPx4MMX_FUN_0046568b(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00465c9b(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00465f50(uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1,uint alpha2,int pixel_count);
void __cdecl core_dstrender_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00465fc9(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00466520(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00466886(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index);
void __cdecl core_dstrender_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00466930(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00466e94(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);
void __cdecl core_dtrace_cpp_staticInit_FUN_004671c0(void);
CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_ctor_FUN_004671e0(CDemonRaytrace *this_ptr);
CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00467220(CDemonRaytrace *this_ptr,uint flags);
void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00467250(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004672a0(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_004673a0(CDemonRaytrace *this_ptr);
void core_dtrace_cpp_FUN_004673e0(CDemonRaytrace *param_1);
void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00467560(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_004675e0(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004676c0(CDemonRaytrace *this_ptr,_FILE *file_handle);
int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00467890(CDemonRaytrace *this_ptr,char *filename);
CDemonCube * __cdecl core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z);
CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00467930(CDemonRaytrace *this_ptr,CVector3f *output_point,CVector3f *ray_start,CVector3f *ray_end);
float __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00(CDemonRaytrace *this_ptr,CVector3f *ray_start,CVector3f *ray_end,CVector3f *out_intersection_point,int *out_intersection_type);
int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos);
float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_00468580(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out);
float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_004687e0(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out);
void __cdecl core_dtrace_cpp_initIntersectionCylinder_FUN_00468a20(SIntersectXZCylinder *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y);
void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00468af0(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder);
void __cdecl core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00468d00(CDemonRaytrace *this_ptr,CVector3f *world_pos);
void __cdecl core_dtrace_cpp_CDemonRaytrace_renderVoxelGrid_FUN_00469240(CDemonRaytrace *this_ptr,uchar *voxel_data,int grid_x,int grid_y,int grid_z);
void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode);
void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode);
void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0046ace0(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices);
void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0046ae40(CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array);
void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70(CDemonRaytrace *this_ptr);
float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0(CDemonRaytrace *this_ptr,CVector3f *world_position);
int __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position);
void __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords);
CVector3i * __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords);
CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_0046b7b0(CDemonRaytrace *this_ptr,CVector3f *output_position,CVector3i *voxel_coords);
int __cdecl core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0046b7f0(CDemonRaytrace *this_ptr,CVector3i *voxel_coords);
int __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_0046b8d0(CDemonRaytrace *this_ptr,CVector3i *voxel_coords);
CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0(CDemonRaytrace *this_ptr,CVector3f *output_vector);
CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0(CDemonRaytrace *this_ptr,CVector3f *output_vector);
CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_0046ba20(CDemonRaytrace *this_ptr,CVector3f *output_position,int cube_index);
void __cdecl core_dtrace_cpp_CDemonRaytrace_markShadowVoxels_FUN_0046baa0(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *extent,CVector3f *light_position);
void __cdecl core_dtrace_cpp_CDemonRaytrace_commitShadowBuffer_FUN_0046bcf0(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_0046bd90(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start,CVector3f *end);
void __cdecl core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0046bfe0(CDemonRaytrace *this_ptr,CVector3f *world_position);
void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0046c100(CDemonRaytrace *this_ptr,CVector3f *world_position);
CVector3f * __cdecl core_dtrace_cpp_CVector3f_arrdtor_FUN_0046c230(CVector3f *this_ptr,uint flags);
void __cdecl core_dtri_cpp_staticInit_FUN_0046c250(void);
void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_0046c300(CDemonTriangle *this_ptr,_FILE *file_handle);
void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_0046c350(CDemonTriangle *this_ptr,_FILE *file_handle);
void __cdecl core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0046c3c0(CDemonTriangle *this_ptr,_FILE *file_handle);
void __cdecl core_dtri_cpp_CDemonTriangle_writeDataBinary_FUN_0046c410(CDemonTriangle *this_ptr,_FILE *file_handle);
void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0046c460(CDemonTriangle *this_ptr);
void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3);
float __cdecl core_dtri_cpp_rayTriangleIntersection_FUN_0046c620(CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection);
int __cdecl core_dtri_cpp_cylinderEdgeIntersection_FUN_0046c820(SIntersectXZCylinder *cylinder);
void __cdecl core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0046cb00(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2);
void __cdecl core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder);
int __cdecl core_dtri_cpp_rayEdgeHeightTest_FUN_0046cfa0(CVector3f *vertex1,CVector3f *vertex2,float ray_radius,float *out_height);
int __cdecl core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height);
void __cdecl core_dtri_cpp_copyVector3_FUN_0046d4c0(CVector3f *dest_ptr,CVector3f *src_ptr);
void __cdecl core_dtri_cpp_clipLineToPlane_FUN_0046d4e0(CVector3f *point1_ptr,CVector3f *point2_ptr,CVector3f *result_ptr,double plane_nx,double plane_ny,double plane_nz,double plane_d);
void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_0046d680(float y_max);
void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_0046d7e0(float y_min);
void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_0046d950(float x_max);
void __cdecl core_dtri_cpp_clipPolygonToLeft_FUN_0046dab0(float x_min);
void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_0046dc10(float z_near);
void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_0046dd80(float z_far);
int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0046df40(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max);
int __cdecl core_dtri_cpp_getClippedTriangleCount_FUN_0046e950(int flags);
CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0046e960(int flags);
undefined4 core_dtri_cpp_FUN_0046e9d0(void);
CVector3f * core_dtri_cpp_FUN_0046e9e0(void);
void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_0046e9f0(CDemonTriangle *this_ptr);
CDemonTriangle * __cdecl core_dtri_cpp_CDemonTriangle_arrdtor_FUN_0046eb40(CDemonTriangle *this_ptr,uint flags);
void __cdecl core_dynamite_cpp_staticInit_FUN_0046eb60(void);
CDynamite * __cdecl core_dynamite_cpp_factoryFuncDynamite_FUN_0046eba0(void);
CDemonActorType * __cdecl core_dynamite_cpp_CDynamite_getActorType_FUN_0046ebc0(CDynamite *this_ptr);
CDynamite * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_0046ebd0(CDynamite *this_ptr);
int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_0046ec80(CDynamite *this_ptr);
float core_dynamite_cpp_FUN_0046ecf0(void);
void core_dynamite_cpp_FUN_0046ed20(void);
void __cdecl core_dynamite_cpp_CDynamite_lightFuse_FUN_0046ed30(CDynamite *this_ptr);
int __cdecl core_dynamite_cpp_FUN_0046ed80(CDynamite *this_ptr);
int __cdecl core_dynamite_cpp_FUN_0046eda0(CDynamite *this_ptr);
void __cdecl core_dynamite_cpp_CDynamite_process_FUN_0046edc0(CDynamite *this_ptr,float delta_time);
CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0046ef30(CDynamite *this_ptr,uint flags);
void __cdecl shape_edittool_cpp_staticInit_FUN_0046ef80(void);
void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_0046efa0(int x_coord,int y_coord,int use_clipping);
void __cdecl shape_edittool_cpp_initEditorFontMetrics_FUN_0046f000(void);
char * __cdecl shape_edittool_cpp_extractTabDelimitedField_FUN_0046f060(char *source_str,char *dest_buffer);
void __cdecl shape_edittool_cpp_CInputString_init_FUN_0046f0a0(CInputString *this_ptr,char *source_string,int max_length,int mask_mode);
void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(CInputString *this_ptr);
void __cdecl shape_edittool_cpp_CInputString_insertChar_FUN_0046f150(CInputString *this_ptr,char character,int advance_cursor);
void __cdecl shape_edittool_cpp_CInputString_deleteRange_FUN_0046f1e0(CInputString *this_ptr,int start_pos,int end_pos);
void __cdecl shape_edittool_cpp_CInputString_deleteSelection_FUN_0046f250(CInputString *this_ptr);
void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_0046f2a0(CInputString *this_ptr);
void __cdecl shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0046f2e0(CInputString *this_ptr);
void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0046f330(CInputString *this_ptr);
void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0046f390(CInputString *this_ptr);
int __cdecl shape_edittool_cpp_CInputString_calcX_FUN_0046f5c0(CInputString *this_ptr,int char_index);
void __cdecl shape_edittool_cpp_CInputString_draw_FUN_0046f680(CInputString *this_ptr,int x_pos,int y_pos);
int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0046f7e0(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode);
CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_ctor_FUN_0046f9f0(CEditorTools *this_ptr);
CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0046fa20(CEditorTools *this_ptr,uint flags);
void __cdecl shape_edittool_cpp_CEditorTools_init_FUN_0046fa80(CEditorTools *this_ptr);
void shape_edittool_cpp_FUN_0046fb40(CEditorTools *param_1,char *param_2);
void shape_edittool_cpp_FUN_0046fcd0(CEditorTools *param_1,char *param_2);
void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_0046fe60(CEditorTools *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));
void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0(CEditorTools *this_ptr,char *format);

