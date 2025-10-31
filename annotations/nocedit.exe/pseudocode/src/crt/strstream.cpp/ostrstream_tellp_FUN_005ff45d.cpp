// Name: crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d
// Address: 005ff45d
// Address Range: [[005ff45d, 005ff489]]
// Convention: __cdecl
// Signature: int crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d(ostrstream * this_ptr)
// Cross-references:
//   support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50 (0043ed50) at 0043ed9f [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80 (0043ea80) at 0043eaf7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d(ostrstream *this_ptr)

{
  int iVar1;
  
  iVar1 = ((this_ptr->strstreambase_core).layout_info)->offset_to_vbase;
  if ((*(uint *)((this_ptr->field_80).padding + iVar1 + -0x61) & 3) != 0) {
    return -1;
  }
  iVar1 = (**(code **)(*(int *)(*(int *)((this_ptr->field_80).padding + iVar1 + -0x6d) + 0x28) +
                      0x18))();
  return iVar1;
}


// Assembly code:
// 005ff45d: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d
//   XREF to: Stack[0x4] (READ)
// 005ff461: MOV EAX,dword ptr [EDX]
// 005ff463: MOV EAX,dword ptr [EAX + 0x4]
// 005ff466: ADD EAX,EDX
// 005ff468: MOV EDX,dword ptr [EAX + 0x10]
// 005ff46b: AND EDX,0x3
// 005ff46e: JZ 0x005ff476
//   XREF to: 005ff476 (CONDITIONAL_JUMP)
// 005ff470: MOV EAX,0xffffffff
// 005ff475: RET
// 005ff476: PUSH 0x2
//   Label: LAB_005ff476
// 005ff478: PUSH 0x1
// 005ff47a: MOV EAX,dword ptr [EAX + 0x4]
// 005ff47d: PUSH 0x0
// 005ff47f: MOV EDX,dword ptr [EAX + 0x28]
// 005ff482: PUSH EAX
// 005ff483: CALL dword ptr [EDX + 0x18]
// 005ff486: ADD ESP,0x10
// 005ff489: RET
