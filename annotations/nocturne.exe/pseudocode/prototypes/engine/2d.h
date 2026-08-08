#pragma once

// Function prototypes for engine/2d.cpp
// Generated from Ghidra function signatures

// Original: engine_2d.c_initGraphicsSystem_FUN_00401010
// Address: 00401010
void __cdecl initGraphicsSystem(void);

// Original: engine_2d.c_cleanupGraphicsSystem_FUN_004012a0
// Address: 004012a0
void __cdecl cleanupGraphicsSystem(void);

// Original: engine_2d.c_drawAntialiasedCharShadow_FUN_004012d0
// Address: 004012d0
void __cdecl drawAntialiasedCharShadow(int char_code,int x_pos,int y_pos);

// Original: engine_2d.c_drawAntialiasedChar_FUN_004013d0
// Address: 004013d0
int __cdecl drawAntialiasedChar(int char_code,int x_pos,int y_pos,int intensity_shift);

// Original: engine_2d.c_drawAntialiasedString_FUN_004014a0
// Address: 004014a0
void __cdecl drawAntialiasedString(char *text,int x_pos,int y_pos,int intensity_shift);

// Original: engine_2d.c_getAntialiasedStringWidth_FUN_004014f0
// Address: 004014f0
int __cdecl getAntialiasedStringWidth(uchar *text);

// Original: engine_2d.c_plotPixel_FUN_00401530
// Address: 00401530
void __cdecl plotPixel(int x,int y);

// Original: engine_2d.c_drawLine_FUN_004015a0
// Address: 004015a0
void __cdecl drawLine(int x1,int y1,int x2,int y2);

// Original: engine_2d.c_plotPixelWithDepth_FUN_00401680
// Address: 00401680
void __cdecl plotPixelWithDepth(int x_coord,int y_coord,uint depth_value);

// Original: engine_2d.c_drawLine3D_FUN_00401710
// Address: 00401710
void __cdecl drawLine3D(int x1,int y1,uint z1,int x2,int y2,uint z2);

// Original: engine_2d.c_findBestPaletteMatch_FUN_00401850
// Address: 00401850
int __cdecl findBestPaletteMatch(int red,int green,int blue,int start_index,int end_index);

// Original: engine_2d.c_buildBlendTables_FUN_00401990
// Address: 00401990
void __cdecl buildBlendTables(char *filename);

// Original: engine_2d.c_loadPaletteFile_FUN_00401bd0
// Address: 00401bd0
void __cdecl loadPaletteFile(char *filename);

// Original: engine_2d.c_drawCharacter_FUN_00401c40
// Address: 00401c40
int __cdecl drawCharacter(int char_code,int x_pos,int y_pos);

// Original: engine_2d.c_project3DPointToScreen_FUN_00401da0
// Address: 00401da0
void __cdecl project3DPointToScreen(int x_3d,int y_3d,int z_depth);

// Original: engine_2d.c_project3DPointClipped_FUN_00401df0
// Address: 00401df0
void __cdecl project3DPointClipped(int x_3d,int y_3d,int z_depth);

// Original: engine_2d.c_setupViewportAndClipping_FUN_00401e30
// Address: 00401e30
void __cdecl setupViewportAndClipping(int left,int top,int right,int bottom);

// Original: engine_2d.c_getStringWidth_FUN_00401ed0
// Address: 00401ed0
int __cdecl getStringWidth(char *text);

// Original: engine_2d.c_drawCharacterMasked_FUN_00401f30
// Address: 00401f30
int __cdecl drawCharacterMasked(int char_code,int x_pos,int y_pos);

// Original: engine_2d.c_drawCharacterMaskedColor_FUN_00402040
// Address: 00402040
int __cdecl drawCharacterMaskedColor(int char_code,int x_pos,int y_pos,int color);

// Original: engine_2d.c_drawCharacterHighlighted_FUN_004021a0
// Address: 004021a0
int __cdecl drawCharacterHighlighted(int char_code,int x_pos,int y_pos);

// Original: engine_2d.c_drawTextWrapped_FUN_00402290
// Address: 00402290
void __cdecl drawTextWrapped(char *text,int x_start,int y_start,int x_max,int y_max);

// Original: engine_2d.c_drawTextMultiline_FUN_00402320
// Address: 00402320
void __cdecl drawTextMultiline(char *text,int x_start,int y_start,int x_max,int y_max);

// Original: engine_2d.c_wrapTextToWidth_FUN_004023b0
// Address: 004023b0
void __cdecl wrapTextToWidth(char *input_text,int max_width,char *output_buffer);

// Original: engine_2d.c_drawTextWrappedColor_FUN_004024e0
// Address: 004024e0
void __cdecl drawTextWrappedColor(char *text,int x_start,int y_start,int x_max,int y_max,int color);

