// Name: core_litecone.cpp_FUN_00506cb0
// Address: 00506cb0
// Address Range: [[00506cb0, 00506cf6]]
// Convention: unknown
// Signature: undefined core_litecone.cpp_FUN_00506cb0()
// Globals:
//   double DOUBLE_00631566 = 18

#include "nocturne.h"

/* Signature: undefined1 actors_other_litecone.cpp_FUN_00506cb0(undefined4 param_1, undefined4
   param_2) */

void core_litecone_cpp_FUN_00506cb0(void)

{
  float fVar1;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = ((float)DOUBLE_00631566 / *(float *)(in_stack_00000004 + 0x158)) *
          *(float *)(in_stack_00000004 + 0x15c);
  in_stack_00000008[2] = 0.0;
  in_stack_00000008[3] = fVar1;
  in_stack_00000008[4] = fVar1;
  *in_stack_00000008 = -fVar1;
  in_stack_00000008[1] = -fVar1;
  in_stack_00000008[5] = *(float *)(in_stack_00000004 + 0x15c);
  return;
}


// Assembly code:
// 00506cb0: SUB ESP,0x4
//   Label: core_litecone.cpp_FUN_00506cb0
// 00506cb3: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00506cb7: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00506cbb: FLD float ptr [EDX + 0x158]
// 00506cc1: FDIVR double ptr [0x00631566]
//   XREF to: 00631566 (READ)
// 00506cc7: FMUL float ptr [EDX + 0x15c]
// 00506ccd: MOV dword ptr [EAX + 0x8],0x0
// 00506cd4: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 00506cd7: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 00506cda: MOV dword ptr [EAX + 0xc],ECX
// 00506cdd: FLD float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 00506ce0: MOV dword ptr [EAX + 0x10],ECX
// 00506ce3: FCHS
// 00506ce5: FST float ptr [EAX]
// 00506ce7: FSTP float ptr [EAX + 0x4]
// 00506cea: MOV ECX,dword ptr [EDX + 0x15c]
// 00506cf0: MOV dword ptr [EAX + 0x14],ECX
// 00506cf3: ADD ESP,0x4
// 00506cf6: RET
