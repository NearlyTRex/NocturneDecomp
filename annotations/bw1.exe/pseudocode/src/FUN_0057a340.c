// Name: FUN_0057a340
// Address: 0057a340
// Address Range: [[0057a340, 0057a56b]]
// Convention: unknown
// Signature: undefined1 * FUN_0057a340(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0057a340(int param_1)

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
  
  puStack_78c = &DAT_02c8283c;
  puStack_790 = (byte *)0x57a35a;
  iVar1 = FUN_00577a90();
  if (iVar1 != 0) {
    puStack_78c = local_148;
    puStack_790 = (byte *)param_1;
    iStack_794 = 0x57a379;
    iVar1 = FUN_0057a290();
    if (iVar1 != 0) {
      iStack_794 = 0;
      if (*(int *)(param_1 * 0x11c + 0x2c81044) == 0) {
        iStack_794 = param_1 * 0x11c + 0x2c81048;
      }
      puStack_78c = (byte *)0x0;
      puStack_790 = &DAT_02c81d94;
      iVar1 = Ordinal_1();
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*_DAT_02c81d94 + 0x18))(_DAT_02c81d94,_DAT_02c9be68,2);
        if (iVar1 == 0) {
          FUN_005bfb70(&uStack_3c,0,0x24);
          uStack_3c = 0x24;
          uStack_38 = 0x11;
          iVar1 = (**(code **)(*_DAT_02c81d94 + 0xc))(_DAT_02c81d94,&uStack_3c,&DAT_02c81d98,0);
          if (iVar1 != 0) {
            uVar2 = FUN_00577500(iVar1);
            FUN_005bfb40(&iStack_794,"DirectSux: Unable to %s.  (%s)",
                         "Create the primary buffer",uVar2);
            FUN_005773f0(&iStack_794);
            uStack_38 = uStack_38 & 0xffffffef;
            iVar1 = (**(code **)(*_DAT_02c81d94 + 0xc))(_DAT_02c81d94,&uStack_3c,&DAT_02c81d98,0);
            if (iVar1 != 0) {
              uVar2 = FUN_00577500(iVar1);
              FUN_005bfb40(auStack_474,"DirectSux: Unable to %s.  (%s)",
                           "Create the primary buffer",uVar2);
              puVar3 = auStack_474;
              goto LAB_0057a3e1;
            }
          }
          iVar1 = FUN_00575570();
          if ((1 < iVar1) && (1 < *(int *)(param_1 * 0x11c + 0x2c8115c))) {
            (**(code **)*_DAT_02c81d98)(_DAT_02c81d98,&DAT_00627880,&DAT_02c81da0);
          }
          return &DAT_02c8283c;
        }
        uVar2 = FUN_00577500(iVar1);
        FUN_005bfb40(auStack_2e4,"DirectSux: Unable to %s.  (%s)","Set cooperative level"
                     ,uVar2);
        puVar3 = auStack_2e4;
      }
      else {
        uVar2 = FUN_00577500(iVar1);
        FUN_005bfb40(auStack_604,"DirectSux: Unable to %s.  (%s)",
                     "create DirectSound object",uVar2);
        puVar3 = auStack_604;
      }
LAB_0057a3e1:
      FUN_005773f0(puVar3);
      FUN_00577a90(&DAT_02c8283c);
      return (byte *)0x0;
    }
  }
  return (byte *)0x0;
}
