// Name: core_pendulum.cpp_CPendulum_FUN_00549b90
// Address: 00549b90
// Address Range: [[00549b90, 0054a175]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_FUN_00549b90(CPendulum *this_ptr)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_FUN_00549b90(CPendulum *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  int extraout_EBX;
  CDemonActor *this_ptr_00;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  float in_stack_00000008;
  float fVar8;
  float local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_38;
  ulonglong local_24;
  float local_1c;
  
  local_24 = (double)this_ptr->param;
  dVar7 = floor(local_24);
  local_24._4_4_ = SUB84(dVar7,0);
  local_1c = (float)((ulonglong)dVar7 >> 0x20);
  *(float *)(extraout_EBX + 0x3a0) =
       in_stack_00000008 / *(float *)(extraout_EBX + 0x3a4) + *(float *)(extraout_EBX + 0x3a0);
  if ((*(int *)(extraout_EBX + 0x43c) != 0) && (1.0 < *(float *)(extraout_EBX + 0x3a0))) {
    *(float *)(extraout_EBX + 0x3a0) = *(float *)(extraout_EBX + 0x3a0) + 0.5f;
  }
  dVar7 = floor((double)*(float *)(extraout_EBX + 0x3a0));
  local_24._0_4_ = SUB84(dVar7,0);
  local_24._4_4_ = (uint)((ulonglong)dVar7 >> 0x20);
  fVar3 = (float10)this_ptr_00[2].platform_orientation_delta.y - (float10)dVar7;
  this_ptr_00[2].platform_orientation_delta.y = (float)fVar3;
  fVar4 = (float10)fsin(fVar3 * (float10)2 * (float10)3.1415926535000001);
  fVar8 = (float)this_ptr_00[2].is_renderable;
  fVar5 = (float10)(float)this_ptr_00[3].location.area_id + (float10)in_stack_00000008;
  fVar1 = this_ptr_00[3].location.position.z;
  fVar6 = (float10)-1;
  this_ptr_00[3].location.area_id = (int)(float)fVar5;
  fVar3 = (float10)1;
  fVar6 = (float10)1.4426950408889634 * fVar5 * (float10)fVar1 * fVar6;
  fVar5 = (float10)f2xm1(fVar6 - (fVar6 / fVar3) * fVar3);
  fVar3 = (float10)fscale(fVar5 + fVar3,fVar6);
  (this_ptr_00->orient).vec.z = (float)(fVar3 * fVar4 * (float10)fVar8);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr_00);
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (this_ptr_00,&local_38,(CVector3f *)(this_ptr_00[3].actor_name + 8));
  if ((CVector3f *)(this_ptr_00[3].actor_name + 0x14) != pCVar2) {
    ((CVector3f *)(this_ptr_00[3].actor_name + 0x14))->x = pCVar2->x;
    *(float *)(this_ptr_00[3].actor_name + 0x18) = pCVar2->y;
    *(float *)(this_ptr_00[3].actor_name + 0x1c) = pCVar2->z;
  }
  fVar3 = (float10)1;
  fVar6 = (float10)1.4426950408889634 *
          (float10)this_ptr_00[3].location.position.z * (float10)-1 *
          (float10)(float)this_ptr_00[3].location.area_id;
  fVar4 = (float10)f2xm1(fVar6 - (fVar6 / fVar3) * fVar3);
  fVar3 = (float10)fscale(fVar4 + fVar3,fVar6);
  if ((0.0 < in_stack_00000008) && ((float)0.10000000000000001 < (float)fVar3)) {
    local_50 = local_4c;
    local_48 = this_ptr_00[2].platform_orientation_delta.y;
    if (local_4c < (float)-0.5) {
      local_50 = local_4c + 1.0;
    }
    if ((float)0.5 + 0.0 < local_50) {
      local_50 = local_50 + -1.0f;
    }
    if (local_50 <= 0.0) {
      if (local_48 < local_50) {
        local_48 = local_48 + 1.0;
      }
      if (local_48 < local_50) {
        local_48 = local_48 + 1.0;
      }
      if (local_50 + 1.0 < local_48) {
        local_48 = local_48 + -1.0f;
      }
      if (local_50 + 1.0 < local_48) {
        local_48 = local_48 + -1.0f;
      }
      if (0.0 < local_48) {
        (*((this_ptr_00->vtable)._ub)->playSound)(this_ptr_00,(char *)&this_ptr_00[2].reserved1);
      }
    }
    local_1c = *(float *)this_ptr_00[2].footstep_sound_code + (float)0.25;
    local_5c = local_4c;
    fVar8 = this_ptr_00[2].platform_orientation_delta.y;
    if (local_4c < local_1c + (float)-0.5) {
      local_5c = local_4c + 1.0;
    }
    if (local_1c + (float)0.5 < local_5c) {
      local_5c = local_5c + -1.0f;
    }
    if (local_5c <= local_1c) {
      if (fVar8 < local_5c) {
        fVar8 = fVar8 + 1.0;
      }
      if (fVar8 < local_5c) {
        fVar8 = fVar8 + 1.0;
      }
      if (local_5c + 1.0 < fVar8) {
        fVar8 = fVar8 + -1.0f;
      }
      if (local_5c + 1.0 < fVar8) {
        fVar8 = fVar8 + -1.0f;
      }
      if (local_1c < fVar8) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                  (g_CSoundPtr,this_ptr_00,(char *)&this_ptr_00[2].is_transparent,
                   (CVector3f *)(this_ptr_00[3].actor_name + 0x14));
      }
    }
    local_54 = local_4c;
    local_68 = this_ptr_00[2].platform_orientation_delta.y;
    if (local_4c < 0.0) {
      local_54 = local_4c + 1.0;
    }
    if ((float)0.5 + 0.5 < local_54) {
      local_54 = local_54 + -1.0f;
    }
    if (local_54 <= 0.5) {
      if (local_68 < local_54) {
        local_68 = local_68 + 1.0;
      }
      if (local_68 < local_54) {
        local_68 = local_68 + 1.0;
      }
      if (local_54 + 1.0 < local_68) {
        local_68 = local_68 + -1.0f;
      }
      if (local_54 + 1.0 < local_68) {
        local_68 = local_68 + -1.0f;
      }
      if (0.5 < local_68) {
        (*((this_ptr_00->vtable)._ub)->playSound)
                  (this_ptr_00,(char *)&this_ptr_00[2].previous_transform_state.dirty_flags);
      }
    }
    local_1c = *(float *)this_ptr_00[2].footstep_sound_code + (float)0.75;
    local_58 = local_4c;
    fVar8 = this_ptr_00[2].platform_orientation_delta.y;
    if (local_4c < local_1c + (float)-0.5) {
      local_58 = local_4c + 1.0;
    }
    if (local_1c + (float)0.5 < local_58) {
      local_58 = local_58 + -1.0f;
    }
    if (local_58 <= local_1c) {
      if (fVar8 < local_58) {
        fVar8 = fVar8 + 1.0;
      }
      if (fVar8 < local_58) {
        fVar8 = fVar8 + 1.0;
      }
      if (local_58 + 1.0 < fVar8) {
        fVar8 = fVar8 + -1.0f;
      }
      if (local_58 + 1.0 < fVar8) {
        fVar8 = fVar8 + -1.0f;
      }
      if (local_1c < fVar8) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                  (g_CSoundPtr,this_ptr_00,(char *)&this_ptr_00[2].is_transparent,
                   (CVector3f *)(this_ptr_00[3].actor_name + 0x14));
        return;
      }
    }
  }
  return;
}
