// Name: unkafter_morph.cpp_FUN_005c3bdb
// Address: 005c3bdb
// Address Range: [[005c3bdb, 005c3c6a]]
// Convention: unknown
// Signature: undefined8 unkafter_morph_cpp_FUN_005c3bdb(double param_1,byte param_2)

#include "nocturne.h"

ulonglong unkafter_morph_cpp_FUN_005c3bdb(double param_1,byte param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    if (param_2 < 4) {
      uVar1 = param_2 | 0x2040;
      goto LAB_005c3c3d;
    }
    if ((param_2 == 4) && (param_1 < 0.0)) {
      return 0;
    }
  }
  uVar1 = param_2 | 0x8100;
  if ((param_2 == 6) && (param_1 < 0.0)) {
    uVar1 = 0x1106;
  }
LAB_005c3c3d:
  uVar2 = unkafter_morph_cpp_FUN_005c3aaa(uVar1,&param_1);
  return uVar2;
}
