// Name: FUN_00491f40
// Address: 00491f40
// Address Range: [[00491f40, 00494626]]
// Convention: unknown
// Signature: uint FUN_00491f40(undefined4 param_1,int param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00491f40(uint param_1,int param_2,int *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *puVar12;
  char *pcVar13;
  char *pcVar14;
  byte bVar15;
  float afStackY_1134 [23];
  float local_10b8;
  byte local_10b4 [256];
  byte local_fb4 [256];
  char local_eb4 [256];
  char local_db4 [256];
  byte local_cb4 [255];
  char local_bb5 [200];
  char acStack_aed [200];
  char local_a25 [100];
  char acStack_9c1 [101];
  byte local_95c [99];
  char local_8f9 [100];
  char local_895 [101];
  byte local_830 [100];
  byte local_7cc [100];
  byte local_768 [99];
  char acStack_705 [100];
  char acStack_6a1 [100];
  char acStack_63d [100];
  char local_5d9 [101];
  byte local_574 [100];
  byte local_510 [100];
  byte local_4ac [100];
  byte local_448 [100];
  byte local_3e4 [99];
  char acStack_381 [100];
  char local_31d [100];
  char acStack_2b9 [100];
  char acStack_255 [100];
  char acStack_1f1 [101];
  byte local_18c [64];
  uint local_14c;
  float local_148 [4];
  float local_138;
  uint local_134;
  float local_130 [4];
  float local_120;
  uint local_11c;
  float afStack_118 [5];
  uint local_104;
  float local_100;
  int local_fc;
  char *local_f8;
  char *local_f4;
  char *local_ec;
  int local_e8;
  int local_e4;
  char *local_e0;
  int local_dc;
  int local_d8;
  char *local_d4;
  char *local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  char *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  float local_a8 [2];
  int local_a0;
  int local_98;
  int local_94;
  char *local_90;
  char *local_8c;
  int local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  char *local_60;
  int local_5c;
  int local_58;
  uint local_54;
  float *local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  
  bVar15 = 0;
  while (((&DAT_006074b8)[(byte)(*(char *)(*param_3 + param_2) + 1)] & 2) != 0) {
    *param_3 = *param_3 + 1;
  }
  if (*(char *)(param_2 + *param_3) == '.') {
    *param_3 = *param_3 + 1;
  }
  cVar1 = *(char *)(param_2 + *param_3);
  if (cVar1 == '\0') {
    pcVar13 = "Unexpected end of string";
    pcVar14 = &DAT_01c734b0;
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') {
        return 0xffffffff;
      }
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    return 0xffffffff;
  }
  if (cVar1 == '(') {
    *param_3 = *param_3 + 1;
    uVar6 = FUN_00494630(param_1,param_2,param_3);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    if (*(char *)(param_2 + *param_3) == ')') {
      *param_3 = *param_3 + 1;
      while (((&DAT_006074b8)[(byte)(*(char *)(*param_3 + param_2) + 1)] & 2) != 0) {
        *param_3 = *param_3 + 1;
      }
      return uVar6;
    }
    pcVar13 = "Matching ')' is missing";
    pcVar14 = &DAT_01c734b0;
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') {
        return 0xffffffff;
      }
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    return 0xffffffff;
  }
  if (cVar1 == '!') {
    *param_3 = *param_3 + 1;
    uVar6 = FUN_00491f40(param_1,param_2,param_3);
    if (-1 < (int)uVar6) {
      return (uint)(uVar6 == 0);
    }
    return uVar6;
  }
  iVar7 = FUN_00495460(cVar1);
  if (iVar7 == 0) {
    pcVar13 = "Syntax error";
    pcVar14 = &DAT_01c734b0;
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') {
        return 0xffffffff;
      }
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    return 0xffffffff;
  }
  puVar12 = local_18c;
  do {
    *puVar12 = *(byte *)(param_2 + *param_3);
    iVar7 = *param_3;
    *param_3 = iVar7 + 1;
    puVar12 = puVar12 + 1;
    iVar7 = FUN_00495460(*(byte *)(param_2 + iVar7 + 1));
  } while (iVar7 != 0);
  *puVar12 = 0;
  if (*(char *)(param_2 + *param_3) != '(') {
    while (((&DAT_006074b8)[(byte)(*(char *)(*param_3 + param_2) + 1)] & 2) != 0) {
      *param_3 = *param_3 + 1;
    }
    uVar6 = FUN_00491a10(param_1,local_18c);
    return uVar6;
  }
  local_104 = 0xffffffff;
  iVar7 = FUN_005a3260(local_18c,&DAT_005bf55d);
  if (iVar7 != 0) {
    iVar7 = FUN_005a3260(local_18c,"exists");
    if (iVar7 == 0) {
      local_e4 = -1;
      FUN_005a5b9c(param_2 + *param_3," ( %[^ )] )%n",acStack_255 + 1,&local_e4);
      if (local_e4 < 3) {
        pcVar13 = "Error parsing exists parameters.";
        pcVar14 = &DAT_01c734b0;
        do {
          cVar1 = *pcVar13;
          *pcVar14 = cVar1;
          if (cVar1 == '\0') {
            return 0xffffffff;
          }
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar14[1] = cVar1;
          pcVar14 = pcVar14 + 2;
        } while (cVar1 != '\0');
        return 0xffffffff;
      }
      pcVar13 = acStack_255 + 1;
      uVar6 = 0xffffffff;
      pcVar14 = pcVar13;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
      } while (cVar1 != '\0');
      iVar7 = ~uVar6 - 1;
      if (0 < iVar7) {
        pcVar14 = pcVar13 + iVar7;
        do {
          if (((&DAT_006074b8)[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
          iVar7 = iVar7 + -1;
          pcVar14 = pcVar14 + -1;
        } while (0 < iVar7);
      }
      pcVar13[iVar7] = '\0';
      local_e0 = acStack_255 + 2;
      while (((&DAT_006074b8)[(byte)(acStack_255[1] + 1)] & 2) != 0) {
        FUN_005a54c0(pcVar13,local_e0,iVar7);
        iVar7 = iVar7 + -1;
      }
      uVar6 = FUN_0048b950(acStack_255 + 1,DAT_007df9b0,&DAT_007df978);
      if ((uVar6 == 0) || (uVar6 == 0x0FFFFFFF)) {
        local_104 = 0;
      }
      else {
        local_104 = 1;
      }
      *param_3 = *param_3 + local_e4;
    }
    else {
      iVar7 = FUN_005a3260(local_18c,"fieldNotesDisplayed");
      if (iVar7 == 0) {
        local_dc = -1;
        FUN_005a5b9c(param_2 + *param_3," ( )%n",&local_dc);
        if (local_dc < 2) {
          pcVar13 = "Error parsing fieldNotesDisplayed condition.";
          pcVar14 = &DAT_01c734b0;
          do {
            cVar1 = *pcVar13;
            *pcVar14 = cVar1;
            if (cVar1 == '\0') {
              return 0xffffffff;
            }
            cVar1 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            pcVar14[1] = cVar1;
            pcVar14 = pcVar14 + 2;
          } while (cVar1 != '\0');
          return 0xffffffff;
        }
        local_104 = *(uint *)(0x01D1A05C + 0x40);
        *param_3 = *param_3 + local_dc;
      }
      else {
        iVar7 = FUN_005a3260(local_18c,"hasItem");
        if (iVar7 == 0) {
          if (*0x01DA62F0 != 0) {
            pcVar13 = "Can't use hasItem condition in multi-player";
            pcVar14 = &DAT_01c734b0;
            do {
              cVar1 = *pcVar13;
              *pcVar14 = cVar1;
              if (cVar1 == '\0') {
                return 0xffffffff;
              }
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              pcVar14[1] = cVar1;
              pcVar14 = pcVar14 + 2;
            } while (cVar1 != '\0');
            return 0xffffffff;
          }
          local_d8 = -1;
          FUN_005a5b9c(param_2 + *param_3," (%[^)])%n",acStack_6a1 + 1,&local_d8);
          if (local_d8 < 3) {
            pcVar13 = "Error parsing hasItem parameters.";
            pcVar14 = &DAT_01c734b0;
            do {
              cVar1 = *pcVar13;
              *pcVar14 = cVar1;
              if (cVar1 == '\0') {
                return 0xffffffff;
              }
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              pcVar14[1] = cVar1;
              pcVar14 = pcVar14 + 2;
            } while (cVar1 != '\0');
            return 0xffffffff;
          }
          pcVar13 = acStack_6a1 + 1;
          uVar6 = 0xffffffff;
          pcVar14 = pcVar13;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar14;
            pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
          } while (cVar1 != '\0');
          iVar7 = ~uVar6 - 1;
          if (0 < iVar7) {
            pcVar14 = pcVar13 + iVar7;
            do {
              if (((&DAT_006074b8)[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
              iVar7 = iVar7 + -1;
              pcVar14 = pcVar14 + -1;
            } while (0 < iVar7);
          }
          pcVar13[iVar7] = '\0';
          local_7c = acStack_6a1 + 2;
          while (((&DAT_006074b8)[(byte)(acStack_6a1[1] + 1)] & 2) != 0) {
            FUN_005a54c0(pcVar13,local_7c,iVar7);
            iVar7 = iVar7 + -1;
          }
          iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          local_104 = 0;
          if ((iVar7 != 0) && (iVar7 = FUN_004db990(iVar7 + 0x206e8,acStack_6a1 + 1), iVar7 != 0)) {
            local_104 = 1;
          }
          *param_3 = *param_3 + local_d8;
        }
        else {
          iVar7 = FUN_005a3260(local_18c,"hasItemType");
          if (iVar7 == 0) {
            local_78 = -1;
            FUN_005a5b9c(param_2 + *param_3," (%[^,], %[^)] )%n",acStack_63d + 1,local_a25 + 1,&local_78);
            if (local_78 < 5) {
              pcVar13 = "Error parsing hasItemType parameters.";
              pcVar14 = &DAT_01c734b0;
              do {
                cVar1 = *pcVar13;
                *pcVar14 = cVar1;
                if (cVar1 == '\0') {
                  return 0xffffffff;
                }
                cVar1 = pcVar13[1];
                pcVar13 = pcVar13 + 2;
                pcVar14[1] = cVar1;
                pcVar14 = pcVar14 + 2;
              } while (cVar1 != '\0');
            }
            else {
              pcVar13 = acStack_63d + 1;
              uVar6 = 0xffffffff;
              pcVar14 = pcVar13;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *pcVar14;
                pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
              } while (cVar1 != '\0');
              iVar7 = ~uVar6 - 1;
              if (0 < iVar7) {
                pcVar14 = pcVar13 + iVar7;
                do {
                  if (((&DAT_006074b8)[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
                  iVar7 = iVar7 + -1;
                  pcVar14 = pcVar14 + -1;
                } while (0 < iVar7);
              }
              pcVar13[iVar7] = '\0';
              local_d4 = acStack_63d + 2;
              while (((&DAT_006074b8)[(byte)(acStack_63d[1] + 1)] & 2) != 0) {
                FUN_005a54c0(pcVar13,local_d4,iVar7);
                iVar7 = iVar7 + -1;
              }
              uVar6 = 0xffffffff;
              pcVar13 = local_a25 + 1;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + (uint)bVar15 * -2 + 1;
              } while (cVar1 != '\0');
              iVar7 = ~uVar6 - 1;
              if (0 < iVar7) {
                pcVar13 = local_a25 + ~uVar6;
                do {
                  if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                  iVar7 = iVar7 + -1;
                  pcVar13 = pcVar13 + -1;
                } while (0 < iVar7);
              }
              (local_a25 + 1)[iVar7] = '\0';
              local_d0 = local_a25 + 2;
              while (((&DAT_006074b8)[(byte)(local_a25[1] + 1)] & 2) != 0) {
                FUN_005a54c0(local_a25 + 1,local_d0,iVar7);
                iVar7 = iVar7 + -1;
              }
              uVar6 = FUN_0048b950(acStack_63d + 1,_DAT_01d5ba70,0x1d5ba38);
              if (uVar6 != 0) {
                if (uVar6 == 0x0FFFFFFF) {
                  local_104 = 0;
                  *param_3 = *param_3 + local_78;
                }
                else {
                  local_104 = FUN_004dba80(uVar6 + 0x206e8,local_a25 + 1);
                  *param_3 = *param_3 + local_78;
                }
                goto LAB_004923ef;
              }
            }
            return 0xffffffff;
          }
          iVar7 = FUN_005a3260(local_18c,"hasKeyMask");
          if (iVar7 == 0) {
            if (*0x01DA62F0 != 0) {
              pcVar13 = "Can't use hasKeyMask condition in multi-player";
              pcVar14 = &DAT_01c734b0;
              do {
                cVar1 = *pcVar13;
                *pcVar14 = cVar1;
                if (cVar1 == '\0') {
                  return 0xffffffff;
                }
                cVar1 = pcVar13[1];
                pcVar13 = pcVar13 + 2;
                pcVar14[1] = cVar1;
                pcVar14 = pcVar14 + 2;
              } while (cVar1 != '\0');
              return 0xffffffff;
            }
            local_cc = -1;
            FUN_005a5b9c(param_2 + *param_3," ( %d )%n",&local_c8,&local_cc);
            if (local_cc < 3) {
              pcVar13 = "Error parsing hasKeyMask parameters.";
              pcVar14 = &DAT_01c734b0;
              do {
                cVar1 = *pcVar13;
                *pcVar14 = cVar1;
                if (cVar1 == '\0') {
                  return 0xffffffff;
                }
                cVar1 = pcVar13[1];
                pcVar13 = pcVar13 + 2;
                pcVar14[1] = cVar1;
                pcVar14 = pcVar14 + 2;
              } while (cVar1 != '\0');
              return 0xffffffff;
            }
            if (local_c8 == 0) {
              pcVar13 = "hasKeyMask(0) always returns false!";
              pcVar14 = &DAT_01c734b0;
              do {
                cVar1 = *pcVar13;
                *pcVar14 = cVar1;
                if (cVar1 == '\0') {
                  return 0xffffffff;
                }
                cVar1 = pcVar13[1];
                pcVar13 = pcVar13 + 2;
                pcVar14[1] = cVar1;
                pcVar14 = pcVar14 + 2;
              } while (cVar1 != '\0');
              return 0xffffffff;
            }
            if ((local_c8 - 1 & local_c8) != 0) {
              pcVar13 = "mask value must be a power of 2.\n(To test for multiple keys, use multiple hasKeyMask() tests)";
              pcVar14 = &DAT_01c734b0;
              do {
                cVar1 = *pcVar13;
                *pcVar14 = cVar1;
                if (cVar1 == '\0') {
                  return 0xffffffff;
                }
                cVar1 = pcVar13[1];
                pcVar13 = pcVar13 + 2;
                pcVar14[1] = cVar1;
                pcVar14 = pcVar14 + 2;
              } while (cVar1 != '\0');
              return 0xffffffff;
            }
            iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            local_104 = 0;
            if ((iVar7 != 0) && (iVar7 = FUN_004de610(iVar7 + 0x206e8,local_c8,0), iVar7 != 0)) {
              local_104 = 1;
            }
            *param_3 = *param_3 + local_cc;
          }
          else {
            iVar7 = FUN_005a3260(local_18c,"isBroken");
            if (iVar7 == 0) {
              local_c4 = -1;
              FUN_005a5b9c(param_2 + *param_3," (%[^)])%n",acStack_9c1 + 1,&local_c4);
              if (local_c4 < 3) {
                pcVar13 = "Error parsing isBroken parameters.";
                pcVar14 = &DAT_01c734b0;
                do {
                  cVar1 = *pcVar13;
                  *pcVar14 = cVar1;
                  if (cVar1 == '\0') {
                    return 0xffffffff;
                  }
                  cVar1 = pcVar13[1];
                  pcVar13 = pcVar13 + 2;
                  pcVar14[1] = cVar1;
                  pcVar14 = pcVar14 + 2;
                } while (cVar1 != '\0');
              }
              else {
                pcVar13 = acStack_9c1 + 1;
                uVar6 = 0xffffffff;
                pcVar14 = pcVar13;
                do {
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  cVar1 = *pcVar14;
                  pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
                } while (cVar1 != '\0');
                iVar7 = ~uVar6 - 1;
                if (0 < iVar7) {
                  pcVar14 = pcVar13 + iVar7;
                  do {
                    if (((&DAT_006074b8)[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
                    iVar7 = iVar7 + -1;
                    pcVar14 = pcVar14 + -1;
                  } while (0 < iVar7);
                }
                pcVar13[iVar7] = '\0';
                local_c0 = acStack_9c1 + 2;
                while (((&DAT_006074b8)[(byte)(acStack_9c1[1] + 1)] & 2) != 0) {
                  FUN_005a54c0(pcVar13,local_c0,iVar7);
                  iVar7 = iVar7 + -1;
                }
                uVar6 = FUN_0048b950(acStack_9c1 + 1,_DAT_01d22e04,0x1d22dcc);
                if (uVar6 != 0) {
                  if (uVar6 == 0x0FFFFFFF) {
                    local_104 = 0;
                    *param_3 = *param_3 + local_c4;
                  }
                  else {
                    local_104 = (uint)(*(int *)(uVar6 + 0x1b0) != 0);
                    *param_3 = *param_3 + local_c4;
                  }
                  goto LAB_004923ef;
                }
              }
              return 0xffffffff;
            }
            iVar7 = FUN_005a3260(local_18c,"isCurrentCamera");
            if (iVar7 == 0) {
              local_bc = -1;
              FUN_005a5b9c(param_2 + *param_3," ( %[^ )] )%n",local_510,&local_bc);
              if (local_bc < 3) {
                pcVar13 = "Error parsing isCurrentCamera parameters.";
                pcVar14 = &DAT_01c734b0;
                do {
                  cVar1 = *pcVar13;
                  *pcVar14 = cVar1;
                  if (cVar1 == '\0') {
                    return 0xffffffff;
                  }
                  cVar1 = pcVar13[1];
                  pcVar13 = pcVar13 + 2;
                  pcVar14[1] = cVar1;
                  pcVar14 = pcVar14 + 2;
                } while (cVar1 != '\0');
                return 0xffffffff;
              }
              local_104 = 0;
              if ((-1 < *(int *)(0x01ED78C8 + 0x15aeb8)) &&
                 (iVar7 = FUN_005a3260(*(int *)(0x01ED78C8 + 0x15aeb8) * 0x1a4 + 0x01ED78C8 + 4,
                                       local_510), iVar7 == 0)) {
                local_104 = 1;
              }
              *param_3 = *param_3 + local_bc;
            }
            else {
              iVar7 = FUN_005a3260(local_18c,"isCurrentSet");
              if (iVar7 == 0) {
                local_b8 = -1;
                FUN_005a5b9c(param_2 + *param_3," ( %[^ )] )%n",local_7cc,&local_b8);
                if (local_b8 < 3) {
                  pcVar13 = "Error parsing isCurrentSet parameters.";
                  pcVar14 = &DAT_01c734b0;
                  do {
                    cVar1 = *pcVar13;
                    *pcVar14 = cVar1;
                    if (cVar1 == '\0') {
                      return 0xffffffff;
                    }
                    cVar1 = pcVar13[1];
                    pcVar13 = pcVar13 + 2;
                    pcVar14[1] = cVar1;
                    pcVar14 = pcVar14 + 2;
                  } while (cVar1 != '\0');
                  return 0xffffffff;
                }
                local_104 = 0;
                if (-1 < *0x01D81080) {
                  FUN_00465e50(local_7cc,0,0,local_cb4,0);
                  FUN_00465e50(0x01D81080 + *0x01D81080 * 0x40 + 2,0,0,local_fb4,0);
                  iVar7 = FUN_005a3260(local_cb4,local_fb4);
                  if (iVar7 == 0) {
                    local_104 = 1;
                  }
                }
                *param_3 = *param_3 + local_b8;
              }
              else {
                iVar7 = FUN_005a3260(local_18c,"isDead");
                if (iVar7 == 0) {
                  local_b4 = -1;
                  FUN_005a5b9c(param_2 + *param_3," ( %[^ )] )%n",local_830,&local_b4);
                  if (local_b4 < 3) {
                    pcVar13 = "Error parsing isDead parameters.";
                    pcVar14 = &DAT_01c734b0;
                    do {
                      cVar1 = *pcVar13;
                      *pcVar14 = cVar1;
                      if (cVar1 == '\0') {
                        return 0xffffffff;
                      }
                      cVar1 = pcVar13[1];
                      pcVar13 = pcVar13 + 2;
                      pcVar14[1] = cVar1;
                      pcVar14 = pcVar14 + 2;
                    } while (cVar1 != '\0');
                    return 0xffffffff;
                  }
                  uVar6 = FUN_0048b950(local_830,DAT_007e2cec,&DAT_007e2cb4);
                  if (uVar6 == 0) {
                    return 1;
                  }
                  if (uVar6 == 0x0FFFFFFF) {
                    local_104 = 0;
                    *param_3 = *param_3 + local_b4;
                  }
                  else {
                    iVar7 = (**(code **)(*(int *)(uVar6 + 0x154) + 0x10c))(uVar6);
                    local_104 = (uint)(1 < iVar7);
                    *param_3 = *param_3 + local_b4;
                  }
                }
                else {
                  iVar7 = FUN_005a3260(local_18c,"isFadeFinished");
                  if (iVar7 == 0) {
                    local_b0 = -1;
                    FUN_005a5b9c(param_2 + *param_3," ( )%n",&local_b0);
                    iVar7 = 0x01D2130C;
                    if (local_b0 < 2) {
                      pcVar13 = "Error parsing isFadeFinished function.";
                      pcVar14 = &DAT_01c734b0;
                      do {
                        cVar1 = *pcVar13;
                        *pcVar14 = cVar1;
                        if (cVar1 == '\0') {
                          return 0xffffffff;
                        }
                        cVar1 = pcVar13[1];
                        pcVar13 = pcVar13 + 2;
                        pcVar14[1] = cVar1;
                        pcVar14 = pcVar14 + 2;
                      } while (cVar1 != '\0');
                      return 0xffffffff;
                    }
                    *param_3 = *param_3 + local_b0;
                    local_104 = FUN_004bd8d0(iVar7);
                  }
                  else {
                    iVar7 = FUN_005a3260(local_18c,"isInRange");
                    if (iVar7 == 0) {
                      local_ac = -1;
                      FUN_005a5b9c(param_2 + *param_3," ( %n",&local_ac);
                      if (local_ac < 1) {
                        pcVar13 = "Error parsing isInRange parameters.";
                        pcVar14 = &DAT_01c734b0;
                        do {
                          cVar1 = *pcVar13;
                          *pcVar14 = cVar1;
                          if (cVar1 == '\0') {
                            return 0xffffffff;
                          }
                          cVar1 = pcVar13[1];
                          pcVar13 = pcVar13 + 2;
                          pcVar14[1] = cVar1;
                          pcVar14 = pcVar14 + 2;
                        } while (cVar1 != '\0');
                        return 0xffffffff;
                      }
                      *param_3 = *param_3 + local_ac;
                      iVar7 = FUN_0048ba80(param_2,param_3,local_148 + 2);
                      if (iVar7 < 0) {
                        return 0xffffffff;
                      }
                      local_ac = -1;
                      FUN_005a5b9c(param_2 + *param_3," , %n",&local_ac);
                      if (local_ac < 1) {
                        pcVar13 = "Error parsing isInRange parameters.";
                        pcVar14 = &DAT_01c734b0;
                        do {
                          cVar1 = *pcVar13;
                          *pcVar14 = cVar1;
                          if (cVar1 == '\0') {
                            return 0xffffffff;
                          }
                          cVar1 = pcVar13[1];
                          pcVar13 = pcVar13 + 2;
                          pcVar14[1] = cVar1;
                          pcVar14 = pcVar14 + 2;
                        } while (cVar1 != '\0');
                      }
                      else {
                        *param_3 = *param_3 + local_ac;
                        iVar8 = FUN_0048ba80(param_2,param_3,local_130 + 2);
                        if (-1 < iVar8) {
                          local_ac = -1;
                          FUN_005a5b9c(param_2 + *param_3," , %f )%n",local_a8,&local_ac);
                          if (local_ac < 3) {
                            pcVar13 = "Error parsing isInRange parameters.";
                            pcVar14 = &DAT_01c734b0;
                            do {
                              cVar1 = *pcVar13;
                              *pcVar14 = cVar1;
                              if (cVar1 == '\0') {
                                return 0xffffffff;
                              }
                              cVar1 = pcVar13[1];
                              pcVar13 = pcVar13 + 2;
                              pcVar14[1] = cVar1;
                              pcVar14 = pcVar14 + 2;
                            } while (cVar1 != '\0');
                            return 0xffffffff;
                          }
                          *param_3 = *param_3 + local_ac;
                          if ((iVar7 == 0) || (iVar8 == 0)) {
                            local_104 = 0;
                          }
                          else {
                            local_104 = (uint)(SQRT((local_138 - local_120) *
                                                    (local_138 - local_120) +
                                                    (local_148[3] - local_130[3]) *
                                                    (local_148[3] - local_130[3]) +
                                                    (local_148[2] - local_130[2]) *
                                                    (local_148[2] - local_130[2])) <= local_a8[0]);
                          }
                          goto LAB_004923ef;
                        }
                      }
                      return 0xffffffff;
                    }
                    iVar7 = FUN_005a3260(local_18c,"isOfType");
                    if (iVar7 == 0) {
                      local_98 = -1;
                      FUN_005a5b9c(param_2 + *param_3," ( %[^ ,] , %[^ )] )%n",acStack_381 + 1,local_895 + 1,
                                   &local_98);
                      if (local_98 < 3) {
                        pcVar13 = "Error parsing isOfType parameters.";
                        pcVar14 = &DAT_01c734b0;
                        do {
                          cVar1 = *pcVar13;
                          *pcVar14 = cVar1;
                          if (cVar1 == '\0') {
                            return 0xffffffff;
                          }
                          cVar1 = pcVar13[1];
                          pcVar13 = pcVar13 + 2;
                          pcVar14[1] = cVar1;
                          pcVar14 = pcVar14 + 2;
                        } while (cVar1 != '\0');
                      }
                      else {
                        pcVar13 = acStack_381 + 1;
                        uVar6 = 0xffffffff;
                        pcVar14 = pcVar13;
                        do {
                          if (uVar6 == 0) break;
                          uVar6 = uVar6 - 1;
                          cVar1 = *pcVar14;
                          pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
                        } while (cVar1 != '\0');
                        iVar7 = ~uVar6 - 1;
                        if (0 < iVar7) {
                          pcVar14 = pcVar13 + iVar7;
                          do {
                            if (((&DAT_006074b8)[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
                            iVar7 = iVar7 + -1;
                            pcVar14 = pcVar14 + -1;
                          } while (0 < iVar7);
                        }
                        pcVar13[iVar7] = '\0';
                        local_90 = acStack_381 + 2;
                        while (((&DAT_006074b8)[(byte)(acStack_381[1] + 1)] & 2) != 0) {
                          FUN_005a54c0(pcVar13,local_90,iVar7);
                          iVar7 = iVar7 + -1;
                        }
                        uVar6 = 0xffffffff;
                        pcVar13 = local_895 + 1;
                        do {
                          if (uVar6 == 0) break;
                          uVar6 = uVar6 - 1;
                          cVar1 = *pcVar13;
                          pcVar13 = pcVar13 + (uint)bVar15 * -2 + 1;
                        } while (cVar1 != '\0');
                        iVar7 = ~uVar6 - 1;
                        if (0 < iVar7) {
                          pcVar13 = local_895 + ~uVar6;
                          do {
                            if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                            iVar7 = iVar7 + -1;
                            pcVar13 = pcVar13 + -1;
                          } while (0 < iVar7);
                        }
                        (local_895 + 1)[iVar7] = '\0';
                        local_8c = local_895 + 2;
                        while (((&DAT_006074b8)[(byte)(local_895[1] + 1)] & 2) != 0) {
                          FUN_005a54c0(local_895 + 1,local_8c,iVar7);
                          iVar7 = iVar7 + -1;
                        }
                        uVar6 = FUN_0048b950(acStack_381 + 1,DAT_007df9b0,&DAT_007df978);
                        if (uVar6 != 0) {
                          if (uVar6 == 0x0FFFFFFF) {
                            local_104 = 0;
                            *param_3 = *param_3 + local_98;
                          }
                          else {
                            local_104 = FUN_0040c790(uVar6,local_895 + 1);
                            *param_3 = *param_3 + local_98;
                          }
                          goto LAB_004923ef;
                        }
                      }
                      return 0xffffffff;
                    }
                    iVar7 = FUN_005a3260(local_18c,"isFacing");
                    if (iVar7 == 0) {
                      local_88 = -1;
                      FUN_005a5b9c(param_2 + *param_3," (%[^,], %[^,)]%n",acStack_2b9 + 1,local_31d + 1,
                                   &local_88);
                      if (local_88 < 5) {
                        pcVar13 = "Error parsing isFacing parameters.";
                        pcVar14 = &DAT_01c734b0;
                        do {
                          cVar1 = *pcVar13;
                          *pcVar14 = cVar1;
                          if (cVar1 == '\0') {
                            return 0xffffffff;
                          }
                          cVar1 = pcVar13[1];
                          pcVar13 = pcVar13 + 2;
                          pcVar14[1] = cVar1;
                          pcVar14 = pcVar14 + 2;
                        } while (cVar1 != '\0');
                        return 0xffffffff;
                      }
                      pcVar13 = acStack_2b9 + 1;
                      uVar6 = 0xffffffff;
                      pcVar14 = pcVar13;
                      do {
                        if (uVar6 == 0) break;
                        uVar6 = uVar6 - 1;
                        cVar1 = *pcVar14;
                        pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
                      } while (cVar1 != '\0');
                      iVar7 = ~uVar6 - 1;
                      if (0 < iVar7) {
                        pcVar14 = pcVar13 + iVar7;
                        do {
                          if (((&DAT_006074b8)[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
                          iVar7 = iVar7 + -1;
                          pcVar14 = pcVar14 + -1;
                        } while (0 < iVar7);
                      }
                      pcVar13[iVar7] = '\0';
                      local_84 = acStack_2b9 + 2;
                      while (((&DAT_006074b8)[(byte)(acStack_2b9[1] + 1)] & 2) != 0) {
                        FUN_005a54c0(pcVar13,local_84,iVar7);
                        iVar7 = iVar7 + -1;
                      }
                      local_80 = local_31d + 1;
                      uVar6 = 0xffffffff;
                      pcVar13 = local_31d + 1;
                      do {
                        if (uVar6 == 0) break;
                        uVar6 = uVar6 - 1;
                        cVar1 = *pcVar13;
                        pcVar13 = pcVar13 + (uint)bVar15 * -2 + 1;
                      } while (cVar1 != '\0');
                      iVar7 = ~uVar6 - 1;
                      if (0 < iVar7) {
                        pcVar13 = local_31d + ~uVar6;
                        do {
                          if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                          iVar7 = iVar7 + -1;
                          pcVar13 = pcVar13 + -1;
                        } while (0 < iVar7);
                      }
                      (local_31d + 1)[iVar7] = '\0';
                      while (((&DAT_006074b8)[(byte)(*local_80 + 1)] & 2) != 0) {
                        FUN_005a54c0(local_80,local_31d + 2,iVar7);
                        iVar7 = iVar7 + -1;
                      }
                      uVar6 = FUN_0048b950(acStack_2b9 + 1,DAT_007df9b0,&DAT_007df978);
                      if ((uVar6 == 0) ||
                         (uVar10 = FUN_0048b950(local_31d + 1,DAT_007df9b0,&DAT_007df978),
                         uVar10 == 0)) {
                        return 0xffffffff;
                      }
                      *param_3 = *param_3 + local_88;
                      local_10b8 = 45.0;
                      if (*(char *)(param_2 + *param_3) == ',') {
                        local_88 = -1;
                        FUN_005a5b9c(param_2 + *param_3,",%f %n",&stack0xffffef48,&local_88);
                        if (local_88 < 2) {
                          pcVar13 = "Error parsing isFacing parameters.";
                          pcVar14 = &DAT_01c734b0;
                          do {
                            cVar1 = *pcVar13;
                            *pcVar14 = cVar1;
                            if (cVar1 == '\0') {
                              return 0xffffffff;
                            }
                            cVar1 = pcVar13[1];
                            pcVar13 = pcVar13 + 2;
                            pcVar14[1] = cVar1;
                            pcVar14 = pcVar14 + 2;
                          } while (cVar1 != '\0');
                          return 0xffffffff;
                        }
                        if (((double)local_10b8 < 0.0) || (_DAT_005bfdd0 < (double)local_10b8)) {
                          pcVar13 = "isFacing() angle must be in range 0..180.";
                          pcVar14 = &DAT_01c734b0;
                          do {
                            cVar1 = *pcVar13;
                            *pcVar14 = cVar1;
                            if (cVar1 == '\0') {
                              return 0xffffffff;
                            }
                            cVar1 = pcVar13[1];
                            pcVar13 = pcVar13 + 2;
                            pcVar14[1] = cVar1;
                            pcVar14 = pcVar14 + 2;
                          } while (cVar1 != '\0');
                          return 0xffffffff;
                        }
                        *param_3 = *param_3 + local_88;
                      }
                      uVar5 = 0x0FFFFFFF;
                      if (*(char *)(param_2 + *param_3) != ')') {
                        pcVar13 = "Error parsing isFacing parameters.";
                        pcVar14 = &DAT_01c734b0;
                        do {
                          cVar1 = *pcVar13;
                          *pcVar14 = cVar1;
                          if (cVar1 == '\0') {
                            return 0xffffffff;
                          }
                          cVar1 = pcVar13[1];
                          pcVar13 = pcVar13 + 2;
                          pcVar14[1] = cVar1;
                          pcVar14 = pcVar14 + 2;
                        } while (cVar1 != '\0');
                        return 0xffffffff;
                      }
                      *param_3 = *param_3 + 1;
                      if ((uVar6 == uVar5) || (uVar10 == uVar5)) {
                        local_104 = 0;
                      }
                      else {
                        FUN_00408bf0(uVar6,uVar10 + 0x20);
                        local_134 = local_11c;
                        local_130[(uint)bVar15 * -2] = afStack_118[(uint)bVar15 * -2];
                        local_130[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                             afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
                        local_130[0] = 0.0;
                        FUN_00576250(&local_134);
                        local_14c = afStack_118[2];
                        local_148[(uint)bVar15 * -2] = afStack_118[(uint)bVar15 * -2 + 3];
                        local_148[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                             afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
                        if (local_10b8 * _DAT_005bfdd8 * (float)_DAT_005bfde0 < ABS(local_148[0])) {
                          local_104 = 0;
                        }
                        else {
                          local_104 = 1;
                        }
                      }
                    }
                    else {
                      iVar7 = FUN_005a3260(local_18c,"isLightOn");
                      if (iVar7 == 0) {
                        local_74 = -1;
                        FUN_005a5b9c(param_2 + *param_3," ( %[^ )] )%n",local_4ac,&local_74);
                        if (local_74 < 3) {
                          pcVar13 = "Error parsing isLightOn parameters.";
                          pcVar14 = &DAT_01c734b0;
                          do {
                            cVar1 = *pcVar13;
                            *pcVar14 = cVar1;
                            if (cVar1 == '\0') {
                              return 0xffffffff;
                            }
                            cVar1 = pcVar13[1];
                            pcVar13 = pcVar13 + 2;
                            pcVar14[1] = cVar1;
                            pcVar14 = pcVar14 + 2;
                          } while (cVar1 != '\0');
                          return 0xffffffff;
                        }
                        FUN_0053b3b0(0x01ED78C8,local_4ac,&local_70,&local_6c);
                        if (local_70 == 0) {
                          FUN_005a28c0(local_eb4,"Spotlight %s doesn't exist.",local_4ac);
                          pcVar13 = local_eb4;
                          pcVar14 = &DAT_01c734b0;
                          do {
                            cVar1 = *pcVar13;
                            *pcVar14 = cVar1;
                            if (cVar1 == '\0') {
                              return 0xffffffff;
                            }
                            cVar1 = pcVar13[1];
                            pcVar13 = pcVar13 + 2;
                            pcVar14[1] = cVar1;
                            pcVar14 = pcVar14 + 2;
                          } while (cVar1 != '\0');
                          return 0xffffffff;
                        }
                        local_104 = (uint)(*(int *)(local_6c + 0x1cb4) != 0);
                        *param_3 = *param_3 + local_74;
                      }
                      else {
                        iVar7 = FUN_005a3260(local_18c,"isNudityEnabled");
                        if (iVar7 == 0) {
                          local_68 = -1;
                          FUN_005a5b9c(param_2 + *param_3," ( )%n",&local_68);
                          if (local_68 < 2) {
                            pcVar13 = "Error parsing isNudityEnabled().";
                            pcVar14 = &DAT_01c734b0;
                            do {
                              cVar1 = *pcVar13;
                              *pcVar14 = cVar1;
                              if (cVar1 == '\0') {
                                return 0xffffffff;
                              }
                              cVar1 = pcVar13[1];
                              pcVar13 = pcVar13 + 2;
                              pcVar14[1] = cVar1;
                              pcVar14 = pcVar14 + 2;
                            } while (cVar1 != '\0');
                            return 0xffffffff;
                          }
                          local_104 = (uint)(*(int *)(0x01D2130C + 0x18) != 0);
                          *param_3 = *param_3 + local_68;
                        }
                        else {
                          iVar7 = FUN_005a3260(local_18c,"isSfxActive");
                          if (iVar7 == 0) {
                            local_64 = -1;
                            FUN_005a5b9c(param_2 + *param_3," ( %[^ )] )%n",acStack_705 + 1,&local_64);
                            if (local_64 < 3) {
                              pcVar13 = "Error parsing isSfxActive parameters.";
                              pcVar14 = &DAT_01c734b0;
                              do {
                                cVar1 = *pcVar13;
                                *pcVar14 = cVar1;
                                if (cVar1 == '\0') {
                                  return 0xffffffff;
                                }
                                cVar1 = pcVar13[1];
                                pcVar13 = pcVar13 + 2;
                                pcVar14[1] = cVar1;
                                pcVar14 = pcVar14 + 2;
                              } while (cVar1 != '\0');
                              return 0xffffffff;
                            }
                            pcVar13 = acStack_705 + 1;
                            uVar6 = 0xffffffff;
                            pcVar14 = pcVar13;
                            do {
                              if (uVar6 == 0) break;
                              uVar6 = uVar6 - 1;
                              cVar1 = *pcVar14;
                              pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
                            } while (cVar1 != '\0');
                            iVar7 = ~uVar6 - 1;
                            if (0 < iVar7) {
                              pcVar14 = pcVar13 + iVar7;
                              do {
                                if (((&DAT_006074b8)[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
                                iVar7 = iVar7 + -1;
                                pcVar14 = pcVar14 + -1;
                              } while (0 < iVar7);
                            }
                            pcVar13[iVar7] = '\0';
                            local_60 = acStack_705 + 2;
                            while (((&DAT_006074b8)[(byte)(acStack_705[1] + 1)] & 2) != 0) {
                              FUN_005a54c0(pcVar13,local_60,iVar7);
                              iVar7 = iVar7 + -1;
                            }
                            local_104 = 0;
                            iVar7 = FUN_00495110(param_1,acStack_705 + 1);
                            if (iVar7 != 0) {
                              local_104 = 1;
                            }
                            *param_3 = *param_3 + local_64;
                          }
                          else {
                            iVar7 = FUN_005a3260(local_18c,"isTalking");
                            if (iVar7 == 0) {
                              local_5c = -1;
                              FUN_005a5b9c(param_2 + *param_3," ( %[^ )] )%n",local_574,&local_5c);
                              if (local_5c < 3) {
                                pcVar13 = "Error parsing isTalking parameters.";
                                pcVar14 = &DAT_01c734b0;
                                do {
                                  cVar1 = *pcVar13;
                                  *pcVar14 = cVar1;
                                  if (cVar1 == '\0') {
                                    return 0xffffffff;
                                  }
                                  cVar1 = pcVar13[1];
                                  pcVar13 = pcVar13 + 2;
                                  pcVar14[1] = cVar1;
                                  pcVar14 = pcVar14 + 2;
                                } while (cVar1 != '\0');
                                return 0xffffffff;
                              }
                              local_104 = FUN_0048b950(local_574,DAT_007e2cec,&DAT_007e2cb4);
                              if (local_104 == 0) {
                                return 0xffffffff;
                              }
                              if (local_104 == 0x0FFFFFFF) {
                                local_104 = local_104 ^ 0x0FFFFFFF;
                              }
                              else if (*(float *)(local_104 + 0x27b4) <= 0.0) {
                                local_104 = 0;
                              }
                              else {
                                local_104 = 1;
                              }
                              *param_3 = *param_3 + local_5c;
                            }
                            else {
                              iVar7 = FUN_005a3260(local_18c,"isVictim");
                              if (iVar7 == 0) {
                                local_58 = -1;
                                FUN_005a5b9c(param_2 + *param_3," ( %[^ )] )%n",local_95c,&local_58);
                                if (local_58 < 3) {
                                  pcVar13 = "Error parsing isVictim parameters.";
                                  pcVar14 = &DAT_01c734b0;
                                  do {
                                    cVar1 = *pcVar13;
                                    *pcVar14 = cVar1;
                                    if (cVar1 == '\0') {
                                      return 0xffffffff;
                                    }
                                    cVar1 = pcVar13[1];
                                    pcVar13 = pcVar13 + 2;
                                    pcVar14[1] = cVar1;
                                    pcVar14 = pcVar14 + 2;
                                  } while (cVar1 != '\0');
                                }
                                else {
                                  local_54 = FUN_0048b950(local_95c,DAT_007e2cec,&DAT_007e2cb4);
                                  if (local_54 != 0) {
                                    local_104 = 0;
                                    if (local_54 != 0x0FFFFFFF) {
                                      local_50 = (float *)(local_54 + 0x20);
                                      local_18 = 0;
                                      for (iVar7 = 0; iVar7 < *(int *)(0x01ED78C8 + 0x150fec);
                                          iVar7 = iVar7 + 1) {
                                        iVar8 = *(int *)(0x01ED78C8 + local_18 + 0x150ff0);
                                        if ((((local_54 == *(uint *)(iVar8 + 0xcde4)) &&
                                             (iVar9 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x10c))
                                                                (iVar8), iVar9 < 1)) &&
                                            (iVar9 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x70))
                                                               (iVar8), iVar9 == 0)) &&
                                           (fVar2 = *(float *)(iVar8 + 0x20) - *local_50,
                                           fVar4 = *(float *)(iVar8 + 0x24) - local_50[1],
                                           fVar3 = *(float *)(iVar8 + 0x28) - local_50[2],
                                           SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) <=
                                           (float)_DAT_005bfde8)) {
                                          local_104 = 1;
                                          break;
                                        }
                                        local_18 = local_18 + 4;
                                      }
                                    }
                                    *param_3 = *param_3 + local_58;
                                    goto LAB_004923ef;
                                  }
                                }
                                return 0xffffffff;
                              }
                              iVar7 = FUN_005a3260(local_18c,"isWeaponDrawn");
                              if (iVar7 == 0) {
                                local_40 = -1;
                                FUN_005a5b9c(param_2 + *param_3," ( %[^ )] )%n",local_768,&local_40);
                                if (local_40 < 3) {
                                  pcVar13 = "Error parsing isWeaponDrawn parameters.";
                                  pcVar14 = &DAT_01c734b0;
                                  do {
                                    cVar1 = *pcVar13;
                                    *pcVar14 = cVar1;
                                    if (cVar1 == '\0') {
                                      return 0xffffffff;
                                    }
                                    cVar1 = pcVar13[1];
                                    pcVar13 = pcVar13 + 2;
                                    pcVar14[1] = cVar1;
                                    pcVar14 = pcVar14 + 2;
                                  } while (cVar1 != '\0');
                                }
                                else {
                                  uVar6 = FUN_0048b950(local_768,_DAT_01d5ba70,0x1d5ba38);
                                  if (uVar6 != 0) {
                                    if (uVar6 == 0x0FFFFFFF) {
                                      local_104 = uVar6 ^ 0x0FFFFFFF;
                                    }
                                    else {
                                      local_104 = (**(code **)(*(int *)(uVar6 + 0x154) + 0x148))
                                                            (uVar6);
                                    }
                                    *param_3 = *param_3 + local_40;
                                    goto LAB_004923ef;
                                  }
                                }
                                return 0xffffffff;
                              }
                              iVar7 = FUN_005a3260(local_18c,"isWearingGasMask");
                              if (iVar7 == 0) {
                                local_3c = -1;
                                FUN_005a5b9c(param_2 + *param_3," ( %[^ )] )%n",local_3e4,&local_3c);
                                if (local_3c < 3) {
                                  pcVar13 = "Error parsing isWearingGasMask parameters.";
                                  pcVar14 = &DAT_01c734b0;
                                  do {
                                    cVar1 = *pcVar13;
                                    *pcVar14 = cVar1;
                                    if (cVar1 == '\0') {
                                      return 0xffffffff;
                                    }
                                    cVar1 = pcVar13[1];
                                    pcVar13 = pcVar13 + 2;
                                    pcVar14[1] = cVar1;
                                    pcVar14 = pcVar14 + 2;
                                  } while (cVar1 != '\0');
                                }
                                else {
                                  uVar6 = FUN_0048b950(local_3e4,_DAT_01d5ba70,0x1d5ba38);
                                  if (uVar6 != 0) {
                                    if (uVar6 == 0x0FFFFFFF) {
                                      local_104 = 0;
                                      *param_3 = *param_3 + local_3c;
                                    }
                                    else {
                                      local_104 = (uint)(*(int *)(uVar6 + 0x20b58) == 2);
                                      *param_3 = *param_3 + local_3c;
                                    }
                                    goto LAB_004923ef;
                                  }
                                }
                                return 0xffffffff;
                              }
                              iVar7 = FUN_005a3260(local_18c,"isPuzzleActive");
                              if (iVar7 == 0) {
                                local_38 = -1;
                                FUN_005a5b9c(param_2 + *param_3,"(%[^)])%n",local_10b4,&local_38);
                                if (local_38 < 3) {
                                  uVar6 = FUN_0048b7f0("Error parsing activatePuzzle command");
                                  return uVar6;
                                }
                                iVar7 = 0;
                                local_34 = 0;
                                if (0 < DAT_007dff88) {
                                  iVar8 = 0;
                                  do {
                                    uVar11 = (**(code **)(**(int **)((int)&DAT_007dff8c + iVar8) + 4
                                                         ))(*(int **)((int)&DAT_007dff8c + iVar8));
                                    iVar9 = FUN_005a3260(local_10b4,uVar11);
                                    if (iVar9 == 0) {
                                      local_34 = *(int *)((int)&DAT_007dff8c + iVar8);
                                      break;
                                    }
                                    iVar7 = iVar7 + 1;
                                    iVar8 = iVar8 + 4;
                                  } while (iVar7 < DAT_007dff88);
                                }
                                if (local_34 == 0) {
                                  uVar6 = FUN_0048b7f0("No such puzzle '%s'",local_10b4);
                                  return uVar6;
                                }
                                local_104 = (uint)(DAT_007dffb4 != 0);
                                *param_3 = *param_3 + local_38;
                              }
                              else {
                                iVar7 = FUN_005a3260(local_18c,"randBool");
                                if (iVar7 != 0) {
                                  iVar7 = FUN_005a3260(local_18c,"reachedDest");
                                  if (iVar7 == 0) {
                                    local_28 = -1;
                                    FUN_005a5b9c(param_2 + *param_3," ( %[^ )] )%n",local_448,&local_28
                                                );
                                    if (local_28 < 3) {
                                      pcVar13 = "Error parsing reachedDest parameters.";
                                      pcVar14 = &DAT_01c734b0;
                                      do {
                                        cVar1 = *pcVar13;
                                        *pcVar14 = cVar1;
                                        if (cVar1 == '\0') {
                                          return 0xffffffff;
                                        }
                                        cVar1 = pcVar13[1];
                                        pcVar13 = pcVar13 + 2;
                                        pcVar14[1] = cVar1;
                                        pcVar14 = pcVar14 + 2;
                                      } while (cVar1 != '\0');
                                    }
                                    else {
                                      uVar6 = FUN_0048b950(local_448,DAT_007e2cec,&DAT_007e2cb4);
                                      if (uVar6 != 0) {
                                        if (uVar6 == 0x0FFFFFFF) {
                                          local_104 = 0;
                                          *param_3 = *param_3 + local_28;
                                        }
                                        else {
                                          iVar7 = (**(code **)(*(int *)(uVar6 + 0x154) + 0x13c))
                                                            (uVar6);
                                          local_104 = (uint)(iVar7 != 0);
                                          *param_3 = *param_3 + local_28;
                                        }
                                        goto LAB_004923ef;
                                      }
                                    }
                                    return 0xffffffff;
                                  }
                                  iVar7 = FUN_005a3260(local_18c,"testActorBool");
                                  if (iVar7 != 0) {
                                    pcVar13 = "Invalid meta-function";
                                    pcVar14 = &DAT_01c734b0;
                                    do {
                                      cVar1 = *pcVar13;
                                      *pcVar14 = cVar1;
                                      if (cVar1 == '\0') {
                                        return 0xffffffff;
                                      }
                                      cVar1 = pcVar13[1];
                                      pcVar13 = pcVar13 + 2;
                                      pcVar14[1] = cVar1;
                                      pcVar14 = pcVar14 + 2;
                                    } while (cVar1 != '\0');
                                    return 0xffffffff;
                                  }
                                  local_24 = -1;
                                  FUN_005a5b9c(param_2 + *param_3,"(%[^,], %[^)])%n",acStack_aed + 1,
                                               local_bb5 + 1,&local_24);
                                  if (local_24 < 3) {
                                    pcVar13 = "Error parsing testActorBool parameters.";
                                    pcVar14 = &DAT_01c734b0;
                                    do {
                                      cVar1 = *pcVar13;
                                      *pcVar14 = cVar1;
                                      if (cVar1 == '\0') {
                                        return 0xffffffff;
                                      }
                                      cVar1 = pcVar13[1];
                                      pcVar13 = pcVar13 + 2;
                                      pcVar14[1] = cVar1;
                                      pcVar14 = pcVar14 + 2;
                                    } while (cVar1 != '\0');
                                    return 0xffffffff;
                                  }
                                  uVar6 = 0xffffffff;
                                  pcVar13 = acStack_aed + 1;
                                  do {
                                    if (uVar6 == 0) break;
                                    uVar6 = uVar6 - 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar13 + (uint)bVar15 * -2 + 1;
                                  } while (cVar1 != '\0');
                                  iVar7 = ~uVar6 - 1;
                                  if (0 < iVar7) {
                                    pcVar13 = acStack_aed + ~uVar6;
                                    do {
                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0)
                                      break;
                                      iVar7 = iVar7 + -1;
                                      pcVar13 = pcVar13 + -1;
                                    } while (0 < iVar7);
                                  }
                                  (acStack_aed + 1)[iVar7] = '\0';
                                  local_20 = acStack_aed + 2;
                                  while (((&DAT_006074b8)[(byte)(acStack_aed[1] + 1)] & 2) != 0) {
                                    FUN_005a54c0(acStack_aed + 1,local_20,iVar7);
                                    iVar7 = iVar7 + -1;
                                  }
                                  local_1c = local_bb5 + 1;
                                  uVar6 = 0xffffffff;
                                  pcVar13 = local_bb5 + 1;
                                  do {
                                    if (uVar6 == 0) break;
                                    uVar6 = uVar6 - 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar13 + (uint)bVar15 * -2 + 1;
                                  } while (cVar1 != '\0');
                                  iVar7 = ~uVar6 - 1;
                                  if (0 < iVar7) {
                                    pcVar13 = local_bb5 + ~uVar6;
                                    do {
                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0)
                                      break;
                                      iVar7 = iVar7 + -1;
                                      pcVar13 = pcVar13 + -1;
                                    } while (0 < iVar7);
                                  }
                                  (local_bb5 + 1)[iVar7] = '\0';
                                  while (((&DAT_006074b8)[(byte)(*local_1c + 1)] & 2) != 0) {
                                    FUN_005a54c0(local_1c,local_bb5 + 2,iVar7);
                                    iVar7 = iVar7 + -1;
                                  }
                                  iVar7 = 0;
                                  local_fc = 0;
                                  if (0 < 0x00000002) {
                                    iVar8 = 0;
                                    do {
                                      if (*(int *)((int)&DAT_005fba64 + iVar8) == 0) {
                                        local_a0 = (int)&DAT_005fba64 + iVar8;
                                        iVar9 = FUN_005a3260("spectralFlag" + iVar8,
                                                             local_bb5 + 1);
                                        if (iVar9 == 0) {
                                          local_fc = local_a0;
                                          break;
                                        }
                                      }
                                      iVar7 = iVar7 + 1;
                                      iVar8 = iVar8 + 0x48;
                                    } while (iVar7 < 0x00000002);
                                  }
                                  iVar7 = local_fc;
                                  if (local_fc == 0) {
                                    FUN_005a28c0(local_db4,"%s is not a valid boolean actor variable name",
                                                 local_bb5 + 1);
                                    pcVar13 = local_db4;
                                    pcVar14 = &DAT_01c734b0;
                                    do {
                                      cVar1 = *pcVar13;
                                      *pcVar14 = cVar1;
                                      if (cVar1 == '\0') {
                                        return 0xffffffff;
                                      }
                                      cVar1 = pcVar13[1];
                                      pcVar13 = pcVar13 + 2;
                                      pcVar14[1] = cVar1;
                                      pcVar14 = pcVar14 + 2;
                                    } while (cVar1 != '\0');
                                  }
                                  else {
                                    uVar6 = FUN_0048b950(acStack_aed + 1,
                                                         *(uint *)(local_fc + 0x44),
                                                         local_fc + 0x22);
                                    if (uVar6 != 0) {
                                      if (uVar6 == 0x0FFFFFFF) {
                                        local_104 = 0;
                                      }
                                      else {
                                        local_104 = *(uint *)(uVar6 + *(int *)(iVar7 + 0x40));
                                      }
                                      goto LAB_004923ef;
                                    }
                                  }
                                  return 0xffffffff;
                                }
                                local_30 = -1;
                                FUN_005a5b9c(param_2 + *param_3," ( %f )%n",&local_2c,&local_30);
                                if (local_30 < 3) {
                                  pcVar13 = "Error parsing randBool parameters.";
                                  pcVar14 = &DAT_01c734b0;
                                  do {
                                    cVar1 = *pcVar13;
                                    *pcVar14 = cVar1;
                                    if (cVar1 == '\0') {
                                      return 0xffffffff;
                                    }
                                    cVar1 = pcVar13[1];
                                    pcVar13 = pcVar13 + 2;
                                    pcVar14[1] = cVar1;
                                    pcVar14 = pcVar14 + 2;
                                  } while (cVar1 != '\0');
                                  return 0xffffffff;
                                }
                                local_104 = FUN_0040cf40(local_2c);
                                *param_3 = *param_3 + local_30;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_004923ef;
  }
  local_100 = -NAN;
  FUN_005a5b9c(param_2 + *param_3," ( %s %s %[^ )] )%n",acStack_1f1 + 1,local_8f9 + 1,local_5d9 + 1,
               afStack_118 + 6);
  if ((int)local_100 < 3) {
    pcVar13 = "Error parsing cmp parameters.";
    pcVar14 = &DAT_01c734b0;
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') {
        return 0xffffffff;
      }
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    return 0xffffffff;
  }
  pcVar13 = acStack_1f1 + 1;
  uVar6 = 0xffffffff;
  pcVar14 = pcVar13;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
  } while (cVar1 != '\0');
  iVar7 = ~uVar6 - 1;
  if (0 < iVar7) {
    pcVar14 = pcVar13 + iVar7;
    do {
      if (((&DAT_006074b8)[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
      iVar7 = iVar7 + -1;
      pcVar14 = pcVar14 + -1;
    } while (0 < iVar7);
  }
  pcVar13[iVar7] = '\0';
  local_f8 = acStack_1f1 + 2;
  while (((&DAT_006074b8)[(byte)(acStack_1f1[1] + 1)] & 2) != 0) {
    FUN_005a54c0(pcVar13,local_f8,iVar7);
    iVar7 = iVar7 + -1;
  }
  uVar6 = 0xffffffff;
  pcVar13 = local_5d9 + 1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + (uint)bVar15 * -2 + 1;
  } while (cVar1 != '\0');
  iVar7 = ~uVar6 - 1;
  if (0 < iVar7) {
    pcVar13 = local_5d9 + ~uVar6;
    do {
      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar13 + -1;
    } while (0 < iVar7);
  }
  (local_5d9 + 1)[iVar7] = '\0';
  local_f4 = local_5d9 + 2;
  while (((&DAT_006074b8)[(byte)(local_5d9[1] + 1)] & 2) != 0) {
    FUN_005a54c0(local_5d9 + 1,local_f4,iVar7);
    iVar7 = iVar7 + -1;
  }
  uVar6 = 0xffffffff;
  pcVar13 = local_8f9 + 1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + (uint)bVar15 * -2 + 1;
  } while (cVar1 != '\0');
  iVar7 = ~uVar6 - 1;
  if (0 < iVar7) {
    pcVar13 = local_8f9 + ~uVar6;
    do {
      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar13 + -1;
    } while (0 < iVar7);
  }
  (local_8f9 + 1)[iVar7] = '\0';
  local_ec = local_8f9 + 2;
  while (((&DAT_006074b8)[(byte)(local_8f9[1] + 1)] & 2) != 0) {
    FUN_005a54c0(local_8f9 + 1,local_ec,iVar7);
    iVar7 = iVar7 + -1;
  }
  iVar8 = FUN_005a3d00(local_8f9 + 1,&DAT_005bddb8);
  iVar7 = 0;
  if (iVar8 != 0) {
    iVar7 = FUN_005a3d00(local_8f9 + 1,&DAT_005bddba);
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = FUN_005a3d00(local_8f9 + 1,&DAT_005bddbd);
      if (iVar7 == 0) {
        iVar7 = 2;
      }
      else {
        iVar7 = FUN_005a3d00(local_8f9 + 1,&DAT_005bddc0);
        if (iVar7 == 0) {
          iVar7 = 3;
        }
        else {
          iVar7 = FUN_005a3d00(local_8f9 + 1,&DAT_005bddc3);
          if (iVar7 == 0) {
            iVar7 = 5;
          }
          else {
            iVar7 = FUN_005a3d00(local_8f9 + 1,&DAT_005bddc5);
            if (iVar7 == 0) {
              iVar7 = 4;
            }
            else {
              iVar7 = 6;
            }
          }
        }
      }
    }
  }
  if (iVar7 == 6) {
    pcVar13 = "Invalid relational operator in cmp statement";
    pcVar14 = &DAT_01c734b0;
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') {
        return 0xffffffff;
      }
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    return 0xffffffff;
  }
  *param_3 = *param_3 + (int)local_100;
  iVar9 = FUN_005a5b9c(acStack_1f1 + 1,&DAT_005bddc8,&local_e8);
  iVar8 = local_e8;
  if (iVar9 != 1) {
    iVar8 = FUN_00494d00(0x01C6E360,acStack_1f1 + 1);
  }
  iVar9 = FUN_005a5b9c(local_5d9 + 1,&DAT_005bddc8,&local_94);
  if (iVar9 == 1) {
    switch(iVar7) {
    case 0:
switchD_004923d4_caseD_0:
      local_104 = (uint)(iVar8 < local_94);
      break;
    case 1:
switchD_004923d4_caseD_1:
      local_104 = (uint)(iVar8 <= local_94);
      break;
    case 2:
switchD_004923d4_caseD_2:
      local_104 = (uint)(iVar8 == local_94);
      break;
    case 3:
switchD_004923d4_caseD_3:
      local_104 = (uint)(iVar8 != local_94);
      break;
    case 4:
switchD_004923d4_caseD_4:
      local_104 = (uint)(local_94 <= iVar8);
      break;
    case 5:
switchD_004923d4_caseD_5:
      local_104 = (uint)(local_94 < iVar8);
      break;
    default:
switchD_004923d4_default:
      _DAT_01d71de0 = "..\\core\\event.cpp";
      _DAT_01d71de4 = 0xad9;
      FUN_004e4330("Hell froze.");
    }
LAB_004923ef:
    while (((&DAT_006074b8)[(byte)(*(char *)(param_2 + *param_3) + 1)] & 2) != 0) {
      *param_3 = *param_3 + 1;
    }
    return local_104;
  }
  local_94 = FUN_00494d00(0x01C6E360,local_5d9 + 1);
  switch(iVar7) {
  case 0:
    goto switchD_004923d4_caseD_0;
  case 1:
    goto switchD_004923d4_caseD_1;
  case 2:
    goto switchD_004923d4_caseD_2;
  case 3:
    goto switchD_004923d4_caseD_3;
  case 4:
    goto switchD_004923d4_caseD_4;
  case 5:
    goto switchD_004923d4_caseD_5;
  default:
    goto switchD_004923d4_default;
  }
}
