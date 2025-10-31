// Name: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50
// Address: 0048da50
// Address Range: [[0048da50, 0048da7a]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50(SFace * * face_ptr_a, SFace * * face_ptr_b)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 (0048da80) at 0048db65 [DATA]

#include "nocturne.h"

int __cdecl
engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50
          (SFace **face_ptr_a,SFace **face_ptr_b)

{
  if ((*face_ptr_a)->depth < (*face_ptr_b)->depth) {
    return 1;
  }
  if ((*face_ptr_b)->depth < (*face_ptr_a)->depth) {
    return -1;
  }
  return 0;
}


// Assembly code:
// 0048da50: PUSH EBX
//   Label: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50
// 0048da51: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0048da55: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048da59: MOV EDX,dword ptr [EDX]
// 0048da5b: MOV EAX,dword ptr [EAX]
// 0048da5d: MOV ECX,dword ptr [EDX + 0x8]
// 0048da60: MOV EBX,dword ptr [EAX + 0x8]
// 0048da63: CMP ECX,EBX
// 0048da65: JL 0x0048da70
//   XREF to: 0048da70 (CONDITIONAL_JUMP)
// 0048da67: JLE 0x0048da77
//   XREF to: 0048da77 (CONDITIONAL_JUMP)
// 0048da69: MOV EAX,0xffffffff
// 0048da6e: POP EBX
// 0048da6f: RET
// 0048da70: MOV EAX,0x1
//   Label: LAB_0048da70
// 0048da75: POP EBX
// 0048da76: RET
// 0048da77: XOR EAX,EAX
//   Label: LAB_0048da77
// 0048da79: POP EBX
// 0048da7a: RET
