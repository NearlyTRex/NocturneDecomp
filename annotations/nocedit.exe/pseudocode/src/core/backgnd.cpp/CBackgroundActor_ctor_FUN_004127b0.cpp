// Name: core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0
// Address: 004127b0
// Address Range: [[004127b0, 00412807]]
// Convention: __cdecl
// Signature: CBackgroundActor * core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0(CBackgroundActor * this_ptr)
// Cross-references:
//   core_backgnd.cpp_FUN_00412770 (00412770) at 0041278a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_candle_kfm_00614e53
//   CDemonActor_vtable g_CBackgroundActorVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CBackgroundActor * __cdecl
core_backgnd_cpp_CBackgroundActor_ctor_FUN_004127b0(CBackgroundActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CBackgroundActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"candle.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  return (CBackgroundActor *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 004127b0: PUSH EBX
//   Label: core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0
// 004127b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004127b5: PUSH EBX
// 004127b6: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004127bb: ADD ESP,0x4
// 004127be: ADD EAX,0x158
// 004127c3: PUSH EAX
// 004127c4: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004127c9: ADD ESP,0x4
// 004127cc: LEA EBX,[EAX + 0xfffffea8]
// 004127d2: PUSH 0x614e53
//   XREF to: 00614e53 (DATA)
// 004127d7: LEA EAX,[EBX + 0x158]
// 004127dd: PUSH EAX
// 004127de: MOV dword ptr [EBX + 0x154],0x659f44
//   XREF to: 00659f44 (DATA)
// 004127e8: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004127ed: ADD ESP,0x8
// 004127f0: MOV dword ptr [EBX + 0x2d4],0x0
// 004127fa: MOV EAX,EBX
// 004127fc: MOV dword ptr [EBX + 0x2d8],0x0
// 00412806: POP EBX
// 00412807: RET
