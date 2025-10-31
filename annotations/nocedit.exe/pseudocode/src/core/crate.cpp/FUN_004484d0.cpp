// Name: core_crate.cpp_FUN_004484d0
// Address: 004484d0
// Address Range: [[004484d0, 00448527]]
// Convention: __cdecl
// Signature: CCrate * core_crate.cpp_FUN_004484d0(CCrate * this_ptr)
// Cross-references:
//   core_crate.cpp_FUN_00448490 (00448490) at 004484aa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_question_kfm_00619af3
//   CDemonActor_vtable PTR_core_crate.cpp_FUN_0065c264
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_FUN_004484d0(CCrate *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_crate_cpp_FUN_0065c264;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"question.kfm");
  this_ptr_00[1].part_visibility_flags[2] = 0;
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CCrate *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 004484d0: PUSH EBX
//   Label: core_crate.cpp_FUN_004484d0
// 004484d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004484d5: PUSH EBX
// 004484d6: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004484db: ADD ESP,0x4
// 004484de: ADD EAX,0x158
// 004484e3: PUSH EAX
// 004484e4: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004484e9: ADD ESP,0x4
// 004484ec: LEA EBX,[EAX + 0xfffffea8]
// 004484f2: PUSH 0x619af3
//   XREF to: 00619af3 (DATA)
// 004484f7: LEA EAX,[EBX + 0x158]
// 004484fd: PUSH EAX
// 004484fe: MOV dword ptr [EBX + 0x154],0x65c264
//   XREF to: 0065c264 (DATA)
// 00448508: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0044850d: ADD ESP,0x8
// 00448510: MOV dword ptr [EBX + 0x2dc],0x0
// 0044851a: MOV EAX,EBX
// 0044851c: MOV dword ptr [EBX + 0x2d4],0x0
// 00448526: POP EBX
// 00448527: RET
