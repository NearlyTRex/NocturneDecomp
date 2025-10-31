// Name: shape_edittool.cpp_assignInt_FUN_004a6f21
// Address: 004a6f21
// Address Range: [[004a6f21, 004a6f2e]]
// Convention: __cdecl
// Signature: int * shape_edittool.cpp_assignInt_FUN_004a6f21(int * dest_ptr, int * src_ptr)

#include "nocturne.h"

int * __cdecl shape_edittool_cpp_assignInt_FUN_004a6f21(int *dest_ptr,int *src_ptr)

{
  int *in_EDX;
  
  *in_EDX = *dest_ptr;
  return in_EDX;
}


// Assembly code:
// 004a6f21: PUSH ESP
//   Label: shape_edittool.cpp_assignInt_FUN_004a6f21
//   XREF to: Stack[-0x4] (DATA)
// 004a6f22: AND AL,0x4
// 004a6f24: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a6f28: MOV EAX,dword ptr [EAX]
// 004a6f2a: MOV dword ptr [EDX],EAX
// 004a6f2c: MOV EAX,EDX
// 004a6f2e: RET
