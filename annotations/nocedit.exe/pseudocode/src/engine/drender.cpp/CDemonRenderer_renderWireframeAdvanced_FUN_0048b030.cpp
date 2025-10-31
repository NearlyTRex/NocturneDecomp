// Name: engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
// Address: 0048b030
// Address Range: [[0048b030, 0048b145]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive, int render_flags)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 (0048da80) at 0048db44 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 (0048d170) at 0048d1d7 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int[16] g_VertexIndexBuffer
//   undefined4 g_VertexIndexBuffer[1]
//   undefined4 g_VertexIndexBuffer[2]
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)

{
  ushort uVar1;
  SClipPlane *pSVar2;
  SMRGLHeaderPrimitive *pSVar3;
  
  if (render_flags == -1) {
    render_flags = RENDER_ENGINE_CORE_PREMIUM;
  }
  if (this_ptr->texture_capture_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0
              (this_ptr,(STrianglePackedIndices *)primitive,render_flags);
    return;
  }
  if ((this_ptr->face_count == 0) && (this_ptr->field8_0x20 == 0)) {
    pSVar3 = primitive;
    do {
      uVar1 = (ushort)(pSVar3->base).type;
      this_ptr->vertex_buffer_ptr[uVar1].u =
           (float)((uint)*(ushort *)((int)&(pSVar3->base).count + 2) << 8);
      pSVar2 = &pSVar3->surface_normal;
      pSVar3 = (SMRGLHeaderPrimitive *)((int)&(pSVar3->base).type + 2);
      this_ptr->vertex_buffer_ptr[uVar1].v = (float)((uint)(ushort)pSVar2->B << 8);
    } while (pSVar3 != (SMRGLHeaderPrimitive *)((int)&(primitive->base).count + 2));
  }
  g_VertexIndexBuffer[0] = (int)(ushort)(primitive->base).type;
  g_VertexIndexBuffer[1] = (int)*(ushort *)((int)&(primitive->base).type + 2);
  g_VertexIndexBuffer[2] = (int)(ushort)(primitive->base).count;
  if (this_ptr->face_count == 0) {
    if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlags = render_flags;
    g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(this_ptr,3,g_VertexIndexBuffer);
    return;
  }
  g_RenderStateFlags = 0;
  g_RenderStateFlag2 = PREPROCESS_NONE;
  g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(this_ptr,3,g_VertexIndexBuffer);
  return;
}


