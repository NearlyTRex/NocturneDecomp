// Name: core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0
// Address: 0041b1f0
// Address Range: [[0041b1f0, 0041b209]]
// Convention: __cdecl
// Signature: int core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0(CBodyPart * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0(CBodyPart *this_ptr)

{
  int iVar1;
  
  if (*(int *)this_ptr->field1_0x158 != 0) {
    return 0;
  }
  iVar1 = core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0(&this_ptr->base_actor);
  return iVar1;
}


// Assembly code:
// 0041b1f0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0
//   XREF to: Stack[0x4] (READ)
// 0041b1f4: CMP dword ptr [EAX + 0x158],0x0
// 0041b1fb: JZ 0x0041b200
//   XREF to: 0041b200 (CONDITIONAL_JUMP)
// 0041b1fd: XOR EAX,EAX
// 0041b1ff: RET
// 0041b200: PUSH EAX
//   Label: LAB_0041b200
// 0041b201: CALL core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0
//   XREF to: 0040a0f0 (UNCONDITIONAL_CALL)
// 0041b206: ADD ESP,0x4
// 0041b209: RET
