// Name: core_hpriest.cpp_FUN_004f7b70
// Address: 004f7b70
// Address Range: [[004f7b70, 004f7bca]]
// Convention: __cdecl
// Signature: CHighPriestOfGardath * core_hpriest.cpp_FUN_004f7b70(CHighPriestOfGardath * this_ptr)
// Cross-references:
//   core_hpriest.cpp_FUN_004f7b30 (004f7b30) at 004f7b4a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_priest_dfm_0062f55d
//   TerminatedCString s_killPriest_0062f568
//   undefined4 s_illPriest_0062f569
//   undefined4 s_llPriest_0062f56a
//   undefined4 s_lPriest_0062f56b
//   CDemonActor_vtable PTR_core_npc.cpp_FUN_0065fe94
// Function calls:
//   core_npc.cpp_FUN_005447e0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

CHighPriestOfGardath * __cdecl core_hpriest_cpp_FUN_004f7b70(CHighPriestOfGardath *this_ptr)

{
  char cVar1;
  CHighPriestOfGardath *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CHighPriestOfGardath *)core_npc_cpp_FUN_005447e0(&this_ptr->base_npc);
  (pCVar2->base_npc).base_character.base_actor.vtable = &PTR_core_npc_cpp_FUN_0065fe94;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840(&(pCVar2->base_npc).base_character.model);
  pcVar3 = "killPriest";
  pcVar4 = pCVar2->field1_0x1f708;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return pCVar2;
}


// Assembly code:
// 004f7b70: PUSH EBX
//   Label: core_hpriest.cpp_FUN_004f7b70
// 004f7b71: PUSH ESI
// 004f7b72: PUSH EDI
// 004f7b73: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004f7b77: PUSH EDX
// 004f7b78: CALL core_npc.cpp_FUN_005447e0
//   XREF to: 005447e0 (UNCONDITIONAL_CALL)
// 004f7b7d: ADD ESP,0x4
// 004f7b80: PUSH 0x62f55d
//   XREF to: 0062f55d (DATA)
// 004f7b85: MOV EBX,EAX
// 004f7b87: LEA EDI,[EAX + 0x158]
// 004f7b8d: PUSH EDI
// 004f7b8e: MOV dword ptr [EAX + 0x154],0x65fe94
//   XREF to: 0065fe94 (DATA)
// 004f7b98: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004f7b9d: ADD ESP,0x8
// 004f7ba0: MOV ESI,0x62f568
//   XREF to: 0062f568 (DATA)
// 004f7ba5: LEA EDI,[EBX + 0x1f708]
// 004f7bab: PUSH EDI
// 004f7bac: MOV AL,byte ptr [ESI]
//   Label: LAB_004f7bac
//   XREF to: 0062f568 (READ)
//   XREF to: 0062f56a (READ)
// 004f7bae: MOV byte ptr [EDI],AL
// 004f7bb0: CMP AL,0x0
// 004f7bb2: JZ 0x004f7bc4
//   XREF to: 004f7bc4 (CONDITIONAL_JUMP)
// 004f7bb4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062f569 (READ)
//   XREF to: 0062f56b (READ)
// 004f7bb7: ADD ESI,0x2
// 004f7bba: MOV byte ptr [EDI + 0x1],AL
// 004f7bbd: ADD EDI,0x2
// 004f7bc0: CMP AL,0x0
// 004f7bc2: JNZ 0x004f7bac
//   XREF to: 004f7bac (CONDITIONAL_JUMP)
// 004f7bc4: POP EDI
//   Label: LAB_004f7bc4
// 004f7bc5: MOV EAX,EBX
// 004f7bc7: POP EDI
// 004f7bc8: POP ESI
// 004f7bc9: POP EBX
// 004f7bca: RET
