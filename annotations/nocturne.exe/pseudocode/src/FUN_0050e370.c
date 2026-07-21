// Name: FUN_0050e370
// Address: 0050e370
// Address Range: [[0050e370, 0050e3f8]]
// Convention: unknown
// Signature: void FUN_0050e370(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050e370(int param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 == (float *)0x0) {
    *(uint *)(param_1 + 0x161270) = 0;
    return;
  }
  local_10 = (int)ROUND(*param_2 * _DAT_005a18f0);
  local_c = (int)ROUND(param_2[1] * _DAT_005a18f0);
  local_8 = (int)ROUND(param_2[2] * _DAT_005a18f0);
  core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(param_1,&local_10,0,0,0);
  uVar1 = DAT_005c5034;
  *(uint *)(param_1 + 0x161270) = 1;
  uVar2 = DAT_005c503c;
  *(uint *)(param_1 + 0x161274) = uVar1;
  *(uint *)(param_1 + 0x16127c) = uVar2;
  *(uint *)(param_1 + 0x161278) = DAT_005c5038;
  return;
}
