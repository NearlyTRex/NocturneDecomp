// Name: core_game.cpp_CGame_displayActStats_FUN_004e3800
// Address: 004e3800
// Address Range: [[004e3800, 004e3b8d]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_displayActStats_FUN_004e3800(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CBitFont *this_ptr_00;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  uint uVar5;
  uint extraout_EDX;
  int iVar6;
  uint uVar7;
  int y_pos;
  int unaff_EDI;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  float10 fVar11;
  double dVar12;
  char *pcVar13;
  char acStack_158 [256];
  byte auStack_58 [28];
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar10 = 0;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)(auStack_58 + 0x10));
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)(auStack_58 + 0x10),"stats",0x280,0x1e0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
            ((CAlphaBitmap *)(auStack_58 + 0x10),0,0,0xffff);
  this_ptr->player_pos_y = this_ptr->player_rotation + this_ptr->player_pos_y;
  fVar11 = (float10)this_ptr->player_rotation;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar11 * (float10)0.00027777777777777799));
  local_24 = (int)ROUND(dVar12);
  fVar11 = fVar11 - (float10)local_24 * (float10)3600;
  local_18 = local_24;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar11 * (float10)0.016666666666666701));
  iStack_34 = (int)ROUND(dVar12);
  fVar11 = fVar11 - (float10)iStack_34 * (float10)60;
  *(float *)(extraout_ECX + 0x250) = (float)fVar11;
  local_1c = iStack_34;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
  iStack_34 = (int)ROUND(dVar12);
  fVar2 = *(float *)(extraout_ECX_00 + 0x250) - (float)iStack_34;
  *(float *)(extraout_ECX_00 + 0x250) = fVar2;
  fVar3 = (float)100;
  *(uint *)(extraout_ECX_00 + 0x254) = extraout_EDX;
  pcVar13 = (char *)0x4e3936;
  local_20 = iStack_34;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar2 * fVar3));
  iStack_34 = (int)ROUND(dVar12);
  pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar13);
  pcVar8 = &stack0xfffffaa8;
  do {
    cVar1 = *pcVar13;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar13[1];
    pcVar13 = pcVar13 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  pcVar8 = "\n\n";
  iVar4 = -1;
  pcVar13 = &stack0xfffffaa8;
  do {
    pcVar9 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar13 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  uVar7 = 0;
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_158,"%2d:%2d:%2d.%2d\n\n",uStack_30,uStack_3c,uStack_38,iStack_34);
  do {
    uVar5 = 0xffffffff;
    pcVar13 = acStack_158;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar5 - 1 <= uVar7) break;
    if (acStack_158[uVar7] == ' ') {
      acStack_158[uVar7] = '0';
    }
    uVar7 = uVar7 + 1;
  } while( true );
  pcVar13 = acStack_158;
  iVar4 = -1;
  pcVar8 = &stack0xfffffaa8;
  do {
    pcVar9 = pcVar8;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar8 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar13;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar13[1];
    pcVar13 = pcVar13 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Body count");
  iVar4 = -1;
  pcVar13 = &stack0xfffffaa8;
  do {
    pcVar9 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar13 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar8 = "\n\n";
  iVar4 = -1;
  pcVar13 = &stack0xfffffaa8;
  do {
    pcVar9 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar13 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_158,"%d\n\n",*(uint *)(unaff_EDI + 0x24c));
  this_ptr_00 = g_ThemeFont;
  pcVar13 = acStack_158;
  iVar4 = -1;
  pcVar8 = &stack0xfffffaa8;
  do {
    pcVar9 = pcVar8;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar8 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar13;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar13[1];
    pcVar13 = pcVar13 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  iVar4 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (this_ptr_00,&stack0xfffffaa8,&DAT_02d7c2f0,0x14,0x100,0xc0);
  iVar6 = 0;
  local_28 = iVar4;
  local_2c = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
  y_pos = 0xf0;
  if (0 < iVar4) {
    pcVar13 = &DAT_02d7c2f0;
    do {
      iVar6 = iVar6 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (this_ptr_00,0x1c0,0x27f,y_pos,0xf8,0,pcVar13);
      pcVar13 = pcVar13 + 0x100;
      y_pos = y_pos + local_2c;
    } while (iVar6 < local_28);
  }
  *(uint *)(unaff_EDI + 0x250) = 0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)auStack_58);
  return;
}
