#pragma once

// Function prototypes for engine/font.cpp
// Generated from Ghidra function signatures

// Original: engine_font.cpp_isRectangleClipped_FUN_004ccd80
// Address: 004ccd80
int __cdecl isRectangleClipped(int rect_width,int rect_height,int rect_x,int rect_y);

// Original: engine_font.cpp_clipCharacter_FUN_004ccdd0
// Address: 004ccdd0
int __cdecl clipCharacter(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width);

// Original: engine_font.cpp_CBitFont_ctor_FUN_004cce90
// Address: 004cce90
CBitFont * __cdecl CBitFont::ctor(CBitFont *this_ptr);

// Original: engine_font.cpp_CBitFont_dtor_FUN_004cceb0
// Address: 004cceb0
CBitFont * __cdecl CBitFont::dtor(CBitFont *this_ptr,uint flags);

// Original: engine_font.cpp_CBitFont_reset_FUN_004cced0
// Address: 004cced0
void __cdecl CBitFont::reset(CBitFont *this_ptr);

// Original: engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
// Address: 004ccfc0
void __cdecl CBitFont::openFontFile(CBitFont *this_ptr,char *filename,int width,int height,int load_flags);

// Original: engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0
// Address: 004ccff0
void __cdecl CBitFont::loadBitmap(CBitFont *this_ptr,char *filename,int width,int height,int first_char);

// Original: engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280
// Address: 004cd280
void __cdecl CBitFont::loadNewBitmap(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags,int other);

// Original: engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0
// Address: 004cd2c0
void __cdecl CBitFont::loadFromFile(CBitFont *this_ptr,char *font_path);

// Original: engine_font.cpp_CBitFont_free_FUN_004cd4e0
// Address: 004cd4e0
void __cdecl CBitFont::free(CBitFont *this_ptr);

// Original: engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540
// Address: 004cd540
void __cdecl CBitFont::setInitializedFlag(CBitFont *this_ptr);

// Original: engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
// Address: 004cd550
void __cdecl CBitFont::parseCharacterMetrics(CBitFont *this_ptr,int bitmapcount,int other2,int bitmap_index,int width,int height,int first_char);

// Original: engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
// Address: 004cda20
int __cdecl CBitFont::calculateCharacterHeight(CBitFont *this_ptr,uchar *char_bitmap,int char_width,int char_height,int bitmap_stride);

// Original: engine_font.cpp_CBitFont_drawText_FUN_004cda80
// Address: 004cda80
int __cdecl CBitFont::drawText(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value);

// Original: engine_font.cpp_CBitFont_drawTextWrapper_FUN_004cdbf0
// Address: 004cdbf0
int __cdecl CBitFont::drawTextWrapper(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text);

// Original: engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20
// Address: 004cdc20
int __cdecl CBitFont::drawTextFV(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string,...);

// Original: engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70
// Address: 004cdc70
int __cdecl CBitFont::drawTextF(CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args);

// Original: engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
// Address: 004cdce0
int __cdecl CBitFont::drawTextRight(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text);

// Original: engine_font.cpp_CBitFont_printfRight_FUN_004cdd20
// Address: 004cdd20
void __cdecl CBitFont::printfRight(CBitFont *this_ptr,int x,int y,int color,char *format,...);

// Original: engine_font.cpp_CBitFont_printfRightF_FUN_004cdd70
// Address: 004cdd70
void __cdecl CBitFont::printfRightF(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format,va_list_t args);

// Original: engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
// Address: 004cdde0
int __cdecl CBitFont::drawTextCenter(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text);

// Original: engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004cde20
// Address: 004cde20
int __cdecl CBitFont::drawTextCenterFV(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string,...);

// Original: engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70
// Address: 004cde70
int __cdecl CBitFont::drawTextCenterF(CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args);

// Original: engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
// Address: 004cdee0
int __cdecl CBitFont::drawTextCenterInBounds(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *text);

// Original: engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
// Address: 004cdf30
int __cdecl CBitFont::drawTextCenterInBoundsFV(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *format_string,...);

// Original: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80
// Address: 004cdf80
int __cdecl CBitFont::drawTextCenterInBoundsF(CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args);

// Original: engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0
// Address: 004cdff0
int __cdecl CBitFont::drawTextCenterInClip(CBitFont *this_ptr,int y,int color_mode,int color_value,char *text);

// Original: engine_font.cpp_CBitFont_printfCenterInClip_FUN_004ce050
// Address: 004ce050
void __cdecl CBitFont::printfCenterInClip(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format,...);

// Original: engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090
// Address: 004ce090
int __cdecl CBitFont::drawTextCenterInClipF(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format_string,va_list_t args);

// Original: engine_font.cpp_setShadowColor_FUN_004ce0f0
// Address: 004ce0f0
void __cdecl setShadowColor(uint red,uint green,uint blue);

// Original: engine_font.cpp_getDefaultTextColor_FUN_004ce220
// Address: 004ce220
int __cdecl getDefaultTextColor(void);

// Original: engine_font.cpp_setDefaultTextColor_FUN_004ce230
// Address: 004ce230
void __cdecl setDefaultTextColor(int text_color);

// Original: engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240
// Address: 004ce240
void __cdecl drawAlphaBlendedPixels(uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color);

// Original: engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0
// Address: 004ce2d0
void __cdecl CBitFont::render3DCharacter(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode);

// Original: engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
// Address: 004ce7a0
int __cdecl CBitFont::drawCharacter(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value);

// Original: engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
// Address: 004cfe80
int __cdecl CBitFont::getTextWidth(CBitFont *this_ptr,char *text);

// Original: engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
// Address: 004cff40
int __cdecl CBitFont::getCharWidth(CBitFont *this_ptr,char *text_string);

// Original: engine_font.cpp_CBitFont_wrapText_FUN_004d0010
// Address: 004d0010
int __cdecl CBitFont::wrapText(CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width,int max_pixel_width);

// Original: engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
// Address: 004d01a0
int __cdecl CBitFont::getCharWidth(CBitFont *font,int char_code);

// Original: engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
// Address: 004d01d0
int __cdecl CBitFont::getCharWidth(CBitFont *this_ptr,int char_code);

// Original: engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200
// Address: 004d0200
int __cdecl CBitFont::getCharXAdvance(CBitFont *this_ptr,int char_code);

// Original: engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
// Address: 004d0230
void __cdecl CBitFont::setCharXAdvanceRange(CBitFont *this_ptr,int advance_value,int start_char,int end_char);

// Original: engine_font.cpp_CBitFont_setFontReady_FUN_004d0290
// Address: 004d0290
void __cdecl CBitFont::setFontReady(CBitFont *this_ptr,int value);

// Original: engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0
// Address: 004d02a0
void __cdecl CBitFont::remapPalette(CBitFont *this_ptr);

// Original: engine_font.cpp_CBitFont_getLineSpacing_FUN_004d0480
// Address: 004d0480
int __cdecl CBitFont::getLineSpacing(CBitFont *this_ptr,char character);

// Original: engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0
// Address: 004d04b0
void __cdecl CBitFont::showFontTest(CBitFont *this_ptr,int screen_height);

// Original: engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850
// Address: 004d0850
void __cdecl CBitFont::showExtendedFontTest(CBitFont *this_ptr,int screen_width,int screen_height);

// Original: engine_font.cpp_packPixelScaled_FUN_004d1110
// Address: 004d1110
uint __cdecl packPixelScaled(int red,int green,int blue);

// Original: engine_font.cpp_packPixelNative_FUN_004d1170
// Address: 004d1170
uint __cdecl packPixelNative(int red,int green,int blue);
