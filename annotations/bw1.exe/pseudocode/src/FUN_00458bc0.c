// Name: FUN_00458bc0
// Address: 00458bc0
// Address Range: [[00458bc0, 00459037]]
// Convention: unknown
// Signature: void FUN_00458bc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00458bc0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  FUN_00569b20(param_1 + 0x158);
  iVar2 = FUN_004a6c30(0x01C51D80,"COMBATMODEHARD");
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0xc368) = 0x3f400000;
  }
  else {
    *(uint *)(param_1 + 0xc368) = 0x3f800000;
  }
  uVar3 = FUN_00569f30(param_1 + 0x158);
  uVar4 = FUN_005634f0(uVar3,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc2fc) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 L ForeArm",1);
  *(uint *)(param_1 + 0xc308) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 R ForeArm",1);
  *(uint *)(param_1 + 0xc30c) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 L UpperArm",1);
  *(uint *)(param_1 + 0xc310) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 R UpperArm",1);
  *(uint *)(param_1 + 0xc314) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 L Foot",1);
  *(uint *)(param_1 + 0xc318) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 R Foot",1);
  *(uint *)(param_1 + 0xc31c) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0xc300) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0xc304) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 Spine",1);
  *(uint *)(param_1 + 0xc320) = uVar4;
  uVar3 = FUN_005634f0(uVar3,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xc324) = uVar3;
  uVar3 = FUN_00569eb0(param_1 + 0x158);
  uVar4 = FUN_00565780(uVar3,&DAT_005d7e0e,1);
  *(uint *)(param_1 + 0xc328) = uVar4;
  uVar4 = FUN_00565780(uVar3,"l4arm",1);
  *(uint *)(param_1 + 0xc32c) = uVar4;
  uVar4 = FUN_00565780(uVar3,&DAT_005d7e19,1);
  *(uint *)(param_1 + 0xc330) = uVar4;
  iVar2 = FUN_00565780(uVar3,"r4arm",0);
  *(int *)(param_1 + 0xc334) = iVar2;
  if (iVar2 < 0) {
    *(uint *)(param_1 + 0xc334) = 0x3b;
  }
  uVar4 = FUN_00565780(uVar3,"waist",0);
  *(uint *)(param_1 + 0xc338) = uVar4;
  uVar4 = FUN_00565780(uVar3,"torso",1);
  *(uint *)(param_1 + 0xc33c) = uVar4;
  uVar3 = FUN_00565780(uVar3,&DAT_005d7e30,1);
  *(uint *)(param_1 + 0x2384) = 0;
  *(uint *)(param_1 + 0xc340) = uVar3;
  *(uint *)(param_1 + 0x25a8) = *(uint *)(param_1 + 0xc300);
  *(uint *)(param_1 + 0x25ac) = *(uint *)(param_1 + 0xc32c);
  *(uint *)(param_1 + 0x2620) = *(uint *)(param_1 + 0xc304);
  *(uint *)(param_1 + 0x2624) = *(uint *)(param_1 + 0xc334);
  FUN_004a0510(param_1);
  *(uint *)(param_1 + 0xfc) = (uint)(*(int *)(param_1 + 0xc2ec) != 0);
  uVar3 = FUN_0040cc00(0,0x3f800000);
  *(uint *)(param_1 + 0xc35c) = uVar3;
  if ((-1 < *(int *)(param_1 + 0xc338)) && (*(float *)(param_1 + 0x3000) < 0.0)) {
    *(float *)(param_1 + 0x3000) = *(float *)(param_1 + 0x2490) + (float)_DAT_005d7ef3;
  }
  iVar2 = param_1 + 0x24a8;
  *(uint *)(param_1 + 0xc348) = 0;
  iVar5 = FUN_005c04e0(iVar2,"d_cooper.dfm");
  pcVar7 = (char *)(param_1 + 0xc36c);
  if (iVar5 == 0) {
    pcVar6 = &DAT_005d7e42;
  }
  else {
    iVar5 = FUN_005c04e0(iVar2,"d_deputy.dfm");
    if (iVar5 == 0) {
      pcVar6 = &DAT_005d7e52;
    }
    else {
      iVar5 = FUN_005c04e0(iVar2,"d_editor.dfm");
      if (iVar5 == 0) {
        pcVar6 = &DAT_005d7e62;
      }
      else {
        iVar5 = FUN_005c04e0(iVar2,"d_gretchen.dfm");
        if (iVar5 == 0) {
          pcVar6 = &DAT_005d7e74;
        }
        else {
          iVar5 = FUN_005c04e0(iVar2,"d_innkeeper.dfm");
          if (iVar5 == 0) {
            pcVar6 = &DAT_005d7e87;
          }
          else {
            iVar5 = FUN_005c04e0(iVar2,"d_librarian.dfm");
            if (iVar5 == 0) {
              pcVar6 = &DAT_005d7e9a;
            }
            else {
              iVar5 = FUN_005c04e0(iVar2,"d_marm.dfm");
              if (iVar5 == 0) {
                pcVar6 = &DAT_005d7ea8;
              }
              else {
                iVar5 = FUN_005c04e0(iVar2,"d_mrsbrody.dfm");
                if (iVar5 == 0) {
                  pcVar6 = &DAT_005d7eba;
                }
                else {
                  iVar5 = FUN_005c04e0(iVar2,"d_pastor.dfm");
                  if (iVar5 == 0) {
                    pcVar6 = &DAT_005d7eca;
                  }
                  else {
                    iVar5 = FUN_005c04e0(iVar2,"d_sheriff.dfm");
                    if (iVar5 == 0) {
                      pcVar6 = &DAT_005d7edb;
                    }
                    else {
                      iVar2 = FUN_005c04e0(iVar2,"d_shopkeep.dfm");
                      if (iVar2 == 0) {
                        pcVar6 = &DAT_005d7eed;
                      }
                      else {
                        pcVar6 = &DAT_005d7ef0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 50000) = 0;
  *(uint *)(param_1 + 0xc354) = 0;
  *(uint *)(param_1 + 0xc358) = 0;
  *(uint *)(param_1 + 0xc364) = 0;
  *(uint *)(param_1 + 0xc34c) = 0;
  return;
}
