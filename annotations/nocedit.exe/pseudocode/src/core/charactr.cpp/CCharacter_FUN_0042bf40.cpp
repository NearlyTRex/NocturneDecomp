// Name: core_charactr.cpp_CCharacter_FUN_0042bf40
// Address: 0042bf40
// Address Range: [[0042bf40, 0042bf6f]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042bf40(CCharacter * this_ptr)
// Cross-references:
//   core_hero.cpp_FUN_004f29b0 (004f29b0) at 004f2a20 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042bf40(CCharacter *this_ptr)

{
  CDemonActor *this_ptr_00;
  int in_EAX;
  int iVar1;
  
  this_ptr_00 = this_ptr->grabbed_by;
  if (this_ptr_00 == (CDemonActor *)0x0) {
    return in_EAX;
  }
  this_ptr->grabbed_by = (CDemonActor *)0x0;
  iVar1 = (*this_ptr_00->vtable[1].playSound)(this_ptr_00,(char *)this_ptr);
  return iVar1;
}


// Assembly code:
// 0042bf40: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_0042bf40
//   XREF to: Stack[0x4] (READ)
// 0042bf44: MOV ECX,dword ptr [EDX + 0x2598]
// 0042bf4a: TEST ECX,ECX
// 0042bf4c: JNZ 0x0042bf4f
//   XREF to: 0042bf4f (CONDITIONAL_JUMP)
// 0042bf4e: RET
// 0042bf4f: PUSH EDX
//   Label: LAB_0042bf4f
// 0042bf50: MOV EAX,ECX
// 0042bf52: MOV dword ptr [EDX + 0x2598],0x0
// 0042bf5c: PUSH EAX
// 0042bf5d: MOV ECX,dword ptr [ECX + 0x154]
// 0042bf63: CALL dword ptr [ECX + 0x110]
// 0042bf69: ADD ESP,0x8
// 0042bf6c: LEA EAX,[EAX]
