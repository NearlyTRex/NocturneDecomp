// Name: engine_pod.cpp_CPod_dtor_FUN_004f8840
// Address: 004f8840
// Address Range: [[004f8840, 004f886f] [004f8871, 004f8898]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_dtor_FUN_004f8840(int param_1,byte param_2)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_dtor_FUN_004f8840(int param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&DAT_005a14a0);
    shape_memdbg_cpp_free_FUN_00564486(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x194) = &PTR_engine_pod_cpp_CPod_dtor_FUN_004f8840_005a1484;
  engine_pod_cpp_CPod_cleanup_FUN_004f8b40(param_1);
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_00564494(param_1);
  return param_1;
}
