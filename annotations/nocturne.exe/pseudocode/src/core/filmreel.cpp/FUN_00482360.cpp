// Name: core_filmreel.cpp_FUN_00482360
// Address: 00482360
// Address Range: [[00482360, 004823ad]]
// Convention: unknown
// Signature: CDemonActor * core_filmreel_cpp_FUN_00482360(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_filmreel_cpp_FUN_00482360(CDemonActor *param_1,byte param_2)

{
  CDemonActor *pCVar1;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CFilmProjectorTypeInfo_0059d160);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(param_1,1);
  if ((param_2 & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
