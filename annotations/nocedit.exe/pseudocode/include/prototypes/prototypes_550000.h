#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBitmap.h"
#include "types/classes/CColorQuantizer.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonPod.h"
#include "types/classes/CPod.h"
#include "types/classes/CPodDependencyRecord.h"
#include "types/classes/CPodFile.h"
#include "types/classes/CPodSearchContext.h"
#include "types/classes/CScat.h"
#include "types/classes/CScript.h"
#include "types/structs/SColorBox.h"
#include "types/structs/SFoundFileInfo.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/SSoftwareEdge.h"
#include "types/structs/STriangleIndices.h"
#include "types/structs/STrianglePackedIndices.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x550000
// =============================================================================

void engine_pod_cpp_CPodFile_cleanup_FUN_00550090(CPodFile * this_ptr);
int engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(CPodFile * this_ptr, char * filename);
void engine_pod_cpp_CPodFile_populateFileInfo_FUN_005501b0(CPodFile * this_ptr, int file_index, SFoundFileInfo * output_info);
int engine_pod_cpp_CPodFile_verifyChecksum_FUN_00550230(CPodFile * this_ptr);
void engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590(CPodFile * this_ptr, int record_index, void * output_buffer);
void engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0(CPodFile * this_ptr, int dependency_index, CPodDependencyRecord * output_record);
uint engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0(CPodFile * this_ptr, int file_index);
CPod * engine_pod_cpp_CPod_ctor_FUN_00550980(CPod * this_ptr);
CPod * engine_pod_cpp_CPod_dtor_FUN_005509b0(CPod * this_ptr, uint d1, uint d2);
void engine_pod_cpp_CPod_load_FUN_005509e0(CPod * this_ptr);
void engine_pod_cpp_CPod_mount_FUN_00550a10(CPod * this_ptr, char * pod_filename);
void engine_pod_cpp_CPod_remount_FUN_00550af0(CPod * this_ptr);
void engine_pod_cpp_CPod_dismount_FUN_00550b90(CPod * this_ptr, char * filename);
void engine_pod_cpp_CPod_init_FUN_00550c30(CPod * this_ptr);
void engine_pod_cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr);
int engine_pod_cpp_findFilesByExtension_FUN_00550ce0(CPod * * pod_array, char * extension, char * output_buffer, int max_results, int result_string_length);
void engine_pod_cpp_CPod_initSearch_FUN_00550ea0(CPod * this_ptr, char * search_pattern, CPodSearchContext * search_context);
int engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0(CPod * this_ptr, CPodSearchContext * search_context);
void engine_pod_cpp_CPod_computeAndStoreCRC_FUN_00551000(CPod * this_ptr, char * pod_filename);
int engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280(CPod * this_ptr, char * pod_filename);
CPodFile * engine_pod_cpp_CPod_locateFile_FUN_005512f0(CPod * this_ptr, char * base_path, char * filename, int * file_index_out);
int engine_pod_cpp_CPod_findFile_FUN_00551380(CPod * this_ptr, SFoundFileInfo * found_file_info);
void engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0(CPod * this_ptr);
int engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820(CPod * this_ptr, char * target_filename);
void engine_pod_cpp_CPod_dismountPod_FUN_005518c0(CPod * this_ptr, int index);
int engine_pod_cpp_findFileInPod_FUN_00551960(SFoundFileInfo * info);
void core_podmain_cpp_staticInit_FUN_00551990(void);
void core_podmain_cpp_CDemonPod_load_FUN_005519c0(CDemonPod * this_ptr);
CDemonPod * core_podmain_cpp_CDemonPod_ctor_FUN_00551b00(CDemonPod * this_ptr);
CDemonPod * core_podmain_cpp_CDemonPod_dtor_FUN_00551b20(CDemonPod * this_ptr, uint d1, uint d2);
void engine_prim_c_setMaxViewportScanline1200_FUN_00551b70(void);
void engine_prim_c_setMaxViewportScanline_FUN_00551b80(int max);
void engine_prim_c_setCullingMode_FUN_00551b90(int culling_mode);
void engine_prim_c_setupBasicSoftwareEdge_FUN_00551ba0(SRenderVertex * start_vertex, SRenderVertex * end_vertex);
void engine_prim_c_setupSoftwareEdgeWithZMode_FUN_00551d60(SRenderVertex * start_vertex, SRenderVertex * end_vertex);
SSoftwareEdge * engine_prim_c_findEdgeInBuffer_FUN_00551f70(int y_value, SSoftwareEdge * edge_ptr);
void engine_prim_c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex * vertices, int vertex_count);
void engine_prim_c_normalizeTextureCoords_FUN_00552020(SRenderVertex * vertices, int vertex_count);
void engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0(SRenderVertex * vertices, int vertex_count);
void engine_prim_c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count);
int engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2);
int engine_prim_c_getTriangleWindingFromIndices_FUN_00552210(STriangleIndices * triangle);
int engine_prim_c_getTriangleWindingFromIndices_FUN_00552300(STriangleIndices * triangle_indices);
int engine_prim_c_getTriangleWindingFromPackedIndices_FUN_005523f0(STrianglePackedIndices * triangle);
void engine_prim_c_renderPolygonSoftware_FUN_00552510(SRenderVertex * vertices, int vertex_count);
void engine_prim_c_renderIndexedPolygonSoftware_FUN_00552a40(int * vertex_indices, int vertex_count);
void engine_prim_c_setupAdvancedSoftwareEdge_FUN_00552f70(SRenderVertex * start_vertex, SRenderVertex * end_vertex);
void engine_prim_c_setupColoredSoftwareEdge_FUN_00553190(SRenderVertex * vertex0, SRenderVertex * vertex1);
SSoftwareEdge * engine_prim_c_findEdgeInTable_FUN_00553410(int scanline, SSoftwareEdge * target_edge);
void engine_prim_c_renderScanlinePolygon_FUN_00553470(SRenderVertex * vertices, int vertex_count);
void engine_prim_c_renderIndexedPolygonAdvanced_FUN_00553b10(int * vertex_indices, int vertex_count);
undefined core_procedur_cpp_CreateProceduralWaterFrame_FUN_005542b0();
undefined core_procedur_cpp_FUN_00554620();
undefined core_procedur_cpp_FUN_00554670();
undefined core_procedur_cpp_ProceduralTextureMenuPrompt_FUN_00554880();
CColorQuantizer * shape_quantize_cpp_CColorQuantizer_ctor_FUN_00554900(CColorQuantizer * this_ptr);
CColorQuantizer * shape_quantize_cpp_CColorQuantizer_dtor_FUN_00554940(CColorQuantizer * this_ptr);
int shape_quantize_cpp_CColorQuantizer_importBitmap_FUN_00554a50(CColorQuantizer * this_ptr, CBitmap * bitmap);
int shape_quantize_cpp_CColorQuantizer_quantize_FUN_00554cc0(CColorQuantizer * this_ptr);
CColorQuantizer * shape_quantize_cpp_CColorQuantizer_reset_FUN_00554d40(CColorQuantizer * this_ptr);
void shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(CColorQuantizer * this_ptr, int source_box_index, int dest_box_index);
float shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0(CColorQuantizer * this_ptr, SColorBox * box_ptr, uchar * pixel_ptr);
void shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index);
int shape_quantize_cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500(CColorQuantizer * this_ptr, int num_entries);
void shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0(CColorQuantizer * this_ptr, uchar * src_pixels, uchar * dest_indices, short start_x, short end_x, short num_palette_entries);
int shape_quantize_cpp_CColorQuantizer_reduceColors_FUN_00555a40(CColorQuantizer * this_ptr);
int shape_quantize_cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0(CColorQuantizer * this_ptr, uchar * output_buffer);
int shape_quantize_cpp_CColorQuantizer_applyQuantization_FUN_00556180(CColorQuantizer * this_ptr, CBitmap * * bitmap_ptr);
int shape_quantize_cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0(CColorQuantizer * this_ptr, int bitmap_count, CBitmap * * bitmap_array);
void shape_quantize_cpp_CColorQuantizer_quantizeBitmap_FUN_00556470(CColorQuantizer * this_ptr, CBitmap * * bitmap_ptr);
int shape_quantize_cpp_quantizeRawPixelData_FUN_00556490(uchar * src_pixel_data, uchar * * out_pixel_data, uchar * * out_palette, short width, short height, uint bit_depth, int line_number, int show_progress);
int shape_quantize_cpp_displayProgressBar_FUN_005568f0(char * label, int total_count, int current_index);
CBitmap * shape_quantize_cpp_CBitmap_ctor_FUN_00556a00(CBitmap * this_ptr);
CBitmap * shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(CBitmap * this_ptr);
void shape_quantize_cpp_showError_FUN_00556cb0(char * error);
void shape_quantize_cpp_showError_FUN_00556ce0(char * error);
void shape_quantize_cpp_doNothing_FUN_00556d10(void);
void shape_quantize_cpp_reallocMemory_FUN_00556d20(void * ptr, int new_size);
void shape_quantize_cpp_freeMemory_FUN_00556d40(void * ptr);
int shape_quantize_cpp_returnParameter_FUN_00556d60(int parameter);
void shape_quantize_cpp_copyString_FUN_00556d70(char * dest, char * src);
short shape_quantize_cpp_CBitmap_getWidth_FUN_00556d90(CBitmap * this_ptr);
short shape_quantize_cpp_CBitmap_getHeight_FUN_00556da0(CBitmap * this_ptr);
short shape_quantize_cpp_CBitmap_getBytesPerRow_FUN_00556db0(CBitmap * this_ptr);
uchar shape_quantize_cpp_CBitmap_getBitDepth_FUN_00556dc0(CBitmap * this_ptr);
void * * shape_quantize_cpp_CBitmap_getRowTable_FUN_00556dd0(CBitmap * this_ptr);
void * shape_quantize_cpp_CBitmap_getPalette_FUN_00556de0(CBitmap * this_ptr);
int shape_quantize_cpp_getAbsoluteValue_FUN_00556df0(int value);
CDemonActorType * core_scat_cpp_staticInit_FUN_00556e00(void);
undefined core_scat_cpp_FUN_00556e90();
undefined core_scat_cpp_FUN_00556ec0();
CScat * core_scat_cpp_CScat_ctor_FUN_00556ed0(CScat * this_ptr);
undefined core_scat_cpp_FUN_00556f90();
undefined core_scat_cpp_FUN_00557150();
undefined core_scat_cpp_FUN_005571f0();
undefined core_scat_cpp_FUN_005578e0();
undefined core_scat_cpp_FUN_00557d20();
undefined core_scat_cpp_CSCat_load_FUN_00557db0();
undefined core_scat_cpp_FUN_00557df0();
undefined core_scat_cpp_FUN_00557ea0();
undefined core_scat_cpp_FUN_00557ff0();
undefined core_scat_cpp_FUN_00558000();
undefined core_scat_cpp_FUN_00558010();
undefined core_scat_cpp_FUN_00558060();
undefined core_scat_cpp_FUN_005582c0();
undefined core_scat_cpp_FUN_005584a0();
undefined core_scat_cpp_FUN_00558720();
undefined core_scat_cpp_FUN_00558cf0();
undefined core_scat_cpp_FUN_00558fd0();
undefined core_scat_cpp_FUN_00559100();
undefined core_scat_cpp_FUN_00559120();
undefined core_scat_cpp_FUN_00559140();
CScat * core_scat_cpp_CScat_dtor_FUN_00559160(CScat * this_ptr, uint d1, uint d2);
undefined core_script_cpp_staticInit_FUN_005591b0();
undefined core_script_cpp_CheckingActorVariableName_FUN_00559220();
undefined core_script_cpp_FUN_005592c0();
undefined core_script_cpp_FUN_00559360();
undefined core_script_cpp_FUN_005593d0();
undefined core_script_cpp_FUN_005593f0();
undefined core_script_cpp_FUN_005594a0();
undefined core_script_cpp_GetDemonActor_FUN_005594e0();
undefined core_script_cpp_RelatedToMainButtonPresses_FUN_00559660();
undefined core_script_cpp_FUN_00559730();
CScript * core_script_cpp_CScript_ctor_FUN_005597f0(CScript * this_ptr);
CScript * core_script_cpp_CScript_dtor_FUN_00559840(CScript * this_ptr);
undefined core_script_cpp_CScript_FreeSomething1_FUN_00559870();
undefined core_script_cpp_CScript_FreeSomething2_FUN_005598f0();
void core_script_cpp_CScript_process_FUN_00559960(CScript * this_ptr);
undefined core_script_cpp_FUN_00559ac0();
undefined core_script_cpp_FUN_00559b20();
undefined core_script_cpp_CScript_RelatedToSubtitles_FUN_00559d80();
undefined core_script_cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80();
undefined core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
undefined core_script_cpp_CScript_StepThroughWholeScript_FUN_0055a4b0();
undefined core_script_cpp_FUN_0055a540();
undefined core_script_cpp_CScript_checkInitSection_FUN_0055a6c0();
undefined core_script_cpp_CScript_step_FUN_0055a810();
undefined core_script_cpp_FUN_0055ff00();

