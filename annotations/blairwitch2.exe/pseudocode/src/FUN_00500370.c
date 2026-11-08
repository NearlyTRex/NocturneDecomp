// Name: FUN_00500370
// Address: 00500370
// Address Range: [[00500370, 005004e6]]
// Convention: unknown
// Signature: void FUN_00500370(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00500370(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_80 [100];
  int local_1c;
  int local_18;
  uint local_14;
  
  if (*(float *)(param_1 + 0x10b10) <= 0.0) {
    iVar5 = 0;
    local_1c = param_2 + 0x60;
    iVar4 = param_2 * 4;
    do {
      iVar1 = 0x01CB6900;
      iVar3 = *(int *)(iVar4 + 0x1d1c6fc) + 1;
      *(int *)(iVar4 + 0x1d1c6fc) = iVar3;
      if (((*(int *)(iVar1 + 0x1c) != 0) || (param_2 != 1)) || (iVar3 != 6)) {
        FUN_005b7790(local_80,"mobster-cheese-%c-%c-%d.wav",*(byte *)(param_1 + 0x10b0c)
                     ,local_1c,*(uint *)(iVar4 + 0x1d1c6fc));
        local_14 = FUN_0055af90(0x0264B290,local_80);
        *(uint *)(param_1 + 0x10b10) = local_14;
        if (0.0 < *(float *)(param_1 + 0x10b10)) break;
        *(uint *)(iVar4 + 0x1d1c6fc) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    if (0.0 < *(float *)(param_1 + 0x10b10)) {
      *(float *)(param_1 + 0x10b10) = *(float *)(param_1 + 0x10b10) + _DAT_005def35;
      iVar4 = FUN_00550b70(*(uint *)(param_1 + 0x10b98));
      if (iVar4 == 0) {
        iVar5 = 0;
        iVar4 = 0;
        local_18 = 0;
        while( true ) {
          if (*(int *)(0x01E661B8 + 0x150fec) <= iVar5) {
            uVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,local_80);
            *(uint *)(param_1 + 0x10b90) = uVar2;
            return;
          }
          iVar1 = FUN_0040c8f0(*(uint *)(0x01E661B8 + local_18 + 0x150ff0),_DAT_01d1c778);
          if (((iVar1 != 0) && (iVar1 = FUN_00550b70(*(uint *)(iVar1 + 0x10b90)), iVar1 != 0))
             && (iVar4 = iVar4 + 1, 3 < iVar4)) break;
          local_18 = local_18 + 4;
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
  return;
}
