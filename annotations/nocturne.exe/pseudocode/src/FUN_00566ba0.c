// Name: FUN_00566ba0
// Address: 00566ba0
// Address Range: [[00566ba0, 00566c42]]
// Convention: unknown
// Signature: undefined4 FUN_00566ba0(int *param_1,uint *param_2)

#include "nocturne.h"

uint FUN_00566ba0(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  ushort in_DS;
  
  if (param_2 == (uint *)0x0) {
    return 1;
  }
  puVar1 = (uint *)*param_1;
  if (puVar1 == (uint *)0x0) {
    puVar3 = param_2 + 0xb;
  }
  else {
    uVar2 = DAT_005c1680[2];
    param_2 = DAT_005c1680;
    while ((uVar2 != 0 && ((puVar1 < param_2 || ((uint *)(*param_2 + (int)param_2) <= puVar1))))) {
      param_2 = (uint *)param_2[2];
      uVar2 = param_2[2];
    }
    puVar3 = (uint *)((*puVar1 & 0xfffffffe) + (int)puVar1);
    if (puVar3 <= puVar1) {
      return 3;
    }
  }
  while( true ) {
    if (*puVar3 != 0xffffffff) {
      *(uint *)((int)param_1 + 10) = 1;
      *(ushort *)(param_1 + 1) = in_DS;
      *param_1 = (int)puVar3;
      *(uint *)((int)param_1 + 6) = *puVar3 & 0xfffffffe;
      if ((*puVar3 & 1) != 0) {
        *(uint *)((int)param_1 + 10) = 0;
      }
      return 0;
    }
    param_2 = (uint *)param_2[2];
    if (param_2 == (uint *)0x0) break;
    puVar3 = param_2 + 0xb;
  }
  *(ushort *)(param_1 + 1) = 0;
  *(uint *)((int)param_1 + 10) = 0;
  *(uint *)((int)param_1 + 6) = 0;
  *param_1 = 0;
  return 4;
}
