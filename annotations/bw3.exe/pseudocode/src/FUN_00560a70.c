// Name: FUN_00560a70
// Address: 00560a70
// Address Range: [[00560a70, 00560aae]]
// Convention: unknown
// Signature: undefined4 FUN_00560a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5)

#include "nocturne.h"

uint FUN_00560a70(uint param_1,uint param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  
  FUN_00555fd0();
  FUN_00555ee0(param_5);
  uVar1 = FUN_0055f020(param_2,param_3,*param_4,param_4[1],param_4[2],0,0);
  FUN_00556050();
  return uVar1;
}
