// Name: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043ff50
// Address: 0043ff50
// Address Range: [[0043ff50, 0044000f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043ff50(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043ff50(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_18;
  uint local_14;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00447a70(this_ptr,0x10000);
  if (DAT_005b7620 < 0x1e0) {
    iVar1 = 0xf0;
  }
  else {
    iVar1 = 0x1e0;
  }
  core_dcamera_cpp_CDemonCamera_init_FUN_00440010(this_ptr,iVar1);
  core_dcamera_cpp_FUN_004401b0(this_ptr,0,0);
  core_dcamera_cpp_FUN_00446800(this_ptr);
  iVar1 = 0;
  local_18 = 0x40;
  local_14 = 0;
  do {
    iVar3 = 0;
    iVar5 = iVar1 << 6;
    do {
      iVar2 = (iVar3 + (iVar3 >> 0x1f) * -0x10) - (uint)((iVar3 >> 0x1f) << 3 < 0);
      iVar4 = iVar2 >> 0x1f;
      iVar6 = iVar5 + 1;
      iVar3 = iVar3 + local_14;
      *(char *)(iVar5 + 0x12cdb58) =
           (char)((int)(((iVar2 >> 4) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
      iVar5 = iVar6;
    } while (iVar6 != local_18);
    iVar1 = iVar1 + 1;
    local_14 = local_14 + 1;
    local_18 = local_18 + 0x40;
  } while (iVar1 < 0x40);
  return;
}
