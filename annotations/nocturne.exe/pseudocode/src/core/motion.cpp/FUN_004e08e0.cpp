// Name: core_motion.cpp_FUN_004e08e0
// Address: 004e08e0
// Address Range: [[004e08e0, 004e08f8]]
// Convention: unknown
// Signature: void core_motion_cpp_FUN_004e08e0(_FILE *param_1)

#include "nocturne.h"

void core_motion_cpp_FUN_004e08e0(_FILE *param_1)

{
  int iVar1;
  
  do {
    iVar1 = _fgetc(param_1);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
