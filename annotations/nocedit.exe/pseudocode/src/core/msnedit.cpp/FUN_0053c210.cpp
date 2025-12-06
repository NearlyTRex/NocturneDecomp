// Name: core_msnedit.cpp_FUN_0053c210
// Address: 0053c210
// Address Range: [[0053c210, 0053c33f]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053c210()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053c210(uint param_1, uint param_2,
   uint param_3) */

char * core_msnedit_cpp_FUN_0053c210(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int index;
  BADSPACEBASE *in_ESP;
  int iVar4;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  CDemonMission *in_stack_00000014;
  char **in_stack_fffffc54;
  CStrList_vtable *in_stack_fffffc58;
  CStrList_vtable *in_stack_fffffc5c;
  CStrList_vtable *in_stack_fffffc60;
  CStrList_vtable *in_stack_fffffc64;
  char **in_stack_fffffc68;
  CStrList_vtable *in_stack_fffffc6c;
  uint in_stack_fffffc70;
  
  if ((int)g_CDemonSetPtr->actor_list_ptr < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No actors in set.");
    return (char *)0x0;
  }
  iVar3 = 0;
  iVar4 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc4c);
  while( true ) {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar3) break;
    pcVar1 = g_CDemonSetPtr->actor_list_data + iVar4;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc50,*(char **)pcVar1);
  }
  iVar4 = -1;
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffffc50);
  iVar3 = iVar4;
  if ((in_stack_0000000c != (char *)0x0) && (index = 0, 0 < (int)in_stack_fffffc54)) {
    do {
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)&stack0xfffffc54,index);
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_0000000c,pcVar1);
      iVar3 = index;
      if (iVar2 == 0) break;
      index = index + 1;
      iVar3 = iVar4;
    } while (index < (int)in_stack_fffffc54);
  }
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc54,in_stack_00000010,iVar3,0);
  if (iVar3 < 0) {
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc58,0,(uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,
               (uint)in_stack_fffffc60,(uint)in_stack_fffffc64,(uint)in_stack_fffffc68);
    return (char *)0x0;
  }
  shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffc58,iVar3);
  pcVar1 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000014);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc60,0,(uint)in_stack_fffffc60,(uint)in_stack_fffffc64,
             (uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,in_stack_fffffc70);
  return pcVar1;
}
