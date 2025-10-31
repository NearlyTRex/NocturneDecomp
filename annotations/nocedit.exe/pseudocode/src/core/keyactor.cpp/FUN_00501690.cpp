// Name: core_keyactor.cpp_FUN_00501690
// Address: 00501690
// Address Range: [[00501690, 005016e7]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_00501690()
// Cross-references:
//   core_keyactor.cpp_FUN_00501650 (00501650) at 0050166a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_key1_kfm_00630c34
//   CDemonActor_vtable PTR_core_keyactor.cpp_FUN_006604b4
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

int * core_keyactor_cpp_FUN_00501690(void)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(in_stack_00000004);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&PTR_core_keyactor_cpp_FUN_006604b4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr,"key1.kfm");
  this_ptr[1].part_visibility_flags[0] = 1;
  this_ptr[1].part_visibility_flags[1] = 0;
  return this_ptr[-1].part_visibility_flags + 9;
}


// Assembly code:
// 00501690: PUSH EBX
//   Label: core_keyactor.cpp_FUN_00501690
// 00501691: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00501695: PUSH EBX
// 00501696: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0050169b: ADD ESP,0x4
// 0050169e: ADD EAX,0x158
// 005016a3: PUSH EAX
// 005016a4: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005016a9: ADD ESP,0x4
// 005016ac: LEA EBX,[EAX + 0xfffffea8]
// 005016b2: PUSH 0x630c34
//   XREF to: 00630c34 (DATA)
// 005016b7: LEA EAX,[EBX + 0x158]
// 005016bd: PUSH EAX
// 005016be: MOV dword ptr [EBX + 0x154],0x6604b4
//   XREF to: 006604b4 (DATA)
// 005016c8: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005016cd: ADD ESP,0x8
// 005016d0: MOV dword ptr [EBX + 0x2d4],0x1
// 005016da: MOV EAX,EBX
// 005016dc: MOV dword ptr [EBX + 0x2d8],0x0
// 005016e6: POP EBX
// 005016e7: RET
