// Name: core_sound.cpp_FUN_0052ed40
// Address: 0052ed40
// Address Range: [[0052ed40, 0052edd6]]
// Convention: unknown
// Signature: undefined4 core_sound_cpp_FUN_0052ed40(undefined4 param_1,char *param_2,int *param_3)

#include "nocturne.h"

uint core_sound_cpp_FUN_0052ed40(uint param_1,char *param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  uint in_stack_fffffe8c;
  
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_00474c90((CPickList *)&stack0xfffffe8c);
  do {
    puVar1 = (uint *)((int)&PTR_s_OFF_00594c3d_005bed6c + iVar2);
    iVar2 = iVar2 + 0x10;
    shape_edittool_cpp_CStrList_add_FUN_00473cb0((CStrList *)&stack0xfffffe8c,(char *)*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                    ((CPickList *)&stack0xfffffe8c,param_2,*param_3,in_stack_fffffe8c);
  if (-1 < iVar2) {
    *param_3 = iVar2;
    shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&stack0xfffffe8c,0);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&stack0xfffffe8c,0);
  return 0;
}
