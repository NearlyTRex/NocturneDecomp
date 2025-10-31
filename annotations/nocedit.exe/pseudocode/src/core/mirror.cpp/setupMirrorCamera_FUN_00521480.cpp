// Name: core_mirror.cpp_setupMirrorCamera_FUN_00521480
// Address: 00521480
// Address Range: [[00521480, 005214be]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_setupMirrorCamera_FUN_00521480(SMirrorReflection * reflection)
// Cross-references:
//   core_mirror.cpp_setupMirrorReflection_FUN_005214c0 (005214c0) at 00521ee6 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200

#include "nocturne.h"

void __cdecl core_mirror_cpp_setupMirrorCamera_FUN_00521480(SMirrorReflection *reflection)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,&reflection->camera_origin);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
            (g_CDemonRendererPtr,reflection->projection_scale);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
            (g_CDemonRendererPtr,&reflection->reflection_matrix,&reflection->corner1);
  return;
}


// Assembly code:
// 00521480: PUSH EBX
//   Label: core_mirror.cpp_setupMirrorCamera_FUN_00521480
// 00521481: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00521485: LEA EAX,[EBX + 0x60]
// 00521488: PUSH EAX
// 00521489: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052148f: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00521490: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 00521495: ADD ESP,0x8
// 00521498: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052149e: PUSH dword ptr [EBX + 0x6c]
// 005214a1: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005214a2: CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: 0048c650 (UNCONDITIONAL_CALL)
// 005214a7: ADD ESP,0x8
// 005214aa: LEA EAX,[EBX + 0x70]
// 005214ad: PUSH EAX
// 005214ae: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005214b4: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005214b5: CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
//   XREF to: 0048c200 (UNCONDITIONAL_CALL)
// 005214ba: ADD ESP,0x8
// 005214bd: POP EBX
// 005214be: RET
