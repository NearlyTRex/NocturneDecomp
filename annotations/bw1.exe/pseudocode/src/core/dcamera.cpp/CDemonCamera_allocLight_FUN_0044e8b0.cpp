// Name: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0044e8b0
// Address: 0044e8b0
// Address Range: [[0044e8b0, 0044e8dc]]
// Convention: __cdecl
// Signature: char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044e8b0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044e8b0(CDemonCamera *this_ptr)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_DAT_00b81ca4 * 0x4b000 + 0xb81ca8);
  if (0x18 < _DAT_00b81ca4 + 1) {
    pcVar1 = (char *)0x0;
  }
  _DAT_00b81ca4 = _DAT_00b81ca4 + 1;
  return pcVar1;
}
