// Name: core_game.cpp_CGame_finishAct_FUN_004bdfb0
// Address: 004bdfb0
// Address Range: [[004bdfb0, 004be42c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_finishAct_FUN_004bdfb0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_finishAct_FUN_004bdfb0(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int y;
  CBitFont *pCVar7;
  char *pcVar8;
  int iVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
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
  
  bVar10 = 0;
  if (this_ptr->act_completion_state == 2) {
    pCVar7 = _DAT_01511cc0;
    if (g_CDemonCameraInstance.framebuffer_width < 0x1e0) {
      pCVar7 = _DAT_01511cc4;
    }
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(pCVar7,0x58);
    core_game_cpp_CGame_saveClockTime_FUN_004b3000(this_ptr);
    for (local_550 = 0.0; 0.0 < local_550; local_550 = local_550 - this_ptr->delta_time_float) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Y@To be continued..." + 2);
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                (pCVar7,0,DAT_006141b8 + -1,(DAT_006141bc - iVar2) / 2,0xf8,0,pcVar3);
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
      core_game_cpp_CGame_updateDT_FUN_004b3010(this_ptr);
    }
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    core_game_cpp_CGame_rollCredits_FUN_004be430(this_ptr);
    return;
  }
  this_ptr->total_game_time = this_ptr->total_play_time + this_ptr->total_game_time;
  this_ptr->total_kill_count = this_ptr->total_kill_count + this_ptr->damageable_enemy_count;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&local_4c);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&local_4c,"test_logo",0x280,0x1e0);
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&local_4c,0,0,0xffff);
  fVar11 = (float10)this_ptr->total_game_time;
  fVar12 = fVar11 * (float10)_DAT_005d8a13;
  round();
  local_28 = (int)ROUND(fVar12);
  fVar11 = fVar11 - (float10)local_28 * (float10)_DAT_005d8a1b;
  this_ptr->total_game_time = (float)fVar11;
  fVar12 = fVar11 * (float10)_DAT_005d8a23;
  local_14 = local_28;
  round();
  local_30 = (int)ROUND(fVar12);
  fVar11 = fVar11 - (float10)local_30 * (float10)_DAT_005d8a2b;
  this_ptr->total_game_time = (float)fVar11;
  local_14 = local_30;
  round();
  local_18 = (int)ROUND(fVar11);
  fVar12 = (float10)this_ptr->total_game_time - (float10)local_18;
  this_ptr->total_game_time = (float)fVar12;
  fVar12 = fVar12 * (float10)_DAT_005d8a33;
  pcVar3 = "Mission time";
  local_14 = local_18;
  round();
  local_2c = (int)ROUND(fVar12);
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar3);
  pcVar3 = local_54c;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar4 = &DAT_005d89e5;
  iVar2 = -1;
  pcVar3 = local_54c;
  do {
    pcVar8 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar3 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  uVar6 = 0;
  _sprintf(local_14c,"%2d:%2d:%2d.%2d\n\n");
  do {
    uVar5 = 0xffffffff;
    pcVar3 = local_14c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar5 - 1 <= uVar6) break;
    if (local_14c[uVar6] == ' ') {
      local_14c[uVar6] = '0';
    }
    uVar6 = uVar6 + 1;
  } while( true );
  pcVar3 = local_14c;
  iVar2 = -1;
  pcVar4 = local_54c;
  do {
    pcVar8 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar4 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Total body count");
  iVar2 = -1;
  pcVar3 = local_54c;
  do {
    pcVar8 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar3 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  pcVar4 = &DAT_005d8a0b;
  iVar2 = -1;
  pcVar3 = local_54c;
  do {
    pcVar8 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar3 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  _sprintf(local_14c,&DAT_005d8a0e);
  pcVar3 = local_14c;
  iVar2 = -1;
  pcVar4 = local_54c;
  do {
    pcVar8 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar4 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  local_1c = _DAT_01511cc0;
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  pCVar7 = local_1c;
  iVar2 = engine_font_cpp_FUN_004ab2b0(local_1c,local_54c,0x1cb2520,0x14,0x100,0xc0);
  iVar9 = 0;
  local_24 = iVar2;
  local_20 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(pCVar7,0x58);
  y = 0xf0;
  if (0 < iVar2) {
    pcVar3 = (char *)0x1cb2520;
    do {
      iVar9 = iVar9 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                (local_1c,0x1c0,0x27f,y,0xf8,0,pcVar3);
      pcVar3 = pcVar3 + 0x100;
      y = y + local_20;
    } while (iVar9 < local_24);
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(&local_4c,0);
  return;
}
