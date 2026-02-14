// Name: core_msnedit.cpp_CDemonMission_FUN_0053cad0
// Address: 0053cad0
// Address Range: [[0053cad0, 0053cc20]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_CDemonMission_FUN_0053cad0(CDemonMission *this_ptr,int param_2,char *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_CDemonMission_FUN_0053cad0(CDemonMission *this_ptr,int param_2,char *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8)

{
  char *pcVar1;
  CDemonActor *pCVar2;
  char *str1;
  int iVar3;
  int index;
  int iVar4;
  int config_param1;
  CPickList local_3b8;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3b8);
  iVar4 = -1;
  if (((param_5 != 0) &&
      (shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b8.base,"(none)"), param_8 != 0))
     && (*param_4 == 0)) {
    iVar4 = 0;
  }
  core_msnedit_cpp_CDemonMission_FUN_0053cc30
            (this_ptr,&local_3b8.base,param_2,(char *)param_6,param_7);
  config_param1 = iVar4;
  if (((param_8 != 0) && (iVar4 < 0)) &&
     ((*param_4 != 0 && (index = 0, 0 < local_3b8.base.item_count)))) {
    do {
      pcVar1 = (char *)*param_4;
      str1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3b8.base,index);
      iVar3 = stricmp(str1,pcVar1);
      config_param1 = index;
      if (iVar3 == 0) break;
      index = index + 1;
      config_param1 = iVar4;
    } while (index < local_3b8.base.item_count);
  }
  iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_3b8,param_3,config_param1,0);
  if (-1 < iVar4) {
    pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3b8.base,iVar4);
    pCVar2 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,pcVar1);
    *param_4 = (int)pCVar2;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b8,0);
  return (uint)(-1 < iVar4);
}
