// Name: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044cb60
// Address: 0044cb60
// Address Range: [[0044cb60, 0044cc28]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044cb60(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044cb60(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_18;
  uint local_14;
  
  if (DAT_007ddbb0 == 0) {
    core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00454830(this_ptr,0x10000);
    DAT_007ddbb0 = 1;
  }
  iVar6 = DAT_0061b49c;
  if (0x1e0 < DAT_0061b49c) {
    iVar6 = 0x1e0;
  }
  core_dcamera_cpp_CDemonCamera_init_FUN_0044cc30(this_ptr,iVar6);
  core_dcamera_cpp_CDemonCamera_generateFogGrid_FUN_00453600(this_ptr);
  iVar6 = 0;
  local_18 = 0x40;
  local_14 = 0;
  do {
    iVar2 = 0;
    iVar4 = iVar6 << 6;
    do {
      iVar1 = (iVar2 + (iVar2 >> 0x1f) * -0x10) - (uint)((iVar2 >> 0x1f) << 3 < 0);
      iVar3 = iVar1 >> 0x1f;
      iVar5 = iVar4 + 1;
      iVar2 = iVar2 + local_14;
      *(char *)(iVar4 + 0x1341200) =
           (char)((int)(((iVar1 >> 4) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2);
      iVar4 = iVar5;
    } while (iVar5 != local_18);
    iVar6 = iVar6 + 1;
    local_14 = local_14 + 1;
    local_18 = local_18 + 0x40;
  } while (iVar6 < 0x40);
  return;
}
