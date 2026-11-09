// Name: core_doc.cpp_FUN_00468a20
// Address: 00468a20
// Address Range: [[00468a20, 00468a5d]]
// Convention: unknown
// Signature: float core_doc_cpp_FUN_00468a20(undefined4 param_1,undefined4 param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_doc_cpp_FUN_00468a20(uint param_1,uint param_2,float param_3,int param_4)

{
  double dVar1;
  
  dVar1 = _DAT_005d9894;
  if ((0 < param_4) && (dVar1 = _DAT_005d988c, param_4 != 1)) {
    return param_3;
  }
  return param_3 * (float)dVar1;
}
