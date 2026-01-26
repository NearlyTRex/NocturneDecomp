#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorDestination.h"
#include "types/classes/CFilterCache.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SCramConfig.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SMRGLKeyframeModel.h"
#include "types/structs/SShapeEditorPolygon.h"
#include "types/structs/SSpatialTreeNode.h"
#include "types/structs/STextureLoadConfig.h"
#include "types/structs/STreeNode.h"
#include "types/structs/SVertexPair.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x460000
// =============================================================================

int __cdecl shape_design_c_checkVertexCountLimit_FUN_00460a10(void);
undefined __unknown shape_design_c_showFacetPartEditorHelp_FUN_00460ac0();
undefined __unknown shape_design_c_displayPalette_FUN_00461560();
void __cdecl shape_design_c_renderPolygonsByPart_FUN_004616a0(int part_id);
void __cdecl shape_design_c_traverseSpatialTree_FUN_004616f0(SSpatialTreeNode * tree_node);
void __cdecl shape_design_c_configureSpatialSplittingPlane_FUN_004617c0(STreeNode * node);
void __cdecl shape_design_c_showModelEditor_FUN_00461aa0(void);
int __cdecl shape_design_c_findVertexMatches_FUN_00461ae0(int * vertices1, int * vertices2, int count1, int count2);
int __cdecl shape_design_c_arePolygonsCoplanar_FUN_00461b70(SShapeEditorPolygon * polygon1_ptr, SShapeEditorPolygon * polygon2_ptr, float scale_factor, int tolerance);
double __cdecl shape_design_c_clampedArccos_FUN_00461c50(double dot_product);
double __cdecl shape_design_c_calculateAngleBetweenPolygonNormals_FUN_00461cb0(SShapeEditorPolygon * normal1_ptr, SShapeEditorPolygon * normal2_ptr);
int __cdecl shape_design_c_isAngleBelowThreshold_FUN_00461d30(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double angle_threshold);
int __cdecl shape_design_c_validatePolygonNormals_FUN_00461d80(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double cos_tolerance);
int __cdecl shape_design_c_isNormalDotProductBelowThreshold_FUN_00461df0(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double threshold);
void __cdecl shape_design_c_normalizeVertex_FUN_00461e60(CVector3f * vertex);
double __cdecl shape_design_c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon * polygon_ptr);
double __cdecl shape_design_c_calculateVertexAngle_FUN_00462050(int vertex1_index, int vertex2_index, int vertex3_index);
void __cdecl shape_design_c_swapDWords_FUN_00462130(uint * value1_ptr, uint * value2_ptr);
void __cdecl shape_design_c_swapFloats_FUN_00462160(float * value1_ptr, float * value2_ptr);
uint __cdecl shape_design_c_mergeTrianglesIntoQuad_FUN_00462190(int first_polygon_index, int second_polygon_index);
void __cdecl shape_design_c_mergeAdjacentPolygons_FUN_00462b70(int polygon1_index, int polygon2_index);
int __cdecl shape_design_c_findSharedEdge_FUN_004635b0(int * edge1_vertices, int * edge2_vertices, int vertex_count, int * shared_edge_type);
int __cdecl shape_design_c_comparePolygonIndices_FUN_00463800(int * first_value_ptr, int * second_value_ptr);
void __cdecl shape_design_c_removeUnusedVertices_FUN_00463830(void);
void __cdecl shape_design_c_removeDegenerateTriangles_FUN_00463a20(void);
int __cdecl shape_design_c_complexPolygonReduction_FUN_00463b30(int selected_polygon_index);
int __cdecl shape_design_c_detectMouseButtonClick_FUN_00464870(int mouse_button_mask);
int __cdecl shape_design_c_mouseWheelPolygonReducer_FUN_004648e0(int selected_polygon_index);
int __cdecl shape_design_c_polygonToolModeManager_FUN_00464c90(int input_parameter);
void __cdecl shape_design_c_polygonMergerSelectAndProcess_FUN_00465160(int polygon_index, float tolerance);
void __cdecl shape_design_c_removeDuplicatePolygons_FUN_004651b0(int respect_part_assignments);
void __cdecl shape_design_c_removeDegeneratePolygons_FUN_00465310(void);
void __cdecl shape_design_c_polygonReducer_FUN_004654e0(void);
void __cdecl shape_design_c_configureSinglePassPolygonReduction_FUN_00465560(int ui_mode);
void __cdecl shape_design_c_configureFullPassPolygonReduction_FUN_00465810(int ui_mode);
void __cdecl shape_design_c_optimizePolygonMesh_FUN_004658e0(float angle_tolerance, int strict_mode, int display_progress);
void __cdecl shape_design_c_mergePolygonsWithValidation_FUN_00465b40(int polygon1_index, int polygon2_index, float tolerance, int enforce_part_match);
void __cdecl shape_design_c_weldNearbyVertices_FUN_00465c50(int polygon_index, float tolerance);
void __cdecl shape_design_c_duplicateSharedVertices_FUN_00465d50(int polygon_index);
void __cdecl shape_design_c_interactiveWeldVertices_FUN_00465e90(int polygon_index, float tolerance);
void __cdecl shape_design_c_interactiveGlobalWeld_FUN_00466040(float tolerance);
int __cdecl shape_design_c_qsortCompareByField4_FUN_004661d0(void * element_a, void * element_b);
int __cdecl shape_design_c_qsortCompareByField4Wrapper_FUN_00466210(void * element_a, void * element_b);
int __cdecl shape_design_c_findClosestPolygonToMouse_FUN_00466250(void);
void __cdecl shape_design_c_centerObject_FUN_00466610(void);
void __cdecl shape_design_c_groundCenterObject_FUN_00466a30(void);
void __cdecl shape_design_c_sizeModelToZFeet_FUN_00466c70(void);
void __cdecl shape_design_c_sizeModelToXFeet_FUN_00466e40(void);
void __cdecl shape_design_c_sizeModelToYFeet_FUN_00467010(void);
void __cdecl shape_design_c_turnModelInsideOut_FUN_004671e0(void);
void __cdecl shape_design_c_simpleTexture_FUN_00467350(void);
int __cdecl shape_design_c_floatEpsilonCompare_FUN_004676b0(float value1, float value2, float epsilon);
int __cdecl shape_design_c_qsortByVertexX_FUN_004676f0(SVertexPair * a, SVertexPair * b);
int __cdecl shape_design_c_qsortByOriginalIndex_FUN_004677c0(SVertexPair * vertex_pair1, SVertexPair * vertex_pair2);
void __cdecl shape_design_c_vertexReducer_FUN_00467850(float tolerance, float angle_tolerance, int display_progress);
void __cdecl shape_design_c_scaleModel_FUN_00467e70(void);
void __cdecl shape_design_c_scaleXYZ_FUN_00467f30(void);
CVector3i * __cdecl shape_design_c_findVertexListInModel_FUN_00468000(SMRGLHeaderExtended * model_ptr);
int __cdecl shape_design_c_getVertexCountFromModel_FUN_00468080(SMRGLHeaderExtended * model_ptr);
void __cdecl shape_design_c_applyVertexCentering_FUN_004680f0(SMRGLHeaderExtended * target_model, CVector3i * reference_vertex_list, int reference_vertex_id);
void __cdecl shape_design_c_centerKeyframeModels_FUN_004681a0(SMRGLKeyframeModel * keyframe_model);
void __cdecl shape_design_c_createKeyframeModel_FUN_00468320(void);
void __cdecl shape_design_c_squashShapeFor3DMorph_FUN_004685e0(void);
void __cdecl shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(float latitude_degrees, float longitude_degrees, float radius);
void __cdecl shape_design_c_addQuadPolygon_FUN_004687c0(int vertex_index_0, int vertex_index_1, int vertex_index_2, int vertex_index_3);
void __cdecl shape_design_c_generateGlobe_FUN_00468910(void);
void __cdecl shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40(float latitude_degrees, float longitude_degrees, float radius);
void __cdecl shape_design_c_addQuadPolygonHalfSphere_FUN_00468d20(int vertex_index_1, int vertex_index_2, int vertex_index_3, int vertex_index_4);
void __cdecl shape_design_c_generateShell_FUN_00468f20(void);
void __cdecl shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140(float heading_angle, float pitch_angle, float radius);
void __cdecl shape_design_c_addQuadPolygonOctant_FUN_00469220(uint vertex_index_1, uint vertex_index_2, uint vertex_index_3, uint vertex_index_4);
int __cdecl shape_design_c_generateOctant_FUN_00469420(void);
void __cdecl shape_design_c_createCenterVertex_FUN_00469690(void);
void __cdecl shape_design_c_sizeModelInOneDimension_FUN_00469850(void);
void __cdecl shape_design_c_crushModel_FUN_00469bd0(void);
void __cdecl shape_design_c_sizeForStadium_FUN_00469c70(void);
void __cdecl shape_design_c_combineTextureMaps_FUN_00469ee0(void);
void __cdecl shape_design_c_tileTextureMaps_FUN_0046a180(char * model_name, int prompt_for_model);
int __cdecl shape_design_c_getLastTextureProcessIndex_FUN_0046a860(void);
void __cdecl shape_design_c_initializeTextureManager_FUN_0046a880(int initialization_mode);
void __cdecl shape_design_c_setTextureQualityParameter_FUN_0046a8e0(int texture_quality_param);
int __cdecl shape_design_c_calculateTextureQualityLevel_FUN_0046a930(int texture_parameter);
void __cdecl shape_design_c_cramTextures_FUN_0046a970(char * texture_filename, int min_u, int min_v, int max_u, int max_v);
void __cdecl shape_design_c_readPixelRowFromFile_FUN_0046abf0(FILE * file_handle, byte * rgb_buffer, byte * alpha_buffer, int pixel_count, int file_flags);
int __cdecl shape_design_c_checkNonFFBytes_FUN_0046ac70(char * buffer_ptr, int buffer_length);
int __cdecl shape_design_c_wrapCoordinate_FUN_0046acc0(int coordinate, int dimension);
void __cdecl shape_design_c_samplePixelAndAccumulate_FUN_0046ad00(void * rgb_buffer, void * alpha_buffer, int atlas_width, int atlas_height, int pixel_x, int pixel_y, double weight, double * red_accumulator, double * green_accumulator, double * blue_accumulator, double * alpha_accumulator);
double __cdecl shape_design_c_calculateSamplingWeight_FUN_0046adc0(double current_pos, double start_coord, double end_coord);
void __cdecl shape_design_c_sampleAndFilterPixel_FUN_0046ae20(void * rgb_buffer, void * alpha_buffer, int col_coord, int row_coord, double coord_x1, double coord_y1, double coord_x2, double coord_y2, int atlas_width, int atlas_height, byte * red_out, byte * green_out, byte * blue_out, byte * alpha_out);
void __cdecl shape_design_c_loadTextureData_FUN_0046b060(STextureLoadConfig * config_ptr, void * rgb_buffer, void * alpha_buffer, int atlas_width, int atlas_height);
void __cdecl shape_design_c_initializeCramConfig_FUN_0046b6e0(SCramConfig * cram_config);
void __cdecl shape_design_c_quantizePaletteColors_FUN_0046b770(byte * image_data, int pixel_count, int stride, byte * palette_data, int mode_flag, char * bit_mask);
void __cdecl shape_design_c_embedCopyrightWatermark_FUN_0046b9a0(void * image_buffer, char * output_filename, int texture_size);
int __cdecl shape_design_c_cramTextureList_FUN_0046bb80(SCramConfig * cram_config);
int __cdecl shape_design_c_findTextureByFilename_FUN_0046dfc0(char * filename);
int __cdecl shape_design_c_getAtlasMapIndex_FUN_0046e030(int texture_entry_index);
char * __cdecl shape_design_c_getTextureName_FUN_0046e060(int texture_index);
void __cdecl shape_design_c_fixupCramUV_FUN_0046e090(int atlas_texture_index, float * u_coord, float * v_coord);
void __cdecl shape_design_c_normalizeUVCoordinates_FUN_0046e340(void);
undefined __unknown shape_design_c_triangulateDSE_FUN_0046e4d0();
void __cdecl shape_design_c_clearAllTextureNames_FUN_0046e6b0(void);
void __cdecl shape_design_c_displayMemoryStatus_FUN_0046e6f0(int line_number);
void __cdecl shape_design_c_displayHeapStatus_FUN_0046e760(int line_number);
undefined __unknown shape_design_c_loadPalette_FUN_0046e810();
void __cdecl shape_design_c_multicramTextures_FUN_0046eb80(void);
void __cdecl shape_design_c_detachFaces_FUN_0046eba0(void);
void __cdecl shape_design_c_smoothMesh_FUN_0046ed00(void);
void __cdecl shape_design_c_bisectMesh_FUN_0046ed50(void);
void __cdecl shape_design_c_showShapeEditorMenu_FUN_0046f290(void);
void __cdecl core_dest_cpp_staticInit_FUN_0046f890(void);
CActorDestination * __cdecl core_dest_cpp_factoryFunc_FUN_0046f8c0(void);
undefined __unknown core_dest_cpp_FUN_0046f8f0();
CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_0046f900(CActorDestination * this_ptr);
undefined __unknown core_dest_cpp_FUN_0046f970();
undefined __unknown core_dest_cpp_FUN_0046f9b0();
undefined __unknown core_dest_cpp_CDestActor_renderTransparent_FUN_0046fb70();
undefined __unknown core_dest_cpp_FUN_0046fcc0();
undefined __unknown core_dest_cpp_FUN_0046fd50();
undefined __unknown core_dest_cpp_CActorDestination_load_FUN_0046fdb0();
undefined __unknown core_dest_cpp_FUN_0046fe70();
undefined __unknown core_dest_cpp_FUN_0046fe80();
CActorDestination * __cdecl core_dest_cpp_FUN_0046ff00(CActorDestination * this_ptr, uint d1, uint d2);
void __cdecl core_dfilter_cpp_staticInit_FUN_0046ff50(void);
CFilterCache * __cdecl core_dfilter_cpp_CFilterCache_ctor_FUN_0046ffd0(CFilterCache * this_ptr);
CFilterCache * __cdecl core_dfilter_cpp_CFilterCache_dtor_FUN_0046ffe0(CFilterCache * this_ptr);

