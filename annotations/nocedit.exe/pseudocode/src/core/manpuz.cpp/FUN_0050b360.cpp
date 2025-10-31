// Name: core_manpuz.cpp_FUN_0050b360
// Address: 0050b360
// Address Range: [[0050b360, 0050b3b2]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b360()
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408c10

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b360(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

undefined4 core_manpuz_cpp_FUN_0050b360(void)

{
  CDemonActor *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  
  if (*(int *)(in_stack_0000000c + 0xc) != 0) {
    *(undefined4 *)(in_stack_0000000c + 0xc) = 0;
    return 0;
  }
  if (*(int *)(in_stack_0000000c + 0x10) == 0) {
    if (&in_stack_00000004->orient != (COrientation *)in_stack_00000008) {
      (in_stack_00000004->orient).pitch = *in_stack_00000008;
      (in_stack_00000004->orient).bank = in_stack_00000008[1];
      (in_stack_00000004->orient).heading = in_stack_00000008[2];
    }
    core_actor_cpp_CDemonActor_FUN_00408c10(in_stack_00000004);
    return 1;
  }
  *(undefined4 *)(in_stack_0000000c + 0x10) = 0;
  return 0;
}


// Assembly code:
// 0050b360: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b360
// 0050b361: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050b365: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050b369: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0050b36d: MOV EBX,dword ptr [EAX + 0xc]
// 0050b370: TEST EBX,EBX
// 0050b372: JNZ 0x0050b3a1
//   XREF to: 0050b3a1 (CONDITIONAL_JUMP)
// 0050b374: CMP dword ptr [EAX + 0x10],0x0
// 0050b378: JNZ 0x0050b3ac
//   XREF to: 0050b3ac (CONDITIONAL_JUMP)
// 0050b37a: LEA EAX,[ECX + 0x30]
// 0050b37d: CMP EAX,EDX
// 0050b37f: JZ 0x0050b391
//   XREF to: 0050b391 (CONDITIONAL_JUMP)
// 0050b381: MOV EBX,dword ptr [EDX]
// 0050b383: MOV dword ptr [EAX],EBX
// 0050b385: MOV EBX,dword ptr [EDX + 0x4]
// 0050b388: MOV dword ptr [EAX + 0x4],EBX
// 0050b38b: MOV EBX,dword ptr [EDX + 0x8]
// 0050b38e: MOV dword ptr [EAX + 0x8],EBX
// 0050b391: PUSH ECX
//   Label: LAB_0050b391
// 0050b392: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0050b397: MOV EAX,0x1
// 0050b39c: ADD ESP,0x4
// 0050b39f: POP EBX
// 0050b3a0: RET
// 0050b3a1: MOV dword ptr [EAX + 0xc],0x0
//   Label: LAB_0050b3a1
// 0050b3a8: XOR EAX,EAX
// 0050b3aa: POP EBX
// 0050b3ab: RET
// 0050b3ac: MOV dword ptr [EAX + 0x10],EBX
//   Label: LAB_0050b3ac
// 0050b3af: XOR EAX,EAX
// 0050b3b1: POP EBX
// 0050b3b2: RET
