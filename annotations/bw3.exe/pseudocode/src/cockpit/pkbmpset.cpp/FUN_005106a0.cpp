// Name: cockpit_pkbmpset.cpp_FUN_005106a0
// Address: 005106a0
// Address Range: [[005106a0, 0051073d]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_005106a0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_pkbmpset_cpp_FUN_005106a0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte auStack_d0 [200];
  
  unkafter_pkbitmap_cpp_FUN_00510670(param_1);
  if (param_2 < 1) {
    return;
  }
  uVar1 = FUN_005a40df(param_2 * 0x24 + 4,param_2,&g_CPackedBitmapTypeInfo);
  iVar2 = __vec_new(uVar1);
  param_1[1] = iVar2;
  if (iVar2 == 0) {
    FUN_005a28c0
              (auStack_d0,"Unable to allocate %u bytes for %u CPackedBitmaps in CPackedBitmapSet::alloc",param_2 * 0x24,param_2);
    _DAT_01d71de4 = 0x6e;
    _DAT_01d71de0 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_004e4330(auStack_d0);
  }
  *param_1 = param_2;
  return;
}
