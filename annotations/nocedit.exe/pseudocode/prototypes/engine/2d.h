#pragma once

// Function prototypes for engine/2d.cpp
// Generated from Ghidra function signatures

// Original: engine_2d.c_initGraphicsSystem_FUN_00401010
// Address: 00401010
void __cdecl initGraphicsSystem(void);

// Original: engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90
// Address: 00401130
void __cdecl cleanupGraphicsSystem(void);

// Original: engine_2d.c_plotPixel_FUN_00401140
// Address: 00401140
void __cdecl plotPixel(int x,int y);

// Original: engine_2d.c_drawLine_FUN_004011b0
// Address: 004011b0
void __cdecl drawLine(int x1,int y1,int x2,int y2);

// Original: engine_2d.c_plotPixelWithDepth_FUN_00401290
// Address: 00401290
void __cdecl plotPixelWithDepth(int x_coord,int y_coord,uint depth_value);

// Original: engine_2d.c_drawLine3D_FUN_00401320
// Address: 00401320
void __cdecl drawLine3D(int x1,int y1,uint z1,int x2,int y2,uint z2);

// Original: engine_2d.c_findBestPaletteMatch_FUN_00401460
// Address: 00401460
int __cdecl findBestPaletteMatch(int red,int green,int blue,int start_index,int end_index);

// Original: engine_2d.c_doNothing_FUN_00401590
// Address: 00401590
void __cdecl doNothing(char *filename);

// Original: engine_2d.c_loadPaletteFile_FUN_004015a0
// Address: 004015a0
void __cdecl loadPaletteFile(char *filename);

// Original: engine_2d.c_drawCharacter_FUN_00401610
// Address: 00401610
int __cdecl drawCharacter(int char_code,int x_pos,int y_pos);

// Original: engine_2d.c_project3DPointToScreen_FUN_00401770
// Address: 00401770
void __cdecl project3DPointToScreen(int x_3d,int y_3d,int z_depth);

// Original: engine_2d.c_project3DPointClipped_FUN_004017c0
// Address: 004017c0
void __cdecl project3DPointClipped(int x_3d,int y_3d,int z_depth);

// Original: engine_2d.c_setupViewportAndClipping_FUN_00401800
// Address: 00401800
void __cdecl setupViewportAndClipping(int left,int top,int right,int bottom);

// Original: engine_2d.c_getStringWidth_FUN_004018a0
// Address: 004018a0
int __cdecl getStringWidth(char *text);

// Original: engine_2d.c_drawCharacterMasked_FUN_00401900
// Address: 00401900
int __cdecl drawCharacterMasked(int char_code,int x_pos,int y_pos);

// Original: engine_2d.c_drawCharacter_FUN_00401a10
// Address: 00401a10
int __cdecl drawCharacter(int char_code,int x_pos,int y_pos,int color);

// Original: engine_2d.c_drawCharacterHighlighted_FUN_00401b70
// Address: 00401b70
int __cdecl drawCharacterHighlighted(int char_code,int x_pos,int y_pos);

// Original: engine_2d.c_drawTextWrapped_FUN_00401c60
// Address: 00401c60
void __cdecl drawTextWrapped(char *text,int x_start,int y_start,int x_max,int y_max);

// Original: engine_2d.c_drawTextMultiline_FUN_00401cf0
// Address: 00401cf0
void __cdecl drawTextMultiline(char *text,int x_start,int y_start,int x_max,int y_max);

// Original: engine_2d.c_wrapTextToWidth_FUN_00401d80
// Address: 00401d80
void __cdecl wrapTextToWidth(char *input_text,int max_width,char *output_buffer);

// Original: engine_2d.c_drawTextWrappedColor_FUN_00401eb0
// Address: 00401eb0
void __cdecl drawTextWrappedColor(char *text,int x_start,int y_start,int x_max,int y_max,int color);

// Original: engine_2d.c_drawTextMultilineColor_FUN_00401f40
// Address: 00401f40
void __cdecl drawTextMultilineColor(char *text,int x_start,int y_start,int x_max,int y_max,int color);

// Original: engine_2d.c_drawText_FUN_00401fd0
// Address: 00401fd0
void __cdecl drawText(char *text,int x,int y);

// Original: engine_2d.c_drawStringMasked_FUN_00402030
// Address: 00402030
void __cdecl drawStringMasked(char *text,int x_pos,int y_pos);

