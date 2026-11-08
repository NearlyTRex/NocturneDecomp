// Name: FUN_005c2784
// Address: 005c2784
// Address Range: [[005c2784, 005c2c12]]
// Convention: unknown
// Signature: uint FUN_005c2784(int param_1,uint param_2,char *param_3,undefined4 *param_4)

#include "nocturne.h"

uint FUN_005c2784(int param_1,uint param_2,char *param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_a0 [132];
  uint local_1c;
  uint local_18;
  char *local_14;
  
  bVar8 = 0;
  local_1c = 0;
  local_18 = param_2;
  local_14 = (char *)0x0;
LAB_005c27ba:
  while (cVar1 = *param_3, cVar1 == '\0') {
    if (local_14 == (char *)0x0) {
      if (local_1c < param_2) {
        *(byte *)(param_1 + local_1c) = 0;
      }
      else {
        local_1c = 0;
      }
      return local_1c;
    }
    param_3 = local_14 + 1;
    local_14 = (char *)0x0;
  }
  if (cVar1 == '%') {
    bVar2 = param_3[1];
    param_3 = param_3 + 1;
    if (bVar2 < 0x61) {
      if (bVar2 < 0x4d) {
        if (bVar2 < 0x42) {
          if (((bVar2 < 0x25) || (bVar2 < 0x26)) || (bVar2 != 0x41)) goto LAB_005c2b64;
          pcVar6 = (&PTR_s_Sunday_00626254)[param_4[6]];
          goto LAB_005c2b70;
        }
        if (bVar2 < 0x43) {
          pcVar6 = (&PTR_s_January_006262a0)[param_4[4]];
          goto LAB_005c2b70;
        }
        if (0x47 < bVar2) {
          if (bVar2 < 0x49) {
            FUN_005c2750(local_a0,param_4[2]);
            pcVar6 = local_a0;
          }
          else {
            if (bVar2 != 0x49) goto LAB_005c2b64;
            iVar3 = param_4[2];
            if (0xc < iVar3) {
              iVar3 = iVar3 + -0xc;
            }
            if (iVar3 == 0) {
              iVar3 = 0xc;
            }
            FUN_005c2750(local_a0,iVar3);
            pcVar6 = local_a0;
          }
          goto LAB_005c2b70;
        }
        if (bVar2 != 0x44) goto LAB_005c2b64;
        local_14 = param_3;
        param_3 = "%m/%d/%y";
        goto LAB_005c27ba;
      }
      if (bVar2 < 0x4e) {
        FUN_005c2750(local_a0,param_4[1]);
        pcVar6 = local_a0;
      }
      else if (bVar2 < 0x57) {
        if (bVar2 < 0x54) {
          if (bVar2 == 0x53) {
            FUN_005c2750(local_a0,*param_4);
            pcVar6 = local_a0;
          }
          else {
LAB_005c2b64:
            local_a0[0] = *param_3;
            local_a0[1] = 0;
            pcVar6 = local_a0;
          }
        }
        else {
          if (bVar2 < 0x55) goto LAB_005c2b09;
          if (bVar2 != 0x55) goto LAB_005c2b64;
          FUN_005c2750(local_a0,((param_4[7] + 7) - param_4[6]) / 7);
          pcVar6 = local_a0;
        }
      }
      else {
        if (bVar2 < 0x58) {
          FUN_005c2750(local_a0,((6 - (((int)param_4[7] % 7 - param_4[6]) + 7) % 7) + param_4[7]) /
                                7);
          pcVar6 = local_a0;
          goto LAB_005c2b70;
        }
        if (bVar2 < 0x59) {
LAB_005c2b09:
          local_14 = param_3;
          param_3 = "%H:%M:%S";
          goto LAB_005c27ba;
        }
        if (0x59 < bVar2) {
          if (bVar2 == 0x5a) goto LAB_005c2b53;
          goto LAB_005c2b64;
        }
        FUN_005c9e48(param_4[5] + 0x76c,local_a0,10);
        pcVar6 = local_a0;
      }
    }
    else if (bVar2 < 0x62) {
      pcVar6 = &DAT_00626238 + param_4[6] * 4;
    }
    else if (bVar2 < 0x6e) {
      if (bVar2 < 100) {
        if (0x62 < bVar2) {
          local_14 = param_3;
          param_3 = "%a %b %d %H:%M:%S %Y";
          goto LAB_005c27ba;
        }
LAB_005c2952:
        pcVar6 = &DAT_00626270 + param_4[4] * 4;
      }
      else if (bVar2 < 0x65) {
        FUN_005c2750(local_a0,param_4[3]);
        pcVar6 = local_a0;
      }
      else {
        if (bVar2 < 0x6a) {
          if (bVar2 != 0x68) goto LAB_005c2b64;
          goto LAB_005c2952;
        }
        if (bVar2 < 0x6b) {
          FUN_005c9e48(param_4[7] + 0x65,local_a0,10);
          local_a0[0] = local_a0[0] + -1;
          pcVar6 = local_a0;
        }
        else {
          if (bVar2 != 0x6d) goto LAB_005c2b64;
          FUN_005c2750(local_a0,param_4[4] + 1);
          pcVar6 = local_a0;
        }
      }
    }
    else if (bVar2 < 0x6f) {
      pcVar6 = &DAT_005faaf4;
    }
    else if (bVar2 < 0x77) {
      if (bVar2 < 0x72) {
        if (bVar2 != 0x70) goto LAB_005c2b64;
        if ((int)param_4[2] < 0xc) {
          pcVar6 = &DAT_005fab04;
        }
        else {
          pcVar6 = &DAT_005fab08;
        }
      }
      else {
        if (bVar2 < 0x73) {
          local_14 = param_3;
          param_3 = "%I:%M:%S %p";
          goto LAB_005c27ba;
        }
        if (bVar2 != 0x74) goto LAB_005c2b64;
        pcVar6 = &DAT_005fab0c;
      }
    }
    else {
      if (bVar2 < 0x78) {
        local_a0[1] = 0;
        local_a0[0] = *(char *)(param_4 + 6) + '0';
        pcVar6 = local_a0;
        goto LAB_005c2b70;
      }
      if (bVar2 < 0x79) {
        local_14 = param_3;
        param_3 = "%a %b %d, %Y";
        goto LAB_005c27ba;
      }
      if (bVar2 < 0x7a) {
        FUN_005c2750(local_a0,(int)param_4[5] % 100);
        pcVar6 = local_a0;
      }
      else {
        if (bVar2 != 0x7a) goto LAB_005c2b64;
LAB_005c2b53:
        FUN_005c9428();
        pcVar6 = (&PTR_DAT_00626990)[param_4[8]];
      }
    }
  }
  else {
    local_a0[0] = cVar1;
    local_a0[1] = 0;
    pcVar6 = local_a0;
  }
LAB_005c2b70:
  param_3 = param_3 + 1;
  uVar4 = 0xffffffff;
  pcVar7 = pcVar6;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar4 - 1;
  if (local_18 < ~uVar4 - 1) {
    uVar5 = local_18;
  }
  pcVar7 = (char *)(param_1 + local_1c);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)pcVar7 = *(uint *)pcVar6;
    pcVar6 = pcVar6 + (uint)bVar8 * -8 + 4;
    pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
  }
  for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  }
  local_18 = local_18 - uVar5;
  local_1c = local_1c + uVar5;
  goto LAB_005c27ba;
}
