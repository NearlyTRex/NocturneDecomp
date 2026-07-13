// Name: FUN_00541a40
// Address: 00541a40
// Address Range: [[00541a40, 00541ccb]]
// Convention: unknown
// Signature: void FUN_00541a40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00541a40(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  if (*(int *)(0x01C775EC + 0x18) == 0) {
    pcVar4 = "svetlanax.dfm";
  }
  else {
    pcVar4 = "svetlana.dfm";
  }
  FUN_0051e0c0(param_1 + 0x150,pcVar4);
  FUN_004b48d0(param_1);
  iVar1 = param_1 + 0x150;
  uVar2 = FUN_0051e0a0(iVar1);
  _DAT_02dca058 = FUN_005179d0(uVar2,"Bip01 head",1);
  _DAT_02dca05c = FUN_005179d0(uVar2,"Bip01 L Clavicle",1);
  _DAT_02dca060 = FUN_005179d0(uVar2,"Bip01 R Clavicle",1);
  _DAT_02dca064 = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_02dca068 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_02dca06c = FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  _DAT_02dca070 = FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_02dca074 = FUN_005179d0(uVar2,"Bip01 L Foot",1);
  _DAT_02dca078 = FUN_005179d0(uVar2,"Bip01 R Foot",1);
  _DAT_02dca07c = FUN_005179d0(uVar2,"Bip01 L Thigh",1);
  _DAT_02dca080 = FUN_005179d0(uVar2,"Bip01 R Thigh",1);
  _DAT_02dca084 = FUN_005179d0(uVar2,"Bip01 L Calf",1);
  _DAT_02dca088 = FUN_005179d0(uVar2,"Bip01 R Calf",1);
  _DAT_02dca08c = FUN_005179d0(uVar2,"Bip01 L Hand",1);
  _DAT_02dca090 = FUN_005179d0(uVar2,"Bip01 R Hand",1);
  _DAT_02dca094 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  _DAT_02dca098 = FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_02dca09c = FUN_005179d0(uVar2,"Bipblade01",1);
  _DAT_02dca0a0 = FUN_005179d0(uVar2,"BipR14",1);
  iVar5 = param_1 + 0x1fa44;
  *(uint *)(param_1 + 0x1fa3c) = 0;
  FUN_00435240(iVar5,"svetcape.cth",iVar5);
  FUN_004359e0(iVar5,param_1 + 0x20,param_1 + 0x30,iVar1);
  iVar5 = param_1 + 0x5a574;
  FUN_00435240(iVar5,"svethair.cth",iVar5);
  FUN_004359e0(iVar5,param_1 + 0x20,param_1 + 0x30,iVar1);
  uVar2 = FUN_0051e020(iVar1);
  uVar3 = FUN_00519b30(uVar2,"lblade01",1);
  *(uint *)(param_1 + 0x950b8) = uVar3;
  uVar2 = FUN_00519b30(uVar2,"rblade02",1);
  *(uint *)(param_1 + 0x950a4) = 0;
  *(uint *)(param_1 + 0x950bc) = uVar2;
  return;
}
