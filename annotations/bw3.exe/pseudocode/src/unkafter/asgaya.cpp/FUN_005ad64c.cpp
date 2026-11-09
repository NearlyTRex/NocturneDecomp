// Name: unkafter_asgaya.cpp_FUN_005ad64c
// Address: 005ad64c
// Address Range: [[005ad64c, 005ad699]]
// Convention: unknown
// Signature: undefined4 unkafter_asgaya_cpp_FUN_005ad64c(int *param_1)

#include "nocturne.h"

uint unkafter_asgaya_cpp_FUN_005ad64c(int *param_1)

{
  if ((*(ushort *)(param_1 + 2) & 0x7fff) == 0x7fff) {
    if ((param_1[1] == -0x80000000) && (*param_1 == 0)) {
      return 3;
    }
    return 2;
  }
  if ((*(ushort *)(param_1 + 2) & 0x7fff) != 0) {
    return 1;
  }
  if ((param_1[1] == 0) && (*param_1 == 0)) {
    return 0;
  }
  return 4;
}
