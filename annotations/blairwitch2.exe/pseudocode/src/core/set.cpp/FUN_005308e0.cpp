// Name: core_set.cpp_FUN_005308e0
// Address: 005308e0
// Address Range: [[005308e0, 00530973]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_005308e0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_005308e0(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  C3DSLight *this_ptr_00;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01fc8d00) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(&DAT_01fc8d04 + iVar2);
      if (iVar1 != 0) {
        (*(code *)**(uint **)(iVar1 + 0x3c))(iVar1,2);
      }
      iVar1 = _DAT_01fc8d00;
      iVar3 = iVar3 + 1;
      *(uint *)(&DAT_01fc8d04 + iVar2) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  _DAT_01fc8d00 = 0;
  if (0 < *(int *)&this_ptr->field_0x19a2c) {
    this_ptr_00 = (C3DSLight *)&this_ptr->field_0x19a30;
    do {
      core_setutil_cpp_FUN_0053b8c0(this_ptr_00);
      iVar3 = iVar3 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar3 < *(int *)&this_ptr->field_0x19a2c);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00449f60();
  core_dcamera_cpp_CDemonCamera_free_FUN_0043b730(&g_CDemonCameraInstance);
  return;
}
