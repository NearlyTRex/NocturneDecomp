// Name: core_battery.cpp_CBattery_ctor_FUN_00417e90
// Address: 00417e90
// Address Range: [[00417e90, 00417ee7]]
// Convention: __cdecl
// Signature: CBattery * core_battery.cpp_CBattery_ctor_FUN_00417e90(CBattery * this_ptr)
// Cross-references:
//   core_battery.cpp_FUN_00417e50 (00417e50) at 00417e6a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_question_kfm_006159d9
//   CDemonActor_vtable g_CBatteryVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_CBattery_ctor_FUN_00417e90(CBattery *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CBatteryVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"question.kfm");
  this_ptr_00[1].part_visibility_flags[1] = 0x41f00000;
  this_ptr_00[1].part_visibility_flags[2] = 0x41f00000;
  return (CBattery *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 00417e90: PUSH EBX
//   Label: core_battery.cpp_CBattery_ctor_FUN_00417e90
// 00417e91: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00417e95: PUSH EBX
// 00417e96: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 00417e9b: ADD ESP,0x4
// 00417e9e: ADD EAX,0x158
// 00417ea3: PUSH EAX
// 00417ea4: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 00417ea9: ADD ESP,0x4
// 00417eac: LEA EBX,[EAX + 0xfffffea8]
// 00417eb2: PUSH 0x6159d9
//   XREF to: 006159d9 (DATA)
// 00417eb7: LEA EAX,[EBX + 0x158]
// 00417ebd: PUSH EAX
// 00417ebe: MOV dword ptr [EBX + 0x154],0x65a934
//   XREF to: 0065a934 (DATA)
// 00417ec8: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00417ecd: ADD ESP,0x8
// 00417ed0: MOV dword ptr [EBX + 0x2d8],0x41f00000
// 00417eda: MOV EAX,EBX
// 00417edc: MOV dword ptr [EBX + 0x2dc],0x41f00000
// 00417ee6: POP EBX
// 00417ee7: RET
