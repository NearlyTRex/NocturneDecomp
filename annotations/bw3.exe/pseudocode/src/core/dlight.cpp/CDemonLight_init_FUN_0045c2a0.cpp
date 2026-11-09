// Name: core_dlight.cpp_CDemonLight_init_FUN_0045c2a0
// Address: 0045c2a0
// Address Range: [[0045c2a0, 0045c375]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_init_FUN_0045c2a0(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_init_FUN_0045c2a0(CDemonLight *this_ptr)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  core_dlight_cpp_FUN_0045c380(this_ptr);
  pvVar1 = FUN_005a3650
                     (*(int *)&this_ptr->field_0x1cc0 * *(int *)&this_ptr->field_0x1cc4 * 2 + 0x210)
  ;
  *(void **)&this_ptr->field_0x2f98 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    _DAT_01d71de0 = "..\\core\\dlight.cpp";
    _DAT_01d71de4 = 0x6c;
    core_main_c_FUN_004e4330("CDemonCamera::init - Unable to alloc frame buffer");
  }
  *(uint *)&this_ptr->field_0x2f94 = *(int *)&this_ptr->field_0x2f98 + 0x10U & 0xfffffff0;
  iVar2 = *(int *)&this_ptr->field_0x1cc0 * *(int *)&this_ptr->field_0x1cc4;
  iVar3 = iVar2 >> 0x1f;
  pvVar1 = FUN_005a3650((int)((iVar2 + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3);
  fVar4 = (float10)*(float *)&this_ptr->field_0x2fa8 * (float10)_DAT_005bb244;
  *(void **)&this_ptr->field_0x2fa0 = pvVar1;
  iVar2 = 0;
  round();
  core_dlight_cpp_CDemonLight_applyFilter_FUN_0045db40
            (this_ptr,(&g_GlobalFilters)[(int)ROUND(fVar4)],0,0,iVar2);
  return;
}
