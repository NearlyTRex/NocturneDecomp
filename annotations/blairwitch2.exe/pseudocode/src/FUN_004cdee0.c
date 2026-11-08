// Name: FUN_004cdee0
// Address: 004cdee0
// Address Range: [[004cdee0, 004cdf5f]]
// Convention: unknown
// Signature: void FUN_004cdee0(int param_1)

#include "nocturne.h"

void FUN_004cdee0(int param_1)

{
  byte auStack_104 [256];
  
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b4,"?modelName" + 1);
  FUN_0040b960(param_1 + 0x430,"useCount");
  FUN_0040b8e0(param_1 + 0x434,"hpRestored");
  if (0x00000003 != 2) {
    return;
  }
  FUN_0040b850(auStack_104,"descriptiveName");
  return;
}
