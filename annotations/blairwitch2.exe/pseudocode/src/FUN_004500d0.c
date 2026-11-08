// Name: FUN_004500d0
// Address: 004500d0
// Address Range: [[004500d0, 0045019e]]
// Convention: unknown
// Signature: int FUN_004500d0(undefined4 param_1)

#include "nocturne.h"

int FUN_004500d0(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint auStack_34 [3];
  uint auStack_28 [3];
  uint auStack_1c [3];
  
  iVar3 = FUN_004ce240(param_1);
  iVar4 = FUN_0041bd30(iVar3 + 0x259b4);
  iVar3 = iVar4 + -0x259b4;
  *(byte **)(iVar4 + -0x25704) = &DAT_005f5174;
  *(uint *)(iVar4 + -0x208) = 0;
  *(uint *)(iVar4 + -0x374) = 0;
  *(uint *)(iVar4 + -0x370) = 0;
  *(uint *)(iVar4 + -0x36c) = 0;
  *(uint *)(iVar4 + -0x368) = 0xbf060a92;
  *(uint *)(iVar4 + -0x348) = 0;
  *(uint *)(iVar4 + -0x350) = 0;
  *(uint *)(iVar4 + -0x358) = 0;
  *(uint *)(iVar4 + -0x360) = 0;
  *(uint *)(iVar4 + -0x34c) = 0;
  *(uint *)(iVar4 + -0x344) = 0;
  *(uint *)(iVar4 + -0x328) = 0;
  *(uint *)(iVar4 + -0x330) = 0;
  *(uint *)(iVar4 + -0x338) = 0;
  *(uint *)(iVar4 + -0x340) = 0;
  *(uint *)(iVar4 + -0x32c) = 0;
  *(uint *)(iVar4 + -0x324) = 0;
  *(uint *)(iVar4 + -0x2c0) = 0;
  *(uint *)(iVar4 + -800) = 0;
  *(uint *)(iVar4 + -0x318) = 0;
  *(uint *)(iVar4 + -0x30c) = 0;
  *(uint *)(iVar4 + -0x308) = 0;
  uVar2 = 0x41200000;
  *(uint *)(iVar4 + -0x29c) = 0xf149f2ca;
  *(uint *)(iVar4 + -0x364) = uVar2;
  *(uint *)(iVar4 + -0x2b4) = 0xf149f2ca;
  *(uint *)(iVar4 + -4) = 0;
  *(uint *)(iVar4 + -0x354) = *(uint *)(iVar4 + -0x358);
  *(uint *)(iVar4 + -0x35c) = *(uint *)(iVar4 + -0x360);
  *(uint *)(iVar4 + -0x334) = *(uint *)(iVar4 + -0x338);
  *(uint *)(iVar4 + -0x33c) = *(uint *)(iVar4 + -0x340);
  FUN_005478b0(iVar4 + -0x25700,0x5cfb87);
  FUN_00547480(iVar4 + -0x25700);
  *(uint *)(iVar4 + -0x22cb0) = 0;
  *(uint *)(iVar4 + -0x31c) = 0;
  *(uint *)(iVar4 + -0x2fc) = 0;
  *(uint *)(iVar4 + -0x2f8) = 0;
  *(uint *)(iVar4 + -0x2cc) = 0;
  *(uint *)(iVar4 + -0x2d0) = *(uint *)(iVar4 + -0x2cc);
  *(uint *)(iVar4 + -0x2d4) = *(uint *)(iVar4 + -0x2d0);
  *(uint *)(iVar4 + -0x2c8) = 0xffffffff;
  *(uint *)(iVar4 + -0x314) = 0;
  *(uint *)(iVar4 + -0x2f4) = 0;
  *(uint *)(iVar4 + -0x2f0) = 0;
  *(uint *)(iVar4 + -0x310) = 0;
  *(uint *)(iVar4 + -0x2c4) = 0;
  *(uint *)(iVar4 + -700) = 0;
  FUN_0042a330(iVar3,0,1,"draw_L_standholster",0);
  FUN_0042a330(iVar3,1,2,"draw_L_holsterAim",0);
  FUN_0042a330(iVar3,0,5,"draw_R_standScabbard",0);
  FUN_0042a330(iVar3,5,6,"draw_R_scabbardMelee",0);
  FUN_0042a330(iVar3,0xd,6,"draw_R_meleeAttack1",1);
  FUN_0042a330(iVar3,0xd,6,"draw_R_meleeAttack2",1);
  FUN_0042a330(iVar3,0xd,6,"draw_R_meleeAttack4",1);
  FUN_0042a330(iVar3,0xd,6,"draw_LR_meleeAttack3",1);
  FUN_0042a330(iVar3,0xd,6,"draw_R_crossAttack1",1);
  FUN_0042a330(iVar3,7,7,"draw_holdCrate",0);
  FUN_0042a330(iVar3,0,3,"draw_stand2coatPocket",0);
  FUN_0042a330(iVar3,1,3,"draw_holsters2CoatPocket",0);
  FUN_0042a330(iVar3,0,4,"draw_stand2TossAim",1);
  FUN_0042a330(iVar3,4,0,"draw_tossAim2Stand",1);
  FUN_0042a330(iVar3,1,0x10,"draw_holsters2aimFlashlight",0);
  FUN_0042a330(iVar3,0x12,2,"draw_L_reload",1);
  FUN_005b15c0(iVar4 + -0x22ca8,"LAZ86CLOTH.cth");
  *(uint *)(iVar4 + -0x20c) = 0;
  *(uint *)(iVar4 + -0x25c) = 0;
  *(uint *)(iVar4 + -0x228) = 0;
  *(uint *)(iVar4 + -4) = 0;
  pcVar5 = (char *)(iVar4 + -0x234a0);
  pcVar6 = (char *)(iVar4 + -0x204);
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = (char *)(iVar4 + -0x22ca4);
  pcVar6 = (char *)(iVar4 + -0x104);
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + -0x258b8) = 1;
  *(uint *)(iVar4 + -0x14f8c) = 0;
  if ((uint *)(iVar4 + -0x14fa8) != auStack_34) {
    *(uint *)(iVar4 + -0x14fa8) = 0xbde76c8b;
    *(uint *)(iVar4 + -0x14fa4) = 0x3ec3126f;
    *(uint *)(iVar4 + -0x14fa0) = 0x3e79db23;
  }
  if ((uint *)(iVar4 + -0x14f9c) != auStack_1c) {
    *(uint *)(iVar4 + -0x14f9c) = 0x3de76c8b;
    *(uint *)(iVar4 + -0x14f98) = 0x3ec3126f;
    *(uint *)(iVar4 + -0x14f94) = 0x3e79db23;
  }
  if ((uint *)(iVar4 + -0x14f78) == auStack_28) {
    return iVar3;
  }
  *(uint *)(iVar4 + -0x14f78) = 0x3f000000;
  *(uint *)(iVar4 + -0x14f74) = 0;
  *(uint *)(iVar4 + -0x14f70) = 0;
  return iVar3;
}
