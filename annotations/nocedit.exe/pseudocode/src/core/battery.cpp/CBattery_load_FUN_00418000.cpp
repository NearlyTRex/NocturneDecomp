// Name: core_battery.cpp_CBattery_load_FUN_00418000
// Address: 00418000
// Address Range: [[00418000, 0041804b]]
// Convention: unknown
// Signature: undefined core_battery.cpp_CBattery_load_FUN_00418000()
// Globals:
//   TerminatedCString s_modelName_006159ec
//   TerminatedCString s_rechargeTime_006159f6
//   TerminatedCString s_dischargeTime_00615a03
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0

#include "nocturne.h"

/* Signature: void actors_other_battery.cpp_CBattery_load(CBattery* param_1, undefined4 param_2,
   char* param_3, char* param_4) */

void core_battery_cpp_CBattery_load_FUN_00418000(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[2].location.position.z,"rechargeTime");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[2].location.area_id,"dischargeTime");
  return;
}


// Assembly code:
// 00418000: PUSH EBX
//   Label: core_battery.cpp_CBattery_load_FUN_00418000
// 00418001: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00418005: PUSH EBX
// 00418006: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0041800b: ADD ESP,0x4
// 0041800e: PUSH 0x6159ec
//   XREF to: 006159ec (DATA)
// 00418013: LEA EAX,[EBX + 0x158]
// 00418019: PUSH EAX
// 0041801a: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 0041801f: ADD ESP,0x8
// 00418022: PUSH 0x6159f6
//   XREF to: 006159f6 (DATA)
// 00418027: LEA EAX,[EBX + 0x2d8]
// 0041802d: PUSH EAX
// 0041802e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00418033: ADD ESP,0x8
// 00418036: PUSH 0x615a03
//   XREF to: 00615a03 (DATA)
// 0041803b: ADD EBX,0x2dc
// 00418041: PUSH EBX
// 00418042: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00418047: ADD ESP,0x8
// 0041804a: POP EBX
// 0041804b: RET
