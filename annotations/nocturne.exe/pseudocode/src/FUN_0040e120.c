// Name: FUN_0040e120
// Address: 0040e120
// Address Range: [[0040e120, 0040e152]]
// Convention: unknown
// Signature: undefined2 FUN_0040e120(undefined4 param_1,char *param_2)

#include "nocturne.h"

ushort FUN_0040e120(uint param_1,char *param_2)

{
  char cVar1;
  byte in_AL;
  ushort uVar2;
  
  cVar1 = *param_2;
  uVar2 = CONCAT11(cVar1,in_AL);
  while (cVar1 != '\0') {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    uVar2 = core_actor_cpp_crc32ProcessByte_FUN_0040dfc0(param_1,cVar1);
    cVar1 = *param_2;
  }
  return uVar2;
}
