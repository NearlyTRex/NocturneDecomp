// Name: core_prye.cpp_FUN_00527110
// Address: 00527110
// Address Range: [[00527110, 00527197]]
// Convention: unknown
// Signature: undefined4 core_prye_cpp_FUN_00527110(int param_1)

#include "nocturne.h"

uint core_prye_cpp_FUN_00527110(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x158;
  fVar1 = (float)core_motion_cpp_FUN_004fc350(iVar3,0x2a);
  if (fVar1 <= 0.0) {
    fVar1 = (float)core_motion_cpp_FUN_004fc350(iVar3,0x2b);
    if (fVar1 <= 0.0) {
      iVar2 = core_motion_cpp_FUN_004fc0c0(iVar3);
      if (iVar2 != 0x2a) {
        iVar3 = core_motion_cpp_FUN_004fc0c0(iVar3);
        if (((iVar3 != 0x2b) && (*(int *)(param_1 + 0x20b64) != 5)) &&
           (*(int *)(param_1 + 0x20b94) == 0)) {
          return 0;
        }
      }
    }
  }
  return 1;
}
