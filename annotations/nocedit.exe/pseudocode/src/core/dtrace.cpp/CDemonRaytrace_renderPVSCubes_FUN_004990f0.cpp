// Name: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0
// Address: 004990f0
// Address Range: [[004990f0, 00499160]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0(CDemonRaytrace * this_ptr)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 (00497e50) at 00498790 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   int g_PVSDrawnCubeCount
//   CDemonCube*[20000] g_PVSCubePointers
//   CVector3f[20000] g_PVSCubePositions
//   undefined4 DAT_02cb3c38
// Function calls:
//   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   wincore_windll.cpp_sync_FUN_005b7bc0

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0(CDemonRaytrace *this_ptr)

{
  CVector3f *world_position;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr,0xff,0xff,0xff);
  if (0 < g_PVSDrawnCubeCount) {
    world_position = g_PVSCubePositions;
    iVar2 = 0;
    do {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,world_position);
      core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457650
                (*(CDemonCube **)((int)g_PVSCubePointers + iVar2),0);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
      wincore_windll_cpp_sync_FUN_005b7bc0();
      world_position = world_position + 1;
    } while (iVar1 < g_PVSDrawnCubeCount);
  }
  return;
}


// Assembly code:
// 004990f0: PUSH ESI
//   Label: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0
// 004990f1: PUSH EBP
// 004990f2: PUSH 0xff
// 004990f7: PUSH 0xff
// 004990fc: PUSH 0xff
// 00499101: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00499107: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00499108: XOR ESI,ESI
// 0049910a: CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   XREF to: 0048c970 (UNCONDITIONAL_CALL)
// 0049910f: MOV ECX,dword ptr [0x02ca03a4]
//   XREF to: 02ca03a4 (READ)
// 00499115: ADD ESP,0x10
// 00499118: TEST ECX,ECX
// 0049911a: JLE 0x0049915e
//   XREF to: 0049915e (CONDITIONAL_JUMP)
// 0049911c: PUSH EDI
// 0049911d: PUSH EBX
// 0049911e: MOV EBX,0x2cb3c2c
//   XREF to: 02cb3c2c (PARAM)
// 00499123: XOR EDI,EDI
// 00499125: PUSH EBX
//   Label: LAB_00499125
//   XREF to: 02cb3c2c (DATA)
//   XREF to: 02cb3c38 (DATA)
// 00499126: MOV EBP,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0049912c: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0049912d: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00499132: ADD ESP,0x8
// 00499135: PUSH 0x0
// 00499137: MOV EAX,dword ptr [EDI + 0x2ca03ac]
//   XREF to: 02ca03ac (READ)
// 0049913d: PUSH EAX
// 0049913e: CALL core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650
//   XREF to: 00457650 (UNCONDITIONAL_CALL)
// 00499143: ADD ESP,0x8
// 00499146: ADD EDI,0x4
// 00499149: INC ESI
// 0049914a: CALL wincore_windll.cpp_sync_FUN_005b7bc0
//   XREF to: 005b7bc0 (UNCONDITIONAL_CALL)
// 0049914f: MOV EDX,dword ptr [0x02ca03a4]
//   XREF to: 02ca03a4 (READ)
// 00499155: ADD EBX,0xc
//   XREF to: 02cb3c38 (PARAM)
// 00499158: CMP ESI,EDX
// 0049915a: JL 0x00499125
//   XREF to: 00499125 (CONDITIONAL_JUMP)
// 0049915c: POP EBX
// 0049915d: POP EDI
// 0049915e: POP EBP
//   Label: LAB_0049915e
// 0049915f: POP ESI
// 00499160: RET
