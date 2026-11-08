// Name: FUN_005340b0
// Address: 005340b0
// Address Range: [[005340b0, 00534129]]
// Convention: unknown
// Signature: int FUN_005340b0(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_005340b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(0x01CB6900 + 0x20c) == 0) {
    if (*(int *)(DAT_0060b280 + 0x18) == 0) {
      iVar2 = 0;
      if (0 < param_3) {
        do {
          iVar2 = iVar2 + 1;
          iVar1 = FUN_00469670(DAT_0060b280,param_2);
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
          param_2 = FUN_004fac50(*(uint *)(param_1 + 0x161664),iVar2);
          iVar2 = iVar2 + 0x28;
        } while (iVar1 < param_3);
      }
    }
  }
  return param_2;
}
