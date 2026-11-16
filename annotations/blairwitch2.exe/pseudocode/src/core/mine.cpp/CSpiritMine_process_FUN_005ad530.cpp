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
  uint *puVar3;
  CMatrix3x4f *pCVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  CSpiritMine *apCStackY_18ac [1462];
  float fVar10;
  float fVar11;
  float blue;
  CVector3f *position_offset;
  CVector3f *velocity;
  CVector3f *acceleration;
  float texture_index;
  CSpiritMine *pCStack_174;
  CSpiritMine *pCStack_170;
  SDamageInfo SStack_16c;
  CMatrix3x4f CStack_130;
  CMatrix3x4f CStack_100;
  CQuaternion4f CStack_d0;
  CQuaternion4f CStack_c0;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f aCStack_5c [2];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  CSimpleParticleSystem *pCStack_18;
  float fStack_14;
  
  bVar7 = 0;
  pCStack_18 = (this_ptr->base).base.particle_systems;
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180(pCStack_18,delta_time);
  core_boxactor_cpp_CBoxActor_process_FUN_0041c090(&this_ptr->base,delta_time);
  core_mine_cpp_FUN_005ad940();
  this_ptr_00 = pCStack_18;
  iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  fVar10 = (this_ptr->base).base.location.position.x - *(float *)(iVar2 + 0x20);
  fVar11 = (this_ptr->base).base.location.position.z - *(float *)(iVar2 + 0x28);
  fStack_20 = SQRT(fVar11 * fVar11 + fVar10 * fVar10);
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
          fVar10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
          fVar8 = (float10)fcos((float10)fStack_2c);
          fVar9 = (float10)fsin((float10)fStack_2c);
          CStack_b0.y = 0.0;
          CStack_b0.z = (float)(fVar8 * (float10)fVar10);
          CStack_b0.x = (float)(fVar9 * (float10)fVar10);
          fStack_14 = CStack_b0.z;
          CStack_80.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.0,6.0);
          CStack_80.x = 0.0;
          CStack_80.z = 0.0;
          fStack_24 = CStack_80.y;
          fStack_14 = CStack_80.y;
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (this_ptr_00,3.0,0.5,0.0,0.5,0.0,0.12,0.66,0.63,&CStack_b0,&CStack_80,
                     (CVector3f *)0x0,0);
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
    fVar10 = this_ptr->emit_timer - delta_time;
    this_ptr->effect_timer = this_ptr->effect_timer - delta_time;
    this_ptr->emit_timer = fVar10;
    if (fVar10 <= 0.0) {
      this_ptr->emit_timer = 0.5;
      fStack_34 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
      fStack_14 = fStack_34;
      fStack_38 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
      fStack_14 = fStack_38;
      aCStack_5c[0].z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
      aCStack_5c[0].x = fStack_34;
      aCStack_5c[0].y = fStack_38;
      fStack_3c = aCStack_5c[0].z;
      fStack_14 = aCStack_5c[0].z;
      core_xform_cpp_eulerToQuaternion_FUN_00594380(aCStack_5c,&CStack_d0);
      CStack_c0.w = CStack_d0.w;
      puVar5 = (uint *)((int)&CStack_c0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      puVar3 = (uint *)((int)&CStack_d0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(uint *)((int)&CStack_c0 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_d0 + (uint)bVar7 * -8 + 4);
      *puVar5 = *puVar3;
      puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
      core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_c0,&CStack_130);
      pCVar4 = &CStack_130;
      pCVar6 = &CStack_100;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar6->m[0].w = pCVar4->m[0].w;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
      }
      CStack_a4.x = 0.0;
      CStack_a4.y = 0.0;
      CStack_a4.z = 1.0;
      core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_a4,&CStack_100,&CStack_74);
      texture_index = 4.2039e-45;
      CStack_98.x = 0.0;
      CStack_98.z = 0.0;
      acceleration = &CStack_98;
      velocity = &CStack_8c;
      position_offset = &CStack_68;
      CStack_98.y = 1.0;
      CStack_68.x = CStack_74.x;
      *(uint *)((int)aCStack_5c + (uint)bVar7 * -8 + -8) =
           *(uint *)((int)&CStack_74 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)aCStack_5c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4) =
           *(uint *)((int)&CStack_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      blue = 0.65;
      fVar11 = 0.9;
      fVar10 = 0.7;
      CStack_8c.x = CStack_74.x;
      *(uint *)((int)&CStack_8c + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_74 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_8c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar10,fVar11);
      core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                (pCStack_18,2.0,this_ptr->effect_timer / this_ptr->effect_time,0.0,0.5,2.0,0.52,
                 fStack_14,blue,position_offset,velocity,acceleration,(int)texture_index);
    }
    if (fStack_20 <= this_ptr->trigger_radius) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffe58);
      pCStack_174 = this_ptr;
      pCStack_170 = this_ptr;
      (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x110))();
      return;
    }
  }
  return;
}
