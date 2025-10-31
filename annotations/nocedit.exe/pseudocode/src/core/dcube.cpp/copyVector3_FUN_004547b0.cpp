// Name: core_dcube.cpp_copyVector3_FUN_004547b0
// Address: 004547b0
// Address Range: [[004547b0, 004547cd]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_copyVector3_FUN_004547b0(CVector3f * dest, CVector3f * src)

#include "nocturne.h"

void __cdecl core_dcube_cpp_copyVector3_FUN_004547b0(CVector3f *dest,CVector3f *src)

{
  if (dest == src) {
    return;
  }
  dest->x = src->x;
  dest->y = src->y;
  dest->z = src->z;
  return;
}


// Assembly code:
// 004547b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dcube.cpp_copyVector3_FUN_004547b0
//   XREF to: Stack[0x4] (READ)
// 004547b4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004547b8: CMP EAX,EDX
// 004547ba: JNZ 0x004547bd
//   XREF to: 004547bd (CONDITIONAL_JUMP)
// 004547bc: RET
// 004547bd: MOV ECX,dword ptr [EDX]
//   Label: LAB_004547bd
// 004547bf: MOV dword ptr [EAX],ECX
// 004547c1: MOV ECX,dword ptr [EDX + 0x4]
// 004547c4: MOV dword ptr [EAX + 0x4],ECX
// 004547c7: MOV ECX,dword ptr [EDX + 0x8]
// 004547ca: MOV dword ptr [EAX + 0x8],ECX
// 004547cd: RET
