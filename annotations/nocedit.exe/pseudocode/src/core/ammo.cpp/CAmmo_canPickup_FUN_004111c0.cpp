// Name: core_ammo.cpp_CAmmo_canPickup_FUN_004111c0
// Address: 004111c0
// Address Range: [[004111c0, 004111db]]
// Convention: __cdecl
// Signature: int core_ammo.cpp_CAmmo_canPickup_FUN_004111c0(CAmmo * this_ptr, CDemonActor * picker)
// Globals:
//   TerminatedCString s_CHero_00614a87
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_004111c0(CAmmo *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(picker,"CHero");
  if (iVar1 != 0) {
    iVar1 = 2;
  }
  return iVar1;
}


// Assembly code:
// 004111c0: PUSH 0x614a87
//   Label: core_ammo.cpp_CAmmo_canPickup_FUN_004111c0
//   XREF to: 00614a87 (DATA)
// 004111c5: MOV EDX,dword ptr [ESP + 0xc]
// 004111c9: PUSH EDX
// 004111ca: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004111cf: ADD ESP,0x8
// 004111d2: TEST EAX,EAX
// 004111d4: JZ 0x004111db
//   XREF to: 004111db (CONDITIONAL_JUMP)
// 004111d6: MOV EAX,0x2
// 004111db: RET
//   Label: LAB_004111db
