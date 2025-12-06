// Name: core_game.cpp_CGame_displayActStats_FUN_004e3800
// Address: 004e3800
// Address Range: [[004e3800, 004e3b8d]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_displayActStats_FUN_004e3800(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame *this_ptr)

{
  char cVar1;
  CBitFont *this_ptr_00;
  char *pcVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  uint unaff_ESI;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  int iStack00000008;
  int in_stack_00000014;
  int iStack00000020;
  int in_stack_00000024;
  int in_stack_00000040;
  char *in_stack_fffffad4;
  char acStack_124 [4];
  char acStack_120 [8];
  char acStack_118 [208];
  byte local_48 [12];
  CAlphaBitmap aCStack_3c [2];
  int local_14;
  
  bVar11 = 0;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)local_48);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)(local_48 + 4),"stats",0x280,0x1e0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(aCStack_3c,0,0,0xffff);
  *(float *)(in_stack_00000014 + 0x248) =
       *(float *)(in_stack_00000014 + 0x250) + *(float *)(in_stack_00000014 + 0x248);
  fVar12 = (float10)*(float *)(in_stack_00000014 + 0x250);
  fVar13 = fVar12 * (float10)0.00027777777777777799;
  dVar14 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(*(int *)(in_stack_00000014 + 0x254) +
                                       *(int *)(in_stack_00000014 + 0x24c),
                                       *(int *)(in_stack_00000014 + 0x24c)));
  iVar5 = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)iVar5 * (float10)3600;
  fVar13 = fVar12 * (float10)0.016666666666666701;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar14 >> 0x20),iVar5));
  iVar7 = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)iVar7 * (float10)60;
  *(float *)(extraout_ECX + 0x250) = (float)fVar12;
  local_14 = iVar7;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar14 >> 0x20),iVar7));
  uVar6 = (uint)((ulonglong)dVar14 >> 0x20);
  iStack00000008 = (int)ROUND(fVar12);
  fVar13 = (float10)*(float *)(extraout_ECX_00 + 0x250) - (float10)iStack00000008;
  *(float *)(extraout_ECX_00 + 0x250) = (float)fVar13;
  fVar13 = fVar13 * (float10)100;
  *(uint *)(extraout_ECX_00 + 0x254) = uVar6;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar6,iStack00000008));
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(in_stack_fffffad4);
  pcVar9 = &stack0xfffffadc;
  do {
    cVar1 = *pcVar2;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar9 = "\n\n";
  iVar3 = -1;
  pcVar2 = &stack0xfffffadc;
  do {
    pcVar10 = pcVar2;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar2 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
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
            (acStack_124,"%2d:%2d:%2d.%2d\n\n",iVar7,unaff_ESI,(int)ROUND(fVar13),iVar5);
  do {
    uVar4 = 0xffffffff;
    pcVar2 = acStack_120;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 <= uVar8) break;
    if (acStack_120[uVar8] == ' ') {
      acStack_120[uVar8] = '0';
    }
    uVar8 = uVar8 + 1;
  } while( true );
  pcVar2 = acStack_120;
  iVar5 = -1;
  pcVar9 = &stack0xfffffae0;
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
    cVar1 = *pcVar2;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Body count");
  iVar5 = -1;
  pcVar2 = &stack0xfffffae4;
  do {
    pcVar10 = pcVar2;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar2 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
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
  pcVar2 = &stack0xfffffae4;
  do {
    pcVar10 = pcVar2;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar2 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
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
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_120 + 4,"%d\n\n");
  this_ptr_00 = g_ThemeFont;
  pcVar2 = acStack_118;
  iVar5 = -1;
  pcVar9 = &stack0xfffffae8;
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
    cVar1 = *pcVar2;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (this_ptr_00,&stack0xfffffaec,&DAT_02d7c2f0,0x14,0x100,0xc0);
  iVar7 = 0;
  iStack00000020 = iVar5;
  iStack00000020 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
  iVar3 = 0xf0;
  if (0 < iVar5) {
    pcVar2 = &DAT_02d7c2f0;
    do {
      iVar7 = iVar7 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (this_ptr_00,0x1c0,0x27f,iVar3,0xf8,0,pcVar2);
      pcVar2 = pcVar2 + 0x100;
      iVar3 = iVar3 + iStack00000020;
    } while (iVar7 < in_stack_00000024);
  }
  *(uint *)(in_stack_00000040 + 0x250) = 0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)&stack0xfffffff4);
  return;
}
