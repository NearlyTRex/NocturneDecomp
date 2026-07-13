// Name: FUN_10006a20
// Address: 10006a20
// Address Range: [[10006a20, 10006a2f]]
// Convention: unknown
// Signature: undefined2 FUN_10006a20(undefined4 *param_1)

#include "nocturne.h"

ushort FUN_10006a20(uint *param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)*param_1;
  *param_1 = puVar1 + 2;
  return *puVar1;
}
