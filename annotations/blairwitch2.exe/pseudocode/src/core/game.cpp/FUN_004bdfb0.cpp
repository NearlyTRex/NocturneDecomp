// Name: core_game.cpp_FUN_004bdfb0
// Address: 004bdfb0
// Address Range: [[004bdfb0, 004be42c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bdfb0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bdfb0(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  CBitFont *pCVar8;
  char *pcVar9;
  int iVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
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
  
  bVar11 = 0;
  if (*(int *)&this_ptr->field_0x278 == 2) {
    pCVar8 = _DAT_01511cc0;
    if ((int)g_CDemonCameraInstance._324_4_ < 0x1e0) {
      pCVar8 = _DAT_01511cc4;
    }
    iVar2 = engine_font_cpp_FUN_004ab560(pCVar8,0x58);
    core_game_cpp_FUN_004b3000(this_ptr);
    for (local_550 = 0.0; 0.0 < local_550; local_550 = local_550 - *(float *)&this_ptr->field_0x284)
    {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Y@To be continued..." + 2);
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                (pCVar8,0,DAT_006141b8 + -1,(DAT_006141bc - iVar2) / 2,0xf8,0,pcVar3);
      wincore_wddvmem_cpp_FUN_00589560();
      core_game_cpp_FUN_004b3010(this_ptr);
    }
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    core_game_cpp_CGame_rollCredits_FUN_004be430(this_ptr);
    return;
  }
  *(float *)&this_ptr->field_0x268 =
       *(float *)&this_ptr->field_0x270 + *(float *)&this_ptr->field_0x268;
  *(int *)&this_ptr->field_0x274 = *(int *)&this_ptr->field_0x274 + *(int *)&this_ptr->field_0x26c;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&local_4c);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&local_4c,"test_logo",0x280,0x1e0);
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&local_4c,0,0,0xffff);
  fVar12 = (float10)*(float *)&this_ptr->field_0x268;
  fVar13 = fVar12 * (float10)_DAT_005d8a13;
  round();
  local_28 = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)local_28 * (float10)_DAT_005d8a1b;
  *(float *)&this_ptr->field_0x268 = (float)fVar12;
  fVar13 = fVar12 * (float10)_DAT_005d8a23;
  local_14 = local_28;
  round();
  local_30 = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)local_30 * (float10)_DAT_005d8a2b;
  *(float *)&this_ptr->field_0x268 = (float)fVar12;
  local_14 = local_30;
  round();
  local_18 = (int)ROUND(fVar12);
  fVar13 = (float10)*(float *)&this_ptr->field_0x268 - (float10)local_18;
  *(float *)&this_ptr->field_0x268 = (float)fVar13;
  fVar13 = fVar13 * (float10)_DAT_005d8a33;
  pcVar3 = "Mission time";
  local_14 = local_18;
  round();
  local_2c = (int)ROUND(fVar13);
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
  iVar2 = local_2c;
  pcVar4 = &DAT_005d89e5;
  iVar5 = -1;
  pcVar3 = local_54c;
  do {
    pcVar9 = pcVar3;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  uVar7 = 0;
  FUN_005b7790(local_14c,"%2d:%2d:%2d.%2d\n\n",local_28,local_30,local_18,iVar2);
  do {
    uVar6 = 0xffffffff;
    pcVar3 = local_14c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar6 - 1 <= uVar7) break;
    if (local_14c[uVar7] == ' ') {
      local_14c[uVar7] = '0';
    }
    uVar7 = uVar7 + 1;
  } while( true );
  pcVar3 = local_14c;
  iVar2 = -1;
  pcVar4 = local_54c;
  do {
    pcVar9 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar4 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Total body count");
  iVar2 = -1;
  pcVar3 = local_54c;
  do {
    pcVar9 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar4 = &DAT_005d8a0b;
  iVar2 = -1;
  pcVar3 = local_54c;
  do {
    pcVar9 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  FUN_005b7790(local_14c,&DAT_005d8a0e,*(uint *)&this_ptr->field_0x274);
  pcVar3 = local_14c;
  iVar2 = -1;
  pcVar4 = local_54c;
  do {
    pcVar9 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar4 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  local_1c = _DAT_01511cc0;
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  pCVar8 = local_1c;
  iVar2 = engine_font_cpp_FUN_004ab2b0(local_1c,local_54c,0x1cb2520,0x14,0x100,0xc0);
  iVar10 = 0;
  local_24 = iVar2;
  local_20 = engine_font_cpp_FUN_004ab560(pCVar8,0x58);
  iVar5 = 0xf0;
  if (0 < iVar2) {
    pcVar3 = (char *)0x1cb2520;
    do {
      iVar10 = iVar10 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                (local_1c,0x1c0,0x27f,iVar5,0xf8,0,pcVar3);
      pcVar3 = pcVar3 + 0x100;
      iVar5 = iVar5 + local_20;
    } while (iVar10 < local_24);
  }
  wincore_wddvmem_cpp_FUN_00589560();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(&local_4c,0);
  return;
}
