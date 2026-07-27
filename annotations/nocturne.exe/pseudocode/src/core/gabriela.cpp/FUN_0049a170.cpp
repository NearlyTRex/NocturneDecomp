// Name: core_gabriela.cpp_FUN_0049a170
// Address: 0049a170
// Address Range: [[0049a170, 0049a1d4]]
// Convention: unknown
// Signature: int core_gabriela_cpp_FUN_0049a170(int param_1,byte param_2)

#include "nocturne.h"

int core_gabriela_cpp_FUN_0049a170(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CGabriellaTypeInfo_0059de40);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = core_cloth_cpp_CCloth_dtor_FUN_00435160(param_1 + 0x1fa7c,0);
  iVar1 = core_hero_cpp_FUN_004b4800(iVar1 + -0x1fa7c,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
