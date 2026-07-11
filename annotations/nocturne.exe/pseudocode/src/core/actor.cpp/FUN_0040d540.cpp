// Name: FUN_0040d540
// Address: 0040d540
// Address Range: [[0040d540, 0040d5dd]]
// Convention: unknown
// Signature: int FUN_0040d540(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040d540(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040d4d0(param_1);
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\core\\actor.cpp";
    _DAT_01cc4804 = 0xa4a;
    FUN_004c8440("Can't create actor of unknown class type: %s",param_1);
  }
  if (*(int *)(iVar1 + 0x2c) == 0) {
    _DAT_01cc4800 = "..\\core\\actor.cpp";
    _DAT_01cc4804 = 0xa50;
    FUN_004c8440("Can't create instance of abstract type %s",param_1);
  }
  iVar1 = (**(code **)(iVar1 + 0x2c))();
  if (iVar1 != 0) {
    return iVar1;
  }
  _DAT_01cc4800 = "..\\core\\actor.cpp";
  _DAT_01cc4804 = 0xa59;
  FUN_004c8440("Not enough memory to create %s",param_1);
  return 0;
}