// Original: engine_2d.c_drawTextMultilineColor_FUN_00402570
// Address: 00402570
void __cdecl drawTextMultilineColor(char *text,int x_start,int y_start,int x_max,int y_max,int color);

// Original: engine_2d.c_drawText_FUN_00402600
// Address: 00402600
void __cdecl drawText(char *text,int x,int y);

// Original: engine_2d.c_drawStringMasked_FUN_00402660
// Address: 00402660
void __cdecl drawStringMasked(char *text,int x_pos,int y_pos);

// Original: engine_2d.c_drawString_FUN_004026b0
// Address: 004026b0
void __cdecl drawString(char *text,int x_pos,int y_pos,int color);

// Original: engine_2d.c_drawStringHighlighted_FUN_00402710
// Address: 00402710
void __cdecl drawStringHighlighted(char *text,int x_pos,int y_pos);

// Original: engine_2d.c_drawTextXY_FUN_00402760
// Address: 00402760
void __cdecl drawTextXY(int x,int y,char *text);

// Original: engine_2d.c_drawTextFormatted_FUN_00402780
// Address: 00402780
void __cdecl drawTextFormatted(int x,int y,char *format_string,...) __attribute__((format(printf, 3, 4)));

// Original: engine_2d.c_drawTextRightAligned_FUN_004027f0
// Address: 004027f0
void __cdecl drawTextRightAligned(char *text,int x,int y);

// Original: engine_2d.c_drawTextRightAlignedWrapper_FUN_00402820
// Address: 00402820
void __cdecl drawTextRightAlignedWrapper(int x,int y,char *text);

// Original: engine_2d.c_drawTextRightAlignedFormatted_FUN_00402840
// Address: 00402840
void __cdecl drawTextRightAlignedFormatted(int x,int y,char *format_string,...) __attribute__((format(printf, 3, 4)));

// Original: engine_2d.c_drawTextCenteredAt_FUN_004028b0
// Address: 004028b0
void __cdecl drawTextCenteredAt(char *text,int x,int y);

// Original: engine_2d.c_drawTextCenteredAtWrapper_FUN_004028f0
// Address: 004028f0
void __cdecl drawTextCenteredAtWrapper(int x,int y,char *text);

// Original: engine_2d.c_drawTextCenteredAtFormatted_FUN_00402910
// Address: 00402910
void __cdecl drawTextCenteredAtFormatted(int x,int y,char *format_string,...) __attribute__((format(printf, 3, 4)));

// Original: engine_2d.c_drawTextCentered_FUN_00402980
// Address: 00402980
void __cdecl drawTextCentered(char *text,int left_x,int right_x,int y);

// Original: engine_2d.c_drawTextCenteredReordered_FUN_004029c0
// Address: 004029c0
void __cdecl drawTextCenteredReordered(int left_x,int right_x,int y,char *text);

// Original: engine_2d.c_drawTextCenteredFormatted_FUN_004029f0
// Address: 004029f0
void __cdecl drawTextCenteredFormatted(int left_x,int right_x,int y,char *format_string,...) __attribute__((format(printf, 4, 5)));

// Original: engine_2d.c_drawTextColor_FUN_00402a60
// Address: 00402a60
void __cdecl drawTextColor(char *text,int x,int y);

// Original: engine_2d.c_FUN_00402ad0
// Address: 00402ad0
void FUN_00402ad0(int param_1,int param_2,char *param_3);

// Original: engine_2d.c_FUN_00402af0
// Address: 00402af0
void FUN_00402af0(int param_1,int param_2,char *param_3);

// Original: engine_2d.c_drawTextRightAlignedColor_FUN_00402b60
// Address: 00402b60
void __cdecl drawTextRightAlignedColor(char *text,int x,int y);

// Original: engine_2d.c_FUN_00402b90
// Address: 00402b90
void FUN_00402b90(int param_1,int param_2,char *param_3);

// Original: engine_2d.c_FUN_00402bb0
// Address: 00402bb0
void FUN_00402bb0(int param_1,int param_2,char *param_3);

// Original: engine_2d.c_drawTextCenteredAtColor_FUN_00402c20
// Address: 00402c20
void __cdecl drawTextCenteredAtColor(char *text,int x,int y);

// Original: engine_2d.c_FUN_00402c60
// Address: 00402c60
void FUN_00402c60(int param_1,int param_2,char *param_3);

// Original: engine_2d.c_FUN_00402c80
// Address: 00402c80
void FUN_00402c80(int param_1,int param_2,char *param_3);

// Original: engine_2d.c_drawTextCenteredColor_FUN_00402cf0
// Address: 00402cf0
void __cdecl drawTextCenteredColor(char *text,int left_x,int right_x,int y);

// Original: engine_2d.c_FUN_00402d30
// Address: 00402d30
void __cdecl FUN_00402d30(int left_x,int right_x,int y,char *text);

