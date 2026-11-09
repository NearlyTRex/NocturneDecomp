// Name: core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30
// Address: 0044cc30
// Address Range: [[0044cc30, 0044cde0]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_0044cc30(CDemonCamera *this_ptr,int screen_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_0044cc30(CDemonCamera *this_ptr,int screen_height)

{
  int iVar1;
  void *pvVar2;
  
  core_dcamera_cpp_CDemonCamera_free_FUN_0044cdf0(this_ptr);
  _DAT_01481e4c = (screen_height * 4) / 3;
  _DAT_01481e50 = screen_height;
  if (0x1e0 < screen_height) {
    screen_height = 0x1e0;
  }
  *(int *)&this_ptr->field_0x148 = screen_height;
  *(uint *)&this_ptr->field_0x14c = 1;
  *(int *)&this_ptr->field_0x144 = (screen_height * 4) / 3;
  *(uint *)&this_ptr->field_0x150 = *(uint *)&this_ptr->field_0x144;
  _DAT_01323d00 = 0;
  iVar1 = *(int *)&this_ptr->field_0x150;
  *(uint *)&this_ptr->field_0x154 = *(uint *)&this_ptr->field_0x148;
  while (0x140 < iVar1) {
    *(int *)&this_ptr->field_0x150 = *(int *)&this_ptr->field_0x150 / 2;
    _DAT_01323d00 = _DAT_01323d00 + 1;
    *(int *)&this_ptr->field_0x14c = *(int *)&this_ptr->field_0x14c * 2;
    iVar1 = *(int *)&this_ptr->field_0x150;
    *(int *)&this_ptr->field_0x154 = *(int *)&this_ptr->field_0x154 / 2;
  }
  pvVar2 = FUN_005c08d0
                     (*(int *)&this_ptr->field_0x144 * *(int *)&this_ptr->field_0x148 * 4 + 0x1010);
  *(void **)&this_ptr->field_0x160 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x24a;
    core_main_c_FUN_005030e0("CDemonCamera::init - Unable to alloc frame buffer");
  }
  pvVar2 = FUN_005c08d0
                     (*(int *)&this_ptr->field_0x144 * *(int *)&this_ptr->field_0x148 * 4 + 0x1010);
  *(void **)&this_ptr->field_0x164 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x24f;
    core_main_c_FUN_005030e0("CDemonCamera::init - Unable to alloc z buffer");
  }
  *(uint *)&this_ptr->field_0x158 = *(int *)&this_ptr->field_0x160 + 0x10U & 0xfffffff0;
  *(uint *)&this_ptr->field_0x15c = *(int *)&this_ptr->field_0x164 + 0x10U & 0xfffffff0;
  return;
}
