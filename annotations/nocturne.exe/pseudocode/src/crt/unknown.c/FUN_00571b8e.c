// Name: crt_unknown.c_FUN_00571b8e
// Address: 00571b8e
// Address Range: [[00571b8e, 00571bce]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00571b8e(void)

#include "nocturne.h"

void FUN_00571b8e(void)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  uint in_EDX;
  uint unaff_EBP;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  if ((in_EAX != 0 || in_EDX != 0) || unaff_EBP != 0) {
    uVar1 = in_EAX;
    uVar3 = unaff_EBP;
    if (in_EDX == 0) {
      uVar3 = 0;
      uVar1 = unaff_EBP;
      in_EDX = in_EAX;
    }
    uVar2 = uVar1;
    uVar4 = uVar3;
    if (in_EDX == 0) {
      uVar4 = 0;
      uVar2 = uVar3;
      in_EDX = uVar1;
    }
    for (; -1 < (int)in_EDX; in_EDX = in_EDX * 2 + (uint)(bVar6 || CARRY4(uVar1,(uint)bVar5))) {
      bVar5 = CARRY4(uVar4,uVar4);
      uVar4 = uVar4 * 2;
      bVar6 = CARRY4(uVar2,uVar2);
      uVar1 = uVar2 * 2;
      uVar2 = uVar1 + bVar5;
    }
  }
  return;
}
