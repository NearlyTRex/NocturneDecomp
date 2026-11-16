// Name: FUN_0058012d
// Address: 0058012d
// Address Range: [[0058012d, 00580172]]
// Convention: unknown
// Signature: undefined8 FUN_0058012d(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0058012d(void)

{
  uint in_EAX;
  uint in_ECX;
  uint in_EDX;
  uint unaff_EBX;
  
  _DAT_00623df4 = in_EAX;
  _DAT_00623df8 = unaff_EBX;
  _DAT_00623dfc = in_ECX;
  _DAT_00623e00 = in_EDX;
  (*_DAT_01c4f02c)();
  return CONCAT44(_DAT_00623e00,_DAT_00623df4);
}
