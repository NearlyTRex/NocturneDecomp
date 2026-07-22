// Name: core_game.cpp_CGame_displayActStats_FUN_004a6680
// Address: 004a6680
// Address Range: [[004a6680, 004a6a0d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayActStats_FUN_004a6680(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_displayActStats_FUN_004a6680(int param_1)

{
  float fVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int unaff_EDI;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  uint uVar14;
  uint uStack_558;
  char *pcStack_554;
  uint uStack_550;
  byte *puStack_54c;
  char acStack_158 [256];
  byte auStack_58 [16];
  byte local_48 [12];
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar11 = 0;
  puStack_54c = local_48;
  uStack_550 = 0x4a6697;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320();
  puStack_54c = (byte *)0x1e0;
  uStack_550 = 0x280;
  pcStack_554 = "stats";
  uStack_558 = local_48;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0();
  puStack_54c = (byte *)0x4a66be;
  wincore_windll_cpp_clearScreen_FUN_0052ee70();
  puStack_54c = (byte *)0xffff;
  uStack_550 = 0;
  pcStack_554 = (char *)0x0;
  uStack_558 = local_48;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710();
  *(float *)(param_1 + 0x248) = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x248);
  fVar1 = *(float *)(param_1 + 0x250);
  iVar4 = *(int *)(param_1 + 0x24c);
  iVar6 = *(int *)(param_1 + 0x254);
  puStack_54c = (byte *)0x4a6718;
  fVar12 = (float10)round((float10)fVar1 * (float10)0.00027777777777777799);
  local_24 = (int)ROUND(fVar12);
  fVar13 = (float10)fVar1 - (float10)local_24 * (float10)3600;
  uStack_550 = 0x4a6749;
  local_18 = local_24;
  fVar12 = (float10)round(fVar13 * (float10)0.016666666666666701);
  iStack_34 = (int)ROUND(fVar12);
  *(float *)(param_1 + 0x250) = (float)(fVar13 - (float10)iStack_34 * (float10)60);
  pcStack_554 = (char *)0x4a6778;
  local_1c = iStack_34;
  fVar12 = (float10)round();
  iStack_34 = (int)ROUND(fVar12);
  fVar13 = (float10)*(float *)(param_1 + 0x250) - (float10)iStack_34;
  *(float *)(param_1 + 0x250) = (float)fVar13;
  fVar12 = (float10)100;
  uStack_558 = "Level time";
  *(int *)(param_1 + 0x254) = iVar6 + iVar4;
  uVar14 = 0x4a67b6;
  local_20 = iStack_34;
  fVar12 = (float10)round(fVar13 * fVar12);
  iStack_34 = (int)ROUND(fVar12);
  pcVar3 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(uVar14);
  pcVar9 = (char *)&uStack_558;
  do {
    cVar2 = *pcVar3;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  pcVar9 = "\n\n";
  iVar4 = -1;
  pcVar3 = (char *)&uStack_558;
  do {
    pcVar10 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar10 = pcVar3 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar9;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  uVar7 = 0;
  _sprintf(acStack_158,"%2d:%2d:%2d.%2d\n\n",uStack_30,uStack_3c,uStack_38,iStack_34);
  do {
    uVar5 = 0xffffffff;
    pcVar3 = acStack_158;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar11 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar5 - 1 <= uVar7) break;
    if (acStack_158[uVar7] == ' ') {
      acStack_158[uVar7] = '0';
    }
    uVar7 = uVar7 + 1;
  } while( true );
  pcVar3 = acStack_158;
  iVar4 = -1;
  pcVar9 = (char *)&uStack_558;
  do {
    pcVar10 = pcVar9;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar3;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  pcVar9 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Body count");
  iVar4 = -1;
  pcVar3 = (char *)&uStack_558;
  do {
    pcVar10 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar10 = pcVar3 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar9;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  pcVar9 = "\n\n";
  iVar4 = -1;
  pcVar3 = (char *)&uStack_558;
  do {
    pcVar10 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar10 = pcVar3 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar9;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  _sprintf(acStack_158,"%d\n\n",*(uint *)(unaff_EDI + 0x24c));
  uVar14 = _DAT_014b9900;
  pcVar3 = acStack_158;
  iVar4 = -1;
  pcVar9 = (char *)&uStack_558;
  do {
    pcVar10 = pcVar9;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar2 = *pcVar3;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  iVar4 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                    (uVar14,&uStack_558,0x1c71e40,0x14,0x100,0xc0);
  iVar6 = 0;
  local_28 = iVar4;
  local_2c = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(uVar14,0x58);
  iVar8 = 0xf0;
  if (0 < iVar4) {
    iVar4 = 0x1c71e40;
    do {
      iVar6 = iVar6 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
                (uVar14,0x1c0,0x27f,iVar8,0xf8,0,iVar4);
      iVar4 = iVar4 + 0x100;
      iVar8 = iVar8 + local_2c;
    } while (iVar6 < local_28);
  }
  *(uint *)(unaff_EDI + 0x250) = 0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(auStack_58,0);
  return;
}
