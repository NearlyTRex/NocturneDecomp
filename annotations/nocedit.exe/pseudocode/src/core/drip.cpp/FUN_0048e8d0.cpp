// Name: core_drip.cpp_FUN_0048e8d0
// Address: 0048e8d0
// Address Range: [[0048e8d0, 0048e921]]
// Convention: unknown
// Signature: undefined core_drip.cpp_FUN_0048e8d0()
// Cross-references:
//   core_drip.cpp_FUN_0048e930 (0048e930) at 0048e944 [DATA]
// Globals:
//   undefined4 g_CDripClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

/* Signature: undefined1 actors_other_drip.cpp_FUN_0048e8d0(undefined4 param_1) */

undefined4 core_drip_cpp_FUN_0048e8d0(void)

{
  float fVar1;
  CDemonActor *pCVar2;
  CDemonActor *in_stack_00000004;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000004,g_CDripClassInfo.name_hash)
  ;
  fVar1 = pCVar2[2].location.position.y;
  if (fVar1 == 0.0) {
    pCVar2[2].location.position.y = 1.4013e-45;
  }
  else {
    if (fVar1 != 1.4013e-45) {
      pCVar2[2].location.position.y = 0.0;
      return 1;
    }
    pCVar2[2].location.position.y = 2.8026e-45;
  }
  return 1;
}


// Assembly code:
// 0048e8d0: PUSH EBX
//   Label: core_drip.cpp_FUN_0048e8d0
// 0048e8d1: MOV EDX,dword ptr [0x02c9b16c]
//   XREF to: 02c9b16c (READ)
// 0048e8d7: PUSH EDX
// 0048e8d8: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0048e8dc: PUSH ECX
// 0048e8dd: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0048e8e2: MOV EBX,dword ptr [EAX + 0x2d4]
// 0048e8e8: ADD ESP,0x8
// 0048e8eb: TEST EBX,EBX
// 0048e8ed: JZ 0x0048e905
//   XREF to: 0048e905 (CONDITIONAL_JUMP)
// 0048e8ef: CMP EBX,0x1
// 0048e8f2: JNZ 0x0048e911
//   XREF to: 0048e911 (CONDITIONAL_JUMP)
// 0048e8f4: MOV dword ptr [EAX + 0x2d4],0x2
// 0048e8fe: MOV EAX,0x1
//   Label: LAB_0048e8fe
// 0048e903: POP EBX
// 0048e904: RET
// 0048e905: MOV dword ptr [EAX + 0x2d4],0x1
//   Label: LAB_0048e905
// 0048e90f: JMP 0x0048e8fe
//   XREF to: 0048e8fe (UNCONDITIONAL_JUMP)
// 0048e911: MOV dword ptr [EAX + 0x2d4],0x0
//   Label: LAB_0048e911
// 0048e91b: MOV EAX,0x1
// 0048e920: POP EBX
// 0048e921: RET
