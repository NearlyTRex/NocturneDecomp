// Name: core_dtrace.cpp_STriangleRef_copy_FUN_0049a3b0
// Address: 0049a3b0
// Address Range: [[0049a3b0, 0049a3f9]]
// Convention: __cdecl
// Signature: STriangleRef * core_dtrace.cpp_STriangleRef_copy_FUN_0049a3b0(STriangleRef * this_ptr, STriangleRef * other)

#include "nocturne.h"

STriangleRef * __cdecl
core_dtrace_cpp_STriangleRef_copy_FUN_0049a3b0(STriangleRef *this_ptr,STriangleRef *other)

{
  *(undefined4 *)this_ptr->field0_0x0 = *(undefined4 *)other->field0_0x0;
  *(undefined4 *)(this_ptr->field0_0x0 + 4) = *(undefined4 *)(other->field0_0x0 + 4);
  *(undefined4 *)(this_ptr->field0_0x0 + 8) = *(undefined4 *)(other->field0_0x0 + 8);
  *(undefined4 *)(this_ptr->field0_0x0 + 0xc) = *(undefined4 *)(other->field0_0x0 + 0xc);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x10) = *(undefined4 *)(other->field0_0x0 + 0x10);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x14) = *(undefined4 *)(other->field0_0x0 + 0x14);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x18) = *(undefined4 *)(other->field0_0x0 + 0x18);
  return this_ptr;
}


// Assembly code:
// 0049a3b0: PUSH EBX
//   Label: core_dtrace.cpp_STriangleRef_copy_FUN_0049a3b0
// 0049a3b1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049a3b5: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0049a3b9: MOV EDX,dword ptr [EBX]
// 0049a3bb: MOV dword ptr [EAX],EDX
// 0049a3bd: LEA EDX,[EAX + 0x4]
// 0049a3c0: LEA EAX,[EBX + 0x4]
// 0049a3c3: MOV ECX,dword ptr [EAX]
// 0049a3c5: MOV dword ptr [EDX],ECX
// 0049a3c7: LEA ECX,[EAX + 0x4]
// 0049a3ca: ADD EDX,0x4
// 0049a3cd: MOV ECX,dword ptr [ECX]
// 0049a3cf: MOV dword ptr [EDX],ECX
// 0049a3d1: ADD EDX,0x4
// 0049a3d4: MOV EAX,dword ptr [EAX + 0x8]
// 0049a3d7: MOV dword ptr [EDX],EAX
// 0049a3d9: LEA EAX,[EBX + 0x10]
// 0049a3dc: ADD EDX,0x4
// 0049a3df: MOV ECX,dword ptr [EAX]
// 0049a3e1: MOV dword ptr [EDX],ECX
// 0049a3e3: LEA ECX,[EAX + 0x4]
// 0049a3e6: ADD EDX,0x4
// 0049a3e9: MOV ECX,dword ptr [ECX]
// 0049a3eb: MOV dword ptr [EDX],ECX
// 0049a3ed: ADD EDX,0x4
// 0049a3f0: MOV EAX,dword ptr [EAX + 0x8]
// 0049a3f3: MOV dword ptr [EDX],EAX
// 0049a3f5: LEA EAX,[EDX + -0x18]
// 0049a3f8: POP EBX
// 0049a3f9: RET
