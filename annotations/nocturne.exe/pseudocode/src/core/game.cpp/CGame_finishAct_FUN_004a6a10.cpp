// Name: core_game.cpp_CGame_finishAct_FUN_004a6a10
// Address: 004a6a10
// Address Range: [[004a6a10, 004a6e8c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_finishAct_FUN_004a6a10(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_finishAct_FUN_004a6a10(CGame *this_ptr)

{
  float fVar1;
  char cVar2;
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
  double dVar13;
  float local_550;
  char acStack_15c [256];
  byte auStack_5c [28];
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  CBitFont *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar12 = 0;
  if (this_ptr->act_completion_state == 2) {
    pCVar9 = _DAT_014b9900;
    if (_DAT_01fb8644 < 0x1e0) {
      pCVar9 = _DAT_014b9904;
    }
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(pCVar9,0x58);
    core_game_cpp_CGame_saveClockTime_FUN_0049a890(this_ptr);
    for (local_550 = 5.0; 0.0 < local_550; local_550 = local_550 - this_ptr->delta_time_float) {
      engine_special_cpp_clearScreen_FUN_0052ee70();
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("To be continued...");
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
                (pCVar9,0,DAT_005b761c + -1,(DAT_005b7620 - iVar3) / 2,0xf8,0,pcVar4);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      core_game_cpp_CGame_updateDT_FUN_0049a8a0(this_ptr);
    }
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    core_game_cpp_CGame_rollCredits_FUN_004a6e90(this_ptr);
    return;
  }
  this_ptr->total_game_time = this_ptr->total_play_time + this_ptr->total_game_time;
  this_ptr->total_kill_count = this_ptr->total_kill_count + this_ptr->damageable_enemy_count;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320((CAlphaBitmap *)(auStack_5c + 0x10));
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)(auStack_5c + 0x10),"stats",0x280,0x1e0);
  engine_special_cpp_clearScreen_FUN_0052ee70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
            ((CAlphaBitmap *)(auStack_5c + 0x10),0,0,0xffff);
  fVar1 = this_ptr->total_game_time;
  dVar13 = round((double)(fVar1 * (float)0.00027777777777777799));
  local_2c = (CBitFont *)(int)ROUND(dVar13);
  fVar1 = fVar1 - (float)(int)local_2c * (float)3600;
  this_ptr->total_game_time = fVar1;
  local_18 = (int)local_2c;
  dVar13 = round((double)(fVar1 * (float)0.016666666666666701));
  iStack_38 = (int)ROUND(dVar13);
  fVar1 = fVar1 - (float)iStack_38 * (float)60;
  this_ptr->total_game_time = fVar1;
  local_1c = iStack_38;
  dVar13 = round((double)fVar1);
  local_24 = (int)ROUND(dVar13);
  fVar1 = this_ptr->total_game_time - (float)local_24;
  this_ptr->total_game_time = fVar1;
  pcVar4 = (char *)0x4a6c1f;
  local_20 = local_24;
  dVar13 = round((double)(fVar1 * (float)100));
  iStack_3c = (int)ROUND(dVar13);
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar4);
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
  iVar3 = iStack_3c;
  pcVar5 = "\n\n";
  iVar6 = -1;
  pcVar4 = &stack0xfffffaa4;
  do {
    pcVar10 = pcVar4;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar10 = pcVar4 + (uint)bVar12 * -2 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar5;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  uVar8 = 0;
  _sprintf(acStack_15c,"%2d:%2d:%2d.%2d\n\n",iStack_38,uStack_40,local_28,iVar3);
  do {
    uVar7 = 0xffffffff;
    pcVar4 = acStack_15c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar12 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar7 - 1 <= uVar8) break;
    if (acStack_15c[uVar8] == ' ') {
      acStack_15c[uVar8] = '0';
    }
    uVar8 = uVar8 + 1;
  } while( true );
  pcVar4 = acStack_15c;
  iVar3 = -1;
  pcVar5 = &stack0xfffffaa4;
  do {
    pcVar10 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar4;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Total body count");
  iVar3 = -1;
  pcVar4 = &stack0xfffffaa4;
  do {
    pcVar10 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar4 + (uint)bVar12 * -2 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar5;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  pcVar5 = "\n\n";
  iVar3 = -1;
  pcVar4 = &stack0xfffffaa4;
  do {
    pcVar10 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar4 + (uint)bVar12 * -2 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar5;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  _sprintf(acStack_15c,"%d\n\n",this_ptr->total_kill_count);
  pcVar4 = acStack_15c;
  iVar3 = -1;
  pcVar5 = &stack0xfffffaa4;
  do {
    pcVar10 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar4;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  local_2c = _DAT_014b9900;
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  pCVar9 = local_2c;
  iVar3 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                    (local_2c,&stack0xfffffaa4,(char *)0x1c73240,0x14,0x100,0xc0);
  iVar11 = 0;
  iStack_34 = iVar3;
  local_30 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(pCVar9,0x58);
  iVar6 = 0xf0;
  if (0 < iVar3) {
    pcVar4 = (char *)0x1c73240;
    do {
      iVar11 = iVar11 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
                (local_2c,0x1c0,0x27f,iVar6,0xf8,0,pcVar4);
      pcVar4 = pcVar4 + 0x100;
      iVar6 = iVar6 + local_30;
    } while (iVar11 < iStack_34);
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340((CAlphaBitmap *)auStack_5c,0);
  return;
}
