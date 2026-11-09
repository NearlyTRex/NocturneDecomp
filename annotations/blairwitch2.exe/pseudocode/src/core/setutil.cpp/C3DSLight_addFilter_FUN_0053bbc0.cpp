// Name: core_setutil.cpp_C3DSLight_addFilter_FUN_0053bbc0
// Address: 0053bbc0
// Address Range: [[0053bbc0, 0053bca3]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_0053bbc0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_0053bbc0(int param_1,char *param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (0x1f < *(int *)(param_1 + 0x11ec)) {
    _DAT_01d046a0 = "..\\core\\setutil.cpp";
    _DAT_01d046a4 = 0x3b6;
    core_main_c_FUN_004e4500("C3DSLight::addFilter - too many filters (max is %d)",0x20);
  }
  pcVar3 = (char *)(param_1 + 0x11f4 + *(int *)(param_1 + 0x11ec) * 0x28);
  do {
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x16f4 + *(int *)(param_1 + 0x11ec) * 4) = param_3;
  *(uint *)(param_1 + 0x1774 + *(int *)(param_1 + 0x11ec) * 4) = param_4;
  uVar2 = core_dfilter_cpp_FUN_00447660
                    (g_CFilterCachePtr,param_1 + 0x11f4 + *(int *)(param_1 + 0x11ec) * 0x28,
                     *(uint *)(param_1 + 0x11f0));
  *(uint *)(param_1 + 0x1810 + *(int *)(param_1 + 0x11ec) * 4) = uVar2;
  *(int *)(param_1 + 0x11ec) = *(int *)(param_1 + 0x11ec) + 1;
  return;
}
