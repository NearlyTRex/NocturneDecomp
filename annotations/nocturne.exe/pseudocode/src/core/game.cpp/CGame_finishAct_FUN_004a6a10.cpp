// Name: core_game.cpp_CGame_finishAct_FUN_004a6a10
// Address: 004a6a10
// Address Range: [[004a6a10, 004a6e8c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_finishAct_FUN_004a6a10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_finishAct_FUN_004a6a10(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  uint uVar13;
  char *pcVar14;
  uint uStack_55c;
  uint uStack_558;
  char *pcStack_554;
  float local_550;
  char acStack_15c [256];
  byte auStack_5c [16];
  byte local_4c [12];
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar10 = 0;
  if (*(int *)(param_1 + 600) == 2) {
    uVar13 = _DAT_014b9900;
    if (_DAT_01fb8644 < 0x1e0) {
      uVar13 = _DAT_014b9904;
    }
    pcStack_554 = (char *)0x58;
    uStack_55c = (char *)0x4a6a4f;
    uStack_558 = uVar13;
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0();
    pcStack_554 = (char *)param_1;
    uStack_558 = 0x4a6a5d;
    core_game_cpp_CGame_saveClockTime_FUN_0049a890();
    for (local_550 = 5.0; 0.0 < local_550; local_550 = local_550 - *(float *)(param_1 + 0x264)) {
      pcStack_554 = (char *)0x4a6a79;
      engine_special_cpp_clearScreen_FUN_0052ee70();
      pcStack_554 = "To be continued...";
      uStack_558 = 0x4a6a83;
      pcStack_554 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
      uStack_558 = 0;
      uStack_55c = (char *)0xf8;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
                (uVar13,0,DAT_005b761c + -1,(DAT_005b7620 - iVar3) / 2);
      pcStack_554 = (char *)0x4a6ab7;
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      pcStack_554 = (char *)param_1;
      uStack_558 = 0x4a6ac0;
      core_game_cpp_CGame_updateDT_FUN_0049a8a0();
    }
    pcStack_554 = (char *)0x4a6adc;
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    pcStack_554 = (char *)param_1;
    uStack_558 = 0x4a6ae2;
    core_game_cpp_CGame_rollCredits_FUN_004a6e90();
    return;
  }
  *(float *)(param_1 + 0x248) = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x248);
  pcStack_554 = local_4c;
  *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + *(int *)(param_1 + 0x24c);
  uStack_558 = 0x4a6b22;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320();
  pcStack_554 = (char *)0x1e0;
  uStack_558 = 0x280;
  uStack_55c = "stats";
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(local_4c);
  pcStack_554 = (char *)0x4a6b49;
  engine_special_cpp_clearScreen_FUN_0052ee70();
  pcStack_554 = (char *)0xffff;
  uStack_558 = 0;
  uStack_55c = (char *)0x0;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(local_4c);
  fVar1 = *(float *)(param_1 + 0x248);
  pcStack_554 = (char *)0x4a6b78;
  fVar11 = (float10)round((float10)fVar1 * (float10)0.00027777777777777799);
  local_2c = (int)ROUND(fVar11);
  fVar12 = (float10)fVar1 - (float10)local_2c * (float10)3600;
  *(float *)(param_1 + 0x248) = (float)fVar12;
  uStack_558 = 0x4a6bb2;
  local_18 = local_2c;
  fVar11 = (float10)round(fVar12 * (float10)0.016666666666666701);
  iStack_38 = (int)ROUND(fVar11);
  *(float *)(param_1 + 0x248) = (float)(fVar12 - (float10)iStack_38 * (float10)60);
  uStack_55c = (char *)0x4a6be4;
  local_1c = iStack_38;
  fVar11 = (float10)round();
  local_24 = (int)ROUND(fVar11);
  fVar11 = (float10)*(float *)(param_1 + 0x248) - (float10)local_24;
  *(float *)(param_1 + 0x248) = (float)fVar11;
  pcVar14 = "Mission time";
  uVar13 = 0x4a6c1f;
  local_20 = local_24;
  fVar11 = (float10)round(fVar11 * (float10)100);
  iStack_3c = (int)ROUND(fVar11);
  pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(uVar13,pcVar14);
  pcVar14 = (char *)&uStack_55c;
  do {
    cVar2 = *pcVar4;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  iVar3 = iStack_3c;
  pcVar4 = "\n\n";
  iVar5 = -1;
  pcVar14 = (char *)&uStack_55c;
  do {
    pcVar8 = pcVar14;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar8 = pcVar14 + (uint)bVar10 * -2 + 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar8;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar4;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  uVar7 = 0;
  _sprintf(acStack_15c,"%2d:%2d:%2d.%2d\n\n",iStack_38,uStack_40,local_28,iVar3);
  do {
    uVar6 = 0xffffffff;
    pcVar14 = acStack_15c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + (uint)bVar10 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar6 - 1 <= uVar7) break;
    if (acStack_15c[uVar7] == ' ') {
      acStack_15c[uVar7] = '0';
    }
    uVar7 = uVar7 + 1;
  } while( true );
  pcVar14 = acStack_15c;
  iVar3 = -1;
  pcVar4 = (char *)&uStack_55c;
  do {
    pcVar8 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar4 + (uint)bVar10 * -2 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar14;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar14[1];
    pcVar14 = pcVar14 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Total body count");
  iVar3 = -1;
  pcVar14 = (char *)&uStack_55c;
  do {
    pcVar8 = pcVar14;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar14 + (uint)bVar10 * -2 + 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar8;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar4;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  pcVar4 = "\n\n";
  iVar3 = -1;
  pcVar14 = (char *)&uStack_55c;
  do {
    pcVar8 = pcVar14;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar14 + (uint)bVar10 * -2 + 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar8;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar4;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  _sprintf(acStack_15c,"%d\n\n",*(uint *)(param_1 + 0x254));
  pcVar14 = acStack_15c;
  iVar3 = -1;
  pcVar4 = (char *)&uStack_55c;
  do {
    pcVar8 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar4 + (uint)bVar10 * -2 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar14;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar14[1];
    pcVar14 = pcVar14 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  local_2c = _DAT_014b9900;
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  iVar3 = local_2c;
  iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                    (local_2c,&uStack_55c,0x1c73240,0x14,0x100,0xc0);
  iVar9 = 0;
  iStack_34 = iVar5;
  local_30 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(iVar3,0x58);
  iVar3 = 0xf0;
  if (0 < iVar5) {
    iVar5 = 0x1c73240;
    do {
      iVar9 = iVar9 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
                (local_2c,0x1c0,0x27f,iVar3,0xf8,0,iVar5);
      iVar5 = iVar5 + 0x100;
      iVar3 = iVar3 + local_30;
    } while (iVar9 < iStack_34);
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(auStack_5c,0);
  return;
}
