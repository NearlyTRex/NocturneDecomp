// Name: core_zombie.cpp_CZombie_FUN_005fca80
// Address: 005fca80
// Address Range: [[005fca80, 005fcb54]]
// Convention: __cdecl
// Signature: void core_zombie.cpp_CZombie_FUN_005fca80(CZombie * this_ptr)
// Globals:
//   TerminatedCString s_Model_00658a4f
//   TerminatedCString s_State_00658a55
//   TerminatedCString s_RiseFromGraveCondition_00658a5b
//   TerminatedCString s_CGrave_00658a72
//   TerminatedCString s_Grave_actor_00658a79
//   TerminatedCString s_IsMinerZombie_00658a85
//   TerminatedCString s_CHASE_2_00658a93
//   TerminatedCString s_Always_fast_00658a9b
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_FUN_005fca80(CZombie *this_ptr)

{
  int iVar1;
  CMotionList *this_ptr_00;
  CActorPropertyList *in_stack_00000008;
  char *pcStack00000018;
  int *piStack0000001c;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0
                    (&(this_ptr->base_enemy).base_character.model.motion_controller);
  if (*(int *)(iVar1 + 0x24) == 0xe) {
    core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          (&(this_ptr->base_enemy).base_character.model.motion_controller);
  iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
  if (iVar1 != 0x16) {
    return;
  }
  piStack0000001c = &this_ptr->always_chase_fast;
  pcStack00000018 = "Always fast";
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 005fca80: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fca80
// 005fca81: PUSH ESI
// 005fca82: PUSH EDI
// 005fca83: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005fca87: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005fca8b: PUSH ESI
// 005fca8c: PUSH EBX
// 005fca8d: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 005fca92: ADD ESP,0x8
// 005fca95: PUSH 0x0
// 005fca97: LEA EDI,[EBX + 0x158]
// 005fca9d: PUSH EDI
// 005fca9e: PUSH 0x658a4f
//   XREF to: 00658a4f (DATA)
// 005fcaa3: PUSH ESI
// 005fcaa4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 005fcaa9: ADD ESP,0x10
// 005fcaac: PUSH EDI
// 005fcaad: PUSH 0x658a55
//   XREF to: 00658a55 (DATA)
// 005fcab2: PUSH ESI
// 005fcab3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 005fcab8: ADD ESP,0xc
// 005fcabb: PUSH EDI
// 005fcabc: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005fcac1: MOV EAX,dword ptr [EAX + 0x24]
// 005fcac4: ADD ESP,0x4
// 005fcac7: CMP EAX,0xe
// 005fcaca: JNZ 0x005fcaff
//   XREF to: 005fcaff (CONDITIONAL_JUMP)
// 005fcacc: LEA EAX,[EBX + 0xbedc]
// 005fcad2: PUSH EAX
// 005fcad3: PUSH 0x658a5b
//   XREF to: 00658a5b (DATA)
// 005fcad8: PUSH ESI
// 005fcad9: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 005fcade: ADD ESP,0xc
// 005fcae1: PUSH 0x0
// 005fcae3: PUSH 0x658a72
//   XREF to: 00658a72 (DATA)
// 005fcae8: PUSH 0x0
// 005fcaea: LEA EAX,[EBX + 0xbed4]
// 005fcaf0: PUSH EAX
// 005fcaf1: PUSH 0x658a79
//   XREF to: 00658a79 (DATA)
// 005fcaf6: PUSH ESI
// 005fcaf7: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005fcafc: ADD ESP,0x18
// 005fcaff: LEA EAX,[EBX + 0xbf40]
//   Label: LAB_005fcaff
// 005fcb05: PUSH EAX
// 005fcb06: PUSH 0x658a85
//   XREF to: 00658a85 (DATA)
// 005fcb0b: PUSH ESI
// 005fcb0c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 005fcb11: ADD ESP,0xc
// 005fcb14: PUSH 0x0
// 005fcb16: PUSH 0x658a93
//   XREF to: 00658a93 (DATA)
// 005fcb1b: LEA EAX,[EBX + 0x158]
// 005fcb21: PUSH EAX
// 005fcb22: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 005fcb27: ADD ESP,0x4
// 005fcb2a: PUSH EAX
// 005fcb2b: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 005fcb30: ADD ESP,0xc
// 005fcb33: CMP EAX,0x16
// 005fcb36: JZ 0x005fcb3c
//   XREF to: 005fcb3c (CONDITIONAL_JUMP)
// 005fcb38: POP EDI
// 005fcb39: POP ESI
// 005fcb3a: POP EBX
// 005fcb3b: RET
// 005fcb3c: ADD EBX,0xbf44
//   Label: LAB_005fcb3c
// 005fcb42: PUSH EBX
// 005fcb43: PUSH 0x658a9b
//   XREF to: 00658a9b (DATA)
// 005fcb48: PUSH ESI
// 005fcb49: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 005fcb4e: ADD ESP,0xc
// 005fcb51: POP EDI
// 005fcb52: POP ESI
// 005fcb53: POP EBX
// 005fcb54: RET
