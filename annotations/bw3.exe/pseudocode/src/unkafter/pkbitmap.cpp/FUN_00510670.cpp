// Name: unkafter_pkbitmap.cpp_FUN_00510670
// Address: 00510670
// Address Range: [[00510670, 0051069d]]
// Convention: unknown
// Signature: void unkafter_pkbitmap_cpp_FUN_00510670(undefined4 *param_1)

#include "nocturne.h"

void unkafter_pkbitmap_cpp_FUN_00510670(uint *param_1)

{
  void *ptr;
  
  ptr = (void *)__vec_delete(param_1[1],&g_CPackedBitmapTypeInfo);
  FUN_005a30b6(ptr);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}
