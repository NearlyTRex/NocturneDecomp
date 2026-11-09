// Name: core_tentacle.cpp_FUN_005732e0
// Address: 005732e0
// Address Range: [[005732e0, 005733cb]]
// Convention: unknown
// Signature: void core_tentacle_cpp_FUN_005732e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tentacle_cpp_FUN_005732e0(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_fc [12];
  uint local_cc [12];
  uint local_9c [12];
  uint local_6c [12];
  uint local_3c [12];
  
  bVar4 = 0;
  param_1 = param_1 + 0x1134;
  core_xform_cpp_FUN_00593770
            (_DAT_0264c0b0 * 0x30 + param_1,_DAT_0264c0b4 * 0x30 + param_1,0x3f000000);
  puVar2 = local_6c;
  puVar3 = local_cc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_xform_cpp_FUN_00593770
            (_DAT_0264c0b8 * 0x30 + param_1,_DAT_0264c0bc * 0x30 + param_1,0x3f000000);
  puVar2 = local_fc;
  puVar3 = local_9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_xform_cpp_FUN_00593770(local_cc,local_9c,0x3f000000);
  puVar2 = local_3c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
