// Name: core_boxactor.cpp_CLightActor_FUN_00423380
// Address: 00423380
// Address Range: [[00423380, 004233ff]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CLightActor_FUN_00423380()
// Cross-references:
//   core_boxactor.cpp_CLightActor_FUN_004234e0 (004234e0) at 004234f4 [DATA]
// Globals:
//   TerminatedCString s_Select_light_type_for_CL_006169b3
//   undefined4 g_CLightActorClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_boxactor.cpp_FUN_00422d60
//   core_boxactor.cpp_FUN_00423110
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

undefined4 core_boxactor_cpp_CLightActor_FUN_00423380(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  undefined4 in_stack_00000008;
  int iStack_134;
  CDemonActor *pCStack_130;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLightActorClassInfo.name_hash);
  crt_stdio_c_sprintf_FUN_005fdbd0
            ((char *)&iStack_134,"Select light type for CLightActor %s",in_stack_00000008);
  iStack_134 = pCVar1[4].scale.y;
  iVar2 = core_boxactor_cpp_FUN_00423110();
  if (iVar2 < 0) {
    return 0;
  }
  pCVar1[4].scale.y = iVar2;
  iStack_134 = 0x4233ee;
  pCStack_130 = pCVar1;
  core_boxactor_cpp_FUN_00422d60();
  return 1;
}


// Assembly code:
// 00423380: PUSH EBX
//   Label: core_boxactor.cpp_CLightActor_FUN_00423380
// 00423381: PUSH ESI
// 00423382: PUSH EDI
// 00423383: SUB ESP,0x12c
// 00423389: MOV EDX,dword ptr [0x00822c84]
//   XREF to: 00822c84 (READ)
// 0042338f: PUSH EDX
// 00423390: MOV ECX,dword ptr [ESP + 0x140]
//   XREF to: Stack[0x4] (READ)
// 00423397: PUSH ECX
// 00423398: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0042339d: ADD ESP,0x8
// 004233a0: MOV ESI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x4] (READ)
// 004233a7: PUSH ESI
// 004233a8: PUSH 0x6169b3
//   XREF to: 006169b3 (DATA)
// 004233ad: MOV EBX,EAX
// 004233af: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x138] (DATA)
// 004233b3: PUSH EAX
// 004233b4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004233b9: ADD ESP,0xc
// 004233bc: MOV EDI,dword ptr [EBX + 0x66c]
// 004233c2: PUSH EDI
// 004233c3: PUSH 0x1
// 004233c5: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x138] (DATA)
// 004233c9: PUSH EAX
// 004233ca: CALL core_boxactor.cpp_FUN_00423110
//   XREF to: 00423110 (UNCONDITIONAL_CALL)
// 004233cf: ADD ESP,0xc
// 004233d2: TEST EAX,EAX
// 004233d4: JGE 0x004233e2
//   XREF to: 004233e2 (CONDITIONAL_JUMP)
// 004233d6: XOR EAX,EAX
// 004233d8: ADD ESP,0x12c
// 004233de: POP EDI
// 004233df: POP ESI
// 004233e0: POP EBX
// 004233e1: RET
// 004233e2: PUSH EBX
//   Label: LAB_004233e2
// 004233e3: MOV dword ptr [EBX + 0x66c],EAX
// 004233e9: CALL core_boxactor.cpp_FUN_00422d60
//   XREF to: 00422d60 (UNCONDITIONAL_CALL)
// 004233ee: MOV EAX,0x1
// 004233f3: ADD ESP,0x4
// 004233f6: ADD ESP,0x12c
// 004233fc: POP EDI
// 004233fd: POP ESI
// 004233fe: POP EBX
// 004233ff: RET
