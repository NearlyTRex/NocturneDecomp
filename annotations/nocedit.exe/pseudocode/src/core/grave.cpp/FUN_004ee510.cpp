// Name: core_grave.cpp_FUN_004ee510
// Address: 004ee510
// Address Range: [[004ee510, 004ee593]]
// Convention: __cdecl
// Signature: CGrave * core_grave.cpp_FUN_004ee510(CGrave * this_ptr)
// Cross-references:
//   core_grave.cpp_FUN_004ee4d0 (004ee4d0) at 004ee4ea [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_grave1_kfm_0062e481
//   CDemonActor_vtable PTR_core_grave.cpp_FUN_0065f124
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_FUN_004ee510(CGrave *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_grave_cpp_FUN_0065f124;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"grave1.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  this_ptr_00[1].part_visibility_flags[1] = 0x41f00000;
  this_ptr_00[1].part_visibility_flags[2] = 0;
  this_ptr_00[1].part_visibility_flags[3] = 0;
  this_ptr_00[1].part_visibility_flags[4] = 1;
  *(undefined1 *)(this_ptr_00[1].part_visibility_flags + 5) = 0;
  this_ptr_00[1].model_name[0] = '\0';
  return (CGrave *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 004ee510: PUSH EBX
//   Label: core_grave.cpp_FUN_004ee510
// 004ee511: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004ee515: PUSH EBX
// 004ee516: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004ee51b: ADD ESP,0x4
// 004ee51e: ADD EAX,0x158
// 004ee523: PUSH EAX
// 004ee524: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004ee529: ADD ESP,0x4
// 004ee52c: LEA EBX,[EAX + 0xfffffea8]
// 004ee532: PUSH 0x62e481
//   XREF to: 0062e481 (DATA)
// 004ee537: LEA EAX,[EBX + 0x158]
// 004ee53d: PUSH EAX
// 004ee53e: MOV dword ptr [EBX + 0x154],0x65f124
//   XREF to: 0065f124 (DATA)
// 004ee548: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004ee54d: MOV dword ptr [EBX + 0x2d4],0x0
// 004ee557: MOV dword ptr [EBX + 0x2d8],0x41f00000
// 004ee561: MOV dword ptr [EBX + 0x2dc],0x0
// 004ee56b: MOV dword ptr [EBX + 0x2e0],0x0
// 004ee575: MOV dword ptr [EBX + 0x2e4],0x1
// 004ee57f: ADD ESP,0x8
// 004ee582: MOV byte ptr [EBX + 0x2e8],0x0
// 004ee589: MOV EAX,EBX
// 004ee58b: MOV byte ptr [EBX + 0x34c],0x0
// 004ee592: POP EBX
// 004ee593: RET
