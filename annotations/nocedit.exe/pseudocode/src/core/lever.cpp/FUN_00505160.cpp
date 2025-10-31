// Name: core_lever.cpp_FUN_00505160
// Address: 00505160
// Address Range: [[00505160, 00505192]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00505160()
// Cross-references:
//   core_lever.cpp_FUN_00505240 (00505240) at 0050526b [DATA]
// Globals:
//   undefined4 g_CLeverClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

undefined4 core_lever_cpp_FUN_00505160(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLeverClassInfo.name_hash);
  pCVar1[2].location.position.z = (float)(uint)(pCVar1[2].location.position.z == 0.0);
  return 1;
}


// Assembly code:
// 00505160: PUSH EBX
//   Label: core_lever.cpp_FUN_00505160
// 00505161: MOV EDX,dword ptr [0x02dd3090]
//   XREF to: 02dd3090 (READ)
// 00505167: PUSH EDX
// 00505168: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050516c: PUSH ECX
// 0050516d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00505172: MOV EBX,dword ptr [EAX + 0x2d8]
// 00505178: ADD ESP,0x8
// 0050517b: TEST EBX,EBX
// 0050517d: SETZ DL
// 00505180: AND EDX,0xff
// 00505186: MOV dword ptr [EAX + 0x2d8],EDX
// 0050518c: MOV EAX,0x1
// 00505191: POP EBX
// 00505192: RET
