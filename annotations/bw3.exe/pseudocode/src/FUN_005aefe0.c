// Name: FUN_005aefe0
// Address: 005aefe0
// Address Range: [[005aefe0, 005aefee]]
// Convention: unknown
// Signature: undefined1 * FUN_005aefe0(void)

#include "nocturne.h"

byte * FUN_005aefe0(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR_FUN_006079a0)();
  return &stack0xfffffffc + -*piVar1;
}
