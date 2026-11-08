// Name: FUN_004acf00
// Address: 004acf00
// Address Range: [[004acf00, 004ad3af]]
// Convention: unknown
// Signature: void FUN_004acf00(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004acf00(uint param_1,uint param_2)

{
  byte uVar1;
  int *piVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_18;
  int local_14;
  
  FUN_005a3140(param_2,"//-- BEGIN FIELD NOTES ------------------------------\n");
  FUN_005a3140(param_2,"// field notes file version\n");
  FUN_005a3140(param_2,&DAT_005c1a1a,2);
  FUN_005a3140(param_2,"// filename\n");
  iVar5 = 0;
  FUN_005a3140(param_2,"\"%s\"\n",param_1);
  local_3c = 0;
  if (0 < _DAT_01d0d210) {
    local_2c = 0;
    do {
      iVar3 = 0;
      iVar6 = local_2c;
      if (0 < *(int *)(local_2c + 0x1d0d364)) {
        do {
          switch(*(uint *)(*(int *)(iVar6 + 0x1d0d368) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar5 = iVar5 + 1;
            break;
          default:
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            _DAT_01d71de4 = 0xc38;
            FUN_004e4330("Invalid entry item type");
          }
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar3 < *(int *)(local_2c + 0x1d0d364));
      }
      local_2c = local_2c + 0x2e4;
      local_3c = local_3c + 1;
    } while (local_3c < _DAT_01d0d210);
  }
  FUN_005a3140(param_2,"// entry count, list(\"name\", type)\n");
  FUN_005a3140(param_2,&DAT_005c1a82,iVar5);
  local_30 = 0;
  if (0 < _DAT_01d0d210) {
    do {
      iVar3 = local_30 * 0x2e4;
      iVar7 = 0;
      iVar6 = iVar3;
      if (0 < *(int *)(iVar3 + 0x1d0d364)) {
        do {
          switch(*(uint *)(*(int *)(iVar6 + 0x1d0d368) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar5 = iVar5 + -1;
            FUN_005a3140(param_2,"\"%s\", %d\n",*(int *)(iVar6 + 0x1d0d368),
                         *(uint *)(*(int *)(iVar6 + 0x1d0d368) + 0x140));
            break;
          default:
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            _DAT_01d71de4 = 0xc50;
            FUN_004e4330("Invalid entry item type");
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar7 < *(int *)(iVar3 + 0x1d0d364));
      }
      local_30 = local_30 + 1;
    } while (local_30 < _DAT_01d0d210);
  }
  if (iVar5 != 0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0xc54;
    FUN_004e4330("Hell froze");
  }
  iVar5 = 0;
  local_28 = 0;
  if (0 < _DAT_01d0e36c) {
    do {
      if (*(int *)(*(int *)(&DAT_01d0e370 + iVar5) + 0x140) == 6) {
        local_28 = local_28 + 1;
      }
      iVar5 = iVar5 + 0x126c;
    } while (iVar5 < _DAT_01d0e36c * 0x126c);
  }
  FUN_005a3140(param_2,"// map coverage count\n");
  FUN_005a3140(param_2,&DAT_005c1af4,local_28);
  local_38 = 0;
  if (0 < _DAT_01d0e36c) {
    local_34 = (int *)&DAT_01d0e370;
    do {
      iVar5 = *local_34;
      if (*(int *)(iVar5 + 0x140) == 6) {
        if (local_28 < 1) {
          _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
          _DAT_01d71de4 = 0xc67;
          FUN_004e4330("Hell froze");
        }
        local_28 = local_28 + -1;
        FUN_005a3140(param_2,"// map entry name, xSize, ySize\n");
        FUN_005a3140(param_2,"%s, %d, %d\n",iVar5,local_34[0x25],local_34[0x26]);
        FUN_005a3140(param_2,"\t// map coverage data\n");
        local_14 = 0;
        if (0 < local_34[0x26]) {
          do {
            FUN_005a3140(param_2,&DAT_005c1b5c);
            puVar4 = (byte *)(local_34[0x23] + local_14 * local_34[0x25]);
            iVar5 = 0;
            if (0 < local_34[0x25]) {
              do {
                uVar1 = *puVar4;
                puVar4 = puVar4 + 1;
                iVar5 = iVar5 + 1;
                FUN_005a3140(param_2,&DAT_005c1b5f,uVar1);
              } while (iVar5 < local_34[0x25]);
            }
            FUN_005a3140(param_2,&DAT_005c1b64);
            local_14 = local_14 + 1;
          } while (local_14 < local_34[0x26]);
        }
        iVar5 = 0;
        iVar6 = 0;
        piVar2 = local_34;
        if (0 < local_34[0x17c]) {
          do {
            if (piVar2[0x1b1] != 0) {
              iVar6 = iVar6 + 1;
            }
            iVar5 = iVar5 + 1;
            piVar2 = piVar2 + 0x35;
          } while (iVar5 < local_34[0x17c]);
        }
        FUN_005a3140(param_2,"\t// map annotation count, list\n");
        iVar5 = 0;
        FUN_005a3140(param_2,&DAT_005c1b86,iVar6);
        if (0 < local_34[0x17c]) {
          local_18 = local_34;
          do {
            if (local_18[0x1b1] != 0) {
              iVar6 = iVar6 + -1;
              FUN_005a3140(param_2,"\t\t%s\n",local_34 + iVar5 * 0x35 + 0x17d);
            }
            iVar5 = iVar5 + 1;
            local_18 = local_18 + 0x35;
          } while (iVar5 < local_34[0x17c]);
        }
        if (iVar6 != 0) {
          _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
          _DAT_01d71de4 = 0xc85;
          FUN_004e4330("Hell froze.");
        }
      }
      local_34 = local_34 + 0x49b;
      local_38 = local_38 + 1;
    } while (local_38 < _DAT_01d0e36c);
  }
  if (local_28 != 0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0xc89;
    FUN_004e4330("Hell froze");
  }
  FUN_005a3140(param_2,"//-- END FIELD NOTES --------------------------------\n");
  return;
}
