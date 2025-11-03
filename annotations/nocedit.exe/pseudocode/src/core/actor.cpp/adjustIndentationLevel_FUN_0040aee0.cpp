// Name: core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
// Address: 0040aee0
// Address Range: [[0040aee0, 0040af25]]
// Convention: __cdecl
// Signature: int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
// Cross-references:
//   core_actor.cpp_CDemonActor_save_FUN_0040af30 (0040af30) at 0040afd8 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeClothList_FUN_0040be60 (0040be60) at 0040bf72 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0 (0040b9f0) at 0040ba93 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializePartStatus_FUN_0040bae0 (0040bae0) at 0040bc63 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeRules_FUN_0040c000 (0040c000) at 0040c121 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeSimBox_FUN_0040bd70 (0040bd70) at 0040be13 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_save_FUN_004ff210 (004ff210) at 004ff372 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0066e176
//   undefined4 DAT_0066e177
//   char[104] g_PropertyNamePrefix
//   undefined4 s__0066e179

#include "nocturne.h"

int __cdecl core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = g_PropertyNamePrefix;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = indent_delta + (~uVar3 - 1);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  g_PropertyNamePrefix[iVar2] = '\0';
  for (; 0 < iVar2; iVar2 = iVar2 + -1) {
    (&DAT_0066e177)[iVar2] = 9;
  }
  return iVar2;
}


// Assembly code:
// 0040aee0: PUSH EDI
//   Label: core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
// 0040aee1: MOV EDI,0x66e178
//   XREF to: 0066e178 (DATA)
// 0040aee6: SUB ECX,ECX
// 0040aee8: DEC ECX
// 0040aee9: XOR EAX,EAX
// 0040aeeb: SCASB.REPNE ES:EDI
//   XREF to: 0066e178 (READ)
//   XREF to: 0066e179 (READ)
// 0040aeed: NOT ECX
// 0040aeef: DEC ECX
// 0040aef0: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0040aef4: ADD EAX,ECX
// 0040aef6: TEST EAX,EAX
// 0040aef8: JL 0x0040af22
//   XREF to: 0040af22 (CONDITIONAL_JUMP)
// 0040aefa: XOR DL,DL
//   Label: LAB_0040aefa
// 0040aefc: MOV byte ptr [EAX + 0x66e178],DL
//   XREF to: 0066e178 (WRITE)
//   XREF to: 0066e179 (DATA)
// 0040af02: TEST EAX,EAX
// 0040af04: JLE 0x0040af20
//   XREF to: 0040af20 (CONDITIONAL_JUMP)
// 0040af06: MOV DH,0x9
// 0040af08: DEC EAX
//   Label: LAB_0040af08
// 0040af09: MOV byte ptr [EAX + 0x66e178],DH
//   XREF to: 0066e178 (DATA)
//   XREF to: 0066e176 (DATA)
//   XREF to: 0066e177 (DATA)
// 0040af0f: TEST EAX,EAX
// 0040af11: JG 0x0040af08
//   XREF to: 0040af08 (CONDITIONAL_JUMP)
// 0040af13: LEA EAX,[EAX]
// 0040af19: LEA EDX,[EDX]
// 0040af1f: NOP
// 0040af20: POP EDI
//   Label: LAB_0040af20
// 0040af21: RET
// 0040af22: XOR EAX,EAX
//   Label: LAB_0040af22
// 0040af24: JMP 0x0040aefa
//   XREF to: 0040aefa (UNCONDITIONAL_JUMP)
