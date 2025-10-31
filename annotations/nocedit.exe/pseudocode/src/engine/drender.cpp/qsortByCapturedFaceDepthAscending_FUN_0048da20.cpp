// Name: engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20
// Address: 0048da20
// Address Range: [[0048da20, 0048da4a]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20(SFace * * face_ptr_a, SFace * * face_ptr_b)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 (0048da80) at 0048daca [DATA]

#include "nocturne.h"

int __cdecl
engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20
          (SFace **face_ptr_a,SFace **face_ptr_b)

{
  if ((*face_ptr_b)->depth < (*face_ptr_a)->depth) {
    return 1;
  }
  if ((*face_ptr_a)->depth < (*face_ptr_b)->depth) {
    return -1;
  }
  return 0;
}


// Assembly code:
// 0048da20: PUSH EBX
//   Label: engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20
// 0048da21: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0048da25: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048da29: MOV EDX,dword ptr [EDX]
// 0048da2b: MOV EAX,dword ptr [EAX]
// 0048da2d: MOV ECX,dword ptr [EDX + 0x8]
// 0048da30: MOV EBX,dword ptr [EAX + 0x8]
// 0048da33: CMP ECX,EBX
// 0048da35: JG 0x0048da40
//   XREF to: 0048da40 (CONDITIONAL_JUMP)
// 0048da37: JGE 0x0048da47
//   XREF to: 0048da47 (CONDITIONAL_JUMP)
// 0048da39: MOV EAX,0xffffffff
// 0048da3e: POP EBX
// 0048da3f: RET
// 0048da40: MOV EAX,0x1
//   Label: LAB_0048da40
// 0048da45: POP EBX
// 0048da46: RET
// 0048da47: XOR EAX,EAX
//   Label: LAB_0048da47
// 0048da49: POP EBX
// 0048da4a: RET
