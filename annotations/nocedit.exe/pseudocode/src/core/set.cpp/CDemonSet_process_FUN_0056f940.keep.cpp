// Name: core_set.cpp_CDemonSet_process_FUN_0056f940
// Address: 0056f940
// MANUAL RECONSTRUCTION
// Address Range: [[0056f940, 0056fab3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_process_FUN_0056f940(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_process_FUN_0056f940(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar3;
  int iVar2;
  C3DSLight *this_ptr_00;
  char local_118 [256];
  int local_18;
  int local_14;
  CDemonLight *light;
  
  iVar2 = 0;
  if (0 < this_ptr->light_count) {
    local_14 = 0;
    this_ptr_00 = this_ptr->lights;
    do {
      if (this_ptr_00->light_type == 0) {
        light = g_MasterLightList[local_14 >> 2];
        if (light == (CDemonLight *)0x0) {
          return;
        }
        local_18 = 0;
        if (0 < g_SpotLightCount) {
          iVar3 = 0;
          do {
            if (light == g_SpotLightList[iVar3 >> 2]) {
              local_18 = 1;
              break;
            }
            iVar3 = iVar3 + 4;
          } while (iVar3 < g_SpotLightCount * 4);
        }
        core_setutil_cpp_C3DSLight_process_FUN_00586cb0(this_ptr_00,light,local_18);
        _sprintf(local_118,"%son",this_ptr_00->name);
        iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(g_CEventListPtr,local_118);
        if (iVar1 != 0) {
          light->light_enabled_flag = 1;
        }
        _sprintf(local_118,"%soff",this_ptr_00->name);
        iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(g_CEventListPtr,local_118);
        if (iVar3 != 0) {
          light->light_enabled_flag = 0;
        }
        iVar3 = _strnicmp(this_ptr_00->name,"moon",4);
        if (iVar3 == 0) {
          if (this_ptr->last_switch_area_invalid == 0) {
            light->light_enabled_flag = 0;
            local_14 = local_14 + 4;
            goto LAB_0056f972;
          }
          light->light_enabled_flag = 1;
        }
        local_14 = local_14 + 4;
      }
LAB_0056f972:
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < this_ptr->light_count);
  }
  return;
}
