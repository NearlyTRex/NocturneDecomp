// Name: core_charactr.cpp_FUN_00433c60
// Address: 00433c60
// Address Range: [[00433c60, 00433fa2]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00433c60(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00433c60(CDemonActor *param_1,float param_2)

{
  float fVar1;
  CSkeleton *pCVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int aiStackY_108c [1010];
  CFireEffect *this_ptr;
  CVector3f *position;
  CDemonSet *this_ptr_00;
  CVector3f *pCVar6;
  uint *puVar7;
  CDeformableModelInstance *this_ptr_01;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  CVector3f local_a4;
  uint local_98;
  uint auStack_94 [5];
  CVector3f local_80;
  uint local_74;
  uint auStack_70 [5];
  CVector3f local_5c;
  CVector3f local_50;
  uint local_44;
  uint auStack_40 [2];
  CVector3f local_38;
  int local_2c [3];
  CVector3f local_20;
  
  bVar5 = 0;
  if ((*(int *)&param_1[0x1d].field_0xc4 != 0) &&
     ((*(int *)&param_1[0x1d].field_0xb0 != 0 ||
      (iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1), iVar3 == 0)))) {
    if (*(int *)&param_1[0x1d].field_0xb0 == 0) {
      if (((float)_DAT_005b8866 <= *(float *)&g_CDemonSetPtr->field_0x15ac84) &&
         (iVar3 = core_actor_cpp_FUN_0040c790(param_1,"?CZombieDog" + 1), iVar3 == 0)) {
        return;
      }
      if ((*(int *)&param_1[0x24].field_0x6c == 0) &&
         (fVar1 = *(float *)&param_1[0x24].field_0x64 - param_2,
         *(float *)&param_1[0x24].field_0x64 = fVar1, fVar1 < 0.0)) {
        *(float *)&param_1[0x24].field_0x64 = *(float *)&param_1[0x24].field_0x64 + _DAT_005b886e;
        local_2c[1] = 0xbf000000;
        local_2c[2] = 0x3f800000;
        local_2c[0] = *(int *)&param_1[0x24].field_0x6c;
        core_actor_cpp_FUN_00408b00(param_1,local_2c);
        this_ptr_01 = (CDeformableModelInstance *)(param_1 + 1);
        local_80._0_4_ = local_20._0_4_;
        *(uint *)((int)&local_80 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&local_20 + (uint)bVar5 * -8 + 4);
        *(uint *)((int)&local_80 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&local_20 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_01)
        ;
        iVar3 = core_skeleton_cpp_FUN_00548090(pCVar2,"Bip01 head",0);
        if (iVar3 != -1) {
          local_ac = 0x3e4ccccd;
          local_a8 = 0x3f000000;
          local_b0 = 0;
          core_xform_cpp_FUN_00583260(&local_b0,&param_1[0xb].field_0x110 + iVar3 * 0x30);
          puVar7 = &local_98;
          local_98 = local_74;
          auStack_94[(uint)bVar5 * -2] = auStack_70[(uint)bVar5 * -2];
          auStack_94[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               auStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          core_actor_cpp_FUN_00408b80(param_1,puVar7);
          iVar3 = 0x411a;
          pCVar6 = &local_80;
          fVar1 = 0.5;
          position = &local_50;
          local_50._0_4_ = local_5c._0_4_;
          *(uint *)((int)&local_50 + (uint)bVar5 * -8 + 4) =
               *(uint *)((int)&local_5c + (uint)bVar5 * -8 + 4);
          this_ptr = 0x01C73654;
          *(uint *)((int)&local_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               *(uint *)((int)&local_5c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
                    (this_ptr,position,fVar1,pCVar6,iVar3);
        }
      }
      param_2 = *(float *)&param_1[0x24].field_0x68 - param_2;
      *(float *)&param_1[0x24].field_0x68 = param_2;
      if (param_2 < 0.0) {
        *(uint *)&param_1[0x24].field_0x68 = 0x3fc00000;
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                           ((CDeformableModelInstance *)(param_1 + 1));
        iVar3 = core_skeleton_cpp_FUN_00548090(pCVar2,"Bip01 head",0);
        if (iVar3 != -1) {
          auStack_94[2] = 0;
          auStack_94[4] = 0x3f000000;
          auStack_94[3] = 0x3e4ccccd;
          core_xform_cpp_FUN_00583260(auStack_94 + 2,&param_1[0xb].field_0x110 + iVar3 * 0x30);
          puVar7 = auStack_70 + 2;
          auStack_70[2] = local_44;
          auStack_70[(uint)bVar5 * -2 + 3] = auStack_40[(uint)bVar5 * -2];
          auStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               auStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          core_actor_cpp_FUN_00408b80(param_1,puVar7);
          pCVar6 = &local_38;
          local_38._0_4_ = local_a4._0_4_;
          local_2c[(uint)bVar5 * -2 + -2] = *(int *)((int)&local_a4 + (uint)bVar5 * -8 + 4);
          this_ptr_00 = g_CDemonSetPtr;
          local_2c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -1] =
               *(int *)((int)&local_a4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          iVar3 = core_setcolid_cpp_FUN_0053ef60(this_ptr_00,pCVar6);
          if (iVar3 == 0) {
            uVar4 = (uint)(*(int *)&param_1[0x24].field_0x6c == 0);
            *(uint *)&param_1[0x24].field_0x6c = uVar4;
            if (uVar4 == 0) {
              fVar1 = (float)core_actor_cpp_FUN_0040ce40(0x3f800000,0x3fc00000);
              *(float *)&param_1[0x24].field_0x68 = fVar1 + *(float *)&param_1[0x24].field_0x68;
              return;
            }
            fVar1 = (float)core_actor_cpp_FUN_0040ce40(0x3fc00000,0x40400000);
            *(float *)&param_1[0x24].field_0x68 = fVar1 + *(float *)&param_1[0x24].field_0x68;
            return;
          }
        }
      }
    }
    else {
      param_2 = *(float *)&param_1[0x24].field_0x68 - param_2;
      *(float *)&param_1[0x24].field_0x68 = param_2;
      if (param_2 < 0.0) {
        if (*(int *)&param_1[0x24].field_0x6c == 0) {
          fVar1 = (float)core_actor_cpp_FUN_0040ce40(0x40a00000,0x41000000);
          fVar1 = fVar1 + *(float *)&param_1[0x24].field_0x68;
        }
        else {
          fVar1 = *(float *)&param_1[0x24].field_0x68 + 1.0;
        }
        *(float *)&param_1[0x24].field_0x68 = fVar1;
        *(uint *)&param_1[0x24].field_0x6c = (uint)(*(int *)&param_1[0x24].field_0x6c == 0);
        _DAT_007e2cb0 = 0;
      }
    }
  }
  return;
}
