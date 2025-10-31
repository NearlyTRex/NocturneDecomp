// Name: core_lever.cpp_FUN_005047d0
// Address: 005047d0
// Address Range: [[005047d0, 00504891]]
// Convention: __cdecl
// Signature: CLever * core_lever.cpp_FUN_005047d0(CLever * this_ptr)
// Cross-references:
//   core_lever.cpp_FUN_00504790 (00504790) at 005047aa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_glever_kfm_00631071
//   CDemonActor_vtable PTR_core_lever.cpp_FUN_00660914
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_event.cpp_FUN_004b1670

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_FUN_005047d0(CLever *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  core_event_cpp_FUN_004b1670();
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_lever_cpp_FUN_00660914;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"glever.kfm");
  this_ptr_00[1].part_visibility_flags[1] = 0;
  *(undefined1 *)(this_ptr_00[1].part_visibility_flags + 3) = 0;
  *(undefined1 *)(this_ptr_00[1].part_visibility_flags + 0x1c) = 0;
  this_ptr_00[1].model_name[0x5c] = '\0';
  this_ptr_00[1].part_visibility_flags[2] = 0;
  this_ptr_00[1].animation_state[0x5c] = '\x01';
  this_ptr_00[1].animation_state[0x5d] = '\0';
  this_ptr_00[1].animation_state[0x5e] = '\0';
  this_ptr_00[1].animation_state[0x5f] = '\0';
  this_ptr_00[1].animation_state[0x60] = '\0';
  this_ptr_00[1].animation_state[0x61] = '\0';
  this_ptr_00[1].animation_state[0x62] = '\0';
  this_ptr_00[1].animation_state[99] = '\0';
  this_ptr_00[1].animation_state[100] = '\x17';
  this_ptr_00[1].animation_state[0x65] = '\0';
  this_ptr_00[1].animation_state[0x66] = '\0';
  this_ptr_00[1].animation_state[0x67] = '\0';
  this_ptr_00[1].animation_state[0x68] = '\0';
  this_ptr_00[1].animation_state[0x69] = '\0';
  this_ptr_00[1].animation_state[0x6a] = '\0';
  this_ptr_00[1].animation_state[0x6b] = '\0';
  this_ptr_00[1].animation_state[0x6c] = '\0';
  this_ptr_00[1].animation_state[0x6d] = '\0';
  this_ptr_00[1].animation_state[0x6e] = '\0';
  this_ptr_00[1].animation_state[0x6f] = '\0';
  this_ptr_00[4].model_name[0x4c] = '\x02';
  this_ptr_00[4].model_name[0x4d] = '\0';
  this_ptr_00[4].model_name[0x4e] = '\0';
  this_ptr_00[4].model_name[0x4f] = '\0';
  this_ptr_00[4].model_name[0x50] = '\x01';
  this_ptr_00[4].model_name[0x51] = '\0';
  this_ptr_00[4].model_name[0x52] = '\0';
  this_ptr_00[4].model_name[0x53] = '\0';
  return (CLever *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 005047d0: PUSH EBX
//   Label: core_lever.cpp_FUN_005047d0
// 005047d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005047d5: PUSH EBX
// 005047d6: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 005047db: ADD ESP,0x4
// 005047de: ADD EAX,0x158
// 005047e3: PUSH EAX
// 005047e4: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005047e9: ADD ESP,0x4
// 005047ec: LEA EBX,[EAX + 0x2c8]
// 005047f2: PUSH EBX
// 005047f3: CALL core_event.cpp_FUN_004b1670
//   XREF to: 004b1670 (UNCONDITIONAL_CALL)
// 005047f8: ADD ESP,0x4
// 005047fb: SUB EBX,0x420
// 00504801: PUSH 0x631071
//   XREF to: 00631071 (DATA)
// 00504806: LEA EAX,[EBX + 0x158]
// 0050480c: PUSH EAX
// 0050480d: MOV dword ptr [EBX + 0x154],0x660914
//   XREF to: 00660914 (DATA)
// 00504817: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0050481c: MOV dword ptr [EBX + 0x2d8],0x0
// 00504826: MOV byte ptr [EBX + 0x2e0],0x0
// 0050482d: MOV byte ptr [EBX + 0x344],0x0
// 00504834: MOV byte ptr [EBX + 0x3a8],0x0
// 0050483b: MOV dword ptr [EBX + 0x2dc],0x0
// 00504845: MOV dword ptr [EBX + 0x40c],0x1
// 0050484f: MOV dword ptr [EBX + 0x410],0x0
// 00504859: MOV dword ptr [EBX + 0x414],0x17
// 00504863: MOV dword ptr [EBX + 0x418],0x0
// 0050486d: MOV dword ptr [EBX + 0x41c],0x0
// 00504877: ADD ESP,0x8
// 0050487a: MOV dword ptr [EBX + 0x80c],0x2
// 00504884: MOV EAX,EBX
// 00504886: MOV dword ptr [EBX + 0x810],0x1
// 00504890: POP EBX
// 00504891: RET
