// Name: core_vessel.cpp_CCryptVessel_serialize_FUN_005e9a80
// Address: 005e9a80
// Address Range: [[005e9a80, 005e9b8c]]
// Convention: __cdecl
// Signature: void core_vessel.cpp_CCryptVessel_serialize_FUN_005e9a80(CCryptVessel * this_ptr)
// Globals:
//   TerminatedCString s_modelName_00657083
//   TerminatedCString s_prey_0065708d
//   TerminatedCString s_neutral_00657092
//   TerminatedCString s_destroyedEvent_0065709a
//   TerminatedCString s_startLoc_006570a9
//   TerminatedCString s_endLoc_006570b2
//   TerminatedCString s_state_006570b9
//   TerminatedCString s_timer_006570bf
//   TerminatedCString s_winEvent_006570c5
//   TerminatedCString s_eatDistance_006570ce
//   TerminatedCString s_visualType_006570da
//   int g_CCryptVesselClassVersion = 0x4
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_serialize_FUN_005e9a80(CCryptVessel *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)&this_ptr->model_name,"modelName");
  core_actor_cpp_serializeActor_FUN_0040b870((CDemonActor *)&this_ptr->prey,"prey");
  core_actor_cpp_serializeActor_FUN_0040b870((CDemonActor *)&this_ptr->neutral,"neutral");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)this_ptr->destroyed_event,"destroyedEvent");
  core_actor_cpp_serializeActor_FUN_0040b870((CDemonActor *)this_ptr->start_loc,"startLoc")
  ;
  core_actor_cpp_serializeActor_FUN_0040b870((CDemonActor *)this_ptr->end_loc,"endLoc");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->state,"state");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->timer,"timer");
  if (1 < g_CCryptVesselClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)this_ptr->win_event,"winEvent");
  }
  if (2 < g_CCryptVesselClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->eat_distance,"eatDistance");
  }
  if (g_CCryptVesselClassVersion < 4) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->visual_type,"visualType");
  return;
}


// Assembly code:
// 005e9a80: PUSH EBX
//   Label: core_vessel.cpp_CCryptVessel_serialize_FUN_005e9a80
// 005e9a81: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e9a85: PUSH EBX
// 005e9a86: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005e9a8b: ADD ESP,0x4
// 005e9a8e: PUSH 0x657083
//   XREF to: 00657083 (DATA)
// 005e9a93: LEA EAX,[EBX + 0x158]
// 005e9a99: PUSH EAX
// 005e9a9a: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 005e9a9f: ADD ESP,0x8
// 005e9aa2: PUSH 0x65708d
//   XREF to: 0065708d (DATA)
// 005e9aa7: LEA EAX,[EBX + 0x2d8]
// 005e9aad: PUSH EAX
// 005e9aae: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005e9ab3: ADD ESP,0x8
// 005e9ab6: PUSH 0x657092
//   XREF to: 00657092 (DATA)
// 005e9abb: LEA EAX,[EBX + 0x2dc]
// 005e9ac1: PUSH EAX
// 005e9ac2: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005e9ac7: ADD ESP,0x8
// 005e9aca: PUSH 0x65709a
//   XREF to: 0065709a (DATA)
// 005e9acf: LEA EAX,[EBX + 0x2e0]
// 005e9ad5: PUSH EAX
// 005e9ad6: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e9adb: ADD ESP,0x8
// 005e9ade: PUSH 0x6570a9
//   XREF to: 006570a9 (DATA)
// 005e9ae3: LEA EAX,[EBX + 0x3a8]
// 005e9ae9: PUSH EAX
// 005e9aea: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005e9aef: ADD ESP,0x8
// 005e9af2: PUSH 0x6570b2
//   XREF to: 006570b2 (DATA)
// 005e9af7: LEA EAX,[EBX + 0x3ac]
// 005e9afd: PUSH EAX
// 005e9afe: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005e9b03: ADD ESP,0x8
// 005e9b06: PUSH 0x6570b9
//   XREF to: 006570b9 (DATA)
// 005e9b0b: LEA EAX,[EBX + 0x3b8]
// 005e9b11: PUSH EAX
// 005e9b12: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e9b17: ADD ESP,0x8
// 005e9b1a: PUSH 0x6570bf
//   XREF to: 006570bf (DATA)
// 005e9b1f: LEA EAX,[EBX + 0x3bc]
// 005e9b25: PUSH EAX
// 005e9b26: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e9b2b: MOV EDX,dword ptr [0x006844c8]
//   XREF to: 006844c8 (READ)
// 005e9b31: ADD ESP,0x8
// 005e9b34: CMP EDX,0x2
// 005e9b37: JGE 0x005e9b61
//   XREF to: 005e9b61 (CONDITIONAL_JUMP)
// 005e9b39: CMP dword ptr [0x006844c8],0x3
//   Label: LAB_005e9b39
//   XREF to: 006844c8 (READ)
// 005e9b40: JL 0x005e9b56
//   XREF to: 005e9b56 (CONDITIONAL_JUMP)
// 005e9b42: PUSH 0x6570ce
//   XREF to: 006570ce (DATA)
// 005e9b47: LEA EAX,[EBX + 0x3b0]
// 005e9b4d: PUSH EAX
// 005e9b4e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e9b53: ADD ESP,0x8
// 005e9b56: CMP dword ptr [0x006844c8],0x4
//   Label: LAB_005e9b56
//   XREF to: 006844c8 (READ)
// 005e9b5d: JGE 0x005e9b77
//   XREF to: 005e9b77 (CONDITIONAL_JUMP)
// 005e9b5f: POP EBX
// 005e9b60: RET
// 005e9b61: PUSH 0x6570c5
//   Label: LAB_005e9b61
//   XREF to: 006570c5 (DATA)
// 005e9b66: LEA EAX,[EBX + 0x344]
// 005e9b6c: PUSH EAX
// 005e9b6d: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e9b72: ADD ESP,0x8
// 005e9b75: JMP 0x005e9b39
//   XREF to: 005e9b39 (UNCONDITIONAL_JUMP)
// 005e9b77: PUSH 0x6570da
//   Label: LAB_005e9b77
//   XREF to: 006570da (DATA)
// 005e9b7c: ADD EBX,0x3b4
// 005e9b82: PUSH EBX
// 005e9b83: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e9b88: ADD ESP,0x8
// 005e9b8b: POP EBX
// 005e9b8c: RET
