// Name: engine_colquant.c_doubleMax_FUN_00441790
// Address: 00441790
// Address Range: [[00441790, 004417d6]]
// Convention: __cdecl
// Signature: double __cdecl engine_colquant_c_doubleMax_FUN_00441790(double a,double b)

#include "nocturne.h"

double __cdecl engine_colquant_c_doubleMax_FUN_00441790(double a,double b)

{
  uint local_18;
  
  if (a <= b) {
    local_18 = b._0_4_;
    a._4_4_ = b._4_4_;
  }
  else {
    local_18 = a._0_4_;
  }
  return __BITCAST_DOUBLE(CONCAT44(a._4_4_,local_18));
}
