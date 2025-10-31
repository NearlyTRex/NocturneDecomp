// Name: core_tentacle.cpp_CTentacle_serialize_FUN_005db880
// Address: 005db880
// Address Range: [[005db880, 005db8fc]]
// Convention: __cdecl
// Signature: void core_tentacle.cpp_CTentacle_serialize_FUN_005db880(CTentacle * this_ptr)
// Globals:
//   undefined4 s_modelName_00654e4c
//   TerminatedCString s_guardDistance_00654e56
//   TerminatedCString s_motion_state_00654e64
//   TerminatedCString s_partStatus_00654e71
//   TerminatedCString s_graveActor_00654e7c
//   undefined4 g_CTentacleClassVersion
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializePartStatus_FUN_0040bae0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_serialize_FUN_005db880(CTentacle *this_ptr)

{
  CDeformableModelInstance *motion;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base_enemy);
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base_enemy).base_character.model,"0@modelName" + 2);
  if (g_CTentacleClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&(this_ptr->base_enemy).guard_distance,"guardDistance");
  }
  motion = &(this_ptr->base_enemy).base_character.model;
  core_actor_cpp_serializeMotionState_FUN_0040b9f0(motion,"motion state");
  core_actor_cpp_serializePartStatus_FUN_0040bae0(motion,"partStatus");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(this_ptr->field1_0xbeb4 + 0x10),"graveActor");
  return;
}


// Assembly code:
// 005db880: PUSH EBX
//   Label: core_tentacle.cpp_CTentacle_serialize_FUN_005db880
// 005db881: PUSH ESI
// 005db882: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005db886: PUSH EBX
// 005db887: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 005db88c: ADD ESP,0x4
// 005db88f: PUSH 0x654e4c
//   XREF to: 00654e4c (DATA)
// 005db894: LEA ESI,[EBX + 0x158]
// 005db89a: PUSH ESI
// 005db89b: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 005db8a0: MOV EDX,dword ptr [0x006842c8]
//   XREF to: 006842c8 (READ)
// 005db8a6: ADD ESP,0x8
// 005db8a9: CMP EDX,0x2
// 005db8ac: JL 0x005db8e7
//   XREF to: 005db8e7 (CONDITIONAL_JUMP)
// 005db8ae: PUSH 0x654e64
//   Label: LAB_005db8ae
//   XREF to: 00654e64 (DATA)
// 005db8b3: LEA ESI,[EBX + 0x158]
// 005db8b9: PUSH ESI
// 005db8ba: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 005db8bf: ADD ESP,0x8
// 005db8c2: PUSH 0x654e71
//   XREF to: 00654e71 (DATA)
// 005db8c7: PUSH ESI
// 005db8c8: CALL core_actor.cpp_serializePartStatus_FUN_0040bae0
//   XREF to: 0040bae0 (UNCONDITIONAL_CALL)
// 005db8cd: ADD ESP,0x8
// 005db8d0: PUSH 0x654e7c
//   XREF to: 00654e7c (DATA)
// 005db8d5: ADD EBX,0xbec4
// 005db8db: PUSH EBX
// 005db8dc: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005db8e1: ADD ESP,0x8
// 005db8e4: POP ESI
// 005db8e5: POP EBX
// 005db8e6: RET
// 005db8e7: PUSH 0x654e56
//   Label: LAB_005db8e7
//   XREF to: 00654e56 (DATA)
// 005db8ec: LEA ESI,[EBX + 0xbe34]
// 005db8f2: PUSH ESI
// 005db8f3: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005db8f8: ADD ESP,0x8
// 005db8fb: JMP 0x005db8ae
//   XREF to: 005db8ae (UNCONDITIONAL_JUMP)
