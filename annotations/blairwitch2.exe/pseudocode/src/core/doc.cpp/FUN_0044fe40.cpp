// Name: core_doc.cpp_FUN_0044fe40
// Address: 0044fe40
// Address Range: [[0044fe40, 0044fe7d]]
// Convention: unknown
// Signature: float core_doc_cpp_FUN_0044fe40(undefined4 param_1,undefined4 param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_doc_cpp_FUN_0044fe40(uint param_1,uint param_2,float param_3,int param_4)

{
  double dVar1;
  
  dVar1 = _DAT_005cfb77;
  if ((0 < param_4) && (dVar1 = _DAT_005cfb6f, param_4 != 1)) {
    return param_3;
  }
  return param_3 * (float)dVar1;
}
