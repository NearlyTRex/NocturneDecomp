// Name: core_patrpoin.cpp_CPatrolPoint_process_FUN_0059c680
// Address: 0059c680
// Address Range: [[0059c680, 0059c975]]
// Convention: __cdecl
// Signature: void __cdecl core_patrpoin_cpp_CPatrolPoint_process_FUN_0059c680(CPatrolPoint *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_patrpoin_cpp_CPatrolPoint_process_FUN_0059c680(CPatrolPoint *this_ptr,float delta_time)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1908 [1490];
  uint uVar6;
  byte *puVar7;
  byte *puVar8;
  float fVar9;
  uint uVar10;
  float max_value;
  uint uVar11;
  uint auStack_15c [12];
  uint uStack_12c;
  uint auStack_128 [7];
  uint uStack_10c;
  uint uStack_fc;
  uint uStack_ec;
  uint auStack_e8 [3];
  uint uStack_dc;
  uint auStack_d8 [3];
  uint uStack_cc;
  uint auStack_c8 [3];
  uint uStack_bc;
  uint auStack_b8 [7];
  uint uStack_9c;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  float fStack_70;
  uint uStack_6c;
  float fStack_68;
  float afStack_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CComplexPolygon *pCStack_20;
  CComplexPolygon *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  pCStack_20 = (CComplexPolygon *)&this_ptr->field_0x154;
  unkafter_superopt_cpp_FUN_005a8180(pCStack_20,delta_time);
  fVar9 = *(float *)&this_ptr->field_0x2a8 - delta_time;
  *(float *)&this_ptr->field_0x2a8 = fVar9;
  if ((fVar9 <= 0.0) &&
     (iVar1 = shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005a8130(pCStack_20),
     pCStack_1c = pCStack_20, iVar1 != 0)) {
    fStack_8c = _DAT_0265370c;
    *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + 0xc) * 4) =
         *(uint *)(&DAT_02653710 + (uint)bVar5 * -8);
    *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd) * 4) =
         *(uint *)(&DAT_02653714 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)&this_ptr->field_0x2a8 = 0x3dcccccd;
    iVar1 = 0;
    do {
      fStack_2c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      fStack_14 = fStack_2c;
      fStack_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      fStack_14 = fStack_28;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      core_xform_cpp_quaternionFromAngleZ_FUN_00594020(fStack_14);
      uStack_bc = uStack_fc;
      *(uint *)((int)auStack_b8 + (uint)bVar5 * 0xfffffff8) =
           *(uint *)((int)auStack_d8 + ((uint)bVar5 * -2 + -8) * 4);
      *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
           *(uint *)((int)auStack_d8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4);
      ((uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
      [(uint)bVar5 * -2 + 1] =
           ((uint *)((int)auStack_d8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4))
           [(uint)bVar5 * -2 + 1];
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(fStack_28,&uStack_bc);
      uStack_dc = auStack_128[3];
      *(uint *)((int)auStack_d8 + (uint)bVar5 * 0xfffffff8) =
           auStack_128[(uint)bVar5 * 0xfffffffe + 4];
      *(uint *)((int)auStack_d8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
           auStack_128[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5];
      ((uint *)((int)auStack_d8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
      [(uint)bVar5 * -2 + 1] =
           (auStack_128 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)
           [(uint)bVar5 * -2 + 1];
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fStack_2c,&uStack_dc);
      uStack_ec = uStack_10c;
      *(uint *)((int)auStack_e8 + (uint)bVar5 * 0xfffffff8) =
           *(uint *)((int)auStack_e8 + ((uint)bVar5 * -2 + -8) * 4);
      *(uint *)((int)auStack_e8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
           *(uint *)((int)auStack_e8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4);
      ((uint *)((int)auStack_e8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
      [(uint)bVar5 * -2 + 1] =
           ((uint *)((int)auStack_e8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4))
           [(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(&uStack_ec);
      uStack_cc = uStack_9c;
      *(uint *)((int)auStack_c8 + (uint)bVar5 * 0xfffffff8) =
           *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + 8) * 4);
      *(uint *)((int)auStack_c8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
           *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 9) * 4);
      ((uint *)((int)auStack_c8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
      [(uint)bVar5 * -2 + 1] =
           ((uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 9) * 4))
           [(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(&uStack_cc);
      uStack_12c = auStack_b8[3];
      *(uint *)((int)auStack_128 + (uint)bVar5 * 0xfffffff8) =
           *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + 4) * 4);
      auStack_128[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1] =
           *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4);
      (auStack_128 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)[(uint)bVar5 * -2 + 1]
           = ((uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4))
             [(uint)bVar5 * -2 + 1];
      core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&uStack_12c);
      puVar3 = (uint *)&stack0xfffffe74;
      puVar4 = auStack_15c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      puVar8 = (byte *)auStack_15c;
      fStack_70 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
      uStack_74 = 0;
      uStack_6c = 0;
      fStack_24 = fStack_70;
      fStack_14 = fStack_70;
      core_xform_cpp_FUN_00591530(&uStack_74,puVar8);
      fStack_80 = fStack_44;
      *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + 0xf) * 4) =
           *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 9) * 4);
      *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10) * 4) =
           *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 10) * 4);
      max_value = 1.0;
      fStack_68 = fStack_80 + fStack_8c;
      afStack_64[0] = fStack_7c + fStack_88;
      afStack_64[1] = fStack_78 + fStack_84;
      fStack_50 = fStack_80 + fStack_8c;
      *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 6) * 4) =
           *(uint *)((int)afStack_64 + (uint)bVar5 * 0xfffffff8);
      *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4) =
           *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
      fVar9 = 0.5;
      afStack_64[2] = fStack_50 - fStack_8c;
      afStack_64[3] = fStack_4c - fStack_88;
      fStack_54 = fStack_48 - fStack_84;
      fStack_38 = fStack_50 - fStack_8c;
      *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 0xc) * 4) =
           *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 3) * 4);
      *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd) * 4) =
           *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4);
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar9,max_value);
      fStack_38 = fStack_38 * fStack_18;
      fStack_34 = fStack_34 * fStack_18;
      fStack_30 = fStack_30 * fStack_18;
      fStack_14 = fStack_18;
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.0);
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.2);
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
      uVar11 = 0;
      uVar10 = 0;
      puVar8 = (byte *)&fStack_38;
      puVar7 = (byte *)&fStack_50;
      uVar6 = 0;
      fVar9 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.2);
      fStack_14 = fVar9;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
      iVar1 = iVar1 + 1;
      unkafter_superopt_cpp_FUN_005a8300
                (pCStack_1c,0x3fc00000,0x3f800000,0,0x3f333333,0,fStack_14,fVar9,uVar6,puVar7,puVar8
                 ,uVar10,uVar11);
    } while (iVar1 < 0x14);
  }
  return;
}