// Original: engine_2d.c_FUN_00402d60
// Address: 00402d60
void FUN_00402d60(int param_1,int param_2,int param_3,char *param_4);

// Original: engine_2d.c_getTextWrapEnabled_FUN_00402e20
// Address: 00402e20
int __cdecl getTextWrapEnabled(void);

// Original: engine_2d.c_setTextWrapEnabled_FUN_00402e30
// Address: 00402e30
void __cdecl setTextWrapEnabled(int enabled);

// Original: engine_2d.c_disableTextWrap_FUN_00402e50
// Address: 00402e50
void __cdecl disableTextWrap(void);

// Original: engine_2d.c_getTextColor_FUN_00402e60
// Address: 00402e60
int __cdecl getTextColor(void);

// Original: engine_2d.c_setTextColor_FUN_00402e70
// Address: 00402e70
void __cdecl setTextColor(int color);

// Original: engine_2d.c_FUN_00402e90
// Address: 00402e90
void FUN_00402e90(int param_1);

// Original: engine_2d.c_FUN_00403070
// Address: 00403070
void FUN_00403070(char *param_1,int param_2);

// Original: engine_2d.c_FUN_00403130
// Address: 00403130
void __cdecl FUN_00403130(char *filename);

// Original: engine_2d.c_FUN_004031a0
// Address: 004031a0
void FUN_004031a0(int param_1);

// Original: engine_2d.c_loadLightTable_FUN_00403460
// Address: 00403460
void __cdecl loadLightTable(char *filename);

// Original: engine_2d.c_FUN_00403500
// Address: 00403500
void __cdecl FUN_00403500(char *filename);

// Original: engine_2d.c_buildColorLookupTable_FUN_00403570
// Address: 00403570
void __cdecl buildColorLookupTable(void);

// Original: engine_2d.c_loadOrBuildColorMap_FUN_00403630
// Address: 00403630
void __cdecl loadOrBuildColorMap(char *filename);

// Original: engine_2d.c_resetGraphicsSystem_FUN_00403760
// Address: 00403760
void __cdecl resetGraphicsSystem(void);

// Original: engine_2d.c_reinitializeGraphicsSystem_FUN_00403770
// Address: 00403770
void __cdecl reinitializeGraphicsSystem(void);

// Original: engine_2d.c_draw320x200SizeDot_FUN_00403780
// Address: 00403780
void __cdecl draw320x200SizeDot(int x_3d,int y_3d,int z_depth);

// Original: engine_2d.c_computeOutcode_FUN_00403900
// Address: 00403900
int __cdecl computeOutcode(int x,int y,int x_min,int y_min,int x_max,int y_max);

// Original: engine_2d.c_clipLineGlobal_FUN_00403940
// Address: 00403940
void __cdecl clipLineGlobal(int x1,int y1,int x2,int y2);

// Original: engine_2d.c_clipAndDrawLine_FUN_00403990
// Address: 00403990
void __cdecl clipAndDrawLine(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max);

// Original: engine_2d.c_drawHLine_FUN_00403bd0
// Address: 00403bd0
void __cdecl drawHLine(int x1,int y,int x2);

// Original: engine_2d.c_drawVLine_FUN_00403ce0
// Address: 00403ce0
void __cdecl drawVLine(int x,int y1,int y2);

// Original: engine_2d.c_drawRect_FUN_00403e10
// Address: 00403e10
void __cdecl drawRect(int x1,int y1,int x2,int y2);

// Original: engine_2d.c_fillRectColor_FUN_00403e60
// Address: 00403e60
void __cdecl fillRectColor(int x1,int y1,int x2,int y2,int color);

// Original: engine_2d.c_fillRectWithBorder_FUN_00403ef0
// Address: 00403ef0
void __cdecl fillRectWithBorder(int x1,int y1,int x2,int y2,int fill_color,int border_color);

// Original: engine_2d.c_clearInputAndWait_FUN_00403f50
// Address: 00403f50
void __cdecl clearInputAndWait(void);

// Original: engine_2d.c_getInputWithPrompt_FUN_00403fb0
// Address: 00403fb0
int __cdecl getInputWithPrompt(char *buffer,int max_length,int x,int y,char *prompt);

// Original: engine_2d.c_setSolidColor_FUN_00404090
// Address: 00404090
void __cdecl setSolidColor(int red_component,int green_component,int blue_component);

// Original: engine_2d.c_mapFrameBuffer_FUN_00404120
// Address: 00404120
int __cdecl mapFrameBuffer(void *frame_buffer,int width,int height,int bits_per_pixel,int stride);

// Original: engine_2d.c_mapTextureFrameBuffer_FUN_00404340
// Address: 00404340
int __cdecl mapTextureFrameBuffer(void);

// Original: engine_2d.c_unmapFrameBuffer_FUN_00404360
// Address: 00404360
void __cdecl unmapFrameBuffer(void);
