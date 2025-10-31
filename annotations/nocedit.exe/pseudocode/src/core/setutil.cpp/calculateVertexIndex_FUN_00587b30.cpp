// Name: core_setutil.cpp_calculateVertexIndex_FUN_00587b30
// Address: 00587b30
// Address Range: [[00587b30, 00587b45]]
// Convention: __cdecl
// Signature: int core_setutil.cpp_calculateVertexIndex_FUN_00587b30(int row_index, int column_index)

#include "nocturne.h"

int __cdecl core_setutil_cpp_calculateVertexIndex_FUN_00587b30(int row_index,int column_index)

{
  return row_index * 10 + column_index;
}


// Assembly code:
// 00587b30: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_setutil.cpp_calculateVertexIndex_FUN_00587b30
//   XREF to: Stack[0x4] (READ)
// 00587b34: LEA EAX,[EDX*0x4 + 0x0]
// 00587b3b: ADD EAX,EDX
// 00587b3d: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00587b41: ADD EAX,EAX
// 00587b43: ADD EAX,EDX
// 00587b45: RET
