#pragma once

// Function prototypes for engine/2d.cpp
// Generated from Ghidra function signatures

// Original: engine_2d.c_initGraphicsSystem_FUN_00401010
// Address: 00401010
void initGraphicsSystem(void);

// Original: engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90
// Address: 00401130
void cleanupGraphicsSystem(void);

// Original: engine_2d.c_plotPixel_FUN_00401140
// Address: 00401140
void plotPixel(int x, int y);

// Original: engine_2d.c_drawLine_FUN_004011b0
// Address: 004011b0
void drawLine(int x1, int y1, int x2, int y2);

// Original: engine_2d.c_plotPixelWithDepth_FUN_00401290
// Address: 00401290
void plotPixelWithDepth(int x_coord, int y_coord, uint depth_value);

// Original: engine_2d.c_drawLine3D_FUN_00401320
// Address: 00401320
void drawLine3D(int x1, int y1, uint z1, int x2, int y2, uint z2);

// Original: engine_2d.c_findBestPaletteMatch_FUN_00401460
// Address: 00401460
int findBestPaletteMatch(int red, int green, int blue, int start_index, int end_index);

// Original: engine_2d.c_doNothing_FUN_00401590
// Address: 00401590
void doNothing(void);

// Original: engine_2d.c_loadPaletteFile_FUN_004015a0
// Address: 004015a0
void loadPaletteFile(char * filename);

// Original: engine_2d.c_drawCharacter_FUN_00401610
// Address: 00401610
int drawCharacter(int char_code, int x_pos, int y_pos);

// Original: engine_2d.c_project3DPointToScreen_FUN_00401770
// Address: 00401770
void project3DPointToScreen(int x_3d, int y_3d, int z_depth);

// Original: engine_2d.c_project3DPointClipped_FUN_004017c0
// Address: 004017c0
void project3DPointClipped(int x_3d, int y_3d, int z_depth);

// Original: engine_2d.c_setupViewportAndClipping_FUN_00401800
// Address: 00401800
void setupViewportAndClipping(int left, int top, int right, int bottom);

// Original: engine_2d.c_getStringWidth_FUN_004018a0
// Address: 004018a0
int getStringWidth(char * text);

// Original: engine_2d.c_drawCharacterMasked_FUN_00401900
// Address: 00401900
int drawCharacterMasked(int char_code, int x_pos, int y_pos);

// Original: engine_2d.c_drawCharacter_FUN_00401a10
// Address: 00401a10
int drawCharacter(int char_code, int x_pos, int y_pos, int color);

// Original: engine_2d.c_drawCharacterHighlighted_FUN_00401b70
// Address: 00401b70
int drawCharacterHighlighted(int char_code, int x_pos, int y_pos);

// Original: engine_2d.c_drawTextWrapped_FUN_00401c60
// Address: 00401c60
void drawTextWrapped(char * text, int x_start, int y_start, int x_max, int y_max);

// Original: engine_2d.c_drawTextMultiline_FUN_00401cf0
// Address: 00401cf0
void drawTextMultiline(char * text, int x_start, int y_start, int y_max);

// Original: engine_2d.c_wrapTextToWidth_FUN_00401d80
// Address: 00401d80
void wrapTextToWidth(char * input_text, int max_width, char * output_buffer);

// Original: engine_2d.c_drawTextWrappedColor_FUN_00401eb0
// Address: 00401eb0
void drawTextWrappedColor(char * text, int x_start, int y_start, int x_max, int y_max, int color);

// Original: engine_2d.c_drawTextMultilineColor_FUN_00401f40
// Address: 00401f40
void drawTextMultilineColor(char * text, int x_start, int y_start, int y_max, int color);

// Original: engine_2d.c_drawText_FUN_00401fd0
// Address: 00401fd0
void drawText(char * text, int x_pos, int y_pos);

// Original: engine_2d.c_drawStringMasked_FUN_00402030
// Address: 00402030
void drawStringMasked(char * text, int x_pos, int y_pos);

// Original: engine_2d.c_drawString_FUN_00402080
// Address: 00402080
void drawString(char * text, int x_pos, int y_pos, int color);

