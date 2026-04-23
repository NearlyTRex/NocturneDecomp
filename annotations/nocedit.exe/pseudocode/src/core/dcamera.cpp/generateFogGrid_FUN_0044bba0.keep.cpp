// Name: core_dcamera.cpp_generateFogGrid_FUN_0044bba0
// Address: 0044bba0
// MANUAL RECONSTRUCTION
// Address Range: [[0044bba0, 0044bdc8]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_generateFogGrid_FUN_0044bba0(SFogGrid *fog)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_generateFogGrid_FUN_0044bba0(SFogGrid *fog)

{
  int iVar2;
  int iVar6;
  int iVar9;
  int x;
  int y;
  int z;
  uint sum;

  memset(fog,0,0x1000);
  for (iVar6 = 0; iVar6 < 0x10; iVar6 = iVar6 + 1) {
    for (iVar9 = 0; iVar9 < 0x10; iVar9 = iVar9 + 1) {
      for (iVar2 = 0; iVar2 < 0x10; iVar2 = iVar2 + 1) {
        fog->planes[iVar2].grid[iVar9][iVar6] = (char)rand();
      }
    }
  }
  for (x = 0; x < 16; x = x + 1) {
    for (y = 0; y < 16; y = y + 1) {
      for (z = 0; z < 16; z = z + 1) {
        sum = (uint)(byte)fog->planes[z].grid[y][(x + 1) & 0xf]
            + (uint)(byte)fog->planes[z].grid[y][(x - 1) & 0xf]
            + (uint)(byte)fog->planes[z].grid[(y + 1) & 0xf][x]
            + (uint)(byte)fog->planes[z].grid[(y - 1) & 0xf][x]
            + (uint)(byte)fog->planes[z].grid[y][x]
            + (uint)(byte)fog->planes[(z - 1) & 0xf].grid[y][x]
            + (uint)(byte)fog->planes[(z + 1) & 0xf].grid[y][x];
        fog->planes[z].grid[y][x] = (char)(sum / 7);
      }
    }
  }
  core_dcamera_cpp_resetFogSamplingOffset_FUN_0044bb70(fog);
  return;
}
