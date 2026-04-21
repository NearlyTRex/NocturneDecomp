// Name: core_game.cpp_CGame_finishAct_FUN_004e3b90
// Address: 004e3b90
// MANUAL RECONSTRUCTION
// Address Range: [[004e3b90, 004e400c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_finishAct_FUN_004e3b90(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_game_cpp_CGame_finishAct_FUN_004e3b90(CGame *this_ptr)

{
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CBitFont *this_ptr_00;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar7;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar8;
  int y;
  CBitFont *pCVar9;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar11;
  byte bVar12;
  float local_550;
  char local_54c [1024];
  char local_14c [256];
  CAlphaBitmap local_4c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CBitFont *local_1c;
  int local_18;
  int local_14;
  float fVar2;
  char cVar1;
  
  bVar12 = 0;
  if (this_ptr->act_completion_state == 2) {
    pCVar9 = g_ThemeFont;
    if (g_CDemonCameraInstance.framebuffer_width < 0x1e0) {
      pCVar9 = g_SmallEditorFont;
    }
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(pCVar9,0x58);
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr);
    for (local_550 = 5.0; 0.0 < local_550; local_550 = local_550 - this_ptr->delta_time_float) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("To be continued...");
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (pCVar9,0,g_WindowWidth + -1,(g_WindowHeight - iVar3) / 2,0xf8,0,pcVar4);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_game_cpp_CGame_updateDT_FUN_004d7d90(this_ptr);
    }
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_game_cpp_CGame_rollCredits_FUN_004e4010(this_ptr);
    return;
  }
  this_ptr->total_game_time = this_ptr->total_play_time + this_ptr->total_game_time;
  this_ptr->total_kill_count = this_ptr->total_kill_count + this_ptr->damageable_enemy_count;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&local_4c);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&local_4c,"stats",0x280,0x1e0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&local_4c,0,0,0xffff);
  iVar8 = (int)ROUND(ROUND(this_ptr->total_game_time * (float)0.00027777777777777799));
  fVar2 = this_ptr->total_game_time - (float)iVar8 * (float)3600;
  this_ptr->total_game_time = fVar2;
  fVar4 = (float)0.016666666666666701;
  fVar3 = fVar2 - (float)(int)ROUND(ROUND(fVar2 * fVar4)) * (float)60;
  this_ptr->total_game_time = fVar3;
  iVar7 = (int)ROUND(ROUND(fVar3));
  fVar3 = this_ptr->total_game_time - (float)iVar7;
  this_ptr->total_game_time = fVar3;
  fVar5 = (float)100;
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mission time");
  pcVar9 = local_54c;
  do {
    cVar1 = *pcVar5;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  strcat(local_54c,"\n\n");
  uVar8 = 0;
  _sprintf(local_14c,"%2d:%2d:%2d.%2d\n\n",iVar8,(int)ROUND(ROUND(fVar2 * fVar4)),iVar7,
             (int)ROUND(ROUND(fVar3 * fVar5)));
  do {
    uVar7 = 0xffffffff;
    pcVar9 = local_14c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar7 - 1 <= uVar8) break;
    if (local_14c[uVar8] == ' ') {
      local_14c[uVar8] = '0';
    }
    uVar8 = uVar8 + 1;
  } while( true );
  strcat(local_54c,local_14c);
  pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Total body count");
  strcat(local_54c,pcVar11);
  strcat(local_54c,"\n\n");
  _sprintf(local_14c,"%d\n\n",this_ptr->total_kill_count);
  this_ptr_00 = g_ThemeFont;
  strcat(local_54c,local_14c);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  iVar8 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (this_ptr_00,local_54c,g_ActStatsTextBuffer2,0x14,0x100,0xc0);
  iVar11 = 0;
  iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr_00,0x58);
  y = 0xf0;
  if (0 < iVar8) {
    pcVar9 = g_ActStatsTextBuffer2;
    do {
      iVar11 = iVar11 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (this_ptr_00,0x1c0,0x27f,y,0xf8,0,pcVar9);
      pcVar9 = pcVar9 + 0x100;
      y = y + iVar7;
    } while (iVar11 < iVar8);
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&local_4c,0);
  return;
}
