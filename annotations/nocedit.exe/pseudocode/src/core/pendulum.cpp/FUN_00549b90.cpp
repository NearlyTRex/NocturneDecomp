// Name: core_pendulum.cpp_FUN_00549b90
// Address: 00549b90
// Address Range: [[00549b90, 0054a175]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_00549b90()

#include "nocturne.h"

/* Signature: byte actors_other_pendulum.cpp_FUN_00549b90(uint param_1, uint
   param_2) */

void core_pendulum_cpp_FUN_00549b90(uint param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  CDemonActor *in_stack_00000004;
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
  
  dVar10 = (double)in_stack_00000004[2].field13_0xec.y;
  local_24._4_4_ = (uint)((ulonglong)dVar10 >> 0x20);
  uVar3 = local_24._4_4_;
  local_24 = dVar10;
  dVar10 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  local_1c = uVar3;
  fVar2 = in_stack_00000004[3].orient.bank;
  in_stack_00000004[2].field13_0xec.y =
       in_stack_00000008 / in_stack_00000004[2].field13_0xec.z + in_stack_00000004[2].field13_0xec.y
  ;
  uVar4 = param_1;
  if (fVar2 != 0.0) {
    fVar2 = in_stack_00000004[2].field13_0xec.y;
    uVar4 = CONCAT22 /* combine 2-byte values */((short)((uint)param_1 >> 0x10),
                     (ushort)(1.0 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
                     (ushort)(fVar2 == 1.0) << 0xe);
    if (1.0 < fVar2) {
      in_stack_00000004[2].field13_0xec.y = in_stack_00000004[2].field13_0xec.y + 0.5f;
    }
  }
  local_24._4_4_ = param_1;
  crt_math_c_floor_FUN_005feb90(dVar10);
  fVar6 = (float10)in_stack_00000004[2].field13_0xec.y - (float10)(double)CONCAT44 /* combine 2-byte values */(uVar3,uVar4);
  in_stack_00000004[2].field13_0xec.y = (float)fVar6;
  fVar7 = (float10)fsin(fVar6 * (float10)2 * (float10)3.1415926535000001);
  fVar2 = (float)in_stack_00000004[2].field14_0xf8;
  fVar8 = (float10)(float)in_stack_00000004[3].location.area_id + (float10)in_stack_00000008;
  fVar1 = in_stack_00000004[3].location.position.z;
  fVar9 = (float10)-1;
  in_stack_00000004[3].location.area_id = (int)(float)fVar8;
  fVar6 = (float10)1;
  fVar9 = (float10)1.4426950408889634 * fVar8 * (float10)fVar1 * fVar9;
  fVar8 = (float10)f2xm1(fVar9 - (fVar9 / fVar6) * fVar6);
  fVar6 = (float10)fscale(fVar8 + fVar6,fVar9);
  (in_stack_00000004->orient).heading = (float)(fVar6 * fVar7 * (float10)fVar2);
  local_24._0_4_ = (float)uVar4;
  local_24._4_4_ = uVar3;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,&local_34,(CVector3f *)(in_stack_00000004[3].actor_name + 8)
                     );
  if ((CVector3f *)(in_stack_00000004[3].actor_name + 0x14) != pCVar5) {
    ((CVector3f *)(in_stack_00000004[3].actor_name + 0x14))->x = pCVar5->x;
    *(float *)(in_stack_00000004[3].actor_name + 0x18) = pCVar5->y;
    *(float *)(in_stack_00000004[3].actor_name + 0x1c) = pCVar5->z;
  }
  fVar6 = (float10)1;
  fVar9 = (float10)1.4426950408889634 *
          (float10)in_stack_00000004[3].location.position.z * (float10)-1 *
          (float10)(float)in_stack_00000004[3].location.area_id;
  fVar7 = (float10)f2xm1(fVar9 - (fVar9 / fVar6) * fVar6);
  fVar6 = (float10)fscale(fVar7 + fVar6,fVar9);
  if ((0.0 < in_stack_00000008) && ((float)0.10000000000000001 < (float)fVar6)) {
    local_48 = local_44;
    local_40 = in_stack_00000004[2].field13_0xec.y;
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
        (*in_stack_00000004->vtable->playSound)
                  (in_stack_00000004,(char *)&in_stack_00000004[2].field22_0x120);
      }
    }
    fStack_28 = (float)in_stack_00000004[2].field21_0x11c + (float)0.25;
    local_40 = local_34.y;
    local_50 = in_stack_00000004[2].field13_0xec.y;
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
                  (g_CSoundPtr,in_stack_00000004,(char *)&in_stack_00000004[2].is_transparent,
                   (CVector3f *)(in_stack_00000004[3].actor_name + 0x14));
      }
    }
    local_38 = local_34.y;
    local_4c = in_stack_00000004[2].field13_0xec.y;
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
        (*in_stack_00000004->vtable->playSound)
                  (in_stack_00000004,
                   (char *)&in_stack_00000004[2].previous_transform_state.dirty_flags);
      }
    }
    local_24._0_4_ = (float)in_stack_00000004[2].field21_0x11c + (float)0.75;
    local_3c = local_34.y;
    local_54 = in_stack_00000004[2].field13_0xec.y;
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
                  (g_CSoundPtr,in_stack_00000004,(char *)&in_stack_00000004[2].is_transparent,
                   (CVector3f *)(in_stack_00000004[3].actor_name + 0x14));
        return;
      }
    }
  }
  return;
}
