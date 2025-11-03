// Name: core_zombie.cpp_CZombie_FUN_005fbe20
// Address: 005fbe20
// Address Range: [[005fbe20, 005fbe60]]
// Convention: __cdecl
// Signature: int core_zombie.cpp_CZombie_FUN_005fbe20(CZombie * this_ptr)
// Globals:
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
//   core_charactr.cpp_CCharacter_FUN_0042a2c0
//   core_motion.cpp_CMotionController_FUN_0052dab0

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_FUN_005fbe20(CZombie *this_ptr)

{
  int iVar1;
  
  iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0
                    (&(this_ptr->base_enemy).base_character.model.motion_controller);
  if (*(int *)(iVar1 + 0x24) == 0xe) {
    if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
      return 0;
    }
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940((CDemonActor *)this_ptr,3);
  }
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042a2c0((CCharacter *)this_ptr);
  return iVar1;
}


// Assembly code:
// 005fbe20: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fbe20
// 005fbe21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fbe25: LEA EAX,[EBX + 0x158]
// 005fbe2b: PUSH EAX
// 005fbe2c: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005fbe31: MOV EAX,dword ptr [EAX + 0x24]
// 005fbe34: ADD ESP,0x4
// 005fbe37: CMP EAX,0xe
// 005fbe3a: JNZ 0x005fbe52
//   XREF to: 005fbe52 (CONDITIONAL_JUMP)
// 005fbe3c: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005fbe41: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 005fbe45: JZ 0x005fbe5d
//   XREF to: 005fbe5d (CONDITIONAL_JUMP)
// 005fbe47: PUSH 0x3
// 005fbe49: PUSH EBX
// 005fbe4a: CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
//   XREF to: 0040d940 (UNCONDITIONAL_CALL)
// 005fbe4f: ADD ESP,0x8
// 005fbe52: PUSH EBX
//   Label: LAB_005fbe52
// 005fbe53: CALL core_charactr.cpp_CCharacter_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 005fbe58: ADD ESP,0x4
// 005fbe5b: POP EBX
// 005fbe5c: RET
// 005fbe5d: XOR EAX,EAX
//   Label: LAB_005fbe5d
// 005fbe5f: POP EBX
// 005fbe60: RET
