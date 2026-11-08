// Name: FUN_00521c50
// Address: 00521c50
// Address Range: [[00521c50, 00521d44]]
// Convention: unknown
// Signature: void FUN_00521c50(int *param_1)

#include "nocturne.h"

void FUN_00521c50(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    if (*(int *)(0x01CCF390 + 0x230) == 0x29a) {
      FUN_004668a0(param_1 + 2,"taylor_head.kfm");
      *(uint *)(0x01CCF390 + 0x230) = 0;
    }
    else {
      FUN_004668a0(param_1 + 2,"titletwana.kfm");
      FUN_004668a0(param_1 + 0xe8,"titletwanb.kfm");
      FUN_004668a0(param_1 + 0x1ce,"titletwanc.kfm");
    }
    FUN_0040d220(0x1d33ce4,"menucld2",0x100,0x100);
    iVar3 = 0x1d33cf8;
    FUN_0040d220(0x1d33f50,PTR_s_titlescreen_bw_0061f830,0x280,0x1e0);
    iVar2 = 0;
    do {
      puVar1 = (uint *)((int)&PTR_s_blair_00000_0061f834 + iVar2);
      iVar2 = iVar2 + 4;
      FUN_0040d220(iVar3,*puVar1,0x280,0xa5);
      iVar3 = iVar3 + 0x14;
    } while (iVar2 != 0x78);
    *param_1 = 1;
  }
  return;
}
