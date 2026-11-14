// Name: core_set.cpp_CDemonSet_clearLights_FUN_00537520
// Address: 00537520
// Address Range: [[00537520, 005375b3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_clearLights_FUN_00537520(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_clearLights_FUN_00537520(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  C3DSLight *this_ptr_00;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_0203a414) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(&DAT_0203a418 + iVar2);
      if (iVar1 != 0) {
        (*(code *)**(uint **)(iVar1 + 0x3c))(iVar1,2);
      }
      iVar1 = _DAT_0203a414;
      iVar3 = iVar3 + 1;
      *(uint *)(&DAT_0203a418 + iVar2) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  _DAT_0203a414 = 0;
  if (0 < this_ptr->light_count) {
    this_ptr_00 = this_ptr->lights;
    do {
      core_setutil_cpp_C3DSLight_doNothing_FUN_00542b50(this_ptr_00);
      iVar3 = iVar3 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar3 < this_ptr->light_count);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0045c470();
  core_dcamera_cpp_CDemonCamera_free_FUN_00448f30(&g_CDemonCameraInstance);
  return;
}
