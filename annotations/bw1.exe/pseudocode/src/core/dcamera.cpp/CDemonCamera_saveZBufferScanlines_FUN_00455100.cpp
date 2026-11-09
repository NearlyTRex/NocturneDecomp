// Name: core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00455100
// Address: 00455100
// Address Range: [[00455100, 0045514f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00455100(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00455100(CDemonCamera *this_ptr)

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
