// Name: core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004b0730
// Address: 004b0730
// Address Range: [[004b0730, 004b081f]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004b0730(undefined4 param_1,float *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004b0730(uint param_1,float *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01c9e038) {
    iVar1 = 0x1c9e03c;
    do {
      if (((ABS(param_2[1] - *(float *)(iVar1 + 8)) <= (float)_DAT_005851c8) &&
          (ABS(*param_2 - *(float *)(iVar1 + 4)) <= (float)_DAT_005851d0)) &&
         (ABS(param_2[2] - *(float *)(iVar1 + 0xc)) <= (float)_DAT_005851d0)) {
        *param_3 = *(uint *)(iVar1 + 0x10);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < _DAT_01c9e038);
  }
  iVar2 = 0;
  if (0 < _DAT_01c7ccf0) {
    iVar1 = 0x1c7ccf4;
    do {
      if (((*(int *)(iVar1 + 0x10) == 0) &&
          (ABS(param_2[1] - *(float *)(iVar1 + 8)) <= (float)_DAT_005851c8)) &&
         ((ABS(*param_2 - *(float *)(iVar1 + 4)) <= (float)_DAT_005851c8 &&
          (ABS(param_2[2] - *(float *)(iVar1 + 0xc)) <= (float)_DAT_005851c8)))) {
        *param_3 = *(uint *)(iVar1 + 0x14);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x44;
    } while (iVar2 < _DAT_01c7ccf0);
  }
  return 0;
}
