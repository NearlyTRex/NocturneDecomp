#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CDSEModel.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonCube.h"
#include "types/classes/CDemonPart.h"
#include "types/classes/CDemonRaytrace.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CDynamite.h"
#include "types/classes/CEditorTools.h"
#include "types/classes/CInputString.h"
#include "types/classes/CStrList.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SSoftwareEdge.h"
#include "types/structs/STriangleRef.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x490000
// =============================================================================

void __cdecl shape_dsemodel_cpp_CDSEModel_doNothing_FUN_00490020(CDSEModel *this_ptr);
void __cdecl core_dskybox_cpp_staticInit_FUN_00490040(void);
SMRGLTextureBasic * __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_00490070(SMRGLTextureBasic *texture);
void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0(SMRGLTextureBasic *sky_texture,int u_coord,int v_coord,int vertex_index);
void __cdecl core_dskybox_cpp_renderSkyDome_FUN_004901f0(SMRGLTextureBasic *sky_texture,char *texture_name,int brightness_factor);
void __mmx_save core_dstrender_cpp_saveMMXRegisters_FUN_004906b0 (ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5, ulonglong mm6,ulonglong mm7);
void __edi_esi_ebx core_dstrender_cpp_renderDepthOnlyReversed_FUN_004906e9 (SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f (SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderDepth16BitConditional_FUN_0049077d (SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7 (SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00490902 (SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00490a58 (SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderDepthInterlacedProfiled_FUN_00490c37 (SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderScreenDepthTestInterlacedProfiled_FUN_00490cb5 (SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35 (SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0 (SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __edi_esi_ebx core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_0049169d (SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __cdecl core_dstrender_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_004917bc(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices, byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00491c9a(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices, byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00491f90(uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index);
void __cdecl core_dstrender_cpp_memcpyMMX_FUN_00492001(void *dest,void *src,int byte_count);
void __cdecl core_dstrender_cpp_verticalBlur3TapMMXStride320_FUN_00492042(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count);
void __cdecl core_dstrender_cpp_verticalBlur3TapMMXStride256_FUN_00492185(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count);
void __cdecl core_dstrender_cpp_blur3x3MMXStride128_FUN_004922c8(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count);
void __cdecl core_dstrender_cpp_spatialFilter9TapMMX_FUN_004923ff(uint *output_buffer,uint *input_buffer,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapShared4U64toU64pBB12Px4MMX_FUN_004924a9(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices, byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapShared4U64toU64pAmbientPx4MMX_FUN_004925c5(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices, byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004926e1(uint *output_buffer,uint *texture_buffer,byte *texture_indices, byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00492bd5(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices, byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00492e8a(uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1, uint alpha2,int pixel_count);
void __cdecl core_dstrender_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00492f03(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices, byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00493450(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices, byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004937b6(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index);
void __cdecl core_dstrender_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00493860(uint *output_buffer,uint *texture_buffer,byte *texture_indices, byte *lightmap_indices,int pixel_count);
void __cdecl core_dstrender_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00493dc4(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices, byte *lightmap_indices,int pixel_count);
void __edi_esi_ebx core_dstrender_cpp_renderPerspectiveTexturedScanline_FUN_004940e9 (SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
void __cdecl core_dtrace_cpp_staticInit_FUN_004941e0(void);
CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00494200(CDemonRaytrace *this_ptr);
CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00494240(CDemonRaytrace *this_ptr,uint flags);
void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00494270(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_consolidateTriList_FUN_00494450(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00494600(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_loadPartAtGridIndex_FUN_00494710(CDemonRaytrace *this_ptr,CDemonPart *part,int linear_index,_FILE *file_handle);
void __cdecl core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004947a0(CDemonRaytrace *this_ptr,_FILE *file_handle);
int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0(CDemonRaytrace *this_ptr,char *filename);
void __cdecl core_dtrace_cpp_CDemonRaytrace_saveBinary_FUN_00494f50(CDemonRaytrace *this_ptr,_FILE *file_handle);
void __cdecl core_dtrace_cpp_CDemonRaytrace_save_FUN_00495040(CDemonRaytrace *this_ptr,char *filename);
void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTris_FUN_004950b0(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_addTriangle_FUN_00495100(CDemonRaytrace *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3, uchar triangle_flags);
CDemonCube * __cdecl core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z);
void __cdecl core_dtrace_cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace *this_ptr,float cube_size);
CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0(CDemonRaytrace *this_ptr,CVector3f *output_point,CVector3f *ray_start,CVector3f *ray_end);
float __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace *this_ptr,CVector3f *ray_start,CVector3f *ray_end, CVector3f *out_intersection_point,int *out_intersection_type);
int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos);
float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out);
float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag, CVector3f *normal_out);
void __cdecl core_dtrace_cpp_initIntersectionCylinder_FUN_00496b90(SIntersectXZCylinder *this_ptr,float start_x,float start_z,float dir_x,float dir_z, float radius,float bottom_y,float top_y);
void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00496c60(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder);
void __cdecl core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00496e70(CDemonRaytrace *this_ptr,CVector3f *world_pos);
void __cdecl core_dtrace_cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0(CDemonRaytrace *this_ptr,uchar *voxel_data,int grid_x,int grid_y,int grid_z);
void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode);
void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode);
void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_00498e50(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices);
void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_00498fb0(CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array);
void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0(CDemonRaytrace *this_ptr);
float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170(CDemonRaytrace *this_ptr,CVector3f *world_position);
int __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position);
void __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0 (CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords);
CVector3i * __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880 (CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords);
CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_00499930(CDemonRaytrace *raytrace_ptr,CVector3f *output_position,CVector3i *voxel_coords);
int __cdecl core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970(CDemonRaytrace *this_ptr,CVector3i *voxel_coords);
int __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50(CDemonRaytrace *this_ptr,CVector3i *voxel_coords);
CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(CDemonRaytrace *this_ptr,CVector3f *output_vector);
CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(CDemonRaytrace *this_ptr,CVector3f *output_vector);
CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0(CDemonRaytrace *this_ptr,CVector3f *output_position,int cube_index);
void __cdecl core_dtrace_cpp_CDemonRaytrace_markShadowVoxels_FUN_00499c20(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *extent, CVector3f *light_position);
void __cdecl core_dtrace_cpp_CDemonRaytrace_commitShadowBuffer_FUN_00499e70(CDemonRaytrace *this_ptr);
void __cdecl core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_00499f10(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start, CVector3f *end);
void __cdecl core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160(CDemonRaytrace *this_ptr,CVector3f *world_position);
void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0049a280(CDemonRaytrace *this_ptr,CVector3f *world_position);
STriangleRef * __cdecl core_dtrace_cpp_STriangleRef_copy_FUN_0049a3b0(STriangleRef *this_ptr,STriangleRef *other);
STriangleRef * __cdecl core_dtrace_cpp_STriangleRef_dtor_FUN_0049a400(STriangleRef *this_ptr,uint flags);
CVector3f * __cdecl core_dtrace_cpp_CVector3f_arrdtor_FUN_0049a410(CVector3f *objs,uint flags);
void __cdecl core_dtri_cpp_staticInit_FUN_0049a430(void);
void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0(CDemonTriangle *this_ptr,_FILE *file_handle);
void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_0049a530(CDemonTriangle *this_ptr,_FILE *file_handle);
void __cdecl core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0(CDemonTriangle *this_ptr,_FILE *file_handle);
void __cdecl core_dtri_cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0(CDemonTriangle *this_ptr,_FILE *file_handle);
void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(CDemonTriangle *triangle);
void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3);
float __cdecl core_dtri_cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection);
int __cdecl core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(SIntersectXZCylinder *cylinder);
void __cdecl core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0049ace0(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2);
void __cdecl core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder);
int __cdecl core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180(CVector3f *vertex1,CVector3f *vertex2,float ray_radius,float *out_height);
int __cdecl core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height);
void __cdecl core_dtri_cpp_copyVector3_FUN_0049b6a0(CVector3f *dest_ptr,CVector3f *src_ptr);
void __cdecl core_dtri_cpp_clipLineToPlane_FUN_0049b6c0(CVector3f *point1_ptr,CVector3f *point2_ptr,CVector3f *result_ptr,double plane_nx, double plane_ny,double plane_nz,double plane_d);
void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_0049b860(float y_max);
void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_0049b9c0(float y_min);
void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_0049bb30(float x_max);
void __cdecl core_dtri_cpp_clipPolygonToLeft_FUN_0049bc90(float x_min);
void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_0049bdf0(float z_near);
void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_0049bf60(float z_far);
int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0049c120(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max);
int __cdecl core_dtri_cpp_getClippedTriangleCount_FUN_0049cb30(int flags);
CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0049cb40(int flags);
int __cdecl core_dtri_cpp_getClippedVertexCount_FUN_0049cbb0(void);
CVector3f * __cdecl core_dtri_cpp_getClippedVertices_FUN_0049cbc0(void);
void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_0049cbd0(CDemonTriangle *this_ptr);
CDemonTriangle * __cdecl core_dtri_cpp_CDemonTriangle_arrdtor_FUN_0049cd20(CDemonTriangle *objs,uint flags);
void __cdecl core_dynamite_cpp_staticInit_FUN_0049cd40(void);
CDynamite * __cdecl core_dynamite_cpp_factoryFunc_FUN_0049cd80(void);
CDemonActorType * __cdecl core_dynamite_cpp_CDynamite_getActorType_FUN_0049cdb0(CDynamite *this_ptr);
CDynamite * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_0049cdc0(CDynamite *this_ptr);
int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_0049ce70(CDynamite *this_ptr);
float __cdecl core_dynamite_cpp_CDynamite_getDamage_FUN_0049cee0(CDynamite *this_ptr);
void __cdecl core_dynamite_cpp_CDynamite_fireProjectile_FUN_0049cf10(CDynamite *this_ptr);
void __cdecl core_dynamite_cpp_CDynamite_lightFuse_FUN_0049cf20(CDynamite *this_ptr);
int __cdecl core_dynamite_cpp_CDynamite_isFuseLit_FUN_0049cf70(CDynamite *this_ptr);
int __cdecl core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_0049cf90(CDynamite *this_ptr);
void __cdecl core_dynamite_cpp_CDynamite_process_FUN_0049cfb0(CDynamite *this_ptr,float delta_time);
CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0049d120(CDynamite *this_ptr,uint flags);
void __cdecl shape_edittool_cpp_staticInit_FUN_0049d170(void);
void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_0049d190(int x_coord,int y_coord,int use_clipping);
void __cdecl shape_edittool_cpp_initEditorFontMetrics_FUN_0049d1f0(void);
char * __cdecl shape_edittool_cpp_extractTabDelimitedField_FUN_0049d250(char *source_str,char *dest_buffer);
void __cdecl shape_edittool_cpp_drawDashedLine_FUN_0049d290(int x1,int y1,int x2,int y2,int dash_length);
void __cdecl shape_edittool_cpp_CInputString_init_FUN_0049d3d0(CInputString *this_ptr,char *source_string,int max_length,int mask_mode);
void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString *this_ptr);
void __cdecl shape_edittool_cpp_CInputString_insertChar_FUN_0049d480(CInputString *this_ptr,char character,int advance_cursor);
void __cdecl shape_edittool_cpp_CInputString_deleteRange_FUN_0049d510(CInputString *this_ptr,int start_pos,int end_pos);
void __cdecl shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(CInputString *this_ptr);
void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_0049d5d0(CInputString *this_ptr);
void __cdecl shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(CInputString *this_ptr);
void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0049d660(CInputString *this_ptr);
void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0049d6c0(CInputString *this_ptr);
int __cdecl shape_edittool_cpp_CInputString_calcX_FUN_0049d8f0(CInputString *this_ptr,int char_index);
void __cdecl shape_edittool_cpp_CInputString_draw_FUN_0049d9b0(CInputString *this_ptr,int x_pos,int y_pos);
int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0049db10(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode);
CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_ctor_FUN_0049df80(CEditorTools *this_ptr);
CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0049dfb0(CEditorTools *this_ptr,uint flags);
void __cdecl shape_edittool_cpp_CEditorTools_init_FUN_0049e020(CEditorTools *this_ptr);
void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130(char *title,char *message,int color);
void __cdecl shape_edittool_cpp_CEditorTools_backupScreen_FUN_0049e410(CEditorTools *this_ptr);
void __cdecl shape_edittool_cpp_CEditorTools_restoreScreen_FUN_0049e4d0(CEditorTools *this_ptr);
void __cdecl shape_edittool_cpp_paintWindowBackground_FUN_0049e590(void);
void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));
void __cdecl shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));
void __cdecl shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(CEditorTools *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));
void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));
void __cdecl shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870(CEditorTools *this_ptr,char *format_string,...) __attribute__((format(printf, 2, 3)));
void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940(CEditorTools *this_ptr,char *dialog_text);
int __cdecl shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0(CStrList *str_list,char *dialog_title,int dialog_mode);
int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog1_FUN_0049f060(CEditorTools *this_ptr,char *format_string,...) __attribute__((format(printf, 2, 3)));
int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0(CEditorTools *this_ptr,char *format_string,...) __attribute__((format(printf, 2, 3)));
int __cdecl shape_edittool_cpp_CEditorTools_showYesAllNoCancelDialog_FUN_0049f180(CEditorTools *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));
int __cdecl shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools *this_ptr,char *dialog_title,char *search_directory,char *file_pattern, char *output_filename,uint flags);
int __cdecl shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools *this_ptr,char *title_text,char *search_pattern,char *initial_path, uint flags);
int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension, char *output_buffer,uint flags);

