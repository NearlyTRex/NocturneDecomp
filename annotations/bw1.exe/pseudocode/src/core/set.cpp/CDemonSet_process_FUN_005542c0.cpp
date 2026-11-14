// Name: core_set.cpp_CDemonSet_process_FUN_005542c0
// Address: 005542c0
// Address Range: [[005542c0, 00554433]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_process_FUN_005542c0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_process_FUN_005542c0(CDemonSet *this_ptr)

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
        light = *(CDemonLight **)(&DAT_01fe4cb8 + local_14);
        if (light == (CDemonLight *)0x0) {
          return;
        }
        local_18 = 0;
        if (0 < _DAT_01fe4e38) {
          iVar1 = 0;
          do {
            if (light == *(CDemonLight **)(&DAT_01fe4e3c + iVar1)) {
              local_18 = 1;
              break;
            }
            iVar1 = iVar1 + 4;
          } while (iVar1 < _DAT_01fe4e38 * 4);
        }
        core_setutil_cpp_C3DSLight_process_FUN_0055d1a0(this_ptr_00,light,local_18);
        _sprintf(local_118,&DAT_005f0b5a);
        iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(0x01C51D80,local_118);
        if (iVar1 != 0) {
          light->light_enabled_flag = 1;
        }
        _sprintf(local_118,"%soff");
        iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(0x01C51D80,local_118);
        if (iVar1 != 0) {
          light->light_enabled_flag = 0;
        }
        iVar1 = _strnicmp(this_ptr_00->name,&DAT_005f0b65,4);
        if (iVar1 == 0) {
          if (this_ptr->last_switch_area_invalid == 0) {
            light->light_enabled_flag = 0;
            local_14 = local_14 + 4;
            goto LAB_005542f2;
          }
          light->light_enabled_flag = 1;
        }
        local_14 = local_14 + 4;
      }
LAB_005542f2:
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < this_ptr->light_count);
  }
  return;
}
