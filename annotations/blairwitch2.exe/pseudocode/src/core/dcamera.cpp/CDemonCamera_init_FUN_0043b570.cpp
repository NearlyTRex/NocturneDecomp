// Name: core_dcamera.cpp_CDemonCamera_init_FUN_0043b570
// Address: 0043b570
// Address Range: [[0043b570, 0043b720]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_0043b570(CDemonCamera *this_ptr,int screen_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_0043b570(CDemonCamera *this_ptr,int screen_height)

{
  int iVar1;
  void *pvVar2;
  
  core_dcamera_cpp_CDemonCamera_free_FUN_0043b730(this_ptr);
  _DAT_0146694c = (screen_height * 4) / 3;
  _DAT_01466950 = screen_height;
  if (0x1e0 < screen_height) {
    screen_height = 0x1e0;
  }
  *(int *)&this_ptr->field_0x148 = screen_height;
  *(uint *)&this_ptr->field_0x14c = 1;
  *(int *)&this_ptr->field_0x144 = (screen_height * 4) / 3;
  *(uint *)&this_ptr->field_0x150 = *(uint *)&this_ptr->field_0x144;
  _DAT_01308800 = 0;
  iVar1 = *(int *)&this_ptr->field_0x150;
  *(uint *)&this_ptr->field_0x154 = *(uint *)&this_ptr->field_0x148;
  while (0x140 < iVar1) {
    *(int *)&this_ptr->field_0x150 = *(int *)&this_ptr->field_0x150 / 2;
    _DAT_01308800 = _DAT_01308800 + 1;
    *(int *)&this_ptr->field_0x14c = *(int *)&this_ptr->field_0x14c * 2;
    iVar1 = *(int *)&this_ptr->field_0x150;
    *(int *)&this_ptr->field_0x154 = *(int *)&this_ptr->field_0x154 / 2;
  }
  pvVar2 = FUN_005b8580
                     (*(int *)&this_ptr->field_0x144 * *(int *)&this_ptr->field_0x148 * 4 + 0x1010);
  *(void **)&this_ptr->field_0x160 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x246;
    core_main_c_FUN_004e4500("CDemonCamera::init - Unable to alloc frame buffer");
  }
  pvVar2 = FUN_005b8580
                     (*(int *)&this_ptr->field_0x144 * *(int *)&this_ptr->field_0x148 * 4 + 0x1010);
  *(void **)&this_ptr->field_0x164 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x24b;
    core_main_c_FUN_004e4500("CDemonCamera::init - Unable to alloc z buffer");
  }
  *(uint *)&this_ptr->field_0x158 = *(int *)&this_ptr->field_0x160 + 0x10U & 0xfffffff0;
  *(uint *)&this_ptr->field_0x15c = *(int *)&this_ptr->field_0x164 + 0x10U & 0xfffffff0;
  return;
}
