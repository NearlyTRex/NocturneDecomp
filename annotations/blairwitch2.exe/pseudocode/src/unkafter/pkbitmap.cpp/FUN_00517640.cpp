// Name: unkafter_pkbitmap.cpp_FUN_00517640
// Address: 00517640
// Address Range: [[00517640, 0051766d]]
// Convention: unknown
// Signature: void unkafter_pkbitmap_cpp_FUN_00517640(undefined4 *param_1)

#include "nocturne.h"

void unkafter_pkbitmap_cpp_FUN_00517640(uint *param_1)

{
  void *ptr;
  
  ptr = (void *)__vec_delete(param_1[1],&g_CPackedBitmapTypeInfo);
  FUN_005b7fce(ptr);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}
