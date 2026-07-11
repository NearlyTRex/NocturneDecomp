// Name: FUN_00403e10
// Address: 00403e10
// Address Range: [[00403e10, 00403e54]]
// Convention: unknown
// Signature: void FUN_00403e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00403e10(uint param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_00403bd0(param_1,param_2,param_3);
  FUN_00403bd0(param_1,param_4,param_3);
  FUN_00403ce0(param_1,param_2,param_4);
  FUN_00403ce0(param_3,param_2,param_4);
  return;
}
