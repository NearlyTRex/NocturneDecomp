// Name: core_set.cpp_FUN_00570af0
// Address: 00570af0
// Address Range: [[00570af0, 00570b63]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_00570af0()
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056c024 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c540 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056cd60 (0056cd60) at 0056cec5 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056cf00 (0056cf00) at 0056d051 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a44d [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   CVector3f g_SavedCameraOrigin
//   CVector3f g_SavedCameraRotation
//   float g_SavedProjectionFactor
// Function calls:
//   engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
//   engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0

#include "nocturne.h"

void core_set_cpp_FUN_00570af0(void)

{
  int in_stack_00000018;
  
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)&g_SavedCameraOrigin);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
            (g_CDemonRendererPtr,g_SavedProjectionFactor);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(g_CDemonRendererPtr,0);
  *(undefined4 *)(in_stack_00000018 + 0x161650) = 0;
  return;
}


// Assembly code:
// 00570af0: PUSH EBX
//   Label: core_set.cpp_FUN_00570af0
// 00570af1: PUSH ESI
// 00570af2: PUSH EDI
// 00570af3: PUSH 0x33469d0
//   XREF to: 033469d0 (DATA)
// 00570af8: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00570afe: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00570aff: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 00570b04: ADD ESP,0x8
// 00570b07: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00570b0d: PUSH dword ptr [0x033469e8]
//   XREF to: 033469e8 (READ)
// 00570b13: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00570b14: CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: 0048c650 (UNCONDITIONAL_CALL)
// 00570b19: ADD ESP,0x8
// 00570b1c: PUSH 0x33469dc
//   XREF to: 033469dc (DATA)
// 00570b21: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00570b27: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00570b28: CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
// 00570b2d: ADD ESP,0x8
// 00570b30: PUSH 0x0
// 00570b32: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00570b38: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00570b39: CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
//   XREF to: 0048ce10 (UNCONDITIONAL_CALL)
// 00570b3e: ADD ESP,0x8
// 00570b41: PUSH 0x0
// 00570b43: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00570b49: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00570b4a: CALL engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0
//   XREF to: 0048cdf0 (UNCONDITIONAL_CALL)
// 00570b4f: ADD ESP,0x8
// 00570b52: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00570b56: MOV dword ptr [EAX + 0x161650],0x0
// 00570b60: POP EDI
// 00570b61: POP ESI
// 00570b62: POP EBX
// 00570b63: RET
