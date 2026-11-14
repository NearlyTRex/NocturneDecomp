// Name: core_set.cpp_CDemonSet_process_FUN_00533010
// Address: 00533010
// Address Range: [[00533010, 00533183]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_process_FUN_00533010(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_process_FUN_00533010(CDemonSet *this_ptr)

{
  CDemonLight *light;
  int iVar1;
  int iVar2;
  C3DSLight *this_ptr_00;
  char local_118 [256];
  int local_18;
  int local_14;
  
  iVar2 = 0;
  if (0 < this_ptr->light_count) {
    local_14 = 0;
    this_ptr_00 = this_ptr->lights;
    do {
      if (this_ptr_00->light_type == 0) {
        light = *(CDemonLight **)(&DAT_01fc8d04 + local_14);
        if (light == (CDemonLight *)0x0) {
          return;
        }
        local_18 = 0;
        if (0 < _DAT_01fc8e84) {
          iVar1 = 0;
          do {
            if (light == *(CDemonLight **)(&DAT_01fc8e88 + iVar1)) {
              local_18 = 1;
              break;
            }
            iVar1 = iVar1 + 4;
          } while (iVar1 < _DAT_01fc8e84 * 4);
        }
        core_setutil_cpp_C3DSLight_process_FUN_0053b8d0(this_ptr_00,light,local_18);
        _sprintf(local_118,&DAT_005e5b36);
        iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(0x01C38BC0,local_118);
        if (iVar1 != 0) {
          light->light_enabled_flag = 1;
        }
        _sprintf(local_118,"%soff");
        iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(0x01C38BC0,local_118);
        if (iVar1 != 0) {
          light->light_enabled_flag = 0;
        }
        iVar1 = _strnicmp(this_ptr_00->name,&DAT_005e5b41,4);
        if (iVar1 == 0) {
          if (this_ptr->last_switch_area_invalid == 0) {
            light->light_enabled_flag = 0;
            local_14 = local_14 + 4;
            goto LAB_00533042;
          }
          light->light_enabled_flag = 1;
        }
        local_14 = local_14 + 4;
      }
LAB_00533042:
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < this_ptr->light_count);
  }
  return;
}
