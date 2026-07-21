// Name: FUN_00474c90
// Address: 00474c90
// Address Range: [[00474c90, 00474cea]]
// Convention: unknown
// Signature: int FUN_00474c90(undefined4 param_1)

#include "nocturne.h"

int FUN_00474c90(uint param_1)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_CStrList_ctor_FUN_00473b60(param_1);
  iVar1 = shape_edittool_cpp_CEdScrollBar_ctor_FUN_00476450(iVar1 + 0x138);
  *(byte ***)(iVar1 + -300) = &PTR_shape_edittool_cpp_CPickList_dtor_FUN_00474cf0_0059ca94;
  *(uint *)(iVar1 + -0x128) = 0;
  *(byte *)(iVar1 + -0x124) = 0;
  *(uint *)(iVar1 + 0x34) = 0;
  *(uint *)(iVar1 + -0xc0) = 0;
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -4) = 0;
  return iVar1 + -0x138;
}
