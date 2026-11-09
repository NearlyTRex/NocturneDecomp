// Name: unkafter_mimic.cpp_FUN_004ab1ac
// Address: 004ab1ac
// Address Range: [[004ab1ac, 004ab21c] [004ab220, 004ab22e] [004ab230, 004ab239] [004ab23c, 004ab24e]]
// Convention: unknown
// Signature: void unkafter_mimic_cpp_FUN_004ab1ac(void)

#include "nocturne.h"

void unkafter_mimic_cpp_FUN_004ab1ac(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *in_ECX;
  uint *in_EDX;
  
  cVar2 = (char)*in_EDX;
  for (; ((uint)in_ECX & 7) != 0; in_ECX = (uint *)((int)in_ECX + 1)) {
    *(char *)in_ECX = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = *(char *)((int)in_EDX + 1);
    in_EDX = (uint *)((int)in_EDX + 1);
  }
  while( true ) {
    lVar1 = *(longlong *)in_EDX;
    uVar3 = *in_EDX;
    if ((uVar3 & 0xff) == 0) {
      *(char *)in_ECX = (char)uVar3;
      return;
    }
    if ((uVar3 & 0xff00) == 0) break;
    if ((uVar3 & 0xff0000) == 0) {
      *(byte *)((int)in_ECX + 2) = 0;
      break;
    }
    if ((uVar3 & 0xff000000) == 0) {
LAB_004ab233:
      *in_ECX = uVar3;
      return;
    }
    uVar4 = in_EDX[1];
    in_EDX = in_EDX + 2;
    if ((uVar4 & 0xff) == 0) {
      *(char *)(in_ECX + 1) = (char)uVar4;
      goto LAB_004ab233;
    }
    if ((uVar4 & 0xff00) == 0) {
LAB_004ab224:
      *(short *)(in_ECX + 1) = (short)uVar4;
      *in_ECX = uVar3;
      return;
    }
    if ((uVar4 & 0xff0000) == 0) {
      *(byte *)((int)in_ECX + 6) = 0;
      goto LAB_004ab224;
    }
    if ((uVar4 & 0xff000000) == 0) {
      *(longlong *)in_ECX = (longlong)ROUND((float10)lVar1);
      return;
    }
    *(longlong *)in_ECX = (longlong)ROUND((float10)lVar1);
    in_ECX = in_ECX + 2;
  }
  *(short *)in_ECX = (short)uVar3;
  return;
}
