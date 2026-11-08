// Name: FUN_0049d500
// Address: 0049d500
// Address Range: [[0049d500, 0049d56f]]
// Convention: unknown
// Signature: ushort FUN_0049d500(int param_1)

#include "nocturne.h"

ushort FUN_0049d500(int param_1)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = *(float *)(param_1 + 0x3dc);
  if (0.0 >= fVar1) {
    return (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.0) << 0xe;
  }
  FUN_0046ce90(DAT_005f2afc,param_1 + 0x180);
  FUN_0046cf30(DAT_005f2afc,param_1 + 0x18c,0);
  FUN_00462540(param_1 + 4,0,0xffffffff);
  uVar2 = thunk_FUN_004e5ef0(DAT_005f2afc);
  return uVar2;
}
