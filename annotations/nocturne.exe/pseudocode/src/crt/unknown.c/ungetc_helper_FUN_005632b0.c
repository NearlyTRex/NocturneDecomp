// Name: crt_unknown.c_ungetc_helper_FUN_005632b0
// Address: 005632b0
// Address Range: [[005632b0, 005632c7]]
// Convention: unknown
// Signature: void crt_unknown_c_ungetc_helper_FUN_005632b0(int param_1,int param_2)

#include "nocturne.h"

void ungetc_helper(int param_1,int param_2)

{
  _ungetc(param_1,*(_FILE **)(param_2 + 8));
  return;
}
