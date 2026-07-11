// Name: FUN_00571150
// Address: 00571150
// Address Range: [[00571150, 0057115e]]
// Convention: unknown
// Signature: undefined1 * FUN_00571150(void)

#include "nocturne.h"

byte * FUN_00571150(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR_FUN_005c1abc)();
  return &stack0xfffffffc + -*piVar1;
}
