// Name: core_setutil.cpp_C3DSLight_process_FUN_0055d1a0
// Address: 0055d1a0
// Address Range: [[0055d1a0, 0055d35e]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_process_FUN_0055d1a0(int param_1,CDemonLight *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSLight_process_FUN_0055d1a0(int param_1,CDemonLight *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == (CDemonLight *)0x0) {
    _DAT_01d1d400 = "..\\core\\setutil.cpp";
    _DAT_01d1d404 = 0x351;
    core_main_c_FUN_005030e0("C3DSLight::process - NULL CDemonLight pointer!");
  }
  if (*(int *)(param_1 + 0x11ec) != 0) {
    if (0.0 < *(float *)(param_1 + 0x16f4 + *(int *)(param_1 + 0x1890) * 4)) {
      *(float *)(param_1 + 0x1894) =
           *(float *)&g_CGamePtr->field_0x294 + *(float *)(param_1 + 0x1894);
      iVar2 = *(int *)(param_1 + 0x1890) * 4 + param_1;
      if (*(float *)(iVar2 + 0x16f4) < *(float *)(param_1 + 0x1894)) {
        iVar3 = *(int *)(param_1 + 0x1890) + 1;
        *(float *)(param_1 + 0x1894) = *(float *)(param_1 + 0x1894) - *(float *)(iVar2 + 0x16f4);
        *(int *)(param_1 + 0x1890) = iVar3;
        if (*(int *)(param_1 + 0x11ec) <= iVar3) {
          *(uint *)(param_1 + 0x1890) = 0;
        }
      }
    }
    iVar2 = _DAT_01c43530;
    lVar1 = (longlong)_DAT_01c43530 * (longlong)*(int *)(param_1 + 0x17f8);
    *(uint *)(param_1 + 0x1800) =
         *(int *)(param_1 + 0x1800) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar2 * (longlong)*(int *)(param_1 + 0x17fc);
    iVar2 = *(int *)(param_1 + 0x1804) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    *(int *)(param_1 + 0x1804) = iVar2;
    if (param_3 != 0) {
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00463e30
                (param_2,*(CDemonFilter **)(param_1 + 0x1810 + *(int *)(param_1 + 0x1890) * 4),
                 *(int *)(param_1 + 0x1774 + *(int *)(param_1 + 0x1890) * 4),
                 *(int *)(param_1 + 0x1800),iVar2);
    }
  }
  if (*(float *)(param_1 + 0x11e0) < 1.0) {
    *(float *)(param_1 + 0x11e8) = *(float *)&g_CGamePtr->field_0x294 + *(float *)(param_1 + 0x11e8)
    ;
    if (*(float *)(param_1 + 0x11e4) < *(float *)(param_1 + 0x11e8)) {
      *(float *)(param_1 + 0x11e8) = *(float *)(param_1 + 0x11e8) - *(float *)(param_1 + 0x11e4);
    }
    if (*(float *)(param_1 + 0x11e8) <= *(float *)(param_1 + 0x11e0)) {
      *(uint *)&param_2->field_0x1cb4 = 1;
    }
    else {
      *(uint *)&param_2->field_0x1cb4 = 0;
    }
  }
  if (*(int *)&g_CDemonSetPtr->field_0x15aeb4 != 0) {
    return;
  }
  *(uint *)&param_2->field_0x1cb4 = 0;
  return;
}
