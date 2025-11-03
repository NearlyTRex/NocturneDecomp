// Name: core_actor.cpp_FUN_0040e130
// Address: 0040e130
// Address Range: [[0040e130, 0040e147]]
// Convention: __cdecl
// Signature: void core_actor.cpp_FUN_0040e130(void)
// Cross-references:
//   core_msnedit.cpp_FUN_00538ea0 (00538ea0) at 00538eed [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b5fe [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053da21 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053ea30 (0053ea30) at 0053ea59 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053ec80 (0053ec80) at 0053eced [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b11e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_staticInit_FUN_00535c30 (00535c30) at 00535c35 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 00567ac0 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_FUN_0040e150

#include "nocturne.h"

void __cdecl core_actor_cpp_FUN_0040e130(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  core_actor_cpp_FUN_0040e150();
  return;
}


// Assembly code:
// 0040e130: PUSH EBX
//   Label: core_actor.cpp_FUN_0040e130
// 0040e131: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0040e135: PUSH EBX
// 0040e136: MOV dword ptr [EBX],0x0
// 0040e13c: CALL core_actor.cpp_FUN_0040e150
//   XREF to: 0040e150 (UNCONDITIONAL_CALL)
// 0040e141: ADD ESP,0x4
// 0040e144: MOV EAX,EBX
// 0040e146: POP EBX
// 0040e147: RET
