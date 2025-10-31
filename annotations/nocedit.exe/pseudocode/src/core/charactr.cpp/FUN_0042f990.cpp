// Name: core_charactr.cpp_FUN_0042f990
// Address: 0042f990
// Address Range: [[0042f990, 0042f9bd]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_FUN_0042f990()

#include "nocturne.h"

void core_charactr_cpp_FUN_0042f990(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0xc);
  uVar2 = *(undefined4 *)(in_stack_00000004 + 0x2c);
  in_stack_00000008[1] = *(undefined4 *)(in_stack_00000004 + 0x1c);
  *in_stack_00000008 = uVar1;
  in_stack_00000008[2] = uVar2;
  return;
}


// Assembly code:
// 0042f990: SUB ESP,0x8
//   Label: core_charactr.cpp_FUN_0042f990
// 0042f993: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042f997: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0042f99b: MOV ECX,dword ptr [EDX + 0xc]
// 0042f99e: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x8] (DATA)
// 0042f9a1: MOV ECX,dword ptr [EDX + 0x1c]
// 0042f9a4: MOV EDX,dword ptr [EDX + 0x2c]
// 0042f9a7: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x4] (WRITE)
// 0042f9ab: MOV dword ptr [EAX + 0x4],ECX
// 0042f9ae: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0042f9b1: MOV dword ptr [EAX],EDX
// 0042f9b3: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 0042f9b7: MOV dword ptr [EAX + 0x8],EDX
// 0042f9ba: ADD ESP,0x8
// 0042f9bd: RET
