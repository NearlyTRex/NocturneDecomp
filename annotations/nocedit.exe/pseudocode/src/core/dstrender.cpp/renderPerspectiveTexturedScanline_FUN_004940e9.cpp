// Name: core_dstrender.cpp_renderPerspectiveTexturedScanline_FUN_004940e9
// Address: 004940e9
// Address Range: [[004940e9, 004941c2] [004941d0, 004941d5]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderPerspectiveTexturedScanline_FUN_004940e9(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90 (0048ad90) at 0048adf2 [DATA]
// Globals:
//   uint g_PerspectiveNextU = 0x0
//   uint g_PerspectiveNextV = 0x0
//   int g_DeltaTextureU = 0x0
//   int g_DeltaTextureV = 0x0
//   void* g_PerspectiveScanlineColorPtr = 00000000
//   int g_PerspectiveScanlinePixelCount = 0x0
//   ulonglong g_TextureShift1 = 0x10
//   ulonglong g_TextureShift2 = 0x8
//   ulonglong g_TextureMask1 = 0xff
//   ulonglong g_TextureMask2 = 0xff00
//   void*[1024] g_ScreenBufferArray
//   undefined4 DAT_02d02584
//   void* g_CurrentTextureData

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderPerspectiveTexturedScanline_FUN_004940e9
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_ESI;
  int iVar5;
  int unaff_EDI;
  
  uVar3 = *(uint *)(unaff_ESI + 8);
  uVar4 = *(uint *)(unaff_EDI + 8);
  uVar1 = uVar3;
  iVar5 = unaff_ESI;
  if (uVar4 < uVar3) {
    uVar1 = uVar4;
    uVar4 = uVar3;
    iVar5 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar1 = uVar1 >> 0x10;
  iVar2 = (uVar4 >> 0x10) - uVar1;
  if (iVar2 != 0 && uVar1 <= uVar4 >> 0x10) {
    g_PerspectiveScanlineColorPtr = (void *)((int)g_ScreenBufferArray[unaff_EBX] + uVar1 * 4);
    g_PerspectiveScanlinePixelCount = iVar2 * 4;
    uVar3 = *(uint *)(iVar5 + 0x18);
    g_DeltaTextureU =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar3) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar4 = *(uint *)(iVar5 + 0x20);
    g_DeltaTextureV =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar4) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar1 = 0;
    g_PerspectiveNextU = uVar3;
    g_PerspectiveNextV = uVar4;
    while( true ) {
      *(undefined4 *)((int)g_PerspectiveScanlineColorPtr + uVar1) =
           *(undefined4 *)
            (((uVar3 >> g_TextureShift1 & (uint)g_TextureMask1) +
             (uVar4 >> g_TextureShift2 & (uint)g_TextureMask2)) * 4 + (int)g_CurrentTextureData);
      uVar1 = uVar1 + 4;
      if ((uint)g_PerspectiveScanlinePixelCount <= uVar1) break;
      uVar3 = uVar3 + g_DeltaTextureU;
      uVar4 = uVar4 + g_DeltaTextureV;
    }
  }
  return;
}


// Assembly code:
// 004940e9: PUSH ESI
//   Label: core_dstrender.cpp_renderPerspectiveTexturedScanline_FUN_004940e9
// 004940ea: PUSH EDI
// 004940eb: PUSH EBP
// 004940ec: MOV EAX,dword ptr [ESI + 0x8]
// 004940ef: MOV ECX,dword ptr [EDI + 0x8]
// 004940f2: CMP EAX,ECX
// 004940f4: JBE 0x004940f9
//   XREF to: 004940f9 (CONDITIONAL_JUMP)
// 004940f6: XCHG EAX,ECX
// 004940f7: XCHG EDI,ESI
// 004940f9: SHR ECX,0x10
//   Label: LAB_004940f9
// 004940fc: SHR EAX,0x10
// 004940ff: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00494106: SUB ECX,EAX
// 00494108: JLE 0x004941d0
//   XREF to: 004941d0 (CONDITIONAL_JUMP)
// 0049410e: LEA EBX,[EBX + EAX*0x4]
// 00494111: SHL ECX,0x2
// 00494114: MOV dword ptr [0x006723d4],ECX
//   XREF to: 006723d4 (WRITE)
// 0049411a: MOV dword ptr [0x006723d0],EBX
//   XREF to: 006723d0 (WRITE)
// 00494120: MOV EAX,dword ptr [EDI + 0x18]
// 00494123: MOV EBX,dword ptr [ESI + 0x18]
// 00494126: SUB EAX,EBX
// 00494128: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 0049412e: MOV dword ptr [0x006723a8],EBX
//   XREF to: 006723a8 (WRITE)
// 00494134: MOV dword ptr [0x006723c4],EDX
//   XREF to: 006723c4 (WRITE)
// 0049413a: MOV EAX,dword ptr [EDI + 0x20]
// 0049413d: MOV EBX,dword ptr [ESI + 0x20]
// 00494140: SUB EAX,EBX
// 00494142: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 00494148: MOV dword ptr [0x006723ac],EBX
//   XREF to: 006723ac (WRITE)
// 0049414e: MOV dword ptr [0x006723c8],EDX
//   XREF to: 006723c8 (WRITE)
// 00494154: MOV ECX,dword ptr [0x006723a8]
//   XREF to: 006723a8 (READ)
// 0049415a: MOV EDX,dword ptr [0x006723ac]
//   XREF to: 006723ac (READ)
// 00494160: MOV EDI,0x0
// 00494165: MOVD MM0,ECX
//   Label: LAB_00494165
// 00494168: MOVD MM2,EDX
// 0049416b: PSRLQ MM0,qword ptr [0x006826e0]
//   XREF to: 006826e0 (READ)
// 00494172: PSRLQ MM2,qword ptr [0x00682700]
//   XREF to: 00682700 (READ)
// 00494179: PAND MM0,qword ptr [0x00682720]
//   XREF to: 00682720 (READ)
// 00494180: PAND MM2,qword ptr [0x00682740]
//   XREF to: 00682740 (READ)
// 00494187: PADDD MM0,MM2
// 0049418a: MOVD EBX,MM0
// 0049418d: SHL EBX,0x2
// 00494190: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 00494196: MOVD MM0,dword ptr [EBX]
// 00494199: MOV EBX,dword ptr [0x006723d0]
//   XREF to: 006723d0 (READ)
// 0049419f: ADD EBX,EDI
// 004941a1: MOVD dword ptr [EBX],MM0
// 004941a4: ADD EDI,0x4
// 004941a7: CMP EDI,dword ptr [0x006723d4]
//   XREF to: 006723d4 (READ)
// 004941ad: JNC 0x004941d0
//   XREF to: 004941d0 (CONDITIONAL_JUMP)
// 004941af: ADD ECX,dword ptr [0x006723c4]
//   XREF to: 006723c4 (READ)
// 004941b5: PADDW MM5,MM6
// 004941b8: ADD EDX,dword ptr [0x006723c8]
//   XREF to: 006723c8 (READ)
// 004941be: MOVQ MM0,MM5
// 004941c1: JMP 0x00494165
//   XREF to: 00494165 (UNCONDITIONAL_JUMP)
// 004941d0: POP EBP
//   Label: LAB_004941d0
// 004941d1: EMMS
// 004941d3: POP EDI
// 004941d4: POP ESI
// 004941d5: RET
