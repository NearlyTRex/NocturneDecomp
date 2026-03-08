// Name: core_dmodel.cpp_safeAcos_FUN_0047b170
// Address: 0047b170
// Address Range: [[0047b170, 0047b1dd]]
// Convention: __cdecl
// Signature: double __cdecl core_dmodel_cpp_safeAcos_FUN_0047b170(float value)

#include "nocturne.h"

double __cdecl core_dmodel_cpp_safeAcos_FUN_0047b170(float value)

{
  double dVar1;
  double local_18;
  _SPLIT_DOUBLE local_10;
  
  dVar1 = (double)value;
  if (1.0 <= dVar1) {
    local_10.u.low = 0;
    local_10.u.high = 0;
  }
  else {
    if (-1 < dVar1) {
      dVar1 = acos(dVar1);
      return dVar1;
    }
    local_10.u.low = 0x54411744;
    local_10.u.high = 0x400921fb;
  }
  return __BITCAST_DOUBLE(CONCAT44(local_10.u.high,local_10.u.low));
}
