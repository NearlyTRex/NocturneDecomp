// Name: FUN_00403170
// Address: 00403170
// Address Range: [[00403170, 004031b4]]
// Convention: unknown
// Signature: void FUN_00403170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00403170(uint param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_00402f30(param_1,param_2,param_3);
  FUN_00402f30(param_1,param_4,param_3);
  FUN_00403040(param_1,param_2,param_4);
  FUN_00403040(param_3,param_2,param_4);
  return;
}
