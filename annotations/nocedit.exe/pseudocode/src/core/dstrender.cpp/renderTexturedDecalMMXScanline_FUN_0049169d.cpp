// Name: core_dstrender.cpp_renderTexturedDecalMMXScanline_FUN_0049169d
// Address: 0049169d
// Address Range: [[0049169d, 004917bb]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderTexturedDecalMMXScanline_FUN_0049169d(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420 (0048b420) at 0048b52d [DATA]
// Globals:
//   uint g_PerspectiveNextU = 0x0
//   uint g_PerspectiveNextV = 0x0
//   uint g_StartDepthZ = 0x0
//   int g_DeltaTextureU = 0x0
//   int g_DeltaTextureV = 0x0
//   int g_DeltaDepthZ = 0x0
//   void* g_PerspectiveScanlineColorPtr = 00000000
//   int g_PerspectiveScanlinePixelCount = 0x0
//   uint* g_PerspectiveScanlineZPtr = 00000000
//   ulonglong g_TextureShift1 = 0x10
//   ulonglong g_TextureShift2 = 0x8
//   ulonglong g_TextureMask1 = 0xff
//   ulonglong g_TextureMask2 = 0xff00
//   void*[1024] g_ScreenBufferArray
//   uint*[1024] g_ZBufferScanlineArray
//   uint[256] g_Hardware32BitPalette
//   undefined4 DAT_02d02584
//   void* g_CurrentTextureData

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_0049169d
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  SEdgeData *pSVar5;
  uint uVar6;
  
  uVar3 = left_edge->x_current;
  uVar4 = right_edge->x_current;
  uVar1 = uVar3;
  pSVar5 = left_edge;
  if (uVar4 < uVar3) {
    uVar1 = uVar4;
    uVar4 = uVar3;
    pSVar5 = right_edge;
    right_edge = left_edge;
  }
  uVar1 = uVar1 >> 0x10;
  iVar2 = (uVar4 >> 0x10) - uVar1;
  if (iVar2 != 0 && uVar1 <= uVar4 >> 0x10) {
    g_PerspectiveScanlineColorPtr = (void *)((int)g_ScreenBufferArray[scanline_y] + uVar1 * 4);
    g_PerspectiveScanlinePixelCount = iVar2 * 4;
    g_PerspectiveScanlineZPtr = g_ZBufferScanlineArray[scanline_y] + uVar1;
    uVar3 = pSVar5->u_current;
    g_DeltaTextureU =
         (int)((ulonglong)
               ((longlong)(int)(right_edge->u_current - uVar3) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar4 = pSVar5->v_current;
    g_DeltaTextureV =
         (int)((ulonglong)
               ((longlong)(int)(right_edge->v_current - uVar4) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar1 = pSVar5->z_current;
    g_DeltaDepthZ =
         (int)((ulonglong)
               ((longlong)(int)(right_edge->z_current - uVar1) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar6 = 0;
    g_PerspectiveNextU = uVar3;
    g_PerspectiveNextV = uVar4;
    g_StartDepthZ = uVar1;
    while( true ) {
      if (*(int *)((int)g_PerspectiveScanlineZPtr + uVar6) <= (int)uVar1) {
        *(uint *)((int)g_PerspectiveScanlineColorPtr + uVar6) =
             g_Hardware32BitPalette
             [*(byte *)((uVar3 >> g_TextureShift1 & (uint)g_TextureMask1) +
                        (uVar4 >> g_TextureShift2 & (uint)g_TextureMask2) +
                       (int)g_CurrentTextureData)];
      }
      uVar6 = uVar6 + 4;
      if ((uint)g_PerspectiveScanlinePixelCount < uVar6) break;
      uVar3 = uVar3 + g_DeltaTextureU;
      uVar4 = uVar4 + g_DeltaTextureV;
      uVar1 = uVar1 + g_DeltaDepthZ;
    }
  }
  return;
}


// Assembly code:
// 0049169d: PUSH ESI
//   Label: core_dstrender.cpp_renderTexturedDecalMMXScanline_FUN_0049169d
// 0049169e: PUSH EDI
// 0049169f: PUSH EBP
// 004916a0: MOV EAX,dword ptr [ESI + 0x8]
// 004916a3: MOV ECX,dword ptr [EDI + 0x8]
// 004916a6: CMP EAX,ECX
// 004916a8: JBE 0x004916ad
//   XREF to: 004916ad (CONDITIONAL_JUMP)
// 004916aa: XCHG EAX,ECX
// 004916ab: XCHG EDI,ESI
// 004916ad: SHR ECX,0x10
//   Label: LAB_004916ad
// 004916b0: SHR EAX,0x10
// 004916b3: MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 004916ba: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004916c1: SUB ECX,EAX
// 004916c3: JLE 0x004917b6
//   XREF to: 004917b6 (CONDITIONAL_JUMP)
// 004916c9: LEA EBX,[EBX + EAX*0x4]
// 004916cc: SHL ECX,0x2
// 004916cf: LEA EBP,[EBP + EAX*0x4]
// 004916d3: MOV dword ptr [0x006723d4],ECX
//   XREF to: 006723d4 (WRITE)
// 004916d9: MOV dword ptr [0x006723d0],EBX
//   XREF to: 006723d0 (WRITE)
// 004916df: MOV dword ptr [0x006723d8],EBP
//   XREF to: 006723d8 (WRITE)
// 004916e5: MOV EAX,dword ptr [EDI + 0x18]
// 004916e8: MOV EBX,dword ptr [ESI + 0x18]
// 004916eb: SUB EAX,EBX
// 004916ed: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 004916f3: MOV dword ptr [0x006723a8],EBX
//   XREF to: 006723a8 (WRITE)
// 004916f9: MOV dword ptr [0x006723c4],EDX
//   XREF to: 006723c4 (WRITE)
// 004916ff: MOV EAX,dword ptr [EDI + 0x20]
// 00491702: MOV EBX,dword ptr [ESI + 0x20]
// 00491705: SUB EAX,EBX
// 00491707: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 0049170d: MOV dword ptr [0x006723ac],EBX
//   XREF to: 006723ac (WRITE)
// 00491713: MOV dword ptr [0x006723c8],EDX
//   XREF to: 006723c8 (WRITE)
// 00491719: MOV EAX,dword ptr [EDI + 0x28]
// 0049171c: MOV EBX,dword ptr [ESI + 0x28]
// 0049171f: SUB EAX,EBX
// 00491721: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 00491727: MOV dword ptr [0x006723b4],EBX
//   XREF to: 006723b4 (WRITE)
// 0049172d: MOV dword ptr [0x006723cc],EDX
//   XREF to: 006723cc (WRITE)
// 00491733: MOV ECX,dword ptr [0x006723a8]
//   XREF to: 006723a8 (READ)
// 00491739: MOV EDX,dword ptr [0x006723ac]
//   XREF to: 006723ac (READ)
// 0049173f: MOV EDI,0x0
// 00491744: MOV ESI,dword ptr [0x006723b4]
//   XREF to: 006723b4 (READ)
// 0049174a: MOV EAX,[0x006723d8]
//   Label: LAB_0049174a
//   XREF to: 006723d8 (READ)
// 0049174f: ADD EAX,EDI
// 00491751: CMP ESI,dword ptr [EAX]
// 00491753: JL 0x00491797
//   XREF to: 00491797 (CONDITIONAL_JUMP)
// 00491755: MOVD MM0,ECX
// 00491758: MOVD MM2,EDX
// 0049175b: PSRLQ MM0,qword ptr [0x006826e0]
//   XREF to: 006826e0 (READ)
// 00491762: PSRLQ MM2,qword ptr [0x00682700]
//   XREF to: 00682700 (READ)
// 00491769: PAND MM0,qword ptr [0x00682720]
//   XREF to: 00682720 (READ)
// 00491770: PAND MM2,qword ptr [0x00682740]
//   XREF to: 00682740 (READ)
// 00491777: PADDD MM0,MM2
// 0049177a: MOVD EBX,MM0
// 0049177d: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 00491783: MOVZX EAX,byte ptr [EBX]
// 00491786: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 0049178d: MOV EBX,dword ptr [0x006723d0]
//   XREF to: 006723d0 (READ)
// 00491793: ADD EBX,EDI
// 00491795: MOV dword ptr [EBX],EAX
// 00491797: ADD EDI,0x4
//   Label: LAB_00491797
// 0049179a: CMP EDI,dword ptr [0x006723d4]
//   XREF to: 006723d4 (READ)
// 004917a0: JA 0x004917b6
//   XREF to: 004917b6 (CONDITIONAL_JUMP)
// 004917a2: ADD ECX,dword ptr [0x006723c4]
//   XREF to: 006723c4 (READ)
// 004917a8: ADD EDX,dword ptr [0x006723c8]
//   XREF to: 006723c8 (READ)
// 004917ae: ADD ESI,dword ptr [0x006723cc]
//   XREF to: 006723cc (READ)
// 004917b4: JMP 0x0049174a
//   XREF to: 0049174a (UNCONDITIONAL_JUMP)
// 004917b6: POP EBP
//   Label: LAB_004917b6
// 004917b7: EMMS
// 004917b9: POP EDI
// 004917ba: POP ESI
// 004917bb: RET
