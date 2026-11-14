// Name: crt_unknown.c_FUN_005c34e8
// Address: 005c34e8
// Address Range: [[005c34e8, 005c3503]]
// Convention: unknown
// Signature: longlong crt_unknown_c_FUN_005c34e8(void)

#include "nocturne.h"

longlong FUN_005c34e8(void)

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
