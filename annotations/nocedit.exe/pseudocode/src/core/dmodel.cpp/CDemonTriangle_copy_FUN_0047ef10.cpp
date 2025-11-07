// Name: core_dmodel.cpp_CDemonTriangle_copy_FUN_0047ef10
// Address: 0047ef10
// Address Range: [[0047ef10, 0047ef54]]
// Convention: __cdecl
// Signature: int core_dmodel.cpp_CDemonTriangle_copy_FUN_0047ef10(CDemonTriangle * this_ptr, CDemonTriangle * other)
// Globals:
//   WatcomTypeInfo g_RA4HQPointTypeInfo
// Function calls:
//   crt_memory.c_copyObjectArray_FUN_00600bc2

#include "nocturne.h"

int __cdecl
core_dmodel_cpp_CDemonTriangle_copy_FUN_0047ef10(CDemonTriangle *this_ptr,CDemonTriangle *other)

{
  void *pvVar1;
  
  (this_ptr->vertex1).x = (other->vertex1).x;
  (this_ptr->vertex1).y = (other->vertex1).y;
  (this_ptr->vertex1).z = (other->vertex1).z;
  (this_ptr->vertex2).x = (other->vertex2).x;
  (this_ptr->vertex2).y = (other->vertex2).y;
  (this_ptr->vertex2).z = (other->vertex2).z;
  pvVar1 = crt_memory_c_copyObjectArray_FUN_00600bc2
                     (&this_ptr->vertex3,&other->vertex3,4,&g_RA4HQPointTypeInfo);
  return (int)pvVar1 + -0x18;
}


// Assembly code:
// 0047ef10: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dmodel.cpp_CDemonTriangle_copy_FUN_0047ef10
//   XREF to: Stack[0x4] (READ)
// 0047ef14: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0047ef18: MOV ECX,dword ptr [EDX]
// 0047ef1a: MOV dword ptr [EAX],ECX
// 0047ef1c: MOV ECX,dword ptr [EDX + 0x4]
// 0047ef1f: MOV dword ptr [EAX + 0x4],ECX
// 0047ef22: MOV ECX,dword ptr [EDX + 0x8]
// 0047ef25: MOV dword ptr [EAX + 0x8],ECX
// 0047ef28: PUSH 0x65c9f0
//   XREF to: 0065c9f0 (DATA)
// 0047ef2d: MOV ECX,dword ptr [EDX + 0xc]
// 0047ef30: ADD EDX,0x18
// 0047ef33: MOV dword ptr [EAX + 0xc],ECX
// 0047ef36: PUSH 0x4
// 0047ef38: MOV ECX,dword ptr [EDX + -0x8]
// 0047ef3b: PUSH EDX
// 0047ef3c: MOV dword ptr [EAX + 0x10],ECX
// 0047ef3f: ADD EAX,0x18
// 0047ef42: MOV ECX,dword ptr [EDX + -0x4]
// 0047ef45: PUSH EAX
// 0047ef46: MOV dword ptr [EAX + -0x4],ECX
// 0047ef49: CALL crt_memory.c_copyObjectArray_FUN_00600bc2
//   XREF to: 00600bc2 (UNCONDITIONAL_CALL)
// 0047ef4e: ADD ESP,0x10
// 0047ef51: SUB EAX,0x18
// 0047ef54: RET
