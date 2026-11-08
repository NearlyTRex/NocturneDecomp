// Name: FUN_0049b6f0
// Address: 0049b6f0
// Address Range: [[0049b6f0, 0049b7eb]]
// Convention: unknown
// Signature: void FUN_0049b6f0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b6f0(float *param_1)

{
  uint uVar1;
  int iVar2;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (0.0 < param_1[9]) {
    uVar1 = *DAT_0060b280;
    iStack_1c = (int)ROUND(*param_1 * _DAT_005f64e4);
    iStack_18 = (int)ROUND(param_1[1] * _DAT_005f64e4);
    iStack_14 = (int)ROUND(param_1[2] * _DAT_005f64e4);
    FUN_0055d9ec(uVar1,&iStack_1c);
    iVar2 = FUN_0046cad0(DAT_0060b280,uVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_0046b960(DAT_0060b280);
      if (iVar2 == 0) {
        (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
      }
      FUN_00530980(0x01E661B8,param_1,param_1 + 0x10,&DAT_0265370c,&DAT_0265370c,0);
      FUN_0046b2b0(DAT_0060b280,param_1);
      FUN_0046b350(DAT_0060b280,param_1 + 0x10,0);
      FUN_0044e6a0(param_1[0x17],0,0,0xffffffff);
      thunk_FUN_004e9810(DAT_0060b280);
      return;
    }
  }
  return;
}
