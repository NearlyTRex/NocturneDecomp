// Name: core_pendulum.cpp_FUN_00549b90
// Address: 00549b90
// Address Range: [[00549b90, 0054a175]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_00549b90()

#include "nocturne.h"

/* Signature: byte actors_other_pendulum.cpp_FUN_00549b90(uint param_1, uint
   param_2) */

void core_pendulum_cpp_FUN_00549b90(void)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  int extraout_EBX;
  CDemonActor *this_ptr;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_68;
  float local_64;
  float local_60;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_38;
  ulonglong local_24;
  uint local_1c;
  float local_14;
  
  local_24 = (double)*(float *)(in_stack_00000004 + 0x3a0);
  dVar8 = crt_math_c_floor_FUN_005feb90(local_24);
  local_24._4_4_ = SUB84(dVar8,0);
  local_1c = (uint)((ulonglong)dVar8 >> 0x20);
  *(float *)(extraout_EBX + 0x3a0) =
       in_stack_00000008 / *(float *)(extraout_EBX + 0x3a4) + *(float *)(extraout_EBX + 0x3a0);
  if ((*(int *)(extraout_EBX + 0x43c) != 0) && (1.0 < *(float *)(extraout_EBX + 0x3a0))) {
    *(float *)(extraout_EBX + 0x3a0) = *(float *)(extraout_EBX + 0x3a0) + 0.5f;
  }
  dVar8 = crt_math_c_floor_FUN_005feb90((double)*(float *)(extraout_EBX + 0x3a0));
  local_24._0_4_ = SUB84(dVar8,0);
  local_24._4_4_ = (uint)((ulonglong)dVar8 >> 0x20);
  fVar4 = (float10)this_ptr[2].field13_0xec.y - (float10)dVar8;
  this_ptr[2].field13_0xec.y = (float)fVar4;
  fVar5 = (float10)fsin(fVar4 * (float10)2 * (float10)3.1415926535000001);
  fVar1 = (float)this_ptr[2].field14_0xf8;
  fVar6 = (float10)(float)this_ptr[3].location.area_id + (float10)in_stack_00000008;
  fVar2 = this_ptr[3].location.position.z;
  fVar7 = (float10)-1;
  this_ptr[3].location.area_id = (int)(float)fVar6;
  fVar4 = (float10)1;
  fVar7 = (float10)1.4426950408889634 * fVar6 * (float10)fVar2 * fVar7;
  fVar6 = (float10)f2xm1(fVar7 - (fVar7 / fVar4) * fVar4);
  fVar4 = (float10)fscale(fVar6 + fVar4,fVar7);
  (this_ptr->orient).heading = (float)(fVar4 * fVar5 * (float10)fVar1);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr);
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (this_ptr,&local_38,(CVector3f *)(this_ptr[3].actor_name + 8));
  if ((CVector3f *)(this_ptr[3].actor_name + 0x14) != pCVar3) {
    ((CVector3f *)(this_ptr[3].actor_name + 0x14))->x = pCVar3->x;
    *(float *)(this_ptr[3].actor_name + 0x18) = pCVar3->y;
    *(float *)(this_ptr[3].actor_name + 0x1c) = pCVar3->z;
  }
  fVar4 = (float10)1;
  fVar7 = (float10)1.4426950408889634 *
          (float10)this_ptr[3].location.position.z * (float10)-1 *
          (float10)(float)this_ptr[3].location.area_id;
  fVar5 = (float10)f2xm1(fVar7 - (fVar7 / fVar4) * fVar4);
  fVar4 = (float10)fscale(fVar5 + fVar4,fVar7);
  if ((0.0 < in_stack_00000008) && ((float)0.10000000000000001 < (float)fVar4)) {
    local_50 = local_4c;
    local_48 = this_ptr[2].field13_0xec.y;
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
        (*this_ptr->vtable->playSound)(this_ptr,(char *)&this_ptr[2].field22_0x120);
      }
    }
    local_14 = (float)this_ptr[2].field21_0x11c + (float)0.25;
    local_54 = local_44;
    local_64 = this_ptr[2].field13_0xec.y;
    if (local_44 < local_14 + (float)-0.5) {
      local_54 = local_44 + 1.0;
    }
    if (local_14 + (float)0.5 < local_54) {
      local_54 = local_54 + -1.0f;
    }
    if (local_54 <= local_14) {
      if (local_64 < local_54) {
        local_64 = local_64 + 1.0;
      }
      if (local_64 < local_54) {
        local_64 = local_64 + 1.0;
      }
      if (local_54 + 1.0 < local_64) {
        local_64 = local_64 + -1.0f;
      }
      if (local_54 + 1.0 < local_64) {
        local_64 = local_64 + -1.0f;
      }
      if (local_14 < local_64) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                  (g_CSoundPtr,this_ptr,(char *)&this_ptr[2].is_transparent,
                   (CVector3f *)(this_ptr[3].actor_name + 0x14));
      }
    }
    local_4c = local_44;
    local_60 = this_ptr[2].field13_0xec.y;
    if (local_44 < 0.0) {
      local_4c = local_44 + 1.0;
    }
    if ((float)0.5 + 0.5 < local_4c) {
      local_4c = local_4c + -1.0f;
    }
    if (local_4c <= 0.5) {
      if (local_60 < local_4c) {
        local_60 = local_60 + 1.0;
      }
      if (local_60 < local_4c) {
        local_60 = local_60 + 1.0;
      }
      if (local_4c + 1.0 < local_60) {
        local_60 = local_60 + -1.0f;
      }
      if (local_4c + 1.0 < local_60) {
        local_60 = local_60 + -1.0f;
      }
      if (0.5 < local_60) {
        (*this_ptr->vtable->playSound)
                  (this_ptr,(char *)&this_ptr[2].previous_transform_state.dirty_flags);
      }
    }
    local_38.x = (float)this_ptr[2].field21_0x11c + (float)0.75;
    local_50 = local_44;
    local_68 = this_ptr[2].field13_0xec.y;
    if (local_44 < local_38.x + (float)-0.5) {
      local_50 = local_44 + 1.0;
    }
    if (local_38.x + (float)0.5 < local_50) {
      local_50 = local_50 + -1.0f;
    }
    if (local_50 <= local_38.x) {
      if (local_68 < local_50) {
        local_68 = local_68 + 1.0;
      }
      if (local_68 < local_50) {
        local_68 = local_68 + 1.0;
      }
      if (local_50 + 1.0 < local_68) {
        local_68 = local_68 + -1.0f;
      }
      if (local_50 + 1.0 < local_68) {
        local_68 = local_68 + -1.0f;
      }
      if (local_38.x < local_68) {
        local_14 = local_38.x;
        core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                  (g_CSoundPtr,this_ptr,(char *)&this_ptr[2].is_transparent,
                   (CVector3f *)(this_ptr[3].actor_name + 0x14));
        return;
      }
    }
  }
  return;
}
