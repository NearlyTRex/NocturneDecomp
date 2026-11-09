// Name: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0043d1f0
// Address: 0043d1f0
// Address Range: [[0043d1f0, 0043d21c]]
// Convention: __cdecl
// Signature: char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0043d1f0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0043d1f0(CDemonCamera *this_ptr)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_DAT_00b667a4 * 0x4b000 + 0xb667a8);
  if (0x18 < _DAT_00b667a4 + 1) {
    pcVar1 = (char *)0x0;
  }
  _DAT_00b667a4 = _DAT_00b667a4 + 1;
  return pcVar1;
}
