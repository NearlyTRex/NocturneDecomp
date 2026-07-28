// Name: engine_special.cpp_fillDepthRegion_FUN_0052efc2
// Address: 0052efc2
// Address Range: [[0052efc2, 0052f030]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_fillDepthRegion_FUN_0052efc2(int param_1,int param_2,uint param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_fillDepthRegion_FUN_0052efc2(int param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  ulonglong uVar2;
  uint in_EAX;
  uint uVar3;
  ulonglong *puVar4;
  uint unaff_retaddr;
  
  uVar2 = DAT_005bf48c;
  if (_DAT_01c02594 != 0) {
    engine_special_cpp_clearZBox_FUN_00532b70(param_1,param_2,param_3,param_4);
    return unaff_retaddr;
  }
  do {
    puVar4 = (ulonglong *)(*(int *)(&DAT_01bd4260 + param_3 * 4) + param_1 * 4 & 0xfffffff8);
    uVar3 = (param_2 - param_1) + 1U >> 1;
    do {
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      bVar1 = 0 < (int)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
    param_3 = param_3 + 1;
  } while (param_3 <= param_4);
  _DAT_005bf494 = uVar2;
  return in_EAX;
}
