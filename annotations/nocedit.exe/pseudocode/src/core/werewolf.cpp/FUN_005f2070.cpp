// Name: core_werewolf.cpp_FUN_005f2070
// Address: 005f2070
// Address Range: [[005f2070, 005f20c1]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f2070()
// Cross-references:
//   core_werewolf.cpp_CWerewolf_FUN_005f20d0 (005f20d0) at 005f210b [DATA]
// Globals:
//   undefined4 g_CWerewolfClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

undefined4 core_werewolf_cpp_FUN_005f2070(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CWerewolfClassInfo.name_hash);
  if (pCVar1[0x8d].field25_0x144 == 0) {
    pCVar1[0x8d].field25_0x144 = 1;
  }
  else {
    if (pCVar1[0x8d].field25_0x144 != 1) {
      pCVar1[0x8d].field25_0x144 = 0;
      return 1;
    }
    pCVar1[0x8d].field25_0x144 = 2;
  }
  return 1;
}


// Assembly code:
// 005f2070: PUSH EBX
//   Label: core_werewolf.cpp_FUN_005f2070
// 005f2071: MOV EDX,dword ptr [0x03f96b94]
//   XREF to: 03f96b94 (READ)
// 005f2077: PUSH EDX
// 005f2078: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005f207c: PUSH ECX
// 005f207d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005f2082: MOV EBX,dword ptr [EAX + 0xbebc]
// 005f2088: ADD ESP,0x8
// 005f208b: TEST EBX,EBX
// 005f208d: JZ 0x005f20a5
//   XREF to: 005f20a5 (CONDITIONAL_JUMP)
// 005f208f: CMP EBX,0x1
// 005f2092: JNZ 0x005f20b1
//   XREF to: 005f20b1 (CONDITIONAL_JUMP)
// 005f2094: MOV dword ptr [EAX + 0xbebc],0x2
// 005f209e: MOV EAX,0x1
//   Label: LAB_005f209e
// 005f20a3: POP EBX
// 005f20a4: RET
// 005f20a5: MOV dword ptr [EAX + 0xbebc],0x1
//   Label: LAB_005f20a5
// 005f20af: JMP 0x005f209e
//   XREF to: 005f209e (UNCONDITIONAL_JUMP)
// 005f20b1: MOV dword ptr [EAX + 0xbebc],0x0
//   Label: LAB_005f20b1
// 005f20bb: MOV EAX,0x1
// 005f20c0: POP EBX
// 005f20c1: RET
