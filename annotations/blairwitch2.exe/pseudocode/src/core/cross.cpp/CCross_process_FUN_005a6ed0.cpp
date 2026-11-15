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
  uint *puVar5;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_1a04 [1483];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float in_stack_fffffd48;
  float fVar14;
  float *pfVar15;
  uint *puVar16;
  float fVar17;
  float fVar18;
  CCross *this_ptr_01;
  CMatrix3x4f *pCVar19;
  float fVar20;
  CMatrix3x4f CStack_288;
  CMatrix3x4f CStack_258;
  CQuaternion4f CStack_228;
  CQuaternion4f CStack_218;
  CVector3f CStack_208;
  float fStack_1fc;
  float afStack_1f8 [2];
  CVector3f CStack_1f0;
  float fStack_1e4;
  float afStack_1e0 [4];
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  CVector3f CStack_1b4;
  float fStack_1a8;
  float afStack_1a4 [2];
  CVector3f CStack_19c;
  CVector3f CStack_190;
  CVector3f CStack_184;
  float fStack_178;
  float afStack_174 [4];
  float fStack_164;
  CVector3f CStack_160;
  float fStack_154;
  float afStack_150 [2];
  CVector3f CStack_148;
  float fStack_13c;
  float afStack_138 [5];
  float fStack_124;
  float afStack_120 [4];
  float fStack_110;
  CVector3f CStack_10c;
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
  CVector3f CStack_b8;
  float fStack_ac;
  float afStack_a8 [2];
  CVector3f CStack_a0;
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [2];
  CVector3f CStack_7c;
  float fStack_70;
  float afStack_6c [2];
  CVector3f CStack_64;
  CVector3f CStack_58;
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
  
  bVar7 = 0;
  actor_ptr = (*((this_ptr->base).base.base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
  this_ptr_00 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,(uint)in_stack_fffffd48);
  if (this_ptr_00 != (CCharacter *)0x0) {
    EVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
    if (EVar3 == DEATH_STATE_ALIVE) {
      fVar17 = this_ptr->charge_time + delta_time;
      goto LAB_005a6f19;
    }
  }
  fVar17 = this_ptr->charge_time - delta_time;
LAB_005a6f19:
  this_ptr->charge_time = fVar17;
  if (_DAT_005ffe6c < this_ptr->charge_time) {
    this_ptr->charge_time = _DAT_005ffe6c;
  }
  if (this_ptr->charge_time < 0.0) {
    this_ptr->charge_time = 0.0;
  }
  fVar17 = this_ptr->charge_time / _DAT_005ffe6c;
  fVar20 = this_ptr->pulse_timer + delta_time;
  this_ptr->pulse_timer = fVar20;
  this_ptr->charge = fVar17;
  if (_DAT_005ffe70 <= fVar20) {
    this_ptr->pulse_timer = 0.0;
  }
  fVar8 = (float10)fsin(((float10)this_ptr->pulse_timer / (float10)_DAT_005ffe70) *
                        (float10)_DAT_005f0765 * (float10)_DAT_005f0769);
  this_ptr->glow_intensity =
       (float)((float10)this_ptr->charge * (float10)_DAT_005f076d * fVar8 + (float10)_DAT_005f0775);
  core_melee_cpp_CMelee_process_FUN_004eacf0(&this_ptr->base,delta_time);
  (*((this_ptr->base).base.base.vtable._ub)->vfunc1)((CDemonActor *)this_ptr);
  if ((this_ptr->base).base.weapon_state != WEAPON_STATE_IN_INVENTORY) {
    fVar17 = this_ptr->charge;
    *(float *)&(this_ptr->base).base.base.field_0x2a8 =
         *(float *)&(this_ptr->base).base.base.field_0x2a8 - delta_time;
    if ((0.0 < fVar17) && (*(float *)&(this_ptr->base).base.base.field_0x2a8 <= 0.0)) {
      *(uint *)&(this_ptr->base).base.base.field_0x2a8 = 0x3e19999a;
      iVar2 = core_bwgrndma_cpp_FUN_005a7ed0();
      if (iVar2 != 0) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&CStack_258,(CVector3f *)&DAT_0265370c,&(this_ptr->base).base.base.orient.vec);
        CStack_1b4.x = 0.0;
        CStack_1b4.y = 1.3;
        CStack_1b4.z = 0.0;
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_1b4,&CStack_258,&CStack_19c);
        pCVar19 = &CStack_258;
        CStack_64.x = 0.5;
        fStack_88 = CStack_19c.x;
        afStack_84[(uint)bVar7 * -2] = *(float *)((int)&CStack_19c + (uint)bVar7 * -8 + 4);
        afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             *(float *)((int)&CStack_19c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        CStack_64.y = 0.7;
        CStack_64.z = 0.0;
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_64,pCVar19,&CStack_190);
        pCVar19 = &CStack_258;
        CStack_184.z = 0.0;
        fStack_124 = CStack_190.x;
        afStack_120[(uint)bVar7 * -2] = *(float *)((int)&CStack_190 + (uint)bVar7 * -8 + 4);
        afStack_120[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             *(float *)((int)&CStack_190 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        CStack_184.y = 0.7;
        CStack_184.x = -0.5;
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_184,pCVar19,&CStack_208);
        pCVar19 = &CStack_258;
        fStack_1cc = CStack_208.x;
        afStack_1e0[(uint)bVar7 * -2 + 6] = *(float *)((int)&CStack_208 + (uint)bVar7 * -8 + 4);
        afStack_1e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             *(float *)((int)&CStack_208 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        CStack_10c.x = 0.0;
        CStack_10c.z = 0.0;
        afStack_174[2] = _DAT_0265370c;
        afStack_174[(uint)bVar7 * -2 + 3] = *(float *)(&DAT_02653710 + (uint)bVar7 * -8);
        afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             *(float *)(&DAT_02653714 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        CStack_10c.y = 1.0;
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_10c,pCVar19,&CStack_58);
        fStack_1a8 = CStack_58.x;
        afStack_1a4[(uint)bVar7 * -2] = *(float *)((int)&CStack_58 + (uint)bVar7 * -8 + 4);
        afStack_1a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             *(float *)((int)&CStack_58 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        pCVar19 = &CStack_258;
        CStack_b8.y = 0.0;
        CStack_b8.z = 0.0;
        CStack_b8.x = 0.5;
        afStack_1e0[2] = fStack_1a8 * _DAT_005f077d;
        afStack_1e0[3] = afStack_1a4[0] * _DAT_005f077d;
        fStack_1d0 = afStack_1a4[1] * _DAT_005f077d;
        afStack_dc[0] = fStack_1a8 * _DAT_005f077d;
        afStack_fc[(uint)bVar7 * -2 + 9] = afStack_1e0[(uint)bVar7 * -2 + 3];
        afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             afStack_1e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_b8,pCVar19,&CStack_1f0);
        fStack_ac = CStack_1f0.x;
        afStack_a8[(uint)bVar7 * -2] = *(float *)((int)&CStack_1f0 + (uint)bVar7 * -8 + 4);
        afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             *(float *)((int)&CStack_1f0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        pCVar1 = &(this_ptr->base).base.base.location;
        pCStack_30 = pCVar1;
        fStack_e8 = fStack_ac * _DAT_005f077d;
        fStack_e4 = afStack_a8[0] * _DAT_005f077d;
        fStack_e0 = afStack_a8[1] * _DAT_005f077d;
        fStack_178 = fStack_ac * _DAT_005f077d;
        afStack_174[(uint)bVar7 * -2] = afStack_fc[(uint)bVar7 * -2 + 6];
        afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
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
        fVar18 = 0.0;
        puVar16 = (uint *)0x0;
        pfVar15 = &fStack_1a8;
        pfVar6 = &fStack_88;
        fVar20 = this_ptr->charge * (float)_DAT_005f0785;
        fVar14 = 1.0;
        uVar13 = 0x3f666666;
        uVar12 = 0x3f666666;
        uVar11 = 0;
        uVar10 = 0;
        fVar17 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar17,uVar10,fVar20,
                   uVar11,uVar12,uVar13,fVar14,pfVar6,pfVar15,puVar16,fVar18);
        fVar18 = 0.0;
        puVar16 = (uint *)0x0;
        pfVar6 = afStack_fc + 8;
        pfVar15 = afStack_174 + 2;
        fVar20 = this_ptr->charge * (float)_DAT_005f0785;
        fVar14 = 1.0;
        uVar13 = 0x3f666666;
        uVar12 = 0x3f666666;
        uVar11 = 0;
        uVar10 = 0;
        fVar17 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar17,uVar10,fVar20,
                   uVar11,uVar12,uVar13,fVar14,pfVar15,pfVar6,puVar16,fVar18);
        fVar18 = 0.0;
        puVar16 = (uint *)0x0;
        pfVar6 = &fStack_ac;
        pfVar15 = &fStack_124;
        fVar20 = this_ptr->charge * (float)_DAT_005f0785;
        fVar14 = 1.0;
        uVar13 = 0x3f666666;
        uVar12 = 0x3f666666;
        uVar11 = 0;
        uVar10 = 0;
        fVar17 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar17,uVar10,fVar20,
                   uVar11,uVar12,uVar13,fVar14,pfVar15,pfVar6,puVar16,fVar18);
        fVar18 = 0.0;
        puVar16 = (uint *)0x0;
        pfVar6 = &fStack_178;
        pfVar15 = afStack_1e0 + 5;
        fVar20 = this_ptr->charge * (float)_DAT_005f0785;
        fVar14 = 1.0;
        uVar13 = 0x3f666666;
        uVar12 = 0x3f666666;
        uVar11 = 0;
        uVar10 = 0;
        fVar17 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar17,uVar10,fVar20,
                   uVar11,uVar12,uVar13,fVar14,pfVar15,pfVar6,puVar16,fVar18);
        CStack_a0.y = 0.7;
        CStack_a0.x = 0.0;
        CStack_a0.z = 0.0;
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_a0,&CStack_258,&CStack_148);
        fStack_13c = CStack_148.x;
        afStack_138[(uint)bVar7 * -2] = *(float *)((int)&CStack_148 + (uint)bVar7 * -8 + 4);
        this_ptr_01 = this_ptr;
        afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             *(float *)((int)&CStack_148 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr_01);
        iStack_2c = 0;
        pCStack_20 = pCStack_30;
        do {
          fStack_38 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_38;
          fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_44;
          CStack_7c.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          CStack_7c.x = fStack_38;
          CStack_7c.y = fStack_44;
          fStack_40 = CStack_7c.z;
          fStack_14 = CStack_7c.z;
          core_xform_cpp_eulerToQuaternion_FUN_00594380(&CStack_7c,&CStack_228);
          CStack_218.w = CStack_228.w;
          puVar5 = (uint *)((int)&CStack_218 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          puVar16 = (uint *)((int)&CStack_228 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(uint *)((int)&CStack_218 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&CStack_228 + (uint)bVar7 * -8 + 4);
          *puVar5 = *puVar16;
          puVar5[(uint)bVar7 * -2 + 1] = puVar16[(uint)bVar7 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_218,&CStack_288);
          pCVar19 = (CMatrix3x4f *)&stack0xfffffd48;
          fVar17 = 0.5;
          pCVar4 = &CStack_288;
          pfVar6 = (float *)&stack0xfffffd48;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar6 = pCVar4->m[0].w;
            pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          CStack_94.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,fVar17);
          CStack_94.x = 0.0;
          CStack_94.z = 0.0;
          fStack_3c = CStack_94.y;
          fStack_14 = CStack_94.y;
          core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_94,pCVar19,&CStack_160);
          fStack_1fc = CStack_160.x;
          afStack_1f8[(uint)bVar7 * -2] = *(float *)((int)&CStack_160 + (uint)bVar7 * -8 + 4);
          afStack_1f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               *(float *)((int)&CStack_160 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          afStack_fc[2] = fStack_1fc + fStack_13c;
          afStack_fc[3] = afStack_1f8[0] + afStack_138[0];
          fStack_ec = afStack_1f8[1] + afStack_138[1];
          fVar20 = 2.0;
          fStack_154 = fStack_1fc + fStack_13c;
          afStack_150[(uint)bVar7 * -2] = afStack_fc[(uint)bVar7 * -2 + 3];
          afStack_150[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          fVar17 = 1.0;
          fStack_c4 = fStack_154 - fStack_13c;
          fStack_c0 = afStack_150[0] - afStack_138[0];
          fStack_bc = afStack_150[1] - afStack_138[1];
          fStack_1e4 = fStack_154 - fStack_13c;
          afStack_1e0[(uint)bVar7 * -2] = afStack_fc[(uint)bVar7 * -2 + 0xf];
          afStack_1e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
          fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar17,fVar20);
          fStack_1e4 = fStack_1e4 * fStack_18;
          afStack_1e0[0] = afStack_1e0[0] * fStack_18;
          afStack_1e0[1] = afStack_1e0[1] * fStack_18;
          fStack_154 = fStack_154 + (pCStack_20->position).x;
          fVar18 = 0.0;
          afStack_150[0] = afStack_150[0] + (pCStack_20->position).y;
          puVar16 = (uint *)0x0;
          afStack_150[1] = afStack_150[1] + (pCStack_20->position).z;
          pfVar6 = &fStack_1e4;
          pfVar15 = &fStack_154;
          fVar20 = this_ptr->charge * (float)_DAT_005f078d;
          fVar14 = 1.0;
          uVar13 = 0x3ee66666;
          uVar12 = 0x3ed26e98;
          uVar11 = 0;
          uVar10 = 0;
          fVar17 = this_ptr->charge;
          fStack_14 = fStack_18;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.7);
          iVar2 = iStack_2c + 1;
          iStack_2c = iVar2;
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar17,uVar10,fVar20,
                     uVar11,uVar12,uVar13,fVar14,pfVar15,pfVar6,puVar16,fVar18);
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
          fVar17 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fVar9 = (float10)fcos((float10)fVar17);
          fVar8 = (float10)fsin((float10)fVar17);
          fVar9 = fVar9 * (float10)_DAT_005f0795;
          fVar8 = fVar8 * (float10)_DAT_005f0795;
          fVar17 = (float)fVar9;
          fStack_14 = fVar17;
          fStack_34 = (float)fVar8;
          afStack_138[3] = 0.0;
          afStack_6c[0] = 0.0;
          afStack_138[2] = fStack_34;
          afStack_6c[1] = (float)(fVar9 * (float10)_DAT_005f079d);
          fStack_70 = (float)(fVar8 * (float10)_DAT_005f079d);
          afStack_120[2] = fStack_70;
          afStack_120[(uint)bVar7 * -2 + 3] = afStack_6c[(uint)bVar7 * -2];
          afStack_120[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          afStack_138[4] = fVar17;
          fStack_100 = afStack_120[2] * *pfStack_1c;
          afStack_fc[0] = afStack_120[3] * *pfStack_1c;
          afStack_fc[1] = fStack_110 * *pfStack_1c;
          afStack_d0[0] = afStack_120[2] * *pfStack_1c;
          afStack_fc[(uint)bVar7 * -2 + 0xc] = afStack_fc[(uint)bVar7 * -2];
          afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
               afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          fVar20 = -0.5;
          fVar17 = 0.0;
          fStack_1c0 = _DAT_0265370c;
          afStack_1e0[(uint)bVar7 * -2 + 9] = *(float *)(&DAT_02653710 + (uint)bVar7 * -8);
          afStack_1e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               *(float *)(&DAT_02653714 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          fStack_1bc = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar17,fVar20);
          afStack_138[2] = afStack_138[2] + (pCStack_28->position).x;
          afStack_138[3] = afStack_138[3] + (pCStack_28->position).y;
          afStack_138[4] = afStack_138[4] + (pCStack_28->position).z;
          fStack_14 = fStack_1bc;
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (g_CSimpleParticleSystemPtr,this_ptr->blast_strength * (float)_DAT_005f07a5,
                     this_ptr->blast_strength,0,this_ptr->blast_strength * (float)_DAT_005f0785,0,
                     0x3f4ccccd,0x3f4ccccd,0x3f800000,afStack_138 + 2,afStack_fc + 0xb,
                     afStack_1e0 + 8,0);
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 100);
    }
  }
  return;
}
