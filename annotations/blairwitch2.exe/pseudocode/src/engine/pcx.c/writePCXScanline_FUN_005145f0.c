// Name: engine_pcx.c_writePCXScanline_FUN_005145f0
// Address: 005145f0
// Address Range: [[005145f0, 005146bf]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_writePCXScanline_FUN_005145f0(int param_1,int *param_2)

#include "nocturne.h"

void __cdecl engine_pcx_c_writePCXScanline_FUN_005145f0(int param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar2 = 0;
  pbVar1 = *(byte **)(&DAT_01c2a38c + param_1 * 4);
  if (0 < DAT_006141b8) {
    do {
      if (0xbf < *pbVar1) {
        if (((*(byte *)((int)param_2 + 0xd) & 4) == 0) && (1 < (uint)(param_2[5] - param_2[1]))) {
          *(byte *)*param_2 = 0xc1;
          if (*(char *)*param_2 != '\n') {
            *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 0x10;
            param_2[1] = param_2[1] + 1;
            *param_2 = *param_2 + 1;
            goto LAB_0051462e;
          }
          uVar4 = 10;
        }
        else {
          uVar4 = 0xc1;
        }
        _fputc(uVar4,param_2);
      }
LAB_0051462e:
      if (((*(byte *)((int)param_2 + 0xd) & 4) == 0) && (1 < (uint)(param_2[5] - param_2[1]))) {
        *(byte *)*param_2 = *pbVar1;
        if (*(char *)*param_2 == '\n') {
          bVar3 = 10;
          goto LAB_0051463a;
        }
        *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 0x10;
        param_2[1] = param_2[1] + 1;
        *param_2 = *param_2 + 1;
      }
      else {
        bVar3 = *pbVar1;
LAB_0051463a:
        _fputc(bVar3,param_2);
      }
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + 1;
    } while (iVar2 < DAT_006141b8);
  }
  return;
}
