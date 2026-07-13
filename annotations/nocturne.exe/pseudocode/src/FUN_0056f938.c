// Name: FUN_0056f938
// Address: 0056f938
// Address Range: [[0056f938, 0056f985]]
// Convention: unknown
// Signature: undefined4 FUN_0056f938(int *param_1)

#include "nocturne.h"

uint FUN_0056f938(int *param_1)

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
