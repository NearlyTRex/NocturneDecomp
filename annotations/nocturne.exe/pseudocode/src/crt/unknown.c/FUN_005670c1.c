// Name: crt_unknown.c_FUN_005670c1
// Address: 005670c1
// Address Range: [[005670c1, 005670df]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005670c1(void)

#include "nocturne.h"

uint FUN_005670c1(void)

{
  bool bVar1;
  byte *in_EAX;
  int iVar2;
  uint *puVar3;
  uint extraout_EAX;
  uint extraout_EAX_00;
  int iVar4;
  int iVar5;
  
  if (in_EAX < &stack0xfffffffc) {
    iVar2 = (int)in_EAX - (int)&stack0xfffffffc;
    puVar3 = (uint *)(*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
    if (*puVar3 < (uint)-iVar2) {
      ProbeStackSpace((uint)in_EAX);
      return extraout_EAX;
    }
  }
  iVar2 = 1;
  HandleRuntimeError("Stack Overflow!\r\n",1);
  iVar5 = -4;
  do {
    *(int *)(&stack0xfffffff0 + iVar5) = iVar5;
    iVar5 = iVar5 + -0x1000;
    iVar4 = iVar2 + -0x1000;
    bVar1 = 0xfff < iVar2;
    iVar2 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return extraout_EAX_00;
}
