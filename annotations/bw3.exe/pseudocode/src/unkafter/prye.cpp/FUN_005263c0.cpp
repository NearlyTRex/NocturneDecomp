// Name: unkafter_prye.cpp_FUN_005263c0
// Address: 005263c0
// Address Range: [[005263c0, 005267a1]]
// Convention: unknown
// Signature: void unkafter_prye_cpp_FUN_005263c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_prye_cpp_FUN_005263c0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
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
    iVar6 = 0;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
    *(int *)(param_1 + 0x20c30) = iVar2;
    do {
      iVar2 = *(int *)(param_1 + 0x20c30) + 1;
      *(int *)(param_1 + 0x20c30) = iVar2;
      if ((iVar2 < 0) || (2 < iVar2)) {
        *(uint *)(param_1 + 0x20c30) = 0;
      }
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)(param_1 + 0x20c24),g_CWeaponClassInfo.name_hash);
      uVar5 = 0;
      switch(*(uint *)(param_1 + 0x20c30)) {
      case 0:
      case 1:
      case 2:
      case 3:
switchD_005265a3_caseD_0:
        uVar5 = 2;
        break;
      case 0xffffffff:
        if (iVar2 == 0) goto switchD_005265a3_caseD_0;
        if (*(int *)(*(int *)(param_1 + 0x20c24) + 0x56c) == 9) {
          uVar5 = 8;
        }
        else {
          uVar5 = 1;
        }
      }
      if ((uVar5 & uVar3) != 0) {
        *(uint *)(param_1 + 0x2f04) = 0;
        *(int *)(param_1 + 0x2f00) = *(int *)(param_1 + 0x20c30) + 0xd;
        *(uint *)(param_1 + 0x20b64) = 7;
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"?wp_holystaff.wav" + 1);
        return;
      }
      iVar6 = iVar6 + 1;
      if (0x13 < iVar6) {
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
      uVar4 = 2;
      break;
    case 1:
      uVar4 = 4;
      break;
    case 2:
      uVar4 = 5;
      break;
    default:
      uVar4 = 0;
      break;
    case 4:
      uVar4 = 7;
      break;
    case 7:
    case 0xc:
      uVar4 = 8;
      break;
    case 8:
      uVar4 = 0;
      break;
    case 9:
    case 10:
      uVar4 = 0xe;
      break;
    case 0xd:
      uVar4 = 0x11;
      break;
    case 0xe:
      uVar4 = 0x12;
    }
    fVar1 = (float)core_charactr_cpp_FUN_00433a60(param_1,uVar4);
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
        iVar6 = *(int *)(iVar2 + 0x2e0);
        if (iVar6 == 0xc) {
          iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (iVar2,g_CLightStaffClassInfo.name_hash);
          if (iVar2 != 0) {
            *(uint *)(param_1 + 0x2f04) = 0;
            *(uint *)(param_1 + 0x20b64) = 10;
            *(uint *)(param_1 + 0x2f00) = 0x1c;
            return;
          }
          iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)(param_1 + 0x20c24),g_CFirestaffClassInfo.name_hash);
          if (iVar2 != 0) {
            *(uint *)(param_1 + 0x2f04) = 0;
            *(uint *)(param_1 + 0x20b64) = 0xb;
            *(uint *)(param_1 + 0x2f00) = 0x1b;
            return;
          }
        }
        else {
          if (iVar6 == 0xd) {
            *(uint *)(param_1 + 0x2f04) = 0;
            *(uint *)(param_1 + 0x20b64) = 0xc;
            *(uint *)(param_1 + 0x2f00) = 0x1f;
            return;
          }
          if (iVar6 == 0xe) {
            *(uint *)(param_1 + 0x2f04) = 0;
            *(uint *)(param_1 + 0x20b64) = 0xd;
            *(uint *)(param_1 + 0x2f00) = 0x20;
          }
          else {
            (**(code **)(*(int *)(iVar2 + 0x154) + 0xe4))(iVar2);
            core_prye_cpp_FUN_0051f360(param_1,0);
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
