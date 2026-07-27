// Name: core_dcamera.cpp_FUN_00441c20
// Address: 00441c20
// Address Range: [[00441c20, 00441c4c]]
// Convention: unknown
// Signature: int core_dcamera_cpp_FUN_00441c20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int core_dcamera_cpp_FUN_00441c20(void)

{
  int iVar1;
  
  iVar1 = _DAT_00b0e604 * 0x4b000 + 0xb0e608;
  if (0x18 < _DAT_00b0e604 + 1) {
    iVar1 = 0;
  }
  _DAT_00b0e604 = _DAT_00b0e604 + 1;
  return iVar1;
}
