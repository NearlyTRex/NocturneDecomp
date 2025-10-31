// Name: core_manpuz.cpp_FUN_0050b110
// Address: 0050b110
// Address Range: [[0050b110, 0050b15d]]
// Convention: __cdecl
// Signature: CMirrorHack * core_manpuz.cpp_FUN_0050b110(CMirrorHack * this_ptr)
// Cross-references:
//   core_manpuz.cpp_FUN_0050b0d0 (0050b0d0) at 0050b0ed [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_mirrhack_kfm_00635918
//   CDemonActor_vtable PTR_core_manpuz.cpp_FUN_00660e94
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_FUN_0050b110(CMirrorHack *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_manpuz_cpp_FUN_00660e94;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"mirrhack.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CMirrorHack *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 0050b110: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b110
// 0050b111: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050b115: PUSH EBX
// 0050b116: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0050b11b: ADD ESP,0x4
// 0050b11e: ADD EAX,0x158
// 0050b123: PUSH EAX
// 0050b124: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 0050b129: ADD ESP,0x4
// 0050b12c: LEA EBX,[EAX + 0xfffffea8]
// 0050b132: PUSH 0x635918
//   XREF to: 00635918 (DATA)
// 0050b137: LEA EAX,[EBX + 0x158]
// 0050b13d: PUSH EAX
// 0050b13e: MOV dword ptr [EBX + 0x154],0x660e94
//   XREF to: 00660e94 (DATA)
// 0050b148: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0050b14d: ADD ESP,0x8
// 0050b150: MOV EAX,EBX
// 0050b152: MOV dword ptr [EBX + 0x2d4],0x0
// 0050b15c: POP EBX
// 0050b15d: RET
