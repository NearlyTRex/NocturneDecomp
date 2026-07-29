// Name: core_dcamera.cpp_CDemonCamera_allocLight_FUN_00441c20
// Address: 00441c20
// Address Range: [[00441c20, 00441c4c]]
// Convention: __cdecl
// Signature: char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_00441c20(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_00441c20(CDemonCamera *this_ptr)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_DAT_00b0e604 * 0x4b000 + 0xb0e608);
  if (0x18 < _DAT_00b0e604 + 1) {
    pcVar1 = (char *)0x0;
  }
  _DAT_00b0e604 = _DAT_00b0e604 + 1;
  return pcVar1;
}
