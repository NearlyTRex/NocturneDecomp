// Name: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0044a9f0
// Address: 0044a9f0
// Address Range: [[0044a9f0, 0044aa1c]]
// Convention: __cdecl
// Signature: char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044a9f0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044a9f0(CDemonCamera *this_ptr)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_DAT_00b9e554 * 0x4b000 + 0xb9e558);
  if (0x18 < _DAT_00b9e554 + 1) {
    pcVar1 = (char *)0x0;
  }
  _DAT_00b9e554 = _DAT_00b9e554 + 1;
  return pcVar1;
}
