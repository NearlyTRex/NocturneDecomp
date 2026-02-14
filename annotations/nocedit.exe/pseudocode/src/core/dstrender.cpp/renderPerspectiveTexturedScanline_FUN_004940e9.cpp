// Name: core_dstrender.cpp_renderPerspectiveTexturedScanline_FUN_004940e9
// Address: 004940e9
// Address Range: [[004940e9, 004941c2] [004941d0, 004941d5]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_renderPerspectiveTexturedScanline_FUN_004940e9(SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_renderPerspectiveTexturedScanline_FUN_004940e9(SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

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
      *(uint *)((int)g_PerspectiveScanlineColorPtr + uVar1) =
           *(uint *)
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
