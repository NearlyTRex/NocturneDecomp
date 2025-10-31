// Name: core_level.cpp_CLevelLoader_setVersion_FUN_00504750
// Address: 00504750
// Address Range: [[00504750, 0050475b]]
// Convention: __cdecl
// Signature: void core_level.cpp_CLevelLoader_setVersion_FUN_00504750(CLevelLoader * this_ptr, int value)

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_setVersion_FUN_00504750(CLevelLoader *this_ptr,int value)

{
  this_ptr->version = value;
  return;
}


// Assembly code:
// 00504750: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_level.cpp_CLevelLoader_setVersion_FUN_00504750
//   XREF to: Stack[0x4] (READ)
// 00504754: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00504758: MOV dword ptr [EDX + 0x8],EAX
// 0050475b: RET
