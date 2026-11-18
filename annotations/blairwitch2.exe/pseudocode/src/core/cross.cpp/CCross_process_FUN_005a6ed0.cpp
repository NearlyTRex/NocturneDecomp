// Name: core_cross.cpp_CCross_process_FUN_005a6ed0
// Address: 005a6ed0
// Address Range: [[005a6ed0, 005a794e]]
// Convention: __cdecl
// Signature: void __cdecl core_cross_cpp_CCross_process_FUN_005a6ed0(CCross *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_cross_cpp_CCross_process_FUN_005a6ed0(CCross *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDemonActor *actor_ptr;
  CCharacter *this_ptr_00;
  int iVar2;
  EDeathState EVar3;
  uint *puVar4;
  CMatrix3x4f *pCVar5;
  uint *puVar6;
  float *pfVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float afStackY_1a04 [1483];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_stack_fffffd48;
  float fVar15;
  CVector3f *pCVar16;
  CVector3f *pCVar17;
  CVector3f *pCVar18;
  float fVar19;
  float fVar20;
  CCross *this_ptr_01;
  CMatrix3x4f *pCVar21;
  float fVar22;
  CMatrix3x4f CStack_288;
  CMatrix3x4f CStack_258;
  CQuaternion4f CStack_228;
  CQuaternion4f CStack_218;
  CVector3f CStack_208;
  float fStack_1fc;
  float afStack_1f8 [2];
  CVector3f CStack_1f0;
  CVector3f CStack_1e4;
  float fStack_1d8;
  float afStack_1d4 [2];
  CVector3f CStack_1cc;
  CVector3f CStack_1c0;
  CVector3f CStack_1b4;
  CVector3f CStack_1a8;
  CVector3f CStack_19c;
  CVector3f CStack_190;
  CVector3f CStack_184;
  CVector3f CStack_178;
  CVector3f CStack_16c;
  CVector3f CStack_160;
  CVector3f CStack_154;
  CVector3f CStack_148;
  float fStack_13c;
  float afStack_138 [2];
  CVector3f CStack_130;
  CVector3f CStack_124;
  float fStack_118;
  float afStack_114 [2];
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  CVector3f CStack_dc;
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [2];
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
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
  
  bVar8 = 0;
  actor_ptr = (*((this_ptr->base).base.base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
  this_ptr_00 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,(uint)in_stack_fffffd48);
  if (this_ptr_00 != (CCharacter *)0x0) {
    EVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
    if (EVar3 == DEATH_STATE_ALIVE) {
      fVar19 = this_ptr->charge_time + delta_time;
      goto LAB_005a6f19;
    }
  }
  fVar19 = this_ptr->charge_time - delta_time;
LAB_005a6f19:
  this_ptr->charge_time = fVar19;
  if (5.0f < this_ptr->charge_time) {
    this_ptr->charge_time = 5.0f;
  }
  if (this_ptr->charge_time < 0.0) {
    this_ptr->charge_time = 0.0;
  }
  fVar19 = this_ptr->charge_time / 5.0f;
  fVar22 = this_ptr->pulse_timer + delta_time;
  this_ptr->pulse_timer = fVar22;
  this_ptr->charge = fVar19;
  if (2.0f <= fVar22) {
    this_ptr->pulse_timer = 0.0;
  }
  fVar9 = (float10)fsin(((float10)this_ptr->pulse_timer / (float10)2.0f) *
                        (float10)2.0f * (float10)3.141593f);
  this_ptr->glow_intensity =
       (float)((float10)this_ptr->charge * (float10)0.14999999999999999 * fVar9 +
              (float10)0.80000000000000004);
  core_melee_cpp_CMelee_process_FUN_004eacf0(&this_ptr->base,delta_time);
  (*((this_ptr->base).base.base.vtable._ub)->vfunc1)((CDemonActor *)this_ptr);
  if ((this_ptr->base).base.weapon_state != WEAPON_STATE_IN_INVENTORY) {
    fVar19 = this_ptr->charge;
    *(float *)&(this_ptr->base).base.base.field_0x2a8 =
         *(float *)&(this_ptr->base).base.base.field_0x2a8 - delta_time;
    if ((0.0 < fVar19) && (*(float *)&(this_ptr->base).base.base.field_0x2a8 <= 0.0)) {
      *(uint *)&(this_ptr->base).base.base.field_0x2a8 = 0x3e19999a;
      iVar2 = core_bwgrndma_cpp_shouldSpawnParticle_FUN_005a7ed0();
      if (iVar2 != 0) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&CStack_258,&g_ZeroVector,&(this_ptr->base).base.base.orient.vec);
        CStack_1b4.x = 0.0;
        CStack_1b4.y = 1.3;
        CStack_1b4.z = 0.0;
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_1b4,&CStack_258,&CStack_19c);
        pCVar21 = &CStack_258;
        CStack_64.x = 0.5;
        CStack_88.x = CStack_19c.x;
        *(uint *)((int)&CStack_88 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_19c + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_88 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_19c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        CStack_64.y = 0.7;
        CStack_64.z = 0.0;
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_64,pCVar21,&CStack_190);
        pCVar21 = &CStack_258;
        CStack_184.z = 0.0;
        CStack_124.x = CStack_190.x;
        *(uint *)((int)&CStack_124 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_190 + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_124 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_190 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        CStack_184.y = 0.7;
        CStack_184.x = -0.5;
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_184,pCVar21,&CStack_208);
        pCVar21 = &CStack_258;
        CStack_1cc.x = CStack_208.x;
        *(uint *)((int)&CStack_1cc + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_208 + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_1cc + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_208 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        CStack_10c.x = 0.0;
        CStack_10c.z = 0.0;
        CStack_16c.x = g_ZeroVector.x;
        *(uint *)((int)&CStack_16c + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&g_ZeroVector + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_16c + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
             *(uint *)((uint)bVar8 * -8 + 0x2653714 + (uint)bVar8 * -8);
        CStack_10c.y = 1.0;
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_10c,pCVar21,&CStack_58);
        CStack_1a8.x = CStack_58.x;
        *(uint *)((int)&CStack_1a8 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_58 + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_1a8 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_58 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        pCVar21 = &CStack_258;
        CStack_b8.y = 0.0;
        CStack_b8.z = 0.0;
        CStack_b8.x = 0.5;
        fStack_1d8 = CStack_1a8.x * -1.0f;
        afStack_1d4[0] = CStack_1a8.y * -1.0f;
        afStack_1d4[1] = CStack_1a8.z * -1.0f;
        CStack_dc.x = CStack_1a8.x * -1.0f;
        *(float *)((int)&CStack_dc + (uint)bVar8 * -8 + 4) = afStack_1d4[(uint)bVar8 * -2];
        *(float *)((int)&CStack_dc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_1d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_b8,pCVar21,&CStack_1f0);
        CStack_ac.x = CStack_1f0.x;
        *(uint *)((int)&CStack_ac + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_1f0 + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_ac + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_1f0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        pCVar1 = &(this_ptr->base).base.base.location;
        pCStack_30 = pCVar1;
        fStack_e8 = CStack_ac.x * -1.0f;
        fStack_e4 = CStack_ac.y * -1.0f;
        fStack_e0 = CStack_ac.z * -1.0f;
        CStack_178.x = CStack_ac.x * -1.0f;
        *(float *)((int)&CStack_178 + (uint)bVar8 * -8 + 4) = afStack_fc[(uint)bVar8 * -2 + 6];
        *(float *)((int)&CStack_178 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        CStack_88.x = CStack_88.x + (pCVar1->position).x;
        CStack_88.y = CStack_88.y + (this_ptr->base).base.base.location.position.y;
        CStack_88.z = CStack_88.z + (this_ptr->base).base.base.location.position.z;
        CStack_16c.x = CStack_16c.x + (pCVar1->position).x;
        CStack_16c.y = CStack_16c.y + (this_ptr->base).base.base.location.position.y;
        CStack_16c.z = CStack_16c.z + (this_ptr->base).base.base.location.position.z;
        CStack_124.x = CStack_124.x + (pCVar1->position).x;
        CStack_124.y = CStack_124.y + (this_ptr->base).base.base.location.position.y;
        CStack_124.z = CStack_124.z + (this_ptr->base).base.base.location.position.z;
        CStack_1cc.x = CStack_1cc.x + (pCVar1->position).x;
        CStack_1cc.y = CStack_1cc.y + (this_ptr->base).base.base.location.position.y;
        CStack_1cc.z = CStack_1cc.z + (this_ptr->base).base.base.location.position.z;
        fVar20 = 0.0;
        pCVar18 = (CVector3f *)0x0;
        pCVar17 = &CStack_1a8;
        pCVar16 = &CStack_88;
        fVar22 = this_ptr->charge * (float)0.29999999999999999;
        fVar15 = 1.0;
        fVar14 = 0.9;
        fVar13 = 0.9;
        fVar12 = 0.0;
        fVar11 = 0.0;
        fVar19 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar19,fVar11,fVar22,
                   fVar12,fVar13,fVar14,fVar15,pCVar16,pCVar17,pCVar18,(int)fVar20);
        fVar20 = 0.0;
        pCVar18 = (CVector3f *)0x0;
        pCVar16 = &CStack_dc;
        pCVar17 = &CStack_16c;
        fVar22 = this_ptr->charge * (float)0.29999999999999999;
        fVar15 = 1.0;
        fVar14 = 0.9;
        fVar13 = 0.9;
        fVar12 = 0.0;
        fVar11 = 0.0;
        fVar19 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar19,fVar11,fVar22,
                   fVar12,fVar13,fVar14,fVar15,pCVar17,pCVar16,pCVar18,(int)fVar20);
        fVar20 = 0.0;
        pCVar18 = (CVector3f *)0x0;
        pCVar16 = &CStack_ac;
        pCVar17 = &CStack_124;
        fVar22 = this_ptr->charge * (float)0.29999999999999999;
        fVar15 = 1.0;
        fVar14 = 0.9;
        fVar13 = 0.9;
        fVar12 = 0.0;
        fVar11 = 0.0;
        fVar19 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar19,fVar11,fVar22,
                   fVar12,fVar13,fVar14,fVar15,pCVar17,pCVar16,pCVar18,(int)fVar20);
        fVar20 = 0.0;
        pCVar18 = (CVector3f *)0x0;
        pCVar16 = &CStack_178;
        pCVar17 = &CStack_1cc;
        fVar22 = this_ptr->charge * (float)0.29999999999999999;
        fVar15 = 1.0;
        fVar14 = 0.9;
        fVar13 = 0.9;
        fVar12 = 0.0;
        fVar11 = 0.0;
        fVar19 = this_ptr->charge;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar19,fVar11,fVar22,
                   fVar12,fVar13,fVar14,fVar15,pCVar17,pCVar16,pCVar18,(int)fVar20);
        CStack_a0.y = 0.7;
        CStack_a0.x = 0.0;
        CStack_a0.z = 0.0;
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_a0,&CStack_258,&CStack_148);
        fStack_13c = CStack_148.x;
        afStack_138[(uint)bVar8 * -2] = *(float *)((int)&CStack_148 + (uint)bVar8 * -8 + 4);
        this_ptr_01 = this_ptr;
        afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             *(float *)((int)&CStack_148 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
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
          puVar6 = (uint *)((int)&CStack_218 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          puVar4 = (uint *)((int)&CStack_228 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          *(uint *)((int)&CStack_218 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&CStack_228 + (uint)bVar8 * -8 + 4);
          *puVar6 = *puVar4;
          puVar6[(uint)bVar8 * -2 + 1] = puVar4[(uint)bVar8 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_218,&CStack_288);
          pCVar21 = (CMatrix3x4f *)&stack0xfffffd48;
          fVar19 = 0.5;
          pCVar5 = &CStack_288;
          pfVar7 = (float *)&stack0xfffffd48;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar7 = pCVar5->m[0].w;
            pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
            pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
          }
          CStack_94.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,fVar19);
          CStack_94.x = 0.0;
          CStack_94.z = 0.0;
          fStack_3c = CStack_94.y;
          fStack_14 = CStack_94.y;
          core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_94,pCVar21,&CStack_160);
          fStack_1fc = CStack_160.x;
          afStack_1f8[(uint)bVar8 * -2] = *(float *)((int)&CStack_160 + (uint)bVar8 * -8 + 4);
          afStack_1f8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)((int)&CStack_160 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          afStack_fc[2] = fStack_1fc + fStack_13c;
          afStack_fc[3] = afStack_1f8[0] + afStack_138[0];
          fStack_ec = afStack_1f8[1] + afStack_138[1];
          fVar22 = 2.0;
          CStack_154.x = fStack_1fc + fStack_13c;
          *(float *)((int)&CStack_154 + (uint)bVar8 * -8 + 4) = afStack_fc[(uint)bVar8 * -2 + 3];
          *(float *)((int)&CStack_154 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
               afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          fVar19 = 1.0;
          fStack_c4 = CStack_154.x - fStack_13c;
          afStack_c0[0] = CStack_154.y - afStack_138[0];
          afStack_c0[1] = CStack_154.z - afStack_138[1];
          CStack_1e4.x = CStack_154.x - fStack_13c;
          *(float *)((int)&CStack_1e4 + (uint)bVar8 * -8 + 4) = afStack_c0[(uint)bVar8 * -2];
          *(float *)((int)&CStack_1e4 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
               afStack_c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar19,fVar22);
          CStack_1e4.x = CStack_1e4.x * fStack_18;
          CStack_1e4.y = CStack_1e4.y * fStack_18;
          CStack_1e4.z = CStack_1e4.z * fStack_18;
          CStack_154.x = CStack_154.x + (pCStack_20->position).x;
          fVar20 = 0.0;
          CStack_154.y = CStack_154.y + (pCStack_20->position).y;
          pCVar18 = (CVector3f *)0x0;
          CStack_154.z = CStack_154.z + (pCStack_20->position).z;
          pCVar16 = &CStack_1e4;
          pCVar17 = &CStack_154;
          fVar22 = this_ptr->charge * (float)0.20000000000000001;
          fVar15 = 1.0;
          fVar14 = 0.45;
          fVar13 = 0.411;
          fVar12 = 0.0;
          fVar11 = 0.0;
          fVar19 = this_ptr->charge;
          fStack_14 = fStack_18;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.7);
          iVar2 = iStack_2c + 1;
          iStack_2c = iVar2;
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (g_CSimpleParticleSystemPtr,fStack_14 * this_ptr->charge,fVar19,fVar11,fVar22,
                     fVar12,fVar13,fVar14,fVar15,pCVar17,pCVar16,pCVar18,(int)fVar20);
        } while (iVar2 < 5);
      }
    }
    if (0.0 < this_ptr->blast_pending) {
      pfStack_1c = &this_ptr->blast_strength;
      this_ptr->blast_pending = 0.0;
      pCStack_28 = &(this_ptr->base).base.base.location;
      iStack_24 = 0;
      do {
        iVar2 = core_bwgrndma_cpp_shouldSpawnParticle_FUN_005a7ed0();
        if (iVar2 != 0) {
          fVar19 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fVar10 = (float10)fcos((float10)fVar19);
          fVar9 = (float10)fsin((float10)fVar19);
          fVar10 = fVar10 * (float10)0.5;
          fVar9 = fVar9 * (float10)0.5;
          fVar19 = (float)fVar10;
          fStack_14 = fVar19;
          fStack_34 = (float)fVar9;
          CStack_130.y = 0.0;
          afStack_6c[0] = 0.0;
          CStack_130.x = fStack_34;
          afStack_6c[1] = (float)(fVar10 * (float10)10.0f);
          fStack_70 = (float)(fVar9 * (float10)10.0f);
          fStack_118 = fStack_70;
          afStack_114[(uint)bVar8 * -2] = afStack_6c[(uint)bVar8 * -2];
          afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          CStack_130.z = fVar19;
          fStack_100 = fStack_118 * *pfStack_1c;
          afStack_fc[0] = afStack_114[0] * *pfStack_1c;
          afStack_fc[1] = afStack_114[1] * *pfStack_1c;
          CStack_d0.x = fStack_118 * *pfStack_1c;
          *(float *)((int)&CStack_d0 + (uint)bVar8 * -8 + 4) = afStack_fc[(uint)bVar8 * -2];
          *(float *)((int)&CStack_d0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          fVar22 = -0.5;
          fVar19 = 0.0;
          CStack_1c0.x = g_ZeroVector.x;
          *(uint *)((int)&CStack_1c0 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&g_ZeroVector + (uint)bVar8 * -8 + 4);
          *(uint *)((int)&CStack_1c0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               *(uint *)((uint)bVar8 * -8 + 0x2653714 + (uint)bVar8 * -8);
          CStack_1c0.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar19,fVar22);
          CStack_130.x = CStack_130.x + (pCStack_28->position).x;
          CStack_130.y = CStack_130.y + (pCStack_28->position).y;
          CStack_130.z = CStack_130.z + (pCStack_28->position).z;
          fStack_14 = CStack_1c0.y;
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (g_CSimpleParticleSystemPtr,this_ptr->blast_strength * (float)3,
                     this_ptr->blast_strength,0.0,
                     this_ptr->blast_strength * (float)0.29999999999999999,0.0,0.8,0.8,1.0,&CStack_130
                     ,&CStack_d0,&CStack_1c0,0);
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 100);
    }
  }
  return;
}
