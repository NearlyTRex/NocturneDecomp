// Name: FUN_005ae658
// Address: 005ae658
// Address Range: [[005ae658, 005ae673]]
// Convention: unknown
// Signature: longlong FUN_005ae658(void)

#include "nocturne.h"

longlong FUN_005ae658(void)

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
