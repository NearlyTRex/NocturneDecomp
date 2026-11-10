// Name: core_spirmine.cpp_CSpiritMine_process_FUN_005ad530
// Address: 005ad530
// Address Range: [[005ad530, 005ad8f4]]
// Convention: __cdecl
// Signature: void __cdecl core_spirmine_cpp_CSpiritMine_process_FUN_005ad530(CSpiritMine *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_spirmine_cpp_CSpiritMine_process_FUN_005ad530(CSpiritMine *this_ptr,float delta_time)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_18ac [1462];
  float fVar9;
  float fVar10;
  uint uVar11;
  SDamageInfo aSStack_16c [4];
  uint uStack_168;
  CSpiritMine *pCStack_138;
  CSpiritMine *pCStack_134;
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
  float afStack_88 [4];
  uint uStack_78;
  uint uStack_74;
  float afStack_70 [5];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  byte *puStack_18;
  float fStack_14;
  
  bVar6 = 0;
  puStack_18 = &this_ptr->field_0x154;
  unkafter_superopt_cpp_FUN_005a8180(puStack_18,delta_time);
  core_boxactor_cpp_CBoxActor_process_FUN_0041c090((CBoxActor *)this_ptr,delta_time);
  core_spirmine_cpp_FUN_005ad940();
  puVar1 = puStack_18;
  iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  fVar9 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar3 + 0x20);
  fVar10 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar3 + 0x28);
  fStack_20 = SQRT(fVar10 * fVar10 + fVar9 * fVar9);
  fStack_1c = fStack_20;
  if (*(float *)&this_ptr->field_0x7f0 <= 0.0) {
    *(uint *)&this_ptr->field_0x7f0 = 0;
    if (fStack_20 <= *(float *)&this_ptr->field_0x7d4) {
      iVar3 = 0;
      do {
        iVar2 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar2 != 0) {
          fStack_2c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_2c;
          fVar9 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
          fVar7 = (float10)fcos((float10)fStack_2c);
          fVar8 = (float10)fsin((float10)fStack_2c);
          afStack_b0[1] = 0.0;
          afStack_b0[2] = (float)(fVar7 * (float10)fVar9);
          afStack_b0[0] = (float)(fVar8 * (float10)fVar9);
          fStack_14 = afStack_b0[2];
          afStack_88[3] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.0,6.0);
          afStack_88[2] = 0.0;
          uStack_78 = 0;
          fStack_24 = afStack_88[3];
          fStack_14 = afStack_88[3];
          unkafter_superopt_cpp_FUN_005a8300
                    (puVar1,0x40400000,0x3f000000,0,0x3f000000,0,0x3df5c28f,0x3f28f5c3,0x3f2147ae,
                     auStack_cc + 7,afStack_88 + 2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 100);
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_16c);
      uStack_168 = 0x40a00000;
      pCStack_138 = this_ptr;
      pCStack_134 = this_ptr;
      (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x110))();
      *(uint *)&this_ptr->field_0x7ec = 0;
      *(uint *)&this_ptr->field_0x7f0 = *(uint *)&this_ptr->field_0x7e0;
      return;
    }
  }
  else {
    fVar9 = *(float *)&this_ptr->field_0x7ec - delta_time;
    *(float *)&this_ptr->field_0x7f0 = *(float *)&this_ptr->field_0x7f0 - delta_time;
    *(float *)&this_ptr->field_0x7ec = fVar9;
    if (fVar9 <= 0.0) {
      *(uint *)&this_ptr->field_0x7ec = 0x3f000000;
      fStack_34 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
      fStack_14 = fStack_34;
      fStack_38 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
      fStack_14 = fStack_38;
      fStack_54 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
      fStack_5c = fStack_34;
      fStack_58 = fStack_38;
      fStack_3c = fStack_54;
      fStack_14 = fStack_54;
      core_xform_cpp_FUN_00594380();
      auStack_cc[3] = uStack_d0;
      auStack_cc[(uint)bVar6 * -2 + 4] = auStack_cc[(uint)bVar6 * -2];
      auStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5] =
           auStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      (auStack_cc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
           (auStack_cc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10();
      puVar4 = auStack_130;
      puVar5 = auStack_100;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0x3f800000;
      core_xform_cpp_FUN_00591530();
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_94 = 0x3f800000;
      afStack_70[2] = (float)uStack_74;
      afStack_70[(uint)bVar6 * -2 + 3] = afStack_70[(uint)bVar6 * -2];
      afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      uVar11 = 0x3f266666;
      fVar10 = 0.9;
      fVar9 = 0.7;
      uStack_8c = uStack_74;
      afStack_88[(uint)bVar6 * -2] = afStack_70[(uint)bVar6 * -2];
      afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar9,fVar10);
      unkafter_superopt_cpp_FUN_005a8300
                (puStack_18,0x40000000,
                 *(float *)&this_ptr->field_0x7f0 / *(float *)&this_ptr->field_0x7e0,0,0x3f000000,
                 0x40000000,0x3f051eb8,fStack_14,uVar11);
    }
    if (fStack_20 <= *(float *)&this_ptr->field_0x7d4) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffe58);
      (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x110))();
      return;
    }
  }
  return;
}
