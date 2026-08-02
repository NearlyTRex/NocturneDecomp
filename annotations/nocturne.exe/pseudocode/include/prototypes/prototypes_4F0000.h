#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonPod.h"
#include "types/classes/CHero.h"
#include "types/classes/CLocation.h"
#include "types/classes/CPackedBitmap.h"
#include "types/classes/CPackedBitmapSet.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CPendulum.h"
#include "types/classes/CPlatform.h"
#include "types/classes/CPod.h"
#include "types/classes/CPodFile.h"
#include "types/classes/CPodSearchContext.h"
#include "types/classes/CScat.h"
#include "types/classes/CScript.h"
#include "types/classes/CVector3f.h"
#include "types/enums/ECollisionType.h"
#include "types/enums/EGroundType.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SFoundFileInfo.h"
#include "types/structs/SMRGLPrimitiveTriangle.h"
#include "types/structs/SPlayerActionState.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/SSoftwareEdge.h"
#include "types/structs/STrianglePackedIndices.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4F0000
// =============================================================================

void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_004f0360(CPathMap *this_ptr,CVector3f *source_position,int force_update);
int __cdecl core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap *this_ptr,int grid_z,int grid_x,int current_height);
int __cdecl core_path_cpp_CPathMap_isLineWalkable_FUN_004f0540(CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z,int end_height);
int __cdecl core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_004f0790(CPathMap *this_ptr,int start_x,int start_z,int end_x,int end_z);
int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_004f0c20(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint);
void __cdecl core_path_cpp_CPathMap_previewPathfinding_FUN_004f1500(CPathMap *this_ptr);
int __cdecl core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint);
void __cdecl core_path_cpp_renderGridQuad_FUN_004f16d0(int grid_x,int grid_y,int grid_z,int red,int green,int blue,int alpha);
void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_004f18c0(CPathMap *this_ptr,int depth,int red,int green,int fog);
CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_004f1c90(CLocation *location);
CPathMap * __cdecl core_path_cpp_getPathMap_FUN_004f1e00(CLocation *location);
void __cdecl core_path_cpp_CPathMap_reset_FUN_004f1e10(CPathMap *this_ptr);
void __cdecl core_path_cpp_resetAllPathMaps_FUN_004f1e90(void);
void __cdecl core_path_cpp_renderAllPathMaps_FUN_004f1ef0(int depth,int red,int green,int fog);
void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_004f1f80(CVector3f *position,int depth,int red,int green,int fog);
void __cdecl core_path_cpp_CPathMap_setupPathSearch_FUN_004f2050(CPathMap *this_ptr);
uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_004f20a0(CPathMap *this_ptr,int start_height);
void core_path_cpp_FUN_004f2530(void *param_1);
void __cdecl engine_pcx_c_writePCXScanline_FUN_004f2550(int row_index,_FILE *pcx_file);
void __cdecl engine_pcx_c_saveScreenRaw16_FUN_004f2620(char *filename);
void __cdecl engine_pcx_c_saveScreenRaw32_FUN_004f27e0(char *filename);
void __cdecl engine_pcx_c_FUN_004f2990(char *filename);
void __cdecl core_pendulum_cpp_staticInit_FUN_004f2bd0(void);
CPendulum * __cdecl core_pendulum_cpp_factoryFunc_FUN_004f2c00(void);
CDemonActorType * core_pendulum_cpp_CPendulum_getActorType_FUN_004f2c20(void);
CPendulum * __cdecl core_pendulum_cpp_CPendulum_ctor_FUN_004f2c30(CPendulum *this_ptr);
void core_pendulum_cpp_CPendulum_setup_FUN_004f2d40(CDemonActor *param_1);
void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_004f2e60(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor);
int __cdecl core_pendulum_cpp_didPhaseCross_FUN_004f3340(float threshold,float old_phase,float new_phase);
void __cdecl core_pendulum_cpp_CPendulum_updateSwing_FUN_004f3430(CPendulum *this_ptr,float delta_time);
void core_pendulum_cpp_CPendulum_process_FUN_004f3a20(CPendulum *param_1,float param_2);
int core_pendulum_cpp_CPendulum_renderOpaque_FUN_004f3b90(CDemonActor *param_1);
undefined4 * core_pendulum_cpp_CPendulum_getBoundingBox_FUN_004f3c00(int param_1,undefined4 *param_2);
void core_pendulum_cpp_CPendulum_archive_FUN_004f3c50(CDemonActor *param_1);
ECollisionType __cdecl core_pendulum_cpp_CPendulum_getCollisionType_FUN_004f3df0(CPendulum *this_ptr,SCollisionInfo *collision_info);
EGroundType __cdecl core_pendulum_cpp_CPendulum_getGroundType_FUN_004f3e30(CPendulum *this_ptr);
CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_004f3e40(CPendulum *this_ptr,uint flags);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_004f3e90(CPackedBitmap *this_ptr);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_004f3eb0(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_004f3f00(CPackedBitmap *this_ptr,uint flags);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_004f3f20(CPackedBitmap *this_ptr);
void cockpit_pkbitmap_cpp_FUN_004f3f50(CPackedBitmap *param_1);
void cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_004f3f80(int param_1);
int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_004f3fa0(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(CPackedBitmap *this_ptr,char *filename);
int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_004f3fe0(CPackedBitmap *this_ptr,int x_coordinate,int row_index);
void cockpit_pkbitmap_cpp_FUN_004f4050(int param_1,int param_2,int param_3);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_004f4310(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderIfIntersectsRect_FUN_004f4410(CPackedBitmap *this_ptr,int dest_x,int dest_y,int rect_left,int rect_top,int rect_right,int rect_bottom);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_004f44d0(CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyToBufferAtPosition_FUN_004f45e0(CPackedBitmap *this_ptr,uchar *dest_buffer,int dest_x,int dest_y,int bits_per_pixel,int buffer_stride);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630(CPackedBitmap *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,undefined4 param_7,int param_8);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0(CPackedBitmap *this_ptr,int apply_palette_flag);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700(CPackedBitmap *this_ptr,uchar *raw_bitmap_data,int row_stride);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,int param_6);
void cockpit_pkbitmap_cpp_FUN_004f49d8(void);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00(CPackedBitmap *this_ptr,char *act_filename);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50(CPackedBitmap *this_ptr,uchar *palette_buffer);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0(CPackedBitmap *this_ptr,int apply_palette_flag);
void cockpit_pkbitmap_cpp_FUN_004f4b30(CPackedBitmap *param_1,char *param_2);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0(CPackedBitmap *this_ptr,_FILE *file_handle);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_004f4e40(CPackedBitmap *param_1,char *param_2);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadPBMFile_FUN_004f4ef0(CPackedBitmap *this_ptr,int apply_palette_flag);
void cockpit_pkbitmap_cpp_FUN_004f4f10(void);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_FUN_004f4f90(CPackedBitmapSet *bitmap_set_ptr,_FILE *file_handle,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_FUN_004f5110(CPackedBitmapSet *bitmap_set_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index);
void cockpit_pkbitmap_cpp_FUN_004f5290(undefined4 *param_1);
void cockpit_pkbitmap_cpp_FUN_004f52c0(int *param_1);
void cockpit_pkbitmap_cpp_FUN_004f5320(undefined4 *param_1);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_004f5350(CPackedBitmapSet *this_ptr,int bitmap_count);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0(CPackedBitmapSet *this_ptr,char *filename_format,int width,int height,int start_index,int end_index,int transparency_color,int apply_palette_flag);
void cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0(CPackedBitmapSet *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,int param_6);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_004f5740(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_004f5920(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,int apply_palette_flag);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_004f59d0(CPackedBitmapSet *this_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_004f5a20(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_004f5a50(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_004f5b20(CPackedBitmapSet *this_ptr,char *act_filename);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_004f5b70(CPackedBitmapSet *this_ptr,char *palette_data);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_004f5bb0(CPackedBitmapSet *this_ptr);
int __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_004f5bf0(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_004f5c40(CPackedBitmapSet *this_ptr,char *filename);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_004f5c80(CPackedBitmapSet *this_ptr,int bitmap_index);
undefined4 cockpit_pkbmpset_cpp_FUN_004f5cf0(int param_1);
undefined4 cockpit_pkbmpset_cpp_FUN_004f5d00(void);
void cockpit_pkbmpset_cpp_FUN_004f5d10(void);
void __cdecl core_platfrm_cpp_staticInit_FUN_004f5d30(void);
CPlatform * __cdecl core_platfrm_cpp_factoryFunc_FUN_004f5d60(void);
CDemonActorType * core_platfrm_cpp_CPlatform_getActorType_FUN_004f5d80(void);
CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_004f5d90(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_004f5f60(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_004f5ff0(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_process_FUN_004f6170(CPlatform *this_ptr,float delta_time);
void __cdecl core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0(CPlatform *this_ptr,float goal_param,float movement_rate);
int core_platfrm_cpp_CPlatform_renderOpaque_FUN_004f6c60(CDemonActor *param_1);
void core_platfrm_cpp_CPlatform_renderBackground_FUN_004f6d90(CDemonActor *param_1,int param_2);
undefined4 * core_platfrm_cpp_CPlatform_getBoundingBox_FUN_004f6f50(int param_1,undefined4 *param_2);
void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_004f6fa0(CPlatform *this_ptr);
int __cdecl core_platfrm_cpp_FUN_004f7360(CPlatform *this_ptr,CDemonActor *actor);
undefined4 core_platfrm_cpp_CPlatform_getCollisionType_FUN_004f7560(int param_1,int param_2);
undefined4 core_platfrm_cpp_CPlatform_allowBulletHoles_FUN_004f7580(void);
undefined4 core_platfrm_cpp_CPlatform_getGroundType_FUN_004f75a0(int param_1);
undefined4 core_platfrm_cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_004f75b0(int param_1);
void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_004f75c0(CPlatform *this_ptr,CDemonActor *actor);
void core_platfrm_cpp_FUN_004f76c0(void);
void __cdecl core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_004f7700(CPlatform *this_ptr);
uint __cdecl engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(uint current_crc,uchar data_byte);
uint __cdecl engine_pod_cpp_crc32UpdateBuffer_FUN_004f7890(uchar *data_buffer,uint byte_count,uint initial_crc);
uint __cdecl engine_pod_cpp_crc32ComputeFromFile_FUN_004f78d0(_FILE *file_stream,uint total_bytes);
uint engine_pod_cpp_FUN_004f7980(char *param_1,int param_2);
CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_004f7a80(CPodFile *this_ptr);
CPodFile * __cdecl engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(CPodFile *this_ptr,uint flags);
undefined4 engine_pod_cpp_FUN_004f7ae0(CPodFile *param_1,char *param_2);
void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0(CPodFile *this_ptr);
int __cdecl engine_pod_cpp_CPodFile_findFileIndex_FUN_004f8150(CPodFile *this_ptr,char *filename);
void engine_pod_cpp_CPodFile_populateFileInfo_FUN_004f81c0(int param_1,int param_2,int param_3);
int __cdecl engine_pod_cpp_CPodFile_verifyChecksum_FUN_004f8240(CPodFile *this_ptr);
void engine_pod_cpp_CPodFile_getAuditRecord_FUN_004f8570(int param_1,int param_2);
uint engine_pod_cpp_CPodFile_computeFileCRC_FUN_004f86a0(int param_1,int param_2);
CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_004f8810(CPod *this_ptr);
CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_004f8840(CPod *this_ptr,uint flags);
void engine_pod_cpp_CPod_load_FUN_004f8870(void);
void engine_pod_cpp_CPod_mount_FUN_004f88a0(int *param_1,undefined4 param_2);
void __cdecl engine_pod_cpp_CPod_remount_FUN_004f8970(CPod *this_ptr);
void engine_pod_cpp_FUN_004f8a10(int *param_1,char *param_2);
void __cdecl engine_pod_cpp_CPod_init_FUN_004f8af0(CPod *this_ptr);
void __cdecl engine_pod_cpp_CPod_cleanup_FUN_004f8b40(CPod *this_ptr);
int engine_pod_cpp_findFilesByExtension_FUN_004f8b90(int *param_1,byte *param_2,int param_3,int param_4,int param_5);
void __cdecl engine_pod_cpp_CPod_initSearch_FUN_004f8d50(CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context);
int __cdecl engine_pod_cpp_CPod_getNextSearchResult_FUN_004f8da0(CPod *this_ptr,CPodSearchContext *search_context);
void engine_pod_cpp_FUN_004f8eb0(undefined4 param_1,char *param_2);
int engine_pod_cpp_FUN_004f9100(void);
CPodFile * __cdecl engine_pod_cpp_CPod_locateFile_FUN_004f9170(CPod *this_ptr,char *base_path,char *filename,int *file_index_out);
int __cdecl engine_pod_cpp_CPod_findFile_FUN_004f9200(CPod *this_ptr,SFoundFileInfo *found_file_info);
void __cdecl core_podmain_cpp_staticInit_FUN_004f9280(void);
void core_podmain_cpp_CDemonPod_load_FUN_004f92b0(int param_1);
CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_004f93c0(CDemonPod *this_ptr);
CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_004f93e0(CDemonPod *this_ptr,uint flags);
void engine_prim_c_FUN_004f942e(void);
void engine_prim_c_FUN_004f9440(void);
void __cdecl engine_prim_c_setCullingMode_FUN_004f9450(int culling_mode);
void __cdecl engine_prim_c_setupBasicSoftwareEdge_FUN_004f9460(SRenderVertex *start_vertex,SRenderVertex *end_vertex);
void __cdecl engine_prim_c_setupSoftwareEdgeWithZMode_FUN_004f9620(SRenderVertex *start_vertex,SRenderVertex *end_vertex);
SSoftwareEdge * __cdecl engine_prim_c_findEdgeInBuffer_FUN_004f9830(int y_value,SSoftwareEdge *edge_ptr);
void __cdecl engine_prim_c_prepareDepthBuffer_FUN_004f9870(SRenderVertex *vertices,int vertex_count);
void __cdecl engine_prim_c_normalizeTextureCoords_FUN_004f98e0(SRenderVertex *vertices,int vertex_count);
void __cdecl engine_prim_c_adjustNearPlaneTextureCoords_FUN_004f9960(SRenderVertex *vertices,int vertex_count);
void __cdecl engine_prim_c_replaceWWithDepth_FUN_004f99d0(SRenderVertex *vertices,int vertex_count);
int __cdecl engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex *v0,SRenderVertex *v1,SRenderVertex *v2);
int __cdecl engine_prim_c_getTriangleWindingFromIndices1_FUN_004f9ad0(SMRGLPrimitiveTriangle *triangle);
bool engine_prim_c_FUN_004f9bc0(int param_1);
int __cdecl engine_prim_c_getTriangleWindingFromPackedIndices_FUN_004f9cb0(STrianglePackedIndices *triangle);
void __cdecl engine_prim_c_FUN_004f9dd0(SRenderVertex *vertices,int vertex_count);
void __cdecl engine_prim_c_FUN_004fa2e0(int *vertex_indices,int vertex_count);
void __cdecl engine_prim_c_setupAdvancedSoftwareEdge_FUN_004fa800(SRenderVertex *start_vertex,SRenderVertex *end_vertex);
void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_004faa20(SRenderVertex *vertex0,SRenderVertex *vertex1);
int * engine_prim_c_FUN_004faca0(void);
void __cdecl engine_prim_c_renderScanlinePolygon_FUN_004fad00(SRenderVertex *vertices,int vertex_count);
void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_004fb390(int *vertex_indices,int vertex_count);
void __cdecl core_scat_cpp_staticInit_FUN_004fbb40(void);
undefined4 core_scat_cpp_FUN_004fbb70(void);
undefined4 core_scat_cpp_FUN_004fbbb0(int param_1);
CScat * __cdecl core_scat_cpp_factoryFunc_FUN_004fbbd0(void);
CDemonActorType * core_scat_cpp_CScat_getActorType_FUN_004fbbf0(void);
CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_004fbc00(CScat *this_ptr);
void core_scat_cpp_CScat_setup_FUN_004fbcc0(CHero *param_1);
void __cdecl core_scat_cpp_CScat_createDefaultWeapon_FUN_004fbe80(CScat *this_ptr);
void core_scat_cpp_CScat_process_FUN_004fbf20(CScat *param_1,float param_2);
void __cdecl core_scat_cpp_CScat_updateAI_FUN_004fc610(CScat *this_ptr,float delta_time);
void __cdecl core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50(CScat *this_ptr,float delta_time);
void core_scat_cpp_CScat_archive_FUN_004fcae0(CHero *param_1);
undefined4 core_scat_cpp_CScat_renderOpaque_FUN_004fcb20(CCharacter *param_1);
void core_scat_cpp_CScat_processDamage_FUN_004fcbd0(CScat *param_1,SDamageInfo *param_2);
undefined4 core_scat_cpp_CScat_handlePureVirtualCall_FUN_004fcd20(int param_1);
void core_scat_cpp_CScat_handlePureVirtualCall_FUN_004fcd30(int param_1,undefined4 param_2);
int __cdecl core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(CScat *this_ptr);
void __cdecl core_scat_cpp_FUN_004fcd90(CScat *this_ptr,float delta_time);
void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_004fcff0(CScat *this_ptr);
void __cdecl core_scat_cpp_FUN_004fd1d0(CScat *this_ptr,int hand_index);
void __cdecl core_scat_cpp_CScat_updateAiming_FUN_004fd450(CScat *this_ptr,float delta_time,int is_holstered);
int __cdecl core_scat_cpp_CScat_scoreAimTarget_FUN_004fda20(CScat *this_ptr,CDemonActor *target,int hand_index);
void __cdecl core_scat_cpp_FUN_004fdd00(CScat *this_ptr);
CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_004fde30(CScat *this_ptr,uint flags);
void __cdecl core_script_cpp_staticInit_FUN_004fde80(void);
int __cdecl core_script_cpp_validateActorVariableName_FUN_004fdec0(char *variable_name);
void __cdecl core_script_cpp_trimLine_FUN_004fdf60(char *input_line,char *output_buffer);
void __cdecl core_script_cpp_trimString_FUN_004fe000(char *str);
char * __cdecl core_script_cpp_skipWhitespace_FUN_004fe070(char *str);
char * __cdecl core_script_cpp_parseArgument_FUN_004fe090(char **cursor,char *out_buffer,int max_length);
char * __cdecl core_script_cpp_parseConditionExpr_FUN_004fe140(char **cursor,char *out_buffer);
CDemonActor * __cdecl core_script_cpp_getActor_FUN_004fe180(char *actor_specifier,uint expected_class_hash,CDemonActorType *expected_class);
int * __cdecl core_script_cpp_getActionState_FUN_004fe300(SPlayerActionState *action_state,char *action_name);
int __cdecl core_script_cpp_parseBodyPartMask_FUN_004fe3d0(CCharacter *character,char *part_names,int *part_mask);
CScript * __cdecl core_script_cpp_CScript_ctor_FUN_004fe490(CScript *this_ptr);
CScript * __cdecl core_script_cpp_CScript_dtor_FUN_004fe4d0(CScript *this_ptr,uint flags);
void core_script_cpp_FUN_004fe500(CScript *param_1);
void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_004fe550(CScript *this_ptr);
void __cdecl core_script_cpp_CScript_process_FUN_004fe5b0(CScript *this_ptr);
int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_004fe710(CScript *this_ptr);
void __cdecl core_script_cpp_FUN_004fe770(CScript *this_ptr);
void __cdecl core_script_cpp_FUN_004fe9d0(CScript *this_ptr,int left,int top,int right,int bottom);
undefined4 core_script_cpp_FUN_004febd0(CScript *param_1,char *param_2,int param_3);
void __cdecl core_script_cpp_FUN_004fee30(CScript *this_ptr);
char * __cdecl core_script_cpp_FUN_004fef60(CScript *this_ptr,int *error_line_out);
void __cdecl core_script_cpp_FUN_004feff0(CScript *this_ptr);
void __cdecl core_script_cpp_CScript_executeInitSection_FUN_004ff170(CScript *this_ptr);
int __cdecl core_script_cpp_CScript_step_FUN_004ff2c0(CScript *this_ptr,float *time_remaining);

