// Name: core_zombie.cpp_CZombie_FUN_005fc9e0
// Address: 005fc9e0
// Address Range: [[005fc9e0, 005fca0d]]
// Convention: __cdecl
// Signature: int core_zombie.cpp_CZombie_FUN_005fc9e0(CZombie * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_FUN_005fc9e0(CZombie *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  CDemonActor *in_stack_00000008;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base_enemy).base_character.model.motion_controller);
  if (pSVar1->state_index == 0xe) {
    return 1;
  }
  iVar2 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720(in_stack_00000008);
  return iVar2;
}


// Assembly code:
// 005fc9e0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_zombie.cpp_CZombie_FUN_005fc9e0
//   XREF to: Stack[0x4] (READ)
// 005fc9e4: ADD EAX,0x158
// 005fc9e9: PUSH EAX
// 005fc9ea: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005fc9ef: MOV EAX,dword ptr [EAX + 0x24]
// 005fc9f2: ADD ESP,0x4
// 005fc9f5: CMP EAX,0xe
// 005fc9f8: JNZ 0x005fca00
//   XREF to: 005fca00 (CONDITIONAL_JUMP)
// 005fc9fa: MOV EAX,0x1
// 005fc9ff: RET
// 005fca00: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_005fca00
//   XREF to: Stack[0x4] (READ)
// 005fca04: PUSH EDX
// 005fca05: CALL core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720
//   XREF to: 0040c720 (UNCONDITIONAL_CALL)
// 005fca0a: ADD ESP,0x4
// 005fca0d: RET
