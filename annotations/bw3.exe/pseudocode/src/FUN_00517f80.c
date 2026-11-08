// Name: FUN_00517f80
// Address: 00517f80
// Address Range: [[00517f80, 0051842c]]
// Convention: unknown
// Signature: int FUN_00517f80(undefined4 param_1)

#include "nocturne.h"

int FUN_00517f80(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_004d24b0(param_1);
  *(byte ***)(iVar2 + 0x154) = &PTR_FUN_005e3534;
  FUN_00518430(iVar2);
  *(uint *)(iVar2 + 0x20bcc) = 0;
  *(uint *)(iVar2 + 0x20bd0) = 0;
  *(uint *)(iVar2 + 0x20bd4) = 0;
  *(uint *)(iVar2 + 0x20bd8) = 0xbf060a92;
  *(uint *)(iVar2 + 0x20bf8) = 0;
  *(uint *)(iVar2 + 0x20bf0) = 0;
  *(uint *)(iVar2 + 0x20be8) = 0;
  *(uint *)(iVar2 + 0x20be0) = 0;
  *(uint *)(iVar2 + 0x20bf4) = 0;
  *(uint *)(iVar2 + 0x20bfc) = 0;
  *(uint *)(iVar2 + 0x20c18) = 0;
  *(uint *)(iVar2 + 0x20c10) = 0;
  *(uint *)(iVar2 + 0x20c08) = 0;
  *(uint *)(iVar2 + 0x20c00) = 0;
  *(uint *)(iVar2 + 0x20c14) = 0;
  *(uint *)(iVar2 + 0x20c1c) = 0;
  *(uint *)(iVar2 + 0x20c80) = 0;
  *(uint *)(iVar2 + 0x20c20) = 0;
  *(uint *)(iVar2 + 0x20c28) = 0;
  *(uint *)(iVar2 + 0x20c30) = 0;
  *(uint *)(iVar2 + 0x20c34) = 0;
  uVar1 = 0x41200000;
  *(uint *)(iVar2 + 0x20ca4) = 0xf149f2ca;
  *(uint *)(iVar2 + 0x20c8c) = 0xf149f2ca;
  *(uint *)(iVar2 + 0x20bdc) = uVar1;
  *(uint *)(iVar2 + 0x20bec) = *(uint *)(iVar2 + 0x20be8);
  *(uint *)(iVar2 + 0x20be4) = *(uint *)(iVar2 + 0x20be0);
  *(uint *)(iVar2 + 0x20c0c) = *(uint *)(iVar2 + 0x20c08);
  *(uint *)(iVar2 + 0x20c04) = *(uint *)(iVar2 + 0x20c00);
  FUN_0054eae0(iVar2 + 0x158,0x5cca9f);
  *(uint *)(iVar2 + 0x2f00) = 0;
  *(uint *)(iVar2 + 0x20c24) = 0;
  *(uint *)(iVar2 + 0x20c44) = 0;
  *(uint *)(iVar2 + 0x20c48) = 0;
  *(uint *)(iVar2 + 0x20c74) = 0;
  *(uint *)(iVar2 + 0x20c70) = *(uint *)(iVar2 + 0x20c74);
  *(uint *)(iVar2 + 0x20c6c) = *(uint *)(iVar2 + 0x20c70);
  *(uint *)(iVar2 + 0x20c78) = 0xffffffff;
  *(uint *)(iVar2 + 0x20c2c) = 0;
  *(uint *)(iVar2 + 0x20c4c) = 0;
  *(uint *)(iVar2 + 0x20c50) = 0;
  *(uint *)(iVar2 + 0x20b64) = 0;
  *(uint *)(iVar2 + 0x20c7c) = 0;
  *(uint *)(iVar2 + 0x20c84) = 0;
  *(uint *)(iVar2 + 0x20b60) = 0;
  *(uint *)(iVar2 + 0x27c0) = 1;
  FUN_004337e0(iVar2,0,1,"draw_stand2holsters",0);
  FUN_004337e0(iVar2,1,2,"draw_holsters2aimPistols",0);
  FUN_004337e0(iVar2,0,3,"draw_stand2coatPocket",0);
  FUN_004337e0(iVar2,3,4,"draw_coatPocket2aimShotgun",0);
  FUN_004337e0(iVar2,3,5,"draw_coatPocket2aimFlameThrower",0);
  FUN_004337e0(iVar2,1,3,"draw_holsters2CoatPocket",0);
  FUN_004337e0(iVar2,0,6,"draw_stand2TossAim",1);
  FUN_004337e0(iVar2,6,0,"draw_tossAim2Stand",1);
  FUN_004337e0(iVar2,0xc,4,"draw_shotGunRecoil",1);
  FUN_004337e0(iVar2,3,7,"draw_coatPocket2aimTommy",0);
  FUN_004337e0(iVar2,7,7,"draw_tommyRecoil",0);
  FUN_004337e0(iVar2,0,8,"draw_meleeStand",0);
  FUN_004337e0(iVar2,0xd,8,"draw_spearStab",1);
  FUN_004337e0(iVar2,0xd,8,0x5ccbc6,1);
  FUN_004337e0(iVar2,0xd,8,0x5ccbcd,1);
  FUN_004337e0(iVar2,0xd,8,0x5ccbd4,1);
  FUN_004337e0(iVar2,0xd,8,"draw_spearOverheadswing",1);
  FUN_004337e0(iVar2,9,9,"draw_holdCrate",0);
  FUN_004337e0(iVar2,3,10,"draw_coatPocket2GasMask",0);
  FUN_004337e0(iVar2,10,0,"draw_gasMask2Stand",0);
  FUN_004337e0(iVar2,3,0xe,"draw_coatPocket2aimRifle",0);
  FUN_004337e0(iVar2,0xf,0xe,"draw_cockRifle",0);
  FUN_004337e0(iVar2,1,0x10,"draw_holsters2aimFlashlight",0);
  FUN_004337e0(iVar2,3,0xb,"draw_coatPocket2Goggles",0);
  FUN_004337e0(iVar2,0xb,0,"draw_goggles2Stand",0);
  FUN_004337e0(iVar2,2,2,"draw_firePistol",1);
  FUN_004337e0(iVar2,2,2,"draw_firePistol",0xffffffff);
  FUN_004337e0(iVar2,8,8,"draw_fireStaffAttack",1);
  FUN_004337e0(iVar2,8,8,"draw_lightningStaffAttack",1);
  FUN_004337e0(iVar2,0,0x11,"draw_stand2vile",0);
  FUN_004337e0(iVar2,0,0x12,"draw_healStick",0);
  FUN_004337e0(iVar2,0x11,0x11,"draw_vileThrow",1);
  FUN_004337e0(iVar2,0x12,0x12,"heal_shake",1);
  FUN_0043fa40(iVar2 + 0x2f08,0x5ccd24);
  *(uint *)(iVar2 + 0x20d00) = 0;
  return iVar2;
}
