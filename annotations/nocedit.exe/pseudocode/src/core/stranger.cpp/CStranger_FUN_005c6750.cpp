// Name: core_stranger.cpp_CStranger_FUN_005c6750
// Address: 005c6750
// Address Range: [[005c6750, 005c67b4]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c6750()
// Globals:
//   TerminatedCString s_stand_00653fa1
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3b20
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_motion.cpp_FUN_0052ddb0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c6750(undefined4 param_1) */

void core_stranger_cpp_CStranger_FUN_005c6750(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f3b20(in_stack_00000004);
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].x = 0.0;
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].y = 0.0;
  in_stack_00000004[1].base_character.base_actor.health = 0;
  (in_stack_00000004->base_character).field13_0x2620[0x46c] = '\0';
  (in_stack_00000004->base_character).field13_0x2620[0x46d] = '\0';
  (in_stack_00000004->base_character).field13_0x2620[0x46e] = '\0';
  (in_stack_00000004->base_character).field13_0x2620[0x46f] = '\0';
  (in_stack_00000004->base_character).field13_0x2620[0x470] = '\0';
  (in_stack_00000004->base_character).field13_0x2620[0x471] = '\0';
  (in_stack_00000004->base_character).field13_0x2620[0x472] = '\0';
  (in_stack_00000004->base_character).field13_0x2620[0x473] = '\0';
  core_motion_cpp_FUN_0052ddb0();
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(in_stack_00000004->base_character).model.motion_controller);
  return;
}


// Assembly code:
// 005c6750: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c6750
// 005c6751: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005c6755: PUSH EBX
// 005c6756: ADD EBX,0x158
// 005c675c: CALL core_hero.cpp_CHero_FUN_004f3b20
//   XREF to: 004f3b20 (UNCONDITIONAL_CALL)
// 005c6761: MOV dword ptr [EBX + 0x1fad0],0x0
// 005c676b: ADD ESP,0x4
// 005c676e: MOV dword ptr [EBX + 0x1fad4],0x0
// 005c6778: PUSH 0x0
// 005c677a: MOV dword ptr [EBX + 0x1fae0],0x0
// 005c6784: PUSH 0x653fa1
//   XREF to: 00653fa1 (DATA)
// 005c6789: MOV dword ptr [EBX + 0x2934],0x0
// 005c6793: PUSH EBX
// 005c6794: MOV dword ptr [EBX + 0x2938],0x0
// 005c679e: CALL core_motion.cpp_FUN_0052ddb0
//   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
// 005c67a3: ADD ESP,0xc
// 005c67a6: PUSH 0x1
// 005c67a8: PUSH 0x0
// 005c67aa: PUSH EBX
// 005c67ab: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c67b0: ADD ESP,0xc
// 005c67b3: POP EBX
// 005c67b4: RET
