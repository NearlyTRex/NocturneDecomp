// Name: core_hero.cpp_CHero_FUN_004f25c0
// Address: 004f25c0
// Address Range: [[004f25c0, 004f2600]]
// Convention: __cdecl
// Signature: int core_hero.cpp_CHero_FUN_004f25c0(CHero * this_ptr)
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 DAT_02d81c6c
// Function calls:
//   core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f25c0(CHero *this_ptr)

{
  int iVar1;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  
  if ((g_CGamePtr->field53_0x1d0 == 0) && ((this_ptr->field1_0xbe24 & 0x7fffffffU) == 0)) {
    iVar1 = core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150
                      ((CDemonActor *)this_ptr,in_stack_00000008,in_stack_0000000c,in_stack_00000010
                      );
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 004f25c0: PUSH EBP
//   Label: core_hero.cpp_CHero_FUN_004f25c0
// 004f25c1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f25c5: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004f25ca: CMP dword ptr [EAX + 0x1d0],0x0
//   XREF to: 02d81c6c (READ)
// 004f25d1: JNZ 0x004f25df
//   XREF to: 004f25df (CONDITIONAL_JUMP)
// 004f25d3: TEST dword ptr [EDX + 0xbe24],0x7fffffff
// 004f25dd: JZ 0x004f25e3
//   XREF to: 004f25e3 (CONDITIONAL_JUMP)
// 004f25df: XOR EAX,EAX
//   Label: LAB_004f25df
// 004f25e1: POP EBP
// 004f25e2: RET
// 004f25e3: PUSH EDI
//   Label: LAB_004f25e3
// 004f25e4: PUSH ESI
// 004f25e5: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 004f25e9: PUSH ESI
// 004f25ea: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004f25ee: PUSH EDI
// 004f25ef: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004f25f3: PUSH EBP
// 004f25f4: PUSH EDX
// 004f25f5: CALL core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150
//   XREF to: 00409150 (UNCONDITIONAL_CALL)
// 004f25fa: ADD ESP,0x10
// 004f25fd: POP ESI
// 004f25fe: POP EDI
// 004f25ff: POP EBP
// 004f2600: RET
