// Name: core_door.cpp_CDoor_setup_FUN_0047fc70
// Address: 0047fc70
// Address Range: [[0047fc70, 0047fc8a]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_setup_FUN_0047fc70(CDoor * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_setup_FUN_0047fc70(CDoor *this_ptr)

{
  int iVar1;
  CDoor *pCStack00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  iVar1 = crt_string_c_strcmp_FUN_005fef20(this_ptr->field7_0x2e8,"defaultDoorOpen");
  if (iVar1 == 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(this_ptr->field7_0x2e8,"%sOpen");
  }
  iVar1 = crt_string_c_strcmp_FUN_005fef20(this_ptr->field7_0x2e8 + 100,"defaultDoorClose")
  ;
  if (iVar1 != 0) {
    return;
  }
  pCStack00000008 = this_ptr;
  crt_stdio_c_sprintf_FUN_005fdbd0(this_ptr->field7_0x2e8 + 100,"%sClose");
  return;
}


// Assembly code:
// 0047fc70: PUSH EBX
//   Label: core_door.cpp_CDoor_setup_FUN_0047fc70
// 0047fc71: PUSH ESI
// 0047fc72: MOV EBX,dword ptr [ESP + 0xc]
// 0047fc76: LEA EAX,[EBX + 0x158]
// 0047fc7c: PUSH EAX
// 0047fc7d: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 0047fc82: ADD ESP,0x4
// 0047fc85: PUSH EBX
// 0047fc86: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
