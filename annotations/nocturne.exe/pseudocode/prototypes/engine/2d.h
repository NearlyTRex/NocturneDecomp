#pragma once

// Function prototypes for engine/2d.cpp
// Generated from Ghidra function signatures

// Original: engine_2d.c_plotPixel_FUN_00401530
// Address: 00401530
void __cdecl plotPixel(int param_1,int param_2);

// Original: engine_2d.c_drawLine_FUN_004015a0
// Address: 004015a0
void __cdecl drawLine(int param_1,int param_2,int param_3,int param_4);

// Original: engine_2d.c_plotPixelWithDepth_FUN_00401680
// Address: 00401680
void __cdecl plotPixelWithDepth(int param_1,int param_2,uint param_3);

// Original: engine_2d.c_drawLine3D_FUN_00401710
// Address: 00401710
void __cdecl drawLine3D(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);

// Original: engine_2d.c_findBestPaletteMatch_FUN_00401850
// Address: 00401850
int __cdecl findBestPaletteMatch(int param_1,int param_2,int param_3,int param_4,int param_5);

// Original: engine_2d.c_drawCharacter_FUN_00401c40
// Address: 00401c40
int __cdecl drawCharacter(int param_1,int param_2,int param_3);

// Original: engine_2d.c_project3DPointToScreen_FUN_00401da0
// Address: 00401da0
void __cdecl project3DPointToScreen(int param_1,int param_2,int param_3);

// Original: engine_2d.c_project3DPointClipped_FUN_00401df0
// Address: 00401df0
void project3DPointClipped(int param_1,int param_2,int param_3);

// Original: engine_2d.c_setupViewportAndClipping_FUN_00401e30
// Address: 00401e30
void __cdecl setupViewportAndClipping(int param_1,int param_2,int param_3,int param_4);

// Original: engine_2d.c_getStringWidth_FUN_00401ed0
// Address: 00401ed0
int __cdecl getStringWidth(byte *param_1);

// Original: engine_2d.c_drawCharacterMasked_FUN_00401f30
// Address: 00401f30
int __cdecl drawCharacterMasked(int param_1,int param_2,int param_3);

// Original: engine_2d.c_drawCharacterMaskedColor_FUN_00402040
// Address: 00402040
int __cdecl drawCharacterMaskedColor(int param_1,int param_2,int param_3,int param_4);

// Original: engine_2d.c_drawCharacterHighlighted_FUN_004021a0
// Address: 004021a0
int __cdecl drawCharacterHighlighted(int param_1,int param_2,int param_3);

// Original: engine_2d.c_drawTextWrapped_FUN_00402290
// Address: 00402290
void __cdecl drawTextWrapped(byte *param_1,int param_2,int param_3,int param_4,int param_5);

// Original: engine_2d.c_drawTextMultiline_FUN_00402320
// Address: 00402320
void __cdecl drawTextMultiline(byte *param_1,int param_2,int param_3,undefined4 param_4,int param_5);

// Original: engine_2d.c_wrapTextToWidth_FUN_004023b0
// Address: 004023b0
void wrapTextToWidth(char *param_1,int param_2,char *param_3);

// Original: engine_2d.c_drawTextWrappedColor_FUN_004024e0
// Address: 004024e0
void __cdecl drawTextWrappedColor(byte *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6);

// Original: engine_2d.c_drawTextMultilineColor_FUN_00402570
// Address: 00402570
void __cdecl drawTextMultilineColor(byte *param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6);

