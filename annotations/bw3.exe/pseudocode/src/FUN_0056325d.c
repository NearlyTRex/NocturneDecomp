// Name: FUN_0056325d
// Address: 0056325d
// Address Range: [[0056325d, 005632a2]]
// Convention: unknown
// Signature: undefined8 FUN_0056325d(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0056325d(void)

{
  uint in_EAX;
  uint in_ECX;
  uint in_EDX;
  uint unaff_EBX;
  
  _DAT_00604d34 = in_EAX;
  _DAT_00604d38 = unaff_EBX;
  _DAT_00604d3c = in_ECX;
  _DAT_00604d40 = in_EDX;
  (*_DAT_01c6b5cc)();
  return CONCAT44(_DAT_00604d40,_DAT_00604d34);
}