// Original: engine_2d.c_drawStringHighlighted_FUN_004020e0
// Address: 004020e0
void drawStringHighlighted(char * text, int x_pos, int y_pos);

// Original: engine_2d.c_drawTextXY_FUN_00402130
// Address: 00402130
void drawTextXY(int x_pos, int y_pos, char * text);

// Original: engine_2d.c_drawTextFormatted_FUN_00402150
// Address: 00402150
void drawTextFormatted(char * format_string, int x_pos, int y_pos, ...);

// Original: engine_2d.c_drawTextRightAligned_FUN_004021c0
// Address: 004021c0
void drawTextRightAligned(char * text, int y_pos, int right_x);

// Original: engine_2d.c_drawTextRightAlignedWrapper_FUN_004021f0
// Address: 004021f0
void drawTextRightAlignedWrapper(char * text, int y_pos, int right_x);

// Original: engine_2d.c_drawTextRightAlignedFormatted_FUN_00402210
// Address: 00402210
void drawTextRightAlignedFormatted(char * format_string, int y_pos, int right_x, ...);

// Original: engine_2d.c_drawTextCenteredAt_FUN_00402280
// Address: 00402280
void drawTextCenteredAt(char * text, int center_x, int y_pos);

// Original: engine_2d.c_drawTextCenteredAtWrapper_FUN_004022c0
// Address: 004022c0
void drawTextCenteredAtWrapper(char * text, int center_x, int y_pos);

// Original: engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0
// Address: 004022e0
void drawTextCenteredAtFormatted(char * format_string, int center_x, int y_pos, ...);

// Original: engine_2d.c_drawTextCentered_FUN_00402350
// Address: 00402350
void drawTextCentered(char * text, int left_x, int right_x, int y_pos);

// Original: engine_2d.c_drawTextCenteredReordered_FUN_00402390
// Address: 00402390
void drawTextCenteredReordered(char * text, int left_x, int right_x, int y_pos);

// Original: engine_2d.c_drawTextCenteredFormatted_FUN_004023c0
// Address: 004023c0
void drawTextCenteredFormatted(char * format_string, int left_x, int right_x, int y_pos, ...);

// Original: engine_2d.c_drawTextColor_FUN_00402430
// Address: 00402430
void drawTextColor(char * text, int x_pos, int y_pos);

// Original: engine_2d.c_drawTextColorWrapper_FUN_004024a0
// Address: 004024a0
void drawTextColorWrapper(char * text, int x_pos, int y_pos);

// Original: engine_2d.c_drawTextColorFormatted_FUN_004024c0
// Address: 004024c0
void drawTextColorFormatted(char * format_string, int x_pos, int y_pos, ...);

// Original: engine_2d.c_drawTextRightAlignedColor_FUN_00402530
// Address: 00402530
void drawTextRightAlignedColor(char * text, int y_pos, int right_x);

// Original: engine_2d.c_drawTextRightAlignedColorWrapper_FUN_00402560
// Address: 00402560
void drawTextRightAlignedColorWrapper(char * text, int y_pos, int right_x);

// Original: engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580
// Address: 00402580
void drawTextRightAlignedColorFormatted(char * format_string, int y_pos, int right_x, ...);

// Original: engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
// Address: 004025f0
void drawTextCenteredAtColor(char * text, int center_x, int y_pos);

// Original: engine_2d.c_drawTextCenteredAtColorWrapper_FUN_00402630
// Address: 00402630
void drawTextCenteredAtColorWrapper(char * text, int center_x, int y_pos);

// Original: engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650
// Address: 00402650
void drawTextCenteredAtColorFormatted(char * format_string, int center_x, int y_pos, ...);

// Original: engine_2d.c_drawTextCenteredColor_FUN_004026c0
// Address: 004026c0
void drawTextCenteredColor(char * text, int left_x, int right_x, int y_pos);

// Original: engine_2d.c_drawTextCenteredXYColor_FUN_00402700
// Address: 00402700
void drawTextCenteredXYColor(int left_x, int right_x, int y_pos, char * text);

// Original: engine_2d.c_drawTextCenteredColorFormatted_FUN_00402730
// Address: 00402730
void drawTextCenteredColorFormatted(char * format_string, int left_x, int right_x, int y_pos, ...);

