// Name: engine_drender.cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0
// Address: 0048c1b0
// Address Range: [[0048c1b0, 0048c1c9]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0(CDemonRenderer * this_ptr, CVector3i * rotation)
// Function calls:
//   engine_matrix.c_setCameraRotation_FUN_0050e290

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0
          (CDemonRenderer *this_ptr,CVector3i *rotation)

{
  engine_matrix_c_setCameraRotation_FUN_0050e290
            ((ushort)rotation->x,(ushort)rotation->y,(ushort)rotation->z);
  return;
}


// Assembly code:
// 0048c1b0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0
// 0048c1b1: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048c1b5: MOV EDX,dword ptr [EAX + 0x8]
// 0048c1b8: PUSH EDX
// 0048c1b9: MOV ECX,dword ptr [EAX + 0x4]
// 0048c1bc: PUSH ECX
// 0048c1bd: MOV EBX,dword ptr [EAX]
// 0048c1bf: PUSH EBX
// 0048c1c0: CALL engine_matrix.c_setCameraRotation_FUN_0050e290
//   XREF to: 0050e290 (UNCONDITIONAL_CALL)
// 0048c1c5: ADD ESP,0xc
// 0048c1c8: POP EBX
// 0048c1c9: RET
