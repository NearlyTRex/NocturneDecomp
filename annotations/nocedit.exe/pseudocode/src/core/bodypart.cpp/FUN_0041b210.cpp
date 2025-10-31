// Name: core_bodypart.cpp_FUN_0041b210
// Address: 0041b210
// Address Range: [[0041b210, 0041b23f]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041b210()
// Function calls:
//   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

void core_bodypart_cpp_FUN_0041b210(void)

{
  float fVar1;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  SDamageInfo *in_stack_0000000c;
  CDemonActor *in_stack_00000010;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,15.0);
  in_stack_0000000c->weapon_damage_modifier = 0x3ca3d70a;
  in_stack_0000000c->damage_amount = fVar1;
  return;
}


// Assembly code:
// 0041b210: PUSH EBX
//   Label: core_bodypart.cpp_FUN_0041b210
// 0041b211: PUSH ESI
// 0041b212: SUB ESP,0x4
// 0041b215: MOV EBX,dword ptr [ESP + 0x18]
// 0041b219: MOV EDX,dword ptr [ESP + 0x1c]
// 0041b21d: PUSH EDX
// 0041b21e: PUSH EBX
// 0041b21f: MOV ECX,dword ptr [ESP + 0x1c]
// 0041b223: PUSH ECX
// 0041b224: MOV ESI,dword ptr [ESP + 0x1c]
// 0041b228: PUSH ESI
// 0041b229: CALL core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
//   XREF to: 0040abc0 (UNCONDITIONAL_CALL)
// 0041b22e: ADD ESP,0x10
// 0041b231: PUSH 0x41700000
// 0041b236: PUSH 0x40a00000
// 0041b23b: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
