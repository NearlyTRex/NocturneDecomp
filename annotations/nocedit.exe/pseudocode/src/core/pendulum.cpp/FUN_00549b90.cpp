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
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  CVector3f local_34;
  float fStack_28;
  ulonglong local_24;
  uint local_1c;
  
  local_24 = (double)*(float *)(in_stack_00000004 + 0x3a0);
  dVar8 = crt_math_c_floor_FUN_005feb90(local_24);
  local_24._4_4_ = SUB84 /* extract 2-byte value */(dVar8,0);
  local_1c = (uint)((ulonglong)dVar8 >> 0x20);
  *(float *)(extraout_EBX + 0x3a0) =
       in_stack_00000008 / *(float *)(extraout_EBX + 0x3a4) + *(float *)(extraout_EBX + 0x3a0);
  if ((*(int *)(extraout_EBX + 0x43c) != 0) && (1.0 < *(float *)(extraout_EBX + 0x3a0))) {
    *(float *)(extraout_EBX + 0x3a0) = *(float *)(extraout_EBX + 0x3a0) + 0.5f;
  }
  dVar8 = crt_math_c_floor_FUN_005feb90((double)*(float *)(extraout_EBX + 0x3a0));
  local_24._0_4_ = SUB84 /* extract 2-byte value */(dVar8,0);
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
                     (this_ptr,&local_34,(CVector3f *)(this_ptr[3].actor_name + 8));
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
    local_48 = local_44;
    local_40 = this_ptr[2].field13_0xec.y;
    local_34.x = 0.0;
    if (local_44 < (float)-0.5) {
      local_48 = local_44 + 1.0;
    }
    if ((float)0.5 + 0.0 < local_48) {
      local_48 = local_48 + -1f;
    }
    if (local_48 <= 0.0) {
      if (local_40 < local_48) {
        local_40 = local_40 + 1.0;
      }
      if (local_40 < local_48) {
        local_40 = local_40 + 1.0;
      }
      if (local_48 + 1.0 < local_40) {
        local_40 = local_40 + -1f;
      }
      if (local_48 + 1.0 < local_40) {
        local_40 = local_40 + -1f;
      }
      if (0.0 < local_40) {
        (*this_ptr->vtable->playSound)(this_ptr,(char *)&this_ptr[2].field22_0x120);
      }
    }
    fStack_28 = (float)this_ptr[2].field21_0x11c + (float)0.25;
    local_40 = local_34.y;
    local_50 = this_ptr[2].field13_0xec.y;
    if (local_34.y < fStack_28 + (float)-0.5) {
      local_40 = local_34.y + 1.0;
    }
    if (fStack_28 + (float)0.5 < local_40) {
      local_40 = local_40 + -1f;
    }
    if (local_40 <= fStack_28) {
      if (local_50 < local_40) {
        local_50 = local_50 + 1.0;
      }
      if (local_50 < local_40) {
        local_50 = local_50 + 1.0;
      }
      if (local_40 + 1.0 < local_50) {
        local_50 = local_50 + -1f;
      }
      if (local_40 + 1.0 < local_50) {
        local_50 = local_50 + -1f;
      }
      if (fStack_28 < local_50) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                  (g_CSoundPtr,this_ptr,(char *)&this_ptr[2].is_transparent,
                   (CVector3f *)(this_ptr[3].actor_name + 0x14));
      }
    }
    local_38 = local_34.y;
    local_4c = this_ptr[2].field13_0xec.y;
    if (local_34.y < 0.0) {
      local_38 = local_34.y + 1.0;
    }
    if ((float)0.5 + 0.5 < local_38) {
      local_38 = local_38 + -1f;
    }
    if (local_38 <= 0.5) {
      if (local_4c < local_38) {
        local_4c = local_4c + 1.0;
      }
      if (local_4c < local_38) {
        local_4c = local_4c + 1.0;
      }
      if (local_38 + 1.0 < local_4c) {
        local_4c = local_4c + -1f;
      }
      if (local_38 + 1.0 < local_4c) {
        local_4c = local_4c + -1f;
      }
      if (0.5 < local_4c) {
        (*this_ptr->vtable->playSound)
                  (this_ptr,(char *)&this_ptr[2].previous_transform_state.dirty_flags);
      }
    }
    local_24._0_4_ = (float)this_ptr[2].field21_0x11c + (float)0.75;
    local_3c = local_34.y;
    local_54 = this_ptr[2].field13_0xec.y;
    if (local_34.y < (float)local_24 + (float)-0.5) {
      local_3c = local_34.y + 1.0;
    }
    if ((float)local_24 + (float)0.5 < local_3c) {
      local_3c = local_3c + -1f;
    }
    if (local_3c <= (float)local_24) {
      if (local_54 < local_3c) {
        local_54 = local_54 + 1.0;
      }
      if (local_54 < local_3c) {
        local_54 = local_54 + 1.0;
      }
      if (local_3c + 1.0 < local_54) {
        local_54 = local_54 + -1f;
      }
      if (local_3c + 1.0 < local_54) {
        local_54 = local_54 + -1f;
      }
      if ((float)local_24 < local_54) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                  (g_CSoundPtr,this_ptr,(char *)&this_ptr[2].is_transparent,
                   (CVector3f *)(this_ptr[3].actor_name + 0x14));
        return;
      }
    }
  }
  return;
}
