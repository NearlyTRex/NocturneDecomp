// Name: cockpit_pkbmpset.cpp_FUN_00538990
// Address: 00538990
// Address Range: [[00538990, 005389bd]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_00538990(undefined4 *param_1)

#include "nocturne.h"

void cockpit_pkbmpset_cpp_FUN_00538990(uint *param_1)

{
  void *ptr;
  
  ptr = __vec_delete((void *)param_1[1],&g_CPackedBitmapTypeInfo);
  FUN_005c0336(ptr);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}
