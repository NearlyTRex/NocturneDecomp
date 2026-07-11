// Name: FUN_005723ae
// Address: 005723ae
// Address Range: [[005723ae, 00572444]]
// Convention: unknown
// Signature: undefined4 FUN_005723ae(int param_1)

#include "nocturne.h"

uint FUN_005723ae(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x18)) {
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14)) {
      if ((*(byte *)(param_1 + 0x30) & 0x80) == 0) {
        iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
      }
      else {
        pcVar1 = *(char **)(param_1 + 0x10);
        iVar2 = 0;
        if (pcVar1 != (char *)0x0) {
          while (pcVar1 = pcVar1 + -1, *(char **)(param_1 + 0x14) <= pcVar1) {
            iVar2 = iVar2 - ((*pcVar1 == '\n') + 1);
          }
        }
      }
      iVar2 = FUN_005689c0(*(uint *)(param_1 + 0x2c),iVar2,1);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      *(uint *)(param_1 + 0xc) = 0;
      *(uint *)(param_1 + 0x14) = 0;
      *(uint *)(param_1 + 0x10) = 0;
      return 0;
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x28) + 0xc))(param_1,0xffffffff);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
  }
  return 0;
}
