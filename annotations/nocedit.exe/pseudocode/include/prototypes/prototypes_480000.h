#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/fstream.h"
#include "system/stdio.h"
#include "system/winbase.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBitFont.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDSEModel.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonPart.h"
#include "types/classes/CDemonRenderer.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CDoor.h"
#include "types/classes/CDraculaBride.h"
#include "types/classes/CDrawSurface.h"
#include "types/classes/CDrip.h"
#include "types/classes/CDrone.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CFileFinder.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CPackedBitmap.h"
#include "types/classes/CVector2i.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/funcdefs/FileSearchHandler.h"
#include "types/funcdefs/RenderScanlineFunc.h"
#include "types/structs/SCameraViewportState.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SEdgeData.h"
#include "types/structs/SFace.h"
#include "types/structs/SFoundFileInfo.h"
#include "types/structs/SFreaky.h"
#include "types/structs/SInputFace.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SPoint2i.h"
#include "types/structs/SRGBColorPalette.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/STrianglePackedIndices.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x480000
// =============================================================================

void __cdecl core_door_cpp_CDoor_process_FUN_004800c0(CDoor *this_ptr,float delta_time);
int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_004807d0(CDoor *this_ptr);
void __cdecl core_door_cpp_CDoor_renderBackground_FUN_004809e0(CDoor *this_ptr,int layer_flag);
CBoundingBox3D * __cdecl core_door_cpp_CDoor_getBoundingBox_FUN_00480a50(CDoor *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_door_cpp_CDoor_serialize_FUN_00480aa0(CDoor *this_ptr);
int __cdecl core_door_cpp_CDoor_hasCollision_FUN_00480d90(CDoor *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_door_cpp_CDoor_getGroundType_FUN_00480dd0(CDoor *this_ptr);
void __cdecl core_door_cpp_CDoor_FUN_00480de0(CDoor *this_ptr);
int __cdecl core_door_cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00480df0(CDoor *this_ptr);
int __cdecl core_door_cpp_CDoor_allowBulletHoles_FUN_00480e00(CDoor *this_ptr);
float * __cdecl core_door_cpp_CDoor_getOpenStandPos_FUN_00480e20(CDoor *this_ptr);
void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00481020(CDoor *this_ptr);
int __cdecl core_door_cpp_CDoor_getMoveType_FUN_00481070(CDoor *this_ptr);
void __cdecl core_door_cpp_CDoor_FUN_00481210(CDoor *this_ptr);
void core_door_cpp_FUN_00481250(void);
int __cdecl core_door_cpp_FUN_004812b0(void);
void __cdecl core_door_cpp_CDoor_getPropertyList_FUN_00481320(CDoor *this_ptr,CActorPropertyList *property_list);
void __cdecl core_door_cpp_CDoor_processInEditor_FUN_00481590(CDoor *this_ptr);
void __cdecl core_door_cpp_CDoor_writeDependencies_FUN_00481630(CDoor *this_ptr,_FILE *file_handle);
undefined4 core_door_cpp_FUN_00481650(void);
CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00481670(CDoor *this_ptr,uint d1,uint d2);
void __cdecl engine_dosio_c_getRelativeFilePath_FUN_004816c0(char *dest_path,char *directory,char *filename);
void __cdecl engine_dosio_c_addGetFileInfoHook_FUN_00481710(FileSearchHandler *handler);
int __cdecl engine_dosio_c_findFile_FUN_00481760(SFoundFileInfo *context);
int __cdecl engine_dosio_c_findFileNormally_FUN_004817c0(SFoundFileInfo *info);
int __cdecl engine_dosio_c_getFileSize_FUN_00481880(char *directory,char *filename);
uint __cdecl engine_dosio_c_getFileTimestamp_FUN_004818d0(char *directory_path,char *filename);
int __cdecl engine_dosio_c_copyFileTimestamp_FUN_00481910(char *source_file,char *dest_file);
int __cdecl engine_dosio_c_getFileTimestamp_FUN_00481960(char *directory,char *filename);
int __cdecl engine_dosio_c_setFileAttributes_FUN_004819f0(char *filename,byte flags);
int __cdecl engine_dosio_c_truncateFile_FUN_00481a20(_FILE *file_handle,long new_size_bytes);
_FILE * __cdecl engine_dosio_c_getFile_FUN_00481a50(char *directory,char *filename,char *mode);
void __cdecl engine_dosio_c_reopenFileStream_FUN_00481b50 (char *directory_path,char *filename,byte file_mode_flags,ifstream *file_stream);
CFileFinder * __cdecl engine_dosio_c_CFileFinder_ctor_FUN_00481c30(CFileFinder *this_ptr);
CFileFinder * __cdecl engine_dosio_c_CFileFinder_dtor_FUN_00481c50(CFileFinder *this_ptr,uint d1);
int __cdecl engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(CFileFinder *this_ptr,char *search_pattern);
int __cdecl engine_dosio_c_CFileFinder_findNext_FUN_00481cf0(CFileFinder *this_ptr);
void __cdecl engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70(CFileFinder *this_ptr);
void __cdecl engine_dosio_c_CFileFinder_reset_FUN_00481db0(CFileFinder *this_ptr);
void __cdecl engine_dosio_c_CFileFinder_convertStruct_FUN_00481dc0 (CFileFinder *finder,LPWIN32_FIND_DATAA find_data);
void __cdecl engine_dosio_c_splitPath_FUN_00481f20 (char *full_path,char *drive,char *directory,char *filename,char *extension);
void __cdecl engine_dosio_c_makePath_FUN_00481f50 (char *full_path,char *drive,char *directory,char *filename,char *extension);
void __cdecl engine_dosio_c_ensureTrailingSlash_FUN_00481f80(char *input_path,char *drive,char *output_path);
void __cdecl engine_dosio_c_removeFileExtension_FUN_00482040(char *source_path,char *destination_buffer);
void __cdecl engine_dosio_c_changeFileExtension_FUN_00482050 (char *source_path,char *destination_buffer,char *new_extension);
int __cdecl engine_dosio_c_getFullPath_FUN_004820c0(char *output_path,char *input_path);
CDemonPart * __cdecl core_dpart_cpp_CDemonPart_ctor_FUN_00482110(CDemonPart *this_ptr);
CDemonPart * __cdecl core_dpart_cpp_CDemonPart_dtor_FUN_00482160(CDemonPart *this_ptr);
void __cdecl core_dpart_cpp_CDemonPart_alloc_FUN_00482180(CDemonPart *this_ptr);
void __cdecl core_dpart_cpp_CDemonPart_free_FUN_004822b0(CDemonPart *this_ptr);
void __cdecl core_dpart_cpp_CDemonPart_write_FUN_00482330(CDemonPart *this_ptr,_FILE *file_handle);
void __cdecl core_dpart_cpp_CDemonPart_load_FUN_00482490(CDemonPart *this_ptr);
void __cdecl core_dpart_cpp_CDemonPart_save_FUN_004824c0(CDemonPart *this_ptr);
void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(CDemonPart *this_ptr);
void __cdecl core_dpart_cpp_CDemonPart_loadFromFile_FUN_004825c0 (CDemonPart *this_ptr,_FILE *file_handle,CVector3f *offset_position);
void __cdecl core_dpart_cpp_CDemonPart_renderFaces_FUN_004828b0(CDemonPart *this_ptr);
int __cdecl core_dpart_cpp_CDemonPart_importTriangleMesh_FUN_00482a10 (CDemonPart *this_ptr,int triangle_count,int enable_alloc,int source_triangle_count, CDemonTriangle *triangle_data);
void __cdecl core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40 (CDemonPart *this_ptr,int enable_vertex_reduction,int enable_polygon_optimize);
void __cdecl core_dpart_cpp_setupTriangleEdgeInterpolation_FUN_00482fb0(SEdgeData *vertex_a,SEdgeData *vertex_b);
void __cdecl core_dpart_cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210(SEdgeData *vertex_a,SEdgeData *vertex_b);
SEdgeData * __cdecl core_dpart_cpp_findEdgeByYStart_FUN_00483330(int scanline_y,SEdgeData *exclude_edge);
void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00483370(int *vertex_indices,int vertex_count);
void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_004839f0(CVector3i *vertex_indices,int vertex_count);
void __cdecl core_dracbrid_cpp_staticInit_FUN_00483ef0(void);
CDraculaBride * __cdecl core_dracbrid_cpp_factoryFunc_FUN_00483f80(void);
CDemonActorType * core_dracbrid_cpp_FUN_00483fb0(void);
CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_00483fc0(CDraculaBride *this_ptr);
void core_dracbrid_cpp_DraculaBrideModels_FUN_004840b0(void);
void core_dracbrid_cpp_FUN_00484410 (uint param_1,int param_2,undefined4 param_3,int param_4,CEnemy *param_5, float param_6);
void core_dracbrid_cpp_FUN_004858f0(void);
void core_dracbrid_cpp_FUN_00485b20(void);
int core_dracbrid_cpp_FUN_00485bc0(void);
int __cdecl core_dracbrid_cpp_CDraculaBride_renderOpaque_FUN_00485be0(CDraculaBride *this_ptr);
void core_dracbrid_cpp_CDraculaBride_load_FUN_00485dd0(void);
void core_dracbrid_cpp_ShotThruHeart_FUN_00486020(void);
void core_dracbrid_cpp_FUN_00486070(void);
undefined4 core_dracbrid_cpp_FUN_00486320(void);
undefined4 core_dracbrid_cpp_FUN_00486360(void);
float * core_dracbrid_cpp_FUN_00486430(void);
void core_dracbrid_cpp_FUN_004864c0(void);
void core_dracbrid_cpp_FUN_004869a0(void);
void core_dracbrid_cpp_FUN_00486c90(void);
void core_dracbrid_cpp_FUN_00486d00(void);
SFreaky * __cdecl core_dracbrid_cpp_ctor_FUN_00486d30(SFreaky *this_ptr);
SFreaky * __cdecl core_dracbrid_cpp_dtor_FUN_00486d50(SFreaky *this_ptr);
CDraculaBride * __cdecl core_dracbrid_cpp_dtor_FUN_00486d70 (CDraculaBride *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8);
void core_dracbrid_cpp_FUN_00486e30(void);
void core_dracbrid_cpp_FUN_00486e50(void);
CDrawSurface * core_dracbrid_cpp_FUN_00486e70(void);
CDrawSurface * __cdecl cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0 (CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_init_FUN_00486ee0 (CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(int color_value);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(int red,int green,int blue);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorBlack_FUN_00487380(void);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorWhite_FUN_00487390(void);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorRed_FUN_004873b0(void);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorGreen_FUN_004873d0(void);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorBlue_FUN_004873f0(void);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorYellow_FUN_00487410(void);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorMagenta_FUN_00487430(void);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorCyan_FUN_00487450(void);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorDarkGray_FUN_00487470(void);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorGray_FUN_00487480(void);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorLightGray_FUN_004874a0(void);
void __cdecl cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0(CBitFont *font_ptr);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface *this_ptr,int x,int y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630 (int start_x,int end_x,int y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730 (CDrawSurface *this_ptr,int center_x,int center_y,int radius);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820 (CDrawSurface *this_ptr,int x,int y,int radius);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850 (CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880 (CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0 (CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0 (CDrawSurface *this_ptr,int x,int y,int width,int height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00487990 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClippedDashedLine_FUN_00487a30 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_00487bc0 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
char __cdecl cockpit_drawsurf_cpp_computeCohenSutherlandOutcode_FUN_00487de0 (int point_x,int point_y,int clip_left,int clip_top,int clip_right,int clip_bottom);
int __cdecl cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_00487e20 (CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top, int clip_right,int clip_bottom);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110 (CDrawSurface *this_ptr,int start_x,int y,int end_x);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_00488230 (CDrawSurface *this_ptr,int x,int start_y,int end_y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0 (CDrawSurface *this_ptr,int x,int y,int width,int height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(CDrawSurface *this_ptr);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredRectangle_FUN_00488550 (CDrawSurface *this_ptr,int center_x,int center_y,int width,int height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int border_width,int border_height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_00488630 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawFullSurface_FUN_004886a0(CDrawSurface *this_ptr);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredRectangle_FUN_004886c0 (CDrawSurface *this_ptr,int center_x,int center_y,int width,int height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawInsetRectangle_FUN_00488740 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int inset_x,int inset_y);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990(CDrawSurface *this_ptr);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_004889b0 (CDrawSurface *this_ptr,int center_x,int center_y,int width,int height);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_00488a30 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int inset_x,int inset_y);
int __cdecl cockpit_drawsurf_cpp_getDashLength_FUN_00488a90(void);
float __cdecl cockpit_drawsurf_cpp_getDashAnimationThreshold_FUN_00488aa0(void);
void __cdecl cockpit_drawsurf_cpp_setDashLength_FUN_00488ab0(int length);
void __cdecl cockpit_drawsurf_cpp_setDashAnimationThreshold_FUN_00488ac0(float threshold);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillRectangle_FUN_00488ad0 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70(CDrawSurface *this_ptr);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90 (CDrawSurface *this_ptr,int x_offset,int y_offset,CPackedBitmap *bitmap_ptr);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillPoly_FUN_00488cd0 (CDrawSurface *this_ptr,int vertex_count,SPoint2i *vertices);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClosedPolyline_FUN_00489090 (CDrawSurface *this_ptr,int point_count,CVector2i *points);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text,int alignment_mode);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0 (CDrawSurface *this_ptr,int x,int y,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420 (CDrawSurface *this_ptr,int x,int y,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450 (CDrawSurface *this_ptr,int x,int y,char *format,...);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0 (CDrawSurface *this_ptr,int x,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantWrapper_FUN_004894f0 (CDrawSurface *this_ptr,int x,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520 (CDrawSurface *this_ptr,int x,int y,int height,char *format,...);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_00489590 (CDrawSurface *this_ptr,int x,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0 (CDrawSurface *this_ptr,int x,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0 (CDrawSurface *this_ptr,int x,int y,int height,char *format,...);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660 (CDrawSurface *this_ptr,int x,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_00489690 (CDrawSurface *this_ptr,int x,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0 (CDrawSurface *this_ptr,int x,int y,int height,char *format,...);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730 (CDrawSurface *this_ptr,int x,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_00489760 (CDrawSurface *this_ptr,int x,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790 (CDrawSurface *this_ptr,int x,int y,int height,char *format,...);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800 (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830 (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860 (CDrawSurface *this_ptr,int x,int y,int width,int height,char *format,...);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0 (CDrawSurface *this_ptr,int x,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_00489910 (CDrawSurface *this_ptr,int x,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940 (CDrawSurface *this_ptr,int x,int y,int height,char *format,...);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0 (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_00489a00 (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30 (CDrawSurface *this_ptr,int x,int y,int width,int height,char *format,...);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0 (CDrawSurface *this_ptr,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00489ad0 (CDrawSurface *this_ptr,int y,int height,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0 (CDrawSurface *this_ptr,int y,int height,char *format,...);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60 (CDrawSurface *this_ptr,int x,int y,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_00489b90 (CDrawSurface *this_ptr,int x,int y,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0 (CDrawSurface *this_ptr,int x,int y,char *format,...);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20 (CDrawSurface *this_ptr,char *text);
void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40 (CDrawSurface *this_ptr,char *format,...);
int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCharWidth_FUN_00489ca0(CDrawSurface *this_ptr,int char_code);
int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0(CDrawSurface *this_ptr);
int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_00489d00(CDrawSurface *this_ptr,char *text);
void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_00489d30(CBitFont *test_font);
int __cdecl cockpit_drawsurf_cpp_getFontMaxWidth_FUN_0048a6a0(CBitFont *font_ptr);
void __cdecl engine_drender_cpp_staticInit_FUN_0048a6b0(void);
void __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_0048a6c0(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionMode_FUN_0048a700(CDemonRenderer *this_ptr,int mode);
void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 (CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices);
void __cdecl engine_drender_cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
int __cdecl engine_drender_cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
int __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info);
void __cdecl engine_drender_cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130 (CDemonRenderer *this_ptr,CVector3i *origin);
void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 (CDemonRenderer *this_ptr,CVector3i *point_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0 (CDemonRenderer *this_ptr,CVector3i *rotation);
void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200 (CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix,CVector3f *rotation_angles);
void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420 (CDemonRenderer *this_ptr,CVector3f *input_point);
void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 (CDemonRenderer *this_ptr,CVector3f *world_position);
void __cdecl engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 (CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation);
void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 (CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation);
void __cdecl engine_drender_cpp_CDemonRenderer_matrixPush_FUN_0050d620(void);
void __cdecl engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720(void);
void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 (CDemonRenderer *this_ptr,float field_of_view);
void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670 (CDemonRenderer *this_ptr,float scale_factor);
void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0048c690 (CDemonRenderer *this_ptr,float intensity);
void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0 (CDemonRenderer *this_ptr,CVector3i *direction);
void __cdecl engine_drender_cpp_scaleAndSetDirectionalLight_FUN_0048c6e0(CVector3f *light_direction);
void __cdecl engine_drender_cpp_calculateVertexLight_FUN_0048c740(int vertex_index,CVector3i *vertex_position);
CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760 (CDemonRenderer *this_ptr,CVector3i *output);
float * __cdecl engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 (CDemonRenderer *this_ptr,float *output);
CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 (CDemonRenderer *this_ptr,CVector3i *output);
float * __cdecl engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 (CDemonRenderer *this_ptr,float *output);
float __cdecl engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890 (CDemonRenderer *this_ptr,int x,int y,int width,int height);
void __cdecl engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,RenderScanlineFunc *scanline_renderer );
void __cdecl engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 (CDemonRenderer *this_ptr,int color);
void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970 (CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component);
void __cdecl engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0 (CDemonRenderer *this_ptr,int enabled);
void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 (CDemonRenderer *this_ptr,int state_flag);
void __cdecl engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer *this_ptr,int blend_mode);
void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 (CDemonRenderer *this_ptr,int render_alpha);
void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70 (CDemonRenderer *this_ptr,float render_alpha);
void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 (CDemonRenderer *this_ptr,int enabled);
void __cdecl engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer *this_ptr,int value);
int __cdecl engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 (CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2);
void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(CDemonRenderer *this_ptr,int alpha_mask);
int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10 (CDemonRenderer *this_ptr,int enabled);
int __cdecl engine_drender_cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count, int render_flags);
int __cdecl engine_drender_cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count, int render_flags);
int __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count, int render_flags,int primitive_stride);
void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0048d170 (CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 (CDemonRenderer *this_ptr,int *vertex_indices,int face_count,int vertices_per_face, int render_mode);
void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0 (CDemonRenderer *this_ptr,int enable_advanced_mode);
void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags);
void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0 (CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags);
int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20 (SFace **face_ptr_a,SFace **face_ptr_b);
int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50 (SFace **face_ptr_a,SFace **face_ptr_b);
void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer *this_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80 (CDemonRenderer *this_ptr,SMRGLTextureBasic *texture);
void __cdecl engine_drender_cpp_CDemonRenderer_updateTextureWithPalette_FUN_0048dc20 (CDemonRenderer *this_ptr,SMRGLTextureBasic *texture_to_load, SMRGLTextureBasic *texture_to_update);
void __cdecl engine_drender_cpp_CDemonRenderer_updateTexture_FUN_0048dc30 (CDemonRenderer *this_ptr,SMRGLTextureBasic *texture,SRGBColorPalette *palette);
int __cdecl engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50 (CDemonRenderer *this_ptr,SRenderVertex *vertex_ptr);
void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0 (CDemonRenderer *this_ptr,SCameraViewportState *camera_state);
void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20 (CDemonRenderer *this_ptr,SCameraViewportState *output_state);
void __cdecl core_drip_cpp_staticInit_FUN_0048df80(void);
CDrip * __cdecl core_drip_cpp_factoryFunc_FUN_0048dfc0(void);
CDemonActorType * core_drip_cpp_FUN_0048dff0(void);
CDrip * __cdecl core_drip_cpp_CDrip_ctor_FUN_0048e000(CDrip *this_ptr);
void core_drip_cpp_FUN_0048e0e0(void);
void core_drip_cpp_CDrip_load_FUN_0048e170(void);
void core_drip_cpp_FUN_0048e2a0(void);
void core_drip_cpp_FUN_0048e6b0(void);
int core_drip_cpp_FUN_0048e6c0(void);
float * core_drip_cpp_FUN_0048e740(void);
undefined4 core_drip_cpp_FUN_0048e820(void);
void core_drip_cpp_FUN_0048e830(void);
undefined4 core_drip_cpp_FUN_0048e8d0(void);
void core_drip_cpp_FUN_0048e930(void);
void core_drip_cpp_FUN_0048ea30(void);
void core_drip_cpp_FUN_0048ea60(void);
CDrip * __cdecl core_drip_cpp_dtor_FUN_0048ea90(CDrip *this_ptr,uint d1,uint d2);
void __cdecl core_drone_cpp_staticInit_FUN_0048eae0(void);
CDrone * __cdecl core_drone_cpp_factoryFunc_FUN_0048eb10(void);
CDemonActorType * core_drone_cpp_FUN_0048eb40(void);
CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_0048eb50(CDrone *this_ptr);
void core_drone_cpp_FUN_0048ebc0(void);
void core_drone_cpp_FUN_0048ec70(void);
void core_drone_cpp_CDrone_load_FUN_0048f2f0(void);
void core_drone_cpp_FUN_0048f360(void);
undefined4 core_drone_cpp_FUN_0048f4d0(void);
void core_drone_cpp_FUN_0048f520(void);
void core_drone_cpp_FUN_0048f560(void);
void core_drone_cpp_FUN_0048f570(void);
CDrone * __cdecl core_drone_cpp_dtor_FUN_0048f5a0 (CDrone *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8);
void __cdecl shape_dsemodel_cpp_CDSEModel_logVertex_FUN_0048f660(CDSEModel *this_ptr,int vertex_id);
int __cdecl shape_dsemodel_cpp_CDSEModel_convertVertex_FUN_0048f6f0(CDSEModel *this_ptr,int vertex_id);
void __cdecl shape_dsemodel_cpp_CDSEModel_processModelPart_FUN_0048f770(CDSEModel *this_ptr,uint part_index);
void __cdecl shape_dsemodel_cpp_CDSEModel_load_FUN_0048f960(CDSEModel *this_ptr);
void __cdecl shape_dsemodel_cpp_CDSEModel_centerModel_FUN_0048fa50(CDSEModel *this_ptr);
void __cdecl shape_dsemodel_cpp_CDSEModel_scaleZ_FUN_0048fcc0(CDSEModel *this_ptr,float scale_factor);
void __cdecl shape_dsemodel_cpp_CDSEModel_scaleX_FUN_0048fd70(CDSEModel *this_ptr,float scale_factor);
void __cdecl shape_dsemodel_cpp_CDSEModel_scaleY_FUN_0048fe20(CDSEModel *this_ptr,float scale_factor);
int __cdecl shape_dsemodel_cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0(CDSEModel *this_ptr,char *filename);

