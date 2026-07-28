// Name: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20
// Address: 004cbe20
// Address Range: [[004cbe20, 004cbea4]]
// Convention: unknown
// Signature: CDemonActor * core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20(CDemonActor *param_1,byte param_2)

{
  int iVar1;
  CDemonActor *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CMansionPuzzleCircleTypeInfo_005a0290);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  iVar1 = core_manpuz_cpp_FUN_004cc060(param_1[0xe].create_event + 0x60,0);
  iVar1 = core_manpuz_cpp_FUN_004cc040(iVar1 + -0x8a0,0);
  iVar1 = core_manpuz_cpp_FUN_004cc020(iVar1 + -0x4b0,0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)(iVar1 + -0x5e8),1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
