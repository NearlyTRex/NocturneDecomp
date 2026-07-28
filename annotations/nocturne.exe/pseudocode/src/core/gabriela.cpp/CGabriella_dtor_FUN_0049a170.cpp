// Name: core_gabriela.cpp_CGabriella_dtor_FUN_0049a170
// Address: 0049a170
// Address Range: [[0049a170, 0049a1d4]]
// Convention: unknown
// Signature: CHero * core_gabriela_cpp_CGabriella_dtor_FUN_0049a170(CHero *param_1,byte param_2)

#include "nocturne.h"

CHero * core_gabriela_cpp_CGabriella_dtor_FUN_0049a170(CHero *param_1,byte param_2)

{
  CCloth *pCVar1;
  CHero *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CGabriellaTypeInfo_0059de40);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00435160
                     ((CCloth *)&param_1[1].base.base.orient_matrix.m[0].y,0);
  pCVar2 = core_hero_cpp_CHero_dtor_FUN_004b4800
                     ((CHero *)(pCVar1[-1].vertices[0x182].bone_index + 1),1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
