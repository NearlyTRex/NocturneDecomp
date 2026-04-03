// Name: core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0
// Address: 0056d2d0
// Address Range: [[0056d2d0, 0056d373]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(CDemonSet *this_ptr)

{
  int iVar2;
  int iVar3;
  int iVar4;
  C3DSLight *this_ptr_00;
  CDemonLight *iVar1;
  
  iVar4 = 0;
  if (0 < g_MasterLightCount) {
    iVar3 = 0;
    do {
      iVar1 = *(CDemonLight **)((int)g_MasterLightList + iVar3);
      g_CurrentDebugLine = 0xa0a;
      g_CurrentDebugFilename = "..\\core\\set.cpp";
      if (iVar1 != (CDemonLight *)0x0) {
        (*((iVar1->base).base.vtable)->dtor)((CCameraView *)iVar1,2);
      }
      iVar2 = g_MasterLightCount;
      iVar4 = iVar4 + 1;
      *(uint *)((int)g_MasterLightList + iVar3) = 0;
      iVar3 = iVar3 + 4;
    } while (iVar4 < iVar2);
  }
  iVar4 = 0;
  g_MasterLightCount = 0;
  if (0 < this_ptr->light_count) {
    this_ptr_00 = this_ptr->lights;
    do {
      core_setutil_cpp_C3DSLight_doNothing_FUN_00586ca0(this_ptr_00);
      iVar4 = iVar4 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar4 < this_ptr->light_count);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_004729c0();
  core_dcamera_cpp_CDemonCamera_free_FUN_0044c360(&g_CDemonCameraInstance);
  return;
}
