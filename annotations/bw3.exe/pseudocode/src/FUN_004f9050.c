// Name: FUN_004f9050
// Address: 004f9050
// Address Range: [[004f9050, 004f91c9]]
// Convention: unknown
// Signature: void FUN_004f9050(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f9050(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((*param_2 == *(int *)(param_1 + 0xcdd8)) || (*param_2 == *(int *)(param_1 + 0xcdec))) {
    local_14 = param_2[0xb];
    if (*(int *)(0x01D2130C + 0x204) != 0) {
      local_14 = 0x3f800000;
    }
    if (*(int *)(0x01D2130C + 0x14) == 0) {
      local_14 = 0;
    }
    iVar2 = FUN_0040cf40(local_14);
    if (iVar2 != 0) {
      piVar1 = param_2 + 3;
      uVar3 = FUN_00414550(param_1 + 0x20,param_1 + 0x30,piVar1,param_1,0,0,0);
      FUN_00430590(param_1,uVar3,*param_2,1);
      if (*param_2 == *(int *)(param_1 + 0xcdec)) {
        FUN_00430520(param_1,*(uint *)(param_1 + 0xcdd8),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xcddc),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xcde0),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xcde4),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xcde8),piVar1,1);
      }
      FUN_00434810(param_1,"limb?.wav");
      FUN_004157c0(uVar3);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xcdd8) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005c9224);
    }
  }
  if (*(int *)(param_1 + 0xcdd8) == *param_2) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005c9234);
    return;
  }
  param_2[1] = (int)((float)param_2[1] * (float)_DAT_005c922c);
  return;
}
