// Name: FUN_0053acf0
// Address: 0053acf0
// Address Range: [[0053acf0, 0053ad69]]
// Convention: unknown
// Signature: int FUN_0053acf0(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_0053acf0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(0x01D2130C + 0x214) == 0) {
    if (*(int *)(DAT_005f2afc + 0x18) == 0) {
      iVar2 = 0;
      if (0 < param_3) {
        do {
          iVar2 = iVar2 + 1;
          iVar1 = FUN_0046b240(DAT_005f2afc,param_2);
          param_2 = param_2 + 0x28;
        } while (iVar2 < param_3);
        return iVar1;
      }
    }
    else {
      iVar1 = 0;
      iVar2 = param_2;
      if (0 < param_3) {
        do {
          iVar1 = iVar1 + 1;
          param_2 = FUN_004f5370(*(uint *)(param_1 + 0x161668),iVar2);
          iVar2 = iVar2 + 0x28;
        } while (iVar1 < param_3);
      }
    }
  }
  return param_2;
}
