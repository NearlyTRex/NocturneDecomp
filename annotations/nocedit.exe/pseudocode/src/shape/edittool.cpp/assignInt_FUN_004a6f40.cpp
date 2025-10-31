// Name: shape_edittool.cpp_assignInt_FUN_004a6f40
// Address: 004a6f40
// Address Range: [[004a6f40, 004a6f4e]]
// Convention: __cdecl
// Signature: int * shape_edittool.cpp_assignInt_FUN_004a6f40(int * dest_ptr, int * src_ptr)

#include "nocturne.h"

int * __cdecl shape_edittool_cpp_assignInt_FUN_004a6f40(int *dest_ptr,int *src_ptr)

{
  *dest_ptr = *src_ptr;
  return dest_ptr;
}


// Assembly code:
// 004a6f40: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_assignInt_FUN_004a6f40
//   XREF to: Stack[0x4] (READ)
// 004a6f44: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004a6f48: MOV EAX,dword ptr [EAX]
// 004a6f4a: MOV dword ptr [EDX],EAX
// 004a6f4c: MOV EAX,EDX
// 004a6f4e: RET
