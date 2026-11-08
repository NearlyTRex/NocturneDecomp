// Name: FUN_004da570
// Address: 004da570
// Address Range: [[004da570, 004da833]]
// Convention: unknown
// Signature: void FUN_004da570(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004da570(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_01d70a34 = DAT_005fba1c;
  iVar1 = FUN_004659c0(&DAT_005c5f4e,"invsize.txt",&DAT_005c5f3f);
  if (iVar1 != 0) {
    FUN_005a3230(iVar1,"%d,%d\n",&DAT_00600180,&DAT_00600184);
    FUN_005a3a90(iVar1);
  }
  FUN_0040d460(0x1d70890,"phb_h",0x30,0x40);
  FUN_0040d460(0x1d708a4,"phb_o",0x30,0x40);
  FUN_0040d460(0x1d708b8,"phb_m",0x30,0x40);
  FUN_0040d460(0x1d708cc,&DAT_005c5f6c,0x40,0x40);
  FUN_0040d460(0x1d709d0,"sps00",0x40,0x40);
  FUN_0040d460(0x1d709e4,"sps01",0x40,0x40);
  FUN_0040d460(0x1d709f8,"sps02",0x40,0x40);
  FUN_0040d460(0x1d70a0c,"sps03",0x40,0x40);
  FUN_0040d460(0x1d70980,"sps04",0x40,0x40);
  FUN_0040d460(0x1d70994,"sps05",0x40,0x40);
  FUN_0040d460(0x1d709a8,"sps06",0x40,0x40);
  FUN_0040d460(0x1d709bc,"sps07",0x40,0x40);
  FUN_0040d460(0x1d70930,"sps08",0x40,0x40);
  FUN_0040d460(0x1d70944,"sps09",0x40,0x40);
  FUN_0040d460(0x1d70958,"sps10",0x40,0x40);
  FUN_0040d460(0x1d7096c,"sps11",0x40,0x40);
  FUN_0040d460(0x1d708e0,"sps12",0x40,0x40);
  FUN_0040d460(0x1d708f4,"sps13",0x40,0x40);
  FUN_0040d460(0x1d70908,"sps14",0x40,0x40);
  FUN_0040d460(0x1d7091c,"sps15",0x40,0x40);
  _DAT_01d70a20 = 0xffffffff;
  if (*(int *)(0x01D2130C + 4) < 0x180) {
    FUN_0040da80(0x1d70890,2,2);
    FUN_0040da80(0x1d708a4,2,2);
    FUN_0040da80(0x1d708b8,2,2);
    FUN_0040da80(0x1d708cc,2,2);
  }
  _DAT_01d5dc88 = 0;
  iVar1 = FUN_004659c0(&DAT_005c5fe1,"itemlist.txt",&DAT_005c5fd1);
  if (iVar1 != 0) {
    while ((*(byte *)(iVar1 + 0xc) & 0x10) == 0) {
      iVar2 = FUN_004da320(_DAT_01d5dc88 * 0x300 + 0x1d5dc90,iVar1);
      if (iVar2 == 0) break;
      _DAT_01d5dc88 = _DAT_01d5dc88 + 1;
    }
    FUN_005a3a90(iVar1);
  }
  return;
}
