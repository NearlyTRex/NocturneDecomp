// Name: engine_mini3d.cpp_FUN_00515ffc
// Address: 00515ffc
// Address Range: [[00515ffc, 00516035]]
// Convention: unknown
// Signature: int * engine_mini3d_cpp_FUN_00515ffc(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * engine_mini3d_cpp_FUN_00515ffc(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01d2c0c8;
  iVar2 = 0;
  if (0 < _DAT_01d2c0c4) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_01d2c0c4);
  }
  return (int *)0x0;
}
