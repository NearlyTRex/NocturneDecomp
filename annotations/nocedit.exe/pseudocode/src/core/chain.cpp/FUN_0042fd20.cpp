// Name: core_chain.cpp_FUN_0042fd20
// Address: 0042fd20
// Address Range: [[0042fd20, 0042fd30]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_0042fd20()

#include "nocturne.h"

/* Signature: byte actors_other_chain.cpp_FUN_0042fd20(uint param_1) */

void core_chain_cpp_FUN_0042fd20(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  CDemonActor **ppCVar12;
  CDemonActor *in_stack_00000004;
  float local_30;
  float local_2c;
  float local_28;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  if (*(int *)(in_stack_00000004[1].actor_name + 0xc) != 0) {
    pfVar8 = (float *)core_chain_cpp_FUN_0042fcc0();
    fVar1 = *pfVar8;
    fVar2 = (in_stack_00000004->location).position.x;
    fVar3 = pfVar8[1];
    fVar4 = (in_stack_00000004->location).position.y;
    fVar5 = pfVar8[2];
    fVar6 = (in_stack_00000004->location).position.z;
    local_30 = (in_stack_00000004->location).position.x;
    local_2c = (in_stack_00000004->location).position.y;
    local_28 = (in_stack_00000004->location).position.z;
    fVar7 = 1.0 / (float)(*(int *)in_stack_00000004[1].actor_name + -1);
    iVar10 = 0;
    if (0 < *(int *)in_stack_00000004[1].actor_name) {
      ppCVar12 = &in_stack_00000004[1].next_actor;
      piVar11 = &in_stack_00000004[1].previous_transform_state.dirty_flags;
      do {
        pfVar8 = (float *)((int)&in_stack_00000004[1].previous_transform_state + iVar10 * 0x24 + 0xc
                          );
        if (pfVar8 != &local_30) {
          *pfVar8 = local_30;
          pfVar8[1] = local_2c;
          pfVar8[2] = local_28;
        }
        local_30 = local_30 + (fVar1 - fVar2) * fVar7;
        local_2c = local_2c + (fVar3 - fVar4) * fVar7;
        local_28 = local_28 + (fVar5 - fVar6) * fVar7;
        piVar11[2] = 0;
        piVar11[1] = piVar11[2];
        puVar9 = (uint *)
                 ((int)&in_stack_00000004[1].previous_transform_state + iVar10 * 0x24 + 0xc);
        *piVar11 = piVar11[1];
        if (ppCVar12 != (CDemonActor **)puVar9) {
          piVar11[3] = *puVar9;
          piVar11[4] = puVar9[1];
          piVar11[5] = puVar9[2];
        }
        ppCVar12 = ppCVar12 + 9;
        iVar10 = iVar10 + 1;
        piVar11 = piVar11 + 9;
      } while (iVar10 < *(int *)in_stack_00000004[1].actor_name);
    }
  }
  iVar10 = *(int *)in_stack_00000004[1].actor_name;
  fVar1 = *(float *)(in_stack_00000004[1].actor_name + 4);
  in_stack_00000004[1].create_event[0x48] = '\0';
  in_stack_00000004[1].create_event[0x49] = '\0';
  in_stack_00000004[1].create_event[0x4a] = '\0';
  in_stack_00000004[1].create_event[0x4b] = '\0';
  in_stack_00000004[1].previous_transform_state.position.x = 0.0;
  in_stack_00000004[1].previous_transform_state.position.y = 0.0;
  in_stack_00000004[4].actor_name[0xc] = -0x66;
  in_stack_00000004[4].actor_name[0xd] = '?';
  in_stack_00000004[4].actor_name[0xe] = '\x1c';
  in_stack_00000004[4].actor_name[0xf] = -0x3a;
  in_stack_00000004[4].actor_name[0x14] = '\0';
  in_stack_00000004[4].actor_name[0x15] = '\0';
  in_stack_00000004[4].actor_name[0x16] = '\0';
  in_stack_00000004[4].actor_name[0x17] = '\0';
  *(float *)(in_stack_00000004[1].actor_name + 8) = fVar1 / (float)(iVar10 + -1);
  return;
}
