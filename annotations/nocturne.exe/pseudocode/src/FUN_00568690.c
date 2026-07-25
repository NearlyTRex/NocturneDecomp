// Name: FUN_00568690
// Address: 00568690
// Address Range: [[00568690, 005687bb]]
// Convention: unknown
// Signature: int FUN_00568690(void)

#include "nocturne.h"

int FUN_00568690(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  byte auStack_238 [276];
  byte auStack_124 [276];
  
  iVar2 = (*(code *)PTR_FUN_005c1abc)();
  uVar1 = *(uint *)(iVar2 + 4);
  iVar2 = 0;
  do {
    while( true ) {
      do {
        FUN_005633fc(auStack_124,iVar2);
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0056f170(auStack_124,2);
      } while (iVar3 == 0);
      iVar3 = _fopen(auStack_124,&DAT_00598b50);
      if (iVar3 != 0) break;
      piVar4 = (int *)FUN_0056f1a0();
      if ((*piVar4 == 0xb) || (piVar4 = (int *)FUN_0056f1a0(), *piVar4 == 6)) {
        return 0;
      }
    }
    _fclose(iVar3);
    uVar5 = (uint)DAT_005c1a9c;
    do {
      FUN_005633fc(auStack_238,uVar5);
      iVar3 = rename(auStack_124,auStack_238);
      if (iVar3 == 0) {
        iVar3 = _fopen(auStack_238,&DAT_00598b50);
        if (iVar3 != 0) {
          *(byte *)(iVar3 + 0xd) = *(byte *)(iVar3 + 0xd) | 8;
          DAT_005c1a9c = (byte)uVar5;
          *(byte *)(*(int *)(iVar3 + 8) + 0x14) = DAT_005c1a9c;
          FUN_00568e80(uVar1);
          return iVar3;
        }
        piVar4 = (int *)FUN_0056f1a0();
        if (*piVar4 == 0xb) {
          return 0;
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = FUN_0056f170(auStack_124,2);
    } while (iVar3 == 0);
  } while( true );
}