// Original: engine_2d.c_getStringWidthFormatted_FUN_004027a0
// Address: 004027a0
int getStringWidthFormatted(char * format_string, ...);

// Original: engine_2d.c_getTextWrapEnabled_FUN_004027f0
// Address: 004027f0
int getTextWrapEnabled(void);

// Original: engine_2d.c_setTextWrapEnabled_FUN_00402800
// Address: 00402800
void setTextWrapEnabled(int enabled);

// Original: engine_2d.c_enableTextWrap_FUN_00402810
// Address: 00402810
void enableTextWrap(void);

// Original: engine_2d.c_disableTextWrap_FUN_00402820
// Address: 00402820
void disableTextWrap(void);

// Original: engine_2d.c_getTextColor_FUN_00402830
// Address: 00402830
int getTextColor(void);

// Original: engine_2d.c_setTextColor_FUN_00402840
// Address: 00402840
void setTextColor(int color);

// Original: engine_2d.c_doNothing_FUN_00402860
// Address: 00402860
void doNothing(void);

// Original: engine_2d.c_buildColorLookupTable_FUN_00402870
// Address: 00402870
void buildColorLookupTable(void);

// Original: engine_2d.c_loadOrBuildColorMap_FUN_00402930
// Address: 00402930
void loadOrBuildColorMap(char * palette_filename);

// Original: engine_2d.c_resetGraphicsSystem_FUN_005ed2a0
// Address: 00402a70
void resetGraphicsSystem(void);

// Original: engine_2d.c_reinitializeGraphicsSystem_FUN_005ed4b0
// Address: 00402a80
void reinitializeGraphicsSystem(void);

// Original: engine_2d.c_draw320x200SizeDot_FUN_00402a8e
// Address: 00402a8e
undefined draw320x200SizeDot();

// Original: engine_2d.c_computeOutcode_FUN_00402c10
// Address: 00402c10
byte computeOutcode(int x, int y, int x_min, int y_min, int x_max, int y_max);

// Original: engine_2d.c_clipLineGlobal_FUN_00402c50
// Address: 00402c50
void clipLineGlobal(int * x1, int * y1, int * x2, int * y2);

// Original: engine_2d.c_clipAndDrawLine_FUN_00402ca0
// Address: 00402ca0
void clipAndDrawLine(int * x1, int * y1, int * x2, int * y2, int x_min, int y_min, int x_max, int y_max);

// Original: engine_2d.c_drawHLine_FUN_00402ee0
// Address: 00402ee0
void drawHLine(int x1, int y, int x2);

// Original: engine_2d.c_drawVLine_FUN_00402ff0
// Address: 00402ff0
void drawVLine(int x, int y1, int y2);

// Original: engine_2d.c_drawRect_FUN_00403120
// Address: 00403120
void drawRect(int x1, int y1, int x2, int y2);

// Original: engine_2d.c_fillRectColor_FUN_00403170
// Address: 00403170
void fillRectColor(int x1, int y1, int x2, int y2, int color);

// Original: engine_2d.c_fillRectWithBorder_FUN_00403200
// Address: 00403200
void fillRectWithBorder(int x1, int y1, int x2, int y2, int fill_color, int border_color);

// Original: engine_2d.c_clearInputAndWait_FUN_00403260
// Address: 00403260
void clearInputAndWait(void);

// Original: engine_2d.c_getInputWithPrompt_FUN_004032c0
// Address: 004032c0
int getInputWithPrompt(char * buffer, int max_length, int x, int y, char * prompt);

// Original: engine_2d.c_setSolidColor_FUN_004033a0
// Address: 004033a0
void setSolidColor(int red_component, int green_component, int blue_component);

// Original: engine_2d.c_mapFrameBuffer_FUN_00403430
// Address: 00403430
int mapFrameBuffer(int width, int height, int bits_per_pixel, int stride, void * frame_buffer);

// Original: engine_2d.c_mapTextureFrameBuffer_FUN_00403650
// Address: 00403650
int mapTextureFrameBuffer(void);

// Original: engine_2d.c_unmapFrameBuffer_FUN_00403670
// Address: 00403670
void unmapFrameBuffer(void);
