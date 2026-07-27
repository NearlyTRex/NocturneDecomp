// Name: core_tbplayer.cpp_FUN_00543210
// Address: 00543210
// Address Range: [[00543210, 00543328]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_FUN_00543210(int param_1,int param_2)

#include "nocturne.h"

void core_tbplayer_cpp_FUN_00543210(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_a8 [12];
  byte local_78 [60];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar3 = 0;
  iVar1 = *(int *)(param_2 * 0x44 + param_1 + 0x24a4);
  if (param_2 == 0) {
    local_14 = 0xbfeed917;
    local_10 = 0xc08374bc;
    local_18 = 0x4006a7f0;
    if (&local_3c != &local_18) {
      local_38 = 0xbfeed917;
      local_34 = 0xc08374bc;
      local_3c = 0x4006a7f0;
    }
    local_28 = 0x3dced917;
    local_2c = 0xbef8d4fe;
    local_30 = 0x3faf7cee;
    if (&local_24 != &local_30) {
      local_1c = 0x3dced917;
      local_24 = 0x3faf7cee;
      local_20 = 0xbef8d4fe;
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_78,&local_3c,&local_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_78,iVar1 * 0x30 + param_1 + 0xfd0);
  puVar2 = local_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
