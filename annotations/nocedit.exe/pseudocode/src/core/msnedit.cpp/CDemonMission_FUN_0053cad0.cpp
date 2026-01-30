// Name: core_msnedit.cpp_CDemonMission_FUN_0053cad0
// Address: 0053cad0
// Address Range: [[0053cad0, 0053cc20]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_CDemonMission_FUN_0053cad0 (CDemonMission *this_ptr,int param_2,char *param_3,int *param_4,int param_5,int param_6, int param_7,int param_8)

#include "nocturne.h"

int __cdecl
core_msnedit_cpp_CDemonMission_FUN_0053cad0
          (CDemonMission *this_ptr,int param_2,char *param_3,int *param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  char *pcVar1;
  char *str1;
  int iVar2;
  int index;
  int iVar3;
  int config_param1;
  uint in_stack_fffffc48;
  uint in_stack_fffffc4c;
  char **in_stack_fffffc50;
  CStrList_vtable *in_stack_fffffc54;
  uint in_stack_fffffc58;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc48);
  iVar3 = -1;
  if (((param_5 != 0) &&
      (shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc48,"(none)"),
      param_8 != 0)) && (*param_4 == 0)) {
    iVar3 = 0;
  }
  core_msnedit_cpp_CDemonMission_FUN_0053cc30
            (this_ptr,(CStrList *)&stack0xfffffc48,param_2,(char *)param_6,param_7);
  config_param1 = iVar3;
  if (((param_8 != 0) && (iVar3 < 0)) &&
     ((*param_4 != 0 && (index = 0, 0 < (int)in_stack_fffffc48)))) {
    do {
      pcVar1 = (char *)*param_4;
      str1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&stack0xfffffc48,index);
      iVar2 = stricmp(str1,pcVar1);
      config_param1 = index;
      if (iVar2 == 0) break;
      index = index + 1;
      config_param1 = iVar3;
    } while (index < (int)in_stack_fffffc48);
  }
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc48,param_3,config_param1,0);
  if (-1 < iVar3) {
    shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffc48,iVar3);
    pcVar1 = core_mission_cpp_CDemonMission_FUN_00524030(this_ptr);
    *param_4 = (int)pcVar1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc48,0,in_stack_fffffc48,in_stack_fffffc4c,
             (uint)in_stack_fffffc50,(uint)in_stack_fffffc54,in_stack_fffffc58);
  return (uint)(-1 < iVar3);
}
