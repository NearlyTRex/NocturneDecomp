// Name: FUN_00551c30
// Address: 00551c30
// Address Range: [[00551c30, 00551d4b]]
// Convention: unknown
// Signature: void FUN_00551c30(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551c30(uint param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  uint *puVar2;
  
  if (param_2 == (uint *)0x0) {
    _DAT_0202a840 = 1;
  }
  else {
    if (param_2 != (uint *)&DAT_0202a844) {
      _DAT_0202a844 = *param_2;
      _DAT_0202a84c = param_2[2];
      _DAT_0202a848 = param_2[1];
    }
    if (param_3 != (uint *)&DAT_0202a850) {
      _DAT_0202a850 = *param_3;
      _DAT_0202a858 = param_3[2];
      _DAT_0202a854 = param_3[1];
    }
    if (param_4 != (uint *)&DAT_0202a85c) {
      _DAT_0202a85c = *param_4;
      _DAT_0202a864 = param_4[2];
      _DAT_0202a860 = param_4[1];
    }
    if (param_5 != (uint *)&DAT_0202a868) {
      _DAT_0202a868 = *param_5;
      _DAT_0202a870 = param_5[2];
      _DAT_0202a86c = param_5[1];
    }
    if (param_6 == (uint *)0x0) {
      _DAT_0202a878 = param_6;
      _DAT_0202a87c = param_6;
      _DAT_0202a880 = param_6;
      _DAT_0202a888 = param_6;
      _DAT_0202a88c = param_6;
      _DAT_0202a890 = param_6;
      _DAT_0202a884 = 0x3f800000;
      _DAT_0202a894 = 0x3f800000;
      _DAT_0202a874 = 0x3f800000;
      _DAT_0202a840 = 2;
      return;
    }
    puVar2 = (uint *)&DAT_0202a874;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_6;
      param_6 = param_6 + 1;
      puVar2 = puVar2 + 1;
    }
    _DAT_0202a840 = 2;
  }
  return;
}
