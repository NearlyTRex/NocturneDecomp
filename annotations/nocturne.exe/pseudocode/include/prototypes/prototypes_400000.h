#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CAmmo.h"
#include "types/classes/CAmmoBox.h"
#include "types/classes/CAnvil.h"
#include "types/classes/CArmour.h"
#include "types/classes/CBackgroundActor.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CBox.h"
#include "types/classes/CClothList.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorTransformState.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CFlame.h"
#include "types/classes/CInventory.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CLocation.h"
#include "types/classes/CMotionController.h"
#include "types/classes/COrientation.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CRuleList.h"
#include "types/classes/CVector3f.h"
#include "types/enums/ECollisionType.h"
#include "types/enums/EGroundType.h"
#include "types/funcdefs/CDemonActor_FactoryFunc.h"
#include "types/structs/SActorRayHit.h"
#include "types/structs/SClipPlane.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCollisionReturnInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SFire.h"
#include "types/structs/SInteractionInfo.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SLaserInfo.h"
#include "types/structs/SLineStrip.h"
#include "types/structs/SMRGLAnimatedTexture.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x400000
// =============================================================================

void __cdecl engine_2d_c_initGraphicsSystem_FUN_00401010(void);
void __cdecl engine_2d_c_cleanupGraphicsSystem_FUN_004012a0(void);
void __cdecl engine_2d_c_drawAntialiasedCharShadow_FUN_004012d0(int char_code,int x_pos,int y_pos);
int __cdecl engine_2d_c_drawAntialiasedChar_FUN_004013d0(int char_code,int x_pos,int y_pos,int intensity_shift);
void __cdecl engine_2d_c_drawAntialiasedString_FUN_004014a0(char *text,int x_pos,int y_pos,int intensity_shift);
int __cdecl engine_2d_c_getAntialiasedStringWidth_FUN_004014f0(uchar *text);
void __cdecl engine_2d_c_plotPixel_FUN_00401530(int x,int y);
void __cdecl engine_2d_c_drawLine_FUN_004015a0(int x1,int y1,int x2,int y2);
void __cdecl engine_2d_c_plotPixelWithDepth_FUN_00401680(int x_coord,int y_coord,uint depth_value);
void __cdecl engine_2d_c_drawLine3D_FUN_00401710(int x1,int y1,uint z1,int x2,int y2,uint z2);
int __cdecl engine_2d_c_findBestPaletteMatch_FUN_00401850(int red,int green,int blue,int start_index,int end_index);
void __cdecl engine_2d_c_buildBlendTables_FUN_00401990(char *filename);
void __cdecl engine_2d_c_loadPaletteFile_FUN_00401bd0(char *filename);
int __cdecl engine_2d_c_drawCharacter_FUN_00401c40(int char_code,int x_pos,int y_pos);
void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401da0(int x_3d,int y_3d,int z_depth);
void __cdecl engine_2d_c_project3DPointClipped_FUN_00401df0(int x_3d,int y_3d,int z_depth);
void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401e30(int left,int top,int right,int bottom);
int __cdecl engine_2d_c_getStringWidth_FUN_00401ed0(char *text);
int __cdecl engine_2d_c_drawCharacterMasked_FUN_00401f30(int char_code,int x_pos,int y_pos);
int __cdecl engine_2d_c_drawCharacterMaskedColor_FUN_00402040(int char_code,int x_pos,int y_pos,int color);
int __cdecl engine_2d_c_drawCharacterHighlighted_FUN_004021a0(int char_code,int x_pos,int y_pos);
void __cdecl engine_2d_c_drawTextWrapped_FUN_00402290(char *text,int x_start,int y_start,int x_max,int y_max);
void __cdecl engine_2d_c_drawTextMultiline_FUN_00402320(char *text,int x_start,int y_start,int x_max,int y_max);
void __cdecl engine_2d_c_wrapTextToWidth_FUN_004023b0(char *input_text,int max_width,char *output_buffer);
void __cdecl engine_2d_c_drawTextWrappedColor_FUN_004024e0(char *text,int x_start,int y_start,int x_max,int y_max,int color);
void __cdecl engine_2d_c_drawTextMultilineColor_FUN_00402570(char *text,int x_start,int y_start,int x_max,int y_max,int color);
void __cdecl engine_2d_c_drawText_FUN_00402600(char *text,int x,int y);
void __cdecl engine_2d_c_drawStringMasked_FUN_00402660(char *text,int x_pos,int y_pos);
void __cdecl engine_2d_c_drawString_FUN_004026b0(char *text,int x_pos,int y_pos,int color);
void engine_2d_c_FUN_00402710(byte *param_1,int param_2,int param_3);
void __cdecl engine_2d_c_FUN_00402760(int x,int y,char *text);
void engine_2d_c_FUN_00402780(int param_1,int param_2,char *param_3);
void __cdecl engine_2d_c_FUN_004027f0(char *text,int x,int y);
void engine_2d_c_FUN_00402820(int param_1,int param_2,char *param_3);
void engine_2d_c_FUN_00402840(int param_1,int param_2,char *param_3);
void __cdecl engine_2d_c_FUN_004028b0(char *text,int x,int y);
void engine_2d_c_FUN_004028f0(int param_1,int param_2,char *param_3);
void engine_2d_c_FUN_00402910(int param_1,int param_2,char *param_3);
void __cdecl engine_2d_c_FUN_00402980(char *text,int left_x,int right_x,int y);
void engine_2d_c_FUN_004029c0(int param_1,int param_2,int param_3,char *param_4);
void engine_2d_c_FUN_004029f0(int param_1,int param_2,int param_3,char *param_4);
void __cdecl engine_2d_c_drawTextColor_FUN_00402a60(char *text,int x,int y);
void engine_2d_c_FUN_00402ad0(int param_1,int param_2,char *param_3);
void engine_2d_c_FUN_00402af0(int param_1,int param_2,char *param_3);
void __cdecl engine_2d_c_drawTextRightAlignedColor_FUN_00402b60(char *text,int x,int y);
void engine_2d_c_FUN_00402b90(int param_1,int param_2,char *param_3);
void engine_2d_c_FUN_00402bb0(int param_1,int param_2,char *param_3);
void __cdecl engine_2d_c_drawTextCenteredAtColor_FUN_00402c20(char *text,int x,int y);
void engine_2d_c_FUN_00402c60(int param_1,int param_2,char *param_3);
void engine_2d_c_FUN_00402c80(int param_1,int param_2,char *param_3);
void __cdecl engine_2d_c_drawTextCenteredColor_FUN_00402cf0(char *text,int left_x,int right_x,int y);
void __cdecl engine_2d_c_FUN_00402d30(int left_x,int right_x,int y,char *text);
void engine_2d_c_FUN_00402d60(int param_1,int param_2,int param_3,char *param_4);
int __cdecl engine_2d_c_getTextWrapEnabled_FUN_00402e20(void);
void __cdecl engine_2d_c_setTextWrapEnabled_FUN_00402e30(int enabled);
void __cdecl engine_2d_c_disableTextWrap_FUN_00402e50(void);
int __cdecl engine_2d_c_getTextColor_FUN_00402e60(void);
void __cdecl engine_2d_c_setTextColor_FUN_00402e70(int color);
void engine_2d_c_FUN_00402e90(int param_1);
void engine_2d_c_FUN_00403070(char *param_1,int param_2);
void __cdecl engine_2d_c_FUN_00403130(char *filename);
void engine_2d_c_FUN_004031a0(int param_1);
void __cdecl engine_2d_c_loadLightTable_FUN_00403460(char *filename);
void __cdecl engine_2d_c_FUN_00403500(char *filename);
void __cdecl engine_2d_c_buildColorLookupTable_FUN_00403570(void);
void __cdecl engine_2d_c_loadOrBuildColorMap_FUN_00403630(char *filename);
void __cdecl engine_2d_c_resetGraphicsSystem_FUN_00403760(void);
void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00403770(void);
void __cdecl engine_2d_c_draw320x200SizeDot_FUN_00403780(int x_3d,int y_3d,int z_depth);
int __cdecl engine_2d_c_computeOutcode_FUN_00403900(int x,int y,int x_min,int y_min,int x_max,int y_max);
void __cdecl engine_2d_c_clipLineGlobal_FUN_00403940(int x1,int y1,int x2,int y2);
void __cdecl engine_2d_c_clipAndDrawLine_FUN_00403990(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max);
void __cdecl engine_2d_c_drawHLine_FUN_00403bd0(int x1,int y,int x2);
void __cdecl engine_2d_c_drawVLine_FUN_00403ce0(int x,int y1,int y2);
void __cdecl engine_2d_c_drawRect_FUN_00403e10(int x1,int y1,int x2,int y2);
void __cdecl engine_2d_c_fillRectColor_FUN_00403e60(int x1,int y1,int x2,int y2,int color);
void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403ef0(int x1,int y1,int x2,int y2,int fill_color,int border_color);
void __cdecl engine_2d_c_clearInputAndWait_FUN_00403f50(void);
int __cdecl engine_2d_c_getInputWithPrompt_FUN_00403fb0(char *buffer,int max_length,int x,int y,char *prompt);
void __cdecl engine_2d_c_setSolidColor_FUN_00404090(int red_component,int green_component,int blue_component);
int __cdecl engine_2d_c_mapFrameBuffer_FUN_00404120(void *frame_buffer,int width,int height,int bits_per_pixel,int stride);
int __cdecl engine_2d_c_mapTextureFrameBuffer_FUN_00404340(void);
void __cdecl engine_2d_c_unmapFrameBuffer_FUN_00404360(void);
char * __cdecl engine_3d_c_FUN_00404430(void);
void __cdecl engine_3d_c_FUN_005458a0(void);
void __cdecl engine_3d_c_FUN_005458d0(void);
SMRGLHeaderExtended * __cdecl engine_3d_c_badMRGLStruct_FUN_004044a0(SMRGLHeaderExtended *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004044d0(CQuaternion4f *input_point);
SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00404530(SMRGLHeaderExtended *mrgl);
int __cdecl engine_3d_c_isVisiblePlane_FUN_00404610(SClipPlane *plane);
int __cdecl engine_3d_c_lookupLitColor_FUN_00404680(int color_index,int light_level);
void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_00404730(SMRGLHeaderExtended *mrgl);
SMRGLHeaderExtended * __cdecl engine_3d_c_processTextureCoordinates_FUN_00404790(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_004047e0(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogColorOp6_FUN_004048b0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedLitOp7_FUN_004049d0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedWrappedOp8_FUN_00404a70(SMRGLHeaderPrimitive *primitive);
int engine_3d_c_FUN_00404b10(int param_1);
SMRGLHeaderExtended * __cdecl engine_3d_c_processPolygonColor_FUN_00405140(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction3_FUN_004051e0(SMRGLHeaderExtended *primitive);
int engine_3d_c_FUN_00405200(int param_1);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLitOp14_FUN_00405240(SMRGLHeaderPrimitive *prim);
void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00405340(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedOp15_FUN_00405440(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction5_FUN_004054f0(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidLitClampedOp17_FUN_00405540(SMRGLHeaderPrimitive *prim);
int engine_3d_c_FUN_00405740(int param_1);
SMRGLHeaderExtended * __cdecl engine_3d_c_setRelativeCoord_FUN_00405750(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedOp21_FUN_004057a0(SMRGLHeaderPrimitive *primitive);
void __cdecl engine_3d_c_setActiveRenderColor_FUN_00405840(void);
SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00405870(SLineStrip *line_strip);
SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip3D_FUN_00405900(SLineStrip *line_strip);
SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction7_FUN_00405990(SMRGLHeaderExtended *primitive);
void engine_3d_c_FUN_004059c0(int param_1);
uint engine_3d_c_FUN_00405a60(int *param_1,int *param_2);
void engine_3d_c_FUN_00405ab0(int param_1,undefined4 param_2,undefined4 param_3);
void engine_3d_c_FUN_00405b30(void);
SMRGLHeaderExtended * engine_3d_c_FUN_00405b40(SMRGLHeaderExtended *param_1);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitNearPlaneOp35_FUN_00406010(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_004060b0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00406230(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogColorDepthOp27_FUN_00406320(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction8_FUN_004063c0(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_00406690(SMRGLAnimatedTexture *texture);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLitOp30_FUN_00406740(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_setVertexTextureU_FUN_00406840(SMRGLHeaderExtended *mrgl);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonDestReadBlendOp33_FUN_00406880(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLit_FUN_00406920(SMRGLHeaderPrimitive *prim);
int * engine_3d_c_FUN_00406a00(SMRGLHeaderPrimitive *param_1);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaTexturedNormalizedLit_FUN_00406ae0(SMRGLHeaderPrimitive *prim);
int * engine_3d_c_FUN_00406b80(SMRGLHeaderPrimitive *param_1);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_00406c60(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedPerspOp39_FUN_00406ea0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonDepthWritePass_FUN_00406f30(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00406fd0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_00407070(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedDepthOp42_FUN_004072d0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedDepthWriteOp43_FUN_00407370(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedDepthWriteOp44_FUN_00407410(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedOp45_FUN_004074b0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedOp46_FUN_00407550(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedDepthWriteOp47_FUN_004075f0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedLitOp48_FUN_00407690(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedDepthLitOp49_FUN_00407740(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedOp50_FUN_004077e0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_00407880(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_00407cc0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonDestReadBlendDepthLitOp55_FUN_00407d90(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00407e50(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidLitOp62_FUN_00408010(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsLitOp57_FUN_00408130(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonVertexAlphaLitOp60_FUN_004081d0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonBlendedLitOp63_FUN_00408270(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlphaFromBlock_FUN_00408350(SMRGLHeaderExtended *block);
int __cdecl engine_3d_c_setRenderAlpha_FUN_00408370(int alpha_color_value);
void __cdecl engine_3d_c_setBlendMode_FUN_004083c0(int blend_mode);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00408a60(SMRGLHeaderPrimitive *primitive);
void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00408c10(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags);
void __cdecl engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00408d10(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags);
void engine_3d_c_FUN_00408e80(int *param_1);
void __cdecl engine_3d_c_flushRenderQueue_FUN_00408f50(void);
void engine_3d_c_FUN_00408fc0(SMRGLHeaderPrimitive *param_1);
void engine_3d_c_FUN_00409210(int param_1,int param_2);
void __cdecl engine_3d_c_clipAndDrawLine2D_FUN_00409290(SRenderVertex vertex1,SRenderVertex vertex2);
void engine_3d_c_FUN_00409510(int param_1,int param_2);
void __cdecl engine_3d_c_clipAndDrawLine3D_FUN_00409590(SRenderVertex vertex1,SRenderVertex vertex2);
void __cdecl core_actor_cpp_staticInit_FUN_00409840(void);
float __cdecl core_actor_cpp_rayCylinderIntersect_FUN_00409860(SCollisionInfo *collision_info,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);
void __cdecl core_actor_cpp_destroyActor_FUN_00409cd0(CDemonActor *actor);
CDemonActorTransformState * __cdecl core_actor_cpp_initTransformCache_FUN_00409cf0(CDemonActorTransformState *transform_cache);
CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor *this_ptr);
CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor *this_ptr,uint flags);
void __cdecl core_actor_cpp_CDemonActor_process_FUN_00409ed0(CDemonActor *this_ptr,float delta_time);
int __cdecl core_actor_cpp_CDemonActor_returnZero_FUN_00409f00(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_renderBackground_FUN_00409f10(CDemonActor *this_ptr,int layer_flag);
void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor *actor);
void __cdecl core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor *this_ptr);
CDemonActorType * __cdecl core_actor_cpp_CDemonActor_getActorType_FUN_00409f70(CDemonActor *this_ptr);
char * __cdecl core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor *this_ptr);
CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getBoundingBox_FUN_0040a060(CDemonActor *this_ptr,CBoundingBox3D *out_box);
ECollisionType __cdecl core_actor_cpp_CDemonActor_getCollisionType_FUN_0040a090(CDemonActor *this_ptr,SCollisionInfo *collision_info);
float __cdecl core_actor_cpp_CDemonActor_customRayIntersect_FUN_0040a0a0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);
void __cdecl core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_0040a0d0(CDemonActor *this_ptr,SIntersectXZCylinder *cylinder);
int __cdecl core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_0040a100(CDemonActor *this_ptr,CVector3f *position,float search_radius,float *out_floor_height );
int __cdecl core_actor_cpp_CDemonActor_returnZero_FUN_0040a130(CDemonActor *this_ptr);
float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140(CDemonActor *this_ptr,float radius,CVector3f *out_normal);
CVector3f * __cdecl core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor *this_ptr,CVector3f *output,CVector3f *input);
CVector3f * __cdecl core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(CDemonActor *this_ptr,CVector3f *output_vector,CVector3f *input_vector);
CVector3f * __cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor *this_ptr,CVector3f *output_world_point,CVector3f *input_local_point);
CVector3f * __cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor *this_ptr,CVector3f *output_local_point,CVector3f *input_world_point);
uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_0040a2e0(CDemonActor *this_ptr,char *sound_name);
uint __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_0040a300(CDemonActor *this_ptr,char *sound_name);
uint __cdecl core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_0040a320(CDemonActor *this_ptr,char *sound_name,float volume);
uint __cdecl core_actor_cpp_CDemonActor_playAmbientSoundWithDelay_FUN_0040a350(CDemonActor *this_ptr,char *sound_name,float delay);
void __cdecl core_actor_cpp_CDemonActor_doNothing_FUN_0040a380(CDemonActor *this_ptr);
int __cdecl core_actor_cpp_CDemonActor_testPointInCylinder_FUN_0040a390(CDemonActor *this_ptr,SCollisionReturnInfo *collision_info,float tolerance);
int __cdecl core_actor_cpp_CDemonActor_testLineIntersection_FUN_0040a420(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point);
CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540(CDemonActor *this_ptr,CBoundingBox3D *output_bbox,SCollisionInfo *collision_info,int bounding_box_type);
float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox);
void __cdecl core_actor_cpp_CDemonActor_onLaserHit_FUN_0040ab10(CDemonActor *this_ptr,SLaserInfo *laser_info);
void __cdecl core_actor_cpp_CDemonActor_updateCollisionData_FUN_0040ab30(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_draw3DPointMarker_FUN_0040ab70(CVector3f *world_position,int marker_color);
void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_0040add0(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_0040b090(CDemonActor *this_ptr,int fly_count,float spawn_radius);
void __cdecl core_actor_cpp_CDemonActor_calculateChecksum_FUN_0040b0d0(CDemonActor *this_ptr,uint *out_crc);
float __cdecl core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_0040b110(CDemonActor *this_ptr,CDemonActor *querying_actor,CVector3f *query_position);
int __cdecl core_actor_cpp_CDemonActor_processActionButton_FUN_0040b120(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150(CDemonActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation);
void __cdecl core_actor_cpp_CDemonActor_onPickup_FUN_0040b1a0(CDemonActor *this_ptr,CDemonActor *owner);
void __cdecl core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040b1b0(CDemonActor *this_ptr,SInteractionInfo *out_info);
void __cdecl core_actor_cpp_CDemonActor_stopInteraction_FUN_0040b1f0(CDemonActor *this_ptr,CDemonActor *user);
int __cdecl core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040b200(CDemonActor *this_ptr);
int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040b300(CDemonActor *this_ptr,int hit_type);
void __cdecl core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim);
void __cdecl core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040bce0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim);
char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040bd40(char *source_string);
void core_actor_cpp_FUN_0040bd90(char *param_1);
int __cdecl core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(int indent_delta);
void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040c040(CDemonActor *this_ptr,_FILE *file_handle);
void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040c160(CDemonActor *this_ptr,_FILE *file_handle);
void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040c320(char *property_description,char *property_type);
void __cdecl core_actor_cpp_archiveDescription_FUN_0040c3a0(char *property_description,char *property_name);
void __cdecl core_actor_cpp_archiveVector_FUN_0040c450(CVector3f *vector_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveOrientation_FUN_0040c4f0(COrientation *orient_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveLocation_FUN_0040c590(CLocation *location_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040c630(CQuaternion4f *quat_ptr,char *property_type);
void __cdecl core_actor_cpp_archiveString_FUN_0040c6d0(char *string_buffer,char *property_type);
void __cdecl core_actor_cpp_archiveLocalizedString_FUN_0040c7f0(char *string_buffer,char *localization_key);
void __cdecl core_actor_cpp_archiveFloat_FUN_0040c880(float *float_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveInteger_FUN_0040c900(int *int_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveActor_FUN_0040c980(CDemonActor **actor_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance *model_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(CDeformableModelInstance *model_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveMotionState_FUN_0040cb00(CMotionController *motion_controller,char *property_name);
void __cdecl core_actor_cpp_archivePartStatus_FUN_0040cbf0(CDeformableModelInstance *model_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveBox_FUN_0040ce80(CBox *box_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveClothList_FUN_0040cf70(CClothList *cloth_list,char *property_name);
void __cdecl core_actor_cpp_archiveRules_FUN_0040d110(CRuleList *rules,char *property_name);
void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor *this_ptr);
CDemonActorType * __cdecl core_actor_cpp_registerActorClass_FUN_0040d3f0(CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factor_func,int *max_version,int version,CDemonActorType *parent_class_info);
template<typename T_func0>
inline CDemonActorType * core_actor_cpp_registerActorClass_FUN_0040d3f0(CDemonActorType *this_ptr,char *class_name,T_func0 factor_func,int *max_version,int version,CDemonActorType *parent_class_info) {
    return core_actor_cpp_registerActorClass_FUN_0040d3f0(this_ptr, class_name, (CDemonActor_FactoryFunc *)factor_func, max_version, version, parent_class_info);
}
CDemonActorType * __cdecl core_actor_cpp_getActorClassByName_FUN_0040d4d0(char *className);
CDemonActor * __cdecl core_actor_cpp_createActorByName_FUN_0040d540(char *class_name);
int __cdecl core_actor_cpp_matchClassTerm_FUN_0040d600(CDemonActorType *type_ptr,char **parse_pos);
int __cdecl core_actor_cpp_matchClassExpression_FUN_0040d720(CDemonActorType *type_ptr,char **parse_pos);
int __cdecl core_actor_cpp_isOfClass_FUN_0040d7e0(CDemonActor *actor_ptr,char *class_name);
int __cdecl core_actor_cpp_checkNameHash_FUN_0040d810(CDemonActorType *type_ptr,uint name_hash);
int __cdecl core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040d830(CDemonActor *this_ptr);
int __cdecl core_actor_cpp_matchesClassName_FUN_0040d840(CDemonActorType *type_ptr,char *class_name);
int __cdecl core_actor_cpp_isOfClassHash_FUN_0040d860(CDemonActor *actor_ptr,uint class_name_hash);
CDemonActor * __cdecl core_actor_cpp_castToClassHash_FUN_0040d890(CDemonActor *actor_ptr,uint class_name_hash);
void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040d8c0(void);
void __cdecl core_actor_cpp_resetActorTypeInfo_FUN_0040d8f0(void);
int __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040d930(CDemonActor *this_ptr,float volume);
int __cdecl core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040d9f0(CDemonActor *this_ptr,CVector3f *location,float volume);
uint __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040db50(CDemonActor *this_ptr,CVector3f *position,EGroundType ground_type,float volume);
void __cdecl core_actor_cpp_setRandomSeed_FUN_0040dd20(uint seed_value);
uint __cdecl core_actor_cpp_generateRandomValue_FUN_0040dd30(void);
float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value,float max_value);
int __cdecl core_actor_cpp_getRandomInt_FUN_0040de00(int min_value,int max_value);
int __cdecl core_actor_cpp_randomChance_FUN_0040dea0(float probability_threshold);
float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians);
void __cdecl core_actor_cpp_crc32ProcessByte_FUN_0040dfc0(uint *crc_state,byte input_byte);
void __cdecl core_actor_cpp_crc32ProcessBuffer_FUN_0040e0a0(uint *crc_state,byte *buffer,int buffer_length);
void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040e0e0(uint *crc_state,int value);
void __cdecl core_actor_cpp_crc32ProcessVector_FUN_0040e100(uint *crc_state,CVector3f *vector);
void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040e120(uint *crc_state,char *string);
CVector3f * __cdecl core_actor_cpp_CVector_ctor_FUN_0040e160(CVector3f *this_ptr);
CVector3f * __cdecl core_actor_cpp_CVector_dtor_FUN_0040e170(CVector3f *this_ptr,uint flags);
void __cdecl core_actor_cpp_copyVector_FUN_0040e180(CVector3f *dst_ptr,CVector3f *src_ptr);
float __cdecl core_actor_cpp_CVector3f_length_FUN_0040e1a0(CVector3f *this_ptr);
void core_actor_cpp_FUN_0040e1cc(void);
SDamageInfo * __cdecl core_actor_cpp_SDamageInfo_dtor_FUN_0040e220(SDamageInfo *this_ptr,uint flags);
CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_ctor_FUN_0040e230(CBoundingBox3D *this_ptr);
CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_copy_FUN_0040e240(CBoundingBox3D *this_ptr,CBoundingBox3D *other);
CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_dtor_FUN_0040e290(CBoundingBox3D *this_ptr,uint flags);
CVector3f * __cdecl core_actor_cpp_CVector_copy_FUN_0040e2a0(CVector3f *this_ptr,CVector3f *other);
void core_actor_cpp_FUN_0040e2ce(void);
void core_actor_cpp_FUN_0040e2e1(undefined4 *param_1);
void core_actor_cpp_FUN_0040e2f1(undefined4 *param_1);
CVector3f * __cdecl core_actor_cpp_CVector3f_arrdtor_FUN_0040e300(CVector3f *this_ptr,uint flags);
CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(CAlphaBitmap *this_ptr);
CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(CAlphaBitmap *this_ptr,uint flags);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(CAlphaBitmap *this_ptr);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap *this_ptr,char *filename,int width,int height);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(CAlphaBitmap *this_ptr,int x,int y,int alpha);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040e8c0(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040eab0(CAlphaBitmap *this_ptr);
void engine_alphabit_cpp_FUN_0040eadd(void);
void __cdecl core_ammo_cpp_staticInit_FUN_0040eb10(void);
CAmmo * __cdecl core_ammo_cpp_factoryFunc_FUN_0040eb40(void);
CDemonActorType * __cdecl core_ammo_cpp_CAmmo_getActorType_FUN_0040eb60(CAmmo *this_ptr);
CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(CAmmo *this_ptr);
void __cdecl core_ammo_cpp_CAmmo_setup_FUN_0040ec00(CAmmo *this_ptr);
void __cdecl core_ammo_cpp_CAmmo_process_FUN_0040ec20(CAmmo *this_ptr,float delta_time);
int __cdecl core_ammo_cpp_CAmmo_renderOpaque_FUN_0040ec30(CAmmo *this_ptr);
CBoundingBox3D * __cdecl core_ammo_cpp_CAmmo_getBoundingBox_FUN_0040eca0(CAmmo *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040ecf0(CAmmo *this_ptr);
ECollisionType __cdecl core_ammo_cpp_CAmmo_getCollisionType_FUN_0040ed50(CAmmo *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo *this_ptr,char *weapon_class_name);
void __cdecl core_ammo_cpp_CAmmo_setWeaponAmmo_FUN_0040ef60(CAmmo *this_ptr,int ammo_count);
int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_0040ef70(CAmmo *this_ptr,CDemonActor *picker);
CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040ef90(CAmmo *this_ptr,uint flags);
void __cdecl core_ammobox_cpp_staticInit_FUN_0040efe0(void);
CAmmoBox * __cdecl core_ammobox_cpp_factoryFunc_FUN_0040f010(void);
CDemonActorType * __cdecl core_ammobox_cpp_CAmmoBox_getActorType_FUN_0040f030(CAmmoBox *this_ptr);
CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_ctor_FUN_0040f040(CAmmoBox *this_ptr);
void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_0040f0f0(CAmmoBox *this_ptr);
void __cdecl core_ammobox_cpp_CAmmoBox_process_FUN_0040f120(CAmmoBox *this_ptr,float delta_time);
void __cdecl core_ammobox_cpp_CAmmoBox_openBox_FUN_0040f130(CAmmoBox *this_ptr,float open_pct);
void __cdecl core_ammobox_cpp_CAmmoBox_FUN_0040f1a0(CAmmoBox *this_ptr,CInventory *inventory);
int __cdecl core_ammobox_cpp_CAmmoBox_renderOpaque_FUN_0040f2b0(CAmmoBox *this_ptr);
CBoundingBox3D * __cdecl core_ammobox_cpp_CAmmoBox_getBoundingBox_FUN_0040f340(CAmmoBox *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_ammobox_cpp_CAmmoBox_archive_FUN_0040f390(CAmmoBox *this_ptr);
ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_0040f460(CAmmoBox *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_ammobox_cpp_CAmmoBox_canPickup_FUN_0040f480(CAmmoBox *this_ptr,CDemonActor *carrier);
CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_0040f4b0(CAmmoBox *this_ptr,uint flags);
void __cdecl core_anvil_cpp_staticInit_FUN_0040f500(void);
CAnvil * __cdecl core_anvil_cpp_factoryFunc_FUN_0040f530(void);
CDemonActorType * __cdecl core_anvil_cpp_CAnvil_getActorType_FUN_0040f550(CAnvil *this_ptr);
CAnvil * __cdecl core_anvil_cpp_CAnvil_ctor_FUN_0040f560(CAnvil *this_ptr);
void __cdecl core_anvil_cpp_CAnvil_setup_FUN_0040f5f0(CAnvil *this_ptr);
void __cdecl core_anvil_cpp_CAnvil_process_FUN_0040f610(CAnvil *this_ptr,float delta_time);
int __cdecl core_anvil_cpp_CAnvil_renderOpaque_FUN_0040f740(CAnvil *this_ptr);
void __cdecl core_anvil_cpp_CAnvil_archive_FUN_0040f7d0(CAnvil *this_ptr);
ECollisionType __cdecl core_anvil_cpp_CAnvil_getCollisionType_FUN_0040f850(CAnvil *this_ptr,SCollisionInfo *collision_info);
CBoundingBox3D * __cdecl core_anvil_cpp_CAnvil_getBoundingBox_FUN_0040f860(CAnvil *this_ptr,CBoundingBox3D *out_box);
CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040f8b0(CAnvil *this_ptr,uint flags);
void __cdecl core_armour_cpp_staticInit_FUN_0040f900(void);
CArmour * __cdecl core_armour_cpp_factoryFunc_FUN_0040f930(void);
CDemonActorType * __cdecl core_armour_cpp_CArmour_getActorType_FUN_0040f950(CArmour *this_ptr);
CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_0040f960(CArmour *this_ptr);
void __cdecl core_armour_cpp_CArmour_setup_FUN_0040fa00(CArmour *this_ptr);
void __cdecl core_armour_cpp_CArmour_process_FUN_0040fa20(CArmour *this_ptr,float delta_time);
void __cdecl core_armour_cpp_CArmour_archive_FUN_0040fb60(CArmour *this_ptr);
void __cdecl core_armour_cpp_CArmour_processDamage_FUN_0040fbc0(CArmour *this_ptr,SDamageInfo *damage_info);
int __cdecl core_armour_cpp_CArmour_getTargetPoints_FUN_0040fc00(CArmour *this_ptr,CVector3f *out_points_array);
ECollisionType __cdecl core_armour_cpp_CArmour_getCollisionType_FUN_0040fc10(CArmour *this_ptr,SCollisionInfo *collision_info);
CArmour * __cdecl core_armour_cpp_CArmour_dtor_FUN_0040fc30(CArmour *this_ptr,uint flags);
CEnemy * __cdecl core_armour_cpp_CEnemy_dtor_FUN_0040fcf0(CEnemy *this_ptr,uint flags);
SFire * __cdecl core_armour_cpp_SFire_dtor_FUN_0040fdb0(SFire *this_ptr,uint flags);
CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_0040fdc0(CFlame *this_ptr,uint flags);
CVector3f * __cdecl core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f *this_ptr,uint flags);
SFire * __cdecl core_armour_cpp_SFire_arrdtor_FUN_0040fe30(SFire *this_ptr,uint flags);
CFlame * __cdecl core_armour_cpp_CFlame_arrdtor_FUN_0040fe50(CFlame *this_ptr,uint flags);
void __cdecl core_backgnd_cpp_staticInit_FUN_0040fe70(void);
CBackgroundActor * __cdecl core_backgnd_cpp_factoryFunc_FUN_0040fea0(void);
CDemonActorType * __cdecl core_backgnd_cpp_CBackgroundActor_getActorType_FUN_0040fec0(CBackgroundActor *this_ptr);
CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040fed0(CBackgroundActor *this_ptr);
int __cdecl core_backgnd_cpp_CBackgroundActor_setup_FUN_0040ff30(CBackgroundActor *this_ptr);
void __cdecl core_backgnd_cpp_CBackgroundActor_process_FUN_0040ff70(CBackgroundActor *this_ptr,float delta_time);
void __cdecl core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_0040ff80(CBackgroundActor *this_ptr,int layer_flag);
int __cdecl core_backgnd_cpp_CBackgroundActor_renderOpaque_FUN_0040ffe0(CBackgroundActor *this_ptr);
CBoundingBox3D * __cdecl core_backgnd_cpp_CBackgroundActor_getBoundingBox_FUN_0040fff0(CBackgroundActor *this_ptr,CBoundingBox3D *out_box);

