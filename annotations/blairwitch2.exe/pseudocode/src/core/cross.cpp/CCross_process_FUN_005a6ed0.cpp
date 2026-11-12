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
  CDemonActor *actor_ptr;
  CCharacter *this_ptr_00;
  int iVar2;
  EDeathState EVar3;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_1a04 [1483];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float in_stack_fffffd48;
  float fVar13;
  float *pfVar14;
  uint *puVar15;
  float fVar16;
  uint uVar17;
  CCross *this_ptr_01;
  float fVar18;
  CMatrix3x4f aCStack_288 [2];
  float fStack_228;
  float afStack_224 [3];
  CQuaternion4f CStack_218;
  float fStack_208;
  float afStack_204 [4];
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
  float afStack_1a4 [5];
  float fStack_190;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  float fStack_178;
  float afStack_174 [4];
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
  float afStack_120 [4];
  float fStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [3];
  float afStack_d0 [3];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  float fStack_ac;
  float afStack_a8 [7];
  uint uStack_8c;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  float fStack_70;
  float afStack_6c [6];
  float afStack_54 [4];
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
  
  bVar6 = 0;
  actor_ptr = (*((this_ptr->base).base.base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
  this_ptr_00 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,(uint)in_stack_fffffd48);
  if (this_ptr_00 != (CCharacter *)0x0) {
    EVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
    if (EVar3 == DEATH_STATE_ALIVE) {
      fVar16 = this_ptr->charge_time + delta_time;
      goto LAB_005a6f19;
    }
  }
  fVar16 = this_ptr->charge_time - delta_time;
LAB_005a6f19:
  this_ptr->charge_time = fVar16;
  if (_DAT_005ffe6c < this_ptr->charge_time) {
    this_ptr->charge_time = _DAT_005ffe6c;
  }
  if (this_ptr->charge_time < 0.0) {
    this_ptr->charge_time = 0.0;
  }
  fVar16 = this_ptr->charge_time / _DAT_005ffe6c;
  fVar18 = this_ptr->pulse_timer + delta_time;
  this_ptr->pulse_timer = fVar18;
  this_ptr->charge = fVar16;
  if (_DAT_005ffe70 <= fVar18) {
    this_ptr->pulse_timer = 0.0;
  }
  fVar7 = (float10)fsin(((float10)this_ptr->pulse_timer / (float10)_DAT_005ffe70) *
                        (float10)_DAT_005f0765 * (float10)_DAT_005f0769);
  this_ptr->glow_intensity =
       (float)((float10)this_ptr->charge * (float10)_DAT_005f076d * fVar7 + (float10)_DAT_005f0775);
  core_melee_cpp_CMelee_process_FUN_004eacf0(&this_ptr->base,delta_time);
  (*((this_ptr->base).base.base.vtable._ub)->vfunc1)((CDemonActor *)this_ptr);
  if ((this_ptr->base).base.weapon_state != WEAPON_STATE_IN_INVENTORY) {
    fVar16 = this_ptr->charge;
    *(float *)&(this_ptr->base).base.base.field_0x2a8 =
         *(float *)&(this_ptr->base).base.base.field_0x2a8 - delta_time;
    if ((0.0 < fVar16) && (*(float *)&(this_ptr->base).base.base.field_0x2a8 <= 0.0)) {
      *(uint *)&(this_ptr->base).base.base.field_0x2a8 = 0x3e19999a;
      iVar2 = core_bwgrndma_cpp_FUN_005a7ed0();
      if (iVar2 != 0) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
        core_xform_cpp_FUN_00591c10();
        uStack_1b4 = 0;
        uStack_1b0 = 0x3fa66666;
        uStack_1ac = 0;
        core_xform_cpp_FUN_00591530();
        afStack_6c[2] = 0.5;
        fStack_88 = afStack_1a4[2];
        afStack_84[(uint)bVar6 * -2] = afStack_1a4[(uint)bVar6 * -2 + 3];
        afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_1a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        afStack_6c[3] = 0.7;
        afStack_6c[4] = 0.0;
        core_xform_cpp_FUN_00591530();
        uStack_17c = 0;
        fStack_124 = fStack_190;
        afStack_120[(uint)bVar6 * -2] = afStack_1a4[(uint)bVar6 * -2 + 6];
        afStack_120[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_1a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        uStack_180 = 0x3f333333;
        uStack_184 = 0xbf000000;
        core_xform_cpp_FUN_00591530();
        fStack_1cc = fStack_208;
        afStack_204[(uint)bVar6 * -2 + 0xf] = afStack_204[(uint)bVar6 * -2];
        afStack_204[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
             afStack_204[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        uStack_10c = 0;
        uStack_104 = 0;
        afStack_174[2] = _DAT_0265370c;
        afStack_174[(uint)bVar6 * -2 + 3] = *(float *)(&DAT_02653710 + (uint)bVar6 * -8);
        afStack_174[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             *(float *)(&DAT_02653714 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        uStack_108 = 0x3f800000;
        core_xform_cpp_FUN_00591530();
        fStack_1a8 = afStack_6c[5];
        afStack_1a4[(uint)bVar6 * -2] = afStack_54[(uint)bVar6 * -2];
        afStack_1a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_b8 = 0x3f000000;
        fStack_1d8 = fStack_1a8 * _DAT_005f077d;
        fStack_1d4 = afStack_1a4[0] * _DAT_005f077d;
        fStack_1d0 = afStack_1a4[1] * _DAT_005f077d;
        afStack_dc[0] = fStack_1a8 * _DAT_005f077d;
        afStack_fc[(uint)bVar6 * -2 + 9] = afStack_204[(uint)bVar6 * -2 + 0xc];
        afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_204[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        core_xform_cpp_FUN_00591530();
        fStack_ac = fStack_1f0;
        afStack_a8[(uint)bVar6 * -2] = afStack_204[(uint)bVar6 * -2 + 6];
        afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_204[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        pCVar1 = &(this_ptr->base).base.base.location;
        pCStack_30 = pCVar1;
        fStack_e8 = fStack_ac * _DAT_005f077d;
        fStack_e4 = afStack_a8[0] * _DAT_005f077d;
        fStack_e0 = afStack_a8[1] * _DAT_005f077d;
        fStack_178 = fStack_ac * _DAT_005f077d;
        afStack_174[(uint)bVar6 * -2] = afStack_fc[(uint)bVar6 * -2 + 6];
        afStack_174[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        fStack_88 = fStack_88 + (pCVar1->position).x;
        afStack_84[0] = afStack_84[0] + (this_ptr->base).base.base.location.position.y;
        afStack_84[1] = afStack_84[1] + (this_ptr->base).base.base.location.position.z;
        afStack_174[2] = afStack_174[2] + (pCVar1->position).x;
        afStack_174[3] = afStack_174[3] + (this_ptr->base).base.base.location.position.y;
        fStack_164 = fStack_164 + (this_ptr->base).base.base.location.position.z;
        fStack_124 = fStack_124 + (pCVar1->position).x;
        afStack_120[0] = afStack_120[0] + (this_ptr->base).base.base.location.position.y;
        afStack_120[1] = afStack_120[1] + (this_ptr->base).base.base.location.position.z;
        fStack_1cc = fStack_1cc + (pCVar1->position).x;
        fStack_1c8 = fStack_1c8 + (this_ptr->base).base.base.location.position.y;
        fStack_1c4 = fStack_1c4 + (this_ptr->base).base.base.location.position.z;
        uVar17 = 0;
        puVar15 = (uint *)0x0;
        pfVar14 = afStack_204 + 0x17;
        pfVar5 = &fStack_88;
        fVar18 = this_ptr->charge * (float)_DAT_005f0785;
        fVar13 = 1.0;
        uVar12 = 0x3f666666;
        uVar11 = 0x3f666666;
        uVar10 = 0;
        uVar9 = 0;
        fVar16 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar16,uVar9,fVar18,
                   uVar10,uVar11,uVar12,fVar13,pfVar5,pfVar14,puVar15,uVar17);
        uVar17 = 0;
        puVar15 = (uint *)0x0;
        pfVar5 = afStack_fc + 8;
        pfVar14 = afStack_174 + 2;
        fVar18 = this_ptr->charge * (float)_DAT_005f0785;
        fVar13 = 1.0;
        uVar12 = 0x3f666666;
        uVar11 = 0x3f666666;
        uVar10 = 0;
        uVar9 = 0;
        fVar16 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar16,uVar9,fVar18,
                   uVar10,uVar11,uVar12,fVar13,pfVar14,pfVar5,puVar15,uVar17);
        uVar17 = 0;
        puVar15 = (uint *)0x0;
        pfVar5 = afStack_fc + 0x14;
        pfVar14 = &fStack_124;
        fVar18 = this_ptr->charge * (float)_DAT_005f0785;
        fVar13 = 1.0;
        uVar12 = 0x3f666666;
        uVar11 = 0x3f666666;
        uVar10 = 0;
        uVar9 = 0;
        fVar16 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar16,uVar9,fVar18,
                   uVar10,uVar11,uVar12,fVar13,pfVar14,pfVar5,puVar15,uVar17);
        uVar17 = 0;
        puVar15 = (uint *)0x0;
        pfVar5 = afStack_1a4 + 0xb;
        pfVar14 = afStack_204 + 0xe;
        fVar18 = this_ptr->charge * (float)_DAT_005f0785;
        fVar13 = 1.0;
        uVar12 = 0x3f666666;
        uVar11 = 0x3f666666;
        uVar10 = 0;
        uVar9 = 0;
        fVar16 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar16,uVar9,fVar18,
                   uVar10,uVar11,uVar12,fVar13,pfVar14,pfVar5,puVar15,uVar17);
        afStack_a8[3] = 0.7;
        afStack_a8[2] = 0.0;
        afStack_a8[4] = 0.0;
        core_xform_cpp_FUN_00591530();
        fStack_13c = fStack_148;
        afStack_174[(uint)bVar6 * -2 + 0xf] = afStack_174[(uint)bVar6 * -2 + 0xc];
        this_ptr_01 = this_ptr;
        afStack_174[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
             afStack_174[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr_01);
        iStack_2c = 0;
        pCStack_20 = pCStack_30;
        do {
          fStack_38 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_38;
          fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_44;
          fStack_74 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          afStack_84[2] = fStack_38;
          afStack_84[3] = fStack_44;
          fStack_40 = fStack_74;
          fStack_14 = fStack_74;
          core_xform_cpp_FUN_00594380();
          CStack_218.w = fStack_228;
          pfVar5 = (float *)((int)&CStack_218 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          *(float *)((int)&CStack_218 + (uint)bVar6 * -8 + 4) = afStack_224[(uint)bVar6 * -2];
          *pfVar5 = afStack_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          pfVar5[(uint)bVar6 * -2 + 1] =
               (afStack_224 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_218,aCStack_288);
          fVar16 = 0.5;
          pCVar4 = aCStack_288;
          pfVar5 = (float *)&stack0xfffffd48;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar5 = pCVar4->m[0].w;
            pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
            pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
          }
          afStack_a8[6] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,fVar16);
          afStack_a8[5] = 0.0;
          uStack_8c = 0;
          fStack_3c = afStack_a8[6];
          fStack_14 = afStack_a8[6];
          core_xform_cpp_FUN_00591530();
          afStack_204[2] = fStack_160;
          afStack_204[(uint)bVar6 * -2 + 3] = afStack_174[(uint)bVar6 * -2 + 6];
          afStack_204[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_174[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
          afStack_fc[2] = afStack_204[2] + fStack_13c;
          afStack_fc[3] = afStack_204[3] + fStack_138;
          fStack_ec = fStack_1f4 + fStack_134;
          fVar18 = 2.0;
          fStack_154 = afStack_204[2] + fStack_13c;
          afStack_174[(uint)bVar6 * -2 + 9] = afStack_fc[(uint)bVar6 * -2 + 3];
          afStack_174[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
               afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fVar16 = 1.0;
          fStack_c4 = fStack_154 - fStack_13c;
          fStack_c0 = fStack_150 - fStack_138;
          fStack_bc = fStack_14c - fStack_134;
          fStack_1e4 = fStack_154 - fStack_13c;
          afStack_204[(uint)bVar6 * -2 + 9] = afStack_fc[(uint)bVar6 * -2 + 0xf];
          afStack_204[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
               afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
          fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar16,fVar18);
          fStack_1e4 = fStack_1e4 * fStack_18;
          fStack_1e0 = fStack_1e0 * fStack_18;
          fStack_1dc = fStack_1dc * fStack_18;
          fStack_154 = fStack_154 + (pCStack_20->position).x;
          uVar17 = 0;
          fStack_150 = fStack_150 + (pCStack_20->position).y;
          puVar15 = (uint *)0x0;
          fStack_14c = fStack_14c + (pCStack_20->position).z;
          pfVar5 = afStack_204 + 8;
          pfVar14 = afStack_174 + 8;
          fVar18 = this_ptr->charge * (float)_DAT_005f078d;
          fVar13 = 1.0;
          uVar12 = 0x3ee66666;
          uVar11 = 0x3ed26e98;
          uVar10 = 0;
          uVar9 = 0;
          fVar16 = this_ptr->charge;
          fStack_14 = fStack_18;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.7);
          iVar2 = iStack_2c + 1;
          iStack_2c = iVar2;
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar16,uVar9,fVar18,
                     uVar10,uVar11,uVar12,fVar13,pfVar14,pfVar5,puVar15,uVar17);
        } while (iVar2 < 5);
      }
    }
    if (0.0 < this_ptr->blast_pending) {
      pfStack_1c = &this_ptr->blast_strength;
      this_ptr->blast_pending = 0.0;
      pCStack_28 = &(this_ptr->base).base.base.location;
      iStack_24 = 0;
      do {
        iVar2 = core_bwgrndma_cpp_FUN_005a7ed0();
        if (iVar2 != 0) {
          fVar16 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fVar8 = (float10)fcos((float10)fVar16);
          fVar7 = (float10)fsin((float10)fVar16);
          fVar8 = fVar8 * (float10)_DAT_005f0795;
          fVar7 = fVar7 * (float10)_DAT_005f0795;
          fVar16 = (float)fVar8;
          fStack_14 = fVar16;
          fStack_34 = (float)fVar7;
          fStack_12c = 0.0;
          afStack_6c[0] = 0.0;
          fStack_130 = fStack_34;
          afStack_6c[1] = (float)(fVar8 * (float10)_DAT_005f079d);
          fStack_70 = (float)(fVar7 * (float10)_DAT_005f079d);
          afStack_120[2] = fStack_70;
          afStack_120[(uint)bVar6 * -2 + 3] = afStack_6c[(uint)bVar6 * -2];
          afStack_120[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          fStack_128 = fVar16;
          fStack_100 = afStack_120[2] * *pfStack_1c;
          afStack_fc[0] = afStack_120[3] * *pfStack_1c;
          afStack_fc[1] = fStack_110 * *pfStack_1c;
          afStack_d0[0] = afStack_120[2] * *pfStack_1c;
          afStack_fc[(uint)bVar6 * -2 + 0xc] = afStack_fc[(uint)bVar6 * -2];
          afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
               afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          fVar18 = -0.5;
          fVar16 = 0.0;
          fStack_1c0 = _DAT_0265370c;
          afStack_204[(uint)bVar6 * -2 + 0x12] = *(float *)(&DAT_02653710 + (uint)bVar6 * -8);
          afStack_204[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
               *(float *)(&DAT_02653714 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          fStack_1bc = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar16,fVar18);
          fStack_130 = fStack_130 + (pCStack_28->position).x;
          fStack_12c = fStack_12c + (pCStack_28->position).y;
          fStack_128 = fStack_128 + (pCStack_28->position).z;
          fStack_14 = fStack_1bc;
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (g_CSimpleParticleSystemPtr,this_ptr->blast_strength * (float)_DAT_005f07a5,
                     this_ptr->blast_strength,0,this_ptr->blast_strength * (float)_DAT_005f0785,0,
                     0x3f4ccccd,0x3f4ccccd,0x3f800000,afStack_174 + 0x11,afStack_fc + 0xb,
                     afStack_204 + 0x11,0);
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 100);
    }
  }
  return;
}
