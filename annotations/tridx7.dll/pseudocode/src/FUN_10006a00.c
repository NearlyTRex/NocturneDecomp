// Name: FUN_10006a00
// Address: 10006a00
// Address Range: [[10006a00, 10006a14]]
// Convention: unknown
// Signature: undefined8 FUN_10006a00(int *param_1)

#include "nocturne.h"

ulonglong FUN_10006a00(int *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  return *puVar1;
}
