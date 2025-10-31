// Name: core_anvil.cpp_CAnvil_ctor_FUN_00411ce0
// Address: 00411ce0
// Address Range: [[00411ce0, 00411d6a]]
// Convention: __cdecl
// Signature: CAnvil * core_anvil.cpp_CAnvil_ctor_FUN_00411ce0(CAnvil * this_ptr)
// Cross-references:
//   core_anvil.cpp_constructor_FUN_00411ca0 (00411ca0) at 00411cba [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_question_kfm_00614d0c
//   TerminatedCString s_acmeanvilinc_00614d19
//   undefined4 s_cmeanvilinc_00614d1a
//   undefined4 s_meanvilinc_00614d1b
//   undefined4 s_eanvilinc_00614d1c
//   CDemonActor_vtable g_CAnvilVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_CAnvil_ctor_FUN_00411ce0(CAnvil *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pcVar3 = "acmeanvilinc";
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CAnvilVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"question.kfm");
  this_ptr_00[1].part_visibility_flags[0x19] = 0x41c80000;
  this_ptr_00[1].part_visibility_flags[0x1a] = 0;
  pCVar4 = this_ptr_00 + 1;
  this_ptr_00[1].part_visibility_flags[0x1b] = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar4->part_visibility_flags = cVar1;
    if (cVar1 == '\0') {
      return (CAnvil *)(this_ptr_00[-1].part_visibility_flags + 9);
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pCVar4->part_visibility_flags + 1) = cVar1;
    pCVar4 = (CKeyFramedModelInstance *)((int)pCVar4->part_visibility_flags + 2);
  } while (cVar1 != '\0');
  return (CAnvil *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 00411ce0: PUSH EBX
//   Label: core_anvil.cpp_CAnvil_ctor_FUN_00411ce0
// 00411ce1: PUSH ESI
// 00411ce2: PUSH EDI
// 00411ce3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00411ce7: PUSH EBX
// 00411ce8: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 00411ced: ADD ESP,0x4
// 00411cf0: ADD EAX,0x158
// 00411cf5: PUSH EAX
// 00411cf6: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 00411cfb: ADD ESP,0x4
// 00411cfe: LEA EBX,[EAX + 0xfffffea8]
// 00411d04: PUSH 0x614d0c
//   XREF to: 00614d0c (DATA)
// 00411d09: LEA EAX,[EBX + 0x158]
// 00411d0f: PUSH EAX
// 00411d10: MOV ESI,0x614d19
//   XREF to: 00614d19 (DATA)
// 00411d15: MOV dword ptr [EBX + 0x154],0x659c04
//   XREF to: 00659c04 (DATA)
// 00411d1f: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00411d24: MOV dword ptr [EBX + 0x338],0x41c80000
// 00411d2e: ADD ESP,0x8
// 00411d31: MOV dword ptr [EBX + 0x33c],0x0
// 00411d3b: LEA EDI,[EBX + 0x2d4]
// 00411d41: MOV dword ptr [EBX + 0x340],0x0
// 00411d4b: PUSH EDI
// 00411d4c: MOV AL,byte ptr [ESI]
//   Label: LAB_00411d4c
//   XREF to: 00614d19 (READ)
//   XREF to: 00614d1b (READ)
// 00411d4e: MOV byte ptr [EDI],AL
// 00411d50: CMP AL,0x0
// 00411d52: JZ 0x00411d64
//   XREF to: 00411d64 (CONDITIONAL_JUMP)
// 00411d54: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00614d1a (READ)
//   XREF to: 00614d1c (READ)
// 00411d57: ADD ESI,0x2
// 00411d5a: MOV byte ptr [EDI + 0x1],AL
// 00411d5d: ADD EDI,0x2
// 00411d60: CMP AL,0x0
// 00411d62: JNZ 0x00411d4c
//   XREF to: 00411d4c (CONDITIONAL_JUMP)
// 00411d64: POP EDI
//   Label: LAB_00411d64
// 00411d65: MOV EAX,EBX
// 00411d67: POP EDI
// 00411d68: POP ESI
// 00411d69: POP EBX
// 00411d6a: RET
