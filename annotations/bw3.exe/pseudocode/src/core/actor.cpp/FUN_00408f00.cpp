// Name: core_actor.cpp_FUN_00408f00
// Address: 00408f00
// Address Range: [[00408f00, 0040912a]]
// Convention: unknown
// Signature: undefined4 * core_actor_cpp_FUN_00408f00(CDemonActor *param_1,int param_2,uint param_3)

#include "nocturne.h"

uint * core_actor_cpp_FUN_00408f00(CDemonActor *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint corner_index;
  uint *puVar2;
  CBoundingBox3D *pCVar3;
  uint *unaff_EDI;
  uint *puVar4;
  byte bVar5;
  float afStackY_1050 [997];
  CBoundingBox3D *in_stack_ffffff48;
  CVector3f *pCVar6;
  CBoundingBox3D local_b0;
  uint auStack_98 [4];
  uint local_88 [2];
  CBoundingBox3D CStack_80;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [3];
  
  bVar5 = 0;
  if (param_3 < 2) {
    if (param_3 != 1) {
LAB_004090fc:
      local_b0.min.x = 1e+08;
      if (&local_b0.min.y != (float *)&stack0xffffff48) {
        local_b0.min.z = 1e+08;
        local_b0.max.x = 1e+08;
        local_b0.min.y = 1e+08;
      }
      goto LAB_0040907e;
    }
LAB_00408f37:
    (*((param_1->vtable)._ub)->getBoundingBox)(param_1,in_stack_ffffff48);
    puVar2 = auStack_98;
    puVar4 = local_88;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041d8b0(&CStack_80,0,&CStack_68);
    pCVar6 = &CStack_2c;
    CStack_2c.x = CStack_68.x;
    *(uint *)((int)&CStack_2c + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&CStack_68 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&CStack_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&CStack_68 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
              (param_1,pCVar6,(CVector3f *)(afStack_1c + 2));
    fStack_20 = afStack_1c[2];
    afStack_1c[(uint)bVar5 * -2] = *(float *)(&stack0xfffffff0 + (uint)bVar5 * -8);
    afStack_1c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    if (&local_b0 != (CBoundingBox3D *)&fStack_20) {
      local_b0.min.x = fStack_20;
      local_b0.min.y = afStack_1c[0];
      local_b0.min.z = afStack_1c[1];
    }
    if (&local_b0.max != (CVector3f *)&fStack_20) {
      local_b0.max.x = fStack_20;
      local_b0.max.y = afStack_1c[0];
      local_b0.max.z = afStack_1c[1];
    }
    corner_index = 1;
    do {
      core_box_cpp_CBoundingBox3D_getCorner_FUN_0041d8b0(&CStack_80,corner_index,&CStack_44);
      pCVar6 = &CStack_5c;
      CStack_5c.x = CStack_44.x;
      *(uint *)((int)&CStack_5c + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_44 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_5c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_44 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(param_1,pCVar6,&CStack_38);
      pCVar6 = &CStack_50;
      corner_index = corner_index + 1;
      CStack_50.x = CStack_38.x;
      *(uint *)((int)&CStack_50 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_38 + (uint)bVar5 * -8 + 4);
      pCVar3 = &local_b0;
      *(uint *)((int)&CStack_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_38 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(pCVar3,pCVar6);
    } while ((int)corner_index < 8);
    local_b0.min.x = local_b0.min.x + (param_1->location).position.x;
    local_b0.min.y = local_b0.min.y + (param_1->location).position.y;
    local_b0.min.z = local_b0.min.z + (param_1->location).position.z;
    local_b0.max.x = local_b0.max.x + (param_1->location).position.x;
    local_b0.max.y = local_b0.max.y + (param_1->location).position.y;
    local_b0.max.z = local_b0.max.z + (param_1->location).position.z;
  }
  else {
    if (2 < param_3) {
      if (param_3 != 3) goto LAB_004090fc;
      goto LAB_00408f37;
    }
    local_b0.min.x = (param_1->location).position.z - *(float *)(param_2 + 0x1c);
    local_b0.min.y = (param_1->location).position.x + *(float *)(param_2 + 0x1c);
    local_b0.min.z = (param_1->location).position.y + *(float *)(param_2 + 0x18);
    local_b0.max.z = (param_1->location).position.z + *(float *)(param_2 + 0x1c);
  }
LAB_0040907e:
  pCVar3 = &local_b0;
  puVar2 = unaff_EDI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(uint *)pCVar3;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
  }
  return unaff_EDI;
}
