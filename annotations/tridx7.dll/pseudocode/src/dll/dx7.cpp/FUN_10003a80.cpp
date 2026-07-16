// Name: dll_dx7.cpp_FUN_10003a80
// Address: 10003a80
// Address Range: [[10003a80, 10003c93]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10003a80(void)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10003a80(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_EBX;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int *local_94;
  int *local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  int local_7c [3];
  uint local_70;
  uint local_6c;
  uint local_58;
  byte auStack_1c [8];
  byte local_14 [20];
  
  bVar5 = 0;
  switch(*g_ExternalRendererBridge.texture_dimension) {
  case 0x20:
    iVar3 = 3;
    break;
  default:
    dll_dx7_cpp_FUN_10002340("Unknown texture size");
    iVar3 = local_7c[0];
    break;
  case 0x40:
    iVar3 = 2;
    break;
  case 0x80:
    iVar3 = 1;
    break;
  case 0x100:
    iVar3 = 0;
  }
  dll_dx7_cpp_FUN_10003830();
  if (DAT_100141f0 == 0) {
    local_94 = (int *)(&DAT_10139048)[iVar3 + DAT_100141e8 * 8];
    local_90 = (int *)(&DAT_1020de44)[g_CurrentTextureIndex * 2];
  }
  else {
    local_90 = (int *)0x0;
    local_94 = (int *)(&DAT_1020de44)[g_CurrentTextureIndex * 2];
  }
  while( true ) {
    if (DAT_100141f0 == 0) {
      local_94 = (int *)(&DAT_10139048)[iVar3 + DAT_100141e8 * 8];
    }
    piVar4 = local_7c;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    }
    local_7c[0] = 0x7c;
    iVar2 = dll_dx7_cpp_FUN_10002e20(local_94,local_7c);
    if (iVar2 == 0) {
      dll_dx7_cpp_FUN_10002340("Texture load failed: Could not lock texture buffer");
    }
    if (DAT_10226a64 == 0x20) {
      dll_dx7_cpp_FUN_10003e40();
    }
    else {
      dll_dx7_cpp_FUN_10003d90(local_58,local_6c,local_70);
    }
    iVar2 = dll_dx7_cpp_FUN_10002cb0(local_94);
    if (iVar2 == 0) {
      dll_dx7_cpp_FUN_10002340("Texture load failed: Texture buffer unlock failed");
    }
    if (DAT_100141f0 == 0) {
      local_88 = 0;
      local_8c = 0;
      local_84 = local_70;
      local_80 = local_70;
      uVar1 = (**(code **)(*local_90 + 0x14))(local_90,&local_8c,local_94,&local_8c,0,0);
      dll_dx7_cpp_FUN_10001d70(uVar1);
    }
    if ((DAT_10060670 == 0) || (3 < iVar3)) break;
    if (DAT_100141f0 == 0) {
      (**(code **)(*local_90 + 0x58))(local_90,local_7c);
      uVar1 = (**(code **)(*unaff_EBX + 0x30))(unaff_EBX,auStack_1c,&stack0xffffff68);
      dll_dx7_cpp_FUN_10001d70(uVar1);
      piVar4 = local_90;
    }
    else {
      uVar1 = (**(code **)(*local_94 + 0x30))(local_94,local_14,&local_94);
      dll_dx7_cpp_FUN_10001d70(uVar1);
      piVar4 = local_94;
    }
    if (piVar4 == (int *)0x0) break;
    iVar3 = iVar3 + 1;
  }
  DAT_100141e8 = DAT_100141e8 + 1;
  if (3 < DAT_100141e8) {
    DAT_100141e8 = 0;
  }
  return;
}
