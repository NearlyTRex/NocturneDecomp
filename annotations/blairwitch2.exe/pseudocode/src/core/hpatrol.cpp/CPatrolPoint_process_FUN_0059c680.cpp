// Name: core_hpatrol.cpp_CPatrolPoint_process_FUN_0059c680
// Address: 0059c680
// Address Range: [[0059c680, 0059c975]]
// Convention: __cdecl
// Signature: void __cdecl core_hpatrol_cpp_CPatrolPoint_process_FUN_0059c680(CPatrolPoint *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hpatrol_cpp_CPatrolPoint_process_FUN_0059c680(CPatrolPoint *this_ptr,float delta_time)

{
  int iVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_1908 [1490];
  uint uVar6;
  float *pfVar7;
  float fVar8;
  uint *puVar9;
  float max_value;
  uint uVar10;
  CMatrix3x4f CStack_18c;
  float afStack_15c [12];
  CQuaternion4f CStack_12c;
  uint uStack_11c;
  float afStack_118 [7];
  uint uStack_fc;
  float afStack_ec [4];
  float afStack_dc [4];
  float afStack_cc [4];
  float afStack_bc [4];
  float fStack_ac;
  uint uStack_9c;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
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
  CSimpleParticleSystem *pCStack_20;
  CSimpleParticleSystem *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  pCStack_20 = (this_ptr->base).base.base.particle_systems;
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180(pCStack_20,delta_time);
  fVar8 = *(float *)&(this_ptr->base).base.base.field_0x2a8 - delta_time;
  *(float *)&(this_ptr->base).base.base.field_0x2a8 = fVar8;
  if ((fVar8 <= 0.0) &&
     (iVar1 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCStack_20),
     pCStack_1c = pCStack_20, iVar1 != 0)) {
    fStack_8c = _DAT_0265370c;
    afStack_118[(uint)bVar5 * -2 + 0x24] = *(float *)(&DAT_02653710 + (uint)bVar5 * -8);
    afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25] =
         *(float *)(&DAT_02653714 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)&(this_ptr->base).base.base.field_0x2a8 = 0x3dcccccd;
    iVar1 = 0;
    do {
      fStack_2c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      fStack_14 = fStack_2c;
      fStack_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      fStack_14 = fStack_28;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      core_xform_cpp_quaternionFromAngleZ_FUN_00594020(fStack_14);
      afStack_bc[0] = (float)uStack_fc;
      afStack_118[(uint)bVar5 * -2 + 0x18] = afStack_118[(uint)bVar5 * -2 + 8];
      afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
           afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
      (afStack_118 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19)[(uint)bVar5 * -2 + 1] =
           (afStack_118 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(fStack_28,afStack_118 + 0x17);
      afStack_dc[0] = (float)uStack_11c;
      afStack_118[(uint)bVar5 * -2 + 0x10] = afStack_118[(uint)bVar5 * -2];
      afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11] =
           afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      (afStack_118 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1] =
           (afStack_118 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fStack_2c,afStack_118 + 0xf);
      afStack_ec[0] = afStack_118[3];
      afStack_118[(uint)bVar5 * -2 + 0xc] = afStack_118[(uint)bVar5 * -2 + 4];
      afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
      (afStack_118 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1] =
           (afStack_118 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_118 + 0xb);
      afStack_cc[0] = (float)uStack_9c;
      afStack_118[(uint)bVar5 * -2 + 0x14] = afStack_118[(uint)bVar5 * -2 + 0x20];
      afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15] =
           afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x21];
      (afStack_118 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1] =
           (afStack_118 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x21)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_118 + 0x13);
      CStack_12c.w = fStack_ac;
      pfVar4 = (float *)((int)&CStack_12c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      *(float *)((int)&CStack_12c + (uint)bVar5 * -8 + 4) = afStack_118[(uint)bVar5 * -2 + 0x1c];
      *pfVar4 = afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d];
      pfVar4[(uint)bVar5 * -2 + 1] =
           (afStack_118 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_12c,&CStack_18c);
      pCVar3 = &CStack_18c;
      pfVar4 = afStack_15c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
      }
      pfVar4 = afStack_15c;
      fStack_70 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
      fStack_74 = 0.0;
      uStack_6c = 0;
      fStack_24 = fStack_70;
      fStack_14 = fStack_70;
      core_xform_cpp_FUN_00591530(afStack_118 + 0x29,pfVar4);
      fStack_80 = fStack_44;
      afStack_118[(uint)bVar5 * -2 + 0x27] = afStack_64[(uint)bVar5 * -2 + 9];
      afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x28] =
           afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      max_value = 1.0;
      fStack_68 = fStack_80 + fStack_8c;
      afStack_64[0] = fStack_7c + fStack_88;
      afStack_64[1] = fStack_78 + fStack_84;
      fStack_50 = fStack_80 + fStack_8c;
      afStack_64[(uint)bVar5 * -2 + 6] = afStack_64[(uint)bVar5 * -2];
      afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      fVar8 = 0.5;
      afStack_64[2] = fStack_50 - fStack_8c;
      afStack_64[3] = fStack_4c - fStack_88;
      fStack_54 = fStack_48 - fStack_84;
      fStack_38 = fStack_50 - fStack_8c;
      afStack_64[(uint)bVar5 * -2 + 0xc] = afStack_64[(uint)bVar5 * -2 + 3];
      afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar8,max_value);
      fStack_38 = fStack_38 * fStack_18;
      fStack_34 = fStack_34 * fStack_18;
      fStack_30 = fStack_30 * fStack_18;
      fStack_14 = fStack_18;
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.0);
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.2);
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
      uVar10 = 0;
      puVar9 = (uint *)0x0;
      pfVar4 = afStack_64 + 0xb;
      pfVar7 = afStack_64 + 5;
      uVar6 = 0;
      fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.2);
      fStack_14 = fVar8;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
      iVar1 = iVar1 + 1;
      core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                (pCStack_1c,0x3fc00000,0x3f800000,0,0x3f333333,0,fStack_14,fVar8,uVar6,pfVar7,pfVar4
                 ,puVar9,uVar10);
    } while (iVar1 < 0x14);
  }
  return;
}
