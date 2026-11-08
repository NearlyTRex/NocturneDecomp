// Name: FUN_005c4070
// Address: 005c4070
// Address Range: [[005c4070, 005c407e]]
// Convention: unknown
// Signature: undefined1 * FUN_005c4070(void)

#include "nocturne.h"

byte * FUN_005c4070(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR_FUN_0061f2a4)();
  return &stack0xfffffffc + -*piVar1;
}