// Original: engine_2d.c_drawText_FUN_00402600
// Address: 00402600
void __cdecl drawText(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: engine_2d.c_drawString_FUN_004026b0
// Address: 004026b0
void __cdecl drawString(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4);

// Original: engine_2d.c_drawTextColor_FUN_00402a60
// Address: 00402a60
void __cdecl drawTextColor(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: engine_2d.c_drawTextRightAlignedColor_FUN_00402b60
// Address: 00402b60
void __cdecl drawTextRightAlignedColor(undefined4 param_1,int param_2,undefined4 param_3);

// Original: engine_2d.c_drawTextCenteredAtColor_FUN_00402c20
// Address: 00402c20
void drawTextCenteredAtColor(undefined4 param_1,int param_2,undefined4 param_3);

// Original: engine_2d.c_drawTextCenteredColor_FUN_00402cf0
// Address: 00402cf0
void __cdecl drawTextCenteredColor(undefined4 param_1,int param_2,int param_3,undefined4 param_4);

// Original: engine_2d.c_getTextWrapEnabled_FUN_00402e20
// Address: 00402e20
undefined4 __cdecl getTextWrapEnabled(void);

// Original: engine_2d.c_setTextWrapEnabled_FUN_00402e30
// Address: 00402e30
void __cdecl setTextWrapEnabled(undefined4 param_1);

// Original: engine_2d.c_disableTextWrap_FUN_00402e50
// Address: 00402e50
void __cdecl disableTextWrap(void);

// Original: engine_2d.c_getTextColor_FUN_00402e60
// Address: 00402e60
undefined4 __cdecl getTextColor(void);

// Original: engine_2d.c_setTextColor_FUN_00402e70
// Address: 00402e70
void __cdecl setTextColor(undefined4 param_1);

// Original: engine_2d.c_buildColorLookupTable_FUN_00403570
// Address: 00403570
void __cdecl buildColorLookupTable(void);

// Original: engine_2d.c_resetGraphicsSystem_FUN_00403760
// Address: 00403760
void __cdecl resetGraphicsSystem(void);

// Original: engine_2d.c_reinitializeGraphicsSystem_FUN_00403770
// Address: 00403770
void __cdecl reinitializeGraphicsSystem(void);

// Original: engine_2d.c_computeOutcode_FUN_00403900
// Address: 00403900
byte __cdecl computeOutcode(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);

// Original: engine_2d.c_clipLineGlobal_FUN_00403940
// Address: 00403940
void clipLineGlobal(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: engine_2d.c_clipAndDrawLine_FUN_00403990
// Address: 00403990
void __cdecl clipAndDrawLine(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);

// Original: engine_2d.c_drawHLine_FUN_00403bd0
// Address: 00403bd0
int __cdecl drawHLine(int param_1,int param_2,int param_3);

// Original: engine_2d.c_drawVLine_FUN_00403ce0
// Address: 00403ce0
undefined8 __cdecl drawVLine(int param_1,int param_2,int param_3);

// Original: engine_2d.c_drawRect_FUN_00403e10
// Address: 00403e10
void __cdecl drawRect(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: engine_2d.c_fillRectColor_FUN_00403e60
// Address: 00403e60
void __cdecl fillRectColor(int param_1,int param_2,int param_3,int param_4,undefined4 param_5);

// Original: engine_2d.c_fillRectWithBorder_FUN_00403ef0
// Address: 00403ef0
void __cdecl fillRectWithBorder(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_2d.c_clearInputAndWait_FUN_00403f50
// Address: 00403f50
void __cdecl clearInputAndWait(void);

// Original: engine_2d.c_getInputWithPrompt_FUN_00403fb0
// Address: 00403fb0
uint getInputWithPrompt(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: engine_2d.c_setSolidColor_FUN_00404090
// Address: 00404090
void setSolidColor(int param_1,int param_2,uint param_3);

// Original: engine_2d.c_mapFrameBuffer_FUN_00404120
// Address: 00404120
int __cdecl mapFrameBuffer(int param_1,int param_2,int param_3,int param_4,uint param_5);

// Original: engine_2d.c_mapTextureFrameBuffer_FUN_00404340
// Address: 00404340
void mapTextureFrameBuffer(void);

// Original: engine_2d.c_unmapFrameBuffer_FUN_00404360
// Address: 00404360
int unmapFrameBuffer(void);
