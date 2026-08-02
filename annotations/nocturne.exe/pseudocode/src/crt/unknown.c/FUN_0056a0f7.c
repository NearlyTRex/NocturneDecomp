// Name: crt_unknown.c_FUN_0056a0f7
// Address: 0056a0f7
// Address Range: [[0056a0f7, 0056a162]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056a0f7(void)

#include "nocturne.h"

void FUN_0056a0f7(void)

{
  uint *in_EAX;
  uint *puVar1;
  uint in_ECX;
  int iVar2;
  uint uVar3;
  uint in_EDX;
  
  if (in_ECX != 0) {
    do {
      if (((uint)in_EAX & 0x1f) == 0) break;
      *in_EAX = in_EDX;
      in_EAX = in_EAX + 1;
      in_ECX = in_ECX - 1;
    } while (in_ECX != 0);
    if (in_ECX >> 2 != 0) {
      iVar2 = (in_ECX >> 2) - 1;
      if (iVar2 != 0) {
        do {
          puVar1 = in_EAX;
          *puVar1 = in_EDX;
          puVar1[1] = in_EDX;
          puVar1[2] = in_EDX;
          puVar1[3] = in_EDX;
          if (iVar2 == 1) goto LAB_0056a136;
          puVar1[4] = in_EDX;
          puVar1[5] = in_EDX;
          iVar2 = iVar2 + -2;
          puVar1[6] = in_EDX;
          puVar1[7] = in_EDX;
          in_EAX = puVar1 + 8;
        } while (iVar2 != 0);
        puVar1 = puVar1 + 4;
LAB_0056a136:
        in_EAX = puVar1 + 4;
      }
      *in_EAX = in_EDX;
      in_EAX[1] = in_EDX;
      in_EAX[2] = in_EDX;
      in_EAX[3] = in_EDX;
      in_EAX = in_EAX + 4;
    }
    uVar3 = in_ECX & 3;
    if (uVar3 != 0) {
      *in_EAX = in_EDX;
      if (uVar3 != 1) {
        in_EAX[1] = in_EDX;
        if (uVar3 != 2) {
          in_EAX[2] = in_EDX;
        }
      }
    }
  }
  return;
}