// Original: engine_2d.c_drawString_FUN_00402080
// Address: 00402080
void __cdecl drawString(char *text,int x_pos,int y_pos,int color);

// Original: engine_2d.c_drawStringHighlighted_FUN_004020e0
// Address: 004020e0
void __cdecl drawStringHighlighted(char *text,int x_pos,int y_pos);

// Original: engine_2d.c_drawTextXY_FUN_00402130
// Address: 00402130
void __cdecl drawTextXY(int x,int y,char *text);

// Original: engine_2d.c_drawTextFormatted_FUN_00402150
// Address: 00402150
void __cdecl drawTextFormatted(int x,int y,char *format_string,...);

// Original: engine_2d.c_drawTextRightAligned_FUN_004021c0
// Address: 004021c0
void __cdecl drawTextRightAligned(char *text,int x,int y);

// Original: engine_2d.c_drawTextRightAlignedWrapper_FUN_004021f0
// Address: 004021f0
void __cdecl drawTextRightAlignedWrapper(int x,int y,char *text);

// Original: engine_2d.c_drawTextRightAlignedFormatted_FUN_00402210
// Address: 00402210
void __cdecl drawTextRightAlignedFormatted(int x,int y,char *format_string,...);

// Original: engine_2d.c_drawTextCenteredAt_FUN_00402280
// Address: 00402280
void __cdecl drawTextCenteredAt(char *text,int x,int y);

// Original: engine_2d.c_drawTextCenteredAtWrapper_FUN_004022c0
// Address: 004022c0
void __cdecl drawTextCenteredAtWrapper(int x,int y,char *text);

// Original: engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0
// Address: 004022e0
void __cdecl drawTextCenteredAtFormatted(int x,int y,char *format_string,...);

// Original: engine_2d.c_drawTextCentered_FUN_00402350
// Address: 00402350
void __cdecl drawTextCentered(char *text,int left_x,int right_x,int y);

// Original: engine_2d.c_drawTextCenteredReordered_FUN_00402390
// Address: 00402390
void __cdecl drawTextCenteredReordered(int left_x,int right_x,int y,char *text);

// Original: engine_2d.c_drawTextCenteredFormatted_FUN_004023c0
// Address: 004023c0
void __cdecl drawTextCenteredFormatted(int left_x,int right_x,int y,char *format_string,...);

// Original: engine_2d.c_drawTextColor_FUN_00402430
// Address: 00402430
void __cdecl drawTextColor(char *text,int x,int y);

// Original: engine_2d.c_drawTextColorWrapper_FUN_004024a0
// Address: 004024a0
void __cdecl drawTextColorWrapper(int x,int y,char *text);

// Original: engine_2d.c_drawTextColorFormatted_FUN_004024c0
// Address: 004024c0
void __cdecl drawTextColorFormatted(int x,int y,char *format_string,...);

// Original: engine_2d.c_drawTextRightAlignedColor_FUN_00402530
// Address: 00402530
void __cdecl drawTextRightAlignedColor(char *text,int x,int y);

// Original: engine_2d.c_drawTextRightAlignedColorWrapper_FUN_00402560
// Address: 00402560
void __cdecl drawTextRightAlignedColorWrapper(int x,int y,char *text);

// Original: engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580
// Address: 00402580
void __cdecl drawTextRightAlignedColorFormatted(int x,int y,char *format_string,...);

// Original: engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
// Address: 004025f0
void __cdecl drawTextCenteredAtColor(char *text,int x,int y);

// Original: engine_2d.c_drawTextCenteredAtColorWrapper_FUN_00402630
// Address: 00402630
void __cdecl drawTextCenteredAtColorWrapper(int x,int y,char *text);

// Original: engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650
// Address: 00402650
void __cdecl drawTextCenteredAtColorFormatted(int x,int y,char *format_string,...);

// Original: engine_2d.c_drawTextCenteredColor_FUN_004026c0
// Address: 004026c0
void __cdecl drawTextCenteredColor(char *text,int left_x,int right_x,int y);

// Original: engine_2d.c_drawTextCenteredXYColor_FUN_00402700
// Address: 00402700
void __cdecl drawTextCenteredXYColor(int left_x,int right_x,int y,char *text);

// Original: engine_2d.c_drawTextCenteredColorFormatted_FUN_00402730
// Address: 00402730
void __cdecl drawTextCenteredColorFormatted(int left_x,int right_x,int y,char *format_string,...);

