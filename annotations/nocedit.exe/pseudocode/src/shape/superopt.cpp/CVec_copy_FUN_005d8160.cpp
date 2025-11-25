// Name: shape_superopt.cpp_CVec_copy_FUN_005d8160
// Address: 005d8160
// Address Range: [[005d8160, 005d818a]]
// Convention: __cdecl
// Signature: CVec * shape_superopt.cpp_CVec_copy_FUN_005d8160(CVec * this_ptr, CVec * other)

#include "nocturne.h"

CVec * __cdecl shape_superopt_cpp_CVec_copy_FUN_005d8160(CVec *this_ptr,CVec *other)

{
  this_ptr->field0_0x0 = other->field0_0x0;
  this_ptr->field1_0x4 = other->field1_0x4;
  this_ptr->field2_0x8 = other->field2_0x8;
  this_ptr->field3_0xc = other->field3_0xc;
  this_ptr->field4_0x10 = other->field4_0x10;
  this_ptr->field5_0x14 = other->field5_0x14;
  return this_ptr;
}


// Assembly code:
// 005d8160: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_CVec_copy_FUN_005d8160
//   XREF to: Stack[0x4] (READ)
// 005d8164: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d8168: MOV ECX,dword ptr [EDX]
// 005d816a: MOV dword ptr [EAX],ECX
// 005d816c: MOV ECX,dword ptr [EDX + 0x4]
// 005d816f: MOV dword ptr [EAX + 0x4],ECX
// 005d8172: MOV ECX,dword ptr [EDX + 0x8]
// 005d8175: MOV dword ptr [EAX + 0x8],ECX
// 005d8178: MOV ECX,dword ptr [EDX + 0xc]
// 005d817b: MOV dword ptr [EAX + 0xc],ECX
// 005d817e: MOV ECX,dword ptr [EDX + 0x10]
// 005d8181: MOV dword ptr [EAX + 0x10],ECX
// 005d8184: MOV ECX,dword ptr [EDX + 0x14]
// 005d8187: MOV dword ptr [EAX + 0x14],ECX
// 005d818a: RET
