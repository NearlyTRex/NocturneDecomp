// Name: core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00
// Address: 004e5d00
// Address Range: [[004e5d00, 004e5d4d]]
// Convention: __cdecl
// Signature: CGasMask * core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00(CGasMask * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004e0332 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_FUN_004e5cc0 (004e5cc0) at 004e5cda [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_gasmask_kfm_0062daa9
//   CDemonActor_vtable PTR_core_gasmask.cpp_CGasMask_FUN_004e5d50_0065ebf4
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(CGasMask *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr =
       (CKeyFramedModel *)&PTR_core_gasmask_cpp_CGasMask_FUN_004e5d50_0065ebf4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"gasmask.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CGasMask *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 004e5d00: PUSH EBX
//   Label: core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00
// 004e5d01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e5d05: PUSH EBX
// 004e5d06: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004e5d0b: ADD ESP,0x4
// 004e5d0e: ADD EAX,0x158
// 004e5d13: PUSH EAX
// 004e5d14: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004e5d19: ADD ESP,0x4
// 004e5d1c: LEA EBX,[EAX + 0xfffffea8]
// 004e5d22: PUSH 0x62daa9
//   XREF to: 0062daa9 (DATA)
// 004e5d27: LEA EAX,[EBX + 0x158]
// 004e5d2d: PUSH EAX
// 004e5d2e: MOV dword ptr [EBX + 0x154],0x65ebf4
//   XREF to: 0065ebf4 (DATA)
// 004e5d38: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004e5d3d: ADD ESP,0x8
// 004e5d40: MOV EAX,EBX
// 004e5d42: MOV dword ptr [EBX + 0x2d4],0x0
// 004e5d4c: POP EBX
// 004e5d4d: RET
