// Name: core_dmodel.cpp_SRA4HQPoint_copy_FUN_0047ef60
// Address: 0047ef60
// Address Range: [[0047ef60, 0047ef86]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_SRA4HQPoint_copy_FUN_0047ef60(SRA4HQPoint * this_ptr, SRA4HQPoint * other)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_SRA4HQPoint_copy_FUN_0047ef60(SRA4HQPoint *this_ptr,SRA4HQPoint *other)

{
  *(undefined4 *)this_ptr->field0_0x0 = *(undefined4 *)other->field0_0x0;
  *(undefined4 *)(this_ptr->field0_0x0 + 4) = *(undefined4 *)(other->field0_0x0 + 4);
  *(undefined4 *)(this_ptr->field0_0x0 + 8) = *(undefined4 *)(other->field0_0x0 + 8);
  return;
}


// Assembly code:
// 0047ef60: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dmodel.cpp_SRA4HQPoint_copy_FUN_0047ef60
//   XREF to: Stack[0x4] (READ)
// 0047ef64: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0047ef68: ADD EAX,0x4
// 0047ef6b: MOV EDX,dword ptr [ECX]
// 0047ef6d: MOV dword ptr [EAX + -0x4],EDX
// 0047ef70: LEA EDX,[ECX + 0x4]
// 0047ef73: ADD EAX,0x4
// 0047ef76: MOV EDX,dword ptr [EDX]
// 0047ef78: MOV dword ptr [EAX + -0x4],EDX
// 0047ef7b: LEA EDX,[ECX + 0x8]
// 0047ef7e: SUB EAX,0x8
// 0047ef81: MOV EDX,dword ptr [EDX]
// 0047ef83: MOV dword ptr [EAX + 0x8],EDX
// 0047ef86: RET
