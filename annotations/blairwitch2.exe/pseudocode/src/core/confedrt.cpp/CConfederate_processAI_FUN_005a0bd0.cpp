// Name: core_confedrt.cpp_CConfederate_processAI_FUN_005a0bd0
// Address: 005a0bd0
// Address Range: [[005a0bd0, 005a0fcf]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_processAI_FUN_005a0bd0(CConfederate *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_confedrt_cpp_CConfederate_processAI_FUN_005a0bd0(CConfederate *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  int iVar2;
  int iVar3;
  CDemonActor *pCVar4;
  SStateMachine *pSVar5;
  uint *puVar6;
  CMatrix3x4f *pCVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  float afStackY_1930 [1490];
  float fVar11;
  float fVar12;
  float blue;
  CVector3f *position_offset;
  CVector3f *velocity;
  CQuaternion4f *quat2_in;
  CVector3f *acceleration;
  CQuaternion4f *quat2_in_00;
  CMatrix3x4f *matrix;
  CMatrix3x4f CStack_1b4;
  CMatrix3x4f CStack_184;
  CQuaternion4f CStack_154;
  CQuaternion4f CStack_144;
  CQuaternion4f CStack_134;
  CQuaternion4f CStack_124;
  CQuaternion4f CStack_114;
  CQuaternion4f CStack_104;
  CQuaternion4f CStack_f4;
  CQuaternion4f CStack_e4;
  CQuaternion4f CStack_d4;
  CQuaternion4f CStack_c4;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [2];
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [2];
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CSimpleParticleSystem *pCStack_1c;
  CSimpleParticleSystem *pCStack_18;
  float fStack_14;
  
  bVar10 = 0;
  pSVar5 = &(this_ptr->base).state_machine;
  iVar2 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar5,"Death");
  if (iVar2 == 0) {
    iVar2 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar5,"Animation");
    if (iVar2 == 0) {
      (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
    }
  }
  pCStack_1c = (this_ptr->base).base.base.base.particle_systems;
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180(pCStack_1c,delta_time);
  fVar11 = *(float *)&(this_ptr->base).base.base.base.field_0x2a8 - delta_time;
  *(float *)&(this_ptr->base).base.base.base.field_0x2a8 = fVar11;
  if (fVar11 <= 0.0) {
    iVar2 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCStack_1c);
    if (iVar2 != 0) {
      core_xform_cpp_transformVector3x4_FUN_00591530
                ((CVector3f *)&DAT_0265370c,
                 (this_ptr->base).base.base.model.bone_transform.bone_model_matrices +
                 this_ptr->spine_bone,&CStack_6c);
      afStack_b0[2] = CStack_6c.x;
      afStack_b0[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_6c + (uint)bVar10 * -8 + 4);
      afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           *(float *)((int)&CStack_6c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      iVar2 = 0;
      *(uint *)&(this_ptr->base).base.base.base.field_0x2a8 = 0x3d4ccccd;
      pCStack_18 = pCStack_1c;
      do {
        iVar3 = core_bwgrndma_cpp_shouldSpawnParticle_FUN_005a7ed0();
        if (iVar3 != 0) {
          fStack_38 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_38;
          fStack_3c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_3c;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          core_xform_cpp_quaternionFromAngleZ_FUN_00594020(fStack_14,&CStack_f4);
          quat2_in_00 = &CStack_c4;
          CStack_c4.w = CStack_f4.w;
          puVar8 = (uint *)((int)&CStack_c4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          puVar6 = (uint *)((int)&CStack_f4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          *(uint *)((int)&CStack_c4 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_f4 + (uint)bVar10 * -8 + 4);
          *puVar8 = *puVar6;
          puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(fStack_3c,&CStack_144);
          quat2_in = &CStack_104;
          CStack_104.w = CStack_144.w;
          puVar8 = (uint *)((int)&CStack_104 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          puVar6 = (uint *)((int)&CStack_144 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          *(uint *)((int)&CStack_104 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_144 + (uint)bVar10 * -8 + 4);
          *puVar8 = *puVar6;
          puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fStack_38,&CStack_134);
          CStack_114.w = CStack_134.w;
          puVar8 = (uint *)((int)&CStack_114 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          puVar6 = (uint *)((int)&CStack_134 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_134 + (uint)bVar10 * -8 + 4);
          *puVar8 = *puVar6;
          puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(&CStack_114,quat2_in,&CStack_154);
          CStack_e4.w = CStack_154.w;
          puVar8 = (uint *)((int)&CStack_e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          puVar6 = (uint *)((int)&CStack_154 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          *(uint *)((int)&CStack_e4 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_154 + (uint)bVar10 * -8 + 4);
          *puVar8 = *puVar6;
          puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(&CStack_e4,quat2_in_00,&CStack_124);
          CStack_d4.w = CStack_124.w;
          puVar8 = (uint *)((int)&CStack_d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          puVar6 = (uint *)((int)&CStack_124 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          *(uint *)((int)&CStack_d4 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_124 + (uint)bVar10 * -8 + 4);
          *puVar8 = *puVar6;
          puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_d4,&CStack_184);
          matrix = &CStack_1b4;
          pCVar7 = &CStack_184;
          pCVar9 = &CStack_1b4;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            pCVar9->m[0].w = pCVar7->m[0].w;
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
            pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
          }
          CStack_54.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
          CStack_54.x = 0.0;
          CStack_54.z = 0.0;
          fStack_34 = CStack_54.y;
          fStack_14 = CStack_54.y;
          core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_54,matrix,&CStack_84);
          CStack_90.x = 0.0;
          CStack_90.y = 5.0;
          CStack_90.z = 0.0;
          fStack_b4 = CStack_84.x;
          afStack_b0[(uint)bVar10 * -2] = *(float *)((int)&CStack_84 + (uint)bVar10 * -8 + 4);
          afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               *(float *)((int)&CStack_84 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          iVar3 = 0;
          acceleration = &CStack_90;
          fStack_78 = fStack_b4 + afStack_b0[2];
          afStack_74[0] = afStack_b0[0] + afStack_b0[3];
          afStack_74[1] = afStack_b0[1] + fStack_a0;
          CStack_48.x = fStack_b4 + afStack_b0[2];
          *(float *)((int)&CStack_48 + (uint)bVar10 * -8 + 4) = afStack_74[(uint)bVar10 * -2];
          *(float *)((int)&CStack_48 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          velocity = &CStack_9c;
          position_offset = &CStack_48;
          fStack_60 = CStack_48.x - afStack_b0[2];
          blue = 0.0;
          afStack_5c[0] = CStack_48.y - afStack_b0[3];
          fVar12 = 0.2;
          afStack_5c[1] = CStack_48.z - fStack_a0;
          fVar11 = 0.0;
          CStack_9c.x = CStack_48.x - afStack_b0[2];
          *(float *)((int)&CStack_9c + (uint)bVar10 * -8 + 4) = afStack_5c[(uint)bVar10 * -2];
          *(float *)((int)&CStack_9c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               afStack_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          fVar11 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar11,fVar12);
          fStack_14 = fVar11;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCStack_18,1.0,1.0,0.0,0.7,0.0,fStack_14,fVar11,blue,position_offset,velocity,
                     acceleration,iVar3);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x14);
    }
  }
  pCVar4 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar4 != (CDemonActor *)0x0) {
    pSVar5 = &(this_ptr->base).state_machine;
    iVar2 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar5,"Chasing");
    if (iVar2 != 0) {
      iVar2 = core_muzzle_cpp_SStateMachine_isRefStateTarget_FUN_0059dae0
                        (pSVar5,"ChaseComplete","RangeAttack");
      if (iVar2 != 0) {
        pCVar1 = (this_ptr->base).base.victim;
        fVar12 = (pCVar1->base).location.position.x -
                 (this_ptr->base).base.base.base.location.position.x;
        fVar11 = (pCVar1->base).location.position.z -
                 (this_ptr->base).base.base.base.location.position.z;
        fVar11 = SQRT(fVar12 * fVar12 + fVar11 * fVar11);
        if (fVar11 < _DAT_005fedb0) {
          (this_ptr->base).attack_range = fVar11;
          return;
        }
      }
    }
  }
  return;
}
