// Name: core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
// Address: 0040d240
// Address Range: [[0040d240, 0040d268]]
// Convention: unknown
// Signature: undefined core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240()
// Cross-references:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 (0040d150) at 0040d1a1 [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_FUN_00414610 (00414610) at 00414662 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505390 (00505390) at 005053c0 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005bab90 (005bab90) at 005babcc [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e1350 (005e1350) at 005e13c0 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ClipLeft
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240(void)

{
  int *in_stack_00000004;
  char *in_stack_00000008;
  
  engine_2d_c_drawText_FUN_00401fd0(in_stack_00000008,g_ClipLeft,*in_stack_00000004);
  *in_stack_00000004 = *in_stack_00000004 + 0xb;
  return;
}


// Assembly code:
// 0040d240: PUSH EBX
//   Label: core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
// 0040d241: PUSH ESI
// 0040d242: PUSH EDI
// 0040d243: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040d247: MOV EDX,dword ptr [EBX]
// 0040d249: PUSH EDX
// 0040d24a: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0040d250: PUSH ECX
// 0040d251: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0040d255: PUSH ESI
// 0040d256: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0040d25b: MOV EDI,dword ptr [EBX]
// 0040d25d: ADD EDI,0xb
// 0040d260: ADD ESP,0xc
// 0040d263: MOV dword ptr [EBX],EDI
// 0040d265: POP EDI
// 0040d266: POP ESI
// 0040d267: POP EBX
// 0040d268: RET
