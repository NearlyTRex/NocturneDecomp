// Name: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0
// Address: 0044c0f0
// MANUAL RECONSTRUCTION
// Address Range: [[0044c0f0, 0044c187]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(CDemonCamera *this_ptr)

{
  int iVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18;
  int local_14;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(this_ptr,0x10000);
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(this_ptr,g_WindowHeight);
  core_dcamera_cpp_CDemonCamera_generateFogGrid_FUN_004529a0(this_ptr);
  iVar6 = 0;
  local_18 = 0x40;
  local_14 = 0;
  do {
    iVar4 = iVar6 << 6;
    iVar2 = 0;
    do {
      iVar5 = iVar4 + 1;
      g_CameraLookupTable[iVar4] = (char)(iVar2 / 0x10 / 4);
      iVar2 = iVar2 + local_14;
      iVar4 = iVar5;
    } while (iVar5 != local_18);
    iVar6 = iVar6 + 1;
    local_14 = local_14 + 1;
    local_18 = local_18 + 0x40;
  } while (iVar6 < 0x40);
  return;
}
