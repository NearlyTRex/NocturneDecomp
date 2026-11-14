// Name: core_texlist.cpp_FUN_00573940
// Address: 00573940
// Address Range: [[00573940, 00573975]]
// Convention: unknown
// Signature: undefined4 * core_texlist_cpp_FUN_00573940(undefined4 *param_1)

#include "nocturne.h"

uint * core_texlist_cpp_FUN_00573940(uint *param_1)

{
  param_1[0x6001] = 0;
  *param_1 = 0;
  param_1[0x6002] = 0;
  memset(param_1 + 1,0,0x18000);
  return param_1;
}
