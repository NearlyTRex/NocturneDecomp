// Name: FUN_005263c0
// Address: 005263c0
// Address Range: [[005263c0, 005267a1]]
// Convention: unknown
// Signature: void FUN_005263c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005263c0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  *(uint *)(param_1 + 0x20c2c) = 0;
  if (*(int *)(param_1 + 0xcde0) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x26fc) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x20b64) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x20bcc) == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x20c24);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x2628);
  }
  else if (*(int *)(iVar2 + 0x2e0) != 7) goto LAB_00526426;
  if ((iVar2 != 0) && (uVar3 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x74))(iVar2), uVar3 != 0)) {
    iVar2 = 0;
    uVar5 = FUN_0040cea0(0,3);
    *(uint *)(param_1 + 0x20c30) = uVar5;
    do {
      iVar4 = *(int *)(param_1 + 0x20c30) + 1;
      *(int *)(param_1 + 0x20c30) = iVar4;
      if ((iVar4 < 0) || (2 < iVar4)) {
        *(uint *)(param_1 + 0x20c30) = 0;
      }
      iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x20c24),_DAT_02d0c150);
      uVar6 = 0;
      switch(*(uint *)(param_1 + 0x20c30)) {
      case 0:
      case 1:
      case 2:
      case 3:
switchD_005265a3_caseD_0:
        uVar6 = 2;
        break;
      case 0xffffffff:
        if (iVar4 == 0) goto switchD_005265a3_caseD_0;
        if (*(int *)(*(int *)(param_1 + 0x20c24) + 0x56c) == 9) {
          uVar6 = 8;
        }
        else {
          uVar6 = 1;
        }
      }
      if ((uVar6 & uVar3) != 0) {
        *(uint *)(param_1 + 0x2f04) = 0;
        *(int *)(param_1 + 0x2f00) = *(int *)(param_1 + 0x20c30) + 0xd;
        *(uint *)(param_1 + 0x20b64) = 7;
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"?wp_holystaff.wav" + 1);
        return;
      }
      iVar2 = iVar2 + 1;
      if (0x13 < iVar2) {
        return;
      }
    } while( true );
  }
LAB_00526426:
  if ((*(int *)(param_1 + 0x20c24) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x20c24) + 0x2e0), iVar2 != 3)) {
    switch(iVar2) {
    case 0:
    case 5:
      uVar5 = 2;
      break;
    case 1:
      uVar5 = 4;
      break;
    case 2:
      uVar5 = 5;
      break;
    default:
      uVar5 = 0;
      break;
    case 4:
      uVar5 = 7;
      break;
    case 7:
    case 0xc:
      uVar5 = 8;
      break;
    case 8:
      uVar5 = 0;
      break;
    case 9:
    case 10:
      uVar5 = 0xe;
      break;
    case 0xd:
      uVar5 = 0x11;
      break;
    case 0xe:
      uVar5 = 0x12;
    }
    fVar1 = (float)FUN_00433a60(param_1,uVar5);
    if ((((float)_DAT_005cd987 <= fVar1) && (1.0 <= *(float *)(param_1 + 0x20bf4))) &&
       (*(float *)(param_1 + 0x20bf0) <= 0.0)) {
      if (0.0 < *(float *)(param_1 + 0x3254)) {
        if (*(int *)(param_1 + 0x3258) == 4) {
          *(uint *)(param_1 + 0x20b60) = 1;
        }
      }
      else {
        *(uint *)(param_1 + 0x20b60) = 0;
      }
      iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20c24) + 0x154) + 0xe8))
                        (*(int *)(param_1 + 0x20c24));
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0x20c24);
        iVar4 = *(int *)(iVar2 + 0x2e0);
        if (iVar4 == 0xc) {
          iVar2 = FUN_0040c840(iVar2,_DAT_01d70c94);
          if (iVar2 != 0) {
            *(uint *)(param_1 + 0x2f04) = 0;
            *(uint *)(param_1 + 0x20b64) = 10;
            *(uint *)(param_1 + 0x2f00) = 0x1c;
            return;
          }
          iVar2 = FUN_0040c840(*(uint *)(param_1 + 0x20c24),_DAT_01d0cee8);
          if (iVar2 != 0) {
            *(uint *)(param_1 + 0x2f04) = 0;
            *(uint *)(param_1 + 0x20b64) = 0xb;
            *(uint *)(param_1 + 0x2f00) = 0x1b;
            return;
          }
        }
        else {
          if (iVar4 == 0xd) {
            *(uint *)(param_1 + 0x2f04) = 0;
            *(uint *)(param_1 + 0x20b64) = 0xc;
            *(uint *)(param_1 + 0x2f00) = 0x1f;
            return;
          }
          if (iVar4 == 0xe) {
            *(uint *)(param_1 + 0x2f04) = 0;
            *(uint *)(param_1 + 0x20b64) = 0xd;
            *(uint *)(param_1 + 0x2f00) = 0x20;
          }
          else {
            (**(code **)(*(int *)(iVar2 + 0x154) + 0xe4))(iVar2);
            FUN_0051f360(param_1,0);
            if (*(int *)(*(int *)(param_1 + 0x20c24) + 0x2dc) == 2) {
              *(uint *)(param_1 + 0x2f04) = 0;
              *(uint *)(param_1 + 0x2f00) = 8;
            }
            if (*(int *)(*(int *)(param_1 + 0x20c24) + 0x2dc) == 1) {
              *(uint *)(param_1 + 0x2f04) = 0;
              *(uint *)(param_1 + 0x2f00) = 0x19;
              return;
            }
          }
        }
      }
    }
  }
  return;
}
