// Name: engine_drender.cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320
// Address: 0048b320
// Address Range: [[0048b320, 0048b414]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   int[16] g_VertexIndexBuffer
//   undefined4 g_VertexIndexBuffer[1]
//   undefined4 g_VertexIndexBuffer[2]
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  ushort uVar1;
  SClipPlane *pSVar2;
  SMRGLHeaderPrimitive *pSVar3;
  
  if ((this_ptr->face_count == 0) && (this_ptr->field8_0x20 == 0)) {
    pSVar3 = polygon_info;
    do {
      uVar1 = (ushort)(pSVar3->base).type;
      this_ptr->vertex_buffer_ptr[uVar1].u =
           (float)((uint)*(ushort *)((int)&(pSVar3->base).count + 2) << 8);
      pSVar2 = &pSVar3->surface_normal;
      pSVar3 = (SMRGLHeaderPrimitive *)((int)&(pSVar3->base).type + 2);
      this_ptr->vertex_buffer_ptr[uVar1].v = (float)((uint)(ushort)pSVar2->B << 8);
    } while (pSVar3 != (SMRGLHeaderPrimitive *)((int)&(polygon_info->base).count + 2));
  }
  g_VertexIndexBuffer[0] = (int)(ushort)(polygon_info->base).type;
  g_VertexIndexBuffer[1] = (int)*(ushort *)((int)&(polygon_info->base).type + 2);
  g_VertexIndexBuffer[2] = (int)(ushort)(polygon_info->base).count;
  if (this_ptr->face_count == 0) {
    if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
    g_RenderStateFlags = RENDER_ENGINE_CORE_PREMIUM;
  }
  else {
    g_RenderStateFlags = 0;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(this_ptr,3,g_VertexIndexBuffer);
  return;
}


// Assembly code:
// 0048b320: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320
// 0048b321: PUSH ESI
// 0048b322: PUSH EDI
// 0048b323: PUSH EBP
// 0048b324: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048b328: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048b32c: CMP dword ptr [ECX + 0x4],0x0
// 0048b330: JZ 0x0048b3ae
//   XREF to: 0048b3ae (CONDITIONAL_JUMP)
// 0048b332: LEA EAX,[EAX]
// 0048b338: LEA EDX,[EDX]
// 0048b33e: MOV EAX,EAX
// 0048b340: XOR EAX,EAX
//   Label: LAB_0048b340
// 0048b342: MOV AX,word ptr [EBP]
// 0048b346: MOV [0x02c6d5ac],EAX
//   XREF to: 02c6d5ac (WRITE)
// 0048b34b: XOR EAX,EAX
// 0048b34d: MOV AX,word ptr [EBP + 0x2]
// 0048b351: MOV [0x02c6d5b0],EAX
//   XREF to: 02c6d5b0 (WRITE)
// 0048b356: XOR EAX,EAX
// 0048b358: MOV AX,word ptr [EBP + 0x4]
// 0048b35c: MOV ESI,dword ptr [ECX + 0x4]
// 0048b35f: MOV [0x02c6d5b4],EAX
//   XREF to: 02c6d5b4 (WRITE)
// 0048b364: TEST ESI,ESI
// 0048b366: JNZ 0x0048b3eb
//   XREF to: 0048b3eb (CONDITIONAL_JUMP)
// 0048b36c: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0048b373: JNZ 0x0048b406
//   XREF to: 0048b406 (CONDITIONAL_JUMP)
// 0048b379: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048b383: MOV EBX,0x6
//   Label: LAB_0048b383
// 0048b388: MOV EDX,0x2cd
// 0048b38d: MOV dword ptr [0x02d052a4],EBX
//   XREF to: 02d052a4 (WRITE)
// 0048b393: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048b399: PUSH 0x2c6d5ac
//   Label: LAB_0048b399
//   XREF to: 02c6d5ac (DATA)
// 0048b39e: PUSH 0x3
// 0048b3a0: PUSH ECX
// 0048b3a1: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048b3a6: ADD ESP,0xc
// 0048b3a9: POP EBP
// 0048b3aa: POP EDI
// 0048b3ab: POP ESI
// 0048b3ac: POP EBX
// 0048b3ad: RET
// 0048b3ae: CMP dword ptr [ECX + 0x20],0x0
//   Label: LAB_0048b3ae
// 0048b3b2: JNZ 0x0048b340
//   XREF to: 0048b340 (CONDITIONAL_JUMP)
// 0048b3b4: MOV EAX,EBP
// 0048b3b6: LEA EDI,[EBP + 0x6]
// 0048b3b9: XOR EDX,EDX
//   Label: LAB_0048b3b9
// 0048b3bb: MOV DX,word ptr [EAX]
// 0048b3be: IMUL EDX,EDX,0x30
// 0048b3c1: XOR ESI,ESI
// 0048b3c3: MOV SI,word ptr [EAX + 0x6]
// 0048b3c7: MOV EBX,dword ptr [ECX]
// 0048b3c9: SHL ESI,0x8
// 0048b3cc: MOV dword ptr [EDX + EBX*0x1 + 0x18],ESI
// 0048b3d0: XOR EBX,EBX
// 0048b3d2: MOV BX,word ptr [EAX + 0xc]
// 0048b3d6: MOV ESI,dword ptr [ECX]
// 0048b3d8: SHL EBX,0x8
// 0048b3db: ADD EAX,0x2
// 0048b3de: MOV dword ptr [EDX + ESI*0x1 + 0x1c],EBX
// 0048b3e2: CMP EAX,EDI
// 0048b3e4: JNZ 0x0048b3b9
//   XREF to: 0048b3b9 (CONDITIONAL_JUMP)
// 0048b3e6: JMP 0x0048b340
//   XREF to: 0048b340 (UNCONDITIONAL_JUMP)
// 0048b3eb: XOR EDI,EDI
//   Label: LAB_0048b3eb
// 0048b3ed: MOV ESI,0x49072f
//   XREF to: 0049072f (DATA)
// 0048b3f2: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 0048b3f8: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0048b3fe: MOV dword ptr [0x02d0257c],ESI
//   XREF to: 02d0257c (WRITE)
// 0048b404: JMP 0x0048b399
//   XREF to: 0048b399 (UNCONDITIONAL_JUMP)
// 0048b406: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048b406
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048b410: JMP 0x0048b383
//   XREF to: 0048b383 (UNCONDITIONAL_JUMP)
