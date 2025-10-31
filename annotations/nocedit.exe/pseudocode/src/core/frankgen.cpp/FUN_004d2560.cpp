// Name: core_frankgen.cpp_FUN_004d2560
// Address: 004d2560
// Address Range: [[004d2560, 004d25c4]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d2560()
// Globals:
//   TerminatedCString s_data_s_0062abf5
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_frankgen.cpp_FUN_004d2560(undefined4 param_1, undefined4
   param_2) */

void core_frankgen_cpp_FUN_004d2560(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,in_stack_00000008);
  if (in_stack_00000004[1].actor_name[8] != '\0') {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (in_stack_00000008,"data\\%s\n",in_stack_00000004[1].actor_name + 8);
  }
  if (in_stack_00000004[2].create_event[0x5c] == '\0') {
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)&in_stack_00000004[2].orient_matrix.m[2].z,in_stack_00000008
            );
  return;
}


// Assembly code:
// 004d2560: PUSH EBX
//   Label: core_frankgen.cpp_FUN_004d2560
// 004d2561: PUSH ESI
// 004d2562: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004d2566: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004d256a: PUSH ESI
// 004d256b: PUSH EBX
// 004d256c: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004d2571: ADD ESP,0x8
// 004d2574: PUSH ESI
// 004d2575: LEA EAX,[EBX + 0x184]
// 004d257b: PUSH EAX
// 004d257c: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 004d2581: MOV AH,byte ptr [EBX + 0x160]
// 004d2587: ADD ESP,0x8
// 004d258a: TEST AH,AH
// 004d258c: JNZ 0x004d25a1
//   XREF to: 004d25a1 (CONDITIONAL_JUMP)
// 004d258e: MOV DL,byte ptr [EBX + 0x384]
//   Label: LAB_004d258e
// 004d2594: LEA EAX,[EBX + 0x30c]
// 004d259a: TEST DL,DL
// 004d259c: JNZ 0x004d25b8
//   XREF to: 004d25b8 (CONDITIONAL_JUMP)
// 004d259e: POP ESI
// 004d259f: POP EBX
// 004d25a0: RET
// 004d25a1: LEA EAX,[EBX + 0x160]
//   Label: LAB_004d25a1
// 004d25a7: PUSH EAX
// 004d25a8: PUSH 0x62abf5
//   XREF to: 0062abf5 (DATA)
// 004d25ad: PUSH ESI
// 004d25ae: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004d25b3: ADD ESP,0xc
// 004d25b6: JMP 0x004d258e
//   XREF to: 004d258e (UNCONDITIONAL_JUMP)
// 004d25b8: PUSH ESI
//   Label: LAB_004d25b8
// 004d25b9: PUSH EAX
// 004d25ba: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 004d25bf: ADD ESP,0x8
// 004d25c2: POP ESI
// 004d25c3: POP EBX
// 004d25c4: RET
