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
  float fVar5;
  CVector3f *pCVar6;
  CDemonActor **ppCVar7;
  CDemonActor *pCVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  COrientation *pCVar10;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float local_ec;
  float local_e8;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f *local_54;
  int local_50;
  int local_4c;
  float *local_48;
  CDemonActor *local_44;
  float local_40;
  char *local_3c;
  int local_38;
  CVector3f *local_34;
  float *local_30;
  int local_2c;
  CLocation *local_28;
  int *local_24;
  CVector3f *local_20;
  CVector3f *local_1c;
  int iStack_18;
  
  if (*(float *)(in_stack_00000004[4].actor_name + 0xc) < -9900f) {
    in_stack_00000008 =
         (*in_stack_00000004->vtable->cylinderGroundCheck)(in_stack_00000004,0.1,(CVector3f *)0x0);
    *(float *)(in_stack_00000004[4].actor_name + 0xc) = in_stack_00000008;
  }
  if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
    pCVar8 = in_stack_00000004 + 2;
    local_e8 = 0.0;
    for (iVar9 = 0; iVar9 < *(int *)in_stack_00000004[1].actor_name + -1; iVar9 = iVar9 + 1) {
      local_78 = pCVar8[-1].previous_transform_state.orientation.x - *(float *)pCVar8->actor_name;
      local_74 = pCVar8[-1].previous_transform_state.orientation.y -
                 *(float *)(pCVar8->actor_name + 4);
      local_70 = pCVar8[-1].previous_transform_state.orientation.z -
                 *(float *)(pCVar8->actor_name + 8);
      pCVar8 = (CDemonActor *)&(pCVar8->location).position.y;
      local_e8 = SQRT(local_70 * local_70 + local_78 * local_78 + local_74 * local_74) + local_e8;
    }
  }
  piVar1 = &(&in_stack_00000004[1].scale)[*(int *)in_stack_00000004[1].actor_name * 3].z;
  *(float *)(in_stack_00000004[4].actor_name + 0x10) = 1.0 / in_stack_00000008;
  local_60 = (float)*piVar1;
  local_5c = (float)piVar1[1];
  local_58 = (float)piVar1[2];
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
  local_54 = &in_stack_00000004[1].previous_transform_state.orientation;
  local_3c = in_stack_00000004[4].actor_name + 8;
  local_30 = &in_stack_00000004[2].location.position.y;
  pCVar10 = (COrientation *)(in_stack_00000004[2].actor_name + 0xc);
  local_34 = local_54;
  for (local_2c = 1; local_2c < *(int *)in_stack_00000004[1].actor_name + -1;
      local_2c = local_2c + 1) {
    pCVar10->pitch = *(float *)local_3c * pCVar10->pitch;
    pCVar10->bank = *(float *)local_3c * pCVar10->bank;
    pCVar10->heading = *(float *)local_3c * pCVar10->heading;
    local_40 = (float)in_stack_00000004[3].vtable * (float)0.03125;
    local_b4 = (1.0 / local_40) * 0.0;
    local_b0 = (0.0 - (float)in_stack_00000004[3].vtable) * (1.0 / local_40);
    pCVar6 = local_54 + local_2c * 3;
    if (&local_cc != &local_b4) {
      local_cc = local_b4;
      local_c8 = local_b0;
      local_c4 = local_b4;
    }
    local_84 = local_cc * in_stack_00000008;
    local_80 = local_c8 * in_stack_00000008;
    local_7c = local_c4 * in_stack_00000008;
    local_90 = pCVar6[1].x + local_84;
    pCVar6[1].x = local_90;
    local_90 = local_90 * in_stack_00000008;
    *(float *)((int)(pCVar6 + 1) + 4) = *(float *)((int)(pCVar6 + 1) + 4) + local_80;
    *(float *)((int)(pCVar6 + 1) + 8) = *(float *)((int)(pCVar6 + 1) + 8) + local_7c;
    local_8c = *(float *)((int)(pCVar6 + 1) + 4) * in_stack_00000008;
    local_88 = in_stack_00000008 * *(float *)((int)(pCVar6 + 1) + 8);
    pCVar6->x = pCVar6->x + local_90;
    pCVar6->y = pCVar6->y + local_8c;
    pCVar6->z = pCVar6->z + local_88;
    local_ac = local_b4;
    core_chain_cpp_FUN_0042fed0();
    core_chain_cpp_FUN_0042fed0();
    pCVar10 = pCVar10 + 3;
    local_30 = local_30 + 9;
    local_34 = local_34 + 3;
  }
  local_24 = &in_stack_00000004[1].previous_transform_state.dirty_flags;
  local_20 = &in_stack_00000004[1].previous_transform_state.orientation;
  local_28 = &in_stack_00000004->location;
  local_48 = &in_stack_00000004[2].location.position.y;
  local_44 = in_stack_00000004 + 2;
  local_38 = 0;
  do {
    pfVar3 = (float *)core_chain_cpp_FUN_0042fcc0();
    pCVar6 = local_20 + (*(int *)in_stack_00000004[1].actor_name + -1) * 3;
    if (pCVar6 != (CVector3f *)pfVar3) {
      pCVar6->x = *pfVar3;
      pCVar6->y = pfVar3[1];
      pCVar6->z = pfVar3[2];
    }
    iVar9 = *(int *)in_stack_00000004[1].actor_name + -1;
    local_20[iVar9 * 3 + 1].z = 0.0;
    local_20[iVar9 * 3 + 1].y = local_20[iVar9 * 3 + 1].z;
    local_20[iVar9 * 3 + 1].x = local_20[iVar9 * 3 + 1].y;
    if ((CLocation *)local_20 != local_28) {
      local_20->x = (local_28->position).x;
      local_20->y = (local_28->position).y;
      local_20->z = (local_28->position).z;
    }
    local_24[2] = 0;
    iStack_18 = 1;
    local_24[1] = local_24[2];
    *local_24 = local_24[1];
    local_1c = local_20;
    for (; iStack_18 < *(int *)in_stack_00000004[1].actor_name + -1; iStack_18 = iStack_18 + 1) {
      core_chain_cpp_FUN_0042fed0();
      core_chain_cpp_FUN_0042fed0();
      local_1c = local_1c + 3;
    }
    pfVar3 = (float *)core_chain_cpp_FUN_0042fcc0();
    pCVar6 = local_20 + (*(int *)in_stack_00000004[1].actor_name + -1) * 3;
    if (pCVar6 != (CVector3f *)pfVar3) {
      pCVar6->x = *pfVar3;
      pCVar6->y = pfVar3[1];
      pCVar6->z = pfVar3[2];
    }
    iVar9 = *(int *)in_stack_00000004[1].actor_name + -1;
    local_20[iVar9 * 3 + 1].z = 0.0;
    local_20[iVar9 * 3 + 1].y = local_20[iVar9 * 3 + 1].z;
    local_20[iVar9 * 3 + 1].x = local_20[iVar9 * 3 + 1].y;
    if ((CLocation *)local_20 != local_28) {
      local_20->x = (local_28->position).x;
      local_20->y = (local_28->position).y;
      local_20->z = (local_28->position).z;
    }
    local_24[2] = 0;
    local_24[1] = local_24[2];
    *local_24 = local_24[1];
    local_38 = local_38 + 1;
  } while (local_38 < 3);
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
  local_50 = 0;
  local_4c = 0;
  if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
    if (local_e8 < *(float *)(in_stack_00000004[1].actor_name + 4) * (float)0.90000000000000002) {
      pCVar8 = in_stack_00000004 + 2;
      local_ec = 0.0;
      for (iVar9 = 0; iVar9 < *(int *)in_stack_00000004[1].actor_name + -1; iVar9 = iVar9 + 1) {
        local_c0 = pCVar8[-1].previous_transform_state.orientation.x - *(float *)pCVar8->actor_name;
        local_bc = pCVar8[-1].previous_transform_state.orientation.y -
                   *(float *)(pCVar8->actor_name + 4);
        local_b8 = pCVar8[-1].previous_transform_state.orientation.z -
                   *(float *)(pCVar8->actor_name + 8);
        pCVar8 = (CDemonActor *)&(pCVar8->location).position.y;
        local_ec = SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc) + local_ec;
      }
      if (*(float *)(in_stack_00000004[1].actor_name + 4) * (float)0.90000000000000002 < local_ec) {
        local_4c = 1;
      }
    }
    iVar9 = *(int *)in_stack_00000004[1].actor_name;
    local_9c = local_60 - (float)(&in_stack_00000004[1].scale)[iVar9 * 3].z;
    local_98 = local_5c - (float)(&in_stack_00000004[1].field19_0x114)[iVar9 * 9];
    local_94 = local_58 - (float)(&in_stack_00000004[1].field20_0x118)[iVar9 * 9];
    if (in_stack_00000008 * (float)0.10000000000000001 <
        SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98)) {
      local_50 = 1;
    }
  }
  if ((local_4c != 0) && (*(char *)&in_stack_00000004[1].orient_matrix.m[2].z != '\0')) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40
              ((uint)in_stack_00000004[1].previous_transform_state.position.x);
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[1].create_event + 0x48));
    if (iVar9 == 0) {
      fVar5 = (float)core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                               (g_CSoundPtr,in_stack_00000004,
                                (char *)&in_stack_00000004[1].orient_matrix.m[2].z,
                                (CVector3f *)
                                &(&in_stack_00000004[1].scale)
                                 [*(int *)in_stack_00000004[1].actor_name * 3].z);
      in_stack_00000004[1].previous_transform_state.position.x = fVar5;
    }
  }
  in_stack_00000004[1].previous_transform_state.position.y =
       in_stack_00000004[1].previous_transform_state.position.y - in_stack_00000008;
  if (local_50 == 0) {
    if (0.0 <= in_stack_00000004[1].previous_transform_state.position.y) {
      return;
    }
    fVar5 = in_stack_00000004[1].previous_transform_state.position.x;
    in_stack_00000004[1].previous_transform_state.position.y = 0.0;
    sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)fVar5);
    return;
  }
  iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                    (*(uint *)(in_stack_00000004[1].create_event + 0x48));
  if (iVar9 == 0) {
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      ((uint)in_stack_00000004[1].previous_transform_state.position.x);
    if (iVar9 == 0) {
      fVar5 = (float)core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                               (g_CSoundPtr,in_stack_00000004,
                                in_stack_00000004[1].create_event + 0x4c,
                                (CVector3f *)
                                &(&in_stack_00000004[1].scale)
                                 [*(int *)in_stack_00000004[1].actor_name * 3].z);
      in_stack_00000004[1].previous_transform_state.position.x = fVar5;
    }
  }
  in_stack_00000004[1].previous_transform_state.position.y = 0.5;
  return;
}