// Original: engine_2d.c_getStringWidthFormatted_FUN_004027a0
// Address: 004027a0
int __cdecl getStringWidthFormatted(char *format_string,...);

// Original: engine_2d.c_getTextWrapEnabled_FUN_004027f0
// Address: 004027f0
int __cdecl getTextWrapEnabled(void);

// Original: engine_2d.c_setTextWrapEnabled_FUN_00402800
// Address: 00402800
void __cdecl setTextWrapEnabled(int enabled);

// Original: engine_2d.c_enableTextWrap_FUN_00402810
// Address: 00402810
void __cdecl enableTextWrap(void);

// Original: engine_2d.c_disableTextWrap_FUN_00402820
// Address: 00402820
void __cdecl disableTextWrap(void);

// Original: engine_2d.c_getTextColor_FUN_00402830
// Address: 00402830
int __cdecl getTextColor(void);

// Original: engine_2d.c_setTextColor_FUN_00402840
// Address: 00402840
void __cdecl setTextColor(int color);

// Original: engine_2d.c_doNothing_FUN_00402860
// Address: 00402860
void __cdecl doNothing(char *filename);

// Original: engine_2d.c_buildColorLookupTable_FUN_00402870
// Address: 00402870
void __cdecl buildColorLookupTable(void);

// Original: engine_2d.c_loadOrBuildColorMap_FUN_00402930
// Address: 00402930
void __cdecl loadOrBuildColorMap(char *filename);

// Original: engine_2d.c_resetGraphicsSystem_FUN_005ed2a0
// Address: 00402a70
void __cdecl resetGraphicsSystem(void);

// Original: engine_2d.c_reinitializeGraphicsSystem_FUN_005ed4b0
// Address: 00402a80
void __cdecl reinitializeGraphicsSystem(void);

// Original: engine_2d.c_draw320x200SizeDot_FUN_00402a8e
// Address: 00402a8e
void __cdecl draw320x200SizeDot(int x_3d,int y_3d,int z_depth);

// Original: engine_2d.c_computeOutcode_FUN_00402c10
// Address: 00402c10
int __cdecl computeOutcode(int x,int y,int x_min,int y_min,int x_max,int y_max);

// Original: engine_2d.c_clipLineGlobal_FUN_00402c50
// Address: 00402c50
void __cdecl clipLineGlobal(int x1,int y1,int x2,int y2);

// Original: engine_2d.c_clipAndDrawLine_FUN_00402ca0
// Address: 00402ca0
void __cdecl clipAndDrawLine(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max);

// Original: engine_2d.c_drawHLine_FUN_00402ee0
// Address: 00402ee0
void __cdecl drawHLine(int x1,int y,int x2);

// Original: engine_2d.c_drawVLine_FUN_00402ff0
// Address: 00402ff0
void __cdecl drawVLine(int x,int y1,int y2);

// Original: engine_2d.c_drawRect_FUN_00403120
// Address: 00403120
void __cdecl drawRect(int x1,int y1,int x2,int y2);

// Original: engine_2d.c_fillRectColor_FUN_00403170
// Address: 00403170
void __cdecl fillRectColor(int x1,int y1,int x2,int y2,int color);

// Original: engine_2d.c_fillRectWithBorder_FUN_00403200
// Address: 00403200
void __cdecl fillRectWithBorder(int x1,int y1,int x2,int y2,int fill_color,int border_color);

// Original: engine_2d.c_clearInputAndWait_FUN_00403260
// Address: 00403260
void __cdecl clearInputAndWait(void);

// Original: engine_2d.c_getInputWithPrompt_FUN_004032c0
// Address: 004032c0
int __cdecl getInputWithPrompt(char *buffer,int max_length,int x,int y,char *prompt);

// Original: engine_2d.c_setSolidColor_FUN_004033a0
// Address: 004033a0
void __cdecl setSolidColor(int red_component,int green_component,int blue_component);

// Original: engine_2d.c_mapFrameBuffer_FUN_00403430
// Address: 00403430
int __cdecl mapFrameBuffer(int width,int height,int bits_per_pixel,int stride,void *frame_buffer);

// Original: engine_2d.c_mapTextureFrameBuffer_FUN_00403650
// Address: 00403650
int __cdecl mapTextureFrameBuffer(void);

// Original: engine_2d.c_unmapFrameBuffer_FUN_00403670
// Address: 00403670
void __cdecl unmapFrameBuffer(void);
