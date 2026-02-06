// Name: core_game.cpp_CGame_displayActStats_FUN_004e3800
// Address: 004e3800
// Address Range: [[004e3800, 004e3b8d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame *this_ptr)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  CBitFont *this_ptr_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int y_pos;
  int unaff_EDI;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
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
  
  bVar11 = 0;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)(auStack_58 + 0x10));
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)(auStack_58 + 0x10),"stats",0x280,0x1e0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
            ((CAlphaBitmap *)(auStack_58 + 0x10),0,0,0xffff);
  this_ptr->game_stat_1 = this_ptr->total_play_time + this_ptr->game_stat_1;
  fVar1 = this_ptr->total_play_time;
  fVar3 = this_ptr->game_stat_2;
  iVar5 = this_ptr->game_state_flags;
  dVar12 = round((double)(fVar1 * (float)0.00027777777777777799));
  local_24 = (int)ROUND(dVar12);
  fVar1 = fVar1 - (float)local_24 * (float)3600;
  local_18 = local_24;
  dVar12 = round((double)(fVar1 * (float)0.016666666666666701));
  iStack_34 = (int)ROUND(dVar12);
  fVar1 = fVar1 - (float)iStack_34 * (float)60;
  this_ptr->total_play_time = fVar1;
  local_1c = iStack_34;
  dVar12 = round((double)fVar1);
  iStack_34 = (int)ROUND(dVar12);
  fVar1 = this_ptr->total_play_time - (float)iStack_34;
  this_ptr->total_play_time = fVar1;
  fVar4 = (float)100;
  this_ptr->game_state_flags = iVar5 + (int)fVar3;
  pcVar13 = (char *)0x4e3936;
  local_20 = iStack_34;
  dVar12 = round((double)(fVar1 * fVar4));
  iStack_34 = (int)ROUND(dVar12);
  pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar13);
  pcVar9 = &stack0xfffffaa8;
  do {
    cVar2 = *pcVar13;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar13[1];
    pcVar13 = pcVar13 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  pcVar9 = "\n\n";
  iVar5 = -1;
  pcVar13 = &stack0xfffffaa8;
  do {
    pcVar10 = pcVar13;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar13 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar9;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  uVar8 = 0;
  sprintf
            (acStack_158,"%2d:%2d:%2d.%2d\n\n",uStack_30,uStack_3c,uStack_38,iStack_34);
  do {
    uVar6 = 0xffffffff;
    pcVar13 = acStack_158;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + (uint)bVar11 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar6 - 1 <= uVar8) break;
    if (acStack_158[uVar8] == ' ') {
      acStack_158[uVar8] = '0';
    }
    uVar8 = uVar8 + 1;
  } while( true );
  pcVar13 = acStack_158;
  iVar5 = -1;
  pcVar9 = &stack0xfffffaa8;
  do {
    pcVar10 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar13;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar13[1];
    pcVar13 = pcVar13 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Body count");
  iVar5 = -1;
  pcVar13 = &stack0xfffffaa8;
  do {
    pcVar10 = pcVar13;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar13 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar9;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  pcVar9 = "\n\n";
  iVar5 = -1;
  pcVar13 = &stack0xfffffaa8;
  do {
    pcVar10 = pcVar13;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar13 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar9;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  sprintf(acStack_158,"%d\n\n",*(uint *)(unaff_EDI + 0x24c));
  this_ptr_00 = g_ThemeFont;
  pcVar13 = acStack_158;
  iVar5 = -1;
  pcVar9 = &stack0xfffffaa8;
  do {
    pcVar10 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar13;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar13[1];
    pcVar13 = pcVar13 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (this_ptr_00,&stack0xfffffaa8,&DAT_02d7c2f0,0x14,0x100,0xc0);
  iVar7 = 0;
  local_28 = iVar5;
  local_2c = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
  y_pos = 0xf0;
  if (0 < iVar5) {
    pcVar13 = &DAT_02d7c2f0;
    do {
      iVar7 = iVar7 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (this_ptr_00,0x1c0,0x27f,y_pos,0xf8,0,pcVar13);
      pcVar13 = pcVar13 + 0x100;
      y_pos = y_pos + local_2c;
    } while (iVar7 < local_28);
  }
  *(uint *)(unaff_EDI + 0x250) = 0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)auStack_58);
  return;
}
