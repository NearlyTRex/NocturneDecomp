#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CLodEdge.h"
#include "types/classes/CLodFace.h"
#include "types/classes/CLodMesh.h"
#include "types/classes/CLodVert.h"
#include "types/classes/CMimic.h"
#include "types/classes/CSpotView.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EInputCodeType.h"
#include "types/structs/SLodSamplePoint.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x510000
// =============================================================================

int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position, int spacing_flag);
void __cdecl core_menu_cpp_showJoystickCalibrationScreen_FUN_00510410(char *instruction_text,char *message_text);
int __cdecl core_menu_cpp_calibrateGamepad_FUN_005104d0(void);
void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_005107c0(int *sensitivity_value_ptr,char *window_title);
void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_00510a50(char *message_text);
void __cdecl core_menu_cpp_showCalibrationTest_FUN_00510ba0(void);
void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_00510c80(void);
int __cdecl core_menu_cpp_checkAndCalibrateGamepad_FUN_00511840(void);
void __cdecl core_menu_cpp_configureCustomKeys_FUN_00511890(void);
void __cdecl core_menu_cpp_renderAudioSpectrumBarByBounds_FUN_00511e00(int x_center,int y_bottom,int y_top);
void __cdecl core_menu_cpp_configureSoundOptions_FUN_00511e50(void);
void __cdecl core_menu_cpp_showOptionsScreen_FUN_00512d30(int initialize_systems);
int __cdecl core_menu_cpp_showMainGameMenu_FUN_00512f40(void);
void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_00513460(int *key_code_ptr,char *key_name);
char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code);
int __cdecl core_menu_cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType *key_code_ptr,char *description);
int __cdecl core_menu_cpp_getSinglePressedKey_FUN_00513860(void);
void __cdecl core_menu_cpp_configureCustomKeyBindings_FUN_005138e0(void);
CAlphaBitmap * __cdecl core_menu_cpp_CAlphaBitmap_arrdtor_FUN_00514f50(CAlphaBitmap *objs,uint flags);
void __cdecl shape_meshlod_cpp_staticInit_FUN_00514f70(void);
CVector3f * __cdecl shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90(CVector3f *out_closest_point,CVector3f *query_point,CVector3f *edge_vertex_0, CVector3f *edge_vertex_1);
double __cdecl shape_meshlod_cpp_computeDistanceSquaredToEdge_FUN_00515110(CVector3f *query_point,CVector3f *edge_vertex_0,CVector3f *edge_vertex_1);
void __cdecl shape_meshlod_cpp_skipLines_FUN_00515160(_FILE *file_handle,int line_count);
int __cdecl shape_meshlod_cpp_initializeLogDirectory_FUN_00515190(void);
int __cdecl shape_meshlod_cpp_CLodFace_containsEdge_FUN_005151c0(CLodFace *this_ptr,int edge_index);
void __cdecl shape_meshlod_cpp_fitLeastSquaresPlane_FUN_005151e0(int point_count,CVector3f *positions,float *values,CVector3f *normal, CVector3f *out_gradient,float *out_offset);
CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(CLodMesh *this_ptr);
CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_copy_FUN_00515860(CLodMesh *this_ptr,CLodMesh *other);
void __cdecl shape_meshlod_cpp_CLodMesh_init_FUN_00515880(CLodMesh *this_ptr);
CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(CLodMesh *this_ptr,uint flags);
void __cdecl shape_meshlod_cpp_CLodMesh_free_FUN_00515970(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0(CLodMesh *this_ptr,int vertex_count,int tri_count,int lod_texture_count);
int __cdecl shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodEdge_addAdjacentFace_FUN_00515ca0(CLodEdge *this_ptr,int tri_index);
void __cdecl shape_meshlod_cpp_CLodEdge_removeFace_FUN_00515d10(CLodEdge *this_ptr,int tri_index);
int __cdecl shape_meshlod_cpp_CLodEdge_findFace_FUN_00515d60(CLodEdge *this_ptr,int tri_index);
void __cdecl shape_meshlod_cpp_CLodVert_addAdjacentEdge_FUN_00515d90(CLodVert *this_ptr,int edge_index);
void __cdecl shape_meshlod_cpp_CLodVert_removeEdge_FUN_00515e00(CLodVert *this_ptr,int edge_index);
int __cdecl shape_meshlod_cpp_CLodVert_findEdge_FUN_00515e50(CLodVert *this_ptr,int edge_index);
int __cdecl shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90(CLodFace *this_ptr,int vertex_index);
int __cdecl shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,int create_if_missing);
void __cdecl shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(CLodMesh *this_ptr,int edge_index,int full_check);
int __cdecl shape_meshlod_cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420(CLodMesh *this_ptr,int vertex_index);
int __cdecl shape_meshlod_cpp_CLodMesh_countCollapsibleEdgesForVertex_FUN_00516480(CLodMesh *this_ptr,int vertex_index);
int __cdecl shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(CLodMesh *this_ptr);
CBoundingBox3D * __cdecl shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(CLodMesh *this_ptr,CBoundingBox3D *out_bbox);
void __cdecl shape_meshlod_cpp_CLodMesh_translateVertices_FUN_00516570(CLodMesh *this_ptr,CVector3f *offset);
void __cdecl shape_meshlod_cpp_CLodMesh_scaleVertices_FUN_005165c0(CLodMesh *this_ptr,CVector3f *scale_factors);
void __cdecl shape_meshlod_cpp_CLodMesh_buildSpatialGrid_FUN_00516620(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0(CLodMesh *this_ptr,int target_tri_count,int render_mode);
void __cdecl shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_createNextLOD_FUN_00516f50(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(CLodMesh *this_ptr);
CVector3f * __cdecl shape_meshlod_cpp_CLodMesh_computeVertexNormal_FUN_005172c0(CLodMesh *this_ptr,CVector3f *out_normal,int vertex_index);
void __cdecl shape_meshlod_cpp_CLodMesh_replayLodGeneration_FUN_005173f0(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530(CLodMesh *this_ptr,int tri_index,int corner_idx,CVector3f *out_gradient, float *out_offset);
void __cdecl shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,float collapse_weight);
void __cdecl shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300(CLodMesh *this_ptr,int sample_point_index);
int __cdecl shape_meshlod_cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0(CLodMesh *this_ptr,int tri_index,int edge_index);
int __cdecl shape_meshlod_cpp_CLodMesh_validateEdgeCollapse_FUN_00518490(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2);
int __cdecl shape_meshlod_cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(CLodMesh *this_ptr,int vertex_idx);
int __cdecl shape_meshlod_cpp_CLodMesh_findOrAddLodTexture_FUN_00518790(CLodMesh *this_ptr,char *texture_filename);
CVector3f * __cdecl shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870(CLodMesh *this_ptr,CVector3f *out_centroid,CLodFace *face);
void __cdecl shape_meshlod_cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(CLodMesh *this_ptr,int edge_index);
int __cdecl shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480(CLodMesh *this_ptr,int edge_idx,int vertex_idx);
int __cdecl shape_meshlod_cpp_CLodMesh_findMinimumCostEdge_FUN_00519680(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0(CLodMesh *this_ptr);
int __cdecl shape_meshlod_cpp_CLodMesh_validateFace_FUN_00519830(CLodMesh *this_ptr,CLodFace *face);
int __cdecl shape_meshlod_cpp_CLodFace_computeNormalAndPlane_FUN_00519870(CLodFace *this_ptr,CVector3f *vertex0_pos,CVector3f *vertex1_pos, CVector3f *vertex2_pos);
void __cdecl shape_meshlod_cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50(CLodMesh *this_ptr,double max_search_radius);
void __cdecl shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(CLodMesh *this_ptr,int grid_x,int grid_y,int grid_z);
void __cdecl shape_meshlod_cpp_CLodMesh_weldVertices_FUN_0051a150(CLodMesh *this_ptr,float weld_threshold);
CVector3f * __cdecl shape_meshlod_cpp_CLodMesh_findClosestPointOnMesh_FUN_0051a300(CLodMesh *this_ptr,CVector3f *output_closest_point,CVector3f *target_point);
double __cdecl shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400(CLodMesh *this_ptr,SLodSamplePoint *sample_point,CLodFace *face);
CVector3f * __cdecl shape_meshlod_cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0(CLodMesh *this_ptr,CVector3f *output_point,CVector3f *target_point,CLodFace *triangle_ptr );
CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(CLodMesh *this_ptr,CLodMesh *source_mesh);
int __cdecl shape_meshlod_cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980(CLodMesh *this_ptr,int vertex_index,int edge_array_index);
void __cdecl shape_meshlod_cpp_CLodMesh_importFromFile_FUN_0051a9d0(CLodMesh *this_ptr,char *filename);
void __cdecl shape_meshlod_cpp_CLodMesh_parseS3DFile_FUN_0051aa60(CLodMesh *this_ptr,_FILE *file_handle);
void __cdecl shape_meshlod_cpp_CLodMesh_importFromFileAlt_FUN_0051ad60(CLodMesh *this_ptr,char *filename);
void __cdecl shape_meshlod_cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(CLodMesh *this_ptr,_FILE *file_handle);
void __cdecl shape_meshlod_cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_importFromUnknown_FUN_0051b2b0(CLodMesh *this_ptr);
CVector3f * __cdecl shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0(CLodMesh *this_ptr,CVector3f *output_point,CVector3f *input_point);
void __cdecl shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_compactFaces_FUN_0051b570(CLodMesh *this_ptr);
int __cdecl shape_meshlod_cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0(CLodMesh *this_ptr);
int __cdecl shape_meshlod_cpp_CLodMesh_loadPrecomputedLodData_FUN_0051b720(CLodMesh *this_ptr);
_FILE * __cdecl shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh *this_ptr,char *mode);
void __cdecl shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(CLodMesh *this_ptr);
int __cdecl shape_meshlod_cpp_CLodMesh_initializeFromPrecomputedData_FUN_0051b8a0(CLodMesh *this_ptr,_FILE *file_handle);
void __cdecl shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh *this_ptr,int target_face_count,CLodMesh *output_mesh);
void __cdecl shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index);
void __cdecl shape_meshlod_cpp_CLodMesh_exportToFile_FUN_0051c070(CLodMesh *this_ptr,char *filename);
int __cdecl shape_meshlod_cpp_CLodMesh_exportToS3D_FUN_0051c100(CLodMesh *this_ptr,_FILE *file_ptr);
void __cdecl shape_meshlod_cpp_crc32UpdateByte_FUN_0051c270(uint *crc_ptr,uchar data_byte);
void __cdecl shape_meshlod_cpp_crc32UpdateBuffer_FUN_0051c350(uint *crc_ptr,uchar *data_ptr,int byte_count);
void __cdecl shape_meshlod_cpp_crc32UpdateDword_FUN_0051c480(uint *crc_ptr,uint dword_value);
void __cdecl shape_meshlod_cpp_crc32UpdateDword_FUN_0051c540(uint *crc_ptr,uint dword_value);
void __cdecl shape_meshlod_cpp_crc32UpdateVector3f_FUN_0051c600(uint *crc_ptr,CVector3f *vector_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0(CLodMesh *this_ptr,uint *out_crc);
void __cdecl shape_meshlod_cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh *this_ptr,_FILE *file_handle);
void __cdecl shape_meshlod_cpp_CLodMesh_eqSave_FUN_0051d0e0(CLodMesh *this_ptr,_FILE *file_handle);
void __cdecl shape_meshlod_cpp_CLodMesh_loadReplayData_FUN_0051d180(CLodMesh *this_ptr,_FILE *file_handle);
void __cdecl shape_meshlod_cpp_CLodMesh_saveReplayData_FUN_0051d250(CLodMesh *this_ptr,_FILE *file_handle);
void __cdecl shape_meshlod_cpp_CLodMesh_gridLoad_FUN_0051d2d0(CLodMesh *this_ptr,_FILE *file_handle);
void __cdecl shape_meshlod_cpp_CLodMesh_gridSave_FUN_0051d420(CLodMesh *this_ptr,_FILE *file_handle);
void __cdecl shape_meshlod_cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0(CLodMesh *this_ptr,CLodEdge *edge_data);
int __cdecl shape_meshlod_cpp_CLodMesh_previewLodGeneration_FUN_0051d520(CLodMesh *this_ptr,int pause_flag,int render_mode);
int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr,int *pixel_heights,int *face_counts,int max_lods,int render_mode);
void __cdecl shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh *this_ptr,int backface_culling_enabled);
void __cdecl shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(CLodMesh *this_ptr,int use_palette_coloring);
void __cdecl shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(CLodMesh *this_ptr,int enable_texture_lookup);
void __cdecl shape_meshlod_cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0(CLodMesh *this_ptr,int vertex_index);
void __cdecl shape_meshlod_cpp_CLodMesh_drawVertexLabels_FUN_0051ed30(CLodMesh *this_ptr);
void __cdecl shape_meshlod_cpp_testLodGeneration_FUN_0051ed60(void);
void __cdecl shape_meshlod_cpp_divideVectorByScalar_FUN_0051edd0(CVector3f *vector,float *divisor);
float __cdecl shape_meshlod_cpp_calculateDistanceSquared_FUN_0051edf0(CVector3f *point1,CVector3f *point2);
int __cdecl shape_meshlod_cpp_CLodFace_containsVertex_FUN_0051ee30(CLodFace *this_ptr,int vertex_index);
void __cdecl shape_meshlod_cpp_copyVector_FUN_0051ee50(CVector3f *destination,CVector3f *source);
CLodVert * __cdecl shape_meshlod_cpp_CLodVert_copy_FUN_0051ee70(CLodVert *destination,CLodVert *source);
int __cdecl shape_meshlod_cpp_CLodEdge_isBoundary_FUN_0051eea0(CLodEdge *this_ptr);
int __cdecl shape_meshlod_cpp_getPreviousTriangleVertexIndex_FUN_0051eec0(int vertex_index);
int __cdecl shape_meshlod_cpp_getNextTriangleVertexIndex_FUN_0051eed0(int vertex_index);
CLodFace * __cdecl shape_meshlod_cpp_CLodFace_ctor_FUN_0051ef00(CLodFace *this_ptr);
void __cdecl shape_meshlod_cpp_CLodFace_copy_FUN_0051ef20(CLodFace *this_ptr,CLodFace *other);
CLodFace * __cdecl shape_meshlod_cpp_CLodFace_dtor_FUN_0051efc0(CLodFace *this_ptr,uint flags);
CLodFace * __cdecl shape_meshlod_cpp_CLodFace_copy2_FUN_0051efe0(CLodFace *destination,CLodFace *source);
CSpotView * __cdecl shape_meshlod_cpp_CSpotView_dtor_FUN_0051f080(CSpotView *this_ptr,uint flags);
float * __cdecl shape_meshlod_cpp_copyFloat_FUN_0051f090(float *dest_ptr,float *src_ptr);
float * __cdecl shape_meshlod_cpp_copyFloat_FUN_0051f0a0(float *dest_ptr,float *src_ptr);
float * __cdecl shape_meshlod_cpp_copyFloat_FUN_0051f0b0(float *dest_ptr,float *src_ptr);
CLodFace * __cdecl shape_meshlod_cpp_CLodFace_arrdtor_FUN_0051f0c0(CLodFace *objs,uint flags);
CVector3f * __cdecl shape_meshlod_cpp_CVector3f_arrdtor_FUN_0051f0e0(CVector3f *objs,uint flags);
void __cdecl core_mimic_cpp_staticInit_FUN_0051f100(void);
void __cdecl core_mimic_cpp_mirrorXTransform_FUN_0051f130(void);
CMimic * __cdecl core_mimic_cpp_factoryFunc_FUN_0051f190(void);
CDemonActorType * __cdecl core_mimic_cpp_CMimic_getActorType_FUN_0051f1c0(CMimic *this_ptr);
CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_0051f1d0(CMimic *this_ptr);
CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_0051f2c0(CMimic *this_ptr,uint flags);
void __cdecl core_mimic_cpp_CMimic_setup_FUN_0051f3e0(CMimic *this_ptr);
void __cdecl core_mimic_cpp_CMimic_process_FUN_0051f780(CMimic *this_ptr,float delta_time);
void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_0051f930(CMimic *this_ptr);
void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_0051fcc0(CMimic *this_ptr,float delta_time);

