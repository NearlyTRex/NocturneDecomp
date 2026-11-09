// Name: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00462770
// Address: 00462770
// Address Range: [[00462770, 004627e7]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_00462770(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_00462770(CDemonLight *this_ptr)

{
  void *pvVar1;
  
  if (*(int *)&this_ptr->field_0x164 != 0) {
    _DAT_01d1d400 = "..\\core\\dlight.cpp";
    _DAT_01d1d404 = 0xcd;
    core_main_c_FUN_005030e0("CDemonLight::allocMasterZBuffer - We already have one!");
  }
  pvVar1 = core_dlight_cpp_getRestoreMemory_FUN_004626f0
                     (*(int *)&this_ptr->field_0x1cc0 * *(int *)&this_ptr->field_0x1cc4);
  *(void **)&this_ptr->field_0x2f9c = pvVar1;
  _memcpy
            (*(int *)&this_ptr->field_0x1cc0 * *(int *)&this_ptr->field_0x1cc4 * 2);
  return;
}
