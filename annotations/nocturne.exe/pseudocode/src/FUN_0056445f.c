// Name: FUN_0056445f
// Address: 0056445f
// Address Range: [[0056445f, 00564485]]
// Convention: unknown
// Signature: undefined4 * FUN_0056445f(int param_1,undefined4 param_2)

#include "nocturne.h"

uint * FUN_0056445f(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  FUN_0056494f(param_1,*(uint *)(param_1 + -4),param_2);
  return (uint *)(param_1 + -4);
}
