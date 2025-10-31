// Name: core_manpuz.cpp_FUN_0050b2f0
// Address: 0050b2f0
// Address Range: [[0050b2f0, 0050b333]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b2f0()
// Function calls:
//   core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b2f0(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_0050b2f0(void)

{
  float fVar1;
  CDemonActor *in_stack_00000004;
  SInteractionInfo *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030(in_stack_00000004,in_stack_00000008);
  in_stack_00000008->can_interact = 1;
  fVar1 = in_stack_00000008[0x16].yaw_max;
  in_stack_00000008->yaw_min = 6.2831855;
  in_stack_00000008->yaw_max = -6.2831855;
  in_stack_00000008->distance_min = -1.0;
  in_stack_00000008->distance_max = 0.0;
  in_stack_00000008->reference_data = (int)fVar1;
  return;
}


// Assembly code:
// 0050b2f0: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b2f0
// 0050b2f1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050b2f5: PUSH EBX
// 0050b2f6: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050b2fa: PUSH EDX
// 0050b2fb: CALL core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030
//   XREF to: 0040a030 (UNCONDITIONAL_CALL)
// 0050b300: ADD ESP,0x8
// 0050b303: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050b307: MOV dword ptr [EBX],0x1
// 0050b30d: MOV EAX,dword ptr [EAX + 0x2d4]
// 0050b313: MOV dword ptr [EBX + 0x10],0x40c90fdb
// 0050b31a: MOV dword ptr [EBX + 0x14],0xc0c90fdb
// 0050b321: MOV dword ptr [EBX + 0x8],0xbf800000
// 0050b328: MOV dword ptr [EBX + 0xc],0x0
// 0050b32f: MOV dword ptr [EBX + 0x4],EAX
// 0050b332: POP EBX
// 0050b333: RET
