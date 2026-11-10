// Name: cockpit_pkbmpset.cpp_FUN_00517670
// Address: 00517670
// Address Range: [[00517670, 0051770d]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_00517670(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_pkbmpset_cpp_FUN_00517670(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char acStack_d0 [200];
  
  unkafter_pkbitmap_cpp_FUN_00517640(param_1);
  if (param_2 < 1) {
    return;
  }
  uVar1 = FUN_005b8df8(param_2 * 0x24 + 4,param_2,&g_CPackedBitmapTypeInfo);
  iVar2 = __vec_new(uVar1);
  param_1[1] = iVar2;
  if (iVar2 == 0) {
    _sprintf(acStack_d0,"Unable to allocate %u bytes for %u CPackedBitmaps in CPackedBitmapSet::alloc");
    _DAT_01d046a4 = 0x6c;
    _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_004e4500(acStack_d0);
  }
  *param_1 = param_2;
  return;
}
