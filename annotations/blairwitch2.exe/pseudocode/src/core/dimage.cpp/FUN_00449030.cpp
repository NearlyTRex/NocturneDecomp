// Name: core_dimage.cpp_FUN_00449030
// Address: 00449030
// Address Range: [[00449030, 00449272]]
// Convention: unknown
// Signature: void core_dimage_cpp_FUN_00449030(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_dimage_cpp_FUN_00449030(void)

{
  uchar uVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  _FILE *p_Var5;
  uint unaff_EBX;
  CDemonImage *pCVar6;
  uint unaff_ESI;
  char *pcVar7;
  char *pcVar8;
  CDemonImage *pCVar9;
  uchar *puVar10;
  CDemonImage *pCVar11;
  CDemonImage *unaff_retaddr;
  CDemonImage *in_stack_00000004;
  CDemonImage *in_stack_00000008;
  SIZE_T in_stack_0000000c;
  int in_stack_00000010;
  SIZE_T in_stack_00000014;
  char acStack_118 [256];
  uint uStack_18;
  uint uStack_14;
  
  puVar10 = &stack0xfffffee4;
  pCVar6 = in_stack_00000008;
  do {
    uVar1 = pCVar6->color_cube_lookup[0];
    *puVar10 = uVar1;
    if (uVar1 == '\0') break;
    uVar1 = pCVar6->color_cube_lookup[1];
    pCVar6 = (CDemonImage *)(pCVar6->color_cube_lookup + 2);
    puVar10[1] = uVar1;
    puVar10 = puVar10 + 2;
  } while (uVar1 != '\0');
  p_Var5 = engine_dosio_cpp_FUN_00460c70((char *)0x5cf062,&stack0xfffffee4,(char *)0x5cf05f);
  if (p_Var5 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\dimage.cpp";
    _DAT_01d046a4 = 0x68;
    core_main_c_FUN_004e4500("CDemonImage::load - Unable to load image!");
  }
  in_stack_00000004->width = in_stack_0000000c;
  in_stack_00000004->height = in_stack_00000010;
  core_dimage_cpp_CDemonImage_allocMemory_FUN_00448f40(in_stack_00000004);
  _fread(in_stack_00000004->data,in_stack_0000000c,in_stack_00000014,p_Var5)
  ;
  _fclose();
  pcVar8 = acStack_118;
  do {
    pcVar7 = pcVar8;
    if (*pcVar8 == '.') goto LAB_004490ed;
    if (*pcVar8 == '\0') break;
    pcVar7 = pcVar8 + 1;
    if (*pcVar7 == '.') goto LAB_004490ed;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_004490ed:
  if (pcVar7 == (char *)0x0) {
    _DAT_01d046a0 = "..\\core\\dimage.cpp";
    _DAT_01d046a4 = 0x7b;
    core_main_c_FUN_004e4500();
  }
  pcVar8 = (char *)0x5cf0e4;
  do {
    cVar2 = *pcVar8;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  p_Var5 = engine_dosio_cpp_FUN_00460c70((char *)0x5cf0ec,acStack_118,(char *)0x5cf0e9);
  if (p_Var5 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\dimage.cpp";
    _DAT_01d046a4 = 0x7f;
    core_main_c_FUN_004e4500();
  }
  _fread(&in_stack_00000008->palette,0x100,3,p_Var5);
  _fclose();
  pCVar6 = in_stack_00000008;
  pCVar9 = in_stack_00000008;
  pCVar11 = in_stack_00000008;
  do {
    uStack_18 = (uint)(pCVar6->palette).colors[0].r;
    uStack_14 = (uint)(pCVar6->palette).colors[0].b;
    bVar3 = (pCVar6->palette).colors[0].g;
    uVar4 = core_dimage_cpp_CDemonImage_packColor_FUN_00448fd0
                      (in_stack_00000008,uStack_18,(uint)bVar3,uStack_14);
    pCVar9->color_values[0] = uVar4;
    pCVar9 = (CDemonImage *)(pCVar9->color_cube_lookup + 2);
    pCVar6 = (CDemonImage *)(pCVar6->color_cube_lookup + 3);
    pCVar11->color_cube_lookup[0] =
         (&DAT_01c2c910)[(uint)(bVar3 >> 3) * 0x20 + (unaff_ESI >> 3) * 0x400 + (unaff_EBX >> 3)];
    pCVar11 = (CDemonImage *)(pCVar11->color_cube_lookup + 1);
  } while (pCVar9 != unaff_retaddr);
  return;
}
