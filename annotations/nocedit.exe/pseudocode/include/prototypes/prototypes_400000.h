#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdint.h"
#include "system/stdio.h"
#include "types/classes/CActorProperty.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CBox.h"
#include "types/classes/CClothList.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorTransformState.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CLocation.h"
#include "types/classes/CMotionController.h"
#include "types/classes/COrientation.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CRuleList.h"
#include "types/classes/CTextureCache.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/enums/EActorPropertyType.h"
#include "types/funcdefs/CActorPropertyActionFunc.h"
#include "types/funcdefs/CActorPropertyDisplayFunc.h"
#include "types/funcdefs/CActorPropertyValidatorFunc.h"
#include "types/funcdefs/CDemonActor_FactoryFunc.h"
#include "types/structs/SClipPlane.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCollisionReturnInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SEnumPair.h"
#include "types/structs/SInteractionInfo.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SLaserInfo.h"
#include "types/structs/SLineStrip.h"
#include "types/structs/SMRGLAnimatedTexture.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SPlayerControl.h"
#include "types/structs/SRenderBufferEntry.h"
#include "types/structs/SRenderVertex.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x400000
// =============================================================================

void crt_unknown_c_BaseStart_FUN_00401000(void);
void __cdecl engine_2d_c_initGraphicsSystem_FUN_00401010(void);
void __cdecl engine_2d_c_cleanupGraphicsSystem_FUN_005ecd90(void);
void __cdecl engine_2d_c_plotPixel_FUN_00401140(int x,int y);
void __cdecl engine_2d_c_drawLine_FUN_004011b0(int x1,int y1,int x2,int y2);
void __cdecl engine_2d_c_plotPixelWithDepth_FUN_00401290(int x_coord,int y_coord,uint depth_value);
void __cdecl engine_2d_c_drawLine3D_FUN_00401320(int x1,int y1,uint z1,int x2,int y2,uint z2);
int __cdecl engine_2d_c_findBestPaletteMatch_FUN_00401460(int red,int green,int blue,int start_index,int end_index);
void __cdecl engine_2d_c_doNothing_FUN_00401590(char *filename);
void __cdecl engine_2d_c_loadPaletteFile_FUN_004015a0(char *filename);
int __cdecl engine_2d_c_drawCharacter_FUN_00401610(int char_code,int x_pos,int y_pos);
void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401770(int x_3d,int y_3d,int z_depth);
void __cdecl engine_2d_c_project3DPointClipped_FUN_004017c0(int x_3d,int y_3d,int z_depth);
void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401800(int left,int top,int right,int bottom);
int __cdecl engine_2d_c_getStringWidth_FUN_004018a0(char *text);
int __cdecl engine_2d_c_drawCharacterMasked_FUN_00401900(int char_code,int x_pos,int y_pos);
int __cdecl engine_2d_c_drawCharacter_FUN_00401a10(int char_code,int x_pos,int y_pos,int color);
int __cdecl engine_2d_c_drawCharacterHighlighted_FUN_00401b70(int char_code,int x_pos,int y_pos);
void __cdecl engine_2d_c_drawTextWrapped_FUN_00401c60(char *text,int x_start,int y_start,int x_max,int y_max);
void __cdecl engine_2d_c_drawTextMultiline_FUN_00401cf0(char *text,int x_start,int y_start,int x_max,int y_max);
void __cdecl engine_2d_c_wrapTextToWidth_FUN_00401d80(char *input_text,int max_width,char *output_buffer);
void __cdecl engine_2d_c_drawTextWrappedColor_FUN_00401eb0(char *text,int x_start,int y_start,int x_max,int y_max,int color);
void __cdecl engine_2d_c_drawTextMultilineColor_FUN_00401f40(char *text,int x_start,int y_start,int x_max,int y_max,int color);
void __cdecl engine_2d_c_drawText_FUN_00401fd0(char *text,int x,int y);
void __cdecl engine_2d_c_drawStringMasked_FUN_00402030(char *text,int x_pos,int y_pos);
void __cdecl engine_2d_c_drawString_FUN_00402080(char *text,int x_pos,int y_pos,int color);
void __cdecl engine_2d_c_drawStringHighlighted_FUN_004020e0(char *text,int x_pos,int y_pos);
void __cdecl engine_2d_c_drawTextXY_FUN_00402130(int x,int y,char *text);
void __cdecl engine_2d_c_drawTextFormatted_FUN_00402150(int x,int y,char *format_string,...);
void __cdecl engine_2d_c_drawTextRightAligned_FUN_004021c0(char *text,int x,int y);
void __cdecl engine_2d_c_drawTextRightAlignedWrapper_FUN_004021f0(int x,int y,char *text);
void __cdecl engine_2d_c_drawTextRightAlignedFormatted_FUN_00402210(int x,int y,char *format_string,...);
void __cdecl engine_2d_c_drawTextCenteredAt_FUN_00402280(char *text,int x,int y);
void __cdecl engine_2d_c_drawTextCenteredAtWrapper_FUN_004022c0(int x,int y,char *text);
void __cdecl engine_2d_c_drawTextCenteredAtFormatted_FUN_004022e0(int x,int y,char *format_string,...);
void __cdecl engine_2d_c_drawTextCentered_FUN_00402350(char *text,int left_x,int right_x,int y);
void __cdecl engine_2d_c_drawTextCenteredReordered_FUN_00402390(int left_x,int right_x,int y,char *text);
void __cdecl engine_2d_c_drawTextCenteredFormatted_FUN_004023c0(int left_x,int right_x,int y,char *format_string,...);
void __cdecl engine_2d_c_drawTextColor_FUN_00402430(char *text,int x,int y);
void __cdecl engine_2d_c_drawTextColorWrapper_FUN_004024a0(int x,int y,char *text);
void __cdecl engine_2d_c_drawTextColorFormatted_FUN_004024c0(int x,int y,char *format_string,...);
void __cdecl engine_2d_c_drawTextRightAlignedColor_FUN_00402530(char *text,int x,int y);
void __cdecl engine_2d_c_drawTextRightAlignedColorWrapper_FUN_00402560(int x,int y,char *text);
void __cdecl engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580(int x,int y,char *format_string,...);
void __cdecl engine_2d_c_drawTextCenteredAtColor_FUN_004025f0(char *text,int x,int y);
void __cdecl engine_2d_c_drawTextCenteredAtColorWrapper_FUN_00402630(int x,int y,char *text);
void __cdecl engine_2d_c_drawTextCenteredAtColorFormatted_FUN_00402650(int x,int y,char *format_string,...);
void __cdecl engine_2d_c_drawTextCenteredColor_FUN_004026c0(char *text,int left_x,int right_x,int y);
void __cdecl engine_2d_c_drawTextCenteredXYColor_FUN_00402700(int left_x,int right_x,int y,char *text);
void __cdecl engine_2d_c_drawTextCenteredColorFormatted_FUN_00402730(int left_x,int right_x,int y,char *format_string,...);
int __cdecl engine_2d_c_getStringWidthFormatted_FUN_004027a0(char *format_string,...);
int __cdecl engine_2d_c_getTextWrapEnabled_FUN_004027f0(void);
void __cdecl engine_2d_c_setTextWrapEnabled_FUN_00402800(int enabled);
void __cdecl engine_2d_c_enableTextWrap_FUN_00402810(void);
void __cdecl engine_2d_c_disableTextWrap_FUN_00402820(void);
int __cdecl engine_2d_c_getTextColor_FUN_00402830(void);
void __cdecl engine_2d_c_setTextColor_FUN_00402840(int color);
void __cdecl engine_2d_c_doNothing_FUN_00402860(char *filename);
void __cdecl engine_2d_c_buildColorLookupTable_FUN_00402870(void);
void __cdecl engine_2d_c_loadOrBuildColorMap_FUN_00402930(char *filename);
void __cdecl engine_2d_c_resetGraphicsSystem_FUN_005ed2a0(void);
void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_005ed4b0(void);
void __cdecl engine_2d_c_draw320x200SizeDot_FUN_00402a8e(int x_3d,int y_3d,int z_depth);
int __cdecl engine_2d_c_computeOutcode_FUN_00402c10(int x,int y,int x_min,int y_min,int x_max,int y_max);
void __cdecl engine_2d_c_clipLineGlobal_FUN_00402c50(int x1,int y1,int x2,int y2);
void __cdecl engine_2d_c_clipAndDrawLine_FUN_00402ca0(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max);
void __cdecl engine_2d_c_drawHLine_FUN_00402ee0(int x1,int y,int x2);
void __cdecl engine_2d_c_drawVLine_FUN_00402ff0(int x,int y1,int y2);
void __cdecl engine_2d_c_drawRect_FUN_00403120(int x1,int y1,int x2,int y2);
void __cdecl engine_2d_c_fillRectColor_FUN_00403170(int x1,int y1,int x2,int y2,int color);
void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403200(int x1,int y1,int x2,int y2,int fill_color,int border_color);
void __cdecl engine_2d_c_clearInputAndWait_FUN_00403260(void);
int __cdecl engine_2d_c_getInputWithPrompt_FUN_004032c0(char *buffer,int max_length,int x,int y,char *prompt);
void __cdecl engine_2d_c_setSolidColor_FUN_004033a0(int red_component,int green_component,int blue_component);
int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403430(int width,int height,int bits_per_pixel,int stride,void *frame_buffer);
int __cdecl engine_2d_c_mapTextureFrameBuffer_FUN_00403650(void);
void __cdecl engine_2d_c_unmapFrameBuffer_FUN_00403670(void);
void * __cdecl engine_3d_c_oldFunction_FUN_00403740(SMRGLHeaderPrimitive *prim);
CTextureCache * __cdecl wincore_wddvmem_cpp_initTextureCache_FUN_005dd760(void);
void __cdecl wincore_wddvmem_cpp_freeTextureCache_FUN_005dd7a0(void);
SMRGLHeaderExtended * __cdecl engine_3d_c_badMRGLStruct_FUN_004037b0(SMRGLHeaderExtended *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(CQuaternion4f *input_point);
SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00403840(SMRGLHeaderExtended *mrgl);
int __cdecl engine_3d_c_isVisiblePlane_FUN_00403950(SClipPlane *plane);
uint __cdecl engine_3d_c_makeGrayscaleColor_FUN_004039c0(int intensity);
void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_00403a20(SMRGLHeaderExtended *mrgl);
SMRGLHeaderExtended * __cdecl engine_3d_c_processTextureCoordinates_FUN_00403a80(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLastPixelMode_FUN_00403ad0(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygon_FUN_00403ba0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureEnable_FUN_00403cc0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPrimitiveUVWrappedSpecial_FUN_00403d60(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_00403e00(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_processPolygonColor_FUN_00403e30(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_00403ec0(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_00403ef0(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureNormalized_FUN_00403f20(SMRGLHeaderPrimitive *prim);
void * __cdecl engine_3d_c_renderOverlayTextureEnable_FUN_00404020(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonVertexLit_FUN_00404120(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_004041d0(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitDetailed_FUN_00404220(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __watcallRegister engine_3d_c_oldFunction_FUN_00404420(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_setRelativeCoord_FUN_00404450(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureNormalized_FUN_004044a0(SMRGLHeaderPrimitive *primitive);
void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404540(void);
SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00404570(SLineStrip *line_strip);
void __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip);
SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_00404690(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPrimitivePlaneMaskedComplex_FUN_004046c0(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveDepthMode_FUN_00404ae0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPlaneMaskedComplex_FUN_00404c60(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVMappedComplex_FUN_00404d50(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_00404df0(SMRGLHeaderExtended *primitive);
void * __cdecl engine_3d_c_renderPolygonVertexLitNearPlane_FUN_00404e40(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureNearPlane_FUN_00404ee0(SMRGLHeaderPrimitive *prim);
void * __cdecl engine_3d_c_renderPolygonVertexLitNormalized_FUN_00404f80(SMRGLHeaderPrimitive *prim);
void * __cdecl engine_3d_c_renderPolygonVertexLitNormalized_FUN_00405020(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_004050c0(SMRGLAnimatedTexture *texture);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVTextureEnable_FUN_00405170(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_setVertexTextureU_FUN_00405270(SMRGLHeaderExtended *mrgl);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitComplexAlpha_FUN_004052b0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVTextureEnable_FUN_00405350(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVTextureNormalized_FUN_00405430(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVVertexLitNormalized_FUN_00405510(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPerspectiveNormalized_FUN_004055b0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVWrappedAdvanced_FUN_004058d0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonDepthWriteTextured_FUN_00405960(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVTextureEnable_FUN_00405a00(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVVertexLit_FUN_00405aa0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureWrappedStandard_FUN_00405ce0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonDepthWriteTexturedLit_FUN_00405d80(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedBasic_FUN_00405ec0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonOverlayTextured_FUN_00405f60(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonDepthWriteTexturedLit_FUN_00406000(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureWrappedLit_FUN_00406150(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVTextureNormalized_FUN_004061f0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturePerspectiveCorrect_FUN_00406290(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureAdaptiveWrapped_FUN_00406430(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLastPixelMode_FUN_004066d0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitDetailed_FUN_00406a20(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonExtremeQualityMode_FUN_00406b40(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineDepthLit_FUN_00406be0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlpha_FUN_00406d60(SMRGLHeaderExtended *block);
void __cdecl engine_3d_c_setRenderAlpha_FUN_00406d80(int alpha_color_value);
void __cdecl engine_3d_c_setBlendMode_FUN_00406dd0(int blend_mode);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20(SMRGLHeaderPrimitive *prim);
void __cdecl engine_3d_c_resetRenderBuffer_FUN_00407060(void);
int __cdecl engine_3d_c_qsortByRenderDepth_FUN_00407080(SRenderBufferEntry **entry1_ptr,SRenderBufferEntry **entry2_ptr);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags, int alpha_blend_flags,int special_render_mode);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720(SMRGLHeaderPrimitive *prim);
void __cdecl engine_3d_c_setProcessorType_FUN_00407870(int processor_type);
void __cdecl engine_3d_c_setRenderingQuality_FUN_00407880(int quality);
void __cdecl engine_3d_c_dispatchMRGLBlockChain_FUN_00407890(SMRGLHeaderExtended *chain);
SMRGLHeaderExtended * __cdecl engine_3d_c_renderPrim_FUN_00407920(SMRGLHeaderPrimitive *primitive);
void __cdecl engine_3d_c_addFaceIfVisible_FUN_004079c0(SMRGLHeaderPrimitive *cull_reference,SMRGLHeaderPrimitive *face_to_queue);
void __cdecl engine_3d_c_flushRenderQueue_FUN_00407a30(void);
void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407aa0(SMRGLHeaderExtended *mrgl);
void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(int vertex_index1,int vertex_index2);
void __cdecl engine_3d_c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1,SRenderVertex vertex2);
void __cdecl engine_3d_c_drawLine3DFromIndices_FUN_00407ff0(int vertex_index1,int vertex_index2);
void __cdecl engine_3d_c_clipAndDrawLine3D_FUN_00408070(SRenderVertex vertex1,SRenderVertex vertex2);
void __cdecl core_actor_cpp_staticInit_FUN_00408320(void);
float __cdecl core_actor_cpp_rayCylinderIntersect_FUN_00408340(SCollisionInfo *collision_info,CVector3f *ray_origin,CVector3f *ray_direction, CVector3f *out_normal);
void __cdecl core_actor_cpp_trimActorName_FUN_004087b0(CDemonActor *actor_ptr);
void __cdecl core_actor_cpp_deleteActor_FUN_00408820(CDemonActor *actor_ptr);
CDemonActorTransformState * __cdecl core_actor_cpp_initTransformCache_FUN_00408870(CDemonActorTransformState *transform_cache);
CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor *this_ptr);
CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor *this_ptr,uint flags);
void __cdecl core_actor_cpp_CDemonActor_process_FUN_00408a80(CDemonActor *this_ptr,float delta_time);
int __cdecl core_actor_cpp_CDemonActor_renderOpaque_FUN_00408aa0(CDemonActor *this_ptr);
int __cdecl core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0(CDemonActor *this_ptr,int layer_flag);
void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor *actor);
void __cdecl core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor *this_ptr);
CDemonActorType * __cdecl core_actor_cpp_CDemonActor_getActorType_FUN_00408b50(CDemonActor *this_ptr);
char * __cdecl core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor *this_ptr);
CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getBoundingBox_FUN_00408c70(CDemonActor *this_ptr,CBoundingBox3D *out_box);
int __cdecl core_actor_cpp_CDemonActor_hasCollision_FUN_00408ca0(CDemonActor *this_ptr,SCollisionInfo *collision_info);
float __cdecl core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction, CVector3f *out_normal);
void __cdecl core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10(CDemonActor *this_ptr,SIntersectXZCylinder *cylinder);
int __cdecl core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50(CDemonActor *this_ptr,float x_pos,float z_pos,float *out_floor_height);
int __cdecl core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90(CDemonActor *this_ptr);
float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0(CDemonActor *this_ptr,float radius,CVector3f *out_normal);
CVector3f * __cdecl core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor *this_ptr,CVector3f *output,CVector3f *input);
CVector3f * __cdecl core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor *this_ptr,CVector3f *output_vector,CVector3f *input_vector);
CVector3f * __cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor *this_ptr,CVector3f *output_world_point,CVector3f *input_local_point);
CVector3f * __cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor *this_ptr,CVector3f *output_local_point,CVector3f *input_world_point);
uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408f60(CDemonActor *this_ptr,char *sound_name);
void __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80(CDemonActor *this_ptr,char *sound_name);
uint __cdecl core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_00408fa0(CDemonActor *this_ptr,char *sound_name,float delay);
void __cdecl core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0(CDemonActor *this_ptr,char *sound_name,float volume);
int __cdecl core_actor_cpp_CDemonActor_canPickup_FUN_00409000(CDemonActor *this_ptr,CDemonActor *picker);
void __cdecl core_actor_cpp_CDemonActor_pickup_FUN_00409020(CDemonActor *this_ptr,CDemonActor *carrier);
void __cdecl core_actor_cpp_CDemonActor_onDropped_FUN_00409040(CDemonActor *this_ptr,CVector3f *drop_position);
CDemonActor * __cdecl core_actor_cpp_CDemonActor_getCarrier_FUN_00409060(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_drop_FUN_00409080(CDemonActor *this_ptr,CDemonActor *carrier,CVector3f *drop_position);
CPathMap * __cdecl core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0(CDemonActor *this_ptr);
int __cdecl core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0(CDemonActor *this_ptr,SCollisionReturnInfo *collision_info,float tolerance);
int __cdecl core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end, CVector3f *out_intersection_point);
CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270(CDemonActor *this_ptr,CBoundingBox3D *output_bbox,SCollisionInfo *collision_info, int bounding_box_type);
int __cdecl core_actor_cpp_CDemonActor_testRayIntersection_FUN_004093f0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction, CVector3f *out_hit_normal,void *unused);
float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction, CVector3f *out_hit_normal,SCollisionInfo *collision_info,int bbox_type, CBoundingBox3D *ray_bbox);
void __cdecl core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840(CDemonActor *this_ptr,SLaserInfo *laser_info);
int __cdecl core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880(CDemonActor *this_ptr);
int __cdecl core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0(CDemonActor *this_ptr);
int __cdecl core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0(CDemonActor *this_ptr,CVector3f *out_points_array);
void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_00409900(int x,int y);
void __cdecl core_actor_cpp_draw3DPointMarker_FUN_00409930(CVector3f *world_position,int marker_color);
void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70(CDemonActor *this_ptr,int fly_count,float spawn_radius);
void __cdecl core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0(CDemonActor *this_ptr,uint *out_crc);
int __cdecl core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20(CDemonActor *this_ptr);
float __cdecl core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40(CDemonActor *this_ptr);
int __cdecl core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0(CDemonActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation);
void __cdecl core_actor_cpp_CDemonActor_onPickup_FUN_0040a010(CDemonActor *this_ptr,CDemonActor *owner);
void __cdecl core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030(CDemonActor *this_ptr,SInteractionInfo *out_info);
int __cdecl core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090(CDemonActor *this_ptr,CDemonActor *user);
int __cdecl core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0(CDemonActor *this_ptr,UOrientationVector *user_orientation, SPlayerControl *player_control);
void __cdecl core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0(CDemonActor *this_ptr,CDemonActor *user);
int __cdecl core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0(CDemonActor *this_ptr);
int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type);
void __cdecl core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info, CDemonActor *victim);
void __cdecl core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20(CDemonActor *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim);
char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040ac30(char *source_string);
void __cdecl core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor *this_ptr,char *context_file,int context_line);
int __cdecl core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta);
void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040af30(CDemonActor *this_ptr,_FILE *file_handle);
void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b050(CDemonActor *this_ptr,_FILE *file_handle);
void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b210(char *property_description,char *property_type);
void __cdecl core_actor_cpp_archiveDescription_FUN_0040b290(char *property_description,char *property_name);
void __cdecl core_actor_cpp_archiveVector_FUN_0040b340(CVector3f *vector_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b3e0(COrientation *orient_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveLocation_FUN_0040b480(CLocation *location_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b520(CQuaternion4f *quat_ptr,char *property_type);
void __cdecl core_actor_cpp_archiveString_FUN_0040b5c0(char *string_buffer,char *property_type);
void __cdecl core_actor_cpp_archiveLocalizedString_FUN_0040b6e0(char *string_buffer,char *localization_key);
void __cdecl core_actor_cpp_archiveFloat_FUN_0040b770(float *float_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveInteger_FUN_0040b7f0(int *int_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveActor_FUN_0040b870(CDemonActor *actor_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance *model_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970(CDeformableModelInstance *model_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveMotionState_FUN_0040b9f0(CMotionController *motion_controller,char *property_name);
void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bae0(CDeformableModelInstance *model_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveBox_FUN_0040bd70(CBox *box_ptr,char *property_name);
void __cdecl core_actor_cpp_archiveClothList_FUN_0040be60(CClothList *cloth_list,char *property_name);
void __cdecl core_actor_cpp_archiveRules_FUN_0040c000(CRuleList *rules,char *property_name);
void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor *this_ptr);
uint __cdecl core_actor_cpp_updateClassNameHash_FUN_0040c260(uint current_hash,int character);
uint __cdecl core_actor_cpp_hashClassName_FUN_0040c290(char *class_name);
template<typename T_func0>
inline CDemonActorType * core_actor_cpp_registerActorClass_FUN_0040c2e0(CDemonActorType *this_ptr,char *class_name,T_func0 factor_func,int *max_version,int version,CDemonActorType *parent_class_info) {
    (void)this_ptr; (void)class_name; (void)factor_func; (void)max_version; (void)version; (void)parent_class_info; return (CDemonActorType *)0;
}
CDemonActorType * __cdecl core_actor_cpp_getActorClassByName_FUN_0040c3c0(char *className);
CDemonActor * __cdecl core_actor_cpp_createActorByName_FUN_0040c430(char *class_name);
void __cdecl core_actor_cpp_skipWhitespace_FUN_0040c4d0(char **parse_pos);
int __cdecl core_actor_cpp_matchClassTerm_FUN_0040c4f0(CDemonActorType *type_ptr,char **parse_pos);
int __cdecl core_actor_cpp_matchClassExpression_FUN_0040c610(CDemonActorType *type_ptr,char **parse_pos);
int __cdecl core_actor_cpp_isOfClass_FUN_0040c6d0(CDemonActor *actor_ptr,char *class_name);
int __cdecl core_actor_cpp_checkNameHash_FUN_0040c700(CDemonActorType *type_ptr,uint name_hash);
int __cdecl core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720(CDemonActor *this_ptr);
int __cdecl core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730(CDemonActor *this_ptr);
int __cdecl core_actor_cpp_matchesClassName_FUN_0040c740(CDemonActorType *type_ptr,char *class_name);
int __cdecl core_actor_cpp_isOfClassHash_FUN_0040c760(CDemonActor *actor_ptr,uint class_name_hash);
CDemonActor * __cdecl core_actor_cpp_castToClassHash_FUN_0040c790(CDemonActor *actor_ptr,uint class_name_hash);
void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0(void);
void __cdecl core_actor_cpp_resetActorTypeInfo_FUN_0040c7f0(void);
int __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830(CDemonActor *this_ptr,float volume);
int __cdecl core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0(CDemonActor *this_ptr,CVector3f *location,float volume);
void __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10(CDemonActor *this_ptr,CVector3f *position,int surface_type,float volume);
void __cdecl core_actor_cpp_setRandomSeed_FUN_0040cb90(uint seed_value);
uint __cdecl core_actor_cpp_generateRandomValue_FUN_0040cba0(void);
float __cdecl core_actor_cpp_getRandomFloat_FUN_0040cbc0(void);
float __cdecl core_actor_cpp_getRandomFloat_FUN_0040cc10(float min_value,float max_value);
int __cdecl core_actor_cpp_getRandomInt_FUN_0040cc70(int min_value,int max_value);
int __cdecl core_actor_cpp_randomChance_FUN_0040cd10(float probability_threshold);
float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians);
void __cdecl core_actor_cpp_crc32ProcessByte_FUN_0040ce30(uint *crc_state,byte input_byte);
void __cdecl core_actor_cpp_crc32ProcessBuffer_FUN_0040cf10(uint *crc_state,byte *buffer,int buffer_length);
void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040cf50(uint *crc_state,int value);
void __cdecl core_actor_cpp_crc32ProcessVector_FUN_0040cf70(uint *crc_state,CVector3f *vector);
void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040cf90(uint *crc_state,char *string);
void __cdecl core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor *this_ptr,_FILE *file_handle);
void __cdecl core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0(CDemonActor *this_ptr,int deleted_area_index);
void __cdecl core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000(CDemonActor *this_ptr,CDemonActor *deleted_actor);
void __cdecl core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor *this_ptr,int *y_pos);
void __cdecl core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0(int *y_position,char *left_text,char *right_text);
void __cdecl core_actor_cpp_drawTextLine_FUN_0040d240(int *y_position,char *text);
int __cdecl core_actor_cpp_CDemonActor_propertyValidatorCallback_FUN_0040d270(CDemonActor *this_ptr,int new_value);
void __cdecl core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor *this_ptr,CActorPropertyList *property_list);
void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3i *start_point,CVector3f *direction_offset);
void __cdecl core_actor_cpp_drawBoundingBox_FUN_0040d470(CBoundingBox3D *bbox,int line_color);
void __cdecl core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor *this_ptr,uint32_t color);
void __cdecl core_actor_cpp_CDemonActor_FUN_0040dec0(CDemonActor *this_ptr);
void __cdecl core_actor_cpp_CActorPropertyList_init_FUN_0040e130(CActorPropertyList *this_ptr);
void __cdecl core_actor_cpp_CActorPropertyList_resetSelection_FUN_0040e150(CActorPropertyList *this_ptr);
template<typename T_func0>
inline CActorProperty * core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList *this_ptr,char *property_name,float *data_ptr,T_func0 callback) {
    (void)this_ptr; (void)property_name; (void)data_ptr; (void)callback; return (CActorProperty *)0;
}
template<typename T_func0>
inline CActorProperty * core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0(CActorPropertyList *this_ptr,char *property_name,float *data_ptr,float min_value,float max_value,T_func0 callback) {
    (void)this_ptr; (void)property_name; (void)data_ptr; (void)min_value; (void)max_value; (void)callback; return (CActorProperty *)0;
}
template<typename T_func0>
inline CActorProperty * core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList *this_ptr,char *property_name,int *data_ptr,T_func0 callback) {
    (void)this_ptr; (void)property_name; (void)data_ptr; (void)callback; return (CActorProperty *)0;
}
template<typename T_func0>
inline CActorProperty * core_actor_cpp_CActorPropertyList_addIntRange_FUN_0040e220(CActorPropertyList *this_ptr,char *property_name,int *data_ptr,int min_value,int max_value,T_func0 callback) {
    (void)this_ptr; (void)property_name; (void)data_ptr; (void)min_value; (void)max_value; (void)callback; return (CActorProperty *)0;
}
template<typename T_func0>
inline CActorProperty * core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260(CActorPropertyList *this_ptr,char *property_name,CVector3f *data_ptr,T_func0 callback) {
    (void)this_ptr; (void)property_name; (void)data_ptr; (void)callback; return (CActorProperty *)0;
}
template<typename T_func0>
inline CActorProperty * core_actor_cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList *this_ptr,char *property_name,char *data_ptr,int max_length,T_func0 callback) {
    (void)this_ptr; (void)property_name; (void)data_ptr; (void)max_length; (void)callback; return (CActorProperty *)0;
}
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList *this_ptr,char *property_name,void *data_ptr);
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addGroundType_FUN_0040e300(CActorPropertyList *this_ptr,char *property_name,int *data_ptr);
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList *this_ptr,char *property_name,int *data_ptr);
template<typename T_func0>
inline CActorProperty * core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList *this_ptr,char *property_name,CDemonActor **data_ptr,int default_index,char *choices,T_func0 callback) {
    (void)this_ptr; (void)property_name; (void)data_ptr; (void)default_index; (void)choices; (void)callback; return (CActorProperty *)0;
}
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList *this_ptr,char *property_name,CKeyFramedModelInstance *data_ptr, int allow_none);
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addFile_FUN_0040e3e0(CActorPropertyList *this_ptr,char *property_name,void *data_ptr,char *search_path, char *extension,int allow_none);
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList *this_ptr,char *property_name,char *data_ptr);
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480(CActorPropertyList *this_ptr,char *property_name,char *data_ptr);
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList *this_ptr,char *property_name,CDeformableModelInstance *data_ptr, int allow_none);
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList *this_ptr,char *property_name,CDeformableModelInstance *data_ptr);
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addClothList_FUN_0040e500(CActorPropertyList *this_ptr,char *property_name,CClothList *data_ptr,int max_count);
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addRuleList_FUN_0040e5a0(CActorPropertyList *this_ptr,char *property_name,CRuleList *data_ptr,int max_count);
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640(CActorPropertyList *this_ptr,char *property_name,int num_pairs,SEnumPair *pairs, int *data_ptr);
template<typename T_func0, typename T_func1>
inline CActorProperty * core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670(CActorPropertyList *this_ptr,char *property_name,T_func0 display_callback,T_func1 action_callback) {
    (void)this_ptr; (void)property_name; (void)display_callback; (void)action_callback; return (CActorProperty *)0;
}
CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addFlags_FUN_0040e6a0(CActorPropertyList *this_ptr,char *property_name,int *data_ptr);
template<typename T_func0>
inline CActorProperty * core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList *this_ptr,EActorPropertyType property_type,char *property_name,void *data_ptr,T_func0 callback) {
    (void)this_ptr; (void)property_type; (void)property_name; (void)data_ptr; (void)callback; return (CActorProperty *)0;
}
void __cdecl core_actor_cpp_CActorPropertyList_calculateLayout_FUN_0040e770(CActorPropertyList *this_ptr,int x,int y,int width);
void __cdecl core_actor_cpp_CActorPropertyList_render_FUN_0040e850(CActorPropertyList *this_ptr,int selected_index);
int __cdecl core_actor_cpp_CActorPropertyList_hitTest_FUN_0040e9c0(CActorPropertyList *this_ptr,int x,int y);
void __cdecl core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50(CActorProperty *this_ptr,CDemonActor *actor,char *output_buffer);
int __cdecl core_actor_cpp_CActorProperty_getNameWidth_FUN_0040ee30(CActorProperty *this_ptr);
int __cdecl core_actor_cpp_CActorProperty_getValueWidth_FUN_0040ee50(CActorProperty *this_ptr,int index);
int __cdecl core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0(CActorProperty *this_ptr,CDemonActor *actor);

