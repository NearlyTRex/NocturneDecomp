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
  float *unaff_retaddr;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float fVar11;
  float in_stack_ffffff3c;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  int local_48;
  uint local_44;
  uint local_40;
  float local_3c;
  CVector3f *local_38;
  float local_34;
  float *local_2c;
  CDemonActor *local_28;
  float local_24;
  char *local_20;
  uint local_1c;
  CVector3f *pCStack_18;
  float *pfStack_14;
  
  if (*(float *)(in_stack_00000004[4].actor_name + 0xc) < -9900f) {
    fVar11 = (*in_stack_00000004->vtable->cylinderGroundCheck)
                       (in_stack_00000004,0.1,(CVector3f *)0x0);
    *(float *)(in_stack_00000004[4].actor_name + 0xc) = fVar11;
  }
  if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
    pCVar8 = in_stack_00000004 + 2;
    for (iVar9 = 0; iVar9 < *(int *)in_stack_00000004[1].actor_name + -1; iVar9 = iVar9 + 1) {
      local_60 = pCVar8[-1].previous_transform_state.orientation.x - *(float *)pCVar8->actor_name;
      local_5c = pCVar8[-1].previous_transform_state.orientation.y -
                 *(float *)(pCVar8->actor_name + 4);
      local_58 = pCVar8[-1].previous_transform_state.orientation.z -
                 *(float *)(pCVar8->actor_name + 8);
      pCVar8 = (CDemonActor *)&(pCVar8->location).position.y;
    }
  }
  piVar1 = &(&in_stack_00000004[1].scale)[*(int *)in_stack_00000004[1].actor_name * 3].z;
  *(float *)(in_stack_00000004[4].actor_name + 0x10) = 1.0 / in_stack_00000008;
  local_48 = *piVar1;
  local_44 = piVar1[1];
  local_40 = piVar1[2];
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
  local_38 = &in_stack_00000004[1].previous_transform_state.orientation;
  local_20 = in_stack_00000004[4].actor_name + 8;
  pfStack_14 = &in_stack_00000004[2].location.position.y;
  pCVar10 = (COrientation *)(in_stack_00000004[2].actor_name + 0xc);
  pCStack_18 = local_38;
  for (iVar9 = 1; iVar9 < *(int *)in_stack_00000004[1].actor_name + -1; iVar9 = iVar9 + 0x24) {
    pCVar10->pitch = *(float *)local_20 * pCVar10->pitch;
    pCVar10->bank = *(float *)local_20 * pCVar10->bank;
    pCVar10->heading = *(float *)local_20 * pCVar10->heading;
    local_24 = (float)in_stack_00000004[3].vtable * (float)0.03125;
    local_98 = (1.0 / local_24) * 0.0;
    local_94 = (0.0 - (float)in_stack_00000004[3].vtable) * (1.0 / local_24);
    pCVar6 = local_38 + iVar9 * 3;
    if (&local_b0 != &local_98) {
      local_b0 = local_98;
      local_ac = local_94;
      fStack_a8 = local_98;
    }
    fStack_68 = local_b0 * in_stack_00000008;
    local_64 = local_ac * in_stack_00000008;
    local_60 = fStack_a8 * in_stack_00000008;
    local_74 = pCVar6[1].x + fStack_68;
    pCVar6[1].x = local_74;
    local_74 = local_74 * in_stack_00000008;
    *(float *)((int)(pCVar6 + 1) + 4) = *(float *)((int)(pCVar6 + 1) + 4) + local_64;
    *(float *)((int)(pCVar6 + 1) + 8) = *(float *)((int)(pCVar6 + 1) + 8) + local_60;
    local_70 = *(float *)((int)(pCVar6 + 1) + 4) * in_stack_00000008;
    fStack_6c = in_stack_00000008 * *(float *)((int)(pCVar6 + 1) + 8);
    pCVar6->x = pCVar6->x + local_74;
    pCVar6->y = pCVar6->y + local_70;
    pCVar6->z = pCVar6->z + fStack_6c;
    local_90 = local_98;
    core_chain_cpp_FUN_0042fed0();
    core_chain_cpp_FUN_0042fed0();
    pCVar10 = pCVar10 + 3;
  }
  piVar1 = &in_stack_00000004[1].previous_transform_state.dirty_flags;
  pCVar6 = &in_stack_00000004[1].previous_transform_state.orientation;
  local_2c = &in_stack_00000004[2].location.position.y;
  local_28 = in_stack_00000004 + 2;
  local_1c = 0;
  do {
    pfVar3 = (float *)core_chain_cpp_FUN_0042fcc0();
    pfVar5 = unaff_retaddr + (*(int *)in_stack_00000004[1].actor_name + -1) * 9;
    if (pfVar5 != pfVar3) {
      *pfVar5 = *pfVar3;
      pfVar5[1] = pfVar3[1];
      pfVar5[2] = pfVar3[2];
    }
    iVar9 = *(int *)in_stack_00000004[1].actor_name + -1;
    unaff_retaddr[iVar9 * 9 + 5] = 0.0;
    unaff_retaddr[iVar9 * 9 + 4] = unaff_retaddr[iVar9 * 9 + 5];
    unaff_retaddr[iVar9 * 9 + 3] = unaff_retaddr[iVar9 * 9 + 4];
    if (unaff_retaddr != (float *)piVar1) {
      *unaff_retaddr = (float)*piVar1;
      unaff_retaddr[1] = (float)in_stack_00000004[1].field25_0x144;
      unaff_retaddr[2] = (float)in_stack_00000004[1].field26_0x148;
    }
    in_stack_00000004[1].previous_transform_state.orientation.z = 0.0;
    in_stack_00000004[1].previous_transform_state.orientation.y =
         in_stack_00000004[1].previous_transform_state.orientation.z;
    pCVar6->x = in_stack_00000004[1].previous_transform_state.orientation.y;
    while (1 < *(int *)in_stack_00000004[1].actor_name + -1) {
      core_chain_cpp_FUN_0042fed0();
      core_chain_cpp_FUN_0042fed0();
    }
    pfVar3 = (float *)core_chain_cpp_FUN_0042fcc0();
    pfVar5 = unaff_retaddr + (*(int *)in_stack_00000004[1].actor_name + -1) * 9;
    if (pfVar5 != pfVar3) {
      *pfVar5 = *pfVar3;
      pfVar5[1] = pfVar3[1];
      pfVar5[2] = pfVar3[2];
    }
    iVar9 = *(int *)in_stack_00000004[1].actor_name + -1;
    unaff_retaddr[iVar9 * 9 + 5] = 0.0;
    unaff_retaddr[iVar9 * 9 + 4] = unaff_retaddr[iVar9 * 9 + 5];
    unaff_retaddr[iVar9 * 9 + 3] = unaff_retaddr[iVar9 * 9 + 4];
    if ((CVector3f *)unaff_retaddr != pCVar6) {
      *unaff_retaddr = pCVar6->x;
      unaff_retaddr[1] = in_stack_00000004[1].previous_transform_state.orientation.y;
      unaff_retaddr[2] = in_stack_00000004[1].previous_transform_state.orientation.z;
    }
    unaff_retaddr[2] = 0.0;
    unaff_retaddr[1] = unaff_retaddr[2];
    *unaff_retaddr = unaff_retaddr[1];
    pfStack_14 = (float *)((int)pfStack_14 + 1);
  } while ((int)pfStack_14 < 3);
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
  local_2c = (float *)0x0;
  local_28 = (CDemonActor *)0x0;
  if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
    if (in_stack_ffffff3c < *(float *)(in_stack_00000004[1].actor_name + 4) * (float)0.90000000000000002
       ) {
      pCVar8 = in_stack_00000004 + 2;
      fVar11 = 0.0;
      for (iVar9 = 0; iVar9 < *(int *)in_stack_00000004[1].actor_name + -1; iVar9 = iVar9 + 1) {
        local_9c = pCVar8[-1].previous_transform_state.orientation.x - *(float *)pCVar8->actor_name;
        local_98 = pCVar8[-1].previous_transform_state.orientation.y -
                   *(float *)(pCVar8->actor_name + 4);
        local_94 = pCVar8[-1].previous_transform_state.orientation.z -
                   *(float *)(pCVar8->actor_name + 8);
        pCVar8 = (CDemonActor *)&(pCVar8->location).position.y;
        fVar11 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98) + fVar11;
      }
      if (*(float *)(in_stack_00000004[1].actor_name + 4) * (float)0.90000000000000002 < fVar11) {
        local_28 = (CDemonActor *)0x1;
      }
    }
    iVar9 = *(int *)in_stack_00000004[1].actor_name;
    local_78 = local_3c - (float)(&in_stack_00000004[1].scale)[iVar9 * 3].z;
    local_74 = (float)local_38 - (float)(&in_stack_00000004[1].field19_0x114)[iVar9 * 9];
    local_70 = local_34 - (float)(&in_stack_00000004[1].field20_0x118)[iVar9 * 9];
    if ((float)0.10000000000000001 * 1.4013e-45 <
        SQRT(local_70 * local_70 + local_78 * local_78 + local_74 * local_74)) {
      local_2c = (float *)0x1;
    }
  }
  if ((local_28 != (CDemonActor *)0x0) &&
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
       in_stack_00000004[1].previous_transform_state.position.y - 1.4013e-45;
  if (local_20 == (char *)0x0) {
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
