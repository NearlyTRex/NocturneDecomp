// Name: core_chain.cpp_FUN_0042fd20
// Address: 0042fd20
// Address Range: [[0042fd20, 0042fd30]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_0042fd20()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_chain.cpp_FUN_0042fd20(undefined4 param_1) */

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
  int iVar9;
  int *piVar10;
  char *pcVar11;
  BADSPACEBASE *in_ESP;
  CDemonActor **ppCVar12;
  CDemonActor *in_stack_00000004;
  float local_28;
  float local_24;
  CDemonActor *local_20;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  if (*(int *)(in_stack_00000004[1].actor_name + 0xc) != 0) {
    pfVar8 = (float *)core_chain_cpp_FUN_0042fcc0();
    fVar1 = *pfVar8;
    fVar2 = (in_stack_00000004->location).position.x;
    fVar3 = pfVar8[1];
    fVar4 = (in_stack_00000004->location).position.y;
    fVar5 = pfVar8[2];
    fVar6 = (in_stack_00000004->location).position.z;
    local_28 = (in_stack_00000004->location).position.x;
    local_24 = (in_stack_00000004->location).position.y;
    local_20 = (CDemonActor *)(in_stack_00000004->location).position.z;
    fVar7 = 1.0 / (float)(*(int *)in_stack_00000004[1].actor_name + -1);
    iVar9 = 0;
    if (0 < *(int *)in_stack_00000004[1].actor_name) {
      ppCVar12 = &in_stack_00000004[1].metadata.next_actor;
      piVar10 = &in_stack_00000004[1].metadata.runtime_flags;
      do {
        pcVar11 = in_stack_00000004[1].metadata.field3_0x1c + iVar9 * 0x24 + -0x10;
        if ((float *)pcVar11 != &local_28) {
          *(float *)pcVar11 = local_28;
          *(float *)(pcVar11 + 4) = local_24;
          *(CDemonActor **)(pcVar11 + 8) = local_20;
        }
        local_28 = local_28 + (fVar1 - fVar2) * fVar7;
        local_24 = local_24 + (fVar3 - fVar4) * fVar7;
        local_20 = (CDemonActor *)((float)local_20 + (fVar5 - fVar6) * fVar7);
        pcVar11 = (char *)(piVar10 + 2);
        pcVar11[0] = '\0';
        pcVar11[1] = '\0';
        pcVar11[2] = '\0';
        pcVar11[3] = '\0';
        piVar10[1] = piVar10[2];
        pcVar11 = in_stack_00000004[1].metadata.field3_0x1c + iVar9 * 0x24 + -0x10;
        *piVar10 = piVar10[1];
        if (ppCVar12 != (CDemonActor **)pcVar11) {
          piVar10[3] = (int)*(CDemonActor **)pcVar11;
          piVar10[4] = *(undefined4 *)(pcVar11 + 4);
          piVar10[5] = (int)*(CDemonActor **)(pcVar11 + 8);
        }
        ppCVar12 = ppCVar12 + 9;
        iVar9 = iVar9 + 1;
        piVar10 = piVar10 + 9;
      } while (iVar9 < *(int *)in_stack_00000004[1].actor_name);
    }
  }
  iVar9 = *(int *)in_stack_00000004[1].actor_name;
  fVar1 = *(float *)(in_stack_00000004[1].actor_name + 4);
  in_stack_00000004[1].create_event[0x48] = '\0';
  in_stack_00000004[1].create_event[0x49] = '\0';
  in_stack_00000004[1].create_event[0x4a] = '\0';
  in_stack_00000004[1].create_event[0x4b] = '\0';
  in_stack_00000004[1].metadata.runtime_vector1.x = 0.0;
  in_stack_00000004[1].metadata.runtime_vector1.y = 0.0;
  in_stack_00000004[4].actor_name[0xc] = -0x66;
  in_stack_00000004[4].actor_name[0xd] = '?';
  in_stack_00000004[4].actor_name[0xe] = '\x1c';
  in_stack_00000004[4].actor_name[0xf] = -0x3a;
  in_stack_00000004[4].actor_name[0x14] = '\0';
  in_stack_00000004[4].actor_name[0x15] = '\0';
  in_stack_00000004[4].actor_name[0x16] = '\0';
  in_stack_00000004[4].actor_name[0x17] = '\0';
  *(float *)(in_stack_00000004[1].actor_name + 8) = fVar1 / (float)(iVar9 + -1);
  return;
}


// Assembly code:
// 0042fd20: PUSH EBX
//   Label: core_chain.cpp_FUN_0042fd20
// 0042fd21: PUSH ESI
// 0042fd22: PUSH EDI
// 0042fd23: PUSH EBP
// 0042fd24: SUB ESP,0x2c
// 0042fd27: MOV EBP,dword ptr [ESP + 0x40]
// 0042fd2b: PUSH EBP
// 0042fd2c: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
