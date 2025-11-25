// Name: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
// Address: 0048c970
// Address Range: [[0048c970, 0048c9eb]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
// Cross-references:
//   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 (00457650) at 004577f8 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 (00497e50) at 004983ff [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0 (004990f0) at 0049910a [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc300 (004cc300) at 004cc5d9 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00597523 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0 (0059abf0) at 0059b347 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 (0051d520) at 0051d692 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990 (0051e990) at 0051eaba [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition
//   int g_ActiveRenderColor
//   int g_UseExternalRenderer

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
          (CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

{
  uint uVar1;
  
  uVar1 = blue_component << ((byte)g_BlueBitPosition & 0x1f) |
          red_component << ((byte)g_RedBitPosition & 0x1f) |
          green_component << ((byte)g_GreenBitPosition & 0x1f);
  g_ActiveRenderColor = blue_component | red_component << 0x10 | green_component << 8;
  if (g_UseExternalRenderer == 0) {
    if (g_BitsPerPixel == 0x20) {
      g_ActiveRenderColor = uVar1;
    }
    g_ActiveRenderColor = g_ActiveRenderColor | this_ptr->alpha_mask;
    return;
  }
  if (g_BitsPerPixel == 0x20) {
    g_ActiveRenderColor = uVar1;
  }
  return;
}


// Assembly code:
// 0048c970: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
// 0048c971: PUSH ESI
// 0048c972: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0048c976: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0048c97a: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0048c980: MOV ESI,EBX
// 0048c982: SHL EDX,CL
// 0048c984: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 0048c98a: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0048c98e: SHL ESI,CL
// 0048c990: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 0048c996: SHL EBX,0x8
// 0048c999: SHL EAX,CL
// 0048c99b: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0048c99f: OR EAX,ESI
// 0048c9a1: SHL ECX,0x10
// 0048c9a4: OR EDX,EAX
// 0048c9a6: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0048c9aa: OR ECX,EBX
// 0048c9ac: OR EAX,ECX
// 0048c9ae: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 0048c9b5: JNZ 0x0048c9d6
//   XREF to: 0048c9d6 (CONDITIONAL_JUMP)
// 0048c9b7: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0048c9be: JNZ 0x0048c9c2
//   XREF to: 0048c9c2 (CONDITIONAL_JUMP)
// 0048c9c0: MOV EAX,EDX
// 0048c9c2: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0048c9c2
//   XREF to: Stack[0x4] (READ)
// 0048c9c6: MOV ECX,EAX
// 0048c9c8: MOV EDX,dword ptr [EDX + 0x14]
// 0048c9cb: OR ECX,EDX
// 0048c9cd: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 0048c9d3: POP ESI
// 0048c9d4: POP EBX
// 0048c9d5: RET
// 0048c9d6: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048c9d6
//   XREF to: 0067939c (READ)
// 0048c9dd: JNZ 0x0048c9e1
//   XREF to: 0048c9e1 (CONDITIONAL_JUMP)
// 0048c9df: MOV EAX,EDX
// 0048c9e1: MOV ECX,EAX
//   Label: LAB_0048c9e1
// 0048c9e3: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 0048c9e9: POP ESI
// 0048c9ea: POP EBX
// 0048c9eb: RET
