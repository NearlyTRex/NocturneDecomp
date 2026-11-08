// Name: FUN_00521cf0
// Address: 00521cf0
// Address Range: [[00521cf0, 00521ebc]]
// Convention: unknown
// Signature: undefined4 FUN_00521cf0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00521cf0(int param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar11;
  byte local_318 [512];
  char local_118 [260];
  int local_14;
  char *pcVar10;
  
  bVar11 = 0;
  FUN_00521630(param_1);
  iVar3 = FUN_00460aa0("world",param_2);
  if (0 < iVar3) {
    FUN_005b9e58(param_2,0,0,local_118,0);
    pcVar8 = &DAT_005e2ed4;
    iVar6 = -1;
    pcVar10 = local_118;
    do {
      pcVar9 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    FUN_00529c10(param_1,local_118);
    iVar6 = FUN_00460c70("world",param_2,&DAT_005e2ed9);
    if (iVar6 != 0) {
      iVar4 = FUN_005baab0(iVar6);
      local_14 = param_1 + 0x34;
      bVar2 = true;
      do {
        iVar7 = 0;
        while( true ) {
          iVar5 = FUN_005baab0(iVar6);
          if (iVar3 + iVar4 <= iVar5) break;
          iVar5 = FUN_005b8180(iVar6);
          if (iVar5 == -1) goto LAB_00521df0;
          if (iVar5 != 0xd) {
            if (iVar5 == 10) goto LAB_00521df0;
            if (iVar5 == 0) {
              FUN_005b89c0(iVar6);
              iVar3 = FUN_004858f0(param_1 + 0x34);
              FUN_0047be40(0x01C25594,"Probable non-text file %s detected near line %d.  Cannot use script.",param_2,iVar3 + 1);
              FUN_00521630(param_1);
              return 0;
            }
            local_318[iVar7] = (char)iVar5;
            iVar7 = iVar7 + 1;
          }
        }
        bVar2 = false;
LAB_00521df0:
        local_318[iVar7] = 0;
        FUN_00480e70(local_14,local_318);
        if (!bVar2) {
          FUN_005b89c0(iVar6);
          FUN_00521ec0(param_1);
          FUN_00522080(param_1);
          return 1;
        }
      } while( true );
    }
  }
  return 1;
}
