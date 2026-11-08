// Name: FUN_004499c0
// Address: 004499c0
// Address Range: [[004499c0, 004499e3]]
// Convention: unknown
// Signature: undefined4 FUN_004499c0(int param_1)

#include "nocturne.h"

uint FUN_004499c0(int param_1)

{
  if (*(int *)(param_1 + 0x578) == 0) {
    return 0;
  }
  FUN_004b8100(param_1 + 0x57c);
  return 1;
}
