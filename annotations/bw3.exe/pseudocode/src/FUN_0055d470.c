// Name: FUN_0055d470
// Address: 0055d470
// Address Range: [[0055d470, 0055d69b]]
// Convention: unknown
// Signature: undefined1 * FUN_0055d470(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0055d470(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *puVar3;
  int iStack_794;
  byte *puStack_790;
  byte *puStack_78c;
  byte auStack_604 [400];
  byte auStack_474 [400];
  byte auStack_2e4 [412];
  byte local_148 [268];
  uint uStack_3c;
  uint uStack_38;
  
  puStack_78c = &DAT_02cf5468;
  puStack_790 = (byte *)0x55d48a;
  iVar1 = FUN_0055ac00();
  if (iVar1 != 0) {
    puStack_78c = local_148;
    puStack_790 = (byte *)param_1;
    iStack_794 = 0x55d4a9;
    iVar1 = FUN_0055d3c0();
    if (iVar1 != 0) {
      iStack_794 = 0;
      if (*(int *)(param_1 * 0x11c + 0x2cf3c74) == 0) {
        iStack_794 = param_1 * 0x11c + 0x2cf3c78;
      }
      puStack_78c = (byte *)0x0;
      puStack_790 = &DAT_02cf49c4;
      iVar1 = Ordinal_1();
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*_DAT_02cf49c4 + 0x18))(_DAT_02cf49c4,_DAT_02d21b78,2);
        if (iVar1 == 0) {
          FUN_005a28f0(&uStack_3c,0,0x24);
          uStack_3c = 0x24;
          uStack_38 = 0x11;
          iVar1 = (**(code **)(*_DAT_02cf49c4 + 0xc))(_DAT_02cf49c4,&uStack_3c,&DAT_02cf49c8,0);
          if (iVar1 != 0) {
            uVar2 = FUN_0055a670(iVar1);
            FUN_005a28c0(&iStack_794,"DirectSux: Unable to %s.  (%s)",
                         "Create the primary buffer",uVar2);
            FUN_0055a560(&iStack_794);
            uStack_38 = uStack_38 & 0xffffffef;
            iVar1 = (**(code **)(*_DAT_02cf49c4 + 0xc))(_DAT_02cf49c4,&uStack_3c,&DAT_02cf49c8,0);
            if (iVar1 != 0) {
              uVar2 = FUN_0055a670(iVar1);
              FUN_005a28c0(auStack_474,"DirectSux: Unable to %s.  (%s)",
                           "Create the primary buffer",uVar2);
              puVar3 = auStack_474;
              goto LAB_0055d511;
            }
          }
          iVar1 = FUN_005586e0();
          if ((1 < iVar1) && (1 < *(int *)(param_1 * 0x11c + 0x2cf3d8c))) {
            (**(code **)*_DAT_02cf49c8)(_DAT_02cf49c8,&DAT_00608bc8,&DAT_02cf49d0);
          }
          return &DAT_02cf5468;
        }
        uVar2 = FUN_0055a670(iVar1);
        FUN_005a28c0(auStack_2e4,"DirectSux: Unable to %s.  (%s)","Set cooperative level"
                     ,uVar2);
        puVar3 = auStack_2e4;
      }
      else {
        uVar2 = FUN_0055a670(iVar1);
        FUN_005a28c0(auStack_604,"DirectSux: Unable to %s.  (%s)",
                     "create DirectSound object",uVar2);
        puVar3 = auStack_604;
      }
LAB_0055d511:
      FUN_0055a560(puVar3);
      FUN_0055ac00(&DAT_02cf5468);
      return (byte *)0x0;
    }
  }
  return (byte *)0x0;
}
