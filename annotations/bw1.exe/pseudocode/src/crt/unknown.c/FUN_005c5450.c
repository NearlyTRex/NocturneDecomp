// Name: crt_unknown.c_FUN_005c5450
// Address: 005c5450
// Address Range: [[005c5450, 005c571a]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c5450(int param_1,byte *param_2,undefined4 *param_3)

#include "nocturne.h"

int FUN_005c5450(int param_1,byte *param_2,uint *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_14;
  
  local_14 = *param_3;
  iVar6 = 0;
  iVar7 = 0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  do {
    pbVar1 = param_2 + 1;
    uVar5 = (uint)*param_2;
    if (uVar5 == 0) goto LAB_005c5700;
    if (((&DAT_00626114)[(byte)(*param_2 + 1)] & 2) != 0) {
      param_2 = pbVar1;
      iVar3 = FUN_005c5818(param_1);
      iVar7 = iVar7 + iVar3;
      goto LAB_005c56c4;
    }
    if (uVar5 == 0x25) {
      param_2 = pbVar1;
      param_2 = (byte *)FUN_005c571c(pbVar1,param_1);
      bVar2 = *param_2;
      if (bVar2 != 0) {
        param_2 = param_2 + 1;
      }
      if (bVar2 < 100) {
        if (bVar2 < 0x47) {
          if (bVar2 < 0x43) {
            if (bVar2 == 0x25) {
              iVar3 = FUN_005c5430(param_1);
              if (iVar3 == 0x25) goto LAB_005c56c3;
              if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
                FUN_005c543c(iVar3,param_1);
              }
              goto LAB_005c5700;
            }
          }
          else {
            if (bVar2 < 0x44) {
              *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x20;
LAB_005c5672:
              iVar3 = FUN_005c5854(param_1,&local_14);
              goto LAB_005c567e;
            }
            if (bVar2 == 0x45) goto LAB_005c563f;
          }
        }
        else {
          if (bVar2 < 0x48) {
LAB_005c563f:
            iVar3 = FUN_005c5c78(param_1,&local_14);
            goto LAB_005c567e;
          }
          if (bVar2 < 0x58) {
            if (bVar2 == 0x53) {
              *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x20;
LAB_005c564e:
              iVar3 = FUN_005c594c(param_1,&local_14);
              goto LAB_005c567e;
            }
          }
          else {
            if (bVar2 < 0x59) goto LAB_005c562b;
            if (0x5a < bVar2) {
              if (bVar2 < 0x5c) {
                iVar3 = FUN_005c5b64(param_1,&local_14,&param_2);
                goto LAB_005c567e;
              }
              if (bVar2 == 99) goto LAB_005c5672;
            }
          }
        }
      }
      else if (bVar2 < 0x65) {
        iVar3 = FUN_005c5f7c(param_1,&local_14,10,1);
LAB_005c567e:
        if (iVar3 < 1) goto LAB_005c5700;
        iVar7 = iVar7 + iVar3;
        if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
          iVar6 = iVar6 + 1;
        }
      }
      else if (bVar2 < 0x6f) {
        if (bVar2 < 0x69) {
          if (bVar2 < 0x68) goto LAB_005c563f;
        }
        else {
          if (bVar2 < 0x6a) {
            iVar3 = FUN_005c5f7c(param_1,&local_14,0,1);
            goto LAB_005c567e;
          }
          if (bVar2 == 0x6e) {
            FUN_005c5ab0(param_1,&local_14,iVar7);
          }
        }
      }
      else {
        if (bVar2 < 0x70) {
          iVar3 = FUN_005c5f7c(param_1,&local_14,8,1);
          goto LAB_005c567e;
        }
        if (bVar2 < 0x73) {
          if (bVar2 == 0x70) {
LAB_005c562b:
            iVar3 = FUN_005c5f7c(param_1,&local_14,0x10,1);
            goto LAB_005c567e;
          }
        }
        else {
          if (bVar2 < 0x74) goto LAB_005c564e;
          if (0x74 < bVar2) {
            if (bVar2 < 0x76) {
              iVar3 = FUN_005c5f7c(param_1,&local_14,10,0);
              goto LAB_005c567e;
            }
            if (bVar2 == 0x78) goto LAB_005c562b;
          }
        }
      }
    }
    else {
      param_2 = pbVar1;
      uVar4 = FUN_005c5430(param_1);
      if (uVar4 != uVar5) {
        if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
          FUN_005c543c(uVar4,param_1);
        }
        goto LAB_005c5700;
      }
LAB_005c56c3:
      iVar7 = iVar7 + 1;
    }
LAB_005c56c4:
  } while ((*(byte *)(param_1 + 0x10) & 2) == 0);
  if (*param_2 == 0x25) {
    param_2 = param_2 + 1;
    param_2 = (byte *)FUN_005c571c(param_2,param_1);
    if (*param_2 == 'n') {
      FUN_005c5ab0(param_1,&local_14,iVar7);
    }
  }
LAB_005c5700:
  if ((iVar6 == 0) && ((*(byte *)(param_1 + 0x10) & 2) != 0)) {
    iVar6 = -1;
  }
  return iVar6;
}
