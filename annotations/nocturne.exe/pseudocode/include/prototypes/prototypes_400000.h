#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CAmmo.h"
#include "types/classes/CAmmoBox.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CBox.h"
#include "types/classes/CCharacter.h"
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
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CRuleList.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EGroundType.h"
#include "types/funcdefs/CDemonActor_FactoryFunc.h"
#include "types/structs/SClipPlane.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCollisionReturnInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SFire.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x400000
// =============================================================================

void engine_2d_c_FUN_00401010(void);
void engine_2d_c_FUN_004012a0(void);
void engine_2d_c_FUN_004012d0(int param_1,int param_2,int param_3);
int engine_2d_c_FUN_004013d0(int param_1,int param_2,int param_3,byte param_4);
void engine_2d_c_FUN_004014a0(char *param_1,int param_2,undefined4 param_3,undefined4 param_4);
int engine_2d_c_FUN_004014f0(byte *param_1);
void __cdecl engine_2d_c_plotPixel_FUN_00401530(int x,int y);
void __cdecl engine_2d_c_drawLine_FUN_004015a0(int x1,int y1,int x2,int y2);
void __cdecl engine_2d_c_plotPixelWithDepth_FUN_00401680(int x_coord,int y_coord,uint depth_value);
void __cdecl engine_2d_c_drawLine3D_FUN_00401710(int x1,int y1,uint z1,int x2,int y2,uint z2);
int __cdecl engine_2d_c_findBestPaletteMatch_FUN_00401850(int red,int green,int blue,int start_index,int end_index);
void engine_2d_c_FUN_00401990(void);
void engine_2d_c_FUN_00401bd0(char *param_1);
int __cdecl engine_2d_c_drawCharacter_FUN_00401c40(int char_code,int x_pos,int y_pos);
void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401da0(int x_3d,int y_3d,int z_depth);
void engine_2d_c_project3DPointClipped_FUN_00401df0(int param_1,int param_2,int param_3);
void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401e30(int left,int top,int right,int bottom);
int __cdecl engine_2d_c_getStringWidth_FUN_00401ed0(char *text);
int __cdecl engine_2d_c_drawCharacterMasked_FUN_00401f30(int char_code,int x_pos,int y_pos);
int __cdecl engine_2d_c_drawCharacterMaskedColor_FUN_00402040(int char_code,int x_pos,int y_pos,int color);
int __cdecl engine_2d_c_drawCharacterHighlighted_FUN_004021a0(int char_code,int x_pos,int y_pos);
void __cdecl engine_2d_c_drawTextWrapped_FUN_00402290(char *text,int x_start,int y_start,int x_max,int y_max);
void __cdecl engine_2d_c_drawTextMultiline_FUN_00402320(char *text,int x_start,int y_start,int x_max,int y_max);
void engine_2d_c_wrapTextToWidth_FUN_004023b0(char *param_1,int param_2,char *param_3);
void __cdecl engine_2d_c_drawTextWrappedColor_FUN_004024e0(char *text,int x_start,int y_start,int x_max,int y_max,int color);
void __cdecl engine_2d_c_drawTextMultilineColor_FUN_00402570(char *text,int x_start,int y_start,int x_max,int y_max,int color);
void __cdecl engine_2d_c_drawText_FUN_00402600(char *text,int x,int y);
void engine_2d_c_drawStringMasked_FUN_00402660(byte *param_1,int param_2,int param_3);
void __cdecl engine_2d_c_drawString_FUN_004026b0(char *text,int x_pos,int y_pos,int color);
void engine_2d_c_FUN_00402710(byte *param_1,int param_2,int param_3);
void engine_2d_c_FUN_00402760(int param_1,int param_2,char *param_3);
void engine_2d_c_FUN_00402780(int param_1,int param_2,char *param_3);
void engine_2d_c_FUN_004027f0(char *param_1,int param_2,int param_3);
void engine_2d_c_FUN_00402820(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void engine_2d_c_FUN_00402840(undefined4 param_1,undefined4 param_2,char *param_3);
void engine_2d_c_FUN_004028b0(char *param_1,int param_2,int param_3);
void engine_2d_c_FUN_004028f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void engine_2d_c_FUN_00402910(undefined4 param_1,undefined4 param_2,char *param_3);
void engine_2d_c_FUN_00402980(char *param_1,int param_2,int param_3,int param_4);
void engine_2d_c_FUN_004029c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void engine_2d_c_FUN_004029f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4);
void __cdecl engine_2d_c_drawTextColor_FUN_00402a60(char *text,int x,int y);
void engine_2d_c_FUN_00402ad0(int param_1,int param_2,char *param_3);
void engine_2d_c_FUN_00402af0(int param_1,int param_2,char *param_3);
void __cdecl engine_2d_c_drawTextRightAlignedColor_FUN_00402b60(char *text,int x,int y);
void engine_2d_c_FUN_00402b90(int param_1,int param_2,char *param_3);
void engine_2d_c_FUN_00402bb0(int param_1,int param_2,char *param_3);
void engine_2d_c_drawTextCenteredAtColor_FUN_00402c20(char *param_1,int param_2,int param_3);
void engine_2d_c_FUN_00402c60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void engine_2d_c_FUN_00402c80(undefined4 param_1,undefined4 param_2,char *param_3);
void __cdecl engine_2d_c_drawTextCenteredColor_FUN_00402cf0(char *text,int left_x,int right_x,int y);
void engine_2d_c_FUN_00402d30(int param_1,int param_2,int param_3,char *param_4);
void engine_2d_c_FUN_00402d60(int param_1,int param_2,int param_3,char *param_4);
int __cdecl engine_2d_c_getTextWrapEnabled_FUN_00402e20(void);
void __cdecl engine_2d_c_setTextWrapEnabled_FUN_00402e30(int enabled);
void __cdecl engine_2d_c_disableTextWrap_FUN_00402e50(void);
int __cdecl engine_2d_c_getTextColor_FUN_00402e60(void);
void __cdecl engine_2d_c_setTextColor_FUN_00402e70(int color);
void engine_2d_c_FUN_00402e90(int param_1);
void engine_2d_c_FUN_00403070(char *param_1,int param_2);
void engine_2d_c_FUN_00403130(char *param_1);
void engine_2d_c_FUN_004031a0(int param_1);
void engine_2d_c_FUN_00403460(char *param_1);
void engine_2d_c_FUN_00403500(char *param_1);
void __cdecl engine_2d_c_buildColorLookupTable_FUN_00403570(void);
void engine_2d_c_FUN_00403630(char *param_1);
void __cdecl engine_2d_c_resetGraphicsSystem_FUN_00403760(void);
void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00403770(void);
void engine_2d_c_FUN_00403780(int param_1,int param_2,int param_3);
int __cdecl engine_2d_c_computeOutcode_FUN_00403900(int x,int y,int x_min,int y_min,int x_max,int y_max);
void __cdecl engine_2d_c_clipLineGlobal_FUN_00403940(int x1,int y1,int x2,int y2);
void __cdecl engine_2d_c_clipAndDrawLine_FUN_00403990(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max);
void __cdecl engine_2d_c_drawHLine_FUN_00403bd0(int x1,int y,int x2);
void __cdecl engine_2d_c_drawVLine_FUN_00403ce0(int x,int y1,int y2);
void __cdecl engine_2d_c_drawRect_FUN_00403e10(int x1,int y1,int x2,int y2);
void __cdecl engine_2d_c_fillRectColor_FUN_00403e60(int x1,int y1,int x2,int y2,int color);
void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403ef0(int x1,int y1,int x2,int y2,int fill_color,int border_color);
void __cdecl engine_2d_c_clearInputAndWait_FUN_00403f50(void);
uint engine_2d_c_getInputWithPrompt_FUN_00403fb0(undefined1 *param_1,int param_2,int param_3,int param_4,undefined4 param_5);
void engine_2d_c_setSolidColor_FUN_00404090(int param_1,int param_2,uint param_3);
int __cdecl engine_2d_c_mapFrameBuffer_FUN_00404120(void *frame_buffer,int width,int height,int bits_per_pixel,int stride);
void engine_2d_c_mapTextureFrameBuffer_FUN_00404340(void);
int engine_2d_c_unmapFrameBuffer_FUN_00404360(void);
undefined4 * engine_3d_c_FUN_00404430(undefined4 *param_1);
void engine_3d_c_FUN_005458a0(void);
void engine_3d_c_FUN_005458d0(void);
undefined4 engine_3d_c_badMRGLStruct_FUN_004044a0(undefined4 param_1);
SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004044d0(CQuaternion4f *input_point);
SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00404530(SMRGLHeaderExtended *mrgl);
int __cdecl engine_3d_c_isVisiblePlane_FUN_00404610(SClipPlane *plane);
int engine_3d_c_FUN_00404680(int param_1,int param_2);
void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_00404730(SMRGLHeaderExtended *mrgl);
int engine_3d_c_processTextureCoordinates_FUN_00404790(int param_1);
int engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_004047e0(int param_1);
int engine_3d_c_renderPolygonFogColorOp6_FUN_004048b0(int param_1);
int * engine_3d_c_renderPolygonTexturedLitOp7_FUN_004049d0(SMRGLHeaderPrimitive *param_1);
int engine_3d_c_renderPolygonFogTexturedWrappedOp8_FUN_00404a70(int param_1);
int engine_3d_c_FUN_00404b10(int param_1);
int engine_3d_c_processPolygonColor_FUN_00405140(int param_1);
int engine_3d_c_oldFunction3_FUN_004051e0(int param_1);
int engine_3d_c_FUN_00405200(int param_1);
int engine_3d_c_renderPolygonTexturedNormalizedUVLitOp14_FUN_00405240(SMRGLHeaderPrimitive *param_1);
int engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00405340(SMRGLHeaderPrimitive *param_1);
int engine_3d_c_renderPolygonSolidTexturedOp15_FUN_00405440(int param_1);
undefined4 * engine_3d_c_oldFunction5_FUN_004054f0(undefined4 *param_1);
int engine_3d_c_renderPolygonSolidLitClampedOp17_FUN_00405540(SMRGLHeaderPrimitive *param_1);
int engine_3d_c_FUN_00405740(int param_1);
int engine_3d_c_setRelativeCoord_FUN_00405750(int param_1);
int engine_3d_c_renderPolygonTexturedNormalizedOp21_FUN_004057a0(int param_1);
void __cdecl engine_3d_c_setActiveRenderColor_FUN_00405840(void);
int engine_3d_c_drawLineStrip2D_FUN_00405870(int param_1);
int engine_3d_c_drawLineStrip3D_FUN_00405900(int param_1);
undefined4 engine_3d_c_oldFunction7_FUN_00405990(void);
void engine_3d_c_FUN_004059c0(int param_1);
uint engine_3d_c_FUN_00405a60(int *param_1,int *param_2);
void engine_3d_c_FUN_00405ab0(int param_1,undefined4 param_2,undefined4 param_3);
void engine_3d_c_FUN_00405b30(void);
SMRGLHeaderExtended * engine_3d_c_FUN_00405b40(SMRGLHeaderExtended *param_1);
int engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90(SMRGLHeaderPrimitive *param_1);
int engine_3d_c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10(SMRGLHeaderPrimitive *param_1);
int * engine_3d_c_renderPolygonLitNearPlaneOp35_FUN_00406010(SMRGLHeaderPrimitive *param_1);
int engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_004060b0(int param_1);
int * engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00406230(SMRGLHeaderPrimitive *param_1);
int engine_3d_c_renderPolygonFogColorDepthOp27_FUN_00406320(int param_1);
undefined4 * engine_3d_c_oldFunction8_FUN_004063c0(undefined4 *param_1);
int engine_3d_c_updateAnimatedTexture_FUN_00406690(int param_1);
int engine_3d_c_renderPolygonTexturedUVLitOp30_FUN_00406740(SMRGLHeaderPrimitive *param_1);
int engine_3d_c_setVertexTextureU_FUN_00406840(int param_1);
int engine_3d_c_renderPolygonDestReadBlendOp33_FUN_00406880(int param_1);
int * engine_3d_c_renderPolygonTexturedUVLit_FUN_00406920(SMRGLHeaderPrimitive *param_1);
int * engine_3d_c_FUN_00406a00(SMRGLHeaderPrimitive *param_1);
int * engine_3d_c_renderPolygonAlphaTexturedNormalizedLit_FUN_00406ae0(SMRGLHeaderPrimitive *param_1);
int * engine_3d_c_FUN_00406b80(SMRGLHeaderPrimitive *param_1);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_00406c60(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80(SMRGLHeaderPrimitive *prim);
int engine_3d_c_renderPolygonFogTexturedPerspOp39_FUN_00406ea0(int param_1);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonDepthWritePass_FUN_00406f30(SMRGLHeaderPrimitive *prim);
undefined4 * engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00406fd0(int param_1);
undefined4 * engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_00407070(int param_1);
int engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120(int param_1);
int engine_3d_c_renderPolygonFogTexturedDepthOp42_FUN_004072d0(int param_1);
int engine_3d_c_renderPolygonTexturedDepthWriteOp43_FUN_00407370(int param_1);
int engine_3d_c_renderPolygonFogTexturedDepthWriteOp44_FUN_00407410(int param_1);
int engine_3d_c_renderPolygonTexturedOp45_FUN_004074b0(int param_1);
int engine_3d_c_renderPolygonTexturedOp46_FUN_00407550(int param_1);
int engine_3d_c_renderPolygonTexturedDepthWriteOp47_FUN_004075f0(int param_1);
int * engine_3d_c_renderPolygonSolidTexturedLitOp48_FUN_00407690(SMRGLHeaderPrimitive *param_1);
int * engine_3d_c_renderPolygonTexturedDepthLitOp49_FUN_00407740(SMRGLHeaderPrimitive *param_1);
int engine_3d_c_renderPolygonTexturedNormalizedOp50_FUN_004077e0(int param_1);
int engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_00407880(int param_1);
int engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20(int param_1);
int engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_00407cc0(int param_1);
int * engine_3d_c_renderPolygonDestReadBlendDepthLitOp55_FUN_00407d90(SMRGLHeaderPrimitive *param_1);
int engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00407e50(SMRGLHeaderPrimitive *param_1);
int engine_3d_c_renderPolygonSolidLitOp62_FUN_00408010(SMRGLHeaderPrimitive *param_1);
int * engine_3d_c_renderPolygonFullEffectsLitOp57_FUN_00408130(SMRGLHeaderPrimitive *param_1);
int * engine_3d_c_renderPolygonVertexAlphaLitOp60_FUN_004081d0(SMRGLHeaderPrimitive *param_1);
int * engine_3d_c_renderPolygonBlendedLitOp63_FUN_00408270(SMRGLHeaderPrimitive *param_1);
int engine_3d_c_setRenderAlphaFromBlock_FUN_00408350(int param_1);
int __cdecl engine_3d_c_setRenderAlpha_FUN_00408370(int alpha_color_value);
void __cdecl engine_3d_c_setBlendMode_FUN_004083c0(int blend_mode);
SMRGLHeaderExtended * engine_3d_c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0(SMRGLHeaderPrimitive *param_1);
SMRGLHeaderExtended * engine_3d_c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510(SMRGLHeaderPrimitive *param_1);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(SMRGLHeaderPrimitive *prim);
int engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00408a60(int param_1);
void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00408c10(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags);
void engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00408d10(int param_1,uint param_2,int param_3);
void engine_3d_c_FUN_00408e80(int *param_1);
void engine_3d_c_flushRenderQueue_FUN_00408f50(void);
void engine_3d_c_FUN_00408fc0(SMRGLHeaderPrimitive *param_1);
void engine_3d_c_FUN_00409210(int param_1,int param_2);
void engine_3d_c_clipAndDrawLine2D_FUN_00409290(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5);
void engine_3d_c_FUN_00409510(int param_1,int param_2);
uint engine_3d_c_clipAndDrawLine3D_FUN_00409590(uint param_1,uint param_2,int param_3,undefined4 param_4,uint param_5);
void __cdecl core_actor_cpp_staticInit_FUN_00409840(void);
float core_actor_cpp_rayCylinderIntersect_FUN_00409860(int param_1,float *param_2,float *param_3,float *param_4);
void core_actor_cpp_FUN_00409cd0(int param_1);
CDemonActorTransformState * __cdecl core_actor_cpp_initTransformCache_FUN_00409cf0(CDemonActorTransformState *transform_cache);
UOrientationVector * core_actor_cpp_FUN_00409d30(int param_1);
CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor *this_ptr,uint flags);
void core_actor_cpp_FUN_00409ed0(void);
undefined4 core_actor_cpp_FUN_00409f00(void);
void core_actor_cpp_FUN_00409f10(void);
void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor *actor);
void __cdecl core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor *this_ptr);
undefined4 core_actor_cpp_FUN_00409f70(void);
char * __cdecl core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor *this_ptr);
void core_actor_cpp_CDemonActor_getBoundingBox_FUN_0040a060(undefined4 param_1,undefined4 *param_2);
undefined4 core_actor_cpp_FUN_0040a090(void);
undefined4 core_actor_cpp_FUN_0040a0a0(void);
void core_actor_cpp_FUN_0040a0d0(void);
undefined4 core_actor_cpp_FUN_0040a100(void);
undefined4 core_actor_cpp_FUN_0040a130(void);
undefined4 core_actor_cpp_FUN_0040a140(CDemonActor *param_1,undefined4 param_2,char *param_3);
undefined4 core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(int param_1,undefined4 param_2,undefined4 param_3);
CVector3f * __cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor *this_ptr,CVector3f *output_world_point,CVector3f *input_local_point);
CVector3f * __cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor *this_ptr,CVector3f *output_local_point,CVector3f *input_world_point);
void core_actor_cpp_FUN_0040a2e0(CDemonActor *param_1,char *param_2);
void core_actor_cpp_FUN_0040a300(CDemonActor *param_1,char *param_2);
void core_actor_cpp_FUN_0040a320(CDemonActor *param_1,char *param_2,float param_3);
uint core_actor_cpp_FUN_0040a350(CDemonActor *param_1,char *param_2,float param_3);
void core_actor_cpp_FUN_0040a380(void);
int __cdecl core_actor_cpp_CDemonActor_testPointInCylinder_FUN_0040a390(CDemonActor *this_ptr,SCollisionReturnInfo *collision_info,float tolerance);
undefined4 core_actor_cpp_FUN_0040a420(int param_1,float *param_2,float *param_3,float *param_4);
CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540(CDemonActor *this_ptr,CBoundingBox3D *output_bbox,SCollisionInfo *collision_info,int bounding_box_type);
float core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740(CDemonActor *param_1,CBoundingBox3D *param_2,float *param_3,undefined4 *param_4,SCollisionInfo *param_5,uint param_6,CBoundingBox3D *param_7);
undefined8 core_actor_cpp_FUN_0040ab10(undefined4 param_1,int param_2);
void core_actor_cpp_FUN_0040ab30(void);
void core_actor_cpp_draw3DPointMarker_FUN_0040ab70(float *param_1,undefined4 param_2);
void core_actor_cpp_FUN_0040add0(int param_1);
void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_0040b090(CDemonActor *this_ptr,int fly_count,float spawn_radius);
void core_actor_cpp_FUN_0040b0d0(char *param_1,uint *param_2);
undefined4 core_actor_cpp_FUN_0040b110(void);
undefined4 core_actor_cpp_FUN_0040b120(void);
void core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150(CDemonActor *param_1,float *param_2,float *param_3);
void core_actor_cpp_FUN_0040b1a0(void);
undefined4 * core_actor_cpp_FUN_0040b1b0(undefined4 param_1,undefined4 *param_2);
void core_actor_cpp_FUN_0040b1f0(void);
uint core_actor_cpp_FUN_0040b200(int param_1);
undefined4 core_actor_cpp_FUN_0040b300(CDemonActor *param_1,float param_2);
void core_actor_cpp_FUN_0040bca0(int param_1,undefined4 param_2,int param_3);
void core_actor_cpp_FUN_0040bce0(int param_1,uint param_2);
undefined4 * core_actor_cpp_copyToActorDebugBuffer_FUN_0040bd40(void);
void core_actor_cpp_FUN_0040bd90(char *param_1,undefined4 param_2,undefined4 param_3);
int __cdecl core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(int indent_delta);
void core_actor_cpp_CDemonActor_save_FUN_0040c040(CDemonActor *param_1,int param_2);
void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040c160(CDemonActor *this_ptr,_FILE *file_handle);
void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040c320(char *property_description,char *property_type);
void __cdecl core_actor_cpp_archiveDescription_FUN_0040c3a0(char *property_description,char *property_name);
void __cdecl core_actor_cpp_archiveVector_FUN_0040c450(CVector3f *vector_ptr,char *property_name);
void core_actor_cpp_archiveOrientation_FUN_0040c4f0(float *param_1,char *param_2);
void __cdecl core_actor_cpp_archiveLocation_FUN_0040c590(CLocation *location_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040c630(CQuaternion4f *quat_ptr,char *property_type);
void __cdecl core_actor_cpp_archiveString_FUN_0040c6d0(char *string_buffer,char *property_type);
void __cdecl core_actor_cpp_archiveLocalizedString_FUN_0040c7f0(char *string_buffer,char *localization_key);
void __cdecl core_actor_cpp_archiveFloat_FUN_0040c880(float *float_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveInteger_FUN_0040c900(int *int_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveActor_FUN_0040c980(CDemonActor **actor_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance *model_ptr,char *property_name);
void core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(int param_1,char *param_2);
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
undefined4 core_actor_cpp_FUN_0040d830(void);
int __cdecl core_actor_cpp_matchesClassName_FUN_0040d840(CDemonActorType *type_ptr,char *class_name);
int __cdecl core_actor_cpp_isOfClassHash_FUN_0040d860(CDemonActor *actor_ptr,uint class_name_hash);
CDemonActor * __cdecl core_actor_cpp_castToClassHash_FUN_0040d890(CDemonActor *actor_ptr,uint class_name_hash);
void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040d8c0(void);
void __cdecl core_actor_cpp_resetActorTypeInfo_FUN_0040d8f0(void);
int core_actor_cpp_CDemonActor_processFootstep_FUN_0040d930(CDemonActor *param_1,float param_2);
int core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040d9f0(CDemonActor *param_1,CVector3f *param_2,float param_3);
uint core_actor_cpp_FUN_0040db50(CDemonActor *param_1,CVector3f *param_2,EGroundType param_3,float param_4);
void __cdecl core_actor_cpp_setRandomSeed_FUN_0040dd20(uint seed_value);
uint __cdecl core_actor_cpp_generateRandomValue_FUN_0040dd30(void);
float core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(float param_1,float param_2);
int __cdecl core_actor_cpp_getRandomInt_FUN_0040de00(int min_value,int max_value);
int __cdecl core_actor_cpp_randomChance_FUN_0040dea0(float probability_threshold);
float core_actor_cpp_normalizeAngleToPi_FUN_0040df00(float param_1);
void core_actor_cpp_crc32ProcessByte_FUN_0040dfc0(uint *param_1,byte param_2);
void __cdecl core_actor_cpp_crc32ProcessBuffer_FUN_0040e0a0(uint *crc_state,byte *buffer,int buffer_length);
void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040e0e0(uint *crc_state,int value);
void __cdecl core_actor_cpp_crc32ProcessVector_FUN_0040e100(uint *crc_state,CVector3f *vector);
void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040e120(uint *crc_state,char *string);
undefined4 __cdecl core_actor_cpp_CVector_ctor_FUN_0040e160(undefined4 param_1);
undefined4 core_actor_cpp_FUN_0040e170(undefined4 param_1);
void __cdecl core_actor_cpp_copyVector_FUN_0040e180(CVector3f *dst_ptr,CVector3f *src_ptr);
float core_actor_cpp_CVector3f_length_FUN_0040e1a0(float *param_1);
void core_actor_cpp_FUN_0040e1cc(void);
undefined4 core_actor_cpp_SDamageInfo_dtor_FUN_0040e220(undefined4 param_1);
undefined4 core_actor_cpp_FUN_0040e230(undefined4 param_1);
undefined4 * core_actor_cpp_CBoundingBox3D_copy_FUN_0040e240(undefined4 *param_1,undefined4 *param_2);
undefined4 core_actor_cpp_CBoundingBox3D_dtor_FUN_0040e290(undefined4 param_1);
void core_actor_cpp_CVector_copy_FUN_0040e2a0(undefined4 *param_1,undefined4 *param_2);
void core_actor_cpp_FUN_0040e2ce(void);
void core_actor_cpp_FUN_0040e2e1(undefined4 *param_1);
void core_actor_cpp_FUN_0040e2f1(undefined4 *param_1);
void core_actor_cpp_FUN_0040e300(void *param_1);
CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(CAlphaBitmap *this_ptr);
CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(CAlphaBitmap *this_ptr,uint flags);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(CAlphaBitmap *this_ptr);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap *this_ptr,char *filename,int width,int height);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(CAlphaBitmap *this_ptr,int x,int y,int alpha);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040e8c0(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY);
void engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040eab0(int param_1);
void engine_alphabit_cpp_FUN_0040eadd(void);
void __cdecl core_ammo_cpp_staticInit_FUN_0040eb10(void);
void core_ammo_cpp_FUN_0040eb40(void);
CDemonActorType * core_ammo_cpp_FUN_0040eb60(void);
CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(CAmmo *this_ptr);
void core_ammo_cpp_FUN_0040ec00(CDemonActor *param_1);
void core_ammo_cpp_FUN_0040ec20(void);
int core_ammo_cpp_FUN_0040ec30(CDemonActor *param_1);
undefined4 * core_ammo_cpp_FUN_0040eca0(int param_1,undefined4 *param_2);
void core_ammo_cpp_FUN_0040ecf0(CDemonActor *param_1);
undefined4 core_ammo_cpp_FUN_0040ed50(void);
void __cdecl core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo *this_ptr,char *weapon_class_name);
void core_ammo_cpp_FUN_0040ef60(int param_1,undefined4 param_2);
undefined4 core_ammo_cpp_FUN_0040ef70(undefined4 param_1,CDemonActor *param_2);
CDemonActor * core_ammo_cpp_CAmmo_dtor_FUN_0040ef90(CDemonActor *param_1,byte param_2);
void __cdecl core_ammobox_cpp_staticInit_FUN_0040efe0(void);
void core_ammobox_cpp_FUN_0040f010(void);
CDemonActorType * core_ammobox_cpp_FUN_0040f030(void);
int * core_ammobox_cpp_FUN_0040f040(undefined4 param_1);
void core_ammobox_cpp_FUN_0040f0f0(CDemonActor *param_1);
void core_ammobox_cpp_FUN_0040f120(void);
void __cdecl core_ammobox_cpp_CAmmoBox_openBox_FUN_0040f130(CAmmoBox *this_ptr,float open_pct);
void core_ammobox_cpp_FUN_0040f1a0(int param_1,CInventory *param_2);
int core_ammobox_cpp_FUN_0040f2b0(CDemonActor *param_1);
undefined4 * core_ammobox_cpp_FUN_0040f340(int param_1,undefined4 *param_2);
void core_ammobox_cpp_FUN_0040f390(CDemonActor *param_1);
bool core_ammobox_cpp_FUN_0040f460(int param_1);
undefined4 core_ammobox_cpp_FUN_0040f480(int param_1,CDemonActor *param_2);
CDemonActor * core_ammobox_cpp_FUN_0040f4b0(CDemonActor *param_1,byte param_2);
void __cdecl core_anvil_cpp_staticInit_FUN_0040f500(void);
void core_anvil_cpp_FUN_0040f530(void);
CDemonActorType * core_anvil_cpp_FUN_0040f550(void);
int * core_anvil_cpp_FUN_0040f560(undefined4 param_1);
void core_anvil_cpp_FUN_0040f5f0(CDemonActor *param_1);
void core_anvil_cpp_FUN_0040f610(CDemonActor *param_1,float param_2);
int core_anvil_cpp_FUN_0040f740(int param_1);
void core_anvil_cpp_FUN_0040f7d0(CDemonActor *param_1);
undefined4 core_anvil_cpp_FUN_0040f850(void);
undefined4 * core_anvil_cpp_FUN_0040f860(int param_1,undefined4 *param_2);
CDemonActor * core_anvil_cpp_FUN_0040f8b0(CDemonActor *param_1,byte param_2);
void __cdecl core_armour_cpp_staticInit_FUN_0040f900(void);
void core_armour_cpp_FUN_0040f930(void);
CDemonActorType * core_armour_cpp_FUN_0040f950(void);
CEnemy * core_armour_cpp_FUN_0040f960(CEnemy *param_1);
void core_armour_cpp_FUN_0040fa00(CEnemy *param_1);
void core_armour_cpp_FUN_0040fa20(CCharacter *param_1,float param_2);
void core_armour_cpp_FUN_0040fb60(CEnemy *param_1);
void core_armour_cpp_FUN_0040fbc0(CEnemy *param_1,SDamageInfo *param_2);
undefined4 core_armour_cpp_FUN_0040fc00(void);
void core_armour_cpp_FUN_0040fc10(CCharacter *param_1,SCollisionInfo *param_2);
CDemonActor * core_armour_cpp_FUN_0040fc30(CDemonActor *param_1,byte param_2);
CDemonActor * core_armour_cpp_CEnemy_dtor_FUN_0040fcf0(CDemonActor *param_1,byte param_2);
undefined4 core_armour_cpp_FUN_0040fdb0(undefined4 param_1);
CDemonActor * core_armour_cpp_CFlame_dtor_FUN_0040fdc0(CDemonActor *param_1,byte param_2);
CVector3f * __cdecl core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f *objs,uint flags);
SFire * __cdecl core_armour_cpp_SFire_arrdtor_FUN_0040fe30(SFire *objs,uint flags);
CFlame * __cdecl core_armour_cpp_CFlame_arrdtor_FUN_0040fe50(CFlame *objs,uint flags);
void __cdecl core_backgnd_cpp_staticInit_FUN_0040fe70(void);
void core_backgnd_cpp_FUN_0040fea0(void);
CDemonActorType * core_backgnd_cpp_FUN_0040fec0(void);
int * core_backgnd_cpp_FUN_0040fed0(undefined4 param_1);
undefined8 core_backgnd_cpp_CBackgroundActor_setup_FUN_0040ff30(CDemonActor *param_1);
void core_backgnd_cpp_FUN_0040ff70(void);
void core_backgnd_cpp_FUN_0040ff80(CDemonActor *param_1,int param_2);
undefined4 core_backgnd_cpp_FUN_0040ffe0(void);
undefined4 * core_backgnd_cpp_FUN_0040fff0(int param_1,undefined4 *param_2);

