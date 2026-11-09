// Name: core_sound.cpp_FUN_0055b110
// Address: 0055b110
// Address Range: [[0055b110, 0055b1a8]]
// Convention: unknown
// Signature: undefined4 core_sound_cpp_FUN_0055b110(undefined4 param_1,char *param_2,int *param_3)

#include "nocturne.h"

uint core_sound_cpp_FUN_0055b110(uint param_1,char *param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  CPickList CStack_3c4;
  
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&CStack_3c4);
  do {
    puVar1 = (uint *)(iVar2 + 0x61c06c);
    iVar2 = iVar2 + 0x10;
    shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&CStack_3c4,(char *)*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = shape_edittool_cpp_FUN_00482250(&CStack_3c4,param_2,*param_3,0);
  if (-1 < iVar2) {
    *param_3 = iVar2;
    shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_3c4,0);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_3c4,0);
  return 0;
}
