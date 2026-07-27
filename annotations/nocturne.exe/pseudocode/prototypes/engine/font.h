#pragma once

// Function prototypes for engine/font.cpp
// Generated from Ghidra function signatures

// Original: engine_font.cpp_FUN_0048fd00
// Address: 0048fd00
undefined4 FUN_0048fd00(int param_1,int param_2,int param_3,int param_4);

// Original: engine_font.cpp_clipCharacter_FUN_0048fd50
// Address: 0048fd50
undefined4 __cdecl clipCharacter(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6);

// Original: engine_font.cpp_CBitFont_ctor_FUN_0048fe10
// Address: 0048fe10
undefined4 __cdecl CBitFont::ctor(undefined4 param_1);

// Original: engine_font.cpp_FUN_0048fe30
// Address: 0048fe30
undefined4 FUN_0048fe30(undefined4 param_1);

// Original: engine_font.cpp_CBitFont_reset_FUN_0048fe50
// Address: 0048fe50
void __cdecl CBitFont::reset(undefined4 *param_1);

// Original: engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40
// Address: 0048ff40
void __cdecl CBitFont::openFontFile(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: engine_font.cpp_CBitFont_loadBitmap_FUN_0048ff70
// Address: 0048ff70
void __cdecl CBitFont::loadBitmap(int *param_1,char *param_2,int param_3,int param_4,undefined4 param_5);

// Original: engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0
// Address: 004901d0
void __cdecl CBitFont::loadNewBitmap(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);

// Original: engine_font.cpp_FUN_00490210
// Address: 00490210
void FUN_00490210(int param_1,undefined4 param_2);

// Original: engine_font.cpp_CBitFont_free_FUN_00490420
// Address: 00490420
void __cdecl CBitFont::free(int param_1);

// Original: engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460
// Address: 00490460
void __cdecl CBitFont::setInitializedFlag(int param_1);

// Original: engine_font.cpp_FUN_00490470
// Address: 00490470
void FUN_00490470(int param_1,int param_2,int param_3,int param_4,int param_5);

// Original: engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_00490920
// Address: 00490920
int CBitFont::calculateCharacterHeight(int param_1,byte *param_2,int param_3,int param_4,int param_5);

// Original: engine_font.cpp_CBitFont_drawText_FUN_00490980
// Address: 00490980
int CBitFont::drawText(int param_1,char *param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0
// Address: 00490af0
void __cdecl CBitFont::drawTextWrapper(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_font.cpp_FUN_00490b20
// Address: 00490b20
void FUN_00490b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_font.cpp_FUN_00490b70
// Address: 00490b70
void FUN_00490b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);

// Original: engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0
// Address: 00490be0
void CBitFont::drawTextRight(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_font.cpp_FUN_00490c20
// Address: 00490c20
void FUN_00490c20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_font.cpp_FUN_00490c70
// Address: 00490c70
void FUN_00490c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);

// Original: engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0
// Address: 00490ce0
void CBitFont::drawTextCenter(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_font.cpp_FUN_00490d20
// Address: 00490d20
void FUN_00490d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_font.cpp_FUN_00490d70
// Address: 00490d70
void FUN_00490d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);

// Original: engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
// Address: 00490de0
void __cdecl CBitFont::drawTextCenterInBounds(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);

// Original: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30
// Address: 00490e30
void CBitFont::drawTextCenterInBoundsF(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);

// Original: engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_00490e80
// Address: 00490e80
void __cdecl CBitFont::drawTextCenterInBoundsFV(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);

// Original: engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0
// Address: 00490ef0
void __cdecl CBitFont::drawTextCenterInClip(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: engine_font.cpp_FUN_00490f50
// Address: 00490f50
void FUN_00490f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: engine_font.cpp_CBitFont_printCenterFV_FUN_00490f90
// Address: 00490f90
void CBitFont::printCenterFV(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_font.cpp_FUN_00490ff0
// Address: 00490ff0
void FUN_00490ff0(uint param_1,uint param_2,uint param_3);

// Original: engine_font.cpp_getDefaultTextColor_FUN_00491140
// Address: 00491140
undefined4 __cdecl getDefaultTextColor(void);

// Original: engine_font.cpp_setDefaultTextColor_FUN_00491150
// Address: 00491150
void __cdecl setDefaultTextColor(undefined4 param_1);

// Original: engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160
// Address: 00491160
void __cdecl drawAlphaBlendedPixels(undefined4 *param_1,byte *param_2,int param_3,int param_4,undefined4 param_5);

// Original: engine_font.cpp_CBitFont_render3DCharacter_FUN_004911f0
// Address: 004911f0
void __cdecl CBitFont::render3DCharacter(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);

// Original: engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0
// Address: 004916c0
int __cdecl CBitFont::drawCharacter(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);

// Original: engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
// Address: 00492da0
int __cdecl CBitFont::getTextWidth(int param_1,char *param_2);

// Original: engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
// Address: 00492e60
int __cdecl CBitFont::getTextHeight(int param_1,char *param_2);

// Original: engine_font.cpp_CBitFont_wrapText_FUN_00492f30
// Address: 00492f30
int __cdecl CBitFont::wrapText(undefined4 param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6);

// Original: engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0
// Address: 004930b0
undefined4 __cdecl CBitFont::getCharWidth(int param_1,int param_2);

// Original: engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
// Address: 004930e0
int __cdecl CBitFont::getCharHeight(int param_1,int param_2);

// Original: engine_font.cpp_FUN_00493110
// Address: 00493110
undefined4 FUN_00493110(int param_1,int param_2);

// Original: engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140
// Address: 00493140
undefined8 __cdecl CBitFont::setCharYOffsetRange(int param_1,undefined4 param_2,int param_3,int param_4);

// Original: engine_font.cpp_CBitFont_setFontReady_FUN_004931a0
// Address: 004931a0
void __cdecl CBitFont::setFontReady(int param_1,undefined4 param_2);

// Original: engine_font.cpp_CBitFont_remapPalette_FUN_004931b0
// Address: 004931b0
void __cdecl CBitFont::remapPalette(int *param_1);

// Original: engine_font.cpp_FUN_00493390
// Address: 00493390
undefined4 FUN_00493390(void);

// Original: engine_font.cpp_FUN_004933c0
// Address: 004933c0
void FUN_004933c0(int param_1,uint param_2);

// Original: engine_font.cpp_FUN_00493760
// Address: 00493760
void FUN_00493760(int param_1,uint param_2,uint param_3);

// Original: engine_font.cpp_FUN_00494020
// Address: 00494020
uint FUN_00494020(uint param_1,uint param_2,uint param_3);

// Original: engine_font.cpp_FUN_00494080
// Address: 00494080
uint FUN_00494080(void);
