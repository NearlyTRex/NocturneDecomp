// Name: core_game.cpp_CGame_displayActStats_FUN_004a6680
// Address: 004a6680
// Address Range: [[004a6680, 004a6a0d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayActStats_FUN_004a6680(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_displayActStats_FUN_004a6680(CGame *this_ptr)

{
  float fVar1;
  char cVar2;
  float fVar3;
  CBitFont *this_ptr_00;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int y;
  int unaff_EDI;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  double dVar11;
  char *pcVar12;
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
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320((CAlphaBitmap *)(auStack_58 + 0x10));
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)(auStack_58 + 0x10),"stats",0x280,0x1e0);
  engine_special_cpp_clearScreen_FUN_0052ee70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
            ((CAlphaBitmap *)(auStack_58 + 0x10),0,0,0xffff);
  this_ptr->total_game_time = this_ptr->total_play_time + this_ptr->total_game_time;
  fVar1 = this_ptr->total_play_time;
  iVar4 = this_ptr->damageable_enemy_count;
  iVar6 = this_ptr->total_kill_count;
  dVar11 = round((double)(fVar1 * (float)0.00027777777777777799));
  local_24 = (int)ROUND(dVar11);
  fVar1 = fVar1 - (float)local_24 * (float)3600;
  local_18 = local_24;
  dVar11 = round((double)(fVar1 * (float)0.016666666666666701));
  iStack_34 = (int)ROUND(dVar11);
  fVar1 = fVar1 - (float)iStack_34 * (float)60;
  this_ptr->total_play_time = fVar1;
  local_1c = iStack_34;
  dVar11 = round((double)fVar1);
  iStack_34 = (int)ROUND(dVar11);
  fVar1 = this_ptr->total_play_time - (float)iStack_34;
  this_ptr->total_play_time = fVar1;
  fVar3 = (float)100;
  this_ptr->total_kill_count = iVar6 + iVar4;
  pcVar12 = (char *)0x4a67b6;
  local_20 = iStack_34;
  dVar11 = round((double)(fVar1 * fVar3));
  iStack_34 = (int)ROUND(dVar11);
  pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar12);
  pcVar8 = &stack0xfffffaa8;
  do {
    cVar2 = *pcVar12;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  pcVar8 = "\n\n";
  iVar4 = -1;
  pcVar12 = &stack0xfffffaa8;
  do {
    pcVar9 = pcVar12;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar12 + (uint)bVar10 * -2 + 1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar9;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar2 = *pcVar8;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  uVar7 = 0;
  _sprintf(acStack_158,"%2d:%2d:%2d.%2d\n\n",uStack_30,uStack_3c,uStack_38,iStack_34);
  do {
    uVar5 = 0xffffffff;
    pcVar12 = acStack_158;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + (uint)bVar10 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar5 - 1 <= uVar7) break;
    if (acStack_158[uVar7] == ' ') {
      acStack_158[uVar7] = '0';
    }
    uVar7 = uVar7 + 1;
  } while( true );
  pcVar12 = acStack_158;
  iVar4 = -1;
  pcVar8 = &stack0xfffffaa8;
  do {
    pcVar9 = pcVar8;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar8 + (uint)bVar10 * -2 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar2 = *pcVar12;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Body count");
  iVar4 = -1;
  pcVar12 = &stack0xfffffaa8;
  do {
    pcVar9 = pcVar12;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar12 + (uint)bVar10 * -2 + 1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar9;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar2 = *pcVar8;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  pcVar8 = "\n\n";
  iVar4 = -1;
  pcVar12 = &stack0xfffffaa8;
  do {
    pcVar9 = pcVar12;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar12 + (uint)bVar10 * -2 + 1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar9;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar2 = *pcVar8;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  _sprintf(acStack_158,"%d\n\n",*(uint *)(unaff_EDI + 0x24c));
  this_ptr_00 = g_CBitFont_PTR_014b9900;
  pcVar12 = acStack_158;
  iVar4 = -1;
  pcVar8 = &stack0xfffffaa8;
  do {
    pcVar9 = pcVar8;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar8 + (uint)bVar10 * -2 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar2 = *pcVar12;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  iVar4 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                    (this_ptr_00,&stack0xfffffaa8,(char *)0x1c71e40,0x14,0x100,0xc0);
  iVar6 = 0;
  local_28 = iVar4;
  local_2c = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr_00,0x58);
  y = 0xf0;
  if (0 < iVar4) {
    pcVar12 = (char *)0x1c71e40;
    do {
      iVar6 = iVar6 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
                (this_ptr_00,0x1c0,0x27f,y,0xf8,0,pcVar12);
      pcVar12 = pcVar12 + 0x100;
      y = y + local_2c;
    } while (iVar6 < local_28);
  }
  *(uint *)(unaff_EDI + 0x250) = 0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340((CAlphaBitmap *)auStack_58,0);
  return;
}
