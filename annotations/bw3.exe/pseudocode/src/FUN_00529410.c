// Name: FUN_00529410
// Address: 00529410
// Address Range: [[00529410, 005295dc]]
// Convention: unknown
// Signature: undefined4 FUN_00529410(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00529410(int param_1,uint param_2)

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
  FUN_00528d50(param_1);
  iVar3 = FUN_004657f0("world",param_2);
  if (0 < iVar3) {
    FUN_005a5128(param_2,0,0,local_118,0);
    pcVar8 = &DAT_005cde39;
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
    FUN_00530610(param_1,local_118);
    iVar6 = FUN_004659c0("world",param_2,&DAT_005cde3e);
    if (iVar6 != 0) {
      iVar4 = FUN_005a5d00(iVar6);
      local_14 = param_1 + 0x34;
      bVar2 = true;
      do {
        iVar7 = 0;
        while( true ) {
          iVar5 = FUN_005a5d00(iVar6);
          if (iVar3 + iVar4 <= iVar5) break;
          iVar5 = FUN_005a32b0(iVar6);
          if (iVar5 == -1) goto LAB_00529510;
          if (iVar5 != 0xd) {
            if (iVar5 == 10) goto LAB_00529510;
            if (iVar5 == 0) {
              FUN_005a3a90(iVar6);
              iVar3 = FUN_00486af0(param_1 + 0x34);
              FUN_0047cf40(0x01C5B0E4,"Probable non-text file %s detected near line %d.  Cannot use script.",param_2,iVar3 + 1);
              FUN_00528d50(param_1);
              return 0;
            }
            local_318[iVar7] = (char)iVar5;
            iVar7 = iVar7 + 1;
          }
        }
        bVar2 = false;
LAB_00529510:
        local_318[iVar7] = 0;
        FUN_00482070(local_14,local_318);
        if (!bVar2) {
          FUN_005a3a90(iVar6);
          FUN_005295e0(param_1);
          FUN_005297a0(param_1);
          return 1;
        }
      } while( true );
    }
  }
  return 1;
}
