// Name: core_boxactor.cpp_CLightActor_FUN_00423400
// Address: 00423400
// Address Range: [[00423400, 00423434]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CLightActor_FUN_00423400()
// Cross-references:
//   core_boxactor.cpp_CLightActor_FUN_004234e0 (004234e0) at 00423560 [DATA]
// Globals:
//   TerminatedCString s_g_mm_006169d8
//   undefined4 g_CLightActorClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void core_boxactor_cpp_CLightActor_FUN_00423400(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000010;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLightActorClassInfo.name_hash);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (in_stack_00000010,"%g mm",(double)(float)pCVar1[4].field26_0x148);
  return;
}


// Assembly code:
// 00423400: PUSH EBX
//   Label: core_boxactor.cpp_CLightActor_FUN_00423400
// 00423401: MOV EDX,dword ptr [0x00822c84]
//   XREF to: 00822c84 (READ)
// 00423407: PUSH EDX
// 00423408: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042340c: PUSH ECX
// 0042340d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00423412: ADD ESP,0x8
// 00423415: SUB ESP,0x8
// 00423418: FLD float ptr [EAX + 0x6a8]
// 0042341e: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 00423421: PUSH 0x6169d8
//   XREF to: 006169d8 (DATA)
// 00423426: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042342a: PUSH EBX
// 0042342b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00423430: ADD ESP,0x10
// 00423433: POP EBX
// 00423434: RET
