// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004512a0
// Address: 004512a0
// Address Range: [[004512a0, 004512ef]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004512a0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004512a0(CDemonCamera *this_ptr)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x148) {
    do {
      iVar1 = iVar1 + 1;
      _memcpy(*(int *)&this_ptr->field_0x144 << 2);
    } while (iVar1 < *(int *)&this_ptr->field_0x148);
  }
  return;
}
