// Name: core_actor.cpp_FUN_00408f00
// Address: 00408f00
// Address Range: [[00408f00, 0040912a]]
// Convention: unknown
// Signature: undefined4 * core_actor_cpp_FUN_00408f00(int param_1,int param_2,uint param_3)

#include "nocturne.h"

uint * core_actor_cpp_FUN_00408f00(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  CBoundingBox3D *pCVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1058 [998];
  float *pfVar6;
  CVector3f *point;
  CBoundingBox3D local_b8;
  uint local_a0 [6];
  uint local_88 [6];
  uint uStack_70;
  float afStack_6c [5];
  CVector3f CStack_58;
  uint uStack_4c;
  float afStack_48 [5];
  float afStack_34 [3];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  bVar5 = 0;
  if (param_3 < 2) {
    if (param_3 != 1) {
LAB_004090fc:
      local_b8.min.y = 1e+08;
      local_b8.min.x = 1e+08;
      local_b8.min.z = 1e+08;
      if ((CBoundingBox3D *)&local_b8.max != &local_b8) {
        local_b8.max.y = 1e+08;
        local_b8.max.z = 1e+08;
        local_b8.max.x = 1e+08;
      }
      goto LAB_0040907e;
    }
LAB_00408f37:
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    puVar2 = local_a0;
    puVar4 = local_88;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_box_cpp_FUN_0041d8b0(local_88,0);
    pfVar6 = afStack_48 + 5;
    afStack_34[0] = (float)uStack_70;
    afStack_48[(uint)bVar5 * -2 + 6] = afStack_6c[(uint)bVar5 * -2];
    afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    core_actor_cpp_FUN_00408b00(param_1,pfVar6);
    fStack_28 = fStack_1c;
    afStack_48[(uint)bVar5 * -2 + 9] = afStack_48[(uint)bVar5 * -2 + 0xc];
    afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
         afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    if (&local_b8 != (CBoundingBox3D *)(afStack_48 + 8)) {
      local_b8.min.x = fStack_28;
      local_b8.min.y = fStack_24;
      local_b8.min.z = fStack_20;
    }
    if (&local_b8.max != (CVector3f *)(afStack_48 + 8)) {
      local_b8.max.x = fStack_28;
      local_b8.max.y = fStack_24;
      local_b8.max.z = fStack_20;
    }
    iVar1 = 1;
    do {
      core_box_cpp_FUN_0041d8b0(local_88,iVar1);
      pfVar6 = afStack_6c + 2;
      afStack_6c[2] = (float)uStack_4c;
      afStack_6c[(uint)bVar5 * -2 + 3] = afStack_48[(uint)bVar5 * -2];
      afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_actor_cpp_FUN_00408b00(param_1,pfVar6);
      point = &CStack_58;
      iVar1 = iVar1 + 1;
      CStack_58.x = afStack_48[2];
      *(float *)((int)&CStack_58 + (uint)bVar5 * -8 + 4) = afStack_48[(uint)bVar5 * -2 + 3];
      pCVar3 = &local_b8;
      *(float *)((int)&CStack_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(pCVar3,point);
    } while (iVar1 < 8);
    local_b8.min.x = local_b8.min.x + *(float *)(param_1 + 0x20);
    local_b8.min.y = local_b8.min.y + *(float *)(param_1 + 0x24);
    local_b8.min.z = local_b8.min.z + *(float *)(param_1 + 0x28);
    local_b8.max.x = local_b8.max.x + *(float *)(param_1 + 0x20);
    local_b8.max.y = local_b8.max.y + *(float *)(param_1 + 0x24);
    local_b8.max.z = local_b8.max.z + *(float *)(param_1 + 0x28);
  }
  else {
    if (2 < param_3) {
      if (param_3 != 3) goto LAB_004090fc;
      goto LAB_00408f37;
    }
    local_b8.min.x = *(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x1c);
    local_b8.min.y = *(float *)(param_1 + 0x24) + *(float *)(param_2 + 0x14);
    local_b8.min.z = *(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x1c);
    local_b8.max.x = *(float *)(param_1 + 0x20) + *(float *)(param_2 + 0x1c);
    local_b8.max.y = *(float *)(param_1 + 0x24) + *(float *)(param_2 + 0x18);
    local_b8.max.z = *(float *)(param_1 + 0x28) + *(float *)(param_2 + 0x1c);
  }
LAB_0040907e:
  pCVar3 = &local_b8;
  puVar2 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(uint *)pCVar3;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
  }
  return unaff_ESI;
}
