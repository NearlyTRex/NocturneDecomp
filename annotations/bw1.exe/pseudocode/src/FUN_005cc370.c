// Name: FUN_005cc370
// Address: 005cc370
// Address Range: [[005cc370, 005cc37e]]
// Convention: unknown
// Signature: undefined1 * FUN_005cc370(void)

#include "nocturne.h"

byte * FUN_005cc370(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR_FUN_006265fc)();
  return &stack0xfffffffc + -*piVar1;
}
