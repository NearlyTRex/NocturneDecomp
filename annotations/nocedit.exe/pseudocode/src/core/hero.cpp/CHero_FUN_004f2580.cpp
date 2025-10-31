// Name: core_hero.cpp_CHero_FUN_004f2580
// Address: 004f2580
// Address Range: [[004f2580, 004f25b5]]
// Convention: __cdecl
// Signature: int core_hero.cpp_CHero_FUN_004f2580(CHero * this_ptr)
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 DAT_02d81c6c
// Function calls:
//   core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f2580(CHero *this_ptr)

{
  int iVar1;
  SCollisionReturnInfo *in_stack_00000008;
  float in_stack_0000000c;
  
  if ((g_CGamePtr->field53_0x1d0 == 0) && ((this_ptr->field1_0xbe24 & 0x7fffffffU) == 0)) {
    iVar1 = core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0
                      ((CDemonActor *)this_ptr,in_stack_00000008,in_stack_0000000c);
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 004f2580: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_hero.cpp_CHero_FUN_004f2580
//   XREF to: Stack[0x4] (READ)
// 004f2584: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004f2589: CMP dword ptr [EAX + 0x1d0],0x0
//   XREF to: 02d81c6c (READ)
// 004f2590: JNZ 0x004f259e
//   XREF to: 004f259e (CONDITIONAL_JUMP)
// 004f2592: TEST dword ptr [EDX + 0xbe24],0x7fffffff
// 004f259c: JZ 0x004f25a1
//   XREF to: 004f25a1 (CONDITIONAL_JUMP)
// 004f259e: XOR EAX,EAX
//   Label: LAB_004f259e
// 004f25a0: RET
// 004f25a1: PUSH ESI
//   Label: LAB_004f25a1
// 004f25a2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f25a6: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004f25aa: PUSH ESI
// 004f25ab: PUSH EDX
// 004f25ac: CALL core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0
//   XREF to: 004090c0 (UNCONDITIONAL_CALL)
// 004f25b1: ADD ESP,0xc
// 004f25b4: POP ESI
// 004f25b5: RET
