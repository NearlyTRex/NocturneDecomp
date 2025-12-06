// Name: core_dmodel.cpp_safeAcos_FUN_0047b170
// Address: 0047b170
// Address Range: [[0047b170, 0047b1dd]]
// Convention: __cdecl
// Signature: double core_dmodel.cpp_safeAcos_FUN_0047b170(float value)

#include "nocturne.h"

double __cdecl core_dmodel_cpp_safeAcos_FUN_0047b170(float value)

{
  double dVar1;
  float in_stack_00000004;
  uint local_10;
  uint local_c;
  
  dVar1 = (double)in_stack_00000004;
  if (1.0 <= dVar1) {
    local_10 = 0;
    local_c = 0;
  }
  else {
    if (-1 < dVar1) {
      dVar1 = crt_math_c_acos_FUN_00600162(dVar1);
      return dVar1;
    }
    local_10 = 0x54411744;
    local_c = 0x400921fb;
  }
  return (double)CONCAT44 /* combine 2-byte values */(local_c,local_10);
}
