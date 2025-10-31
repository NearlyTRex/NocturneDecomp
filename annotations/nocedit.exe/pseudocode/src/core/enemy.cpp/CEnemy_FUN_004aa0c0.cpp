// Name: core_enemy.cpp_CEnemy_FUN_004aa0c0
// Address: 004aa0c0
// Address Range: [[004aa0c0, 004aa0e1]]
// Convention: __cdecl
// Signature: void core_enemy.cpp_CEnemy_FUN_004aa0c0(CEnemy * this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004aa0c0(CEnemy *this_ptr)

{
  CVector3f *unaff_retaddr;
  float in_stack_00000008;
  
  if (in_stack_00000008 != *(float *)(this_ptr->field6_0xbe38 + 4)) {
    return;
  }
  (*(this_ptr->base_character).base_actor.metadata.vtable[1].handleFootstep)
            ((CDemonActor *)this_ptr,unaff_retaddr,(int)this_ptr,in_stack_00000008);
  return;
}


// Assembly code:
// 004aa0c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_enemy.cpp_CEnemy_FUN_004aa0c0
//   XREF to: Stack[0x4] (READ)
// 004aa0c4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004aa0c8: CMP EAX,dword ptr [EDX + 0xbe3c]
// 004aa0ce: JZ 0x004aa0d1
//   XREF to: 004aa0d1 (CONDITIONAL_JUMP)
// 004aa0d0: RET
// 004aa0d1: PUSH EDX
//   Label: LAB_004aa0d1
// 004aa0d2: MOV EAX,dword ptr [EDX + 0x154]
// 004aa0d8: CALL dword ptr [EAX + 0x10c]
// 004aa0de: ADD ESP,0x4
// 004aa0e1: RET
