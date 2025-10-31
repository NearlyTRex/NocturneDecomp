// Name: core_dtri.cpp_copyVector3_FUN_0049b6a0
// Address: 0049b6a0
// Address Range: [[0049b6a0, 0049b6bd]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_copyVector3_FUN_0049b6a0(CVector3f * dest_ptr, CVector3f * src_ptr)

#include "nocturne.h"

void __cdecl core_dtri_cpp_copyVector3_FUN_0049b6a0(CVector3f *dest_ptr,CVector3f *src_ptr)

{
  if (dest_ptr == src_ptr) {
    return;
  }
  dest_ptr->x = src_ptr->x;
  dest_ptr->y = src_ptr->y;
  dest_ptr->z = src_ptr->z;
  return;
}


// Assembly code:
// 0049b6a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dtri.cpp_copyVector3_FUN_0049b6a0
//   XREF to: Stack[0x4] (READ)
// 0049b6a4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0049b6a8: CMP EAX,EDX
// 0049b6aa: JNZ 0x0049b6ad
//   XREF to: 0049b6ad (CONDITIONAL_JUMP)
// 0049b6ac: RET
// 0049b6ad: MOV ECX,dword ptr [EDX]
//   Label: LAB_0049b6ad
// 0049b6af: MOV dword ptr [EAX],ECX
// 0049b6b1: MOV ECX,dword ptr [EDX + 0x4]
// 0049b6b4: MOV dword ptr [EAX + 0x4],ECX
// 0049b6b7: MOV ECX,dword ptr [EDX + 0x8]
// 0049b6ba: MOV dword ptr [EAX + 0x8],ECX
// 0049b6bd: RET
