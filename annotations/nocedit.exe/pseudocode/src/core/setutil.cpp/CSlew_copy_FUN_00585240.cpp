// Name: core_setutil.cpp_CSlew_copy_FUN_00585240
// Address: 00585240
// Address Range: [[00585240, 0058528d]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_CSlew_copy_FUN_00585240(CSlew * this_ptr, CSlew * other)

#include "nocturne.h"

void __cdecl core_setutil_cpp_CSlew_copy_FUN_00585240(CSlew *this_ptr,CSlew *other)

{
  (this_ptr->position).x = (other->position).x;
  (this_ptr->position).y = (other->position).y;
  (this_ptr->position).z = (other->position).z;
  (this_ptr->orientation).x = (other->orientation).x;
  (this_ptr->orientation).y = (other->orientation).y;
  (this_ptr->orientation).z = (other->orientation).z;
  this_ptr->speed = other->speed;
  return;
}


// Assembly code:
// 00585240: PUSH EBX
//   Label: core_setutil.cpp_CSlew_copy_FUN_00585240
// 00585241: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00585245: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00585249: ADD EAX,0x4
// 0058524c: MOV ECX,dword ptr [EDX]
// 0058524e: MOV dword ptr [EAX + -0x4],ECX
// 00585251: LEA ECX,[EDX + 0x4]
// 00585254: ADD EAX,0x4
// 00585257: MOV ECX,dword ptr [ECX]
// 00585259: MOV dword ptr [EAX + -0x4],ECX
// 0058525c: LEA ECX,[EDX + 0x8]
// 0058525f: SUB EAX,0x8
// 00585262: MOV ECX,dword ptr [ECX]
// 00585264: MOV dword ptr [EAX + 0x8],ECX
// 00585267: LEA ECX,[EAX + 0xc]
// 0058526a: LEA EAX,[EDX + 0xc]
// 0058526d: MOV EBX,dword ptr [EAX]
// 0058526f: MOV dword ptr [ECX],EBX
// 00585271: LEA EBX,[EAX + 0x4]
// 00585274: ADD ECX,0x4
// 00585277: MOV EBX,dword ptr [EBX]
// 00585279: MOV dword ptr [ECX],EBX
// 0058527b: ADD ECX,0x4
// 0058527e: MOV EAX,dword ptr [EAX + 0x8]
// 00585281: MOV dword ptr [ECX],EAX
// 00585283: LEA EAX,[ECX + -0x14]
// 00585286: MOV ECX,dword ptr [EDX + 0x18]
// 00585289: MOV dword ptr [EAX + 0x18],ECX
// 0058528c: POP EBX
// 0058528d: RET
