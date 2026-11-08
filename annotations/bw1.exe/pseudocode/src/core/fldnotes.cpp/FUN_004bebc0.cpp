// Name: FUN_004bebc0
// Address: 004bebc0
// Address Range: [[004bebc0, 004bf178]]
// Convention: unknown
// Signature: void FUN_004bebc0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bebc0(uint param_1,uint param_2)

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
  FUN_004bdaa0(param_1);
  local_4c = 0;
  FUN_005c04b0(param_2,"%*[^\n]\n");
  FUN_005c04b0(param_2,"%*[^\n]\n");
  FUN_005c04b0(param_2,&DAT_005e02da,&local_4c);
  if ((local_4c < 1) || (2 < local_4c)) {
    _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
    _DAT_01d1d404 = 0xb96;
    FUN_005030e0("Invalid field notes file version: %d, latest this .exe supports is %d",local_4c,2);
  }
  puVar5 = &DAT_0061d420;
  pcVar6 = local_34c;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
  }
  FUN_005c04b0(param_2,"%*[^\n]\n");
  FUN_005c04b0(param_2," \"%[^\"]",local_34c);
  FUN_005c04b0(param_2,&DAT_005e0349);
  if (local_34c[0] != '\0') {
    FUN_004bcba0(param_1,local_34c,0);
    local_48 = 0;
    FUN_005c04b0(param_2,"%*[^\n]\n");
    FUN_005c04b0(param_2,&DAT_005e0354,&local_48);
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
        FUN_005c04b0(param_2,"\"%[^\"]\", %d\n",local_24c,&local_44);
        local_1c = local_24c;
        local_2c = (int *)0x0;
        if (0 < _DAT_01cc4470) {
          iVar2 = 0x1cc4474;
          do {
            iVar1 = FUN_004bbfd0(iVar2,local_1c);
            if (iVar1 != 0) {
              if (local_2c != (int *)0x0) {
                *local_2c = iVar3;
              }
              if (iVar1 != 0) {
                *(uint *)(iVar1 + 0x140) = local_44;
                goto LAB_004bedcb;
              }
              break;
            }
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 0x2e4;
          } while (iVar3 < _DAT_01cc4470);
        }
        FUN_00494340(0x01C3EB54,"Ignoring saved game reference to field notes entry %s which doesn't exist in %s",local_24c,param_1);
LAB_004bedcb:
        local_20 = local_20 + 1;
      } while (local_20 < local_48);
    }
    if (local_4c < 2) {
      iVar2 = 0;
      if (0 < _DAT_01cc55cc) {
        iVar3 = 0;
        do {
          if (*(int *)(*(int *)(&DAT_01cc55d0 + iVar3) + 0x140) == 6) {
            FUN_0040d970(iVar3 + 0x1cc5658,0xff);
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x970;
        } while (iVar2 < _DAT_01cc55cc);
      }
    }
    else {
      local_40 = 0;
      FUN_005c04b0(param_2,"%*[^\n]\n");
      FUN_005c04b0(param_2,&DAT_005e03bd,&local_40);
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
          FUN_005c04b0(param_2,"%*[^\n]\n");
          iVar2 = 0;
          FUN_005c04b0(param_2," %[^,], %d, %d\n",local_14c,&local_3c,&local_38);
          local_18 = local_14c;
          local_28 = (int *)0x0;
          if (0 < _DAT_01cc4470) {
            iVar3 = 0x1cc4474;
            do {
              iVar1 = FUN_004bbfd0(iVar3,local_18);
              if (iVar1 != 0) {
                if (local_28 != (int *)0x0) {
                  *local_28 = iVar2;
                }
                goto LAB_004bef3a;
              }
              iVar2 = iVar2 + 1;
              iVar3 = iVar3 + 0x2e4;
            } while (iVar2 < _DAT_01cc4470);
          }
          iVar1 = 0;
LAB_004bef3a:
          if (iVar1 == 0) {
            _DAT_01d1d404 = 0xbcc;
            _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
            FUN_005030e0("CFieldNotes::loadState - No such map '%s'",local_14c);
          }
          if ((*(int *)(iVar1 + 0x140) != 6) || (*(int *)(iVar1 + 0x158) < 0)) {
            _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
            _DAT_01d1d404 = 0xbcf;
            FUN_005030e0("CFieldNotes::loadState - Entry '%s' is not an enabled map",local_14c);
          }
          iVar2 = *(int *)(iVar1 + 0x158) * 0x970;
          if ((local_3c != *(int *)(iVar2 + 0x1cc5664)) || (local_38 != *(int *)(iVar2 + 0x1cc5668))
             ) {
            _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
            _DAT_01d1d404 = 0xbd4;
            FUN_005030e0("CFieldNotes::loadState - Map '%s' has changed size",local_14c);
          }
          FUN_005c04b0(param_2,"%*[^\n]\n");
          local_14 = 0;
          if (0 < *(int *)(iVar2 + 0x1cc5668)) {
            do {
              FUN_005c04b0(param_2,&DAT_005e04b7);
              iVar3 = 0;
              puVar4 = (byte *)
                       (local_14 * *(int *)(iVar2 + 0x1cc5664) + *(int *)(iVar2 + 0x1cc565c));
              if (0 < *(int *)(iVar2 + 0x1cc5664)) {
                do {
                  FUN_005c04b0(param_2,&DAT_005e04b9,local_30);
                  *puVar4 = local_30[0];
                  iVar3 = iVar3 + 1;
                  puVar4 = puVar4 + 1;
                } while (iVar3 < *(int *)(iVar2 + 0x1cc5664));
              }
              FUN_005c04b0(param_2,&DAT_005e04bd);
              local_14 = local_14 + 1;
            } while (local_14 < *(int *)(iVar2 + 0x1cc5668));
          }
          iVar3 = 0;
          local_34 = 0;
          FUN_005c04b0(param_2,"%*[^\n]\n");
          FUN_005c04b0(param_2,&DAT_005e04c7,&local_34);
          if (0 < local_34) {
            do {
              FUN_005c04b0(param_2,&DAT_005e04cb,auStack_44c);
              FUN_004bc540(&DAT_01cc55d0 + iVar2,auStack_44c);
              iVar3 = iVar3 + 1;
            } while (iVar3 < local_34);
          }
          local_24 = local_24 + 1;
        } while (local_24 < local_40);
      }
    }
  }
  FUN_005c04b0(param_2,"%*[^\n]\n");
  return;
}
