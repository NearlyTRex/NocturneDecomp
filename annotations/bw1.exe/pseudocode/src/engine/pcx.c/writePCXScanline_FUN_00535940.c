// Name: engine_pcx.c_writePCXScanline_FUN_00535940
// Address: 00535940
// Address Range: [[00535940, 00535a0f]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_writePCXScanline_FUN_00535940(int param_1,int *param_2)

#include "nocturne.h"

void __cdecl engine_pcx_c_writePCXScanline_FUN_00535940(int param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar2 = 0;
  pbVar1 = *(byte **)(&DAT_01c4354c + param_1 * 4);
  if (0 < DAT_0061b498) {
    do {
      if (0xbf < *pbVar1) {
        if (((*(byte *)((int)param_2 + 0xd) & 4) == 0) && (1 < (uint)(param_2[5] - param_2[1]))) {
          *(byte *)*param_2 = 0xc1;
          if (*(char *)*param_2 != '\n') {
            *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 0x10;
            param_2[1] = param_2[1] + 1;
            *param_2 = *param_2 + 1;
            goto LAB_0053597e;
          }
          uVar4 = 10;
        }
        else {
          uVar4 = 0xc1;
        }
        _fputc(uVar4,param_2);
      }
LAB_0053597e:
      if (((*(byte *)((int)param_2 + 0xd) & 4) == 0) && (1 < (uint)(param_2[5] - param_2[1]))) {
        *(byte *)*param_2 = *pbVar1;
        if (*(char *)*param_2 == '\n') {
          bVar3 = 10;
          goto LAB_0053598a;
        }
        *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 0x10;
        param_2[1] = param_2[1] + 1;
        *param_2 = *param_2 + 1;
      }
      else {
        bVar3 = *pbVar1;
LAB_0053598a:
        _fputc(bVar3,param_2);
      }
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + 1;
    } while (iVar2 < DAT_0061b498);
  }
  return;
}
