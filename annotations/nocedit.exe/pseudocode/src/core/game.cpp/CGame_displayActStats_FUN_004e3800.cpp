// Name: core_game.cpp_CGame_displayActStats_FUN_004e3800
// Address: 004e3800
// Address Range: [[004e3800, 004e3b8d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CBitFont *this_ptr_00;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int y;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char local_548 [1024];
  char local_148 [256];
  CAlphaBitmap local_48;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&local_48);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&local_48,"stats",0x280,0x1e0);
  pcVar9 = local_548;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&local_48,0,0,0xffff);
  this_ptr->game_stat_1 = this_ptr->total_play_time + this_ptr->game_stat_1;
  local_20 = (int)ROUND(ROUND(this_ptr->total_play_time * (float)0.00027777777777777799));
  fVar2 = this_ptr->total_play_time - (float)local_20 * (float)3600;
  local_2c = (int)ROUND(ROUND(fVar2 * (float)0.016666666666666701));
  fVar2 = fVar2 - (float)local_2c * (float)60;
  this_ptr->total_play_time = fVar2;
  local_28 = (int)ROUND(ROUND(fVar2));
  fVar2 = this_ptr->total_play_time - (float)local_28;
  this_ptr->total_play_time = fVar2;
  fVar3 = (float)100;
  this_ptr->game_state_flags = this_ptr->game_state_flags + (int)this_ptr->damageable_enemy_count;
  local_24 = (int)ROUND(ROUND(fVar2 * fVar3));
  local_14 = local_28;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Level time");
  do {
    cVar1 = *pcVar4;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar9 = "\n\n";
  iVar5 = -1;
  pcVar4 = local_548;
  do {
    pcVar10 = pcVar4;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar4 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  uVar8 = 0;
  _sprintf
            (local_148,"%2d:%2d:%2d.%2d\n\n",local_20,local_2c,local_28,local_24);
  do {
    uVar6 = 0xffffffff;
    pcVar4 = local_148;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar6 - 1 <= uVar8) break;
    if (local_148[uVar8] == ' ') {
      local_148[uVar8] = '0';
    }
    uVar8 = uVar8 + 1;
  } while( true );
  pcVar4 = local_148;
  iVar5 = -1;
  pcVar9 = local_548;
  do {
    pcVar10 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Body count");
  iVar5 = -1;
  pcVar4 = local_548;
  do {
    pcVar10 = pcVar4;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar4 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar9 = "\n\n";
  iVar5 = -1;
  pcVar4 = local_548;
  do {
    pcVar10 = pcVar4;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar4 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  _sprintf(local_148,"%d\n\n",this_ptr->damageable_enemy_count);
  this_ptr_00 = g_ThemeFont;
  pcVar4 = local_148;
  iVar5 = -1;
  pcVar9 = local_548;
  do {
    pcVar10 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (this_ptr_00,local_548,g_ActStatsTextBuffer1,0x14,0x100,0xc0);
  iVar7 = 0;
  local_18 = iVar5;
  local_1c = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr_00,0x58);
  y = 0xf0;
  if (0 < iVar5) {
    pcVar4 = g_ActStatsTextBuffer1;
    do {
      iVar7 = iVar7 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (this_ptr_00,0x1c0,0x27f,y,0xf8,0,pcVar4);
      pcVar4 = pcVar4 + 0x100;
      y = y + local_1c;
    } while (iVar7 < local_18);
  }
  this_ptr->total_play_time = 0.0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&local_48,0);
  return;
}
