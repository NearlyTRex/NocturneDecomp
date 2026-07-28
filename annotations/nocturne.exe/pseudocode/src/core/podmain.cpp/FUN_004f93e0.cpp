// Name: core_podmain.cpp_FUN_004f93e0
// Address: 004f93e0
// Address Range: [[004f93e0, 004f942d]]
// Convention: unknown
// Signature: CPod * core_podmain_cpp_FUN_004f93e0(CPod *param_1,byte param_2)

#include "nocturne.h"

CPod * core_podmain_cpp_FUN_004f93e0(CPod *param_1,byte param_2)

{
  CPod *pCVar1;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CDemonPodTypeInfo_005a1510);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = engine_pod_cpp_CPod_dtor_FUN_004f8840(param_1,1);
  if ((param_2 & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
