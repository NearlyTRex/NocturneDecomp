// Name: core_svetlana.cpp_FUN_00543050
// Address: 00543050
// Address Range: [[00543050, 005430c4]]
// Convention: unknown
// Signature: CHero * core_svetlana_cpp_FUN_00543050(CHero *param_1,byte param_2)

#include "nocturne.h"

CHero * core_svetlana_cpp_FUN_00543050(CHero *param_1,byte param_2)

{
  CCloth *pCVar1;
  CHero *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CSvetlanaTypeInfo_005a2bc0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00435160
                     ((CCloth *)(param_1[2].path_map.height_cache_tags[0x38] + 0x13),0);
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00435160
                     ((CCloth *)
                      (pCVar1[-1].model.texture_list[0x123].textures[2].texture_name + 0xc),0);
  pCVar2 = core_hero_cpp_CHero_dtor_FUN_004b4800((CHero *)(pCVar1[-1].vertices + 0x183),1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
