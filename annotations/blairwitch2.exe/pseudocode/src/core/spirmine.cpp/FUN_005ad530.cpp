// Name: core_spirmine.cpp_FUN_005ad530
// Address: 005ad530
// Address Range: [[005ad530, 005ad8f4]]
// Convention: unknown
// Signature: void core_spirmine_cpp_FUN_005ad530(CBoxActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_spirmine_cpp_FUN_005ad530(CBoxActor *param_1,float param_2)

{
  float fVar1;
  byte *puVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  uint auStackY_18ac [1462];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puStack_1a8;
  SDamageInfo aSStack_16c [4];
  uint uStack_168;
  CBoxActor *pCStack_138;
  CBoxActor *pCStack_134;
  uint auStack_130 [12];
  uint auStack_100 [12];
  uint uStack_d0;
  uint auStack_cc [7];
  float afStack_b0 [3];
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint auStack_88 [4];
  uint uStack_78;
  uint uStack_74;
  uint auStack_70 [5];
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  float fStack_2c;
  uint uStack_24;
  float fStack_20;
  float fStack_1c;
  byte *puStack_18;
  float fStack_14;
  
  bVar8 = 0;
  puStack_18 = &param_1->field_0x154;
  unkafter_superopt_cpp_FUN_005a8180(puStack_18,param_2);
  core_boxactor_cpp_FUN_0041c090(param_1,param_2);
  puStack_1a8 = (uint *)0x5ad572;
  core_spirmine_cpp_FUN_005ad940();
  puVar2 = puStack_18;
  iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  fVar4 = *(float *)&param_1->field_0x20 - *(float *)(iVar5 + 0x20);
  fVar1 = *(float *)&param_1->field_0x28 - *(float *)(iVar5 + 0x28);
  fStack_20 = SQRT(fVar1 * fVar1 + fVar4 * fVar4);
  fStack_1c = fStack_20;
  if (*(float *)&param_1[1].field_0x1c <= 0.0) {
    *(uint *)&param_1[1].field_0x1c = 0;
    if (fStack_20 <= *(float *)(param_1 + 1)) {
      iVar5 = 0;
      do {
        iVar3 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar3 != 0) {
          puStack_1a8 = (uint *)0x0;
          fStack_2c = (float)core_actor_cpp_FUN_0040cf60();
          puStack_1a8 = (uint *)0x3f800000;
          fStack_14 = fStack_2c;
          fVar4 = (float)core_actor_cpp_FUN_0040cf60();
          fVar9 = (float10)fcos((float10)fStack_2c);
          fVar10 = (float10)fsin((float10)fStack_2c);
          puStack_1a8 = (uint *)0x40400000;
          afStack_b0[1] = 0.0;
          afStack_b0[2] = (float)(fVar9 * (float10)fVar4);
          afStack_b0[0] = (float)(fVar10 * (float10)fVar4);
          fStack_14 = afStack_b0[2];
          auStack_88[3] = core_actor_cpp_FUN_0040cf60();
          puStack_1a8 = (uint *)0x0;
          auStack_88[2] = 0;
          uStack_78 = 0;
          uStack_24 = auStack_88[3];
          fStack_14 = (float)auStack_88[3];
          unkafter_superopt_cpp_FUN_005a8300
                    (puVar2,0x40400000,0x3f000000,0,0x3f000000,0,0x3df5c28f,0x3f28f5c3,0x3f2147ae,
                     auStack_cc + 7,auStack_88 + 2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 100);
      puStack_1a8 = (uint *)0x5ad7e8;
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_16c);
      uStack_168 = 0x40a00000;
      pCStack_138 = param_1;
      puStack_1a8 = *(uint **)(_DAT_01cedef4 * 4 + 0x1cedee4);
      pCStack_134 = param_1;
      (**(code **)(*(int *)((int)puStack_1a8 + 0x2b0) + 0x110))();
      *(uint *)&param_1[1].field_0x18 = 0;
      *(uint *)&param_1[1].field_0x1c = *(uint *)&param_1[1].field_0xc;
      return;
    }
  }
  else {
    fVar4 = *(float *)&param_1[1].field_0x18 - param_2;
    *(float *)&param_1[1].field_0x1c = *(float *)&param_1[1].field_0x1c - param_2;
    *(float *)&param_1[1].field_0x18 = fVar4;
    if (fVar4 <= 0.0) {
      puStack_1a8 = (uint *)0x40490fdb;
      *(uint *)&param_1[1].field_0x18 = 0x3f000000;
      uStack_34 = core_actor_cpp_FUN_0040cf60();
      puStack_1a8 = (uint *)0x40490fdb;
      fStack_14 = (float)uStack_34;
      uStack_38 = core_actor_cpp_FUN_0040cf60();
      puStack_1a8 = (uint *)0x40490fdb;
      fStack_14 = (float)uStack_38;
      uStack_54 = core_actor_cpp_FUN_0040cf60();
      uStack_5c = uStack_34;
      uStack_58 = uStack_38;
      puStack_1a8 = (uint *)0x5ad667;
      uStack_3c = uStack_54;
      fStack_14 = (float)uStack_54;
      core_xform_cpp_FUN_00594380();
      auStack_cc[3] = uStack_d0;
      auStack_cc[(uint)bVar8 * -2 + 4] = auStack_cc[(uint)bVar8 * -2];
      auStack_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5] =
           auStack_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      (auStack_cc + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1] =
           (auStack_cc + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      puStack_1a8 = (uint *)0x5ad683;
      core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10();
      puVar6 = auStack_130;
      puVar7 = auStack_100;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      puStack_1a8 = &uStack_a4;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0x3f800000;
      core_xform_cpp_FUN_00591530();
      uStack_98 = 0;
      uStack_90 = 0;
      puStack_1a8 = &uStack_98;
      puVar6 = &uStack_8c;
      puVar7 = auStack_70 + 2;
      uStack_94 = 0x3f800000;
      auStack_70[2] = uStack_74;
      auStack_70[(uint)bVar8 * -2 + 3] = auStack_70[(uint)bVar8 * -2];
      auStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           auStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      uVar13 = 0x3f266666;
      uVar12 = 0x3f666666;
      uVar11 = 0x3f333333;
      uStack_8c = uStack_74;
      auStack_88[(uint)bVar8 * -2] = auStack_70[(uint)bVar8 * -2];
      auStack_88[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           auStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(uVar11,uVar12,uVar13,puVar7,puVar6);
      unkafter_superopt_cpp_FUN_005a8300
                (puStack_18,0x40000000,
                 *(float *)&param_1[1].field_0x1c / *(float *)&param_1[1].field_0xc,0,0x3f000000,
                 0x40000000,0x3f051eb8,fStack_14);
    }
    if (fStack_20 <= *(float *)(param_1 + 1)) {
      puStack_1a8 = (uint *)0x5ad75f;
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&puStack_1a8);
      puStack_1a8 = *(uint **)(_DAT_01cedef4 * 4 + 0x1cedee4);
      (**(code **)(*(int *)((int)puStack_1a8 + 0x2b0) + 0x110))();
      return;
    }
  }
  return;
}
