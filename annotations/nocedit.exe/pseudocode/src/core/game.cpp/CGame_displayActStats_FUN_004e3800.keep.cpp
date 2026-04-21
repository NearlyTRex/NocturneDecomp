// Name: core_game.cpp_CGame_displayActStats_FUN_004e3800
// Address: 004e3800
// MANUAL RECONSTRUCTION
// Address Range: [[004e3800, 004e3b8d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame *this_ptr)

{
  char cVar2;
  float fVar4;
  float fVar5;
  char *pcVar4;
  int iVar6;
  int iVar5;
  uint uVar6;
  int iVar8;
  int iVar7;
  char *pcVar11;
  uint uVar8;
  int y;
  char *pcVar9;
  char *pcVar10;
  char *pcVar12;
  char *pcVar13;
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
  float fVar2;
  char cVar1;
  CBitFont *this_ptr_00;
  float fVar3;
  
  bVar11 = 0;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&local_48);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&local_48,"stats",0x280,0x1e0);
  pcVar9 = local_548;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&local_48,0,0,0xffff);
  this_ptr->total_game_time = this_ptr->total_play_time + this_ptr->total_game_time;
  iVar8 = (int)ROUND(ROUND(this_ptr->total_play_time * (float)0.00027777777777777799));
  fVar2 = this_ptr->total_play_time - (float)iVar8 * (float)3600;
  fVar5 = (float)0.016666666666666701;
  fVar4 = fVar2 - (float)(int)ROUND(ROUND(fVar2 * fVar5)) * (float)60;
  this_ptr->total_play_time = fVar4;
  iVar6 = (int)ROUND(ROUND(fVar4));
  fVar4 = this_ptr->total_play_time - (float)iVar6;
  this_ptr->total_play_time = fVar4;
  fVar3 = (float)100;
  this_ptr->total_kill_count = this_ptr->total_kill_count + this_ptr->damageable_enemy_count;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Level time");
  do {
    cVar1 = *pcVar4;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  strcat(local_548,"\n\n");
  uVar8 = 0;
  _sprintf(local_148,"%2d:%2d:%2d.%2d\n\n",iVar8,(int)ROUND(ROUND(fVar2 * fVar5)),iVar6,
             (int)ROUND(ROUND(fVar4 * fVar3)));
  do {
    uVar6 = 0xffffffff;
    pcVar11 = local_148;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar11 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar6 - 1 <= uVar8) break;
    if (local_148[uVar8] == ' ') {
      local_148[uVar8] = '0';
    }
    uVar8 = uVar8 + 1;
  } while( true );
  strcat(local_548,local_148);
  pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Body count");
  strcat(local_548,pcVar12);
  strcat(local_548,"\n\n");
  _sprintf(local_148,"%d\n\n",this_ptr->damageable_enemy_count);
  this_ptr_00 = g_ThemeFont;
  strcat(local_548,local_148);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  iVar8 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (this_ptr_00,local_548,g_ActStatsTextBuffer1,0x14,0x100,0xc0);
  iVar7 = 0;
  iVar6 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr_00,0x58);
  y = 0xf0;
  if (0 < iVar8) {
    pcVar11 = g_ActStatsTextBuffer1;
    do {
      iVar7 = iVar7 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (this_ptr_00,0x1c0,0x27f,y,0xf8,0,pcVar11);
      pcVar11 = pcVar11 + 0x100;
      y = y + iVar6;
    } while (iVar7 < iVar8);
  }
  this_ptr->total_play_time = 0.0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&local_48,0);
  return;
}
