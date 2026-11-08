// Name: FUN_00468c80
// Address: 00468c80
// Address Range: [[00468c80, 00469052]]
// Convention: unknown
// Signature: int FUN_00468c80(undefined4 param_1)

#include "nocturne.h"

int FUN_00468c80(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_004ea830(param_1);
  *(byte ***)(iVar2 + 0x154) = &PTR_FUN_005fece4;
  *(uint *)(iVar2 + 0x1ffac) = 0;
  *(uint *)(iVar2 + 0x1ffb0) = 0;
  *(uint *)(iVar2 + 0x1ffb4) = 0;
  *(uint *)(iVar2 + 0x1ffb8) = 0xbf060a92;
  *(uint *)(iVar2 + 0x1ffd8) = 0;
  *(uint *)(iVar2 + 0x1ffd0) = 0;
  *(uint *)(iVar2 + 0x1ffc8) = 0;
  *(uint *)(iVar2 + 0x1ffcc) = *(uint *)(iVar2 + 0x1ffc8);
  *(uint *)(iVar2 + 0x1ffc0) = 0;
  *(uint *)(iVar2 + 0x1ffd4) = 0;
  *(uint *)(iVar2 + 0x1ffdc) = 0;
  *(uint *)(iVar2 + 0x1fff8) = 0;
  *(uint *)(iVar2 + 0x1fff0) = 0;
  *(uint *)(iVar2 + 0x1ffe8) = 0;
  *(uint *)(iVar2 + 0x1ffc4) = *(uint *)(iVar2 + 0x1ffc0);
  *(uint *)(iVar2 + 0x1ffe0) = 0;
  *(uint *)(iVar2 + 0x1ffec) = *(uint *)(iVar2 + 0x1ffe8);
  *(uint *)(iVar2 + 0x1fff4) = 0;
  *(uint *)(iVar2 + 0x1fffc) = 0;
  *(uint *)(iVar2 + 0x20060) = 0;
  *(uint *)(iVar2 + 0x20000) = 0;
  *(uint *)(iVar2 + 0x20008) = 0;
  *(uint *)(iVar2 + 0x20010) = 0;
  *(uint *)(iVar2 + 0x20014) = 0;
  uVar1 = 0x41200000;
  *(uint *)(iVar2 + 0x20084) = 0xf149f2ca;
  *(uint *)(iVar2 + 0x1ffe4) = *(uint *)(iVar2 + 0x1ffe0);
  *(uint *)(iVar2 + 0x1ffbc) = uVar1;
  *(uint *)(iVar2 + 0x2006c) = 0xf149f2ca;
  FUN_00569f50(iVar2 + 0x158,0x5d98a4);
  *(uint *)(iVar2 + 0x2c98) = 0;
  *(uint *)(iVar2 + 0x20004) = 0;
  *(uint *)(iVar2 + 0x20024) = 0;
  *(uint *)(iVar2 + 0x20028) = 0;
  *(uint *)(iVar2 + 0x20054) = 0;
  *(uint *)(iVar2 + 0x20050) = *(uint *)(iVar2 + 0x20054);
  *(uint *)(iVar2 + 0x2004c) = *(uint *)(iVar2 + 0x20050);
  *(uint *)(iVar2 + 0x20058) = 0xffffffff;
  *(uint *)(iVar2 + 0x2000c) = 0;
  *(uint *)(iVar2 + 0x2002c) = 0;
  *(uint *)(iVar2 + 0x20030) = 0;
  *(uint *)(iVar2 + 0x1ff5c) = 0;
  *(uint *)(iVar2 + 0x2005c) = 0;
  *(uint *)(iVar2 + 0x20064) = 0;
  FUN_00468950(*(int *)(iVar2 + 0x1fe20) + 0x158,"liteluger.kfm");
  FUN_00434320(iVar2,0,1,"draw_stand2holsters",0);
  FUN_00434320(iVar2,1,2,"draw_holsters2aimPistols",0);
  FUN_00434320(iVar2,0,3,"draw_stand2coatPocket",0);
  FUN_00434320(iVar2,3,4,"draw_coatPocket2aimShotgun",0);
  FUN_00434320(iVar2,3,5,"draw_coatPocket2aimFlameThrower",0);
  FUN_00434320(iVar2,1,3,"draw_holsters2CoatPocket",0);
  FUN_00434320(iVar2,0,6,"draw_stand2TossAim",1);
  FUN_00434320(iVar2,6,0,"draw_tossAim2Stand",1);
  FUN_00434320(iVar2,0xc,4,"draw_shotGunRecoil",1);
  FUN_00434320(iVar2,3,7,"draw_coatPocket2aimTommy",0);
  FUN_00434320(iVar2,7,7,"draw_tommyRecoil",0);
  FUN_00434320(iVar2,0,8,"draw_stand2spearhold",0);
  FUN_00434320(iVar2,0xd,8,"draw_spearStab",1);
  FUN_00434320(iVar2,0xd,8,"draw_spearOverheadswing",1);
  FUN_00434320(iVar2,9,9,"draw_holdCrate",0);
  FUN_00434320(iVar2,3,10,"draw_coatPocket2GasMask",0);
  FUN_00434320(iVar2,10,0,"draw_gasMask2Stand",0);
  FUN_00434320(iVar2,3,0xe,"draw_coatPocket2aimRifle",0);
  FUN_00434320(iVar2,0xf,0xe,"draw_cockRifle",0);
  FUN_00434320(iVar2,1,0x10,"draw_holsters2aimFlashlight",0);
  FUN_00434320(iVar2,3,0xb,"draw_coatPocket2Goggles",0);
  FUN_00434320(iVar2,0xb,0,"draw_goggles2Stand",0);
  FUN_00441de0(iVar2 + 0x2ca0,"doc-coat_bw.cth");
  *(uint *)(iVar2 + 0x200e0) = 0;
  return iVar2;
}
