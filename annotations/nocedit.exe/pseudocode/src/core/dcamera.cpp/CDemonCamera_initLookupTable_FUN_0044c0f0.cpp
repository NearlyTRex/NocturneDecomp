// Name: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0
// Address: 0044c0f0
// Address Range: [[0044c0f0, 0044c187]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(CDemonCamera * this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(this_ptr,0x10000);
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(this_ptr,g_WindowHeight);
  core_dcamera_cpp_CDemonCamera_generateFogGrid_FUN_004529a0(this_ptr);
  iVar6 = 0;
  iVar7 = 0x40;
  iVar8 = 0;
  do {
    iVar2 = 0;
    iVar4 = iVar6 << 6;
    do {
      iVar1 = (iVar2 + (iVar2 >> 0x1f) * -0x10) - (uint)((iVar2 >> 0x1f) << 3 < 0);
      iVar3 = iVar1 >> 0x1f;
      iVar5 = iVar4 + 1;
      iVar2 = iVar2 + iVar8;
      g_CameraLookupTable[iVar4] =
           (char)((int)(((iVar1 >> 4) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2);
      iVar4 = iVar5;
    } while (iVar5 != iVar7);
    iVar6 = iVar6 + 1;
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 0x40;
  } while (iVar6 < 0x40);
  return;
}
