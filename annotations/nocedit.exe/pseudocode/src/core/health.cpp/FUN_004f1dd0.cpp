// Name: core_health.cpp_FUN_004f1dd0
// Address: 004f1dd0
// Address Range: [[004f1dd0, 004f1e27]]
// Convention: __cdecl
// Signature: CHealthItem * core_health.cpp_FUN_004f1dd0(CHealthItem * this_ptr)
// Cross-references:
//   core_health.cpp_FUN_004f1d90 (004f1d90) at 004f1daa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_bullet_kfm_0062e9f0
//   CDemonActor_vtable PTR_core_health.cpp_FUN_0065f5a4
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_FUN_004f1dd0(CHealthItem *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_health_cpp_FUN_0065f5a4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"bullet.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 1;
  this_ptr_00[1].part_visibility_flags[1] = 0x42480000;
  return (CHealthItem *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 004f1dd0: PUSH EBX
//   Label: core_health.cpp_FUN_004f1dd0
// 004f1dd1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f1dd5: PUSH EBX
// 004f1dd6: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004f1ddb: ADD ESP,0x4
// 004f1dde: ADD EAX,0x158
// 004f1de3: PUSH EAX
// 004f1de4: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004f1de9: ADD ESP,0x4
// 004f1dec: LEA EBX,[EAX + 0xfffffea8]
// 004f1df2: PUSH 0x62e9f0
//   XREF to: 0062e9f0 (DATA)
// 004f1df7: LEA EAX,[EBX + 0x158]
// 004f1dfd: PUSH EAX
// 004f1dfe: MOV dword ptr [EBX + 0x154],0x65f5a4
//   XREF to: 0065f5a4 (DATA)
// 004f1e08: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004f1e0d: ADD ESP,0x8
// 004f1e10: MOV dword ptr [EBX + 0x2d4],0x1
// 004f1e1a: MOV EAX,EBX
// 004f1e1c: MOV dword ptr [EBX + 0x2d8],0x42480000
// 004f1e26: POP EBX
// 004f1e27: RET
