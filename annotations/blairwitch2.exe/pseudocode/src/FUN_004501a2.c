// Name: FUN_004501a2
// Address: 004501a2
// Address Range: [[004501a2, 00450578]]
// Convention: unknown
// Signature: void FUN_004501a2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

void FUN_004501a2(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  char cVar2;
  char *in_EAX;
  int unaff_EBX;
  char *pcVar3;
  char *pcVar4;
  
  cVar2 = (char)in_EAX + *in_EAX;
  pcVar3 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *(uint *)(unaff_EBX + 0x256f4) = 0;
  *(uint *)(unaff_EBX + 0x25694) = 0;
  *(uint *)(unaff_EBX + 0x2569c) = 0;
  *(uint *)(unaff_EBX + 0x256a8) = 0;
  *(uint *)(unaff_EBX + 0x256ac) = 0;
  uVar1 = 0x41200000;
  *(uint *)(unaff_EBX + 0x25718) = 0xf149f2ca;
  *(uint *)(unaff_EBX + 0x25650) = uVar1;
  *(uint *)(unaff_EBX + 0x25700) = 0xf149f2ca;
  *(uint *)(unaff_EBX + 0x259b0) = 0;
  *(uint *)(unaff_EBX + 0x25660) = *(uint *)(unaff_EBX + 0x2565c);
  *(uint *)(unaff_EBX + 0x25658) = *(uint *)(unaff_EBX + 0x25654);
  *(uint *)(unaff_EBX + 0x25680) = *(uint *)(unaff_EBX + 0x2567c);
  *(uint *)(unaff_EBX + 0x25678) = *(uint *)(unaff_EBX + 0x25674);
  FUN_005478b0(unaff_EBX + 0x2b4,0x5cfb87);
  FUN_00547480(unaff_EBX + 0x2b4);
  *(uint *)(unaff_EBX + 0x2d04) = 0;
  *(uint *)(unaff_EBX + 0x25698) = 0;
  *(uint *)(unaff_EBX + 0x256b8) = 0;
  *(uint *)(unaff_EBX + 0x256bc) = 0;
  *(uint *)(unaff_EBX + 0x256e8) = 0;
  *(uint *)(unaff_EBX + 0x256e4) = *(uint *)(unaff_EBX + 0x256e8);
  *(uint *)(unaff_EBX + 0x256e0) = *(uint *)(unaff_EBX + 0x256e4);
  *(uint *)(unaff_EBX + 0x256ec) = 0xffffffff;
  *(uint *)(unaff_EBX + 0x256a0) = 0;
  *(uint *)(unaff_EBX + 0x256c0) = 0;
  *(uint *)(unaff_EBX + 0x256c4) = 0;
  *(uint *)(unaff_EBX + 0x256a4) = 0;
  *(uint *)(unaff_EBX + 0x256f0) = 0;
  *(uint *)(unaff_EBX + 0x256f8) = 0;
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
  FUN_005b15c0(unaff_EBX + 0x2d0c,"LAZ86CLOTH.cth");
  *(uint *)(unaff_EBX + 0x257a8) = 0;
  *(uint *)(unaff_EBX + 0x25758) = 0;
  *(uint *)(unaff_EBX + 0x2578c) = 0;
  *(uint *)(unaff_EBX + 0x259b0) = 0;
  pcVar3 = (char *)(unaff_EBX + 0x2514);
  pcVar4 = (char *)(unaff_EBX + 0x257b0);
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  pcVar3 = (char *)(unaff_EBX + 0x2d10);
  pcVar4 = (char *)(unaff_EBX + 0x258b0);
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  *(uint *)(unaff_EBX + 0xfc) = 1;
  *(uint *)(unaff_EBX + 0x10a28) = 0;
  if ((uint *)(unaff_EBX + 0x10a0c) != (uint *)&stack0x00000000) {
    *(uint *)(unaff_EBX + 0x10a0c) = 0xbde76c8b;
    *(uint *)(unaff_EBX + 0x10a10) = 0x3ec3126f;
    *(uint *)(unaff_EBX + 0x10a14) = 0x3e79db23;
  }
  if ((uint *)(unaff_EBX + 0x10a18) != &param_6) {
    *(uint *)(unaff_EBX + 0x10a18) = 0x3de76c8b;
    *(uint *)(unaff_EBX + 0x10a1c) = 0x3ec3126f;
    *(uint *)(unaff_EBX + 0x10a20) = 0x3e79db23;
  }
  if ((uint *)(unaff_EBX + 0x10a3c) == &param_3) {
    return;
  }
  *(uint *)(unaff_EBX + 0x10a3c) = 0x3f000000;
  *(uint *)(unaff_EBX + 0x10a40) = 0;
  *(uint *)(unaff_EBX + 0x10a44) = 0;
  return;
}
