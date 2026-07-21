// Name: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043ff50
// Address: 0043ff50
// Address Range: [[0043ff50, 0044000f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043ff50(undefined4 param_1)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043ff50(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_18;
  uint local_14;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00447a70(param_1,0x10000);
  if (DAT_005b7620 < 0x1e0) {
    uVar1 = 0xf0;
  }
  else {
    uVar1 = 0x1e0;
  }
  core_dcamera_cpp_CDemonCamera_init_FUN_00440010(param_1,uVar1);
  FUN_004401b0(param_1,0,0);
  FUN_00446800(param_1);
  iVar7 = 0;
  local_18 = 0x40;
  local_14 = 0;
  do {
    iVar3 = 0;
    iVar5 = iVar7 << 6;
    do {
      iVar2 = (iVar3 + (iVar3 >> 0x1f) * -0x10) - (uint)((iVar3 >> 0x1f) << 3 < 0);
      iVar4 = iVar2 >> 0x1f;
      iVar6 = iVar5 + 1;
      iVar3 = iVar3 + local_14;
      *(char *)(iVar5 + 0x12cdb58) =
           (char)((int)(((iVar2 >> 4) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
      iVar5 = iVar6;
    } while (iVar6 != local_18);
    iVar7 = iVar7 + 1;
    local_14 = local_14 + 1;
    local_18 = local_18 + 0x40;
  } while (iVar7 < 0x40);
  return;
}
