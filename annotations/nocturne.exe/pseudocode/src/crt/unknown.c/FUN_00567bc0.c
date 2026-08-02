// Name: crt_unknown.c_FUN_00567bc0
// Address: 00567bc0
// Address Range: [[00567bc0, 00567c29]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00567bc0(int param_1,int *param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00567bc0(int param_1,int *param_2,uint param_3)

{
  byte bVar1;
  undefined6 *puVar2;
  uint *puVar3;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        puVar3 = (uint *)*param_2;
        *param_2 = (int)(puVar3 + 1);
        puVar3 = (uint *)*puVar3;
      }
      else {
        puVar3 = (uint *)*param_2;
        *param_2 = (int)(puVar3 + 1);
        puVar3 = (uint *)*puVar3;
      }
    }
    else {
      puVar2 = (undefined6 *)*param_2;
      *param_2 = (int)(puVar2 + 1);
      puVar3 = (uint *)*puVar2;
    }
    if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
      *(short *)puVar3 = (short)param_3;
      return;
    }
    *puVar3 = param_3;
  }
  return;
}
