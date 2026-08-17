#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/fstream.h"
#include "system/stdio.h"
#include "system/winbase.h"
#include "types/classes/CBitFont.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFilter.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CDemonPart.h"
#include "types/classes/CDemonRenderer.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CDoor.h"
#include "types/classes/CDraculaBride.h"
#include "types/classes/CDrawSurface.h"
#include "types/classes/CFileFinder.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CPackedBitmap.h"
#include "types/classes/CRect.h"
#include "types/classes/CRuleList.h"
#include "types/classes/CVector2i.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CZombieDog.h"
#include "types/enums/ECollisionType.h"
#include "types/enums/EDeathState.h"
#include "types/enums/EGroundType.h"
#include "types/enums/ETextAlignment.h"
#include "types/funcdefs/FileSearchHandlerFunc.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SFoundFileInfo.h"
#include "types/structs/SFreaky.h"
#include "types/structs/SInputFace.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLPrimitivePoly.h"
#include "types/structs/SPoint2i.h"
#include "types/structs/SSoftwareEdge.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x450000
// =============================================================================

void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_00450170(CDemonLight *this_ptr);
void __cdecl core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0(CDemonLight *this_ptr,CDemonFilter *filter_ptr,int filter_index,int filter_pos_x,int filter_pos_y);
void __cdecl core_dlight_cpp_captureLightTextures_FUN_004504e0(void);
void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520(CDemonLight *this_ptr);
void __cdecl core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00450c90(CDemonLight *this_ptr);
void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350(CDemonLight *this_ptr);
void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60(CDemonLight *this_ptr);
int __cdecl core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0(CDemonLight *this_ptr,CRect *rect);
void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_00451b70(CVector3f *position,CVector3f *rotation,float fov,float falloff);
void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(CDemonLight *this_ptr,float intensity);
void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00452110(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset);
undefined4 * core_dlight_cpp_FUN_00452500(void);
undefined4 * core_dlight_cpp_FUN_00452510(void);
undefined4 * core_dlight_cpp_FUN_00452520(void);
void __cdecl core_dmodel_cpp_staticInit_FUN_00452530(void);
void __cdecl core_dmodel_cpp_skipLines_FUN_00452560(_FILE *file_handle,int line_count);
CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00452590(CKeyFramedModel *this_ptr);
CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00452630(CKeyFramedModel *this_ptr,uint flags);
void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(CKeyFramedModel *this_ptr,char *filename);
void __cdecl core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0(CKeyFramedModel *this_ptr,_FILE *file);
void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00452990(CKeyFramedModel *this_ptr,_FILE *file);
void __cdecl core_dmodel_cpp_CKeyFramedModel_FUN_00452f10(CKeyFramedModel *this_ptr);
void __cdecl core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance,int render_flags);
CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00453080(CKeyFramedModel *this_ptr,int frame_index);
void __cdecl core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004530c0(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance);
void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00453170(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags);
void __cdecl core_dmodel_cpp_CKeyFramedModel_allocate_FUN_004533e0(CKeyFramedModel *this_ptr,int vertex_count,int poly_count,int texture_count,int part_count,int frame_count);
void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00453620(CKeyFramedModel *this_ptr);
void __cdecl core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0(CKeyFramedModel *this_ptr);
void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00453950(CKeyFramedModel *this_ptr);
float __cdecl core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_00453990(CKeyFramedModel *this_ptr,int frame_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *output_normal);
void __cdecl core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00453e10(CKeyFramedModel *this_ptr,int frame_index,SIntersectXZCylinder *cylinder,CVector3f *transform_vector);
int __cdecl core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00453f00(CKeyFramedModel *this_ptr,int frame_index,CVector3f *position,float search_radius,float *out_height,CVector3f *transform_vector);
void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(CKeyFramedModel *this_ptr);
void __cdecl core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00454100(CKeyFramedModel *this_ptr,CVector3f *transform_vector);
CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_004543b0(char *filename);
void __cdecl core_dmodel_cpp_freeAllModels_FUN_00454460(void);
CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance *this_ptr);
CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_004544b0(CKeyFramedModelInstance *this_ptr);
void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags);
CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance *this_ptr);
CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance *this_ptr);
void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance *this_ptr,char *filename);
CDemonTriangle * __cdecl core_dmodel_cpp_CDemonTriangle_ctor_FUN_004545c0(CDemonTriangle *this_ptr);
CDemonTriangle * __cdecl core_dmodel_cpp_CDemonTriangle_dtor_FUN_004545d0(CDemonTriangle *this_ptr,uint flags);
CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_arrdtor256_FUN_004545e0(CKeyFramedModel *this_ptr,uint flags);
void __cdecl core_dog_cpp_staticInit_FUN_00454600(void);
CZombieDog * __cdecl core_dog_cpp_factoryFuncZombieDog_FUN_00454630(void);
CDemonActorType * __cdecl core_dog_cpp_CZombieDog_getActorType_FUN_00454650(CZombieDog *this_ptr);
CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_00454660(CZombieDog *this_ptr);
void __cdecl core_dog_cpp_CZombieDog_setup_FUN_004546d0(CZombieDog *this_ptr);
void __cdecl core_dog_cpp_CZombieDog_process_FUN_00454750(CZombieDog *this_ptr,float delta_time);
void __cdecl core_dog_cpp_CZombieDog_archive_FUN_00454dc0(CZombieDog *this_ptr);
void __cdecl core_dog_cpp_CZombieDog_processDamage_FUN_00454e30(CZombieDog *this_ptr,SDamageInfo *damage_info);
int __cdecl core_dog_cpp_CZombieDog_getTargetPoints_FUN_00454ee0(CZombieDog *this_ptr,CVector3f *out_points_array);
CZombieDog * __cdecl core_dog_cpp_CZombieDog_dtor_FUN_00454f30(CZombieDog *this_ptr,uint flags);
void __cdecl core_door_cpp_staticInit_FUN_00454ff0(void);
CDoor * __cdecl core_door_cpp_factoryFuncDoor_FUN_00455020(void);
CDemonActorType * __cdecl core_door_cpp_CDoor_getActorType_FUN_00455040(CDoor *this_ptr);
CDoor * __cdecl core_door_cpp_CDoor_ctor_FUN_00455050(CDoor *this_ptr);
void __cdecl core_door_cpp_CDoor_setup_FUN_004551f0(CDoor *this_ptr);
void __cdecl core_door_cpp_CDoor_onOpened_FUN_00455270(CDoor *this_ptr);
void __cdecl core_door_cpp_CDoor_reposition_FUN_004552a0(CDoor *this_ptr);
void __cdecl core_door_cpp_CDoor_process_FUN_00455640(CDoor *this_ptr,float delta_time);
int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_00455d50(CDoor *this_ptr);
void __cdecl core_door_cpp_CDoor_renderBackground_FUN_00455e10(CDoor *this_ptr,int layer_flag);
CBoundingBox3D * __cdecl core_door_cpp_CDoor_getBoundingBox_FUN_00455e90(CDoor *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_door_cpp_CDoor_archive_FUN_00455ee0(CDoor *this_ptr);
ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_004561d0(CDoor *this_ptr,SCollisionInfo *collision_info);
EGroundType __cdecl core_door_cpp_CDoor_getGroundType_FUN_00456210(CDoor *this_ptr);
void __cdecl core_door_cpp_CDoor_setSwingRange_FUN_00456220(CDoor *this_ptr,float swing_range);
int __cdecl core_door_cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00456230(CDoor *this_ptr);
int __cdecl core_door_cpp_CDoor_allowBulletHoles_FUN_00456240(CDoor *this_ptr);
CVector3f * __cdecl core_door_cpp_CDoor_getOpenStandPos_FUN_00456260(CDoor *this_ptr,CVector3f *out_pos,CVector3f *direction,CVector3f *actor_pos);
void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00456460(CDoor *this_ptr);
int __cdecl core_door_cpp_CDoor_getMoveType_FUN_004564b0(CDoor *this_ptr,CDemonActor *opener);
uint __cdecl core_door_cpp_CDoor_onLocked_FUN_00456650(CDoor *this_ptr);
CRuleList * __cdecl core_door_cpp_clearRuleList_FUN_00456690(CRuleList *rule_list);
CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_004566b0(CDoor *this_ptr,uint flags);
void __cdecl engine_dosio_cpp_getRelativeFilePath_FUN_00456700(char *dest_path,char *directory,char *filename);
void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00456750(FileSearchHandlerFunc *handler);
template<typename T_func0>
inline void engine_dosio_cpp_addGetFileInfoHook_FUN_00456750(T_func0 handler) {
    engine_dosio_cpp_addGetFileInfoHook_FUN_00456750((FileSearchHandlerFunc *)handler);
}
int __cdecl engine_dosio_cpp_findFile_FUN_004567a0(SFoundFileInfo *context);
int __cdecl engine_dosio_cpp_findFileNormally_FUN_00456800(SFoundFileInfo *info);
int __cdecl engine_dosio_cpp_getFileSize_FUN_004568c0(char *directory,char *filename);
uint __cdecl engine_dosio_cpp_getFileTimestamp_FUN_00456910(char *directory_path,char *filename);
int __cdecl engine_dosio_cpp_copyFileTimestamp_FUN_00456950(char *source_file,uint modtime);
int __cdecl engine_dosio_cpp_getFileSizeWithFinder_FUN_004569a0(char *directory,char *filename);
int __cdecl engine_dosio_cpp_setFileAttributes_FUN_00456a30(char *filename,byte flags);
_FILE * __cdecl engine_dosio_cpp_getFile_FUN_00456a60(char *directory,char *filename,char *mode);
void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00456b20(char *directory_path,char *filename,uint mode_flags,ifstream *file_stream);
CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(CFileFinder *this_ptr);
CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(CFileFinder *this_ptr,uint flags);
int __cdecl engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(CFileFinder *this_ptr,char *search_pattern);
int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(CFileFinder *this_ptr);
void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00456d40(CFileFinder *this_ptr);
void __cdecl engine_dosio_cpp_CFileFinder_reset_FUN_00456d80(CFileFinder *this_ptr);
void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_00456d90(CFileFinder *this_ptr,LPWIN32_FIND_DATAA find_data);
CDemonPart * __cdecl core_dpart_cpp_CDemonPart_ctor_FUN_00456ef0(CDemonPart *this_ptr);
CDemonPart * __cdecl core_dpart_cpp_CDemonPart_dtor_FUN_00456f40(CDemonPart *this_ptr,uint flags);
void __cdecl core_dpart_cpp_CDemonPart_alloc_FUN_00456f60(CDemonPart *this_ptr);
void __cdecl core_dpart_cpp_CDemonPart_free_FUN_00457060(CDemonPart *this_ptr);
void __cdecl core_dpart_cpp_CDemonPart_load_FUN_004570c0(CDemonPart *this_ptr);
void __cdecl core_dpart_cpp_CDemonPart_save_FUN_004570f0(CDemonPart *this_ptr);
void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00457120(CDemonPart *this_ptr);
void __cdecl core_dpart_cpp_CDemonPart_loadFromFile_FUN_004571f0(CDemonPart *this_ptr,_FILE *file_handle,CVector3f *offset_position);
void __cdecl core_dpart_cpp_CDemonPart_renderFaces_FUN_004574e0(CDemonPart *this_ptr);
void __cdecl core_dpart_cpp_setupTriangleEdgeInterpolation_FUN_00457640(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b);
void __cdecl core_dpart_cpp_setupDepthOnlyEdgeInterpolation_FUN_004578a0(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b);
int * engine_drender_cpp_FUN_004579c0(int param_1,int *param_2);
void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00457a00(int *vertex_indices,int vertex_count);
void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_00458080(CVector3i *vertex_indices,int vertex_count);
void __cdecl core_dracbrid_cpp_staticInit_FUN_00458580(void);
CDraculaBride * __cdecl core_dracbrid_cpp_factoryFuncDraculaBride_FUN_00458610(void);
CDemonActorType * __cdecl core_dracbrid_cpp_CDraculaBride_getActorType_FUN_00458630(CDraculaBride *this_ptr);
CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_00458640(CDraculaBride *this_ptr);
void __cdecl core_dracbrid_cpp_CDraculaBride_setup_FUN_00458730(CDraculaBride *this_ptr);
void __cdecl core_dracbrid_cpp_CDraculaBride_process_FUN_00458a90(CDraculaBride *this_ptr,float delta_time);
void __cdecl core_dracbrid_cpp_CDraculaBride_explode_FUN_00459f70(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background);
void __cdecl core_dracbrid_cpp_CDraculaBride_dismemberPart_FUN_0045a1a0(CDraculaBride *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background);
ECollisionType __cdecl core_dracbrid_cpp_CDraculaBride_getCollisionType_FUN_0045a240(CDraculaBride *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_dracbrid_cpp_CDraculaBride_renderOpaque_FUN_0045a260(CDraculaBride *this_ptr);
void __cdecl core_dracbrid_cpp_CDraculaBride_archive_FUN_0045a450(CDraculaBride *this_ptr);
void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0(CDraculaBride *this_ptr,SDamageInfo *damage_info);
void __cdecl core_dracbrid_cpp_CDraculaBride_processDamage_FUN_0045a6f0(CDraculaBride *this_ptr,SDamageInfo *damage_info);
EDeathState __cdecl core_dracbrid_cpp_CDraculaBride_getDeathState_FUN_0045a9a0(CDraculaBride *this_ptr);
int __cdecl core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_0045a9e0(CDraculaBride *this_ptr,CVector3f *out_points_array);
void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_0045ab40(CDraculaBride *this_ptr,char *sound_name,float volume);
void __cdecl core_dracbrid_cpp_CDraculaBride_updateFreakySounds_FUN_0045b020(CDraculaBride *this_ptr,float delta_time);
SFreaky * __cdecl core_dracbrid_cpp_SFreaky_ctor_FUN_0045b310(SFreaky *this_ptr);
SFreaky * __cdecl core_dracbrid_cpp_SFreaky_dtor_FUN_0045b330(SFreaky *this_ptr,uint flags);
CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_dtor_FUN_0045b350(CDraculaBride *this_ptr,uint flags);
CVector3f * __cdecl core_dracbrid_cpp_CVector3f_arrdtor4_FUN_0045b410(CVector3f *this_ptr,uint flags);
SFreaky * __cdecl core_dracbrid_cpp_SFreaky_arrdtor6_FUN_0045b430(SFreaky *this_ptr,uint flags);
CDrawSurface * __cdecl cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_init_FUN_0045b4c0(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface );
void __cdecl cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(int color_value);
void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_0045b800(int red,int green,int blue);
void __cdecl cockpit_drawsurf_cpp_setColorBlack_FUN_0045b960(void);
void __cdecl cockpit_drawsurf_cpp_setColorWhite_FUN_0045b970(void);
void __cdecl cockpit_drawsurf_cpp_setColorRed_FUN_0045b990(void);
void __cdecl cockpit_drawsurf_cpp_setColorGreen_FUN_0045b9b0(void);
void __cdecl cockpit_drawsurf_cpp_setColorBlue_FUN_0045b9d0(void);
void __cdecl cockpit_drawsurf_cpp_setColorYellow_FUN_0045b9f0(void);
void __cdecl cockpit_drawsurf_cpp_setColorMagenta_FUN_0045ba10(void);
void __cdecl cockpit_drawsurf_cpp_setColorCyan_FUN_0045ba30(void);
void __cdecl cockpit_drawsurf_cpp_setColorDarkGray_FUN_0045ba50(void);
void __cdecl cockpit_drawsurf_cpp_setColorGray_FUN_0045ba60(void);
void __cdecl cockpit_drawsurf_cpp_setColorLightGray_FUN_0045ba80(void);
void __cdecl cockpit_drawsurf_cpp_setCurrentFont_FUN_0045baa0(CBitFont *font_ptr);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(CDrawSurface *this_ptr,int x,int y);
void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_0045bc20(int start_x,int end_x,int y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50(CDrawSurface *this_ptr,int center_x,int center_y,int radius);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0045be40(CDrawSurface *this_ptr,int x,int y,int radius);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_0045be70(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0045bea0(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0045bed0(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00(CDrawSurface *this_ptr,int x,int y,int width,int height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_0045bfb0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClippedDashedLine_FUN_0045c050(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
char __cdecl cockpit_drawsurf_cpp_computeCohenSutherlandOutcode_FUN_0045c400(int point_x,int point_y,int clip_left,int clip_top,int clip_right,int clip_bottom);
int __cdecl cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_0045c440(CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top,int clip_right,int clip_bottom);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730(CDrawSurface *this_ptr,int start_x,int y,int end_x);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_0045c850(CDrawSurface *this_ptr,int x,int start_y,int end_y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_0045ca50(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10(CDrawSurface *this_ptr,int x,int y,int width,int height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70(CDrawSurface *this_ptr);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredRectangleOutline_FUN_0045cb90(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_0045cc10(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int border_width,int border_height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawFullSurface_FUN_0045cce0(CDrawSurface *this_ptr);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredSolidRectangle_FUN_0045cd00(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawInsetRectangle_FUN_0045cd80(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int inset_x,int inset_y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedFullSurface_FUN_0045cfd0(CDrawSurface *this_ptr);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_0045cff0(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_0045d070(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int inset_x,int inset_y);
int __cdecl cockpit_drawsurf_cpp_getDashLength_FUN_0045d0d0(void);
float __cdecl cockpit_drawsurf_cpp_getDashAnimationThreshold_FUN_0045d0e0(void);
void __cdecl cockpit_drawsurf_cpp_setDashLength_FUN_0045d0f0(int length);
void __cdecl cockpit_drawsurf_cpp_setDashAnimationThreshold_FUN_0045d100(float threshold);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillRectangle_FUN_0045d110(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0045d2b0(CDrawSurface *this_ptr);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_renderPackedBitmap_FUN_0045d2d0(CDrawSurface *this_ptr,int x_offset,int y_offset,CPackedBitmap *bitmap_ptr);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillPoly_FUN_0045d310(CDrawSurface *this_ptr,int vertex_count,SPoint2i *vertices);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClosedPolyline_FUN_0045d6d0(CDrawSurface *this_ptr,int point_count,CVector2i *points);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height,ETextAlignment alignment_mode);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30(CDrawSurface *this_ptr,char *text,int x,int y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60(CDrawSurface *this_ptr,int x,int y,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_0045da90(CDrawSurface *this_ptr,int x,int y,char *format,...) __attribute__((format(printf, 4, 5)));
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_0045db00(CDrawSurface *this_ptr,char *text,int x,int y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantWrapper_FUN_0045db30(CDrawSurface *this_ptr,int x,int y,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_0045db60(CDrawSurface *this_ptr,int x,int y,char *format,...) __attribute__((format(printf, 4, 5)));
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_0045dbd0(CDrawSurface *this_ptr,char *text,int x,int y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_0045dc00(CDrawSurface *this_ptr,int x,int y,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0045dc30(CDrawSurface *this_ptr,int x,int y,char *format,...) __attribute__((format(printf, 4, 5)));
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0045dca0(CDrawSurface *this_ptr,char *text,int x,int y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_0045dcd0(CDrawSurface *this_ptr,int x,int y,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00(CDrawSurface *this_ptr,int x,int y,char *format,...) __attribute__((format(printf, 4, 5)));
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBoth_FUN_0045dd70(CDrawSurface *this_ptr,char *text,int x,int y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_0045dda0(CDrawSurface *this_ptr,int x,int y,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0045ddd0(CDrawSurface *this_ptr,int x,int y,char *format,...) __attribute__((format(printf, 4, 5)));
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40(CDrawSurface *this_ptr,char *text,int x,int width,int y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0045de70(CDrawSurface *this_ptr,int x,int y,int width,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0045dea0(CDrawSurface *this_ptr,int x,int y,int width,char *format,...) __attribute__((format(printf, 5, 6)));
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20(CDrawSurface *this_ptr,char *text,int x,int y,int height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_0045df50(CDrawSurface *this_ptr,int x,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80(CDrawSurface *this_ptr,int x,int y,int height,char *format,...) __attribute__((format(printf, 5, 6)));
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_0045e040(CDrawSurface *this_ptr,int x,int y,int width,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070(CDrawSurface *this_ptr,int x,int width,int y,int height,char *format,...) __attribute__((format(printf, 6, 7)));
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0045e0f0(CDrawSurface *this_ptr,char *text,int y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_0045e110(CDrawSurface *this_ptr,int y,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_0045e130(CDrawSurface *this_ptr,int y,char *format,...) __attribute__((format(printf, 3, 4)));
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0(CDrawSurface *this_ptr,char *text,int x);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_0045e1d0(CDrawSurface *this_ptr,int x,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_0045e1f0(CDrawSurface *this_ptr,int x,char *format,...) __attribute__((format(printf, 3, 4)));
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260(CDrawSurface *this_ptr,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280(CDrawSurface *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));
int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCharWidth_FUN_0045e2e0(CDrawSurface *this_ptr,int char_code);
int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0045e320(CDrawSurface *this_ptr);
int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_0045e340(CDrawSurface *this_ptr,char *text);
void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_0045e370(CBitFont *test_font);
void __cdecl engine_drender_cpp_staticInit_FUN_0045ecf0(void);
CDemonRenderer * __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_0045ed00(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionMode_FUN_0045ed40(CDemonRenderer *this_ptr,int mode);
void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices);
void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);
void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);
int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);
int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0045f270(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);
void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0(CDemonRenderer *this_ptr,SInputFace *face,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedDirect_FUN_0045f700(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);
void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0045f8d0(CDemonRenderer *this_ptr,SInputFace *face);
void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);
void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);
void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0045fc00(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsPoly_FUN_0045fce0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);
void __cdecl engine_drender_cpp_CDemonRenderer_renderDestReadBlendDirect_FUN_0045fe40(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

