// Name: core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004b8700
// Address: 004b8700
// Address Range: [[004b8700, 004b8b68]]
// Convention: unknown
// Signature: void core_hostage_cpp_CHostage_getCarryObjToBodyXForm_FUN_004b8700(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b8a3c) */
/* WARNING: Removing unreachable block (ram,0x004b8b27) */
/* WARNING: Removing unreachable block (ram,0x004b8a76) */
/* WARNING: Removing unreachable block (ram,0x004b8aa7) */
/* WARNING: Removing unreachable block (ram,0x004b8ac1) */

void core_hostage_cpp_CHostage_getCarryObjToBodyXForm_FUN_004b8700(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_294 [12];
  uint local_264 [24];
  CMatrix3x4f local_204;
  uint local_1d4 [24];
  uint local_174 [12];
  uint local_144 [12];
  CMatrix3x4f local_114;
  CMatrix3x4f local_e4;
  CVector3f local_a8;
  CVector3f local_9c [2];
  CVector3f local_84;
  CVector3f local_78 [2];
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24 [2];
  
  bVar5 = 0;
  iVar2 = param_1 + param_2 * 0x44;
  if ((*(int *)(param_1 + 0x1f920) == 1) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0
                        (*(CDemonActor **)(iVar2 + 0x24ac),"CShotgun"), iVar1 != 0)) {
    local_84.x = 0.269;
    local_84.y = -0.012;
    local_54.x = -0.287;
    local_84.z = 0.092;
    local_54.z = 1.209;
    local_54.y = 0.405;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_204,&local_84,&local_54);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
              (&local_204,param_1 + 0xfd0 + *(int *)(iVar2 + 0x24a4) * 0x30);
    puVar3 = local_1d4;
  }
  else if (*(int *)(param_1 + 0x1f920) == 3) {
    local_3c.x = 0.265971;
    local_3c.y = -0.200311;
    local_3c.z = 0.0324051;
    if (&local_a8 != &local_3c) {
      local_a8.y = -0.200311;
      local_a8.z = 0.0324051;
      local_a8.x = 0.265971;
    }
    local_24[0].z = 0.13687;
    local_24[0].y = 0.13687;
    local_24[0].x = -0.480625;
    if (local_9c != local_24) {
      local_9c[0].x = -0.480625;
      local_9c[0].y = 0.13687;
      local_9c[0].z = 0.13687;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(&local_e4,&local_a8,local_9c);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
              (&local_e4,param_1 + 0xfd0 + *(int *)(param_1 + 0x24a4 + param_2 * 0x44) * 0x30);
    puVar3 = local_264;
  }
  else if (*(int *)(param_1 + 0x1f920) == 5) {
    local_78[0].x = 0.265971;
    local_78[0].y = -0.200311;
    local_78[0].z = 0.0324051;
    if (&local_30 != local_78) {
      local_30.y = -0.200311;
      local_30.z = 0.0324051;
      local_30.x = 0.265971;
    }
    local_60.z = 0.13687;
    local_60.y = 0.13687;
    local_60.x = -0.480625;
    if (&local_48 != &local_60) {
      local_48.x = -0.480625;
      local_48.y = 0.13687;
      local_48.z = 0.13687;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_114,&local_30,&local_48);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
              (&local_114,param_1 + 0xfd0 + *(int *)(param_1 + 0x24a4 + param_2 * 0x44) * 0x30);
    puVar3 = local_174;
  }
  else {
    core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429490(param_1,param_2);
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
