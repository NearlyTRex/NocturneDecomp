// Name: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0050df40
// Address: 0050df40
// Address Range: [[0050df40, 0050dfd5]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_0050df40(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_0050df40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(0x01C775EC + 0x1f0) == 0) {
    if (*(int *)(DAT_005ae704 + 0x18) == 0) {
      iVar1 = 0;
      if (0 < param_3) {
        do {
          iVar1 = iVar1 + 1;
          iVar2 = engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                            (DAT_005ae704,param_2);
          param_2 = param_2 + 0x28;
        } while (iVar1 < param_3);
        if (_DAT_01c02594 == 0) {
          return iVar2;
        }
        goto LAB_0050dfcc;
      }
    }
    else {
      iVar2 = 0;
      iVar1 = param_2;
      if (0 < param_3) {
        do {
          iVar2 = iVar2 + 1;
          param_2 = FUN_004d76e0(*(uint *)(param_1 + 0x161268),iVar1);
          iVar1 = iVar1 + 0x28;
        } while (iVar2 < param_3);
      }
    }
    if (_DAT_01c02594 != 0) {
LAB_0050dfcc:
      iVar1 = wincore_windll_cpp_sync_FUN_00532b30();
      return iVar1;
    }
  }
  return param_2;
}
