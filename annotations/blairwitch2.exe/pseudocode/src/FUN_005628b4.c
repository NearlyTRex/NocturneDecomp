// Name: FUN_005628b4
// Address: 005628b4
// Address Range: [[005628b4, 00562b84]]
// Convention: unknown
// Signature: void FUN_005628b4(void)

#include "nocturne.h"

void FUN_005628b4(void)

{
  uint uVar1;
  char cVar2;
  char *in_EAX;
  int unaff_EBX;
  char *pcVar3;
  
  cVar2 = (char)in_EAX + *in_EAX;
  pcVar3 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *(uint *)(unaff_EBX + 0x256f8) = 0;
  *(uint *)(unaff_EBX + 0x25694) = 0;
  *(uint *)(unaff_EBX + 0x2569c) = 0;
  *(uint *)(unaff_EBX + 0x256a8) = 0;
  *(uint *)(unaff_EBX + 0x256ac) = 0;
  uVar1 = 0x41200000;
  *(uint *)(unaff_EBX + 0x256b0) = 0;
  *(uint *)(unaff_EBX + 0x25650) = uVar1;
  *(uint *)(unaff_EBX + 0x2571c) = 0xf149f2ca;
  *(uint *)(unaff_EBX + 0x25704) = 0xf149f2ca;
  *(uint *)(unaff_EBX + 0x25660) = *(uint *)(unaff_EBX + 0x2565c);
  *(uint *)(unaff_EBX + 0x25658) = *(uint *)(unaff_EBX + 0x25654);
  *(uint *)(unaff_EBX + 0x25680) = *(uint *)(unaff_EBX + 0x2567c);
  *(uint *)(unaff_EBX + 0x25678) = *(uint *)(unaff_EBX + 0x25674);
  FUN_005478b0(unaff_EBX + 0x2b4,"p?stranger.dfm" + 2);
  *(uint *)(unaff_EBX + 0x2d04) = 0;
  *(uint *)(unaff_EBX + 0x25698) = 0;
  *(uint *)(unaff_EBX + 0x256bc) = 0;
  *(uint *)(unaff_EBX + 0x256c0) = 0;
  *(uint *)(unaff_EBX + 0x256ec) = 0;
  *(uint *)(unaff_EBX + 0x256e8) = *(uint *)(unaff_EBX + 0x256ec);
  *(uint *)(unaff_EBX + 0x256e4) = *(uint *)(unaff_EBX + 0x256e8);
  *(uint *)(unaff_EBX + 0x256f0) = 0xffffffff;
  *(uint *)(unaff_EBX + 0x256a0) = 0;
  *(uint *)(unaff_EBX + 0x256c4) = 0;
  *(uint *)(unaff_EBX + 0x256c8) = 0;
  *(uint *)(unaff_EBX + 0x256a4) = 0;
  *(uint *)(unaff_EBX + 0x256f4) = 0;
  *(uint *)(unaff_EBX + 0x256fc) = 0;
  FUN_0044fd70(*(int *)(unaff_EBX + 0x2498c + *(int *)(unaff_EBX + 0x247e4) * 4) + 0x2b4,0x5eb1ca);
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_0042a330();
  FUN_005b15c0(unaff_EBX + 0x2d0c,"strcoat.cth");
  *(uint *)(unaff_EBX + 0x258d8) = 0;
  return;
}
