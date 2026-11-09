// Name: unkafter_2d.cpp_FUN_005cf2f0
// Address: 005cf2f0
// Address Range: [[005cf2f0, 005cf334]]
// Convention: unknown
// Signature: byte unkafter_2d_cpp_FUN_005cf2f0(uint param_1)

#include "nocturne.h"

byte unkafter_2d_cpp_FUN_005cf2f0(uint param_1)

{
  int iVar1;
  
  iVar1 = unkafter_2d_cpp_FUN_005cf340(param_1);
  if (iVar1 == 0) {
    return (&DAT_00626114)[(byte)((char)param_1 + 1)] & 0x80;
  }
  if ((0x8280 < param_1) && (param_1 < 0x829b)) {
    return 1;
  }
  return 0;
}
