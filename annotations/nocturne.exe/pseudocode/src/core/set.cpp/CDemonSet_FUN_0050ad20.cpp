// Name: core_set.cpp_CDemonSet_FUN_0050ad20
// Address: 0050ad20
// Address Range: [[0050ad20, 0050adbc]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0050ad20(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_FUN_0050ad20(CDemonSet *this_ptr)

{
  int iVar1;
  CDemonLight *ptr;
  int iVar2;
  C3DSLight *this_ptr_00;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01fb99d0) {
    iVar2 = 0;
    do {
      if (*(CDemonLight **)(&DAT_01fb99d4 + iVar2) != (CDemonLight *)0x0) {
        ptr = core_dlight_cpp_CDemonLight_dtor_FUN_0044e1c0
                        (*(CDemonLight **)(&DAT_01fb99d4 + iVar2),0);
        operator_delete(ptr);
      }
      iVar1 = _DAT_01fb99d0;
      iVar3 = iVar3 + 1;
      *(uint *)(&DAT_01fb99d4 + iVar2) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  _DAT_01fb99d0 = 0;
  if (0 < this_ptr->light_count) {
    this_ptr_00 = this_ptr->lights;
    do {
      core_setutil_cpp_C3DSLight_FUN_00515410(this_ptr_00);
      iVar3 = iVar3 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar3 < this_ptr->light_count);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0044e3b0();
  core_dcamera_cpp_CDemonCamera_free_FUN_004401d0(&g_CDemonCamera_01fb8508);
  return;
}
