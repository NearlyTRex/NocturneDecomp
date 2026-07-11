// Name: FUN_00571a9d
// Address: 00571a9d
// Address Range: [[00571a9d, 00571b2a]]
// Convention: unknown
// Signature: undefined8 FUN_00571a9d(void)

#include "nocturne.h"

ulonglong FUN_00571a9d(void)

{
  uint uVar1;
  uint uVar2;
  uint in_EAX;
  uint uVar3;
  uint in_ECX;
  uint in_EDX;
  uint unaff_EBX;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  if (in_ECX == 0) {
    uVar3 = in_EDX;
    if (unaff_EBX != 1) {
      uVar3 = 0;
      if (unaff_EBX <= in_EDX) {
        uVar3 = in_EDX / unaff_EBX;
        in_EDX = in_EDX % unaff_EBX;
      }
      in_EAX = (uint)(CONCAT44(in_EDX,in_EAX) / (ulonglong)unaff_EBX);
    }
    return CONCAT44(uVar3,in_EAX);
  }
  if (in_EDX <= in_ECX) {
    if ((in_ECX == in_EDX) && (unaff_EBX <= in_EAX)) {
      return 1;
    }
    return 0;
  }
  uVar3 = 0;
  uVar5 = 0;
  iVar4 = 0;
  do {
    bVar6 = CARRY4(unaff_EBX,unaff_EBX);
    unaff_EBX = unaff_EBX * 2;
    bVar7 = CARRY4(in_ECX,in_ECX);
    uVar1 = in_ECX * 2;
    in_ECX = uVar1 + bVar6;
    bVar8 = true;
    if (bVar7 || CARRY4(uVar1,(uint)bVar6)) goto LAB_00571afd;
    iVar4 = iVar4 + 1;
  } while ((in_ECX < in_EDX) || ((in_ECX <= in_EDX && (unaff_EBX <= in_EAX))));
  bVar8 = false;
  while( true ) {
    bVar6 = CARRY4(uVar3,uVar3);
    uVar1 = uVar3 * 2;
    uVar3 = uVar1 + bVar8;
    uVar1 = (uint)(bVar6 || CARRY4(uVar1,(uint)bVar8));
    bVar8 = CARRY4(uVar5,uVar5) || CARRY4(uVar5 * 2,uVar1);
    uVar5 = uVar5 * 2 + uVar1;
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) break;
LAB_00571afd:
    uVar1 = in_ECX & 1;
    in_ECX = in_ECX >> 1 | (uint)bVar8 << 0x1f;
    unaff_EBX = unaff_EBX >> 1 | (uint)(uVar1 != 0) << 0x1f;
    bVar6 = in_EAX < unaff_EBX;
    in_EAX = in_EAX - unaff_EBX;
    bVar7 = in_EDX < in_ECX;
    uVar1 = in_EDX - in_ECX;
    in_EDX = uVar1 - bVar6;
    bVar8 = true;
    if (bVar7 || uVar1 < bVar6) {
      do {
        bVar8 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar5 = uVar5 * 2 + (uint)bVar8;
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) goto LAB_00571b1f;
        uVar1 = in_ECX & 1;
        in_ECX = in_ECX >> 1;
        unaff_EBX = unaff_EBX >> 1 | (uint)(uVar1 != 0) << 0x1f;
        bVar8 = CARRY4(in_EAX,unaff_EBX);
        in_EAX = in_EAX + unaff_EBX;
        uVar1 = (uint)bVar8;
        bVar6 = CARRY4(in_EDX,in_ECX);
        uVar2 = in_EDX + in_ECX;
        bVar8 = bVar6 || CARRY4(uVar2,uVar1);
        in_EDX = uVar2 + uVar1;
      } while (!bVar6 && !CARRY4(uVar2,uVar1));
    }
  }
LAB_00571b1f:
  return CONCAT44(uVar5,uVar3);
}
