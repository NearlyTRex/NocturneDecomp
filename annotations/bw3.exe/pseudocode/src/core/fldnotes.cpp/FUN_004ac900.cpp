// Name: FUN_004ac900
// Address: 004ac900
// Address Range: [[004ac900, 004aceb8]]
// Convention: unknown
// Signature: void FUN_004ac900(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ac900(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  uint *puVar5;
  char *pcVar6;
  byte bVar7;
  byte auStack_44c [256];
  char local_34c [256];
  uint local_24c [64];
  uint local_14c [64];
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte local_30 [4];
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  bVar7 = 0;
  FUN_004ab7a0(param_1);
  local_4c = 0;
  FUN_005a3230(param_2,"%*[^\n]\n");
  FUN_005a3230(param_2,"%*[^\n]\n");
  FUN_005a3230(param_2,&DAT_005c17c9,&local_4c);
  if ((local_4c < 1) || (2 < local_4c)) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0xbae;
    FUN_004e4330("Invalid field notes file version: %d, latest this .exe supports is %d",local_4c,2);
  }
  puVar5 = &DAT_005fe4b8;
  pcVar6 = local_34c;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
  }
  FUN_005a3230(param_2,"%*[^\n]\n");
  FUN_005a3230(param_2," \"%[^\"]",local_34c);
  FUN_005a3230(param_2,&DAT_005c1838);
  if (local_34c[0] != '\0') {
    FUN_004aa810(param_1,local_34c,0);
    local_48 = 0;
    FUN_005a3230(param_2,"%*[^\n]\n");
    FUN_005a3230(param_2,&DAT_005c1843,&local_48);
    local_20 = 0;
    if (0 < local_48) {
      do {
        iVar3 = 0;
        pcVar6 = "(parse error)";
        puVar5 = local_24c;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *(uint *)pcVar6;
          pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        }
        FUN_005a3230(param_2,"\"%[^\"]\", %d\n",local_24c,&local_44);
        local_1c = local_24c;
        local_2c = (int *)0x0;
        if (0 < _DAT_01d0d210) {
          iVar2 = 0x1d0d214;
          do {
            iVar1 = FUN_004a9c30(iVar2,local_1c);
            if (iVar1 != 0) {
              if (local_2c != (int *)0x0) {
                *local_2c = iVar3;
              }
              if (iVar1 != 0) {
                *(uint *)(iVar1 + 0x140) = local_44;
                goto LAB_004acb0b;
              }
              break;
            }
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 0x2e4;
          } while (iVar3 < _DAT_01d0d210);
        }
        FUN_0047cee0(0x01C5B0E4,"Ignoring saved game reference to field notes entry %s which doesn't exist in %s",local_24c,param_1);
LAB_004acb0b:
        local_20 = local_20 + 1;
      } while (local_20 < local_48);
    }
    if (local_4c < 2) {
      iVar2 = 0;
      if (0 < _DAT_01d0e36c) {
        iVar3 = 0;
        do {
          if (*(int *)(*(int *)(&DAT_01d0e370 + iVar3) + 0x140) == 6) {
            FUN_0040dbb0(iVar3 + 0x1d0e3f8,0xff);
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x126c;
        } while (iVar2 < _DAT_01d0e36c);
      }
    }
    else {
      local_40 = 0;
      FUN_005a3230(param_2,"%*[^\n]\n");
      FUN_005a3230(param_2,&DAT_005c18ac,&local_40);
      local_24 = 0;
      if (0 < local_40) {
        do {
          pcVar6 = "(corrupt save game file)";
          puVar5 = local_14c;
          for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *(uint *)pcVar6;
            pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          }
          FUN_005a3230(param_2,"%*[^\n]\n");
          iVar2 = 0;
          FUN_005a3230(param_2," %[^,], %d, %d\n",local_14c,&local_3c,&local_38);
          local_18 = local_14c;
          local_28 = (int *)0x0;
          if (0 < _DAT_01d0d210) {
            iVar3 = 0x1d0d214;
            do {
              iVar1 = FUN_004a9c30(iVar3,local_18);
              if (iVar1 != 0) {
                if (local_28 != (int *)0x0) {
                  *local_28 = iVar2;
                }
                goto LAB_004acc7a;
              }
              iVar2 = iVar2 + 1;
              iVar3 = iVar3 + 0x2e4;
            } while (iVar2 < _DAT_01d0d210);
          }
          iVar1 = 0;
LAB_004acc7a:
          if (iVar1 == 0) {
            _DAT_01d71de4 = 0xbe4;
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            FUN_004e4330("CFieldNotes::loadState - No such map '%s'",local_14c);
          }
          if ((*(int *)(iVar1 + 0x140) != 6) || (*(int *)(iVar1 + 0x158) < 0)) {
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            _DAT_01d71de4 = 0xbe7;
            FUN_004e4330("CFieldNotes::loadState - Entry '%s' is not an enabled map",local_14c);
          }
          iVar2 = *(int *)(iVar1 + 0x158) * 0x126c;
          if ((local_3c != *(int *)(iVar2 + 0x1d0e404)) || (local_38 != *(int *)(iVar2 + 0x1d0e408))
             ) {
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            _DAT_01d71de4 = 0xbec;
            FUN_004e4330("CFieldNotes::loadState - Map '%s' has changed size",local_14c);
          }
          FUN_005a3230(param_2,"%*[^\n]\n");
          local_14 = 0;
          if (0 < *(int *)(iVar2 + 0x1d0e408)) {
            do {
              FUN_005a3230(param_2,&DAT_005c19a6);
              iVar3 = 0;
              puVar4 = (byte *)
                       (local_14 * *(int *)(iVar2 + 0x1d0e404) + *(int *)(iVar2 + 0x1d0e3fc));
              if (0 < *(int *)(iVar2 + 0x1d0e404)) {
                do {
                  FUN_005a3230(param_2,&DAT_005c19a8,local_30);
                  *puVar4 = local_30[0];
                  iVar3 = iVar3 + 1;
                  puVar4 = puVar4 + 1;
                } while (iVar3 < *(int *)(iVar2 + 0x1d0e404));
              }
              FUN_005a3230(param_2,&DAT_005c19ac);
              local_14 = local_14 + 1;
            } while (local_14 < *(int *)(iVar2 + 0x1d0e408));
          }
          iVar3 = 0;
          local_34 = 0;
          FUN_005a3230(param_2,"%*[^\n]\n");
          FUN_005a3230(param_2,&DAT_005c19b6,&local_34);
          if (0 < local_34) {
            do {
              FUN_005a3230(param_2,&DAT_005c19ba,auStack_44c);
              FUN_004aa1a0(&DAT_01d0e370 + iVar2,auStack_44c);
              iVar3 = iVar3 + 1;
            } while (iVar3 < local_34);
          }
          local_24 = local_24 + 1;
        } while (local_24 < local_40);
      }
    }
  }
  FUN_005a3230(param_2,"%*[^\n]\n");
  return;
}
