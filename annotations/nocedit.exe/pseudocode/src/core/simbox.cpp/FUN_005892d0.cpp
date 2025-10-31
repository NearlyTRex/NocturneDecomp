// Name: core_simbox.cpp_FUN_005892d0
// Address: 005892d0
// Address Range: [[005892d0, 00589302]]
// Convention: __cdecl
// Signature: int core_simbox.cpp_FUN_005892d0(CSimBox * this_ptr)
// Cross-references:
//   core_simbox.cpp_CSimBox_FUN_00589310 (00589310) at 00589352 [DATA]
// Globals:
//   undefined4 g_CSimBoxClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

int __cdecl core_simbox_cpp_FUN_005892d0(CSimBox *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base_actor,g_CSimBoxClassInfo.name_hash);
  pCVar1[2].location.position.y = (float)(uint)(pCVar1[2].location.position.y == 0.0);
  return 1;
}


// Assembly code:
// 005892d0: PUSH EBX
//   Label: core_simbox.cpp_FUN_005892d0
// 005892d1: MOV EDX,dword ptr [0x03659820]
//   XREF to: 03659820 (READ)
// 005892d7: PUSH EDX
// 005892d8: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005892dc: PUSH ECX
// 005892dd: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005892e2: MOV EBX,dword ptr [EAX + 0x2d4]
// 005892e8: ADD ESP,0x8
// 005892eb: TEST EBX,EBX
// 005892ed: SETZ DL
// 005892f0: AND EDX,0xff
// 005892f6: MOV dword ptr [EAX + 0x2d4],EDX
// 005892fc: MOV EAX,0x1
// 00589301: POP EBX
// 00589302: RET
