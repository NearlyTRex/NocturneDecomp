// Name: core_set.cpp_CDemonSet_process_FUN_0056f940
// Address: 0056f940
// Address Range: [[0056f940, 0056fab3]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_process_FUN_0056f940(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_process_FUN_0056f940(CDemonSet *this_ptr)

{
  CDemonLight *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  C3DSLight *this_ptr_00;
  int in_stack_0000001c;
  int local_18;
  
  iVar3 = 0;
  if (0 < this_ptr->light_count) {
    this_ptr_00 = this_ptr->lights;
    do {
      pCVar1 = g_MasterLightList[0];
      if (this_ptr_00->light_type == 0) {
        if (g_MasterLightList[0] == (CDemonLight *)0x0) {
          return;
        }
        local_18 = 0;
        if (0 < g_ActiveLightCount) {
          iVar2 = 0;
          do {
            if (g_MasterLightList[0] == *(CDemonLight **)((int)g_ActiveLightList + iVar2)) {
              local_18 = 1;
              break;
            }
            iVar2 = iVar2 + 4;
          } while (iVar2 < g_ActiveLightCount * 4);
        }
        core_setutil_cpp_C3DSLight_process_FUN_00586cb0(this_ptr_00,g_MasterLightList[0],local_18);
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffeec,"%son",this_ptr_00->name);
        iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,&stack0xfffffef0);
        if (iVar2 != 0) {
          pCVar1->light_enabled_flag = 1;
        }
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffef4,"%soff");
        iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,&stack0xfffffef8);
        if (iVar2 != 0) {
          pCVar1->light_enabled_flag = 0;
        }
        iVar2 = crt_string_c_strnicmp_FUN_005ff070(this_ptr_00->name,"moon",4);
        if (iVar2 == 0) {
          if (*(int *)(in_stack_0000001c + 0x15ae48) == 0) {
            pCVar1->light_enabled_flag = 0;
            this_ptr = (CDemonSet *)this_ptr->cameras;
            goto LAB_0056f972;
          }
          pCVar1->light_enabled_flag = 1;
        }
        this_ptr = (CDemonSet *)this_ptr->cameras;
      }
LAB_0056f972:
      iVar3 = iVar3 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar3 < this_ptr->light_count);
  }
  return;
}
