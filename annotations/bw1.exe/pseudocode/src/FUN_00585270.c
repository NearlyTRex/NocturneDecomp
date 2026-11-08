// Name: FUN_00585270
// Address: 00585270
// Address Range: [[00585270, 00585661]]
// Convention: unknown
// Signature: int FUN_00585270(undefined4 param_1)

#include "nocturne.h"

int FUN_00585270(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004ea830(param_1);
  iVar3 = FUN_00468860(iVar2 + 0x200ac);
  iVar2 = iVar3 + -0x200ac;
  *(byte ***)(iVar3 + -0x1ff58) = &PTR_FUN_006060c4;
  *(uint *)(iVar3 + -0x100) = 0;
  *(uint *)(iVar3 + -0xfc) = 0;
  *(uint *)(iVar3 + -0xf8) = 0;
  *(uint *)(iVar3 + -0xf4) = 0xbf060a92;
  *(uint *)(iVar3 + -0xd4) = 0;
  *(uint *)(iVar3 + -0xdc) = 0;
  *(uint *)(iVar3 + -0xe4) = 0;
  *(uint *)(iVar3 + -0xec) = 0;
  *(uint *)(iVar3 + -0xd8) = 0;
  *(uint *)(iVar3 + -0xd0) = 0;
  *(uint *)(iVar3 + -0xb4) = 0;
  *(uint *)(iVar3 + -0xbc) = 0;
  *(uint *)(iVar3 + -0xc4) = 0;
  *(uint *)(iVar3 + -0xcc) = 0;
  *(uint *)(iVar3 + -0xb8) = 0;
  *(uint *)(iVar3 + -0xb0) = 0;
  *(uint *)(iVar3 + -0x4c) = 0;
  *(uint *)(iVar3 + -0xac) = 0;
  *(uint *)(iVar3 + -0xa4) = 0;
  *(uint *)(iVar3 + -0x9c) = 0;
  *(uint *)(iVar3 + -0x98) = 0;
  uVar1 = 0x41200000;
  *(uint *)(iVar3 + -0x94) = 0;
  *(uint *)(iVar3 + -0xf0) = uVar1;
  *(uint *)(iVar3 + -0x28) = 0xf149f2ca;
  *(uint *)(iVar3 + -0x40) = 0xf149f2ca;
  *(uint *)(iVar3 + -0xe0) = *(uint *)(iVar3 + -0xe4);
  *(uint *)(iVar3 + -0xe8) = *(uint *)(iVar3 + -0xec);
  *(uint *)(iVar3 + -0xc0) = *(uint *)(iVar3 + -0xc4);
  *(uint *)(iVar3 + -200) = *(uint *)(iVar3 + -0xcc);
  FUN_00569f50(iVar3 + -0x1ff54,"p?stranger.dfm" + 2);
  *(uint *)(iVar3 + -0x1d414) = 0;
  *(uint *)(iVar3 + -0xa8) = 0;
  *(uint *)(iVar3 + -0x88) = 0;
  *(uint *)(iVar3 + -0x84) = 0;
  *(uint *)(iVar3 + -0x58) = 0;
  *(uint *)(iVar3 + -0x5c) = *(uint *)(iVar3 + -0x58);
  *(uint *)(iVar3 + -0x60) = *(uint *)(iVar3 + -0x5c);
  *(uint *)(iVar3 + -0x54) = 0xffffffff;
  *(uint *)(iVar3 + -0xa0) = 0;
  *(uint *)(iVar3 + -0x80) = 0;
  *(uint *)(iVar3 + -0x7c) = 0;
  *(uint *)(iVar3 + -0x150) = 0;
  *(uint *)(iVar3 + -0x50) = 0;
  *(uint *)(iVar3 + -0x48) = 0;
  FUN_00468950(*(int *)(iVar3 + -0x28c) + 0x158,0x5f63ce);
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
  FUN_00441de0(iVar3 + -0x1d40c,"strcoat.cth");
  *(uint *)(iVar3 + 0x194) = 0;
  return iVar2;
}
