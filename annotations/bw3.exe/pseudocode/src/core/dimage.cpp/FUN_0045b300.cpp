// Name: core_dimage.cpp_FUN_0045b300
// Address: 0045b300
// Address Range: [[0045b300, 0045b542]]
// Convention: unknown
// Signature: void core_dimage_cpp_FUN_0045b300(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_dimage_cpp_FUN_0045b300(void)

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
  p_Var5 = engine_dosio_cpp_FUN_004659c0((char *)0x5bb039,&stack0xfffffee4,(char *)0x5bb036);
  if (p_Var5 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\dimage.cpp";
    _DAT_01d71de4 = 0x68;
    core_main_c_FUN_004e4330("CDemonImage::load - Unable to load image!");
  }
  in_stack_00000004->width = in_stack_0000000c;
  in_stack_00000004->height = in_stack_00000010;
  core_dimage_cpp_CDemonImage_allocMemory_FUN_0045b210(in_stack_00000004);
  _fread(in_stack_00000004->data,in_stack_0000000c,in_stack_00000014,p_Var5)
  ;
  _fclose();
  pcVar8 = acStack_118;
  do {
    pcVar7 = pcVar8;
    if (*pcVar8 == '.') goto LAB_0045b3bd;
    if (*pcVar8 == '\0') break;
    pcVar7 = pcVar8 + 1;
    if (*pcVar7 == '.') goto LAB_0045b3bd;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_0045b3bd:
  if (pcVar7 == (char *)0x0) {
    _DAT_01d71de0 = "..\\core\\dimage.cpp";
    _DAT_01d71de4 = 0x7b;
    core_main_c_FUN_004e4330();
  }
  pcVar8 = (char *)0x5bb0bb;
  do {
    cVar2 = *pcVar8;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  p_Var5 = engine_dosio_cpp_FUN_004659c0((char *)0x5bb0c3,acStack_118,(char *)0x5bb0c0);
  if (p_Var5 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\dimage.cpp";
    _DAT_01d71de4 = 0x7f;
    core_main_c_FUN_004e4330();
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
    uVar4 = core_dimage_cpp_CDemonImage_packColor_FUN_0045b2a0
                      (in_stack_00000008,uStack_18,(uint)bVar3,uStack_14);
    pCVar9->color_values[0] = uVar4;
    pCVar9 = (CDemonImage *)(pCVar9->color_cube_lookup + 2);
    pCVar6 = (CDemonImage *)(pCVar6->color_cube_lookup + 3);
    pCVar11->color_cube_lookup[0] =
         (&DAT_01c62070)[(uint)(bVar3 >> 3) * 0x20 + (unaff_ESI >> 3) * 0x400 + (unaff_EBX >> 3)];
    pCVar11 = (CDemonImage *)(pCVar11->color_cube_lookup + 1);
  } while (pCVar9 != unaff_retaddr);
  return;
}
