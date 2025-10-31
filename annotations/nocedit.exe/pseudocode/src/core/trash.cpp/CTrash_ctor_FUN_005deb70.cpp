// Name: core_trash.cpp_CTrash_ctor_FUN_005deb70
// Address: 005deb70
// Address Range: [[005deb70, 005debb3]]
// Convention: __cdecl
// Signature: CTrash * core_trash.cpp_CTrash_ctor_FUN_005deb70(CTrash * this_ptr)
// Cross-references:
//   core_trash.cpp_FUN_005deb30 (005deb30) at 005deb4a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_question_kfm_0065557f
//   CDemonActor_vtable g_CTrashVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_005deb70(CTrash *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CTrashVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"question.kfm");
  return (CTrash *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 005deb70: PUSH EBX
//   Label: core_trash.cpp_CTrash_ctor_FUN_005deb70
// 005deb71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005deb75: PUSH EBX
// 005deb76: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 005deb7b: ADD ESP,0x4
// 005deb7e: ADD EAX,0x158
// 005deb83: PUSH EAX
// 005deb84: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005deb89: ADD ESP,0x4
// 005deb8c: LEA EBX,[EAX + 0xfffffea8]
// 005deb92: PUSH 0x65557f
//   XREF to: 0065557f (DATA)
// 005deb97: LEA EAX,[EBX + 0x158]
// 005deb9d: PUSH EAX
// 005deb9e: MOV dword ptr [EBX + 0x154],0x6648f4
//   XREF to: 006648f4 (DATA)
// 005deba8: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005debad: ADD ESP,0x8
// 005debb0: MOV EAX,EBX
// 005debb2: POP EBX
// 005debb3: RET
