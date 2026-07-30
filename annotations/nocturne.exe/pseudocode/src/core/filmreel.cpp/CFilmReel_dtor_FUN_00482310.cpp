// Name: core_filmreel.cpp_CFilmReel_dtor_FUN_00482310
// Address: 00482310
// Address Range: [[00482310, 0048235d]]
// Convention: unknown
// Signature: CDemonActor * core_filmreel_cpp_CFilmReel_dtor_FUN_00482310(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_filmreel_cpp_CFilmReel_dtor_FUN_00482310(CDemonActor *param_1,byte param_2)

{
  CDemonActor *pCVar1;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CFilmReelTypeInfo_0059d140);
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
