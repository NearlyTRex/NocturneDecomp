// Name: unkafter_zombie.cpp_FUN_005ca664
// Address: 005ca664
// Address Range: [[005ca664, 005ca692]]
// Convention: unknown
// Signature: undefined1 * unkafter_zombie_cpp_FUN_005ca664(int param_1,undefined1 *param_2,int param_3)

#include "nocturne.h"

byte * unkafter_zombie_cpp_FUN_005ca664(int param_1,byte *param_2,int param_3)

{
  byte *puVar1;
  
  puVar1 = param_2;
  if ((param_3 == 10) && (param_1 < 0)) {
    param_1 = -param_1;
    puVar1 = param_2 + 1;
    *param_2 = 0x2d;
  }
  unkafter_zombie_cpp_FUN_005ca610(param_1,puVar1,param_3);
  return param_2;
}
