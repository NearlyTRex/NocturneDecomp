#pragma once

// Function prototypes for engine/font.cpp
// Generated from Ghidra function signatures

// Original: engine_font.cpp_isRectangleClipped_FUN_0048fd00
// Address: 0048fd00
undefined4 isRectangleClipped(int param_1,int param_2,int param_3,int param_4);

// Original: engine_font.cpp_clipCharacter_FUN_0048fd50
// Address: 0048fd50
int __cdecl clipCharacter(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width);

// Original: engine_font.cpp_CBitFont_ctor_FUN_0048fe10
// Address: 0048fe10
CBitFont * __cdecl CBitFont::ctor(CBitFont *this_ptr);

// Original: engine_font.cpp_FUN_0048fe30
// Address: 0048fe30
CBitFont * FUN_0048fe30(CBitFont *param_1);

// Original: engine_font.cpp_CBitFont_reset_FUN_0048fe50
// Address: 0048fe50
void __cdecl CBitFont::reset(CBitFont *this_ptr);

// Original: engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40
// Address: 0048ff40
void __cdecl CBitFont::openFontFile(CBitFont *this_ptr,char *filename,int width,int height,int load_flags);

// Original: engine_font.cpp_CBitFont_loadBitmap_FUN_0048ff70
// Address: 0048ff70
void __cdecl CBitFont::loadBitmap(CBitFont *this_ptr,char *filename,int width,int height,int first_char);

// Original: engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0
// Address: 004901d0
void __cdecl CBitFont::loadNewBitmap(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags);

// Original: engine_font.cpp_FUN_00490210
// Address: 00490210
void FUN_00490210(CBitFont *param_1,char *param_2);

// Original: engine_font.cpp_CBitFont_free_FUN_00490420
// Address: 00490420
void __cdecl CBitFont::free(CBitFont *this_ptr);

// Original: engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460
// Address: 00490460
void __cdecl CBitFont::setInitializedFlag(CBitFont *this_ptr);

// Original: engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_00490470
// Address: 00490470
void CBitFont::parseCharacterMetrics(int param_1,int param_2,int param_3,int param_4,int param_5);

// Original: engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_00490920
// Address: 00490920
int CBitFont::calculateCharacterHeight(int param_1,byte *param_2,int param_3,int param_4,int param_5);

// Original: engine_font.cpp_CBitFont_drawText_FUN_00490980
// Address: 00490980
int __cdecl CBitFont::drawText(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value);

// Original: engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0
// Address: 00490af0
int __cdecl CBitFont::drawTextWrapper(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text);

// Original: engine_font.cpp_CBitFont_drawTextF_FUN_00490b20
// Address: 00490b20
void CBitFont::drawTextF(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_font.cpp_FUN_00490b70
// Address: 00490b70
void FUN_00490b70(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6,va_list_t param_7);

// Original: engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0
// Address: 00490be0
int __cdecl CBitFont::drawTextRight(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text);

// Original: engine_font.cpp_FUN_00490c20
// Address: 00490c20
void FUN_00490c20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_font.cpp_FUN_00490c70
// Address: 00490c70
void FUN_00490c70(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6,va_list_t param_7);

// Original: engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0
// Address: 00490ce0
void CBitFont::drawTextCenter(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6);

// Original: engine_font.cpp_FUN_00490d20
// Address: 00490d20
void FUN_00490d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_font.cpp_FUN_00490d70
// Address: 00490d70
void FUN_00490d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,char *param_6,va_list_t param_7);

// Original: engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
// Address: 00490de0
int __cdecl CBitFont::drawTextCenterInBounds(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *text);

// Original: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30
// Address: 00490e30
void CBitFont::drawTextCenterInBoundsF(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char *param_7);

// Original: engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_00490e80
// Address: 00490e80
int __cdecl CBitFont::drawTextCenterInBoundsFV(CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args);

// Original: engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0
// Address: 00490ef0
int __cdecl CBitFont::drawTextCenterInClip(CBitFont *this_ptr,int y,int color_mode,int color_value,char *text);

// Original: engine_font.cpp_CBitFont_printCenterF_FUN_00490f50
// Address: 00490f50
void CBitFont::printCenterF(CBitFont *param_1,int param_2,int param_3,int param_4,char *param_5);

// Original: engine_font.cpp_CBitFont_printCenterFV_FUN_00490f90
// Address: 00490f90
int __cdecl CBitFont::printCenterFV(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format_string,va_list_t args);

// Original: engine_font.cpp_setShadowColor_FUN_00490ff0
// Address: 00490ff0
void setShadowColor(uint param_1,uint param_2,uint param_3);

// Original: engine_font.cpp_getDefaultTextColor_FUN_00491140
// Address: 00491140
int __cdecl getDefaultTextColor(void);

// Original: engine_font.cpp_setDefaultTextColor_FUN_00491150
// Address: 00491150
void __cdecl setDefaultTextColor(int text_color);

// Original: engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160
// Address: 00491160
void __cdecl drawAlphaBlendedPixels(uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color);

// Original: engine_font.cpp_CBitFont_render3DCharacter_FUN_004911f0
// Address: 004911f0
void __cdecl CBitFont::render3DCharacter(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode);

// Original: engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0
// Address: 004916c0
int __cdecl CBitFont::drawCharacter(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);

// Original: engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
// Address: 00492da0
int __cdecl CBitFont::getTextWidth(CBitFont *param_1,byte *param_2);

// Original: engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
// Address: 00492e60
int __cdecl CBitFont::getTextHeight(CBitFont *this_ptr,char *text_string);

// Original: engine_font.cpp_CBitFont_wrapText_FUN_00492f30
// Address: 00492f30
int __cdecl CBitFont::wrapText(CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width,int max_pixel_width);

// Original: engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0
// Address: 004930b0
int __cdecl CBitFont::getCharWidth(CBitFont *font,int char_code);

// Original: engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
// Address: 004930e0
int __cdecl CBitFont::getCharHeight(CBitFont *this_ptr,int char_code);

// Original: engine_font.cpp_CBitFont_getCharYOffset_FUN_00493110
// Address: 00493110
int __cdecl CBitFont::getCharYOffset(CBitFont *this_ptr,int char_code);

// Original: engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140
// Address: 00493140
void __cdecl CBitFont::setCharYOffsetRange(CBitFont *this_ptr,int offset_value,int start_char,int end_char);

// Original: engine_font.cpp_CBitFont_setFontReady_FUN_004931a0
// Address: 004931a0
void __cdecl CBitFont::setFontReady(CBitFont *this_ptr,int value);

// Original: engine_font.cpp_CBitFont_remapPalette_FUN_004931b0
// Address: 004931b0
void __cdecl CBitFont::remapPalette(CBitFont *this_ptr);

// Original: engine_font.cpp_CBitFont_getLineSpacing_FUN_00493390
// Address: 00493390
undefined4 CBitFont::getLineSpacing(void);

// Original: engine_font.cpp_CBitFont_showFontTest_FUN_004933c0
// Address: 004933c0
void CBitFont::showFontTest(CBitFont *param_1,uint param_2);

// Original: engine_font.cpp_CBitFont_showExtendedFontTest_FUN_00493760
// Address: 00493760
void CBitFont::showExtendedFontTest(CBitFont *param_1,uint param_2,uint param_3);

// Original: engine_font.cpp_packPixelScaled_FUN_00494020
// Address: 00494020
uint packPixelScaled(uint param_1,uint param_2,uint param_3);

// Original: engine_font.cpp_packPixelNative_FUN_00494080
// Address: 00494080
uint packPixelNative(void);
