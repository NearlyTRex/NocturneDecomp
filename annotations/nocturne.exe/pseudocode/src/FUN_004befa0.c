// Name: FUN_004befa0
// Address: 004befa0
// Address Range: [[004befa0, 004bf26e]]
// Convention: unknown
// Signature: void FUN_004befa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004befa0(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_01cc30a0 = DAT_005b7620;
  iVar1 = FUN_00456a60(&DAT_00586da0,"invsize.txt",&DAT_00586d91);
  if (iVar1 != 0) {
    FUN_00563350(iVar1,"%d,%d\n",&DAT_005bab60,&DAT_005bab64);
    FUN_00563380(iVar1);
  }
  FUN_0040e3c0(0x1cb0380,"invback",0x000000D0,0x00000060);
  FUN_0040e3c0(0x1cb0394,"invback2",0x00000060,0x00000060);
  FUN_0040e3c0(0x1cb03a8,"weapback",0x000000D0,0x00000060);
  FUN_0040e3c0(0x1cb03bc,"weapback2",0x00000060,0x00000060);
  FUN_0040e3c0(0x1cc2fd8,"battery",0x10,0x20);
  FUN_0040e3c0(0x1cc2fec,"hbar1",0x1b,0x40);
  FUN_0040e3c0(0x1cc3000,"hbar2",0x1b,0x40);
  FUN_0040e3c0(0x1cc3014,"tommyclip24x24",0x18,0x18);
  FUN_0040e3c0(0x1cc3028,"bullet24x24",0x18,0x18);
  FUN_0040e3c0(0x1cc303c,"lithium24x24",0x18,0x18);
  FUN_0040e3c0(0x1cc3050,"mercurybullet24x24",0x18,0x18);
  FUN_0040e3c0(0x1cc3064,"shotshell24x24",0x18,0x18);
  FUN_0040e3c0(0x1cc3078,"silverbullet24x24",0x18,0x18);
  FUN_0040e3c0(0x1cc308c,"holybullet24x24",0x18,0x18);
  if (*(int *)(0x01C775EC + 4) < 0x180) {
    FUN_0040e9e0(0x1cb0394,2,2);
    FUN_0040e9e0(0x1cb03bc,2,2);
    FUN_0040e9e0(0x1cc2fec,2,2);
    FUN_0040e9e0(0x1cc3000,2,2);
    FUN_0040e9e0(0x1cc3014,2,2);
    FUN_0040e9e0(0x1cc3028,2,2);
    FUN_0040e9e0(0x1cc303c,2,2);
    FUN_0040e9e0(0x1cc3050,2,2);
    FUN_0040e9e0(0x1cc3064,2,2);
    FUN_0040e9e0(0x1cc3078,2,2);
    FUN_0040e9e0(0x1cc308c,2,2);
  }
  _DAT_01cb03d0 = 0;
  iVar1 = FUN_00456a60(&DAT_00586e60,"itemlist.txt",&DAT_00586e50);
  if (iVar1 != 0) {
    while ((*(byte *)(iVar1 + 0xc) & 0x10) == 0) {
      iVar2 = FUN_004bed80(_DAT_01cb03d0 * 0x300 + 0x1cb03d8,iVar1);
      if (iVar2 == 0) break;
      _DAT_01cb03d0 = _DAT_01cb03d0 + 1;
    }
    FUN_00563380(iVar1);
  }
  return;
}
