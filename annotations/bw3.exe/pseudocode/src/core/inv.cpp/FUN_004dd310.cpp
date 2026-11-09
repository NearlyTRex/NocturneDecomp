// Name: core_inv.cpp_FUN_004dd310
// Address: 004dd310
// Address Range: [[004dd310, 004dd331]]
// Convention: unknown
// Signature: bool core_inv_cpp_FUN_004dd310(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

bool core_inv_cpp_FUN_004dd310(uint param_1,int param_2,int param_3)

{
  if (param_3 == 5) {
    return true;
  }
  return param_3 == *(int *)(param_2 + 0x574);
}
