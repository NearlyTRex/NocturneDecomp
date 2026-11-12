// Name: core_cross.cpp_CCross_process_FUN_005a6ed0
// Address: 005a6ed0
// Address Range: [[005a6ed0, 005a794e]]
// Convention: __cdecl
// Signature: void __cdecl core_cross_cpp_CCross_process_FUN_005a6ed0(CCross *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cross_cpp_CCross_process_FUN_005a6ed0(CCross *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_1a04 [1482];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  uint *puVar14;
  float fVar15;
  uint uVar16;
  CCross *this_ptr_00;
  float fVar17;
  uint uStack_228;
  uint uStack_218;
  float fStack_208;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_190;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  float fStack_178;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  float fStack_90;
  uint uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float fStack_58;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CLocation *pCStack_30;
  int iStack_2c;
  CLocation *pCStack_28;
  int iStack_24;
  CLocation *pCStack_20;
  float *pfStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  pCVar2 = (*((this_ptr->base).base.base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar2);
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))();
    if (iVar3 == 0) {
      fVar15 = this_ptr->charge_time + delta_time;
      goto LAB_005a6f19;
    }
  }
  fVar15 = this_ptr->charge_time - delta_time;
LAB_005a6f19:
  this_ptr->charge_time = fVar15;
  if (_DAT_005ffe6c < this_ptr->charge_time) {
    this_ptr->charge_time = _DAT_005ffe6c;
  }
  if (this_ptr->charge_time < 0.0) {
    this_ptr->charge_time = 0.0;
  }
  fVar15 = this_ptr->charge_time / _DAT_005ffe6c;
  fVar17 = this_ptr->pulse_timer + delta_time;
  this_ptr->pulse_timer = fVar17;
  this_ptr->charge = fVar15;
  if (_DAT_005ffe70 <= fVar17) {
    this_ptr->pulse_timer = 0.0;
  }
  fVar6 = (float10)fsin(((float10)this_ptr->pulse_timer / (float10)_DAT_005ffe70) *
                        (float10)_DAT_005f0765 * (float10)_DAT_005f0769);
  this_ptr->glow_intensity =
       (float)((float10)this_ptr->charge * (float10)_DAT_005f076d * fVar6 + (float10)_DAT_005f0775);
  core_melee_cpp_CMelee_process_FUN_004eacf0(&this_ptr->base,delta_time);
  (*((this_ptr->base).base.base.vtable._ub)->vfunc1)((CDemonActor *)this_ptr);
  if ((this_ptr->base).base.weapon_state != WEAPON_STATE_IN_INVENTORY) {
    fVar15 = this_ptr->charge;
    *(float *)&(this_ptr->base).base.base.field_0x2a8 =
         *(float *)&(this_ptr->base).base.base.field_0x2a8 - delta_time;
    if ((0.0 < fVar15) && (*(float *)&(this_ptr->base).base.base.field_0x2a8 <= 0.0)) {
      *(uint *)&(this_ptr->base).base.base.field_0x2a8 = 0x3e19999a;
      iVar3 = core_bwgrndma_cpp_FUN_005a7ed0();
      if (iVar3 != 0) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
        core_xform_cpp_FUN_00591c10();
        uStack_1b4 = 0;
        uStack_1b0 = 0x3fa66666;
        uStack_1ac = 0;
        core_xform_cpp_FUN_00591530();
        uStack_64 = 0x3f000000;
        fStack_88 = fStack_19c;
        *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * -8) =
             *(uint *)(&stack0xfffffe68 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xffffff80 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
             *(uint *)(&stack0xfffffe6c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        uStack_60 = 0x3f333333;
        uStack_5c = 0;
        core_xform_cpp_FUN_00591530();
        uStack_17c = 0;
        fStack_124 = fStack_190;
        *(uint *)((int)&stack0xfffffee0 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xfffffe74 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xfffffee4 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
             *(uint *)(&stack0xfffffe78 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        uStack_180 = 0x3f333333;
        uStack_184 = 0xbf000000;
        core_xform_cpp_FUN_00591530();
        fStack_1cc = fStack_208;
        *(uint *)((int)&stack0xfffffe38 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xfffffdfc + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xfffffe3c + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
             *(uint *)(&stack0xfffffe00 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        uStack_10c = 0;
        uStack_104 = 0;
        fStack_16c = _DAT_0265370c;
        *(uint *)((int)&stack0xfffffe98 + (uint)bVar5 * -8) =
             *(uint *)(&DAT_02653710 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xfffffe9c + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
             *(uint *)(&DAT_02653714 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        uStack_108 = 0x3f800000;
        core_xform_cpp_FUN_00591530();
        fStack_1a8 = fStack_58;
        *(uint *)((int)&stack0xfffffe5c + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffac + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xfffffe60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
             *(uint *)(&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_b8 = 0x3f000000;
        fStack_1d8 = fStack_1a8 * _DAT_005f077d;
        fStack_1d4 = fStack_1a4 * _DAT_005f077d;
        fStack_1d0 = fStack_1a0 * _DAT_005f077d;
        fStack_dc = fStack_1a8 * _DAT_005f077d;
        *(uint *)(&stack0xffffff28 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xfffffe2c + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffff2c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xfffffe30 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4);
        core_xform_cpp_FUN_00591530();
        fStack_ac = fStack_1f0;
        *(uint *)((int)&stack0xffffff58 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xfffffe14 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xffffff5c + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
             *(uint *)(&stack0xfffffe18 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        pCVar1 = &(this_ptr->base).base.base.location;
        pCStack_30 = pCVar1;
        fStack_e8 = fStack_ac * _DAT_005f077d;
        fStack_e4 = fStack_a8 * _DAT_005f077d;
        fStack_e0 = fStack_a4 * _DAT_005f077d;
        fStack_178 = fStack_ac * _DAT_005f077d;
        *(uint *)(&stack0xfffffe8c + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff1c + (uint)bVar5 * -8);
        *(uint *)(&stack0xfffffe90 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff20 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4);
        fStack_88 = fStack_88 + (pCVar1->position).x;
        fStack_84 = fStack_84 + (this_ptr->base).base.base.location.position.y;
        fStack_80 = fStack_80 + (this_ptr->base).base.base.location.position.z;
        fStack_16c = fStack_16c + (pCVar1->position).x;
        fStack_168 = fStack_168 + (this_ptr->base).base.base.location.position.y;
        fStack_164 = fStack_164 + (this_ptr->base).base.base.location.position.z;
        fStack_124 = fStack_124 + (pCVar1->position).x;
        fStack_120 = fStack_120 + (this_ptr->base).base.base.location.position.y;
        fStack_11c = fStack_11c + (this_ptr->base).base.base.location.position.z;
        fStack_1cc = fStack_1cc + (pCVar1->position).x;
        fStack_1c8 = fStack_1c8 + (this_ptr->base).base.base.location.position.y;
        fStack_1c4 = fStack_1c4 + (this_ptr->base).base.base.location.position.z;
        uVar16 = 0;
        puVar14 = (uint *)0x0;
        puVar4 = &stack0xfffffe58;
        pfVar13 = &stack0xffffff78;
        fVar17 = this_ptr->charge * (float)_DAT_005f0785;
        uVar12 = 0x3f800000;
        uVar11 = 0x3f666666;
        uVar10 = 0x3f666666;
        uVar9 = 0;
        uVar8 = 0;
        fVar15 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar15,uVar8,fVar17,uVar9
                   ,uVar10,uVar11,uVar12,pfVar13,puVar4,puVar14,uVar16);
        uVar16 = 0;
        puVar14 = (uint *)0x0;
        puVar4 = &stack0xffffff24;
        pfVar13 = &stack0xfffffe94;
        fVar17 = this_ptr->charge * (float)_DAT_005f0785;
        uVar12 = 0x3f800000;
        uVar11 = 0x3f666666;
        uVar10 = 0x3f666666;
        uVar9 = 0;
        uVar8 = 0;
        fVar15 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar15,uVar8,fVar17,uVar9
                   ,uVar10,uVar11,uVar12,pfVar13,puVar4,puVar14,uVar16);
        uVar16 = 0;
        puVar14 = (uint *)0x0;
        puVar4 = &stack0xffffff54;
        pfVar13 = &stack0xfffffedc;
        fVar17 = this_ptr->charge * (float)_DAT_005f0785;
        uVar12 = 0x3f800000;
        uVar11 = 0x3f666666;
        uVar10 = 0x3f666666;
        uVar9 = 0;
        uVar8 = 0;
        fVar15 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar15,uVar8,fVar17,uVar9
                   ,uVar10,uVar11,uVar12,pfVar13,puVar4,puVar14,uVar16);
        uVar16 = 0;
        puVar14 = (uint *)0x0;
        puVar4 = &stack0xfffffe88;
        pfVar13 = &stack0xfffffe34;
        fVar17 = this_ptr->charge * (float)_DAT_005f0785;
        uVar12 = 0x3f800000;
        uVar11 = 0x3f666666;
        uVar10 = 0x3f666666;
        uVar9 = 0;
        uVar8 = 0;
        fVar15 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar15,uVar8,fVar17,uVar9
                   ,uVar10,uVar11,uVar12,pfVar13,puVar4,puVar14,uVar16);
        uStack_9c = 0x3f333333;
        uStack_a0 = 0;
        uStack_98 = 0;
        core_xform_cpp_FUN_00591530();
        fStack_13c = fStack_148;
        *(uint *)((int)&stack0xfffffec8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xfffffebc + (uint)bVar5 * -8);
        this_ptr_00 = this_ptr;
        *(uint *)((int)&stack0xfffffecc + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
             *(uint *)(&stack0xfffffec0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr_00);
        iStack_2c = 0;
        pCStack_20 = pCStack_30;
        do {
          fStack_38 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_38;
          fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_44;
          fStack_74 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_7c = fStack_38;
          fStack_78 = fStack_44;
          fStack_40 = fStack_74;
          fStack_14 = fStack_74;
          core_xform_cpp_FUN_00594380();
          uStack_218 = uStack_228;
          *(uint *)(&stack0xfffffdec + (uint)bVar5 * -8) =
               *(uint *)(&stack0xfffffddc + (uint)bVar5 * -8);
          *(uint *)(&stack0xfffffdf0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xfffffde0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          *(uint *)
           ((int)(&stack0xfffffdf0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
           ((uint)bVar5 * -2 + 1) * 4) =
               *(uint *)
                ((int)(&stack0xfffffde0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
                ((uint)bVar5 * -2 + 1) * 4);
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10();
          fVar15 = 0.5;
          puVar4 = (uint *)&stack0xfffffd78;
          puVar14 = (uint *)&stack0xfffffd48;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar14 = *puVar4;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
            puVar14 = puVar14 + (uint)bVar5 * -2 + 1;
          }
          fStack_90 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,fVar15);
          uStack_94 = 0;
          uStack_8c = 0;
          fStack_3c = fStack_90;
          fStack_14 = fStack_90;
          core_xform_cpp_FUN_00591530();
          fStack_1fc = fStack_160;
          *(uint *)((int)&stack0xfffffe08 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xfffffea4 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xfffffe0c + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
               *(uint *)(&stack0xfffffea8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          fStack_f4 = fStack_1fc + fStack_13c;
          fStack_f0 = fStack_1f8 + fStack_138;
          fStack_ec = fStack_1f4 + fStack_134;
          fVar17 = 2.0;
          fStack_154 = fStack_1fc + fStack_13c;
          *(uint *)((int)&stack0xfffffeb0 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffff10 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xfffffeb4 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
               *(uint *)((int)&stack0xffffff14 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4);
          fVar15 = 1.0;
          fStack_c4 = fStack_154 - fStack_13c;
          fStack_c0 = fStack_150 - fStack_138;
          fStack_bc = fStack_14c - fStack_134;
          fStack_1e4 = fStack_154 - fStack_13c;
          *(uint *)((int)&stack0xfffffe20 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffff40 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xfffffe24 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
               *(uint *)((int)&stack0xffffff44 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4);
          fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar15,fVar17);
          fStack_1e4 = fStack_1e4 * fStack_18;
          fStack_1e0 = fStack_1e0 * fStack_18;
          fStack_1dc = fStack_1dc * fStack_18;
          fStack_154 = fStack_154 + (pCStack_20->position).x;
          uVar16 = 0;
          fStack_150 = fStack_150 + (pCStack_20->position).y;
          puVar14 = (uint *)0x0;
          fStack_14c = fStack_14c + (pCStack_20->position).z;
          puVar4 = &stack0xfffffe1c;
          pfVar13 = &stack0xfffffeac;
          fVar17 = this_ptr->charge * (float)_DAT_005f078d;
          uVar12 = 0x3f800000;
          uVar11 = 0x3ee66666;
          uVar10 = 0x3ed26e98;
          uVar9 = 0;
          uVar8 = 0;
          fVar15 = this_ptr->charge;
          fStack_14 = fStack_18;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.7);
          iVar3 = iStack_2c + 1;
          iStack_2c = iVar3;
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar15,uVar8,fVar17,
                     uVar9,uVar10,uVar11,uVar12,pfVar13,puVar4,puVar14,uVar16);
        } while (iVar3 < 5);
      }
    }
    if (0.0 < this_ptr->blast_pending) {
      pfStack_1c = &this_ptr->blast_strength;
      this_ptr->blast_pending = 0.0;
      pCStack_28 = &(this_ptr->base).base.base.location;
      iStack_24 = 0;
      do {
        iVar3 = core_bwgrndma_cpp_FUN_005a7ed0();
        if (iVar3 != 0) {
          fVar15 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fVar7 = (float10)fcos((float10)fVar15);
          fVar6 = (float10)fsin((float10)fVar15);
          fVar7 = fVar7 * (float10)_DAT_005f0795;
          fVar6 = fVar6 * (float10)_DAT_005f0795;
          fVar15 = (float)fVar7;
          fStack_14 = fVar15;
          fStack_34 = (float)fVar6;
          fStack_12c = 0.0;
          uStack_6c = 0;
          fStack_130 = fStack_34;
          fStack_68 = (float)(fVar7 * (float10)_DAT_005f079d);
          fStack_70 = (float)(fVar6 * (float10)_DAT_005f079d);
          fStack_118 = fStack_70;
          *(uint *)((int)&stack0xfffffeec + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffff94 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xfffffef0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
               *(uint *)((int)&stack0xffffff98 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4);
          fStack_128 = fVar15;
          fStack_100 = fStack_118 * *pfStack_1c;
          fStack_fc = fStack_114 * *pfStack_1c;
          fStack_f8 = fStack_110 * *pfStack_1c;
          fStack_d0 = fStack_118 * *pfStack_1c;
          *(uint *)(&stack0xffffff34 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffff04 + (uint)bVar5 * -8);
          *(uint *)(&stack0xffffff38 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffff08 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4);
          fVar17 = -0.5;
          fVar15 = 0.0;
          fStack_1c0 = _DAT_0265370c;
          *(uint *)(&stack0xfffffe48 + (uint)bVar5 * -8 + -4) =
               *(uint *)(&DAT_02653710 + (uint)bVar5 * -8);
          *(uint *)(&stack0xfffffe48 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&DAT_02653714 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          fStack_1bc = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar15,fVar17);
          fStack_130 = fStack_130 + (pCStack_28->position).x;
          fStack_12c = fStack_12c + (pCStack_28->position).y;
          fStack_128 = fStack_128 + (pCStack_28->position).z;
          fStack_14 = fStack_1bc;
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (g_CSimpleParticleSystemPtr,this_ptr->blast_strength * (float)_DAT_005f07a5,
                     this_ptr->blast_strength,0,this_ptr->blast_strength * (float)_DAT_005f0785,0,
                     0x3f4ccccd,0x3f4ccccd,0x3f800000,&stack0xfffffed0,&stack0xffffff30,
                     &stack0xfffffe40,0);
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 100);
    }
  }
  return;
}
