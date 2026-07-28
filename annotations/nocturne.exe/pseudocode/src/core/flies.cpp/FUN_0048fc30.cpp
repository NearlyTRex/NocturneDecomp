// Name: core_flies.cpp_FUN_0048fc30
// Address: 0048fc30
// Address Range: [[0048fc30, 0048fc94]]
// Convention: unknown
// Signature: CDemonActor * core_flies_cpp_FUN_0048fc30(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_flies_cpp_FUN_0048fc30(CDemonActor *param_1,byte param_2)

{
  int iVar1;
  CDemonActor *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CFliesTypeInfo_0059db30);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  iVar1 = core_flies_cpp_FUN_0048fce0(param_1[1].actor_name + 0x10,0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)(iVar1 + -0x160),1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
