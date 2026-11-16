// Name: FUN_0055d6dd
// Address: 0055d6dd
// Address Range: [[0055d6dd, 0055d722]]
// Convention: unknown
// Signature: undefined8 FUN_0055d6dd(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0055d6dd(void)

{
  uint in_EAX;
  uint in_ECX;
  uint in_EDX;
  uint unaff_EBX;
  
  _DAT_0061c7a4 = in_EAX;
  _DAT_0061c7a8 = unaff_EBX;
  _DAT_0061c7ac = in_ECX;
  _DAT_0061c7b0 = in_EDX;
  (*_DAT_01c35e6c)();
  return CONCAT44(_DAT_0061c7b0,_DAT_0061c7a4);
}
