// Name: core_chain.cpp_FUN_004300d0
// Address: 004300d0
// Address Range: [[004300d0, 004308ed]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_004300d0()

#include "nocturne.h"

/* Signature: byte actors_other_chain.cpp_FUN_004300d0(uint param_1, uint param_2)
    */

void core_chain_cpp_FUN_004300d0(void)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  uint *puVar4;
  float *pfVar5;
  CVector3f *pCVar6;
  CDemonActor **ppCVar7;
  CDemonActor *pCVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  COrientation *pCVar10;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float fVar11;
  float in_stack_ffffff24;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  int local_60;
  uint local_5c;
  uint local_58;
  float local_54;
  CVector3f *local_50;
  float local_4c;
  float *local_44;
  CDemonActor *local_40;
  float local_3c;
  char *local_38;
  uint local_34;
  CVector3f *local_30;
  float *local_2c;
  int local_28;
  CLocation *local_24;
  int *local_20;
  CVector3f *local_1c;
  float *pfStack_18;
  float *pfStack_14;
  
  if (*(float *)(in_stack_00000004[4].actor_name + 0xc) < -9900f) {
    fVar11 = (*in_stack_00000004->vtable->cylinderGroundCheck)
                       (in_stack_00000004,0.1,(CVector3f *)0x0);
    *(float *)(in_stack_00000004[4].actor_name + 0xc) = fVar11;
  }
  if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
    pCVar8 = in_stack_00000004 + 2;
    for (iVar9 = 0; iVar9 < *(int *)in_stack_00000004[1].actor_name + -1; iVar9 = iVar9 + 1) {
      local_78 = pCVar8[-1].previous_transform_state.orientation.x - *(float *)pCVar8->actor_name;
      local_74 = pCVar8[-1].previous_transform_state.orientation.y -
                 *(float *)(pCVar8->actor_name + 4);
      local_70 = pCVar8[-1].previous_transform_state.orientation.z -
                 *(float *)(pCVar8->actor_name + 8);
      pCVar8 = (CDemonActor *)&(pCVar8->location).position.y;
    }
  }
  piVar1 = &(&in_stack_00000004[1].scale)[*(int *)in_stack_00000004[1].actor_name * 3].z;
  *(float *)(in_stack_00000004[4].actor_name + 0x10) = 1.0 / in_stack_00000008;
  local_60 = *piVar1;
  local_5c = piVar1[1];
  local_58 = piVar1[2];
  piVar1 = (int *)core_chain_cpp_FUN_0042fcc0();
  piVar2 = &(&in_stack_00000004[1].scale)[*(int *)in_stack_00000004[1].actor_name * 3].z;
  if (piVar2 != piVar1) {
    *piVar2 = *piVar1;
    piVar2[1] = piVar1[1];
    piVar2[2] = piVar1[2];
  }
  iVar9 = *(int *)in_stack_00000004[1].actor_name;
  pCVar6 = &in_stack_00000004[1].previous_transform_state.orientation;
  (&in_stack_00000004[1].field23_0x124)[iVar9 * 9] = 0;
  (&in_stack_00000004[1].field22_0x120)[iVar9 * 9] =
       (&in_stack_00000004[1].field23_0x124)[iVar9 * 9];
  (&in_stack_00000004[1].field21_0x11c)[iVar9 * 9] =
       (&in_stack_00000004[1].field22_0x120)[iVar9 * 9];
  if ((CLocation *)pCVar6 != &in_stack_00000004->location) {
    pCVar6->x = (in_stack_00000004->location).position.x;
    in_stack_00000004[1].previous_transform_state.orientation.y =
         (in_stack_00000004->location).position.y;
    in_stack_00000004[1].previous_transform_state.orientation.z =
         (in_stack_00000004->location).position.z;
  }
  in_stack_00000004[1].field26_0x148 = 0;
  in_stack_00000004[1].field25_0x144 = in_stack_00000004[1].field26_0x148;
  in_stack_00000004[1].previous_transform_state.dirty_flags = in_stack_00000004[1].field25_0x144;
  local_50 = &in_stack_00000004[1].previous_transform_state.orientation;
  local_38 = in_stack_00000004[4].actor_name + 8;
  local_2c = &in_stack_00000004[2].location.position.y;
  pCVar10 = (COrientation *)(in_stack_00000004[2].actor_name + 0xc);
  local_30 = local_50;
  for (local_28 = 1; local_28 < *(int *)in_stack_00000004[1].actor_name + -1;
      local_28 = local_28 + 0x24) {
    pCVar10->pitch = *(float *)local_38 * pCVar10->pitch;
    pCVar10->bank = *(float *)local_38 * pCVar10->bank;
    pCVar10->heading = *(float *)local_38 * pCVar10->heading;
    local_3c = (float)in_stack_00000004[3].vtable * (float)0.03125;
    local_b0 = (1.0 / local_3c) * 0.0;
    local_ac = (0.0 - (float)in_stack_00000004[3].vtable) * (1.0 / local_3c);
    pCVar6 = local_50 + local_28 * 3;
    if (&local_c8 != &local_b0) {
      local_c8 = local_b0;
      local_c4 = local_ac;
      local_c0 = local_b0;
    }
    local_80 = local_c8 * in_stack_00000008;
    local_7c = local_c4 * in_stack_00000008;
    local_78 = local_c0 * in_stack_00000008;
    local_8c = pCVar6[1].x + local_80;
    pCVar6[1].x = local_8c;
    local_8c = local_8c * in_stack_00000008;
    *(float *)((int)(pCVar6 + 1) + 4) = *(float *)((int)(pCVar6 + 1) + 4) + local_7c;
    *(float *)((int)(pCVar6 + 1) + 8) = *(float *)((int)(pCVar6 + 1) + 8) + local_78;
    local_88 = *(float *)((int)(pCVar6 + 1) + 4) * in_stack_00000008;
    local_84 = in_stack_00000008 * *(float *)((int)(pCVar6 + 1) + 8);
    pCVar6->x = pCVar6->x + local_8c;
    pCVar6->y = pCVar6->y + local_88;
    pCVar6->z = pCVar6->z + local_84;
    fStack_a8 = local_b0;
    core_chain_cpp_FUN_0042fed0();
    core_chain_cpp_FUN_0042fed0();
    pCVar10 = pCVar10 + 3;
    local_24 = (CLocation *)((int)local_24 + 0x24);
    local_20 = (int *)((int)local_20 + 1);
  }
  local_20 = &in_stack_00000004[1].previous_transform_state.dirty_flags;
  local_1c = &in_stack_00000004[1].previous_transform_state.orientation;
  local_24 = &in_stack_00000004->location;
  local_44 = &in_stack_00000004[2].location.position.y;
  local_40 = in_stack_00000004 + 2;
  local_34 = 0;
  do {
    pfVar3 = (float *)core_chain_cpp_FUN_0042fcc0();
    pfVar5 = pfStack_18 + (*(int *)in_stack_00000004[1].actor_name + -1) * 9;
    if (pfVar5 != pfVar3) {
      *pfVar5 = *pfVar3;
      pfVar5[1] = pfVar3[1];
      pfVar5[2] = pfVar3[2];
    }
    iVar9 = *(int *)in_stack_00000004[1].actor_name + -1;
    pfStack_18[iVar9 * 9 + 5] = 0.0;
    pfStack_18[iVar9 * 9 + 4] = pfStack_18[iVar9 * 9 + 5];
    pfStack_18[iVar9 * 9 + 3] = pfStack_18[iVar9 * 9 + 4];
    if (pfStack_18 != (float *)local_20) {
      *pfStack_18 = (float)*local_20;
      pfStack_18[1] = (float)local_20[1];
      pfStack_18[2] = (float)local_20[2];
    }
    local_1c->z = 0.0;
    local_1c->y = local_1c->z;
    local_1c->x = local_1c->y;
    pfStack_14 = pfStack_18;
    while (1 < *(int *)in_stack_00000004[1].actor_name + -1) {
      core_chain_cpp_FUN_0042fed0();
      core_chain_cpp_FUN_0042fed0();
    }
    pfVar3 = (float *)core_chain_cpp_FUN_0042fcc0();
    pfVar5 = pfStack_14 + (*(int *)in_stack_00000004[1].actor_name + -1) * 9;
    if (pfVar5 != pfVar3) {
      *pfVar5 = *pfVar3;
      pfVar5[1] = pfVar3[1];
      pfVar5[2] = pfVar3[2];
    }
    iVar9 = *(int *)in_stack_00000004[1].actor_name + -1;
    pfStack_14[iVar9 * 9 + 5] = 0.0;
    pfStack_14[iVar9 * 9 + 4] = pfStack_14[iVar9 * 9 + 5];
    pfStack_14[iVar9 * 9 + 3] = pfStack_14[iVar9 * 9 + 4];
    if ((CVector3f *)pfStack_14 != local_1c) {
      *pfStack_14 = local_1c->x;
      pfStack_14[1] = local_1c->y;
      pfStack_14[2] = local_1c->z;
    }
    pfStack_18[2] = 0.0;
    pfStack_18[1] = pfStack_18[2];
    *pfStack_18 = pfStack_18[1];
    local_2c = (float *)((int)local_2c + 1);
  } while ((int)local_2c < 3);
  iVar9 = 0;
  if (0 < *(int *)in_stack_00000004[1].actor_name) {
    ppCVar7 = &in_stack_00000004[1].next_actor;
    do {
      puVar4 = (uint *)
               ((int)&in_stack_00000004[1].previous_transform_state + iVar9 * 0x24 + 0xc);
      if (ppCVar7 != (CDemonActor **)puVar4) {
        *ppCVar7 = (CDemonActor *)*puVar4;
        ppCVar7[1] = (CDemonActor *)puVar4[1];
        ppCVar7[2] = (CDemonActor *)puVar4[2];
      }
      iVar9 = iVar9 + 1;
      ppCVar7 = ppCVar7 + 9;
    } while (iVar9 < *(int *)in_stack_00000004[1].actor_name);
  }
  local_44 = (float *)0x0;
  local_40 = (CDemonActor *)0x0;
  if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
    if (in_stack_ffffff24 < *(float *)(in_stack_00000004[1].actor_name + 4) * (float)0.90000000000000002
       ) {
      pCVar8 = in_stack_00000004 + 2;
      fVar11 = 0.0;
      for (iVar9 = 0; iVar9 < *(int *)in_stack_00000004[1].actor_name + -1; iVar9 = iVar9 + 1) {
        local_b4 = pCVar8[-1].previous_transform_state.orientation.x - *(float *)pCVar8->actor_name;
        local_b0 = pCVar8[-1].previous_transform_state.orientation.y -
                   *(float *)(pCVar8->actor_name + 4);
        local_ac = pCVar8[-1].previous_transform_state.orientation.z -
                   *(float *)(pCVar8->actor_name + 8);
        pCVar8 = (CDemonActor *)&(pCVar8->location).position.y;
        fVar11 = SQRT(local_ac * local_ac + local_b4 * local_b4 + local_b0 * local_b0) + fVar11;
      }
      if (*(float *)(in_stack_00000004[1].actor_name + 4) * (float)0.90000000000000002 < fVar11) {
        local_40 = (CDemonActor *)0x1;
      }
    }
    iVar9 = *(int *)in_stack_00000004[1].actor_name;
    local_90 = local_54 - (float)(&in_stack_00000004[1].scale)[iVar9 * 3].z;
    local_8c = (float)local_50 - (float)(&in_stack_00000004[1].field19_0x114)[iVar9 * 9];
    local_88 = local_4c - (float)(&in_stack_00000004[1].field20_0x118)[iVar9 * 9];
    if (in_stack_00000008 * (float)0.10000000000000001 <
        SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c)) {
      local_44 = (float *)0x1;
    }
  }
  if ((local_40 != (CDemonActor *)0x0) &&
     (*(char *)&in_stack_00000004[1].orient_matrix.m[2].z != '\0')) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40
              ((uint)in_stack_00000004[1].previous_transform_state.position.x);
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[1].create_event + 0x48));
    if (iVar9 == 0) {
      fVar11 = (float)core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                                (g_CSoundPtr,in_stack_00000004,
                                 (char *)&in_stack_00000004[1].orient_matrix.m[2].z,
                                 (CVector3f *)
                                 &(&in_stack_00000004[1].scale)
                                  [*(int *)in_stack_00000004[1].actor_name * 3].z);
      in_stack_00000004[1].previous_transform_state.position.x = fVar11;
    }
  }
  in_stack_00000004[1].previous_transform_state.position.y =
       in_stack_00000004[1].previous_transform_state.position.y - in_stack_00000008;
  if (local_38 == (char *)0x0) {
    if (0.0 <= in_stack_00000004[1].previous_transform_state.position.y) {
      return;
    }
    fVar11 = in_stack_00000004[1].previous_transform_state.position.x;
    in_stack_00000004[1].previous_transform_state.position.y = 0.0;
    sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)fVar11);
    return;
  }
  iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                    (*(uint *)(in_stack_00000004[1].create_event + 0x48));
  if (iVar9 == 0) {
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      ((uint)in_stack_00000004[1].previous_transform_state.position.x);
    if (iVar9 == 0) {
      fVar11 = (float)core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                                (g_CSoundPtr,in_stack_00000004,
                                 in_stack_00000004[1].create_event + 0x4c,
                                 (CVector3f *)
                                 &(&in_stack_00000004[1].scale)
                                  [*(int *)in_stack_00000004[1].actor_name * 3].z);
      in_stack_00000004[1].previous_transform_state.position.x = fVar11;
    }
  }
  in_stack_00000004[1].previous_transform_state.position.y = 0.5;
  return;
}
