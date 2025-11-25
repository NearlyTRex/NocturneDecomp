// Name: shape_meshlod.cpp_copyVector_FUN_0051ee50
// Address: 0051ee50
// Address Range: [[0051ee50, 0051ee68]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_copyVector_FUN_0051ee50(CVector3f * destination, CVector3f * source)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_copyVector_FUN_0051ee50(CVector3f *destination,CVector3f *source)

{
  destination->x = source->x;
  destination->y = source->y;
  destination->z = source->z;
  return;
}


// Assembly code:
// 0051ee50: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_copyVector_FUN_0051ee50
//   XREF to: Stack[0x4] (READ)
// 0051ee54: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0051ee58: MOV ECX,dword ptr [EDX]
// 0051ee5a: MOV dword ptr [EAX],ECX
// 0051ee5c: MOV ECX,dword ptr [EDX + 0x4]
// 0051ee5f: MOV dword ptr [EAX + 0x4],ECX
// 0051ee62: MOV ECX,dword ptr [EDX + 0x8]
// 0051ee65: MOV dword ptr [EAX + 0x8],ECX
// 0051ee68: RET
