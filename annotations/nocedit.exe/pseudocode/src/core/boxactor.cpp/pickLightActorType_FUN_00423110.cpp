// Name: core_boxactor.cpp_pickLightActorType_FUN_00423110
// Address: 00423110
// Address Range: [[00423110, 0042314a] [00423150, 00423168] [0042316e, 00423186] [0042318c, 0042320f] [0042322e, 00423237] [00423256, 0042325f] [0042327e, 004232f5]]
// Convention: __cdecl
// Signature: ELightActorType __cdecl core_boxactor_cpp_pickLightActorType_FUN_00423110(char *prompt_text,int allow_custom,uint current_type)

#include "nocturne.h"

ELightActorType __cdecl core_boxactor_cpp_pickLightActorType_FUN_00423110(char *prompt_text,int allow_custom,uint current_type)

{
  int iVar1;
  CPickList local_3b0;
  
  iVar1 = -1;
  switch(current_type) {
  case 0:
  case 1:
  case 2:
  case 3:
    iVar1 = 3;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3b0);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b0.base,"Flashlight");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b0.base,"Lantern");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b0.base,"Globe");
  if (allow_custom != 0) {
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b0.base,"Custom");
  }
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_3b0,prompt_text,iVar1,0);
  switch(iVar1) {
  case 0:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b0,0);
    return LIGHT_TYPE_FLASHLIGHT;
  case 1:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b0,0);
    return LIGHT_TYPE_LANTERN;
  case 2:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b0,0);
    return LIGHT_TYPE_GLOBE;
  case 3:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b0,0);
    return LIGHT_TYPE_CUSTOM;
  default:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b0,0);
    return ~LIGHT_TYPE_CUSTOM;
  }
}
