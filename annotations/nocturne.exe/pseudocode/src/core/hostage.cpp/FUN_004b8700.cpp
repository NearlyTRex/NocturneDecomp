// Name: core_hostage.cpp_FUN_004b8700
// Address: 004b8700
// Address Range: [[004b8700, 004b8b68]]
// Convention: unknown
// Signature: void core_hostage_cpp_FUN_004b8700(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b8a3c) */
/* WARNING: Removing unreachable block (ram,0x004b8b27) */
/* WARNING: Removing unreachable block (ram,0x004b8a76) */
/* WARNING: Removing unreachable block (ram,0x004b8aa7) */
/* WARNING: Removing unreachable block (ram,0x004b8ac1) */

void core_hostage_cpp_FUN_004b8700(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_294 [12];
  uint local_264 [24];
  byte local_204 [48];
  uint local_1d4 [24];
  uint local_174 [12];
  uint local_144 [12];
  byte local_114 [48];
  byte local_e4 [60];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  bVar5 = 0;
  iVar2 = param_1 + param_2 * 0x44;
  if ((*(int *)(param_1 + 0x1f920) == 1) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0
                        (*(uint *)(iVar2 + 0x24ac),"CShotgun"), iVar1 != 0)) {
    local_84 = 0x3e89ba5e;
    local_80 = 0xbc449ba6;
    local_54 = 0xbe92f1aa;
    local_7c = 0x3dbc6a7f;
    local_4c = 0x3f9ac083;
    local_50 = 0x3ecf5c29;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_204,&local_84,&local_54)
    ;
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
              (local_204,param_1 + 0xfd0 + *(int *)(iVar2 + 0x24a4) * 0x30);
    puVar3 = local_1d4;
  }
  else if (*(int *)(param_1 + 0x1f920) == 3) {
    local_3c = 0x3e882d5a;
    local_38 = 0xbe4d1e54;
    local_34 = 0x3d04bb36;
    if (&local_a8 != &local_3c) {
      local_a4 = 0xbe4d1e54;
      local_a0 = 0x3d04bb36;
      local_a8 = 0x3e882d5a;
    }
    local_1c = 0x3e0c27a6;
    local_20 = 0x3e0c27a6;
    local_24 = 0xbef6147b;
    if (&local_9c != &local_24) {
      local_9c = 0xbef6147b;
      local_98 = 0x3e0c27a6;
      local_94 = 0x3e0c27a6;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_e4,&local_a8,&local_9c);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
              (local_e4,param_1 + 0xfd0 + *(int *)(param_1 + 0x24a4 + param_2 * 0x44) * 0x30);
    puVar3 = local_264;
  }
  else if (*(int *)(param_1 + 0x1f920) == 5) {
    local_78 = 0x3e882d5a;
    local_74 = 0xbe4d1e54;
    local_70 = 0x3d04bb36;
    if (&local_30 != &local_78) {
      local_2c = 0xbe4d1e54;
      local_28 = 0x3d04bb36;
      local_30 = 0x3e882d5a;
    }
    local_58 = 0x3e0c27a6;
    local_5c = 0x3e0c27a6;
    local_60 = 0xbef6147b;
    if (&local_48 != &local_60) {
      local_48 = 0xbef6147b;
      local_44 = 0x3e0c27a6;
      local_40 = 0x3e0c27a6;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_114,&local_30,&local_48)
    ;
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
              (local_114,param_1 + 0xfd0 + *(int *)(param_1 + 0x24a4 + param_2 * 0x44) * 0x30);
    puVar3 = local_174;
  }
  else {
    core_charactr_cpp_FUN_00429490(param_1,param_2);
    puVar3 = local_144;
  }
  puVar4 = local_294;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = local_294;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
