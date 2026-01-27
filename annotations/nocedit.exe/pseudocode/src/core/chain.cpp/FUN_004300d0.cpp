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
  int iVar9;
  COrientation *pCVar10;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float fStack_e4;
  float fStack_e0;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
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
  float fStack_6c;
  float fStack_68;
  float local_58;
  float local_54;
  float local_50;
  CVector3f *local_4c;
  int local_48;
  int local_44;
  float *local_40;
  CDemonActor *local_3c;
  float local_38;
  char *local_34;
  int local_30;
  CVector3f *local_2c;
  float *local_28;
  int local_24;
  CLocation *local_20;
  int *local_1c;
  CVector3f *pCStack_18;
  CVector3f *pCStack_14;
  
  if (*(float *)(in_stack_00000004[4].actor_name + 0xc) < -9900.0f) {
    fVar5 = (*((in_stack_00000004->vtable)._ub)->cylinderGroundCheck)
                      (in_stack_00000004,0.1,(CVector3f *)0x0);
    *(float *)(in_stack_00000004[4].actor_name + 0xc) = fVar5;
  }
  if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
    pCVar8 = in_stack_00000004 + 2;
    fStack_e0 = 0.0;
    for (iVar9 = 0; iVar9 < *(int *)in_stack_00000004[1].actor_name + -1; iVar9 = iVar9 + 1) {
      local_70 = pCVar8[-1].previous_transform_state.orientation.x - *(float *)pCVar8->actor_name;
      fStack_6c = pCVar8[-1].previous_transform_state.orientation.y -
                  *(float *)(pCVar8->actor_name + 4);
      fStack_68 = pCVar8[-1].previous_transform_state.orientation.z -
                  *(float *)(pCVar8->actor_name + 8);
      pCVar8 = (CDemonActor *)&(pCVar8->location).position.y;
      fStack_e0 = SQRT(fStack_68 * fStack_68 + local_70 * local_70 + fStack_6c * fStack_6c) +
                  fStack_e0;
    }
  }
  piVar1 = &(&in_stack_00000004[1].scale)[*(int *)in_stack_00000004[1].actor_name * 3].z;
  *(float *)(in_stack_00000004[4].actor_name + 0x10) = 1.0 / in_stack_00000008;
  local_58 = (float)*piVar1;
  local_54 = (float)piVar1[1];
  local_50 = (float)piVar1[2];
  piVar1 = (int *)core_chain_cpp_FUN_0042fcc0();
  piVar2 = &(&in_stack_00000004[1].scale)[*(int *)in_stack_00000004[1].actor_name * 3].z;
  if (piVar2 != piVar1) {
    *piVar2 = *piVar1;
    piVar2[1] = piVar1[1];
    piVar2[2] = piVar1[2];
  }
  iVar9 = *(int *)in_stack_00000004[1].actor_name;
  pCVar6 = &in_stack_00000004[1].previous_transform_state.orientation;
  (&in_stack_00000004[1].unk12)[iVar9 * 9] = 0;
  (&in_stack_00000004[1].unk11)[iVar9 * 9] = (&in_stack_00000004[1].unk12)[iVar9 * 9];
  (&in_stack_00000004[1].unk10)[iVar9 * 9] = (&in_stack_00000004[1].unk11)[iVar9 * 9];
  if ((CLocation *)pCVar6 != &in_stack_00000004->location) {
    pCVar6->x = (in_stack_00000004->location).position.x;
    in_stack_00000004[1].previous_transform_state.orientation.y =
         (in_stack_00000004->location).position.y;
    in_stack_00000004[1].previous_transform_state.orientation.z =
         (in_stack_00000004->location).position.z;
  }
  in_stack_00000004[1].unk14 = 0;
  in_stack_00000004[1].unk13 = in_stack_00000004[1].unk14;
  in_stack_00000004[1].previous_transform_state.dirty_flags = in_stack_00000004[1].unk13;
  local_4c = &in_stack_00000004[1].previous_transform_state.orientation;
  local_34 = in_stack_00000004[4].actor_name + 8;
  local_28 = &in_stack_00000004[2].location.position.y;
  pCVar10 = (COrientation *)(in_stack_00000004[2].actor_name + 0xc);
  local_2c = local_4c;
  for (local_24 = 1; local_24 < *(int *)in_stack_00000004[1].actor_name + -1;
      local_24 = local_24 + 1) {
    pCVar10->pitch = *(float *)local_34 * pCVar10->pitch;
    pCVar10->bank = *(float *)local_34 * pCVar10->bank;
    pCVar10->heading = *(float *)local_34 * pCVar10->heading;
    local_38 = (float)in_stack_00000004[3].vtable * (float)0.03125;
    local_ac = (1.0 / local_38) * 0.0;
    fStack_a8 = (0.0 - (float)in_stack_00000004[3].vtable) * (1.0 / local_38);
    pCVar6 = local_4c + local_24 * 3;
    if (&local_c4 != &local_ac) {
      local_c4 = local_ac;
      local_c0 = fStack_a8;
      local_bc = local_ac;
    }
    local_7c = local_c4 * in_stack_00000008;
    local_78 = local_c0 * in_stack_00000008;
    local_74 = local_bc * in_stack_00000008;
    local_88 = pCVar6[1].x + local_7c;
    pCVar6[1].x = local_88;
    local_88 = local_88 * in_stack_00000008;
    *(float *)((int)(pCVar6 + 1) + 4) = *(float *)((int)(pCVar6 + 1) + 4) + local_78;
    *(float *)((int)(pCVar6 + 1) + 8) = *(float *)((int)(pCVar6 + 1) + 8) + local_74;
    local_84 = *(float *)((int)(pCVar6 + 1) + 4) * in_stack_00000008;
    local_80 = in_stack_00000008 * *(float *)((int)(pCVar6 + 1) + 8);
    pCVar6->x = pCVar6->x + local_88;
    pCVar6->y = pCVar6->y + local_84;
    pCVar6->z = pCVar6->z + local_80;
    fStack_a4 = local_ac;
    core_chain_cpp_FUN_0042fed0();
    core_chain_cpp_FUN_0042fed0();
    pCVar10 = pCVar10 + 3;
    local_28 = local_28 + 9;
    local_2c = local_2c + 3;
  }
  local_1c = &in_stack_00000004[1].previous_transform_state.dirty_flags;
  pCStack_18 = &in_stack_00000004[1].previous_transform_state.orientation;
  local_20 = &in_stack_00000004->location;
  local_40 = &in_stack_00000004[2].location.position.y;
  local_3c = in_stack_00000004 + 2;
  local_30 = 0;
  do {
    pfVar3 = (float *)core_chain_cpp_FUN_0042fcc0();
    pCVar6 = pCStack_18 + (*(int *)in_stack_00000004[1].actor_name + -1) * 3;
    if (pCVar6 != (CVector3f *)pfVar3) {
      pCVar6->x = *pfVar3;
      pCVar6->y = pfVar3[1];
      pCVar6->z = pfVar3[2];
    }
    iVar9 = *(int *)in_stack_00000004[1].actor_name + -1;
    pCStack_18[iVar9 * 3 + 1].z = 0.0;
    pCStack_18[iVar9 * 3 + 1].y = pCStack_18[iVar9 * 3 + 1].z;
    pCStack_18[iVar9 * 3 + 1].x = pCStack_18[iVar9 * 3 + 1].y;
    if ((CLocation *)pCStack_18 != local_20) {
      pCStack_18->x = (local_20->position).x;
      pCStack_18->y = (local_20->position).y;
      pCStack_18->z = (local_20->position).z;
    }
    local_1c[2] = 0;
    local_1c[1] = local_1c[2];
    *local_1c = local_1c[1];
    pCStack_14 = pCStack_18;
    for (iVar9 = 1; iVar9 < *(int *)in_stack_00000004[1].actor_name + -1; iVar9 = iVar9 + 1) {
      core_chain_cpp_FUN_0042fed0();
      core_chain_cpp_FUN_0042fed0();
      pCStack_14 = pCStack_14 + 3;
    }
    pfVar3 = (float *)core_chain_cpp_FUN_0042fcc0();
    pCVar6 = pCStack_18 + (*(int *)in_stack_00000004[1].actor_name + -1) * 3;
    if (pCVar6 != (CVector3f *)pfVar3) {
      pCVar6->x = *pfVar3;
      pCVar6->y = pfVar3[1];
      pCVar6->z = pfVar3[2];
    }
    iVar9 = *(int *)in_stack_00000004[1].actor_name + -1;
    pCStack_18[iVar9 * 3 + 1].z = 0.0;
    pCStack_18[iVar9 * 3 + 1].y = pCStack_18[iVar9 * 3 + 1].z;
    pCStack_18[iVar9 * 3 + 1].x = pCStack_18[iVar9 * 3 + 1].y;
    if ((CLocation *)pCStack_18 != local_20) {
      pCStack_18->x = (local_20->position).x;
      pCStack_18->y = (local_20->position).y;
      pCStack_18->z = (local_20->position).z;
    }
    local_1c[2] = 0;
    local_1c[1] = local_1c[2];
    *local_1c = local_1c[1];
    local_30 = local_30 + 1;
  } while (local_30 < 3);
  iVar9 = 0;
  if (0 < *(int *)in_stack_00000004[1].actor_name) {
    ppCVar7 = &in_stack_00000004[1].next_actor;
    do {
      puVar4 = (uint *)
               ((int)&in_stack_00000004[1].previous_transform_state + iVar9 * 0x24 + 0xc);
      if (ppCVar7 != (CDemonActor **)puVar4) {
        *ppCVar7 = (CDemonActor *)*puVar4;
        ppCVar7[1] = (CDemonActor *)puVar4[1];
        *(uint *)(ppCVar7 + 2) = puVar4[2];
      }
      iVar9 = iVar9 + 1;
      ppCVar7 = ppCVar7 + 9;
    } while (iVar9 < *(int *)in_stack_00000004[1].actor_name);
  }
  local_48 = 0;
  local_44 = 0;
  if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
    if (fStack_e0 < *(float *)(in_stack_00000004[1].actor_name + 4) * (float)0.90000000000000002) {
      pCVar8 = in_stack_00000004 + 2;
      fStack_e4 = 0.0;
      for (iVar9 = 0; iVar9 < *(int *)in_stack_00000004[1].actor_name + -1; iVar9 = iVar9 + 1) {
        local_b8 = pCVar8[-1].previous_transform_state.orientation.x - *(float *)pCVar8->actor_name;
        local_b4 = pCVar8[-1].previous_transform_state.orientation.y -
                   *(float *)(pCVar8->actor_name + 4);
        local_b0 = pCVar8[-1].previous_transform_state.orientation.z -
                   *(float *)(pCVar8->actor_name + 8);
        pCVar8 = (CDemonActor *)&(pCVar8->location).position.y;
        fStack_e4 = SQRT(local_b0 * local_b0 + local_b8 * local_b8 + local_b4 * local_b4) +
                    fStack_e4;
      }
      if (*(float *)(in_stack_00000004[1].actor_name + 4) * (float)0.90000000000000002 < fStack_e4) {
        local_44 = 1;
      }
    }
    iVar9 = *(int *)in_stack_00000004[1].actor_name;
    local_94 = local_58 - (float)(&in_stack_00000004[1].scale)[iVar9 * 3].z;
    local_90 = local_54 - (float)(&in_stack_00000004[1].unk8)[iVar9 * 9];
    local_8c = local_50 - (float)(&in_stack_00000004[1].unk9)[iVar9 * 9];
    if (in_stack_00000008 * (float)0.10000000000000001 <
        SQRT(local_8c * local_8c + local_94 * local_94 + local_90 * local_90)) {
      local_48 = 1;
    }
  }
  if ((local_44 != 0) && (*(char *)&in_stack_00000004[1].orient_matrix.m[2].z != '\0')) {
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
  if (local_48 == 0) {
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
