// Name: crt_watcom.c_FUN_0049604c
// Address: 0049604c
// Address Range: [[0049604c, 004960bc] [004960c0, 004960ce] [004960d0, 004960d9] [004960dc, 004960ee]]
// Convention: unknown
// Signature: void crt_watcom_c_FUN_0049604c(void)

#include "nocturne.h"

void FUN_0049604c(void)

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
LAB_004960d3:
      *in_ECX = uVar3;
      return;
    }
    uVar4 = in_EDX[1];
    in_EDX = in_EDX + 2;
    if ((uVar4 & 0xff) == 0) {
      *(char *)(in_ECX + 1) = (char)uVar4;
      goto LAB_004960d3;
    }
    if ((uVar4 & 0xff00) == 0) {
LAB_004960c4:
      *(short *)(in_ECX + 1) = (short)uVar4;
      *in_ECX = uVar3;
      return;
    }
    if ((uVar4 & 0xff0000) == 0) {
      *(byte *)((int)in_ECX + 6) = 0;
      goto LAB_004960c4;
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
