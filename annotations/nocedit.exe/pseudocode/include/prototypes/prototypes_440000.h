#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CColonel.h"
#include "types/classes/CConsole.h"
#include "types/classes/CConveyor.h"
#include "types/classes/CCourse.h"
#include "types/classes/CCramTex.h"
#include "types/classes/CCrate.h"
#include "types/classes/CCrossbow.h"
#include "types/classes/CCurtain.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonCamera.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CPlatform.h"
#include "types/classes/CRect.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CZombieCow.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCramRectangle.h"
#include "types/structs/SCurtainVertex.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SFogGrid.h"
#include "types/structs/STextureAtlasEntry.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x440000
// =============================================================================

int __cdecl core_colonel_cpp_CColonel_FUN_00440430(CColonel *this_ptr);
void __cdecl core_colonel_cpp_CColonel_archive_FUN_00440490(CColonel *this_ptr);
void __cdecl core_colonel_cpp_CColonel_renderOpaque_FUN_004404a0(CColonel *this_ptr);
void __cdecl core_colonel_cpp_CColonel_processDamage_FUN_004404b0(CColonel *this_ptr,SDamageInfo *damage_info);
int __cdecl core_colonel_cpp_CColonel_areGunsDrawn_FUN_004405d0(CColonel *this_ptr);
void __cdecl core_colonel_cpp_CColonel_drawGuns_FUN_004405e0(CColonel *this_ptr,int drawn);
void __cdecl core_colonel_cpp_CColonel_onActorDeleted_FUN_004405f0(CColonel *this_ptr,CDemonActor *deleted_actor);
void __cdecl core_colonel_cpp_CColonel_getPropertyList_FUN_00440610 (CColonel *this_ptr,CActorPropertyList *property_list);
void __cdecl core_colonel_cpp_CColonel_addFilesToExtract_FUN_00440630(CColonel *this_ptr,_FILE *file_handle);
int __cdecl core_colonel_cpp_FUN_00440650(void);
CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00440670(CColonel *this_ptr,uint flags);
int * __cdecl engine_colquant_c_FUN_004406c0(void);
void __cdecl engine_colquant_c_FUN_00440b40(void);
void __cdecl engine_colquant_c_FUN_00440c80(void);
void __cdecl engine_colquant_c_FUN_00440dc0(void);
void __cdecl engine_colquant_c_FUN_00440f00(void);
int __cdecl engine_colquant_c_FUN_00441040(void);
void __cdecl engine_colquant_c_FUN_00441110(void);
void __cdecl engine_colquant_c_FUN_00441260(void);
int __cdecl engine_colquant_c_FUN_00441790(void);
void __cdecl engine_console_cpp_staticInit_FUN_004417e0(void);
CConsole * __cdecl engine_console_cpp_CConsole_ctor_FUN_00441810 (CConsole *this_ptr,int width,int height,int screen_x,int screen_y);
CConsole * __cdecl engine_console_cpp_CConsole_dtor_FUN_00441880(CConsole *this_ptr);
void __cdecl engine_console_cpp_CConsole_printf_FUN_00441890(CConsole *this_ptr,char *format,...);
void __cdecl engine_console_cpp_CConsole_writeChar_FUN_00441970(CConsole *this_ptr,char character);
void __cdecl engine_console_cpp_CConsole_reset_FUN_00441a40(CConsole *this_ptr);
void __cdecl engine_console_cpp_CConsole_scrollUp_FUN_00441a80(CConsole *this_ptr);
void __cdecl engine_console_cpp_CConsole_render_FUN_00441b00(CConsole *this_ptr);
void __cdecl core_conveyor_cpp_staticInit_FUN_00441c30(void);
CConveyor * __cdecl core_conveyor_cpp_factoryFunc_FUN_00441c60(void);
CDemonActorType * __cdecl core_conveyor_cpp_CConveyor_getActorType_FUN_00441c90(CConveyor *this_ptr);
CConveyor * __cdecl core_conveyor_cpp_CConveyor_ctor_FUN_00441ca0(CConveyor *this_ptr);
void __cdecl core_conveyor_cpp_CConveyor_setup_FUN_00441d60(CConveyor *this_ptr);
void __cdecl core_conveyor_cpp_CConveyor_process_FUN_00441df0(CConveyor *this_ptr,float delta_time);
int __cdecl core_conveyor_cpp_CConveyor_renderOpaque_FUN_00441f40(CConveyor *this_ptr);
void __cdecl core_conveyor_cpp_CConveyor_renderBackground_FUN_00441f50(CConveyor *this_ptr,int layer_flag);
int __cdecl core_conveyor_cpp_CConveyor_renderTransparent_FUN_00441f60(CConveyor *this_ptr);
void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_00442020(CConveyor *this_ptr);
int __cdecl core_conveyor_cpp_CConveyor_hasCollision_FUN_004420c0 (CConveyor *this_ptr,SCollisionInfo *collision_info);
CBoundingBox3D * __cdecl core_conveyor_cpp_CConveyor_getBoundingBox_FUN_004420d0(CConveyor *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_conveyor_cpp_CConveyor_getPropertyList_FUN_00442130 (CConveyor *this_ptr,CActorPropertyList *property_list);
void __cdecl core_conveyor_cpp_CConveyor_processInEditor_FUN_004421c0(CConveyor *this_ptr);
void __cdecl core_conveyor_cpp_CConveyor_addFilesToExtract_FUN_004422f0(CConveyor *this_ptr,_FILE *file_handle);
CConveyor * __cdecl core_conveyor_cpp_CConveyor_dtor_FUN_00442310(CConveyor *this_ptr,uint flags);
CPlatform * __cdecl core_conveyor_cpp_CPlatform_dtor_FUN_00442380(CPlatform *this_ptr,uint flags);
int __cdecl core_conveyor_cpp_FUN_004423f0(void);
float __cdecl core_conveyor_cpp_FUN_00442400(void);
void __cdecl core_conveyor_cpp_FUN_004424a0(void);
CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_004424c0(CCourse *this_ptr);
CCourse * __cdecl core_course_cpp_CCourse_dtor_FUN_004424e0(CCourse *this_ptr);
void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00442500(CCourse *this_ptr);
void __cdecl core_course_cpp_CCourse_load_FUN_00442580(CCourse *this_ptr,char *filename);
void __cdecl core_course_cpp_CCourse_free_FUN_004426c0(CCourse *this_ptr);
void __cdecl core_course_cpp_CCourse_FUN_00442710(CCourse *this_ptr);
void __cdecl core_course_cpp_CCourse_FUN_004427a0(CCourse *this_ptr);
void __cdecl core_course_cpp_CCourse_save_FUN_00442a90(CCourse *this_ptr);
int __cdecl core_course_cpp_CCourse_FUN_00442bc0(CCourse *this_ptr,char *filename);
int __cdecl core_course_cpp_CCourse_FUN_00442d70(CCourse *this_ptr,char *filename);
void __cdecl core_course_cpp_CCourse_importMatrices_FUN_00442ea0(CCourse *this_ptr);
void __cdecl core_course_cpp_CCourse_showEditorMenu_FUN_00443040(CCourse *this_ptr);
void __cdecl core_course_cpp_FUN_004436d0(void);
void __cdecl core_course_cpp_FUN_00443760(void);
void __cdecl core_course_cpp_CCourse_FUN_00443bc0(CCourse *this_ptr,CKeyFramedModel *param_2);
void __cdecl core_cow_cpp_staticInit_FUN_004440d0(void);
CZombieCow * __cdecl core_cow_cpp_factoryFunc_FUN_00444100(void);
CDemonActorType * __cdecl core_cow_cpp_CZombieCow_getActorType_FUN_00444130(CZombieCow *this_ptr);
CZombieCow * __cdecl core_cow_cpp_CZombieCow_ctor_FUN_00444140(CZombieCow *this_ptr);
void __cdecl core_cow_cpp_CZombieCow_setup_FUN_004441b0(CZombieCow *this_ptr);
void __cdecl core_cow_cpp_CZombieCow_process_FUN_00444310(CZombieCow *this_ptr,float delta_time);
void __cdecl core_cow_cpp_CZombieCow_archive_FUN_00444840(CZombieCow *this_ptr);
void __cdecl core_cow_cpp_CZombieCow_FUN_004448c0(CZombieCow *this_ptr);
void __cdecl core_cow_cpp_CZombieCow_processDamage_FUN_00444b40(CZombieCow *this_ptr,SDamageInfo *damage_info);
int __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_00444c00 (CZombieCow *this_ptr,CVector3f *out_points_array);
void __cdecl core_cow_cpp_CZombieCow_getPropertyList_FUN_00444c50 (CZombieCow *this_ptr,CActorPropertyList *property_list);
void __cdecl core_cow_cpp_CZombieCow_randomize_FUN_00444c90(CZombieCow *this_ptr);
void __cdecl core_cow_cpp_CZombieCow_addFilesToExtract_FUN_00444ca0(CZombieCow *this_ptr,_FILE *file_handle);
CZombieCow * __cdecl core_cow_cpp_CZombieCow_dtor_FUN_00444cd0(CZombieCow *this_ptr,uint flags);
int __cdecl shape_cramtex_cpp_generateTextureAtlasLayout_FUN_00444d90 (uint texture_count,STextureAtlasEntry *texture_entries,int atlas_width,int atlas_height, int acceptable_coverage_threshold,int acceptable_size,int *output_atlas_width, int *output_atlas_height,int padding_size,int fill_gaps,int visualize,int max_iterations);
int __cdecl shape_cramtex_cpp_qsortByLargestDimension_FUN_004457f0(CCramTex *entry_a,CCramTex *entry_b);
void __cdecl shape_cramtex_cpp_generateTextureAtlas_FUN_00445820(void);
int __cdecl shape_cramtex_cpp_CCramTex_addTextureEntry_FUN_00446100(CCramTex *this_ptr);
int __cdecl shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140 (SCramRectangle *rect_a,SCramRectangle *rect_b);
int __cdecl shape_cramtex_cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160(CCramTex *this_ptr);
uint __cdecl shape_cramtex_cpp_performGapFillingOptimization_FUN_00447590(void);
int __cdecl shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(CCramTex *this_ptr);
int __cdecl shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(CCramTex *this_ptr);
int __cdecl shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(CCramTex *this_ptr);
int __cdecl shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(CCramTex *this_ptr);
int __cdecl shape_cramtex_cpp_mapCoordinateToAtlas_FUN_00447a80(int min_coord,int max_coord,int pixel_offset);
void __cdecl shape_cramtex_cpp_CCramTex_renderAllTexturesAndRectangles_FUN_00447ab0 (CCramTex *this_ptr,int x,int y,int width,int height,int render_mode);
void __cdecl shape_cramtex_cpp_CCramTex_renderTextureEntry_FUN_00447c20 (CCramTex *this_ptr,int visualization_mode,int draw_x,int draw_y,int draw_width, int draw_height);
double __cdecl shape_cramtex_cpp_calculateAtlasEfficiency_FUN_00447e80(void);
void __cdecl shape_cramtex_cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20 (CCramTex *this_ptr,int visualization_mode,int completion_mode,int display_mode);
void __cdecl shape_cramtex_cpp_printAtlasLayoutReport_FUN_004481d0(_FILE *output_file);
void __cdecl shape_cramtex_cpp_placementCollisionCheck_FUN_00448260 (int layer_id,int start_x,int start_y,int width,int height);
int __cdecl shape_cramtex_cpp_CCramTex_checkTextureCollision_FUN_00448390(CCramTex *this_ptr,CCramTex *other);
void __cdecl shape_cramtex_cpp_CCramTex_setupTextureForPlacement_FUN_004483e0 (CCramTex *this_ptr,CCramTex *source);
int __cdecl shape_cramtex_cpp_maxInt_FUN_00448440(int a,int b);
void __cdecl core_crate_cpp_staticInit_FUN_00448460(void);
CCrate * __cdecl core_crate_cpp_factoryFunc_FUN_00448490(void);
CDemonActorType * __cdecl core_crate_cpp_CCrate_getActorType_FUN_004484c0(CCrate *this_ptr);
CCrate * __cdecl core_crate_cpp_CCrate_ctor_FUN_004484d0(CCrate *this_ptr);
void __cdecl core_crate_cpp_CCrate_setup_FUN_00448530(CCrate *this_ptr);
int __cdecl core_crate_cpp_CCrate_canPickup_FUN_00448600(CCrate *this_ptr,CDemonActor *picker);
void __cdecl core_crate_cpp_CCrate_pickup_FUN_00448620(CCrate *this_ptr,CDemonActor *carrier);
void __cdecl core_crate_cpp_CCrate_drop_FUN_00448630(CCrate *this_ptr,CVector3f *drop_position);
CDemonActor * __cdecl core_crate_cpp_CCrate_getCarrier_FUN_00448650(CCrate *this_ptr);
void __cdecl core_crate_cpp_CCrate_process_FUN_00448660(CCrate *this_ptr,float delta_time);
int __cdecl core_crate_cpp_CCrate_renderOpaque_FUN_00448880(CCrate *this_ptr);
void __cdecl core_crate_cpp_CCrate_renderBackground_FUN_004488f0(CCrate *this_ptr,int layer_flag);
void __cdecl core_crate_cpp_CCrate_archive_FUN_00448910(CCrate *this_ptr);
int __cdecl core_crate_cpp_CCrate_hasCollision_FUN_00448960(CCrate *this_ptr,SCollisionInfo *collision_info);
CBoundingBox3D * __cdecl core_crate_cpp_CCrate_getBoundingBox_FUN_00448980(CCrate *this_ptr,CBoundingBox3D *out_box);
int __cdecl core_crate_cpp_CCrate_getTargetPoints_FUN_004489d0(CCrate *this_ptr,CVector3f *out_points_array);
void __cdecl core_crate_cpp_CCrate_FUN_00448a70(CCrate *this_ptr);
void __cdecl core_crate_cpp_CCrate_getPropertyList_FUN_00448b20 (CCrate *this_ptr,CActorPropertyList *property_list);
void __cdecl core_crate_cpp_CCrate_addFilesToExtract_FUN_00448b60(CCrate *this_ptr,_FILE *file_handle);
CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_00448bb0(CCrate *this_ptr,uint flags);
void __cdecl core_crossbow_cpp_staticInit_FUN_00448c00(void);
CCrossbow * __cdecl core_crossbow_cpp_factoryFunc_FUN_00448c30(void);
CDemonActorType * __cdecl core_crossbow_cpp_CCrossbow_getActorType_FUN_00448c60(CCrossbow *this_ptr);
CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_00448c70(CCrossbow *this_ptr);
void __cdecl core_crossbow_cpp_CCrossbow_process_FUN_00448d30(CCrossbow *this_ptr,float delta_time);
int __cdecl core_crossbow_cpp_CCrossbow_renderOpaque_FUN_00448e00(CCrossbow *this_ptr);
int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_00448e80(CCrossbow *this_ptr);
CVector3f * __cdecl core_crossbow_cpp_CCrossbow_getMuzzlePoint_FUN_00448eb0(CCrossbow *this_ptr,CVector3f *out_point);
int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00448f20(CCrossbow *this_ptr);
float __cdecl core_crossbow_cpp_CCrossbow_FUN_00449540(CCrossbow *this_ptr);
float __cdecl core_crossbow_cpp_CCrossbow_getDamage_FUN_00449570(CCrossbow *this_ptr);
CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_004495a0(CCrossbow *this_ptr,uint flags);
void __cdecl core_curtain_cpp_staticInit_FUN_00449610(void);
CCurtain * __cdecl core_curtain_cpp_factoryFunc_FUN_00449660(void);
CDemonActorType * __cdecl core_curtain_cpp_CCurtain_getActorType_FUN_00449690(CCurtain *this_ptr);
CCurtain * __cdecl core_curtain_cpp_CCurtain_ctor_FUN_004496a0(CCurtain *this_ptr);
void __cdecl core_curtain_cpp_CCurtain_setup_FUN_00449810(CCurtain *this_ptr);
void __cdecl core_curtain_cpp_CCurtain_FUN_00449e40(CCurtain *this_ptr);
void __cdecl core_curtain_cpp_CCurtain_FUN_00449f10(CCurtain *this_ptr);
void __cdecl core_curtain_cpp_CCurtain_FUN_00449fc0(CCurtain *this_ptr);
void __cdecl core_curtain_cpp_CCurtain_process_FUN_0044a920(CCurtain *this_ptr,float delta_time);
int __cdecl core_curtain_cpp_CCurtain_FUN_0044b060(CCurtain *this_ptr);
int __cdecl core_curtain_cpp_CCurtain_renderOpaque_FUN_0044b340(CCurtain *this_ptr);
int __cdecl core_curtain_cpp_CCurtain_renderTransparent_FUN_0044b360(CCurtain *this_ptr);
int __cdecl core_curtain_cpp_CCurtain_hasCollision_FUN_0044b370 (CCurtain *this_ptr,SCollisionInfo *collision_info);
CBoundingBox3D * __cdecl core_curtain_cpp_CCurtain_getBoundingBox_FUN_0044b380(CCurtain *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_curtain_cpp_CCurtain_archive_FUN_0044b3e0(CCurtain *this_ptr);
int __cdecl core_curtain_cpp_CCurtain_getBlockVirtualDirectorFlag_FUN_0044b600(CCurtain *this_ptr);
void __cdecl core_curtain_cpp_CCurtain_getPropertyList_FUN_0044b610 (CCurtain *this_ptr,CActorPropertyList *property_list);
void __cdecl core_curtain_cpp_CCurtain_processInEditor_FUN_0044b7a0(CCurtain *this_ptr);
void __cdecl core_curtain_cpp_CCurtain_showEditorHelp_FUN_0044b8d0(CCurtain *this_ptr,int *y_pos);
void __cdecl core_curtain_cpp_CCurtain_addFilesToExtract_FUN_0044b960(CCurtain *this_ptr,_FILE *file_handle);
CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_0044ba30(CCurtain *this_ptr,uint flags);
SCurtainVertex * __cdecl core_curtain_cpp_SCurtainVertex_ctor_FUN_0044baa0(SCurtainVertex *this_ptr);
SCurtainVertex * __cdecl core_curtain_cpp_SCurtainVertex_dtor_FUN_0044bab0(SCurtainVertex *this_ptr);
SCollisionInfo * __cdecl core_curtain_cpp_SCollisionInfo_dtor_FUN_0044bac0(SCollisionInfo *this_ptr);
SCurtainVertex * __cdecl core_curtain_cpp_freeCurtainVertices_FUN_0044bad0(SCurtainVertex *objs);
CVector3f * __cdecl core_curtain_cpp_freeVectors_FUN_0044baf0(CVector3f *objs);
void __cdecl core_dcamera_cpp_staticInit_FUN_0044bb10(void);
uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_0044bb50(int palette_index);
void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0044bb70(SFogGrid *fog);
void __cdecl core_dcamera_cpp_generateFogGrid_FUN_0044bba0(SFogGrid *fog);
uint __cdecl core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0 (SFogGrid *fog_ptr,CVector3i *start_pos,CVector3i *end_pos,int ray_length);
void __cdecl core_dcamera_cpp_updateFogScrollOffset_FUN_0044bfb0(SFogGrid *fog_ptr,int time_major,int time_minor);
CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_0044c030(CDemonCamera *this_ptr);
CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0044c090(CDemonCamera *this_ptr,uint flags);
void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(CDemonCamera *this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(CDemonCamera *this_ptr,int screen_height);
void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_0044c360(CDemonCamera *this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0 (CDemonCamera *this_ptr,int skip_clear_buffers);
void __cdecl core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(CDemonCamera *this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera *this_ptr,int skip_clear_buffers);
void __cdecl core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740 (CDemonCamera *this_ptr,int left,int top,int right,int bottom);
void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780 (CDemonCamera *this_ptr,CRect *rect_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera *this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera *this_ptr,int skip_zbuffer_copy);
void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(CDemonCamera *this_ptr);
int __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0 (CDemonCamera *this_ptr,int restore_zbuffer);
void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(CDemonCamera *this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera *this_ptr);
void __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 (CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3i *output_ptr);
CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310 (CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr);
CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370 (CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr);
CVector3f * __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480 (CDemonCamera *this_ptr,CVector3f *output_ptr,int screen_x,int screen_y);
CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600 (CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr);
CVector3i * __cdecl core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0 (CDemonCamera *this_ptr,CVector3i *output_ptr,CVector3i *input_ptr);
CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0044da90 (CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector);
CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0 (CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector);
char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044dde0(CDemonCamera *this_ptr);
void * __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10 (CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect);
CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera *this_ptr);
int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790 (CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity);
int __cdecl core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0 (CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source, CVector3i *light_direction);
void __cdecl core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30 (CDemonCamera *this_ptr,CVector3f *new_position,CMatrix3x3f *rotation_matrix, CMatrix3x3f *transform_matrix);
void __cdecl core_dcamera_cpp_CDemonCamera_restoreTransform_FUN_0044f1e0(CDemonCamera *this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044f290(CDemonCamera *this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310(CDemonCamera *this_ptr);
void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044f3e0(CDemonCamera *this_ptr,char *filename);

