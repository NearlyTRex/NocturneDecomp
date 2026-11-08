// Name: FUN_00557910
// Address: 00557910
// Address Range: [[00557910, 00557b3b]]
// Convention: unknown
// Signature: undefined1 * FUN_00557910(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_00557910(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *puVar3;
  int iStack_784;
  byte *puStack_780;
  byte *puStack_77c;
  byte auStack_5f4 [400];
  byte auStack_464 [400];
  byte auStack_2d4 [412];
  byte local_138 [268];
  uint uStack_2c;
  uint uStack_28;
  
  puStack_77c = &DAT_0264b06c;
  puStack_780 = (byte *)0x55792a;
  iVar1 = FUN_00555060();
  if (iVar1 != 0) {
    puStack_77c = local_138;
    puStack_780 = (byte *)param_1;
    iStack_784 = 0x557949;
    iVar1 = FUN_00557860();
    if (iVar1 != 0) {
      iStack_784 = 0;
      if (*(int *)(param_1 * 0x11c + 0x2649874) == 0) {
        iStack_784 = param_1 * 0x11c + 0x2649878;
      }
      puStack_77c = (byte *)0x0;
      puStack_780 = &DAT_0264a5c4;
      iVar1 = Ordinal_1();
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*_DAT_0264a5c4 + 0x18))(_DAT_0264a5c4,_DAT_02664628,2);
        if (iVar1 == 0) {
          FUN_005b77c0(&uStack_2c,0,0x14);
          uStack_2c = 0x14;
          uStack_28 = 0x11;
          iVar1 = (**(code **)(*_DAT_0264a5c4 + 0xc))(_DAT_0264a5c4,&uStack_2c,&DAT_0264a5c8,0);
          if (iVar1 != 0) {
            uVar2 = FUN_00554ad0(iVar1);
            FUN_005b7790(&iStack_784,"DirectSux: Unable to %s.  (%s)",
                         "Create the primary buffer",uVar2);
            FUN_005549c0(&iStack_784);
            uStack_28 = uStack_28 & 0xffffffef;
            iVar1 = (**(code **)(*_DAT_0264a5c4 + 0xc))(_DAT_0264a5c4,&uStack_2c,&DAT_0264a5c8,0);
            if (iVar1 != 0) {
              uVar2 = FUN_00554ad0(iVar1);
              FUN_005b7790(auStack_464,"DirectSux: Unable to %s.  (%s)",
                           "Create the primary buffer",uVar2);
              puVar3 = auStack_464;
              goto LAB_005579b1;
            }
          }
          iVar1 = FUN_00552b40();
          if ((1 < iVar1) && (1 < *(int *)(param_1 * 0x11c + 0x264998c))) {
            (**(code **)*_DAT_0264a5c8)(_DAT_0264a5c8,&DAT_00621060,&DAT_0264a5d0);
          }
          return &DAT_0264b06c;
        }
        uVar2 = FUN_00554ad0(iVar1);
        FUN_005b7790(auStack_2d4,"DirectSux: Unable to %s.  (%s)","Set cooperative level"
                     ,uVar2);
        puVar3 = auStack_2d4;
      }
      else {
        uVar2 = FUN_00554ad0(iVar1);
        FUN_005b7790(auStack_5f4,"DirectSux: Unable to %s.  (%s)",
                     "create DirectSound object",uVar2);
        puVar3 = auStack_5f4;
      }
LAB_005579b1:
      FUN_005549c0(puVar3);
      FUN_00555060(&DAT_0264b06c);
      return (byte *)0x0;
    }
  }
  return (byte *)0x0;
}
