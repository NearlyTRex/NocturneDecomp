// Name: core_dimage.cpp_FUN_0045f18e
// Address: 0045f18e
// Address Range: [[0045f18e, 0045f3d2]]
// Convention: unknown
// Signature: void core_dimage_cpp_FUN_0045f18e(CDemonImage *param_1,CDemonImage *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dimage_cpp_FUN_0045f18e(CDemonImage *param_1,CDemonImage *param_2,uint param_3,uint param_4,uint param_5)

{
  CDemonImage CVar1;
  char cVar2;
  ushort uVar3;
  _FILE *p_Var4;
  uint unaff_EBX;
  uint unaff_ESI;
  CDemonImage *pCVar5;
  char *pcVar6;
  char *pcVar7;
  CDemonImage *pCVar8;
  CDemonImage *pCVar9;
  CDemonImage *unaff_retaddr;
  char acStack_118 [256];
  uint uStack_18;
  uint uStack_14;
  
  pCVar8 = (CDemonImage *)&stack0xfffffee4;
  pCVar5 = param_2;
  do {
    CVar1 = *pCVar5;
    *pCVar8 = CVar1;
    if (CVar1 == (CDemonImage)0x0) break;
    CVar1 = pCVar5[1];
    pCVar5 = pCVar5 + 2;
    pCVar8[1] = CVar1;
    pCVar8 = pCVar8 + 2;
  } while (CVar1 != (CDemonImage)0x0);
  p_Var4 = engine_dosio_cpp_FUN_00479180((char *)0x5d895b,&stack0xfffffee4,(char *)0x5d8958);
  if (p_Var4 == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\dimage.cpp";
    _DAT_01d1d404 = 0x68;
    core_main_c_FUN_005030e0("CDemonImage::load - Unable to load image!");
  }
  *(uint *)(param_1 + 0x304) = param_3;
  *(uint *)(param_1 + 0x308) = param_4;
  core_dimage_cpp_FUN_0045f0a0(param_1);
  _fread(*(uint *)(param_1 + 0x300),param_3,param_5);
  _fclose();
  pcVar7 = acStack_118;
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == '.') goto LAB_0045f24d;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == '.') goto LAB_0045f24d;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_0045f24d:
  if (pcVar6 == (char *)0x0) {
    _DAT_01d1d400 = "..\\core\\dimage.cpp";
    _DAT_01d1d404 = 0x7b;
    core_main_c_FUN_005030e0();
  }
  pcVar7 = (char *)0x5d89dd;
  do {
    cVar2 = *pcVar7;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  p_Var4 = engine_dosio_cpp_FUN_00479180((char *)0x5d89e5,acStack_118,(char *)0x5d89e2);
  if (p_Var4 == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\dimage.cpp";
    _DAT_01d1d404 = 0x7f;
    core_main_c_FUN_005030e0();
  }
  _fread(param_2 + 0x30c,0x100,3);
  _fclose();
  pCVar5 = param_2;
  pCVar8 = param_2;
  pCVar9 = param_2;
  do {
    uStack_18 = (uint)(byte)pCVar5[0x30c];
    uStack_14 = (uint)(byte)pCVar5[0x30e];
    CVar1 = pCVar5[0x30d];
    uVar3 = core_dimage_cpp_CDemonImage_packColor_FUN_0045f130
                      (param_2,uStack_18,(uint)(byte)CVar1,uStack_14);
    *(ushort *)(pCVar8 + 0x100) = uVar3;
    pCVar8 = pCVar8 + 2;
    pCVar5 = pCVar5 + 3;
    *pCVar9 = *(CDemonImage *)
               (&DAT_01c45ad0 +
               (uint)((byte)CVar1 >> 3) * 0x20 + (unaff_ESI >> 3) * 0x400 + (unaff_EBX >> 3));
    pCVar9 = pCVar9 + 1;
  } while (pCVar8 != unaff_retaddr);
  return;
}
