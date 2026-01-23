// Name: engine_2d.c_findBestPaletteMatch_FUN_00401460
// Address: 00401460
// Address Range: [[00401460, 0040158f] [00401591, 0040159c]]
// Convention: __cdecl
// Signature: int engine_2d.c_findBestPaletteMatch_FUN_00401460(int red, int green, int blue, int start_index, int end_index)

#include "nocturne.h"

int __cdecl
engine_2d_c_findBestPaletteMatch_FUN_00401460
          (int red,int green,int blue,int start_index,int end_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int best_index;
  float local_20;
  
  pbVar5 = (byte *)(g_SourcePaletteData + start_index * 3);
  local_20 = 1e+30;
  if (start_index <= end_index) {
    iVar7 = start_index << 2;
    do {
      uVar6 = (int)(red - (uint)*pbVar5) >> 0x1f;
      fVar1 = (float)(int)((red - (uint)*pbVar5 ^ uVar6) - uVar6);
      uVar6 = (int)(green - (uint)pbVar5[1]) >> 0x1f;
      fVar2 = (float)(int)((green - (uint)pbVar5[1] ^ uVar6) - uVar6);
      uVar6 = (int)(blue - (uint)pbVar5[2]) >> 0x1f;
      fVar3 = ABS(SQRT((float)blue * (float)blue +
                       (float)green * (float)green + (float)red * (float)red) *
                  (float)0.57735027000000005 -
                  *(float *)((int)g_PaletteLuminanceCache + iVar7));
      fVar4 = (float)(int)((blue - (uint)pbVar5[2] ^ uVar6) - uVar6);
      fVar1 = fVar3 * fVar3 * (float)0.14999999999999999 +
              fVar4 * fVar4 * (float)0.11 +
              fVar2 * fVar2 * (float)0.58999999999999997 +
              fVar1 * fVar1 * (float)0.29999999999999999;
      if (fVar1 < local_20) {
        best_index = start_index;
        local_20 = fVar1;
      }
      pbVar5 = pbVar5 + 3;
      start_index = start_index + 1;
      iVar7 = iVar7 + 4;
    } while (start_index <= end_index);
  }
  return best_index;
}
