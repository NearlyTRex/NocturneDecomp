// Name: FUN_0049a8b0
// Address: 0049a8b0
// Address Range: [[0049a8b0, 0049a97d]]
// Convention: unknown
// Signature: int FUN_0049a8b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0049a8b0(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  if (_DAT_01c3eb50 == 0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = FUN_004c4510(_DAT_01c3eb50,0x6a);
  uVar1 = DAT_0061b4ac;
  if (0 < *param_1) {
    DAT_0061b4ac = 0x7f;
    FUN_0049a980(param_1,param_2,param_3,param_4);
    do {
      iVar2 = FUN_0049add0(param_1);
      FUN_0049b830(param_1);
      FUN_005acff0();
    } while (iVar2 == -2);
    FUN_004032b0();
    FUN_00496dd0(0x01C3EB54);
    DAT_0061b4ac = uVar1;
    return iVar2;
  }
  return -1;
}
