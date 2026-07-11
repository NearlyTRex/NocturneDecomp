// Name: FUN_004edfc0
// Address: 004edfc0
// Address Range: [[004edfc0, 004ee2e2]]
// Convention: unknown
// Signature: int FUN_004edfc0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004edfc0(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  byte local_31c [256];
  char local_21c [256];
  char local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0;
  iVar3 = FUN_004568c0(&DAT_0058c922,param_1);
  iVar5 = iVar3;
  if (0 < iVar3) {
    iVar4 = FUN_00456a60(&DAT_0058c926,param_1,&DAT_0058c923);
    iVar5 = 0;
    if (iVar4 != 0) {
      local_18 = FUN_00566e70(iVar4);
      local_18 = iVar3 + local_18;
      FUN_00564b20(local_31c,0xff,iVar4);
      FUN_00563350(iVar4,&DAT_0058c927,&local_1c);
      FUN_00564b20(local_31c,0xff,iVar4);
      FUN_00563350(iVar4,&DAT_0058c92b,&DAT_01d16810);
      if (local_1c != 0) {
        _DAT_01cc4800 = "..\\support\\newmsg.cpp";
        _DAT_01cc4804 = 0x52;
        FUN_004c8440("Unknown message file version");
      }
      FUN_00564b20(local_31c,0xff,iVar4);
      FUN_00563350(iVar4,"\"%[^\"]\"\n",&DAT_005bdf50);
      do {
        FUN_00563350(iVar4,&DAT_0058c96b);
        iVar5 = FUN_00566e70(iVar4);
        if (local_18 <= iVar5) {
          FUN_00563380(iVar4);
          if (0 < _DAT_01d16818) {
            iVar7 = 0x1d177c0;
            iVar3 = 0x1d271c0;
            iVar4 = _DAT_01d16818 * 4;
            iVar5 = 0;
            do {
              *(int *)(iVar5 + 0x1d1681c) = iVar7;
              *(int *)(iVar5 + 0x1d16fec) = iVar3;
              iVar5 = iVar5 + 4;
              iVar3 = iVar3 + 0x100;
              iVar7 = iVar7 + 0x80;
            } while (iVar5 < iVar4);
          }
          local_14 = 0;
          for (iVar5 = 0; iVar3 = local_14, iVar5 < _DAT_01d16818 + -1; iVar5 = iVar5 + 1) {
            iVar4 = iVar5 + 1;
            if (iVar4 < _DAT_01d16818) {
              iVar7 = iVar4 * 4;
              do {
                iVar6 = FUN_005649c0(*(uint *)(iVar3 + 0x1d1681c),
                                     *(uint *)(iVar7 + 0x1d1681c));
                if (0 < iVar6) {
                  uVar2 = *(uint *)(iVar3 + 0x1d1681c);
                  *(uint *)(iVar3 + 0x1d1681c) = *(uint *)(iVar7 + 0x1d1681c);
                  *(uint *)(iVar7 + 0x1d1681c) = uVar2;
                  uVar2 = *(uint *)(iVar3 + 0x1d16fec);
                  *(uint *)(iVar3 + 0x1d16fec) = *(uint *)(iVar7 + 0x1d16fec);
                  *(uint *)(iVar7 + 0x1d16fec) = uVar2;
                }
                iVar4 = iVar4 + 1;
                iVar7 = iVar7 + 4;
              } while (iVar4 < _DAT_01d16818);
            }
            local_14 = local_14 + 4;
          }
          _DAT_01d16814 = 1;
          return _DAT_01d16818 + -1;
        }
        iVar5 = FUN_00563350(iVar4,"\"%[^\"]\", \"%[^\"]\"\n",local_21c,local_11c);
        if (iVar5 != 2) {
          _DAT_01cc4800 = "..\\support\\newmsg.cpp";
          _DAT_01cc4804 = 99;
          FUN_004c8440("Error reading %s",param_1);
        }
        if (499 < _DAT_01d16818) {
          _DAT_01cc4800 = "..\\support\\newmsg.cpp";
          _DAT_01cc4804 = 0x68;
          FUN_004c8440("Too many messages in %s",param_1);
        }
        pcVar8 = local_21c;
        pcVar9 = (char *)(_DAT_01d16818 * 0x80 + 0x1d177c0);
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        pcVar8 = local_11c;
        pcVar9 = (char *)(_DAT_01d16818 * 0x100 + 0x1d271c0);
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        _DAT_01d16818 = _DAT_01d16818 + 1;
      } while( true );
    }
  }
  return iVar5;
}
