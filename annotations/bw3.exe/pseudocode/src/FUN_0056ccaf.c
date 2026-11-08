// Name: FUN_0056ccaf
// Address: 0056ccaf
// Address Range: [[0056ccaf, 0056ccb9]]
// Convention: unknown
// Signature: undefined1 FUN_0056ccaf(void)

#include "nocturne.h"

byte FUN_0056ccaf(void)

{
  uint in_EAX;
  char in_CH;
  int unaff_EBX;
  
  *(char *)(in_EAX + 0x61) = *(char *)(in_EAX + 0x61) + in_CH;
  *(char *)(in_EAX - 0x1c) = *(char *)(in_EAX - 0x1c) + in_CH;
  return *(byte *)(unaff_EBX + (in_EAX & 0xff));
}
