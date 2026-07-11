// Name: FUN_0056f14c
// Address: 0056f14c
// Address Range: [[0056f14c, 0056f167]]
// Convention: unknown
// Signature: longlong FUN_0056f14c(void)

#include "nocturne.h"

longlong FUN_0056f14c(void)

{
  uint in_EAX;
  int in_ECX;
  int in_EDX;
  uint unaff_EBX;
  
  if ((in_EDX == 0) && (in_ECX == 0)) {
    return (ulonglong)in_EAX * (ulonglong)unaff_EBX;
  }
  return CONCAT44((int)((ulonglong)in_EAX * (ulonglong)unaff_EBX >> 0x20) +
                  in_EAX * in_ECX + in_EDX * unaff_EBX,
                  (int)((ulonglong)in_EAX * (ulonglong)unaff_EBX));
}
