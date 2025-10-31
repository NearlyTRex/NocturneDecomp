// Name: core_flamecan.cpp_CFlameCan_load_FUN_004cb620
// Address: 004cb620
// Address Range: [[004cb620, 004cb67f]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_CFlameCan_load_FUN_004cb620()
// Globals:
//   TerminatedCString s_modelName_0062a2f0
//   TerminatedCString s_onFire_0062a2fa
//   TerminatedCString s_timeToExplode_0062a301
//   TerminatedCString s_onFireCondition_0062a30f
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_CFlameCan_load(CFlameCan* pFlameCan) */

void core_flamecan_cpp_CFlameCan_load_FUN_004cb620(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.y,"onFire");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[2].location.position.z,"timeToExplode");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].location.area_id,"onFireCondition");
  return;
}


// Assembly code:
// 004cb620: PUSH EBX
//   Label: core_flamecan.cpp_CFlameCan_load_FUN_004cb620
// 004cb621: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cb625: PUSH EBX
// 004cb626: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004cb62b: ADD ESP,0x4
// 004cb62e: PUSH 0x62a2f0
//   XREF to: 0062a2f0 (DATA)
// 004cb633: LEA EAX,[EBX + 0x158]
// 004cb639: PUSH EAX
// 004cb63a: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 004cb63f: ADD ESP,0x8
// 004cb642: PUSH 0x62a2fa
//   XREF to: 0062a2fa (DATA)
// 004cb647: LEA EAX,[EBX + 0x2d4]
// 004cb64d: PUSH EAX
// 004cb64e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004cb653: ADD ESP,0x8
// 004cb656: PUSH 0x62a301
//   XREF to: 0062a301 (DATA)
// 004cb65b: LEA EAX,[EBX + 0x2d8]
// 004cb661: PUSH EAX
// 004cb662: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004cb667: ADD ESP,0x8
// 004cb66a: PUSH 0x62a30f
//   XREF to: 0062a30f (DATA)
// 004cb66f: ADD EBX,0x2dc
// 004cb675: PUSH EBX
// 004cb676: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004cb67b: ADD ESP,0x8
// 004cb67e: POP EBX
// 004cb67f: RET
