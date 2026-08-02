// Name: core_set.cpp_FUN_0050ad20
// Address: 0050ad20
// Address Range: [[0050ad20, 0050adbc]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0050ad20(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_0050ad20(CDemonSet *this_ptr)

{
  int iVar1;
  CDemonLight *pCVar2;
  int iVar3;
  C3DSLight *this_ptr_00;
  int iVar4;
  
  iVar4 = 0;
  if (0 < _DAT_01fb99d0) {
    iVar3 = 0;
    do {
      if (*(CDemonLight **)(&DAT_01fb99d4 + iVar3) != (CDemonLight *)0x0) {
        pCVar2 = core_dlight_cpp_CDemonLight_dtor_FUN_0044e1c0
                           (*(CDemonLight **)(&DAT_01fb99d4 + iVar3),0);
        FUN_00564494(pCVar2);
      }
      iVar1 = _DAT_01fb99d0;
      iVar4 = iVar4 + 1;
      *(uint *)(&DAT_01fb99d4 + iVar3) = 0;
      iVar3 = iVar3 + 4;
    } while (iVar4 < iVar1);
  }
  iVar4 = 0;
  _DAT_01fb99d0 = 0;
  if (0 < (int)this_ptr->cameras[0xf7].position.y) {
    this_ptr_00 = (C3DSLight *)&this_ptr->cameras[0xf7].position.z;
    do {
      core_setutil_cpp_FUN_00515410(this_ptr_00);
      iVar4 = iVar4 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar4 < (int)this_ptr->cameras[0xf7].position.y);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0044e3b0();
  core_dcamera_cpp_CDemonCamera_free_FUN_004401d0((CDemonCamera *)&DAT_01fb8508);
  return;
}
