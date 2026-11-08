// Name: FUN_004ab2b0
// Address: 004ab2b0
// Address Range: [[004ab2b0, 004ab35a]]
// Convention: unknown
// Signature: int FUN_004ab2b0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

#include "nocturne.h"

int FUN_004ab2b0(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int local_c;
  
  FUN_005b77c0(param_3,0,param_4 * param_5);
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (0 < param_4) {
      do {
        while( true ) {
          pcVar3 = (char *)(param_5 * iVar2 + param_3);
          iVar1 = FUN_004ab090(param_1,param_2,pcVar3,param_5,param_6,0x2f,&local_c);
          param_2 = param_2 + local_c;
          if (iVar1 == 3) break;
          if (iVar1 == 0) {
            if (*pcVar3 == '\0') {
              return iVar2;
            }
            return iVar2 + 1;
          }
          iVar2 = iVar2 + 1;
          if (param_4 <= iVar2) {
            return iVar2;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
    }
  }
  return iVar2;
}
