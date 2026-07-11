// Name: FUN_0056dc68
// Address: 0056dc68
// Address Range: [[0056dc68, 0056dc96]]
// Convention: unknown
// Signature: undefined1 * FUN_0056dc68(int param_1,undefined1 *param_2,int param_3)

#include "nocturne.h"

byte * FUN_0056dc68(int param_1,byte *param_2,int param_3)

{
  byte *puVar1;
  
  puVar1 = param_2;
  if ((param_3 == 10) && (param_1 < 0)) {
    param_1 = -param_1;
    puVar1 = param_2 + 1;
    *param_2 = 0x2d;
  }
  FUN_0056dc10(param_1,puVar1,param_3);
  return param_2;
}
