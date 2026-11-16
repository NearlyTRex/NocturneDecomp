// Name: core_game.cpp_CGame_finishAct_FUN_004bdfb0
// Address: 004bdfb0
// Address Range: [[004bdfb0, 004be42c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_finishAct_FUN_004bdfb0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_finishAct_FUN_004bdfb0(CGame *this_ptr)

{
  float fVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int y;
  CBitFont *pCVar8;
  char *pcVar9;
  int iVar10;
  byte bVar11;
  double dVar12;
  float local_550;
  char acStack_15c [256];
  byte auStack_5c [32];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  CBitFont *local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar11 = 0;
  if (this_ptr->act_completion_state == 2) {
    pCVar8 = _DAT_01511cc0;
    if (g_CDemonCameraInstance.framebuffer_width < 0x1e0) {
      pCVar8 = _DAT_01511cc4;
    }
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(pCVar8,0x58);
    core_game_cpp_CGame_saveClockTime_FUN_004b3000(this_ptr);
    for (local_550 = 0.0; 0.0 < local_550; local_550 = local_550 - this_ptr->delta_time_float) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Y@To be continued..." + 2);
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                (pCVar8,0,DAT_006141b8 + -1,(DAT_006141bc - iVar3) / 2,0xf8,0,pcVar4);
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
      core_game_cpp_CGame_updateDT_FUN_004b3010(this_ptr);
    }
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    core_game_cpp_CGame_rollCredits_FUN_004be430(this_ptr);
    return;
  }
  this_ptr->total_game_time = this_ptr->total_play_time + this_ptr->total_game_time;
  this_ptr->total_kill_count = this_ptr->total_kill_count + this_ptr->damageable_enemy_count;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420((CAlphaBitmap *)(auStack_5c + 0x10));
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            ((CAlphaBitmap *)(auStack_5c + 0x10),"test_logo",0x280,0x1e0);
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
            ((CAlphaBitmap *)(auStack_5c + 0x10),0,0,0xffff);
  fVar1 = this_ptr->total_game_time;
  dVar12 = round((double)(fVar1 * (float)_DAT_005d8a13));
  local_2c = (CBitFont *)(int)ROUND(dVar12);
  fVar1 = fVar1 - (float)(int)local_2c * (float)_DAT_005d8a1b;
  this_ptr->total_game_time = fVar1;
  local_18 = (int)local_2c;
  dVar12 = round((double)(fVar1 * (float)_DAT_005d8a23));
  iStack_38 = (int)ROUND(dVar12);
  fVar1 = fVar1 - (float)iStack_38 * (float)_DAT_005d8a2b;
  this_ptr->total_game_time = fVar1;
  local_1c = iStack_38;
  dVar12 = round((double)fVar1);
  local_24 = (int)ROUND(dVar12);
  fVar1 = this_ptr->total_game_time - (float)local_24;
  this_ptr->total_game_time = fVar1;
  pcVar4 = (char *)0x4be1bc;
  local_20 = local_24;
  dVar12 = round((double)(fVar1 * (float)_DAT_005d8a33));
  iStack_3c = (int)ROUND(dVar12);
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar4);
  pcVar4 = &stack0xfffffaa4;
  do {
    cVar2 = *pcVar5;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  pcVar5 = &DAT_005d89e5;
  iVar3 = -1;
  pcVar4 = &stack0xfffffaa4;
  do {
    pcVar9 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar4 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar2 = *pcVar5;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  uVar7 = 0;
  _sprintf(acStack_15c,"%2d:%2d:%2d.%2d\n\n");
  do {
    uVar6 = 0xffffffff;
    pcVar4 = acStack_15c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar11 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar6 - 1 <= uVar7) break;
    if (acStack_15c[uVar7] == ' ') {
      acStack_15c[uVar7] = '0';
    }
    uVar7 = uVar7 + 1;
  } while( true );
  pcVar4 = acStack_15c;
  iVar3 = -1;
  pcVar5 = &stack0xfffffaa4;
  do {
    pcVar9 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar5 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar2 = *pcVar4;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Total body count");
  iVar3 = -1;
  pcVar4 = &stack0xfffffaa4;
  do {
    pcVar9 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar4 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar2 = *pcVar5;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  pcVar5 = &DAT_005d8a0b;
  iVar3 = -1;
  pcVar4 = &stack0xfffffaa4;
  do {
    pcVar9 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar4 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar2 = *pcVar5;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  _sprintf(acStack_15c,&DAT_005d8a0e);
  pcVar4 = acStack_15c;
  iVar3 = -1;
  pcVar5 = &stack0xfffffaa4;
  do {
    pcVar9 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar5 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar2 = *pcVar4;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  local_2c = _DAT_01511cc0;
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  pCVar8 = local_2c;
  iVar3 = engine_font_cpp_CBitFont_wrapTextToLines_FUN_004ab2b0
                    (local_2c,&stack0xfffffaa4,(char *)0x1cb2520,0x14,0x100,0xc0);
  iVar10 = 0;
  iStack_34 = iVar3;
  local_30 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(pCVar8,0x58);
  y = 0xf0;
  if (0 < iVar3) {
    pcVar4 = (char *)0x1cb2520;
    do {
      iVar10 = iVar10 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                (local_2c,0x1c0,0x27f,y,0xf8,0,pcVar4);
      pcVar4 = pcVar4 + 0x100;
      y = y + local_30;
    } while (iVar10 < iStack_34);
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440((CAlphaBitmap *)auStack_5c,0);
  return;
}
