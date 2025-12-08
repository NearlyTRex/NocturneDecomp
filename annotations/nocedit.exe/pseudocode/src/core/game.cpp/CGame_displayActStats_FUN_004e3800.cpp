// Name: core_game.cpp_CGame_displayActStats_FUN_004e3800
// Address: 004e3800
// Address Range: [[004e3800, 004e3b8d]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_displayActStats_FUN_004e3800(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CBitFont *this_ptr_00;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  uint uVar6;
  uint extraout_EDX;
  int iVar7;
  BADSPACEBASE *in_ESP;
  uint uVar8;
  int y_pos;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  double dVar13;
  int in_stack_00000014;
  int in_stack_00000020;
  char *pcVar14;
  char acStack_144 [4];
  char acStack_140 [8];
  char acStack_138 [240];
  byte local_48 [12];
  byte auStack_3c [20];
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_14;
  
  bVar11 = 0;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)local_48);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)(local_48 + 4),"stats",0x280,0x1e0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950((CAlphaBitmap *)auStack_3c,0,0,0xffff);
  *(float *)(in_stack_00000014 + 0x248) =
       *(float *)(in_stack_00000014 + 0x250) + *(float *)(in_stack_00000014 + 0x248);
  fVar12 = (float10)*(float *)(in_stack_00000014 + 0x250);
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fVar12 * (float10)0.00027777777777777799));
  local_14 = (int)ROUND(dVar13);
  fVar12 = fVar12 - (float10)local_14 * (float10)3600;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fVar12 * (float10)0.016666666666666701));
  local_24 = (int)ROUND(dVar13);
  fVar12 = fVar12 - (float10)local_24 * (float10)60;
  *(float *)(extraout_ECX + 0x250) = (float)fVar12;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
  local_24 = (int)ROUND(dVar13);
  fVar2 = *(float *)(extraout_ECX_00 + 0x250) - (float)local_24;
  *(float *)(extraout_ECX_00 + 0x250) = fVar2;
  fVar3 = (float)100;
  *(uint *)(extraout_ECX_00 + 0x254) = extraout_EDX;
  pcVar14 = (char *)0x4e3936;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fVar2 * fVar3));
  local_24 = (int)ROUND(dVar13);
  pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar14);
  pcVar9 = &stack0xfffffabc;
  do {
    cVar1 = *pcVar14;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar14[1];
    pcVar14 = pcVar14 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar9 = "\n\n";
  iVar5 = -1;
  pcVar14 = &stack0xfffffabc;
  do {
    pcVar10 = pcVar14;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar14 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  uVar8 = 0;
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_144,"%2d:%2d:%2d.%2d\n\n",local_1c,local_28,local_24,local_20);
  do {
    uVar6 = 0xffffffff;
    pcVar14 = acStack_140;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar6 - 1 <= uVar8) break;
    if (acStack_140[uVar8] == ' ') {
      acStack_140[uVar8] = '0';
    }
    uVar8 = uVar8 + 1;
  } while( true );
  pcVar14 = acStack_140;
  iVar5 = -1;
  pcVar9 = &stack0xfffffac0;
  do {
    pcVar10 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar14;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar14[1];
    pcVar14 = pcVar14 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Body count");
  iVar5 = -1;
  pcVar14 = &stack0xfffffac4;
  do {
    pcVar10 = pcVar14;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar14 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar9 = "\n\n";
  iVar5 = -1;
  pcVar14 = &stack0xfffffac4;
  do {
    pcVar10 = pcVar14;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar14 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_140 + 4,"%d\n\n");
  this_ptr_00 = g_ThemeFont;
  pcVar14 = acStack_138;
  iVar5 = -1;
  pcVar9 = &stack0xfffffac8;
  do {
    pcVar10 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar14;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar14[1];
    pcVar14 = pcVar14 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (this_ptr_00,&stack0xfffffacc,&DAT_02d7c2f0,0x14,0x100,0xc0);
  iVar7 = 0;
  iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
  y_pos = 0xf0;
  if (0 < iVar5) {
    pcVar14 = &DAT_02d7c2f0;
    do {
      iVar7 = iVar7 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (this_ptr_00,0x1c0,0x27f,y_pos,0xf8,0,pcVar14);
      pcVar14 = pcVar14 + 0x100;
      y_pos = y_pos + iVar4;
    } while (iVar7 < (int)this_ptr);
  }
  *(uint *)(in_stack_00000020 + 0x250) = 0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)(auStack_3c + 0x10));
  return;
}
