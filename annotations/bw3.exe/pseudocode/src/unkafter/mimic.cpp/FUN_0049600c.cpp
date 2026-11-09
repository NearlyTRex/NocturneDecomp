// Name: unkafter_mimic.cpp_FUN_0049600c
// Address: 0049600c
// Address Range: [[0049600c, 00496020]]
// Convention: unknown
// Signature: void unkafter_mimic_cpp_FUN_0049600c(void)

#include "nocturne.h"

void unkafter_mimic_cpp_FUN_0049600c(void)

{
  uint *in_ECX;
  uint *in_EDX;
  
  *(byte *)((int)in_ECX + 6) = *(byte *)((int)in_EDX + 6);
  *(ushort *)(in_ECX + 1) = *(ushort *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}
