// Name: crt_math.c_UDivMod64_FUN_0060d3ed
// Address: 0060d3ed
// Address Range: [[0060d3ed, 0060d47a]]
// Convention: __cdecl
// Signature: void crt_math.c_UDivMod64_FUN_0060d3ed(ulonglong dividend, ulonglong divisor)

#include "nocturne.h"

/* Returns: EDX:EAX = quotient, ECX:EBX = remainder */

void __cdecl crt_math_c_UDivMod64_FUN_0060d3ed(ulonglong dividend,ulonglong divisor)

{
  uint uVar1;
  uint uVar2;
  uint in_EAX;
  uint in_ECX;
  uint in_EDX;
  uint unaff_EBX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (in_ECX == 0) {
    return;
  }
  if (in_ECX < in_EDX) {
    uVar4 = 0;
    uVar5 = 0;
    iVar3 = 0;
    do {
      bVar6 = CARRY4(unaff_EBX,unaff_EBX);
      unaff_EBX = unaff_EBX * 2;
      bVar7 = CARRY4(in_ECX,in_ECX) || CARRY4(in_ECX * 2,(uint)bVar6);
      in_ECX = in_ECX * 2 + (uint)bVar6;
      if (bVar7) goto LAB_0060d44d;
      iVar3 = iVar3 + 1;
    } while ((in_ECX < in_EDX) || ((in_ECX <= in_EDX && (unaff_EBX <= in_EAX))));
    bVar6 = false;
    do {
      do {
        bVar7 = CARRY4(uVar4,uVar4);
        uVar1 = uVar4 * 2;
        uVar4 = uVar1 + bVar6;
        uVar1 = (uint)(bVar7 || CARRY4(uVar1,(uint)bVar6));
        bVar7 = CARRY4(uVar5,uVar5) || CARRY4(uVar5 * 2,uVar1);
        uVar5 = uVar5 * 2 + uVar1;
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          return;
        }
LAB_0060d44d:
        uVar1 = in_ECX & 1;
        in_ECX = in_ECX >> 1 | (uint)bVar7 << 0x1f;
        unaff_EBX = unaff_EBX >> 1 | (uint)(uVar1 != 0) << 0x1f;
        bVar6 = in_EAX < unaff_EBX;
        in_EAX = in_EAX - unaff_EBX;
        uVar1 = (uint)bVar6;
        bVar7 = in_ECX <= in_EDX;
        uVar2 = in_EDX - in_ECX;
        in_EDX = uVar2 - uVar1;
        bVar6 = bVar7 && uVar1 <= uVar2;
      } while (bVar7 && uVar1 <= uVar2);
      do {
        bVar6 = CARRY4(uVar4,uVar4);
        uVar4 = uVar4 * 2;
        uVar5 = uVar5 * 2 + (uint)bVar6;
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          return;
        }
        uVar1 = in_ECX & 1;
        in_ECX = in_ECX >> 1;
        unaff_EBX = unaff_EBX >> 1 | (uint)(uVar1 != 0) << 0x1f;
        bVar6 = CARRY4(in_EAX,unaff_EBX);
        in_EAX = in_EAX + unaff_EBX;
        uVar1 = (uint)bVar6;
        bVar7 = CARRY4(in_EDX,in_ECX);
        uVar2 = in_EDX + in_ECX;
        bVar6 = bVar7 || CARRY4(uVar2,uVar1);
        in_EDX = uVar2 + uVar1;
      } while (!bVar7 && !CARRY4(uVar2,uVar1));
    } while( true );
  }
  if ((in_ECX == in_EDX) && (unaff_EBX <= in_EAX)) {
    return;
  }
  return;
}
