// Name: core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970
// Address: 004ef970
// Address Range: [[004ef970, 004ef989]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
// Cross-references:
//   core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990 (004ef990) at 004efb2a [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10

#include "nocturne.h"

void __cdecl
core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970
          (CGround *this_ptr,SMRGLHeaderPrimitive *primitive)

{
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,primitive,0x24d);
  return;
}


// Assembly code:
// 004ef970: PUSH 0x24d
//   Label: core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970
// 004ef975: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004ef979: PUSH EDX
// 004ef97a: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ef980: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004ef981: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 004ef986: ADD ESP,0xc
// 004ef989: RET
