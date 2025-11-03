// Name: engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
// Address: 0048ab50
// Address Range: [[0048ab50, 0048ac30]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 (00497500) at 00497cca [UNCONDITIONAL_CALL]
//   core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00522670 (00522670) at 005227d6 [UNCONDITIONAL_CALL]
//   core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0 (005225a0) at 005225c9 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_00570df0 (00570df0) at 00570e17 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70 (005e9e70) at 005ea2be [UNCONDITIONAL_CALL]
// Globals:
//   int g_RenderPixelBudget = 0x1
//   int g_RenderPixelCounter
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_UseExternalRenderer
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
//   int g_RenderedTriangleCount
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0

#include "nocturne.h"

int __cdecl
engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  
  iVar1 = g_RenderedTriangleCount;
  g_RenderPixelCounter = 0;
  if (this_ptr->plane_culling_enabled != 0) {
    iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (this_ptr->face_count == 0) {
    g_RenderStateFlags = RENDER_TEXTURE_BASE;
    g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
    g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthInterlacedProfiled_FUN_00490c37;
  }
  else {
    g_RenderStateFlags = 0;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    g_ScanlineRenderFunc = core_dstrender_cpp_renderScreenDepthTestInterlacedProfiled_FUN_00490cb5;
  }
  iVar2 = this_ptr->face_count;
  if (g_UseExternalRenderer != 0) {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(this_ptr,1);
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
            (this_ptr,(prim->base).count,(int *)(prim + 1));
  if (g_UseExternalRenderer != 0) {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(this_ptr,iVar2);
  }
  g_RenderedTriangleCount = iVar1;
  return (uint)(g_RenderPixelBudget <= g_RenderPixelCounter);
}


// Assembly code:
// 0048ab50: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
// 0048ab51: PUSH ESI
// 0048ab52: PUSH EDI
// 0048ab53: PUSH EBP
// 0048ab54: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048ab58: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048ab5c: MOV EDI,dword ptr [0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 0048ab62: XOR EDX,EDX
// 0048ab64: MOV ECX,dword ptr [EBX + 0xc]
// 0048ab67: MOV dword ptr [0x02c6d5a4],EDX
//   XREF to: 02c6d5a4 (WRITE)
// 0048ab6d: TEST ECX,ECX
// 0048ab6f: JNZ 0x0048abf3
//   XREF to: 0048abf3 (CONDITIONAL_JUMP)
// 0048ab75: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048ab75
// 0048ab79: JZ 0x0048ac0c
//   XREF to: 0048ac0c (CONDITIONAL_JUMP)
// 0048ab7f: XOR EAX,EAX
// 0048ab81: MOV EBP,0x490cb5
//   XREF to: 00490cb5 (DATA)
// 0048ab86: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 0048ab8b: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 0048ab90: MOV dword ptr [0x02d0257c],EBP
//   XREF to: 02d0257c (WRITE)
// 0048ab96: MOV ECX,dword ptr [0x02d03e94]
//   Label: LAB_0048ab96
//   XREF to: 02d03e94 (READ)
// 0048ab9c: MOV EBP,dword ptr [EBX + 0x4]
// 0048ab9f: TEST ECX,ECX
// 0048aba1: JZ 0x0048abae
//   XREF to: 0048abae (CONDITIONAL_JUMP)
// 0048aba3: PUSH 0x1
// 0048aba5: PUSH EBX
// 0048aba6: CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
// 0048abab: ADD ESP,0x8
// 0048abae: LEA EAX,[ESI + 0x18]
//   Label: LAB_0048abae
// 0048abb1: PUSH EAX
// 0048abb2: MOV EAX,dword ptr [ESI + 0x4]
// 0048abb5: PUSH EAX
// 0048abb6: PUSH EBX
// 0048abb7: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048abbc: MOV EDX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 0048abc2: ADD ESP,0xc
// 0048abc5: TEST EDX,EDX
// 0048abc7: JZ 0x0048abd3
//   XREF to: 0048abd3 (CONDITIONAL_JUMP)
// 0048abc9: PUSH EBP
// 0048abca: PUSH EBX
// 0048abcb: CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
// 0048abd0: ADD ESP,0x8
// 0048abd3: MOV EAX,[0x02c6d5a4]
//   Label: LAB_0048abd3
//   XREF to: 02c6d5a4 (READ)
// 0048abd8: MOV ECX,dword ptr [0x006703f0]
//   XREF to: 006703f0 (READ)
// 0048abde: MOV dword ptr [0x030e56b8],EDI
//   XREF to: 030e56b8 (WRITE)
// 0048abe4: CMP EAX,ECX
// 0048abe6: SETGE AL
// 0048abe9: AND EAX,0xff
// 0048abee: POP EBP
// 0048abef: POP EDI
// 0048abf0: POP ESI
// 0048abf1: POP EBX
// 0048abf2: RET
// 0048abf3: LEA EAX,[ESI + 0x8]
//   Label: LAB_0048abf3
// 0048abf6: PUSH EAX
// 0048abf7: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048abfc: ADD ESP,0x4
// 0048abff: TEST EAX,EAX
// 0048ac01: JNZ 0x0048ab75
//   XREF to: 0048ab75 (CONDITIONAL_JUMP)
// 0048ac07: POP EBP
// 0048ac08: POP EDI
// 0048ac09: POP ESI
// 0048ac0a: POP EBX
// 0048ac0b: RET
// 0048ac0c: MOV EDX,0xc0
//   Label: LAB_0048ac0c
// 0048ac11: MOV ECX,0x6
// 0048ac16: MOV EAX,0x490c37
//   XREF to: 00490c37 (DATA)
// 0048ac1b: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048ac21: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 0048ac27: MOV [0x02d0257c],EAX
//   XREF to: 02d0257c (WRITE)
// 0048ac2c: JMP 0x0048ab96
//   XREF to: 0048ab96 (UNCONDITIONAL_JUMP)
