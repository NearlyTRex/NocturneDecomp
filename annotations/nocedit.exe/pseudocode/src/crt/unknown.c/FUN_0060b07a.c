// Name: crt_unknown.c_FUN_0060b07a
// Address: 0060b07a
// Address Range: [[0060b07a, 0060b0c7]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0060b07a(int *param_1)

#include "nocturne.h"

uint FUN_0060b07a(int *param_1)

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
