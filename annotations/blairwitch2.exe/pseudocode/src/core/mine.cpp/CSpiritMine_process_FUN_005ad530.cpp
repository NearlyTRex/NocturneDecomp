// Name: core_mine.cpp_CSpiritMine_process_FUN_005ad530
// Address: 005ad530
// Address Range: [[005ad530, 005ad8f4]]
// Convention: __cdecl
// Signature: void __cdecl core_mine_cpp_CSpiritMine_process_FUN_005ad530(CSpiritMine *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mine_cpp_CSpiritMine_process_FUN_005ad530(CSpiritMine *this_ptr,float delta_time)

{
  CSimpleParticleSystem *this_ptr_00;
  int iVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_18ac [1462];
  float fVar8;
  float fVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  SDamageInfo SStack_16c;
  CMatrix3x4f CStack_130;
  float afStack_100 [12];
  float fStack_d0;
  float afStack_cc [3];
  CQuaternion4f CStack_c0;
  float afStack_b0 [10];
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
  CSimpleParticleSystem *pCStack_18;
  float fStack_14;
  
  bVar5 = 0;
  pCStack_18 = (this_ptr->base).base.particle_systems;
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180(pCStack_18,delta_time);
  core_boxactor_cpp_CBoxActor_process_FUN_0041c090(&this_ptr->base,delta_time);
  core_mine_cpp_FUN_005ad940();
  this_ptr_00 = pCStack_18;
  iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  fVar8 = (this_ptr->base).base.location.position.x - *(float *)(iVar2 + 0x20);
  fVar9 = (this_ptr->base).base.location.position.z - *(float *)(iVar2 + 0x28);
  fStack_20 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
  fStack_1c = fStack_20;
  if (this_ptr->effect_timer <= 0.0) {
    this_ptr->effect_timer = 0.0;
    if (fStack_20 <= this_ptr->trigger_radius) {
      iVar2 = 0;
      do {
        iVar1 = core_bwgrndma_cpp_FUN_005a7ed0();
        if (iVar1 != 0) {
          fStack_2c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_2c;
          fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
          fVar6 = (float10)fcos((float10)fStack_2c);
          fVar7 = (float10)fsin((float10)fStack_2c);
          afStack_b0[1] = 0.0;
          afStack_b0[2] = (float)(fVar6 * (float10)fVar8);
          afStack_b0[0] = (float)(fVar7 * (float10)fVar8);
          fStack_14 = afStack_b0[2];
          afStack_88[3] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.0,6.0);
          afStack_88[2] = 0.0;
          uStack_78 = 0;
          fStack_24 = afStack_88[3];
          fStack_14 = afStack_88[3];
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (this_ptr_00,0x40400000,0x3f000000,0,0x3f000000,0,0x3df5c28f,0x3f28f5c3,
                     0x3f2147ae,afStack_b0,afStack_88 + 2,(uint *)0x0,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 100);
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_16c);
      SStack_16c.damage_amount = 5.0;
      SStack_16c.attacker = (CDemonActor *)this_ptr;
      SStack_16c.wielder = (CDemonActor *)this_ptr;
      (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x110))();
      this_ptr->emit_timer = 0.0;
      this_ptr->effect_timer = this_ptr->effect_time;
      return;
    }
  }
  else {
    fVar8 = this_ptr->emit_timer - delta_time;
    this_ptr->effect_timer = this_ptr->effect_timer - delta_time;
    this_ptr->emit_timer = fVar8;
    if (fVar8 <= 0.0) {
      this_ptr->emit_timer = 0.5;
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
      CStack_c0.w = fStack_d0;
      afStack_b0[(uint)bVar5 * -2 + -3] = afStack_cc[(uint)bVar5 * -2];
      afStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -2] =
           afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      (afStack_b0 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -2)[(uint)bVar5 * -2 + 1] =
           (afStack_cc + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_c0,&CStack_130);
      pCVar3 = &CStack_130;
      pfVar4 = afStack_100;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
      }
      afStack_b0[3] = 0.0;
      afStack_b0[4] = 0.0;
      afStack_b0[5] = 1.0;
      core_xform_cpp_FUN_00591530();
      fVar13 = 4.2039e-45;
      afStack_b0[6] = 0.0;
      afStack_b0[8] = 0.0;
      pfVar4 = afStack_b0 + 6;
      pfVar12 = afStack_b0 + 9;
      pfVar11 = afStack_70 + 2;
      afStack_b0[7] = 1.0;
      afStack_70[2] = (float)uStack_74;
      afStack_70[(uint)bVar5 * -2 + 3] = afStack_70[(uint)bVar5 * -2];
      afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      uVar10 = 0x3f266666;
      fVar9 = 0.9;
      fVar8 = 0.7;
      afStack_b0[9] = (float)uStack_74;
      afStack_88[(uint)bVar5 * -2] = afStack_70[(uint)bVar5 * -2];
      afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar8,fVar9);
      core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                (pCStack_18,0x40000000,this_ptr->effect_timer / this_ptr->effect_time,0,0x3f000000,
                 0x40000000,0x3f051eb8,fStack_14,uVar10,pfVar11,pfVar12,pfVar4,fVar13);
    }
    if (fStack_20 <= this_ptr->trigger_radius) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffe58);
      (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x110))();
      return;
    }
  }
  return;
}
