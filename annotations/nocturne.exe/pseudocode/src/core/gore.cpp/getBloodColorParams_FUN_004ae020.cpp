// Name: core_gore.cpp_getBloodColorParams_FUN_004ae020
// Address: 004ae020
// Address Range: [[004ae020, 004ae06c]]
// Convention: unknown
// Signature: void core_gore_cpp_getBloodColorParams_FUN_004ae020(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

#include "nocturne.h"

void core_gore_cpp_getBloodColorParams_FUN_004ae020(uint param_1,uint *param_2,uint *param_3,uint *param_4)

{
  if (param_1 != 0) {
    if (param_1 < 2) {
      *param_2 = 0;
      *param_3 = 0x7f80;
      *param_4 = 0;
      return;
    }
    if (param_1 == 2) {
      *param_2 = 0;
      goto LAB_004ae043;
    }
  }
  *param_2 = 0x2000;
LAB_004ae043:
  *param_3 = 0;
  *param_4 = 0;
  return;
}
