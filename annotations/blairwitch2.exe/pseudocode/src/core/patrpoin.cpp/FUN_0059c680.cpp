// Name: core_patrpoin.cpp_FUN_0059c680
// Address: 0059c680
// Address Range: [[0059c680, 0059c975]]
// Convention: unknown
// Signature: void core_patrpoin_cpp_FUN_0059c680(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_patrpoin_cpp_FUN_0059c680(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1908 [1490];
  uint uVar6;
  uint uVar7;
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
  uint uStack_70;
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
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  CComplexPolygon *pCStack_20;
  CComplexPolygon *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  pCStack_20 = (CComplexPolygon *)(param_1 + 0x154);
  unkafter_superopt_cpp_FUN_005a8180(pCStack_20,param_2);
  param_2 = *(float *)(param_1 + 0x2a8) - param_2;
  *(float *)(param_1 + 0x2a8) = param_2;
  if ((param_2 <= 0.0) &&
     (iVar1 = shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005a8130(pCStack_20),
     pCStack_1c = pCStack_20, iVar1 != 0)) {
    fStack_8c = _DAT_0265370c;
    *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + 0xc) * 4) =
         *(uint *)(&DAT_02653710 + (uint)bVar5 * -8);
    *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd) * 4) =
         *(uint *)(&DAT_02653714 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)(param_1 + 0x2a8) = 0x3dcccccd;
    iVar1 = 0;
    do {
      uStack_2c = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
      fStack_14 = (float)uStack_2c;
      uStack_28 = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
      fStack_14 = (float)uStack_28;
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
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
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(uStack_28,&uStack_bc);
      uStack_dc = auStack_128[3];
      *(uint *)((int)auStack_d8 + (uint)bVar5 * 0xfffffff8) =
           auStack_128[(uint)bVar5 * 0xfffffffe + 4];
      *(uint *)((int)auStack_d8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
           auStack_128[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5];
      ((uint *)((int)auStack_d8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
      [(uint)bVar5 * -2 + 1] =
           (auStack_128 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)
           [(uint)bVar5 * -2 + 1];
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(uStack_2c,&uStack_dc);
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
      uStack_70 = core_actor_cpp_FUN_0040cf60(0x3f800000,0x40000000,auStack_15c);
      uStack_74 = 0;
      uStack_6c = 0;
      uStack_24 = uStack_70;
      fStack_14 = (float)uStack_70;
      core_xform_cpp_FUN_00591530(&uStack_74);
      fStack_80 = fStack_44;
      *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + 0xf) * 4) =
           *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 9) * 4);
      *(uint *)((int)auStack_b8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10) * 4) =
           *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 10) * 4);
      uVar7 = 0x3f800000;
      fStack_68 = fStack_80 + fStack_8c;
      afStack_64[0] = fStack_7c + fStack_88;
      afStack_64[1] = fStack_78 + fStack_84;
      fStack_50 = fStack_80 + fStack_8c;
      *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 6) * 4) =
           *(uint *)((int)afStack_64 + (uint)bVar5 * 0xfffffff8);
      *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4) =
           *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
      uVar6 = 0x3f000000;
      afStack_64[2] = fStack_50 - fStack_8c;
      afStack_64[3] = fStack_4c - fStack_88;
      fStack_54 = fStack_48 - fStack_84;
      fStack_38 = fStack_50 - fStack_8c;
      *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 0xc) * 4) =
           *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 3) * 4);
      *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd) * 4) =
           *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4);
      fStack_18 = (float)core_actor_cpp_FUN_0040cf60(uVar6,uVar7);
      fStack_38 = fStack_38 * fStack_18;
      fStack_34 = fStack_34 * fStack_18;
      fStack_30 = fStack_30 * fStack_18;
      fStack_14 = fStack_18;
      core_actor_cpp_FUN_0040cf60(0,0);
      core_actor_cpp_FUN_0040cf60(0,0x3e4ccccd);
      core_actor_cpp_FUN_0040cf60(0x3e99999a,0x3f19999a);
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0,0x3e4ccccd,0,&fStack_50,&fStack_38,0,0);
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x3e99999a,0x3f19999a,fStack_14);
      iVar1 = iVar1 + 1;
      unkafter_superopt_cpp_FUN_005a8300(pCStack_1c,0x3fc00000,0x3f800000,0,0x3f333333,0,fStack_14);
    } while (iVar1 < 0x14);
  }
  return;
}
