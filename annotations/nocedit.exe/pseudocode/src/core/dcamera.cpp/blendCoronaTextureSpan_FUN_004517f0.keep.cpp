// Name: core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0
// Address: 004517f0
// MANUAL RECONSTRUCTION
// Address Range: [[004517f0, 004518e3]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0(int scanline_y,int x_start,int x_end,int source_buffer_offset)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0(int scanline_y,int x_start,int x_end,int source_buffer_offset)
{
  char *pcVar9;
  byte *pbVar5;
  uint uVar8;
  int iVar7;
  int i;

  pcVar9 = g_CoronaBlurOutputBuffer[scanline_y] + x_start;
  pbVar5 = (byte *)(scanline_y * 0x140 + source_buffer_offset + 0x784 + x_start);
  uVar8 = (uint)g_CurrentGlobe->intensity_multiplier >> 10;
  iVar7 = x_end - x_start;

  for (i = 0; i < iVar7; i = i + 1) {
    pcVar9[i] = pcVar9[i] + g_CameraLookupTable[(uint)pbVar5[i] * 0x40 + uVar8];
  }
  return;
}
