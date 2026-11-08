// Name: FUN_00482350
// Address: 00482350
// Address Range: [[00482350, 0048276a]]
// Convention: unknown
// Signature: undefined4 FUN_00482350(int *param_1)

#include "nocturne.h"

uint FUN_00482350(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1c);
  if (iVar2 != 0) {
    if (param_1[0xef] == 1) {
      return 0xffffffff;
    }
    iVar2 = FUN_00483aa0(param_1,param_1[0x65]);
    if (iVar2 != 0) {
      param_1[0x62] = 1;
      return 0;
    }
  }
  iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x52);
    if (iVar2 != 0) {
      FUN_00481540(param_1);
    }
    iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x2e);
    if (iVar2 != 0) {
      FUN_00481540(param_1);
    }
  }
  iVar5 = 0;
  iVar2 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
  if ((iVar2 == 0) && (iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0xf), iVar2 != 0)) {
    iVar5 = 1;
  }
  iVar2 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
  if ((iVar2 != 0) && (iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0xf), iVar2 != 0)) {
    iVar5 = -1;
  }
  iVar2 = 0;
  do {
    iVar6 = param_1[0xef] + iVar5;
    param_1[0xef] = iVar6;
    if (1 < iVar6) {
      param_1[0xef] = -1;
      goto LAB_0048245a;
    }
    if (iVar6 < -1) {
      param_1[0xef] = 1;
LAB_00482597:
      if ((char)param_1[0x30] != '\0') {
        if (param_1[0xef] != -1) {
          return 0;
        }
        goto LAB_0048245a;
      }
    }
    else if ((iVar6 != 0) || ((char)param_1[0x17] != '\0')) {
      if (param_1[0xef] == 1) goto LAB_00482597;
      if (param_1[0xef] != -1) {
        return 0;
      }
      goto LAB_0048245a;
    }
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
      if (param_1[0xef] != -1) {
        return 0;
      }
LAB_0048245a:
      piVar1 = param_1 + 0x49;
      do {
        do {
          do {
            iVar2 = FUN_0058eb40();
            if (iVar2 == 0) {
              iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x48);
              if (iVar2 != 0) {
                *(byte *)(param_1 + 0x49) = 0;
                param_1[0x65] = param_1[0x65] + -1;
              }
              iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x50);
              if (iVar2 != 0) {
                *(byte *)(param_1 + 0x49) = 0;
                param_1[0x65] = param_1[0x65] + 1;
              }
              iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x47);
              if (iVar2 != 0) {
                *(byte *)(param_1 + 0x49) = 0;
                param_1[0x65] = 0;
              }
              iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4f);
              if (iVar2 != 0) {
                *(byte *)(param_1 + 0x49) = 0;
                param_1[0x65] = *param_1;
              }
              iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x49);
              if (iVar2 != 0) {
                *(byte *)(param_1 + 0x49) = 0;
                param_1[0x65] = param_1[0x65] - param_1[0x67];
                param_1[0x66] = param_1[0x66] - param_1[0x67];
              }
              iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x51);
              if (iVar2 != 0) {
                *(byte *)(param_1 + 0x49) = 0;
                param_1[0x65] = param_1[0x65] + param_1[0x67];
                param_1[0x66] = param_1[0x66] + param_1[0x67];
              }
              iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4b);
              if (iVar2 != 0) {
                *(byte *)(param_1 + 0x49) = 0;
                param_1[0x65] = param_1[0x65] - param_1[0x68];
              }
              iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4d);
              if (iVar2 != 0) {
                *(byte *)(param_1 + 0x49) = 0;
                param_1[0x65] = param_1[0x65] + param_1[0x68];
              }
              return 0;
            }
            iVar2 = FUN_004dfea0(0x01D02F84);
            if (iVar2 == 8) {
              *(byte *)(param_1 + 0x49) = 0;
            }
          } while (param_1[0x6d] != 0);
          if (((&DAT_0061ed94)[(byte)((char)iVar2 + 1)] & 0xe0) != 0) {
            uVar4 = 0xffffffff;
            piVar7 = piVar1;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              iVar5 = *piVar7;
              piVar7 = (int *)((int)piVar7 + (uint)bVar8 * -2 + 1);
            } while ((char)iVar5 != '\0');
            uVar4 = ~uVar4;
            if (uVar4 - 1 < 99) {
              *(char *)((int)param_1 + uVar4 + 0x123) = (char)iVar2;
              *(byte *)(uVar4 + 0x124 + (int)param_1) = 0;
            }
          }
        } while ((char)param_1[0x49] == '\0');
        uVar3 = FUN_00481240(param_1,param_1[0x65]);
        iVar2 = FUN_005b8130(piVar1,uVar3);
        if (iVar2 < 1) {
          param_1[0x65] = 0;
        }
        while (param_1[0x65] < *param_1) {
          uVar3 = FUN_00481240(param_1,param_1[0x65]);
          iVar2 = FUN_005b8130(piVar1,uVar3);
          if (iVar2 < 1) break;
          param_1[0x65] = param_1[0x65] + 1;
        }
      } while( true );
    }
  } while( true );
}
