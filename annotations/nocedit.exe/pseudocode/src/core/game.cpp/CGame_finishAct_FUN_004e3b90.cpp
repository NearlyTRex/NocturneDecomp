// Name: core_game.cpp_CGame_finishAct_FUN_004e3b90
// Address: 004e3b90
// Address Range: [[004e3b90, 004e400c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_finishAct_FUN_004e3b90(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_game_cpp_CGame_finishAct_FUN_004e3b90(CGame *this_ptr)

{
  char cVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  CBitFont *pCVar9;
  char *pcVar10;
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
  
  bVar12 = 0;
  if (this_ptr->act_completion_state == 2) {
    pCVar9 = g_ThemeFont;
    if (g_CDemonCameraInstance.framebuffer_width < 0x1e0) {
      pCVar9 = g_SmallEditorFont;
    }
    iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar9,0x58);
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr);
    for (local_550 = 5.0; 0.0 < local_550; local_550 = local_550 - this_ptr->delta_time_float) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("To be continued...");
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (pCVar9,0,g_WindowWidth + -1,(g_WindowHeight - iVar3) / 2,0xf8,0,pcVar4);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(this_ptr);
    }
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_game_cpp_CGame_rollCredits_FUN_004e4010(this_ptr);
    return;
  }
  this_ptr->game_stat_1 = this_ptr->total_play_time + this_ptr->game_stat_1;
  this_ptr->game_state_flags = this_ptr->game_state_flags + (int)this_ptr->game_stat_2;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&local_4c);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&local_4c,"stats",0x280,0x1e0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&local_4c,0,0,0xffff);
  local_28 = (int)ROUND(ROUND(this_ptr->game_stat_1 * (float)0.00027777777777777799));
  fVar2 = this_ptr->game_stat_1 - (float)local_28 * (float)3600;
  this_ptr->game_stat_1 = fVar2;
  local_30 = (int)ROUND(ROUND(fVar2 * (float)0.016666666666666701));
  fVar2 = fVar2 - (float)local_30 * (float)60;
  this_ptr->game_stat_1 = fVar2;
  local_18 = (int)ROUND(ROUND(fVar2));
  fVar2 = this_ptr->game_stat_1 - (float)local_18;
  this_ptr->game_stat_1 = fVar2;
  local_2c = (int)ROUND(ROUND(fVar2 * (float)100));
  local_14 = local_18;
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mission time");
  pcVar4 = local_54c;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar3 = local_2c;
  pcVar5 = "\n\n";
  iVar6 = -1;
  pcVar4 = local_54c;
  do {
    pcVar10 = pcVar4;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar10 = pcVar4 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  uVar8 = 0;
  _sprintf
            (local_14c,"%2d:%2d:%2d.%2d\n\n",local_28,local_30,local_18,iVar3);
  do {
    uVar7 = 0xffffffff;
    pcVar4 = local_14c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar7 - 1 <= uVar8) break;
    if (local_14c[uVar8] == ' ') {
      local_14c[uVar8] = '0';
    }
    uVar8 = uVar8 + 1;
  } while( true );
  pcVar4 = local_14c;
  iVar3 = -1;
  pcVar5 = local_54c;
  do {
    pcVar10 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar10;
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
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Total body count");
  iVar3 = -1;
  pcVar4 = local_54c;
  do {
    pcVar10 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar4 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar5 = "\n\n";
  iVar3 = -1;
  pcVar4 = local_54c;
  do {
    pcVar10 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar4 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  _sprintf(local_14c,"%d\n\n",this_ptr->game_state_flags);
  pcVar4 = local_14c;
  iVar3 = -1;
  pcVar5 = local_54c;
  do {
    pcVar10 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar10;
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
  local_1c = g_ThemeFont;
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  pCVar9 = local_1c;
  iVar3 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (local_1c,local_54c,g_ActStatsTextBuffer2,0x14,0x100,0xc0);
  iVar11 = 0;
  local_24 = iVar3;
  local_20 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar9,0x58);
  iVar6 = 0xf0;
  if (0 < iVar3) {
    pcVar4 = g_ActStatsTextBuffer2;
    do {
      iVar11 = iVar11 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (local_1c,0x1c0,0x27f,iVar6,0xf8,0,pcVar4);
      pcVar4 = pcVar4 + 0x100;
      iVar6 = iVar6 + local_20;
    } while (iVar11 < local_24);
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&local_4c,0);
  return;
}
