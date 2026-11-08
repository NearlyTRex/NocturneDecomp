// Name: FUN_00529a10
// Address: 00529a10
// Address Range: [[00529a10, 00529afc]]
// Convention: unknown
// Signature: int FUN_00529a10(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_00529a10(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar2 = true;
  if (param_2 < *(int *)(param_1 + 0x2c)) {
    do {
      pcVar1 = *(char **)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
      if (*pcVar1 == '{') {
        param_2 = param_2 + 1;
        iVar4 = iVar4 + 1;
      }
      else if (*pcVar1 == '}') {
        if (iVar4 == 0) {
          if (!bVar2) {
            return param_2;
          }
          return param_2 + 1;
        }
        param_2 = param_2 + 1;
        iVar4 = iVar4 + -1;
      }
      else if (((iVar4 < 1) && (!bVar2)) ||
              (iVar3 = FUN_005b8da0(pcVar1,&DAT_005e4df0,2), iVar3 != 0)) {
        if (((iVar4 < 1) && (param_3 == 0)) ||
           (iVar3 = FUN_005b8da0(pcVar1,&DAT_005e4df3,4), iVar3 != 0)) {
          if (iVar4 == 0) {
            if (!bVar2) {
              return param_2;
            }
            return param_2 + 1;
          }
          param_2 = param_2 + 1;
        }
        else {
          param_2 = FUN_00529a10(param_1,param_2 + 1,1);
        }
      }
      else {
        param_2 = FUN_00529a10(param_1,param_2 + 1,1);
      }
    } while ((-1 < param_2) && (bVar2 = false, param_2 < *(int *)(param_1 + 0x2c)));
  }
  return -1;
}
