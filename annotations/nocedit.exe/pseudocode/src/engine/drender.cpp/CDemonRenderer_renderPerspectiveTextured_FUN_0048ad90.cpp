// Name: engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90
// Address: 0048ad90
// Address Range: [[0048ad90, 0048ae0a]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
// Globals:
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  bool bVar2;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar1 != 0)) {
    bVar2 = this_ptr->face_count == 0;
    if (bVar2) {
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderPerspectiveTexturedScanline_FUN_004940e9;
    }
    else {
      g_RenderStateFlag2 = 0;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    g_RenderStateFlags = (int)bVar2;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(prim->base).count,(int *)(prim + 1));
  }
  return;
}


// Assembly code:
// 0048ad90: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90
// 0048ad91: PUSH ESI
// 0048ad92: PUSH EBP
// 0048ad93: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0048ad97: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048ad9b: CMP dword ptr [EBX + 0xc],0x0
// 0048ad9f: JNZ 0x0048add5
//   XREF to: 0048add5 (CONDITIONAL_JUMP)
// 0048ada1: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048ada1
// 0048ada5: JZ 0x0048ade7
//   XREF to: 0048ade7 (CONDITIONAL_JUMP)
// 0048ada7: XOR ECX,ECX
// 0048ada9: MOV EDX,0x49072f
//   XREF to: 0049072f (DATA)
// 0048adae: MOV dword ptr [0x02d052a0],ECX
//   XREF to: 02d052a0 (WRITE)
// 0048adb4: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 0048adba: MOV dword ptr [0x02d0257c],EDX
//   XREF to: 02d0257c (WRITE)
// 0048adc0: LEA EAX,[ESI + 0x18]
//   Label: LAB_0048adc0
// 0048adc3: PUSH EAX
// 0048adc4: MOV EBP,dword ptr [ESI + 0x4]
// 0048adc7: PUSH EBP
// 0048adc8: PUSH EBX
// 0048adc9: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048adce: ADD ESP,0xc
// 0048add1: POP EBP
//   Label: LAB_0048add1
// 0048add2: POP ESI
// 0048add3: POP EBX
// 0048add4: RET
// 0048add5: LEA EAX,[ESI + 0x8]
//   Label: LAB_0048add5
// 0048add8: PUSH EAX
// 0048add9: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048adde: ADD ESP,0x4
// 0048ade1: TEST EAX,EAX
// 0048ade3: JZ 0x0048add1
//   XREF to: 0048add1 (CONDITIONAL_JUMP)
// 0048ade5: JMP 0x0048ada1
//   XREF to: 0048ada1 (UNCONDITIONAL_JUMP)
// 0048ade7: PUSH EDI
//   Label: LAB_0048ade7
// 0048ade8: MOV EBP,0x1
// 0048aded: MOV EAX,0x6
// 0048adf2: MOV EDI,0x4940e9
//   XREF to: 004940e9 (DATA)
// 0048adf7: MOV dword ptr [0x02d052a0],EBP
//   XREF to: 02d052a0 (WRITE)
// 0048adfd: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 0048ae02: MOV dword ptr [0x02d0257c],EDI
//   XREF to: 02d0257c (WRITE)
// 0048ae08: POP EDI
// 0048ae09: JMP 0x0048adc0
//   XREF to: 0048adc0 (UNCONDITIONAL_JUMP)
