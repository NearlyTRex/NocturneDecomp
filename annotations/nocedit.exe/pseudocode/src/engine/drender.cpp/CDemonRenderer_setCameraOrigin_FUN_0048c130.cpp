// Name: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
// Address: 0048c130
// Address Range: [[0048c130, 0048c149]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130(CDemonRenderer * this_ptr, CVector3i * origin)
// Cross-references:
//   core_terrain.cpp_CTerrain_render_FUN_005e1f50 (005e1f50) at 005e2019 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_matrix.c_setCameraOrigin_FUN_0050e270

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
          (CDemonRenderer *this_ptr,CVector3i *origin)

{
  engine_matrix_c_setCameraOrigin_FUN_0050e270(origin->x,origin->y,origin->z);
  return;
}


// Assembly code:
// 0048c130: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
// 0048c131: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048c135: MOV EDX,dword ptr [EAX + 0x8]
// 0048c138: PUSH EDX
// 0048c139: MOV ECX,dword ptr [EAX + 0x4]
// 0048c13c: PUSH ECX
// 0048c13d: MOV EBX,dword ptr [EAX]
// 0048c13f: PUSH EBX
// 0048c140: CALL engine_matrix.c_setCameraOrigin_FUN_0050e270
//   XREF to: 0050e270 (UNCONDITIONAL_CALL)
// 0048c145: ADD ESP,0xc
// 0048c148: POP EBX
// 0048c149: RET
