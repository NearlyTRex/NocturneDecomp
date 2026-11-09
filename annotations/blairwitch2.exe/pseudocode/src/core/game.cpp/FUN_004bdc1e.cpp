// Name: core_game.cpp_FUN_004bdc1e
// Address: 004bdc1e
// Address Range: [[004bdc1e, 004bdfad]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004bdc1e(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004bdc1e(int param_1)

{
  char cVar1;
  CBitFont *this_ptr;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  uint uVar3;
  uint extraout_EDX;
  int iVar4;
  uint uVar5;
  int y;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  char *pcVar11;
  char acStack_548 [1024];
  char acStack_148 [256];
  CAlphaBitmap CStack_48;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar8 = 0;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&CStack_48);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&CStack_48,"test_logo",0x280,0x1e0);
  pcVar6 = acStack_548;
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CStack_48,0,0,0xffff);
  *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x270) + *(float *)(param_1 + 0x268);
  fVar9 = (float10)*(float *)(param_1 + 0x270);
  fVar10 = fVar9 * (float10)_DAT_005d8993;
  round();
  iStack_20 = (int)ROUND(fVar10);
  fVar9 = fVar9 - (float10)iStack_20 * (float10)_DAT_005d899b;
  fVar10 = fVar9 * (float10)_DAT_005d89a3;
  iStack_14 = iStack_20;
  round();
  iStack_2c = (int)ROUND(fVar10);
  fVar9 = fVar9 - (float10)iStack_2c * (float10)_DAT_005d89ab;
  *(float *)(extraout_ECX + 0x270) = (float)fVar9;
  iStack_14 = iStack_2c;
  round();
  iStack_28 = (int)ROUND(fVar9);
  fVar10 = (float10)*(float *)(extraout_ECX_00 + 0x270) - (float10)iStack_28;
  *(float *)(extraout_ECX_00 + 0x270) = (float)fVar10;
  fVar10 = fVar10 * (float10)_DAT_005d89b3;
  pcVar11 = "Level time";
  *(uint *)(extraout_ECX_00 + 0x274) = extraout_EDX;
  iStack_14 = iStack_28;
  round();
  iStack_24 = (int)ROUND(fVar10);
  pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar11);
  do {
    cVar1 = *pcVar11;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar6 = (char *)0x5d8968;
  iVar2 = -1;
  pcVar11 = acStack_548;
  do {
    pcVar7 = pcVar11;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar11 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar5 = 0;
  FUN_005b7790(acStack_148,0x5d896b,iStack_20,iStack_2c,iStack_28,iStack_24);
  do {
    uVar3 = 0xffffffff;
    pcVar11 = acStack_148;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 <= uVar5) break;
    if (acStack_148[uVar5] == ' ') {
      acStack_148[uVar5] = '0';
    }
    uVar5 = uVar5 + 1;
  } while( true );
  pcVar11 = acStack_148;
  iVar2 = -1;
  pcVar6 = acStack_548;
  do {
    pcVar7 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar11;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Body count");
  iVar2 = -1;
  pcVar11 = acStack_548;
  do {
    pcVar7 = pcVar11;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar11 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar6 = (char *)0x5d8988;
  iVar2 = -1;
  pcVar11 = acStack_548;
  do {
    pcVar7 = pcVar11;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar11 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  FUN_005b7790(acStack_148,0x5d898b,*(uint *)(param_1 + 0x26c));
  this_ptr = _DAT_01511cc0;
  pcVar11 = acStack_148;
  iVar2 = -1;
  pcVar6 = acStack_548;
  do {
    pcVar7 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar11;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  iVar2 = engine_font_cpp_FUN_004ab2b0(this_ptr,acStack_548,0x1cb1120,0x14,0x100,0xc0);
  iVar4 = 0;
  iStack_18 = iVar2;
  iStack_1c = engine_font_cpp_FUN_004ab560(this_ptr,0x58);
  y = 0xf0;
  if (0 < iVar2) {
    pcVar11 = (char *)0x1cb1120;
    do {
      iVar4 = iVar4 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                (this_ptr,0x1c0,0x27f,y,0xf8,0,pcVar11);
      pcVar11 = pcVar11 + 0x100;
      y = y + iStack_1c;
    } while (iVar4 < iStack_18);
  }
  *(uint *)(param_1 + 0x270) = 0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(&CStack_48,0);
  return;
}
