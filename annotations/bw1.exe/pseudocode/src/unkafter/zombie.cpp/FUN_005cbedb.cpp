// Name: unkafter_zombie.cpp_FUN_005cbedb
// Address: 005cbedb
// Address Range: [[005cbedb, 005cbf6a]]
// Convention: unknown
// Signature: undefined8 unkafter_zombie_cpp_FUN_005cbedb(double param_1,byte param_2)

#include "nocturne.h"

ulonglong unkafter_zombie_cpp_FUN_005cbedb(double param_1,byte param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    if (param_2 < 4) {
      uVar1 = param_2 | 0x2040;
      goto LAB_005cbf3d;
    }
    if ((param_2 == 4) && (param_1 < 0.0)) {
      return 0;
    }
  }
  uVar1 = param_2 | 0x8100;
  if ((param_2 == 6) && (param_1 < 0.0)) {
    uVar1 = 0x1106;
  }
LAB_005cbf3d:
  uVar2 = unkafter_zombie_cpp_FUN_005cbdaa(uVar1,&param_1);
  return uVar2;
}
