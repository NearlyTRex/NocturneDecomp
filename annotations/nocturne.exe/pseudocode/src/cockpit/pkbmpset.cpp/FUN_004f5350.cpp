// Name: cockpit_pkbmpset.cpp_FUN_004f5350
// Address: 004f5350
// Address Range: [[004f5350, 004f53ed]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_004f5350(int *param_1,int param_2)

#include "nocturne.h"

void cockpit_pkbmpset_cpp_FUN_004f5350(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte local_d0 [200];
  
  cockpit_pkbitmap_cpp_FUN_004f5320(param_1);
  if (param_2 < 1) {
    return;
  }
  uVar1 = shape_memdbg_cpp_malloc_FUN_00564c18
                    (param_2 * 0x24 + 4,param_2,&g_CPackedBitmapTypeInfo_005a1340);
  iVar2 = __vec_new(uVar1);
  param_1[1] = iVar2;
  if (iVar2 == 0) {
    _sprintf(local_d0,"Unable to allocate %u bytes for %u CPackedBitmaps in CPackedBitmapSet::alloc",param_2 * 0x24,param_2);
    INT_01cc4804 = 0x6b;
    PTR_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_004c8440(local_d0);
  }
  *param_1 = param_2;
  return;
}
