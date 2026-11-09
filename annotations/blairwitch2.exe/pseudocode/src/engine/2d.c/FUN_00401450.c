// Name: engine_2d.c_FUN_00401450
// Address: 00401450
// Address Range: [[00401450, 0040158c]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_FUN_00401450(int red,int green,int blue,int start_index,int end_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_2d_c_FUN_00401450(int red,int green,int blue,int start_index,int end_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int unaff_EDI;
  float local_20;
  
  pbVar5 = &DAT_01c35838 + start_index * 3;
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
                       (float)green * (float)green + (float)red * (float)red) * (float)_DAT_005ca034
                  - *(float *)((int)&DAT_0070c638 + iVar7));
      fVar4 = (float)(int)((blue - (uint)pbVar5[2] ^ uVar6) - uVar6);
      fVar1 = fVar3 * fVar3 * (float)_DAT_005ca054 +
              fVar4 * fVar4 * (float)_DAT_005ca04c +
              fVar2 * fVar2 * (float)_DAT_005ca044 + fVar1 * fVar1 * (float)_DAT_005ca03c;
      if (fVar1 < local_20) {
        unaff_EDI = start_index;
        local_20 = fVar1;
      }
      pbVar5 = pbVar5 + 3;
      start_index = start_index + 1;
      iVar7 = iVar7 + 4;
    } while (start_index <= end_index);
  }
  return unaff_EDI;
}
