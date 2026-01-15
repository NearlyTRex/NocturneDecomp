// Name: core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0
// Address: 0053cad0
// Address Range: [[0053cad0, 0053cc20]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_RunNoneFunctorForCancelAndElse(uint param_1,
   uint param_2, uint param_3, uint param_4, uint param_5, uint
   param_6, uint param_7, uint param_8) */

bool core_msnedit_cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0(void)

{
  char *pcVar1;
  char *str1;
  int iVar2;
  int index;
  int iVar3;
  int config_param1;
  CDemonMission *in_stack_00000004;
  char *in_stack_0000000c;
  int *in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000020;
  uint in_stack_fffffc48;
  uint in_stack_fffffc4c;
  char **in_stack_fffffc50;
  CStrList_vtable *in_stack_fffffc54;
  uint in_stack_fffffc58;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc48);
  iVar3 = -1;
  if (((in_stack_00000014 != 0) &&
      (shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc48,"(none)"),
      in_stack_00000020 != 0)) && (*in_stack_00000010 == 0)) {
    iVar3 = 0;
  }
  core_msnedit_cpp_FUN_0053cc30();
  config_param1 = iVar3;
  if (((in_stack_00000020 != 0) && (iVar3 < 0)) &&
     ((*in_stack_00000010 != 0 && (index = 0, 0 < (int)in_stack_fffffc48)))) {
    do {
      pcVar1 = (char *)*in_stack_00000010;
      str1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&stack0xfffffc48,index);
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0(str1,pcVar1);
      config_param1 = index;
      if (iVar2 == 0) break;
      index = index + 1;
      config_param1 = iVar3;
    } while (index < (int)in_stack_fffffc48);
  }
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc48,in_stack_0000000c,config_param1,0);
  if (-1 < iVar3) {
    shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffc48,iVar3);
    pcVar1 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
    *in_stack_00000010 = (int)pcVar1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc48,0,in_stack_fffffc48,in_stack_fffffc4c,
             (uint)in_stack_fffffc50,(uint)in_stack_fffffc54,in_stack_fffffc58);
  return -1 < iVar3;
}
