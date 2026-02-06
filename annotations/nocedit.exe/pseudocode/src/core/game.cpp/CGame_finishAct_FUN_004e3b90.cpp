// Name: core_game.cpp_CGame_finishAct_FUN_004e3b90
// Address: 004e3b90
// Address Range: [[004e3b90, 004e400c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_finishAct_FUN_004e3b90(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_finishAct_FUN_004e3b90(CGame *this_ptr)

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
  if (this_ptr->unk12 == 2) {
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
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)(auStack_5c + 0x10));
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)(auStack_5c + 0x10),"stats",0x280,0x1e0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
            ((CAlphaBitmap *)(auStack_5c + 0x10),0,0,0xffff);
  fVar1 = this_ptr->game_stat_1;
  dVar13 = round((double)(fVar1 * (float)0.00027777777777777799));
  local_2c = (CBitFont *)(int)ROUND(dVar13);
  fVar1 = fVar1 - (float)(int)local_2c * (float)3600;
  this_ptr->game_stat_1 = fVar1;
  local_18 = (int)local_2c;
  dVar13 = round((double)(fVar1 * (float)0.016666666666666701));
  iStack_38 = (int)ROUND(dVar13);
  fVar1 = fVar1 - (float)iStack_38 * (float)60;
  this_ptr->game_stat_1 = fVar1;
  local_1c = iStack_38;
  dVar13 = round((double)fVar1);
  local_24 = (int)ROUND(dVar13);
  fVar1 = this_ptr->game_stat_1 - (float)local_24;
  this_ptr->game_stat_1 = fVar1;
  pcVar4 = (char *)0x4e3d9f;
  local_20 = local_24;
  dVar13 = round((double)(fVar1 * (float)100));
  iStack_3c = (int)ROUND(dVar13);
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar4);
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
  sprintf
            (acStack_15c,"%2d:%2d:%2d.%2d\n\n",iStack_38,uStack_40,local_28,iVar3);
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
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Total body count");
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
  sprintf(acStack_15c,"%d\n\n",this_ptr->game_state_flags);
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
  local_2c = g_ThemeFont;
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  pCVar9 = local_2c;
  iVar3 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (local_2c,&stack0xfffffaa4,&DAT_02d7d6f0,0x14,0x100,0xc0);
  iVar11 = 0;
  iStack_34 = iVar3;
  local_30 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar9,0x58);
  iVar6 = 0xf0;
  if (0 < iVar3) {
    pcVar4 = &DAT_02d7d6f0;
    do {
      iVar11 = iVar11 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (local_2c,0x1c0,0x27f,iVar6,0xf8,0,pcVar4);
      pcVar4 = pcVar4 + 0x100;
      iVar6 = iVar6 + local_30;
    } while (iVar11 < iStack_34);
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)auStack_5c);
  return;
}
