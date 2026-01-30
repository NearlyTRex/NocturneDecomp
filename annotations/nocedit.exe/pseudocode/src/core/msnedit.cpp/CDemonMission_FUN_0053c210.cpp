// Name: core_msnedit.cpp_CDemonMission_FUN_0053c210
// Address: 0053c210
// Address Range: [[0053c210, 0053c33f]]
// Convention: __cdecl
// Signature: char * __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c210(CDemonMission *this_ptr,char *param_2,char *param_3)

#include "nocturne.h"

char * __cdecl
core_msnedit_cpp_CDemonMission_FUN_0053c210(CDemonMission *this_ptr,char *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int index;
  int iVar4;
  uint in_stack_fffffc4c;
  uint in_stack_fffffc50;
  char **in_stack_fffffc54;
  CStrList_vtable *in_stack_fffffc58;
  uint in_stack_fffffc5c;
  
  if ((int)g_CDemonSetPtr->actor_list_ptr < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No actors in set.");
    return (char *)0x0;
  }
  iVar4 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc4c);
  for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
    pcVar1 = g_CDemonSetPtr->actor_list_data + iVar4;
    iVar4 = iVar4 + 4;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc4c,*(char **)pcVar1);
  }
  iVar4 = -1;
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffffc4c);
  iVar3 = iVar4;
  if ((param_3 != (char *)0x0) && (index = 0, 0 < (int)in_stack_fffffc4c)) {
    do {
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)&stack0xfffffc4c,index);
      iVar2 = stricmp(param_3,pcVar1);
      iVar3 = index;
      if (iVar2 == 0) break;
      index = index + 1;
      iVar3 = iVar4;
    } while (index < (int)in_stack_fffffc4c);
  }
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc4c,param_2,iVar3,0);
  if (iVar3 < 0) {
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc4c,0,in_stack_fffffc4c,in_stack_fffffc50,
               (uint)in_stack_fffffc54,(uint)in_stack_fffffc58,in_stack_fffffc5c);
    return (char *)0x0;
  }
  shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffc4c,iVar3);
  pcVar1 = core_mission_cpp_CDemonMission_FUN_00524030(this_ptr);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc4c,0,in_stack_fffffc4c,in_stack_fffffc50,
             (uint)in_stack_fffffc54,(uint)in_stack_fffffc58,in_stack_fffffc5c);
  return pcVar1;
}
