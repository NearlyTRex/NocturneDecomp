#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CColonel.h"
#include "types/classes/CConsole.h"
#include "types/classes/CConveyor.h"
#include "types/classes/CCourse.h"
#include "types/classes/CCrate.h"
#include "types/classes/CCrossbow.h"
#include "types/classes/CCurtain.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonCamera.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CPlatform.h"
#include "types/classes/CRect.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CZombieCow.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCramRectangle.h"
#include "types/structs/SCramWorkingEntry.h"
#include "types/structs/SCurtainVertex.h"
#include "types/structs/SFogGrid.h"
#include "types/structs/STextureAtlasEntry.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x440000
// =============================================================================

undefined __unknown core_colonel_cpp_FUN_00440430();
undefined __unknown core_colonel_cpp_CColonel_load_FUN_00440490();
undefined __unknown core_colonel_cpp_FUN_004404a0();
void __cdecl core_colonel_cpp_CColonel_FUN_004404b0(CColonel * this_ptr);
undefined __unknown core_colonel_cpp_FUN_004405d0();
undefined __unknown core_colonel_cpp_FUN_004405e0();
undefined __unknown core_colonel_cpp_FUN_004405f0();
undefined __unknown core_colonel_cpp_FUN_00440610();
undefined __unknown core_colonel_cpp_FUN_00440630();
undefined __unknown core_colonel_cpp_FUN_00440650();
CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00440670(CColonel * this_ptr, uint d1, uint d2);
undefined __unknown engine_colquant_c_FUN_004406c0();
undefined __unknown engine_colquant_c_FUN_00440b40();
undefined __unknown engine_colquant_c_FUN_00440c80();
undefined __unknown engine_colquant_c_FUN_00440dc0();
undefined __unknown engine_colquant_c_FUN_00440f00();
undefined __unknown engine_colquant_c_FUN_00441040();
undefined __unknown engine_colquant_c_FUN_00441110();
undefined __unknown engine_colquant_c_FUN_00441260();
undefined __unknown engine_colquant_c_FUN_00441790();
void __cdecl engine_console_cpp_staticInit_FUN_004417e0(void);
CConsole * __cdecl engine_console_cpp_CConsole_ctor_FUN_00441810(CConsole * this_ptr, int width, int height, int screen_x, int screen_y);
CConsole * __cdecl engine_console_cpp_CConsole_dtor_FUN_00441880(CConsole * this_ptr);
void __cdecl engine_console_cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format, ...);
void __cdecl engine_console_cpp_CConsole_writeChar_FUN_00441970(CConsole * this_ptr, char character);
void __cdecl engine_console_cpp_CConsole_reset_FUN_00441a40(CConsole * this_ptr);
void __cdecl engine_console_cpp_CConsole_scrollUp_FUN_00441a80(CConsole * this_ptr);
void __cdecl engine_console_cpp_CConsole_render_FUN_00441b00(CConsole * this_ptr);
CDemonActorType * __cdecl core_conveyor_cpp_staticInit_FUN_00441c30(void);
undefined __unknown core_conveyor_cpp_FUN_00441c60();
undefined __unknown core_conveyor_cpp_FUN_00441c90();
CConveyor * __cdecl core_conveyor_cpp_ctor_FUN_00441ca0(CConveyor * this_ptr);
undefined __unknown core_conveyor_cpp_FUN_00441d60();
undefined __unknown core_conveyor_cpp_FUN_00441df0();
undefined __unknown core_conveyor_cpp_FUN_00441f40();
undefined __unknown core_conveyor_cpp_FUN_00441f50();
undefined __unknown core_conveyor_cpp_FUN_00441f60();
undefined __unknown core_conveyor_cpp_FUN_00442020();
undefined __unknown core_conveyor_cpp_FUN_004420c0();
undefined __unknown core_conveyor_cpp_FUN_004420d0();
undefined __unknown core_conveyor_cpp_FUN_00442130();
undefined __unknown core_conveyor_cpp_FUN_004421c0();
undefined __unknown core_conveyor_cpp_FUN_004422f0();
CConveyor * __cdecl core_conveyor_cpp_dtor_FUN_00442310(CConveyor * this_ptr, uint d1, uint d2, uint d3);
CPlatform * __cdecl core_conveyor_cpp_FUN_00442380(CPlatform * this_ptr, uint d1, uint d2, uint d3);
undefined __unknown core_conveyor_cpp_FUN_004423f0();
undefined __unknown core_conveyor_cpp_FUN_00442400();
undefined __unknown core_conveyor_cpp_FUN_004424a0();
CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_004424c0(CCourse * this_ptr);
CCourse * __cdecl core_course_cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr);
void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00442500(CCourse * this_ptr);
void __cdecl core_course_cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename);
void __cdecl core_course_cpp_CCourse_free_FUN_004426c0(CCourse * this_ptr);
void __cdecl core_course_cpp_CCourse_FUN_00442710(CCourse * this_ptr);
undefined __unknown core_course_cpp_CCourse_FUN_004427a0();
void __cdecl core_course_cpp_CCourse_save_FUN_00442a90(CCourse * this_ptr);
undefined __unknown core_course_cpp_OpeningCourseFileMaybe_FUN_00442bc0();
undefined __unknown core_course_cpp_OpeningCourseFile2_FUN_00442d70();
void __cdecl core_course_cpp_CCourse_importMatrices_FUN_00442ea0(CCourse * this_ptr);
void __cdecl core_course_cpp_CCourse_showEditorMenu_FUN_00443040(CCourse * this_ptr);
undefined __unknown core_course_cpp_FUN_004436d0();
undefined __unknown core_course_cpp_FUN_00443760();
undefined __unknown core_course_cpp_FUN_00443bc0();
CDemonActorType * __cdecl core_cow_cpp_staticInit_FUN_004440d0(void);
undefined __unknown core_cow_cpp_FUN_00444100();
undefined __unknown core_cow_cpp_FUN_00444130();
CZombieCow * __cdecl core_cow_cpp_FUN_00444140(CZombieCow * this_ptr);
undefined __unknown core_cow_cpp_FUN_004441b0();
undefined __unknown core_cow_cpp_FUN_00444310();
undefined __unknown core_cow_cpp_CZombieCow_load_FUN_00444840();
undefined __unknown core_cow_cpp_FUN_004448c0();
undefined __unknown core_cow_cpp_FUN_00444b40();
undefined __unknown core_cow_cpp_FUN_00444c00();
undefined __unknown core_cow_cpp_FUN_00444c50();
undefined __unknown core_cow_cpp_FUN_00444c90();
undefined __unknown core_cow_cpp_FUN_00444ca0();
CZombieCow * __cdecl core_cow_cpp_FUN_00444cd0(CZombieCow * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
int __cdecl shape_cramtex_cpp_generateTextureAtlasLayout_FUN_00444d90(uint texture_count, STextureAtlasEntry * texture_entries, int atlas_width, int atlas_height, int acceptable_coverage_threshold, int acceptable_size, int * output_atlas_width, int * output_atlas_height, int padding_size, int fill_gaps, int visualize, int max_iterations);
int __cdecl shape_cramtex_cpp_qsortByLargestDimension_FUN_004457f0(SCramWorkingEntry * entry_a, SCramWorkingEntry * entry_b);
void __cdecl shape_cramtex_cpp_generateTextureAtlas_FUN_00445820(void);
int __cdecl shape_cramtex_cpp_addTextureEntry_FUN_00446100(SCramWorkingEntry * texture_entry);
int __cdecl shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140(SCramRectangle * * rect_a, SCramRectangle * * rect_b);
int __cdecl shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160(SCramWorkingEntry * current_texture_entry);
uint __cdecl shape_cramtex_cpp_performGapFillingOptimization_FUN_00447590(void);
int __cdecl shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry * reference_entry);
int __cdecl shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry * bounds_entry);
int __cdecl shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(SCramWorkingEntry * bounds_entry);
int __cdecl shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry * bounds_entry);
int __cdecl shape_cramtex_cpp_mapCoordinateToAtlas_FUN_00447a80(int min_coord, int max_coord, int pixel_offset);
void __cdecl shape_cramtex_cpp_renderAllTexturesAndRectangles_FUN_00447ab0(int x, int y, int width, int height, int render_mode);
void __cdecl shape_cramtex_cpp_renderTextureEntry_FUN_00447c20(SCramWorkingEntry * texture_entry, int visualization_mode, int draw_x, int draw_y, int draw_width, int draw_height);
double __cdecl shape_cramtex_cpp_calculateAtlasEfficiency_FUN_00447e80(void);
void __cdecl shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(int visualization_mode, int completion_mode, int display_mode);
void __cdecl shape_cramtex_cpp_printAtlasLayoutReport_FUN_004481d0(FILE * output_file);
void __cdecl shape_cramtex_cpp_placementCollisionCheck_FUN_00448260(int layer_id, int start_x, int start_y, int width, int height);
int __cdecl shape_cramtex_cpp_checkTextureCollision_FUN_00448390(SCramWorkingEntry * placed_texture, SCramWorkingEntry * test_texture);
void __cdecl shape_cramtex_cpp_setupTextureForPlacement_FUN_004483e0(SCramWorkingEntry * destination, SCramWorkingEntry * source);
int __cdecl shape_cramtex_cpp_maxInt_FUN_00448440(int a, int b);
CDemonActorType * __cdecl core_crate_cpp_staticInit_FUN_00448460(void);
undefined __unknown core_crate_cpp_FUN_00448490();
undefined __unknown core_crate_cpp_FUN_004484c0();
CCrate * __cdecl core_crate_cpp_FUN_004484d0(CCrate * this_ptr);
undefined __unknown core_crate_cpp_FUN_00448530();
undefined __unknown core_crate_cpp_FUN_00448600();
undefined __unknown core_crate_cpp_FUN_00448620();
undefined __unknown core_crate_cpp_FUN_00448630();
undefined __unknown core_crate_cpp_FUN_00448650();
undefined __unknown core_crate_cpp_FUN_00448660();
undefined __unknown core_crate_cpp_FUN_00448880();
undefined __unknown core_crate_cpp_FUN_004488f0();
undefined __unknown core_crate_cpp_CCrate_load_FUN_00448910();
undefined __unknown core_crate_cpp_FUN_00448960();
undefined __unknown core_crate_cpp_FUN_00448980();
undefined __unknown core_crate_cpp_FUN_004489d0();
undefined __unknown core_crate_cpp_FUN_00448a70();
undefined __unknown core_crate_cpp_FUN_00448b20();
undefined __unknown core_crate_cpp_FUN_00448b60();
CCrate * __cdecl core_crate_cpp_FUN_00448bb0(CCrate * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_crossbow_cpp_staticInit_FUN_00448c00(void);
undefined __unknown core_crossbow_cpp_FUN_00448c30();
CDemonActorType * __cdecl core_crossbow_cpp_CCrossbow_getActorType_FUN_00448c60(CCrossbow * this_ptr);
CCrossbow * __cdecl core_crossbow_cpp_FUN_00448c70(CCrossbow * this_ptr);
void __cdecl core_crossbow_cpp_CCrossbow_process_FUN_00448d30(CCrossbow * this_ptr);
int __cdecl core_crossbow_cpp_CCrossbow_renderOpaque_FUN_00448e00(CCrossbow * this_ptr);
int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_00448e80(CCrossbow * this_ptr);
int __cdecl core_crossbow_cpp_CCrossbow_FUN_00448eb0(CCrossbow * this_ptr);
int __cdecl core_crossbow_cpp_CCrossbow_FUN_00448f20(CCrossbow * this_ptr);
undefined __unknown core_crossbow_cpp_FUN_00449540();
float __cdecl core_crossbow_cpp_CCrossbow_FUN_00449570(CCrossbow * this_ptr);
CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_004495a0(CCrossbow * this_ptr, uint d1, uint d2, uint d3);
CDemonActorType * __cdecl core_curtain_cpp_staticInit_FUN_00449610(void);
undefined __unknown core_curtain_cpp_FUN_00449660();
undefined __unknown core_curtain_cpp_FUN_00449690();
CCurtain * __cdecl core_curtain_cpp_FUN_004496a0(CCurtain * this_ptr);
undefined __unknown core_curtain_cpp_FUN_00449810();
undefined __unknown core_curtain_cpp_FUN_00449e40();
undefined __unknown core_curtain_cpp_FUN_00449f10();
undefined __unknown core_curtain_cpp_FUN_00449fc0();
undefined __unknown core_curtain_cpp_FUN_0044a920();
undefined __unknown core_curtain_cpp_FUN_0044b060();
undefined __unknown core_curtain_cpp_FUN_0044b340();
undefined __unknown core_curtain_cpp_FUN_0044b360();
undefined __unknown core_curtain_cpp_FUN_0044b370();
undefined __unknown core_curtain_cpp_FUN_0044b380();
undefined __unknown core_curtain_cpp_CCurtain_load_FUN_0044b3e0();
undefined __unknown core_curtain_cpp_FUN_0044b600();
undefined __unknown core_curtain_cpp_FUN_0044b610();
undefined __unknown core_curtain_cpp_FUN_0044b7a0();
undefined __unknown core_curtain_cpp_FUN_0044b8d0();
undefined __unknown core_curtain_cpp_FindCurtainTextures_FUN_0044b960();
CCurtain * __cdecl core_curtain_cpp_FUN_0044ba30(CCurtain * this_ptr, uint d1, uint d2, uint d3);
SCurtainVertex * __cdecl core_curtain_cpp_FUN_0044baa0(SCurtainVertex * this_ptr);
SCurtainVertex * __cdecl core_curtain_cpp_FUN_0044bab0(SCurtainVertex * this_ptr);
SCollisionInfo * __cdecl core_curtain_cpp_SCollisionInfo_dtor_FUN_0044bac0(SCollisionInfo * this_ptr);
undefined __unknown core_curtain_cpp_FUN_0044bad0();
void __cdecl core_curtain_cpp_freeVectors_FUN_0044baf0(CVector3f * * array);
void __cdecl core_dcamera_cpp_staticInit_FUN_0044bb10(void);
uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_0044bb50(int palette_index);
void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0044bb70(SFogGrid * fog);
void __cdecl core_dcamera_cpp_generateFogGrid_FUN_0044bba0(SFogGrid * fog);
uint __cdecl core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0(SFogGrid * fog_ptr, CVector3i * start_pos, CVector3i * end_pos, int ray_length);
void __cdecl core_dcamera_cpp_updateFogScrollOffset_FUN_0044bfb0(SFogGrid * fog_ptr, int time_major, int time_minor);
CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_0044c030(CDemonCamera * this_ptr);
CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0044c090(CDemonCamera * this_ptr, uint d1, uint d2, uint d3);
void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(CDemonCamera * this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(CDemonCamera * this_ptr, int screen_height);
void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_0044c360(CDemonCamera * this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0(CDemonCamera * this_ptr, int skip_clear_buffers);
void __cdecl core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(CDemonCamera * this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers);
void __cdecl core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740(CDemonCamera * this_ptr, int left, int top, int right, int bottom);
void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780(CDemonCamera * this_ptr, CRect * rect_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera * this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy);
void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(CDemonCamera * this_ptr);
int __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(CDemonCamera * this_ptr, int restore_zbuffer);
void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(CDemonCamera * this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera * this_ptr);
void __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr);
CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr);
CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr);
CVector3f * __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480(CDemonCamera * this_ptr, CVector3f * output_ptr, int screen_x, int screen_y);
CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr);
CVector3i * __cdecl core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr);
CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0044da90(CDemonCamera * this_ptr, CVector3i * input_vector, CVector3i * output_vector);
CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0(CDemonCamera * this_ptr, CVector3i * input_vector, CVector3i * output_vector);
char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044dde0(CDemonCamera * this_ptr);
void * __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect);
CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera * this_ptr);
int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, int intensity);
int __cdecl core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, CVector3i * light_direction);
void __cdecl core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30(CDemonCamera * this_ptr, CVector3f * new_position, CMatrix3x3f * rotation_matrix, CMatrix3x3f * transform_matrix);
void __cdecl core_dcamera_cpp_CDemonCamera_restoreTransform_FUN_0044f1e0(CDemonCamera * this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044f290(CDemonCamera * this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310(CDemonCamera * this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044f3e0(CDemonCamera * this_ptr, char * filename);

