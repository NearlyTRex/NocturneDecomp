// Name: FUN_00495f54
// Address: 00495f54
// Address Range: [[00495f54, 00495f5e]]
// Convention: unknown
// Signature: void FUN_00495f54(void)

#include "nocturne.h"

void FUN_00495f54(void)

{
  ushort *in_ECX;
  ushort in_DX;
  
  *(char *)(in_ECX + 1) = (char)in_DX;
  *in_ECX = in_DX;
  return;
}
