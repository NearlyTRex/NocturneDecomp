// Name: FUN_00494e80
// Address: 00494e80
// Address Range: [[00494e80, 00494ff6]]
// Convention: unknown
// Signature: int FUN_00494e80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00494e80(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float fStack_38;
  byte local_34 [24];
  ulonglong uStack_1c;
  
  if (*(int *)(0x01CC9450 + 4) != 0) {
    iVar3 = FUN_00495240();
    *(uint *)(param_1 + 0x154) = *(uint *)(iVar3 + 0x154);
    FUN_004950a0();
  }
  FUN_00409f20();
  uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_34,0);
  iVar3 = FUN_0041ceb0(uVar4);
  if (iVar3 != 0) {
    FUN_004544d0(param_1 + 0x17c,*(uint *)(param_1 + 0x178),0xffffffff);
    if (*(char *)(param_1 + 0x37c) != '\0') {
      iVar1 = *(int *)(param_1 + 0x154);
      if (iVar1 < 0x4400c000) {
        fStack_38 = 201.0;
      }
      else if (iVar1 < 0x44e10000) {
        fStack_38 = 0.0;
        uStack_1c = __BITCAST_DOUBLE(CONCAT44(uStack_1c._4_4_,(uint)uStack_1c));
      }
      else if (iVar1 < 0x44ed8000) {
        fStack_38 = *(float *)(param_1 + 0x154) + _DAT_00581d54;
        uStack_1c = __BITCAST_DOUBLE(CONCAT44(uStack_1c._4_4_,(uint)uStack_1c));
      }
      else if (iVar1 < 0x44fa0000) {
        fStack_38 = 100.0;
        uStack_1c = __BITCAST_DOUBLE(CONCAT44(uStack_1c._4_4_,(uint)uStack_1c));
      }
      else {
        fVar2 = (*(float *)(param_1 + 0x154) + _DAT_00581d2c) * (float)_DAT_00581d30;
        uStack_1c = (double)FUN_005648c0((double)(fVar2 * _DAT_00581d38));
        fVar5 = (float10)fVar2 - (float10)uStack_1c * (float10)_DAT_00581d40;
        fStack_38 = (float)fVar5;
        if ((float10)_DAT_00581d48 < fVar5) {
          fStack_38 = _DAT_00581d4c - fStack_38;
        }
        fStack_38 = fStack_38 + _DAT_00581d50;
      }
      FUN_004544d0(param_1 + 0x304,fStack_38,0xffffffff);
      FUN_00409f60();
      return iVar3;
    }
  }
  FUN_00409f60();
  return iVar3;
}
