// Name: core_hiram.cpp_FUN_004f43f0
// Address: 004f43f0
// Address Range: [[004f43f0, 004f444a]]
// Convention: __cdecl
// Signature: CHiram * core_hiram.cpp_FUN_004f43f0(CHiram * this_ptr)
// Cross-references:
//   core_hiram.cpp_FUN_004f43b0 (004f43b0) at 004f43ca [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_hiram_dfm_0062ede8
//   TerminatedCString s_killHiram_0062edf2
//   undefined4 s_illHiram_0062edf3
//   undefined4 s_llHiram_0062edf4
//   undefined4 s_lHiram_0062edf5
//   CDemonActor_vtable PTR_core_hiram.cpp_FUN_004f4530_0065f974
// Function calls:
//   core_npc.cpp_FUN_005447e0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

CHiram * __cdecl core_hiram_cpp_FUN_004f43f0(CHiram *this_ptr)

{
  char cVar1;
  CHiram *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CHiram *)core_npc_cpp_FUN_005447e0(&this_ptr->base_actor);
  (pCVar2->base_actor).base_character.base_actor.vtable = &PTR_core_hiram_cpp_FUN_004f4530_0065f974;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(pCVar2->base_actor).base_character.model);
  pcVar3 = "killHiram";
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
// 004f43f0: PUSH EBX
//   Label: core_hiram.cpp_FUN_004f43f0
// 004f43f1: PUSH ESI
// 004f43f2: PUSH EDI
// 004f43f3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004f43f7: PUSH EDX
// 004f43f8: CALL core_npc.cpp_FUN_005447e0
//   XREF to: 005447e0 (UNCONDITIONAL_CALL)
// 004f43fd: ADD ESP,0x4
// 004f4400: PUSH 0x62ede8
//   XREF to: 0062ede8 (DATA)
// 004f4405: MOV EBX,EAX
// 004f4407: LEA EDI,[EAX + 0x158]
// 004f440d: PUSH EDI
// 004f440e: MOV dword ptr [EAX + 0x154],0x65f974
//   XREF to: 0065f974 (DATA)
// 004f4418: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004f441d: ADD ESP,0x8
// 004f4420: MOV ESI,0x62edf2
//   XREF to: 0062edf2 (DATA)
// 004f4425: LEA EDI,[EBX + 0x1f708]
// 004f442b: PUSH EDI
// 004f442c: MOV AL,byte ptr [ESI]
//   Label: LAB_004f442c
//   XREF to: 0062edf2 (READ)
//   XREF to: 0062edf4 (READ)
// 004f442e: MOV byte ptr [EDI],AL
// 004f4430: CMP AL,0x0
// 004f4432: JZ 0x004f4444
//   XREF to: 004f4444 (CONDITIONAL_JUMP)
// 004f4434: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062edf3 (READ)
//   XREF to: 0062edf5 (READ)
// 004f4437: ADD ESI,0x2
// 004f443a: MOV byte ptr [EDI + 0x1],AL
// 004f443d: ADD EDI,0x2
// 004f4440: CMP AL,0x0
// 004f4442: JNZ 0x004f442c
//   XREF to: 004f442c (CONDITIONAL_JUMP)
// 004f4444: POP EDI
//   Label: LAB_004f4444
// 004f4445: MOV EAX,EBX
// 004f4447: POP EDI
// 004f4448: POP ESI
// 004f4449: POP EBX
// 004f444a: RET
