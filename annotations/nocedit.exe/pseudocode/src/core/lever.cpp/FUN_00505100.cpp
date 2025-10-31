// Name: core_lever.cpp_FUN_00505100
// Address: 00505100
// Address Range: [[00505100, 00505158]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00505100()
// Cross-references:
//   core_lever.cpp_FUN_00505240 (00505240) at 00505270 [DATA]
// Globals:
//   TerminatedCString s_Ground_lever_00631158
//   undefined4 s_round_lever_00631159
//   TerminatedCString s_Wall_lever_00631165
//   undefined4 s_all_lever_00631166
//   undefined4 s_ll_lever_00631167
//   undefined4 s_l_lever_00631168
//   TerminatedCString s_Unknown_00631170
//   undefined4 s_nknown_00631171
//   undefined4 g_CLeverClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

void core_lever_cpp_FUN_00505100(void)

{
  char cVar1;
  float fVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLeverClassInfo.name_hash);
  fVar2 = pCVar3[2].location.position.z;
  if (fVar2 == 0.0) {
    pcVar4 = "Ground lever";
  }
  else if (fVar2 == 1.4013e-45) {
    pcVar4 = "Wall lever";
  }
  else {
    pcVar4 = "Unknown";
  }
  do {
    cVar1 = *pcVar4;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 00505100: PUSH ESI
//   Label: core_lever.cpp_FUN_00505100
// 00505101: PUSH EDI
// 00505102: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00505106: MOV EDX,dword ptr [0x02dd3090]
//   XREF to: 02dd3090 (READ)
// 0050510c: PUSH EDX
// 0050510d: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00505111: PUSH ECX
// 00505112: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00505117: MOV EAX,dword ptr [EAX + 0x2d8]
// 0050511d: ADD ESP,0x8
// 00505120: TEST EAX,EAX
// 00505122: JBE 0x0050514b
//   XREF to: 0050514b (CONDITIONAL_JUMP)
// 00505124: CMP EAX,0x1
// 00505127: JNZ 0x00505152
//   XREF to: 00505152 (CONDITIONAL_JUMP)
// 00505129: MOV ESI,0x631165
//   XREF to: 00631165 (DATA)
// 0050512e: PUSH EDI
//   Label: LAB_0050512e
// 0050512f: MOV AL,byte ptr [ESI]
//   Label: LAB_0050512f
//   XREF to: 00631158 (READ)
//   XREF to: 00631165 (READ)
//   XREF to: 00631167 (READ)
//   XREF to: 00631170 (READ)
// 00505131: MOV byte ptr [EDI],AL
// 00505133: CMP AL,0x0
// 00505135: JZ 0x00505147
//   XREF to: 00505147 (CONDITIONAL_JUMP)
// 00505137: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00631159 (READ)
//   XREF to: 00631166 (READ)
//   XREF to: 00631168 (READ)
//   XREF to: 00631171 (READ)
// 0050513a: ADD ESI,0x2
// 0050513d: MOV byte ptr [EDI + 0x1],AL
// 00505140: ADD EDI,0x2
// 00505143: CMP AL,0x0
// 00505145: JNZ 0x0050512f
//   XREF to: 0050512f (CONDITIONAL_JUMP)
// 00505147: POP EDI
//   Label: LAB_00505147
// 00505148: POP EDI
// 00505149: POP ESI
// 0050514a: RET
// 0050514b: MOV ESI,0x631158
//   Label: LAB_0050514b
//   XREF to: 00631158 (DATA)
// 00505150: JMP 0x0050512e
//   XREF to: 0050512e (UNCONDITIONAL_JUMP)
// 00505152: MOV ESI,0x631170
//   Label: LAB_00505152
//   XREF to: 00631170 (DATA)
// 00505157: JMP 0x0050512e
//   XREF to: 0050512e (UNCONDITIONAL_JUMP)
