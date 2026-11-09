// Name: core_dimage.cpp_FUN_0044902e
// Address: 0044902e
// Address Range: [[0044902e, 00449272]]
// Convention: unknown
// Signature: void core_dimage_cpp_FUN_0044902e(undefined1 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dimage_cpp_FUN_0044902e(byte *param_1,char *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  _FILE *p_Var4;
  byte *puVar5;
  char *pcVar6;
  byte *puVar7;
  char *pcVar8;
  byte *puVar9;
  char acStack_11c [256];
  uint uStack_1c;
  uint uStack_18;
  byte *puStack_14;
  
  pcVar8 = acStack_11c;
  do {
    cVar1 = *param_2;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  p_Var4 = engine_dosio_cpp_FUN_00460c70((char *)0x5cf062,acStack_11c,(char *)0x5cf05f);
  if (p_Var4 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\dimage.cpp";
    _DAT_01d046a4 = 0x68;
    core_main_c_FUN_004e4500("CDemonImage::load - Unable to load image!");
  }
  *(uint *)(param_1 + 0x304) = param_3;
  *(uint *)(param_1 + 0x308) = param_4;
  core_dimage_cpp_FUN_00448f40(param_1);
  _fread(*(uint *)(param_1 + 0x300),param_3,param_4,p_Var4);
  _fclose(p_Var4);
  pcVar8 = acStack_11c;
  do {
    pcVar6 = pcVar8;
    if (*pcVar8 == '.') goto LAB_004490ed;
    if (*pcVar8 == '\0') break;
    pcVar6 = pcVar8 + 1;
    if (*pcVar6 == '.') goto LAB_004490ed;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004490ed:
  if (pcVar6 == (char *)0x0) {
    _DAT_01d046a0 = "..\\core\\dimage.cpp";
    _DAT_01d046a4 = 0x7b;
    core_main_c_FUN_004e4500("CDemonImage::load - Unable to find extention!");
  }
  pcVar8 = (char *)0x5cf0e4;
  do {
    cVar1 = *pcVar8;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  p_Var4 = engine_dosio_cpp_FUN_00460c70((char *)0x5cf0ec,acStack_11c,(char *)0x5cf0e9);
  if (p_Var4 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\dimage.cpp";
    _DAT_01d046a4 = 0x7f;
    core_main_c_FUN_004e4500("CDemonImage::load - Unable to load palette!");
  }
  _fread(param_1 + 0x30c,0x100,3,p_Var4);
  _fclose(p_Var4);
  puStack_14 = param_1 + 0x200;
  puVar5 = param_1;
  puVar7 = param_1;
  puVar9 = param_1;
  do {
    uStack_1c = (uint)(byte)puVar5[0x30c];
    uStack_18 = (uint)(byte)puVar5[0x30e];
    bVar2 = puVar5[0x30d];
    uVar3 = core_dimage_cpp_FUN_00448fd0(param_1,uStack_1c,bVar2,uStack_18);
    *(ushort *)(puVar7 + 0x100) = uVar3;
    puVar7 = puVar7 + 2;
    puVar5 = puVar5 + 3;
    *puVar9 = (&DAT_01c2c910)
              [(uint)(bVar2 >> 3) * 0x20 + (uStack_1c >> 3) * 0x400 + (uStack_18 >> 3)];
    puVar9 = puVar9 + 1;
  } while (puVar7 != puStack_14);
  return;
}