// Assembly code:
// 0048b030: PUSH EBP
//   Label: engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
// 0048b031: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0048b035: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048b039: CMP dword ptr [ESP + 0x10],-0x1
//   XREF to: Stack[0xc] (READ)
// 0048b03e: JZ 0x0048b0a5
//   XREF to: 0048b0a5 (CONDITIONAL_JUMP)
// 0048b040: CMP dword ptr [ECX + 0x1c],0x0
//   Label: LAB_0048b040
// 0048b044: JNZ 0x0048b0af
//   XREF to: 0048b0af (CONDITIONAL_JUMP)
// 0048b046: PUSH EBX
// 0048b047: CMP dword ptr [ECX + 0x4],0x0
// 0048b04b: JZ 0x0048b0c0
//   XREF to: 0048b0c0 (CONDITIONAL_JUMP)
// 0048b04d: XOR EAX,EAX
//   Label: LAB_0048b04d
// 0048b04f: MOV AX,word ptr [EBP]
// 0048b053: MOV [0x02c6d5ac],EAX
//   XREF to: 02c6d5ac (WRITE)
// 0048b058: XOR EAX,EAX
// 0048b05a: MOV AX,word ptr [EBP + 0x2]
// 0048b05e: MOV [0x02c6d5b0],EAX
//   XREF to: 02c6d5b0 (WRITE)
// 0048b063: XOR EAX,EAX
// 0048b065: MOV AX,word ptr [EBP + 0x4]
// 0048b069: MOV EBX,dword ptr [ECX + 0x4]
// 0048b06c: MOV [0x02c6d5b4],EAX
//   XREF to: 02c6d5b4 (WRITE)
// 0048b071: TEST EBX,EBX
// 0048b073: JZ 0x0048b101
//   XREF to: 0048b101 (CONDITIONAL_JUMP)
// 0048b079: XOR EBX,EBX
// 0048b07b: MOV EDX,0x49072f
//   XREF to: 0049072f (PARAM)
// 0048b080: MOV dword ptr [0x02d052a0],EBX
//   XREF to: 02d052a0 (WRITE)
// 0048b086: MOV dword ptr [0x02d052a4],EBX
//   XREF to: 02d052a4 (WRITE)
// 0048b08c: MOV dword ptr [0x02d0257c],EDX
//   XREF to: 02d0257c (WRITE)
// 0048b092: PUSH 0x2c6d5ac
//   XREF to: 02c6d5ac (DATA)
// 0048b097: PUSH 0x3
// 0048b099: PUSH ECX
// 0048b09a: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048b09f: ADD ESP,0xc
// 0048b0a2: POP EBX
// 0048b0a3: POP EBP
// 0048b0a4: RET
// 0048b0a5: MOV dword ptr [ESP + 0x10],0x2cd
//   Label: LAB_0048b0a5
//   XREF to: Stack[0xc] (WRITE)
// 0048b0ad: JMP 0x0048b040
//   XREF to: 0048b040 (UNCONDITIONAL_JUMP)
// 0048b0af: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_0048b0af
//   XREF to: Stack[0xc] (READ)
// 0048b0b3: PUSH EDX
// 0048b0b4: PUSH EBP
// 0048b0b5: PUSH ECX
// 0048b0b6: CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
//   XREF to: 0048d8a0 (UNCONDITIONAL_CALL)
// 0048b0bb: ADD ESP,0xc
// 0048b0be: POP EBP
// 0048b0bf: RET
// 0048b0c0: CMP dword ptr [ECX + 0x20],0x0
//   Label: LAB_0048b0c0
// 0048b0c4: JNZ 0x0048b04d
//   XREF to: 0048b04d (CONDITIONAL_JUMP)
// 0048b0c6: PUSH EDI
// 0048b0c7: PUSH ESI
// 0048b0c8: MOV EAX,EBP
// 0048b0ca: LEA EDI,[EBP + 0x6]
// 0048b0cd: XOR EDX,EDX
//   Label: LAB_0048b0cd
// 0048b0cf: MOV DX,word ptr [EAX]
// 0048b0d2: IMUL EDX,EDX,0x30
// 0048b0d5: XOR ESI,ESI
// 0048b0d7: MOV SI,word ptr [EAX + 0x6]
// 0048b0db: MOV EBX,dword ptr [ECX]
// 0048b0dd: SHL ESI,0x8
// 0048b0e0: MOV dword ptr [EDX + EBX*0x1 + 0x18],ESI
// 0048b0e4: XOR EBX,EBX
// 0048b0e6: MOV BX,word ptr [EAX + 0xc]
// 0048b0ea: MOV ESI,dword ptr [ECX]
// 0048b0ec: SHL EBX,0x8
// 0048b0ef: ADD EAX,0x2
// 0048b0f2: MOV dword ptr [EDX + ESI*0x1 + 0x1c],EBX
// 0048b0f6: CMP EAX,EDI
// 0048b0f8: JNZ 0x0048b0cd
//   XREF to: 0048b0cd (CONDITIONAL_JUMP)
// 0048b0fa: POP ESI
// 0048b0fb: POP EDI
// 0048b0fc: JMP 0x0048b04d
//   XREF to: 0048b04d (UNCONDITIONAL_JUMP)
// 0048b101: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048b101
//   XREF to: 0067939c (READ)
// 0048b108: JNZ 0x0048b13a
//   XREF to: 0048b13a (CONDITIONAL_JUMP)
// 0048b10a: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048b114: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0048b114
//   XREF to: Stack[0xc] (READ)
// 0048b118: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 0048b11d: MOV dword ptr [0x02d052a4],0x6
//   XREF to: 02d052a4 (WRITE)
// 0048b127: PUSH 0x2c6d5ac
//   XREF to: 02c6d5ac (DATA)
// 0048b12c: PUSH 0x3
// 0048b12e: PUSH ECX
// 0048b12f: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048b134: ADD ESP,0xc
// 0048b137: POP EBX
// 0048b138: POP EBP
// 0048b139: RET
// 0048b13a: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048b13a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048b144: JMP 0x0048b114
//   XREF to: 0048b114 (UNCONDITIONAL_JUMP)
