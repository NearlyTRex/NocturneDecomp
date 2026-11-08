// Name: FUN_0040c660
// Address: 0040c660
// Address Range: [[0040c660, 0040c775]]
// Convention: unknown
// Signature: uint FUN_0040c660(undefined4 param_1,int *param_2)

#include "nocturne.h"

uint FUN_0040c660(uint param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  while (((&DAT_0061ed94)[(byte)(*(char *)*param_2 + 1)] & 2) != 0) {
    *param_2 = (int)((char *)*param_2 + 1);
  }
  pcVar2 = (char *)*param_2;
  cVar1 = *pcVar2;
  if (cVar1 == '(') {
    *param_2 = (int)(pcVar2 + 1);
    uVar3 = FUN_0040c780(param_1,param_2);
    if (-1 < (int)uVar3) {
      while (((&DAT_0061ed94)[(byte)(*(char *)*param_2 + 1)] & 2) != 0) {
        *param_2 = (int)((char *)*param_2 + 1);
      }
      if (*(char *)*param_2 == ')') {
        *param_2 = (int)((char *)*param_2 + 1);
        return uVar3;
      }
    }
    return 0xffffffff;
  }
  if (cVar1 == '!') {
    *param_2 = (int)(pcVar2 + 1);
    uVar3 = FUN_0040c660(param_1,param_2);
    if (-1 < (int)uVar3) {
      uVar3 = (uint)(uVar3 == 0);
    }
    return uVar3;
  }
  if (((&DAT_0061ed94)[(byte)(cVar1 + 1)] & 0xe0) == 0) {
    return 0xffffffff;
  }
  uVar3 = 0;
  do {
    iVar4 = FUN_005b8470(*(byte *)*param_2);
    uVar3 = iVar4 * 0x20001 + (uVar3 >> 0x19) + uVar3 * 0x80;
    iVar4 = *param_2;
    *param_2 = iVar4 + 1;
  } while (((&DAT_0061ed94)[(byte)(*(char *)(iVar4 + 1) + 1)] & 0xe0) != 0);
  uVar3 = FUN_0040c870(param_1,uVar3);
  return uVar3;
}
