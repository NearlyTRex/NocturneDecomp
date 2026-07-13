// Name: FUN_00530716
// Address: 00530716
// Address Range: [[00530716, 0053075b]]
// Convention: unknown
// Signature: undefined8 FUN_00530716(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00530716(void)

{
  uint in_EAX;
  uint in_ECX;
  uint in_EDX;
  uint unaff_EBX;
  
  _DAT_005bf4a4 = in_EAX;
  _DAT_005bf4a8 = unaff_EBX;
  _DAT_005bf4ac = in_ECX;
  _DAT_005bf4b0 = in_EDX;
  (*_DAT_01c00c7c)();
  return CONCAT44(_DAT_005bf4b0,_DAT_005bf4a4);
}
