// Name: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_004907e7
// Address: 004907e7
// Address Range: [[004907e7, 00490901]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_004907e7(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650 (0048b650) at 0048b6a8 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730 (0048b730) at 0048b7a8 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550 (0048b550) at 0048b5c4 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890 (0048b890) at 0048b8e8 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970 (0048b970) at 0048b9e8 [PARAM]
// Globals:
//   uint g_PerspectiveNextU = 0x0
//   uint g_PerspectiveNextV = 0x0
//   uint g_StartDepthZ = 0x0
//   int g_DeltaTextureU = 0x0
//   int g_DeltaTextureV = 0x0
//   int g_DeltaDepthZ = 0x0
//   int g_PerspectiveScanlinePixelCount = 0x0
//   uint* g_PerspectiveScanlineZPtr = 00000000
//   ulonglong g_TextureShift1 = 0x10
//   ulonglong g_TextureShift2 = 0x8
//   ulonglong g_TextureMask1 = 0xff
//   ulonglong g_TextureMask2 = 0xff00
//   void*[1024] g_ScreenBufferArray
//   undefined4 DAT_02d02584
//   void* g_CurrentTextureData
//   void* g_CurrentTextureOpacityData

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  SEdgeData *pSVar6;
  uint uVar7;
  
  uVar4 = left_edge->x_current;
  uVar5 = right_edge->x_current;
  uVar1 = uVar4;
  pSVar6 = left_edge;
  if (uVar5 < uVar4) {
    uVar1 = uVar5;
    uVar5 = uVar4;
    pSVar6 = right_edge;
    right_edge = left_edge;
  }
  uVar1 = uVar1 >> 0x10;
  iVar3 = (uVar5 >> 0x10) - uVar1;
  if (iVar3 != 0 && uVar1 <= uVar5 >> 0x10) {
    g_PerspectiveScanlinePixelCount = iVar3 * 2;
    g_PerspectiveScanlineZPtr = (uint *)((int)g_ScreenBufferArray[scanline_y] + uVar1 * 2);
    uVar4 = pSVar6->u_current;
    g_DeltaTextureU =
         (int)((ulonglong)
               ((longlong)(int)(right_edge->u_current - uVar4) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar5 = pSVar6->v_current;
    g_DeltaTextureV =
         (int)((ulonglong)
               ((longlong)(int)(right_edge->v_current - uVar5) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar1 = pSVar6->z_current;
    g_DeltaDepthZ =
         (int)((ulonglong)
               ((longlong)(int)(right_edge->z_current - uVar1) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar7 = 0;
    g_PerspectiveNextU = uVar4;
    g_PerspectiveNextV = uVar5;
    g_StartDepthZ = uVar1;
    while( true ) {
      if (uVar1 < *(ushort *)((int)g_PerspectiveScanlineZPtr + uVar7)) {
        pvVar2 = g_CurrentTextureOpacityData;
        if (g_CurrentTextureOpacityData == (void *)0x0) {
          pvVar2 = g_CurrentTextureData;
        }
        if (*(char *)((uVar4 >> g_TextureShift1 & (uint)g_TextureMask1) +
                      (uVar5 >> g_TextureShift2 & (uint)g_TextureMask2) + (int)pvVar2) != '\0') {
          *(ushort *)((int)g_PerspectiveScanlineZPtr + uVar7) = (ushort)uVar1;
        }
      }
      uVar7 = uVar7 + 2;
      if ((uint)g_PerspectiveScanlinePixelCount < uVar7) break;
      uVar4 = uVar4 + g_DeltaTextureU;
      uVar5 = uVar5 + g_DeltaTextureV;
      uVar1 = uVar1 + g_DeltaDepthZ;
    }
  }
  return;
}


// Assembly code:
// 004907e7: PUSH ESI
//   Label: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_004907e7
// 004907e8: PUSH EDI
// 004907e9: PUSH EBP
// 004907ea: MOV EAX,dword ptr [ESI + 0x8]
// 004907ed: MOV ECX,dword ptr [EDI + 0x8]
// 004907f0: CMP EAX,ECX
// 004907f2: JBE 0x004907f7
//   XREF to: 004907f7 (CONDITIONAL_JUMP)
// 004907f4: XCHG EAX,ECX
// 004907f5: XCHG EDI,ESI
// 004907f7: SHR ECX,0x10
//   Label: LAB_004907f7
// 004907fa: SHR EAX,0x10
// 004907fd: MOV EBP,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00490804: SUB ECX,EAX
// 00490806: JLE 0x004908fc
//   XREF to: 004908fc (CONDITIONAL_JUMP)
// 0049080c: SHL ECX,0x1
// 0049080e: LEA EBP,[EBP + EAX*0x2]
// 00490812: MOV dword ptr [0x006723d4],ECX
//   XREF to: 006723d4 (WRITE)
// 00490818: MOV dword ptr [0x006723d8],EBP
//   XREF to: 006723d8 (WRITE)
// 0049081e: MOV EAX,dword ptr [EDI + 0x18]
// 00490821: MOV EBX,dword ptr [ESI + 0x18]
// 00490824: SUB EAX,EBX
// 00490826: IMUL dword ptr [ECX*0x2 + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 0049082d: MOV dword ptr [0x006723a8],EBX
//   XREF to: 006723a8 (WRITE)
// 00490833: MOV dword ptr [0x006723c4],EDX
//   XREF to: 006723c4 (WRITE)
// 00490839: MOV EAX,dword ptr [EDI + 0x20]
// 0049083c: MOV EBX,dword ptr [ESI + 0x20]
// 0049083f: SUB EAX,EBX
// 00490841: IMUL dword ptr [ECX*0x2 + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 00490848: MOV dword ptr [0x006723ac],EBX
//   XREF to: 006723ac (WRITE)
// 0049084e: MOV dword ptr [0x006723c8],EDX
//   XREF to: 006723c8 (WRITE)
// 00490854: MOV EAX,dword ptr [EDI + 0x28]
// 00490857: MOV EBX,dword ptr [ESI + 0x28]
// 0049085a: SUB EAX,EBX
// 0049085c: IMUL dword ptr [ECX*0x2 + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 00490863: MOV dword ptr [0x006723b4],EBX
//   XREF to: 006723b4 (WRITE)
// 00490869: MOV dword ptr [0x006723cc],EDX
//   XREF to: 006723cc (WRITE)
// 0049086f: MOV ECX,dword ptr [0x006723a8]
//   XREF to: 006723a8 (READ)
// 00490875: MOV EDX,dword ptr [0x006723ac]
//   XREF to: 006723ac (READ)
// 0049087b: MOV EDI,0x0
// 00490880: MOV ESI,dword ptr [0x006723b4]
//   XREF to: 006723b4 (READ)
// 00490886: MOV EBP,dword ptr [0x006723d8]
//   Label: LAB_00490886
//   XREF to: 006723d8 (READ)
// 0049088c: ADD EBP,EDI
// 0049088e: MOVZX EAX,word ptr [EBP]
// 00490892: CMP ESI,EAX
// 00490894: JNC 0x004908dd
//   XREF to: 004908dd (CONDITIONAL_JUMP)
// 00490896: MOVD MM0,ECX
// 00490899: MOVD MM2,EDX
// 0049089c: PSRLQ MM0,qword ptr [0x006826e0]
//   XREF to: 006826e0 (READ)
// 004908a3: PSRLQ MM2,qword ptr [0x00682700]
//   XREF to: 00682700 (READ)
// 004908aa: PAND MM0,qword ptr [0x00682720]
//   XREF to: 00682720 (READ)
// 004908b1: PAND MM2,qword ptr [0x00682740]
//   XREF to: 00682740 (READ)
// 004908b8: PADDD MM0,MM2
// 004908bb: MOVD EBX,MM0
// 004908be: MOV EAX,[0x02d03e84]
//   XREF to: 02d03e84 (READ)
// 004908c3: TEST EAX,0xffffffff
// 004908c8: JNZ 0x004908cf
//   XREF to: 004908cf (CONDITIONAL_JUMP)
// 004908ca: MOV EAX,[0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004908cf: ADD EBX,EAX
//   Label: LAB_004908cf
// 004908d1: MOVZX EAX,byte ptr [EBX]
// 004908d4: CMP EAX,0x0
// 004908d7: JZ 0x004908dd
//   XREF to: 004908dd (CONDITIONAL_JUMP)
// 004908d9: MOV word ptr [EBP],SI
// 004908dd: ADD EDI,0x2
//   Label: LAB_004908dd
// 004908e0: CMP EDI,dword ptr [0x006723d4]
//   XREF to: 006723d4 (READ)
// 004908e6: JA 0x004908fc
//   XREF to: 004908fc (CONDITIONAL_JUMP)
// 004908e8: ADD ECX,dword ptr [0x006723c4]
//   XREF to: 006723c4 (READ)
// 004908ee: ADD EDX,dword ptr [0x006723c8]
//   XREF to: 006723c8 (READ)
// 004908f4: ADD ESI,dword ptr [0x006723cc]
//   XREF to: 006723cc (READ)
// 004908fa: JMP 0x00490886
//   XREF to: 00490886 (UNCONDITIONAL_JUMP)
// 004908fc: POP EBP
//   Label: LAB_004908fc
// 004908fd: EMMS
// 004908ff: POP EDI
// 00490900: POP ESI
// 00490901: RET
