// Name: engine_winfont.cpp_CWinFont_dtor_FUN_00558000
// Address: 00558000
// Address Range: [[00558000, 0055805c]]
// Convention: unknown
// Signature: CWinFont * engine_winfont_cpp_CWinFont_dtor_FUN_00558000(CWinFont *param_1,byte param_2)

#include "nocturne.h"

CWinFont * engine_winfont_cpp_CWinFont_dtor_FUN_00558000(CWinFont *param_1,byte param_2)

{
  CWinFont *pCVar1;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,(WatcomTypeInfo *)&DAT_005a44a0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  (param_1->base).vtable =
       (CFont_vtable *)&PTR_engine_winfont_cpp_CWinFont_dtor_FUN_00558000_005a4484;
  engine_winfont_cpp_CWinFont_reset_FUN_005586a0(param_1);
  pCVar1 = (CWinFont *)engine_palette_cpp_CFont_dtor_FUN_004eefc0(&param_1->base,1);
  if ((param_2 & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
