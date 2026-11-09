// Name: core_set.cpp_FUN_00551b90
// Address: 00551b90
// Address Range: [[00551b90, 00551c23]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00551b90(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_00551b90(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  C3DSLight *this_ptr_00;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01fe4cb4) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(&DAT_01fe4cb8 + iVar2);
      if (iVar1 != 0) {
        (*(code *)**(uint **)(iVar1 + 0x3c))(iVar1,2);
      }
      iVar1 = _DAT_01fe4cb4;
      iVar3 = iVar3 + 1;
      *(uint *)(&DAT_01fe4cb8 + iVar2) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  _DAT_01fe4cb4 = 0;
  if (0 < *(int *)&this_ptr->field_0x19a2c) {
    this_ptr_00 = (C3DSLight *)&this_ptr->field_0x19a30;
    do {
      core_setutil_cpp_FUN_0055d190(this_ptr_00);
      iVar3 = iVar3 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar3 < *(int *)&this_ptr->field_0x19a2c);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00462760();
  core_dcamera_cpp_CDemonCamera_free_FUN_0044cdf0(&g_CDemonCameraInstance);
  return;
}
