// Name: core_charactr.cpp_CCharacter_FUN_0042c9d0
// Address: 0042c9d0
// Address Range: [[0042c9d0, 0042ca11]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042c9d0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042c9d0(CCharacter *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  CVector3f *unaff_retaddr;
  undefined4 in_stack_00000008;
  
  this_ptr->field11_0x25a0[0x10] = '\x01';
  this_ptr->field11_0x25a0[0x11] = '\0';
  this_ptr->field11_0x25a0[0x12] = '\0';
  this_ptr->field11_0x25a0[0x13] = '\0';
  this_ptr->field11_0x25a0[4] = '\0';
  this_ptr->field11_0x25a0[5] = '\0';
  this_ptr->field11_0x25a0[6] = -0x80;
  this_ptr->field11_0x25a0[7] = -0x41;
  *(undefined4 *)this_ptr->field11_0x25a0 = in_stack_00000008;
  pCVar1 = (this_ptr->base_actor).metadata.vtable;
  this_ptr->field11_0x25a0[8] = -0x36;
  this_ptr->field11_0x25a0[9] = -0xe;
  this_ptr->field11_0x25a0[10] = 'I';
  this_ptr->field11_0x25a0[0xb] = 'q';
  (*pCVar1[1].setPositionAndOrientation)
            (&this_ptr->base_actor,(CVector3f *)0xbf800000,unaff_retaddr);
  return;
}


// Assembly code:
// 0042c9d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_0042c9d0
//   XREF to: Stack[0x4] (READ)
// 0042c9d4: MOV dword ptr [EAX + 0x25b0],0x1
// 0042c9de: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0042c9e2: MOV dword ptr [EAX + 0x25a4],0xbf800000
// 0042c9ec: PUSH 0xbf800000
// 0042c9f1: MOV dword ptr [EAX + 0x25a0],EDX
// 0042c9f7: PUSH EAX
// 0042c9f8: MOV EDX,dword ptr [EAX + 0x154]
// 0042c9fe: MOV dword ptr [EAX + 0x25a8],0x7149f2ca
// 0042ca08: CALL dword ptr [EDX + 0x14c]
// 0042ca0e: ADD ESP,0x8
// 0042ca11: RET
