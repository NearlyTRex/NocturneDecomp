// Name: core_trap.cpp_CTrap_ctor_FUN_005de690
// Address: 005de690
// Address Range: [[005de690, 005de6dd]]
// Convention: __cdecl
// Signature: CTrap * core_trap.cpp_CTrap_ctor_FUN_005de690(CTrap * this_ptr)
// Cross-references:
//   core_trap.cpp_FUN_005de650 (005de650) at 005de66a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_beartrap_kfm_0065552c
//   CDemonActor_vtable g_CTrapVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_005de690(CTrap *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CTrapVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"beartrap.kfm");
  this_ptr_00[1].part_visibility_flags[1] = 0;
  return (CTrap *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 005de690: PUSH EBX
//   Label: core_trap.cpp_CTrap_ctor_FUN_005de690
// 005de691: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005de695: PUSH EBX
// 005de696: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 005de69b: ADD ESP,0x4
// 005de69e: ADD EAX,0x158
// 005de6a3: PUSH EAX
// 005de6a4: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005de6a9: ADD ESP,0x4
// 005de6ac: LEA EBX,[EAX + 0xfffffea8]
// 005de6b2: PUSH 0x65552c
//   XREF to: 0065552c (DATA)
// 005de6b7: LEA EAX,[EBX + 0x158]
// 005de6bd: PUSH EAX
// 005de6be: MOV dword ptr [EBX + 0x154],0x6647c4
//   XREF to: 006647c4 (DATA)
// 005de6c8: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005de6cd: ADD ESP,0x8
// 005de6d0: MOV EAX,EBX
// 005de6d2: MOV dword ptr [EBX + 0x2d8],0x0
// 005de6dc: POP EBX
// 005de6dd: RET
