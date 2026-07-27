// Name: core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0
// Address: 0047e0d0
// Address Range: [[0047e0d0, 00480215]]
// Convention: __cdecl
// Signature: uint __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(undefined4 param_1,int param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(uint param_1,int param_2,int *param_3)

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
  char *pcVar11;
  byte *puVar12;
  char *pcVar13;
  byte bVar14;
  float local_a88;
  char local_a84 [255];
  char local_985 [101];
  byte local_920 [99];
  char acStack_8bd [101];
  byte local_858 [99];
  char acStack_7f5 [100];
  char acStack_791 [100];
  char acStack_72d [100];
  char local_6c9 [101];
  byte local_664 [100];
  byte local_600 [99];
  char acStack_59d [101];
  byte local_538 [99];
  char acStack_4d5 [101];
  byte local_470 [99];
  char acStack_40d [100];
  char local_3a9 [100];
  char local_345 [100];
  char acStack_2e1 [101];
  byte local_27c [99];
  char local_219 [101];
  byte local_1b4 [100];
  byte local_150 [64];
  byte local_110 [4];
  uint local_10c;
  float local_104;
  float local_100;
  float local_fc;
  byte local_f8 [12];
  float local_ec;
  float local_e8;
  float local_e4;
  int local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  char *local_d0;
  char *local_cc;
  char *local_c8;
  int local_c4;
  int local_c0;
  char *local_bc;
  int local_b8;
  uint local_b4;
  char *local_b0;
  int local_ac;
  char *local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  char *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  float local_84 [4];
  int local_74;
  int local_70;
  int local_6c;
  char *local_68;
  char *local_64;
  int local_60;
  char *local_5c;
  char *local_58;
  int local_54;
  char *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  char *local_3c;
  int local_38;
  float *local_34;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar14 = 0;
  while (((&DAT_005c168c)[(byte)(*(char *)(*param_3 + param_2) + 1)] & 2) != 0) {
    *param_3 = *param_3 + 1;
  }
  if (*(char *)(param_2 + *param_3) == '.') {
    *param_3 = *param_3 + 1;
  }
  cVar1 = *(char *)(param_2 + *param_3);
  if (cVar1 == '\0') {
    pcVar11 = "Unexpected end of string";
    pcVar13 = &DAT_01c08b60;
    do {
      cVar1 = *pcVar11;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') {
        return 0xffffffff;
      }
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    return 0xffffffff;
  }
  if (cVar1 == '(') {
    *param_3 = *param_3 + 1;
    uVar6 = core_event_cpp_CEventList_evaluateLogicalExpr_FUN_00480220(param_1,param_2,param_3);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    if (*(char *)(param_2 + *param_3) == ')') {
      *param_3 = *param_3 + 1;
      while (((&DAT_005c168c)[(byte)(*(char *)(*param_3 + param_2) + 1)] & 2) != 0) {
        *param_3 = *param_3 + 1;
      }
      return uVar6;
    }
    pcVar11 = "Matching ')' is missing";
    pcVar13 = &DAT_01c08b60;
    do {
      cVar1 = *pcVar11;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') {
        return 0xffffffff;
      }
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    return 0xffffffff;
  }
  if (cVar1 == '!') {
    *param_3 = *param_3 + 1;
    uVar6 = core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(param_1,param_2,param_3);
    if (-1 < (int)uVar6) {
      return (uint)(uVar6 == 0);
    }
    return uVar6;
  }
  iVar7 = core_event_cpp_isValidIdentifierChar_FUN_00480f40(cVar1);
  if (iVar7 == 0) {
    pcVar11 = "Syntax error";
    pcVar13 = &DAT_01c08b60;
    do {
      cVar1 = *pcVar11;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') {
        return 0xffffffff;
      }
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    return 0xffffffff;
  }
  puVar12 = local_150;
  do {
    *puVar12 = *(byte *)(param_2 + *param_3);
    iVar7 = *param_3;
    *param_3 = iVar7 + 1;
    puVar12 = puVar12 + 1;
    iVar7 = core_event_cpp_isValidIdentifierChar_FUN_00480f40(*(byte *)(param_2 + iVar7 + 1));
  } while (iVar7 != 0);
  *puVar12 = 0;
  if (*(char *)(param_2 + *param_3) != '(') {
    while (((&DAT_005c168c)[(byte)(*(char *)(*param_3 + param_2) + 1)] & 2) != 0) {
      *param_3 = *param_3 + 1;
    }
    uVar6 = core_event_cpp_CEventList_resolveVariable_FUN_0047dba0(param_1,local_150);
    return uVar6;
  }
  local_dc = 0xffffffff;
  iVar7 = _stricmp(local_150,"cmp");
  if (iVar7 != 0) {
    iVar7 = _stricmp(local_150,"exists");
    if (iVar7 == 0) {
      local_6c = -1;
      sscanf(param_2 + *param_3," ( %[^ )] )%n",acStack_2e1 + 1,&local_6c);
      if (local_6c < 3) {
        pcVar11 = "Error parsing exists parameters.";
        pcVar13 = &DAT_01c08b60;
        do {
          cVar1 = *pcVar11;
          *pcVar13 = cVar1;
          if (cVar1 == '\0') {
            return 0xffffffff;
          }
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar13[1] = cVar1;
          pcVar13 = pcVar13 + 2;
        } while (cVar1 != '\0');
        return 0xffffffff;
      }
      pcVar11 = acStack_2e1 + 1;
      uVar6 = 0xffffffff;
      pcVar13 = pcVar11;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
      } while (cVar1 != '\0');
      iVar7 = ~uVar6 - 1;
      if (0 < iVar7) {
        pcVar13 = pcVar11 + iVar7;
        do {
          if (((&DAT_005c168c)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar13 + -1;
        } while (0 < iVar7);
      }
      pcVar11[iVar7] = '\0';
      local_bc = acStack_2e1 + 2;
      while (((&DAT_005c168c)[(byte)(acStack_2e1[1] + 1)] & 2) != 0) {
        memmove(pcVar11,local_bc,iVar7);
        iVar7 = iVar7 + -1;
      }
      uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                        (acStack_2e1 + 1,g_CDemonActorActorType_00763e48.name_hash,
                         &g_CDemonActorActorType_00763e48);
      if ((uVar6 == 0) || (uVar6 == 0x0FFFFFFF)) {
        local_dc = 0;
      }
      else {
        local_dc = 1;
      }
      *param_3 = *param_3 + local_6c;
    }
    else {
      iVar7 = _stricmp(local_150,"hasItem");
      if (iVar7 == 0) {
        if (*0x01CEA280 != 0) {
          pcVar11 = "Can't use hasItem condition in multi-player";
          pcVar13 = &DAT_01c08b60;
          do {
            cVar1 = *pcVar11;
            *pcVar13 = cVar1;
            if (cVar1 == '\0') {
              return 0xffffffff;
            }
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar13[1] = cVar1;
            pcVar13 = pcVar13 + 2;
          } while (cVar1 != '\0');
          return 0xffffffff;
        }
        local_b8 = -1;
        sscanf(param_2 + *param_3," (%[^)])%n",acStack_7f5 + 1,&local_b8);
        if (local_b8 < 3) {
          pcVar11 = "Error parsing hasItem parameters.";
          pcVar13 = &DAT_01c08b60;
          do {
            cVar1 = *pcVar11;
            *pcVar13 = cVar1;
            if (cVar1 == '\0') {
              return 0xffffffff;
            }
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar13[1] = cVar1;
            pcVar13 = pcVar13 + 2;
          } while (cVar1 != '\0');
          return 0xffffffff;
        }
        pcVar11 = acStack_7f5 + 1;
        uVar6 = 0xffffffff;
        pcVar13 = pcVar11;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
        } while (cVar1 != '\0');
        iVar7 = ~uVar6 - 1;
        if (0 < iVar7) {
          pcVar13 = pcVar11 + iVar7;
          do {
            if (((&DAT_005c168c)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar13 + -1;
          } while (0 < iVar7);
        }
        pcVar11[iVar7] = '\0';
        local_b0 = acStack_7f5 + 2;
        while (((&DAT_005c168c)[(byte)(acStack_7f5[1] + 1)] & 2) != 0) {
          memmove(pcVar11,local_b0,iVar7);
          iVar7 = iVar7 + -1;
        }
        iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        local_dc = 0;
        if ((iVar7 != 0) &&
           (iVar7 = core_inv_cpp_CInventory_findItemByName_FUN_004c0710
                              (iVar7 + 0x1f5a0,acStack_7f5 + 1), iVar7 != 0)) {
          local_dc = 1;
        }
        *param_3 = *param_3 + local_b8;
      }
      else {
        iVar7 = _stricmp(local_150,"hasItemType");
        if (iVar7 == 0) {
          local_ac = -1;
          sscanf
                    (param_2 + *param_3," (%[^,], %[^)] )%n",acStack_72d + 1,local_6c9 + 1,&local_ac);
          if (local_ac < 5) {
            pcVar11 = "Error parsing hasItemType parameters.";
            pcVar13 = &DAT_01c08b60;
            do {
              cVar1 = *pcVar11;
              *pcVar13 = cVar1;
              if (cVar1 == '\0') {
                return 0xffffffff;
              }
              cVar1 = pcVar11[1];
              pcVar11 = pcVar11 + 2;
              pcVar13[1] = cVar1;
              pcVar13 = pcVar13 + 2;
            } while (cVar1 != '\0');
          }
          else {
            pcVar11 = acStack_72d + 1;
            uVar6 = 0xffffffff;
            pcVar13 = pcVar11;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
            } while (cVar1 != '\0');
            iVar7 = ~uVar6 - 1;
            if (0 < iVar7) {
              pcVar13 = pcVar11 + iVar7;
              do {
                if (((&DAT_005c168c)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                iVar7 = iVar7 + -1;
                pcVar13 = pcVar13 + -1;
              } while (0 < iVar7);
            }
            pcVar11[iVar7] = '\0';
            local_50 = acStack_72d + 2;
            while (((&DAT_005c168c)[(byte)(acStack_72d[1] + 1)] & 2) != 0) {
              memmove(pcVar11,local_50,iVar7);
              iVar7 = iVar7 + -1;
            }
            uVar6 = 0xffffffff;
            pcVar11 = local_6c9 + 1;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
            } while (cVar1 != '\0');
            iVar7 = ~uVar6 - 1;
            if (0 < iVar7) {
              pcVar11 = local_6c9 + ~uVar6;
              do {
                if (((&DAT_005c168c)[(byte)(pcVar11[-1] + 1)] & 2) == 0) break;
                iVar7 = iVar7 + -1;
                pcVar11 = pcVar11 + -1;
              } while (0 < iVar7);
            }
            (local_6c9 + 1)[iVar7] = '\0';
            local_a8 = local_6c9 + 2;
            while (((&DAT_005c168c)[(byte)(local_6c9[1] + 1)] & 2) != 0) {
              memmove(local_6c9 + 1,local_a8,iVar7);
              iVar7 = iVar7 + -1;
            }
            uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                              (acStack_72d + 1,g_CHeroActorType_01cae0ec.name_hash,
                               &g_CHeroActorType_01cae0ec);
            if (uVar6 != 0) {
              if (uVar6 == 0x0FFFFFFF) {
                local_dc = 0;
                *param_3 = *param_3 + local_ac;
              }
              else {
                local_dc = core_inv_cpp_CInventory_hasItemOfClass_FUN_004c0760
                                     (uVar6 + 0x1f5a0,local_6c9 + 1);
                *param_3 = *param_3 + local_ac;
              }
              goto LAB_0047e580;
            }
          }
          return 0xffffffff;
        }
        iVar7 = _stricmp(local_150,"hasKeyMask");
        if (iVar7 == 0) {
          if (*0x01CEA280 != 0) {
            pcVar11 = "Can't use hasKeyMask condition in multi-player";
            pcVar13 = &DAT_01c08b60;
            do {
              cVar1 = *pcVar11;
              *pcVar13 = cVar1;
              if (cVar1 == '\0') {
                return 0xffffffff;
              }
              cVar1 = pcVar11[1];
              pcVar11 = pcVar11 + 2;
              pcVar13[1] = cVar1;
              pcVar13 = pcVar13 + 2;
            } while (cVar1 != '\0');
            return 0xffffffff;
          }
          local_a4 = -1;
          sscanf(param_2 + *param_3," ( %d )%n",&local_a0,&local_a4);
          if (local_a4 < 3) {
            pcVar11 = "Error parsing hasKeyMask parameters.";
            pcVar13 = &DAT_01c08b60;
            do {
              cVar1 = *pcVar11;
              *pcVar13 = cVar1;
              if (cVar1 == '\0') {
                return 0xffffffff;
              }
              cVar1 = pcVar11[1];
              pcVar11 = pcVar11 + 2;
              pcVar13[1] = cVar1;
              pcVar13 = pcVar13 + 2;
            } while (cVar1 != '\0');
            return 0xffffffff;
          }
          if (local_a0 == 0) {
            pcVar11 = "hasKeyMask(0) always returns false!";
            pcVar13 = &DAT_01c08b60;
            do {
              cVar1 = *pcVar11;
              *pcVar13 = cVar1;
              if (cVar1 == '\0') {
                return 0xffffffff;
              }
              cVar1 = pcVar11[1];
              pcVar11 = pcVar11 + 2;
              pcVar13[1] = cVar1;
              pcVar13 = pcVar13 + 2;
            } while (cVar1 != '\0');
            return 0xffffffff;
          }
          if ((local_a0 - 1 & local_a0) != 0) {
            pcVar11 = "mask value must be a power of 2.\n(To test for multiple keys, use multiple hasKeyMask() tests)";
            pcVar13 = &DAT_01c08b60;
            do {
              cVar1 = *pcVar11;
              *pcVar13 = cVar1;
              if (cVar1 == '\0') {
                return 0xffffffff;
              }
              cVar1 = pcVar11[1];
              pcVar11 = pcVar11 + 2;
              pcVar13[1] = cVar1;
              pcVar13 = pcVar13 + 2;
            } while (cVar1 != '\0');
            return 0xffffffff;
          }
          iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          local_dc = 0;
          if ((iVar7 != 0) &&
             (iVar7 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004c31b0
                                (iVar7 + 0x1f5a0,local_a0,0), iVar7 != 0)) {
            local_dc = 1;
          }
          *param_3 = *param_3 + local_a4;
        }
        else {
          iVar7 = _stricmp(local_150,"isBroken");
          if (iVar7 == 0) {
            local_9c = -1;
            sscanf
                      (param_2 + *param_3," (%[^)])%n",acStack_59d + 1,&local_9c);
            if (local_9c < 3) {
              pcVar11 = "Error parsing isBroken parameters.";
              pcVar13 = &DAT_01c08b60;
              do {
                cVar1 = *pcVar11;
                *pcVar13 = cVar1;
                if (cVar1 == '\0') {
                  return 0xffffffff;
                }
                cVar1 = pcVar11[1];
                pcVar11 = pcVar11 + 2;
                pcVar13[1] = cVar1;
                pcVar13 = pcVar13 + 2;
              } while (cVar1 != '\0');
            }
            else {
              pcVar11 = acStack_59d + 1;
              uVar6 = 0xffffffff;
              pcVar13 = pcVar11;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
              } while (cVar1 != '\0');
              iVar7 = ~uVar6 - 1;
              if (0 < iVar7) {
                pcVar13 = pcVar11 + iVar7;
                do {
                  if (((&DAT_005c168c)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                  iVar7 = iVar7 + -1;
                  pcVar13 = pcVar13 + -1;
                } while (0 < iVar7);
              }
              pcVar11[iVar7] = '\0';
              local_98 = acStack_59d + 2;
              while (((&DAT_005c168c)[(byte)(acStack_59d[1] + 1)] & 2) != 0) {
                memmove(pcVar11,local_98,iVar7);
                iVar7 = iVar7 + -1;
              }
              uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                                (acStack_59d + 1,g_CGlassActorType_01c78c40.name_hash,
                                 &g_CGlassActorType_01c78c40);
              if (uVar6 != 0) {
                if (uVar6 == 0x0FFFFFFF) {
                  local_dc = 0;
                  *param_3 = *param_3 + local_9c;
                }
                else {
                  local_dc = (uint)(*(int *)(uVar6 + 0x178) != 0);
                  *param_3 = *param_3 + local_9c;
                }
                goto LAB_0047e580;
              }
            }
            return 0xffffffff;
          }
          iVar7 = _stricmp(local_150,"isCurrentCamera");
          if (iVar7 == 0) {
            local_94 = -1;
            sscanf(param_2 + *param_3," ( %[^ )] )%n",local_858,&local_94);
            if (local_94 < 3) {
              pcVar11 = "Error parsing icCurrentCamera parameters.";
              pcVar13 = &DAT_01c08b60;
              do {
                cVar1 = *pcVar11;
                *pcVar13 = cVar1;
                if (cVar1 == '\0') {
                  return 0xffffffff;
                }
                cVar1 = pcVar11[1];
                pcVar11 = pcVar11 + 2;
                pcVar13[1] = cVar1;
                pcVar13 = pcVar13 + 2;
              } while (cVar1 != '\0');
              return 0xffffffff;
            }
            local_dc = 0;
            if ((-1 < *(int *)(0x01E57284 + 0x15aabc)) &&
               (iVar7 = _stricmp
                                  (*(int *)(0x01E57284 + 0x15aabc) * 0x1a0 + 0x01E57284 + 4,
                                   local_858), iVar7 == 0)) {
              local_dc = 1;
            }
            *param_3 = *param_3 + local_94;
          }
          else {
            iVar7 = _stricmp(local_150,"isDead");
            if (iVar7 == 0) {
              local_90 = -1;
              sscanf(param_2 + *param_3," ( %[^ )] )%n",local_600,&local_90);
              if (local_90 < 3) {
                pcVar11 = "Error parsing isDead parameters.";
                pcVar13 = &DAT_01c08b60;
                do {
                  cVar1 = *pcVar11;
                  *pcVar13 = cVar1;
                  if (cVar1 == '\0') {
                    return 0xffffffff;
                  }
                  cVar1 = pcVar11[1];
                  pcVar11 = pcVar11 + 2;
                  pcVar13[1] = cVar1;
                  pcVar13 = pcVar13 + 2;
                } while (cVar1 != '\0');
              }
              else {
                uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                                  (local_600,g_CCharacterActorType_00765a60.name_hash,
                                   &g_CCharacterActorType_00765a60);
                if (uVar6 != 0) {
                  if (uVar6 == 0x0FFFFFFF) {
                    local_dc = 0;
                    *param_3 = *param_3 + local_90;
                  }
                  else {
                    iVar7 = (**(code **)(*(int *)(uVar6 + 0x14c) + 0x104))(uVar6);
                    local_dc = (uint)(1 < iVar7);
                    *param_3 = *param_3 + local_90;
                  }
                  goto LAB_0047e580;
                }
              }
              return 0xffffffff;
            }
            iVar7 = _stricmp(local_150,"isFadeFinished");
            if (iVar7 == 0) {
              local_8c = -1;
              sscanf(param_2 + *param_3," ( )%n",&local_8c);
              iVar7 = 0x01C775EC;
              if (local_8c < 2) {
                pcVar11 = "Error parsing isFadeFinished function.";
                pcVar13 = &DAT_01c08b60;
                do {
                  cVar1 = *pcVar11;
                  *pcVar13 = cVar1;
                  if (cVar1 == '\0') {
                    return 0xffffffff;
                  }
                  cVar1 = pcVar11[1];
                  pcVar11 = pcVar11 + 2;
                  pcVar13[1] = cVar1;
                  pcVar13 = pcVar13 + 2;
                } while (cVar1 != '\0');
                return 0xffffffff;
              }
              *param_3 = *param_3 + local_8c;
              local_dc = core_game_cpp_CGame_fadeIn_FUN_004a3a50(iVar7);
            }
            else {
              iVar7 = _stricmp(local_150,"isInRange");
              if (iVar7 == 0) {
                local_88 = -1;
                sscanf(param_2 + *param_3," ( %n",&local_88);
                if (local_88 < 1) {
                  pcVar11 = "Error parsing isInRange parameters.";
                  pcVar13 = &DAT_01c08b60;
                  do {
                    cVar1 = *pcVar11;
                    *pcVar13 = cVar1;
                    if (cVar1 == '\0') {
                      return 0xffffffff;
                    }
                    cVar1 = pcVar11[1];
                    pcVar11 = pcVar11 + 2;
                    pcVar13[1] = cVar1;
                    pcVar13 = pcVar13 + 2;
                  } while (cVar1 != '\0');
                  return 0xffffffff;
                }
                *param_3 = *param_3 + local_88;
                iVar7 = core_event_cpp_parseVectorLocation_FUN_0047a4c0(param_2,param_3,&local_104);
                if (iVar7 < 0) {
                  return 0xffffffff;
                }
                local_88 = -1;
                sscanf(param_2 + *param_3," , %n",&local_88);
                if (local_88 < 1) {
                  pcVar11 = "Error parsing isInRange parameters.";
                  pcVar13 = &DAT_01c08b60;
                  do {
                    cVar1 = *pcVar11;
                    *pcVar13 = cVar1;
                    if (cVar1 == '\0') {
                      return 0xffffffff;
                    }
                    cVar1 = pcVar11[1];
                    pcVar11 = pcVar11 + 2;
                    pcVar13[1] = cVar1;
                    pcVar13 = pcVar13 + 2;
                  } while (cVar1 != '\0');
                }
                else {
                  *param_3 = *param_3 + local_88;
                  iVar8 = core_event_cpp_parseVectorLocation_FUN_0047a4c0(param_2,param_3,&local_ec)
                  ;
                  if (-1 < iVar8) {
                    local_88 = -1;
                    sscanf
                              (param_2 + *param_3," , %f )%n",local_84,&local_88);
                    if (local_88 < 3) {
                      pcVar11 = "Error parsing isInRange parameters.";
                      pcVar13 = &DAT_01c08b60;
                      do {
                        cVar1 = *pcVar11;
                        *pcVar13 = cVar1;
                        if (cVar1 == '\0') {
                          return 0xffffffff;
                        }
                        cVar1 = pcVar11[1];
                        pcVar11 = pcVar11 + 2;
                        pcVar13[1] = cVar1;
                        pcVar13 = pcVar13 + 2;
                      } while (cVar1 != '\0');
                      return 0xffffffff;
                    }
                    *param_3 = *param_3 + local_88;
                    if ((iVar7 == 0) || (iVar8 == 0)) {
                      local_dc = 0;
                    }
                    else {
                      local_dc = (uint)(SQRT((local_fc - local_e4) * (local_fc - local_e4) +
                                             (local_100 - local_e8) * (local_100 - local_e8) +
                                             (local_104 - local_ec) * (local_104 - local_ec)) <=
                                       local_84[0]);
                    }
                    goto LAB_0047e580;
                  }
                }
                return 0xffffffff;
              }
              iVar7 = _stricmp(local_150,"isOfType");
              if (iVar7 == 0) {
                local_70 = -1;
                sscanf
                          (param_2 + *param_3," ( %[^ ,] , %[^ )] )%n",acStack_40d + 1,local_985 + 1,&local_70);
                if (local_70 < 3) {
                  pcVar11 = "Error parsing isOfType parameters.";
                  pcVar13 = &DAT_01c08b60;
                  do {
                    cVar1 = *pcVar11;
                    *pcVar13 = cVar1;
                    if (cVar1 == '\0') {
                      return 0xffffffff;
                    }
                    cVar1 = pcVar11[1];
                    pcVar11 = pcVar11 + 2;
                    pcVar13[1] = cVar1;
                    pcVar13 = pcVar13 + 2;
                  } while (cVar1 != '\0');
                }
                else {
                  pcVar11 = acStack_40d + 1;
                  uVar6 = 0xffffffff;
                  pcVar13 = pcVar11;
                  do {
                    if (uVar6 == 0) break;
                    uVar6 = uVar6 - 1;
                    cVar1 = *pcVar13;
                    pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
                  } while (cVar1 != '\0');
                  iVar7 = ~uVar6 - 1;
                  if (0 < iVar7) {
                    pcVar13 = pcVar11 + iVar7;
                    do {
                      if (((&DAT_005c168c)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                      iVar7 = iVar7 + -1;
                      pcVar13 = pcVar13 + -1;
                    } while (0 < iVar7);
                  }
                  pcVar11[iVar7] = '\0';
                  local_68 = acStack_40d + 2;
                  while (((&DAT_005c168c)[(byte)(acStack_40d[1] + 1)] & 2) != 0) {
                    memmove(pcVar11,local_68,iVar7);
                    iVar7 = iVar7 + -1;
                  }
                  uVar6 = 0xffffffff;
                  pcVar11 = local_985 + 1;
                  do {
                    if (uVar6 == 0) break;
                    uVar6 = uVar6 - 1;
                    cVar1 = *pcVar11;
                    pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
                  } while (cVar1 != '\0');
                  iVar7 = ~uVar6 - 1;
                  if (0 < iVar7) {
                    pcVar11 = local_985 + ~uVar6;
                    do {
                      if (((&DAT_005c168c)[(byte)(pcVar11[-1] + 1)] & 2) == 0) break;
                      iVar7 = iVar7 + -1;
                      pcVar11 = pcVar11 + -1;
                    } while (0 < iVar7);
                  }
                  (local_985 + 1)[iVar7] = '\0';
                  local_64 = local_985 + 2;
                  while (((&DAT_005c168c)[(byte)(local_985[1] + 1)] & 2) != 0) {
                    memmove(local_985 + 1,local_64,iVar7);
                    iVar7 = iVar7 + -1;
                  }
                  uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                                    (acStack_40d + 1,g_CDemonActorActorType_00763e48.name_hash,
                                     &g_CDemonActorActorType_00763e48);
                  if (uVar6 != 0) {
                    if (uVar6 == 0x0FFFFFFF) {
                      local_dc = 0;
                      *param_3 = *param_3 + local_70;
                    }
                    else {
                      local_dc = core_actor_cpp_isOfClass_FUN_0040d7e0(uVar6,local_985 + 1);
                      *param_3 = *param_3 + local_70;
                    }
                    goto LAB_0047e580;
                  }
                }
                return 0xffffffff;
              }
              iVar7 = _stricmp(local_150,"isFacing");
              if (iVar7 == 0) {
                local_60 = -1;
                sscanf
                          (param_2 + *param_3," (%[^,], %[^,)]%n",acStack_4d5 + 1,local_3a9 + 1,&local_60);
                if (local_60 < 5) {
                  pcVar11 = "Error parsing isFacing parameters.";
                  pcVar13 = &DAT_01c08b60;
                  do {
                    cVar1 = *pcVar11;
                    *pcVar13 = cVar1;
                    if (cVar1 == '\0') {
                      return 0xffffffff;
                    }
                    cVar1 = pcVar11[1];
                    pcVar11 = pcVar11 + 2;
                    pcVar13[1] = cVar1;
                    pcVar13 = pcVar13 + 2;
                  } while (cVar1 != '\0');
                  return 0xffffffff;
                }
                pcVar11 = acStack_4d5 + 1;
                uVar6 = 0xffffffff;
                pcVar13 = pcVar11;
                do {
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
                } while (cVar1 != '\0');
                iVar7 = ~uVar6 - 1;
                if (0 < iVar7) {
                  pcVar13 = pcVar11 + iVar7;
                  do {
                    if (((&DAT_005c168c)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                    iVar7 = iVar7 + -1;
                    pcVar13 = pcVar13 + -1;
                  } while (0 < iVar7);
                }
                pcVar11[iVar7] = '\0';
                local_5c = acStack_4d5 + 2;
                while (((&DAT_005c168c)[(byte)(acStack_4d5[1] + 1)] & 2) != 0) {
                  memmove(pcVar11,local_5c,iVar7);
                  iVar7 = iVar7 + -1;
                }
                uVar6 = 0xffffffff;
                pcVar11 = local_3a9 + 1;
                do {
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
                } while (cVar1 != '\0');
                iVar7 = ~uVar6 - 1;
                if (0 < iVar7) {
                  pcVar11 = local_3a9 + ~uVar6;
                  do {
                    if (((&DAT_005c168c)[(byte)(pcVar11[-1] + 1)] & 2) == 0) break;
                    iVar7 = iVar7 + -1;
                    pcVar11 = pcVar11 + -1;
                  } while (0 < iVar7);
                }
                (local_3a9 + 1)[iVar7] = '\0';
                local_58 = local_3a9 + 2;
                while (((&DAT_005c168c)[(byte)(local_3a9[1] + 1)] & 2) != 0) {
                  memmove(local_3a9 + 1,local_58,iVar7);
                  iVar7 = iVar7 + -1;
                }
                uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                                  (acStack_4d5 + 1,g_CDemonActorActorType_00763e48.name_hash,
                                   &g_CDemonActorActorType_00763e48);
                if ((uVar6 == 0) ||
                   (uVar10 = core_event_cpp_resolveActorByName_FUN_0047a390
                                       (local_3a9 + 1,g_CDemonActorActorType_00763e48.name_hash,
                                        &g_CDemonActorActorType_00763e48), uVar10 == 0)) {
                  return 0xffffffff;
                }
                *param_3 = *param_3 + local_60;
                local_a88 = 45.0;
                if (*(char *)(param_2 + *param_3) == ',') {
                  local_60 = -1;
                  sscanf
                            (param_2 + *param_3,",%f %n",&local_a88,&local_60);
                  if (local_60 < 2) {
                    pcVar11 = "Error parsing isFacing parameters.";
                    pcVar13 = &DAT_01c08b60;
                    do {
                      cVar1 = *pcVar11;
                      *pcVar13 = cVar1;
                      if (cVar1 == '\0') {
                        return 0xffffffff;
                      }
                      cVar1 = pcVar11[1];
                      pcVar11 = pcVar11 + 2;
                      pcVar13[1] = cVar1;
                      pcVar13 = pcVar13 + 2;
                    } while (cVar1 != '\0');
                    return 0xffffffff;
                  }
                  if (((double)local_a88 < 0.0) || (180 < (double)local_a88)) {
                    pcVar11 = "isFacing() angle must be in range 0..180.";
                    pcVar13 = &DAT_01c08b60;
                    do {
                      cVar1 = *pcVar11;
                      *pcVar13 = cVar1;
                      if (cVar1 == '\0') {
                        return 0xffffffff;
                      }
                      cVar1 = pcVar11[1];
                      pcVar11 = pcVar11 + 2;
                      pcVar13[1] = cVar1;
                      pcVar13 = pcVar13 + 2;
                    } while (cVar1 != '\0');
                    return 0xffffffff;
                  }
                  *param_3 = *param_3 + local_60;
                }
                uVar5 = 0x0FFFFFFF;
                if (*(char *)(param_2 + *param_3) != ')') {
                  pcVar11 = "Error parsing isFacing parameters.";
                  pcVar13 = &DAT_01c08b60;
                  do {
                    cVar1 = *pcVar11;
                    *pcVar13 = cVar1;
                    if (cVar1 == '\0') {
                      return 0xffffffff;
                    }
                    cVar1 = pcVar11[1];
                    pcVar11 = pcVar11 + 2;
                    pcVar13[1] = cVar1;
                    pcVar13 = pcVar13 + 2;
                  } while (cVar1 != '\0');
                  return 0xffffffff;
                }
                *param_3 = *param_3 + 1;
                if ((uVar6 == uVar5) || (uVar10 == uVar5)) {
                  local_dc = 0;
                }
                else {
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                            (uVar6,local_110,uVar10 + 0x20);
                  local_10c = 0;
                  iVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                    (local_f8,local_110);
                  if (local_a88 * (float)3.1415926535000001 * (float)0.0055555555555555497 <
                      ABS(*(float *)(iVar7 + 4))) {
                    local_dc = 0;
                  }
                  else {
                    local_dc = 1;
                  }
                }
              }
              else {
                iVar7 = _stricmp(local_150,"isLightOn");
                if (iVar7 == 0) {
                  local_54 = -1;
                  sscanf
                            (param_2 + *param_3," ( %[^ )] )%n",local_920,&local_54);
                  if (local_54 < 3) {
                    pcVar11 = "Error parsing isLightOn parameters.";
                    pcVar13 = &DAT_01c08b60;
                    do {
                      cVar1 = *pcVar11;
                      *pcVar13 = cVar1;
                      if (cVar1 == '\0') {
                        return 0xffffffff;
                      }
                      cVar1 = pcVar11[1];
                      pcVar11 = pcVar11 + 2;
                      pcVar13[1] = cVar1;
                      pcVar13 = pcVar13 + 2;
                    } while (cVar1 != '\0');
                    return 0xffffffff;
                  }
                  core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0
                            (0x01E57284,local_920,&local_4c,&local_48);
                  if (local_4c == 0) {
                    _sprintf(local_a84,"Spotlight %s doesn't exist.",local_920);
                    pcVar11 = local_a84;
                    pcVar13 = &DAT_01c08b60;
                    do {
                      cVar1 = *pcVar11;
                      *pcVar13 = cVar1;
                      if (cVar1 == '\0') {
                        return 0xffffffff;
                      }
                      cVar1 = pcVar11[1];
                      pcVar11 = pcVar11 + 2;
                      pcVar13[1] = cVar1;
                      pcVar13 = pcVar13 + 2;
                    } while (cVar1 != '\0');
                    return 0xffffffff;
                  }
                  local_dc = (uint)(*(int *)(local_48 + 0x1cb4) != 0);
                  *param_3 = *param_3 + local_54;
                }
                else {
                  iVar7 = _stricmp(local_150,"isNudityEnabled");
                  if (iVar7 == 0) {
                    local_44 = -1;
                    sscanf(param_2 + *param_3," ( )%n",&local_44);
                    if (local_44 < 2) {
                      pcVar11 = "Error parsing isNudityEnabled().";
                      pcVar13 = &DAT_01c08b60;
                      do {
                        cVar1 = *pcVar11;
                        *pcVar13 = cVar1;
                        if (cVar1 == '\0') {
                          return 0xffffffff;
                        }
                        cVar1 = pcVar11[1];
                        pcVar11 = pcVar11 + 2;
                        pcVar13[1] = cVar1;
                        pcVar13 = pcVar13 + 2;
                      } while (cVar1 != '\0');
                      return 0xffffffff;
                    }
                    local_dc = (uint)(*(int *)(0x01C775EC + 0x18) != 0);
                    *param_3 = *param_3 + local_44;
                  }
                  else {
                    iVar7 = _stricmp(local_150,"isSfxActive");
                    if (iVar7 == 0) {
                      local_40 = -1;
                      sscanf
                                (param_2 + *param_3," ( %[^ )] )%n",acStack_791 + 1,&local_40);
                      if (local_40 < 3) {
                        pcVar11 = "Error parsing isSfxActive parameters.";
                        pcVar13 = &DAT_01c08b60;
                        do {
                          cVar1 = *pcVar11;
                          *pcVar13 = cVar1;
                          if (cVar1 == '\0') {
                            return 0xffffffff;
                          }
                          cVar1 = pcVar11[1];
                          pcVar11 = pcVar11 + 2;
                          pcVar13[1] = cVar1;
                          pcVar13 = pcVar13 + 2;
                        } while (cVar1 != '\0');
                        return 0xffffffff;
                      }
                      pcVar11 = acStack_791 + 1;
                      uVar6 = 0xffffffff;
                      pcVar13 = pcVar11;
                      do {
                        if (uVar6 == 0) break;
                        uVar6 = uVar6 - 1;
                        cVar1 = *pcVar13;
                        pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
                      } while (cVar1 != '\0');
                      iVar7 = ~uVar6 - 1;
                      if (0 < iVar7) {
                        pcVar13 = pcVar11 + iVar7;
                        do {
                          if (((&DAT_005c168c)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                          iVar7 = iVar7 + -1;
                          pcVar13 = pcVar13 + -1;
                        } while (0 < iVar7);
                      }
                      pcVar11[iVar7] = '\0';
                      local_3c = acStack_791 + 2;
                      while (((&DAT_005c168c)[(byte)(acStack_791[1] + 1)] & 2) != 0) {
                        memmove(pcVar11,local_3c,iVar7);
                        iVar7 = iVar7 + -1;
                      }
                      local_dc = 0;
                      iVar7 = core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0
                                        (param_1,acStack_791 + 1);
                      if (iVar7 != 0) {
                        local_dc = 1;
                      }
                      *param_3 = *param_3 + local_40;
                    }
                    else {
                      iVar7 = _stricmp(local_150,"isTalking");
                      if (iVar7 == 0) {
                        local_38 = -1;
                        sscanf
                                  (param_2 + *param_3," ( %[^ )] )%n",local_27c,&local_38);
                        if (local_38 < 3) {
                          pcVar11 = "Error parsing isTalking parameters.";
                          pcVar13 = &DAT_01c08b60;
                          do {
                            cVar1 = *pcVar11;
                            *pcVar13 = cVar1;
                            if (cVar1 == '\0') {
                              return 0xffffffff;
                            }
                            cVar1 = pcVar11[1];
                            pcVar11 = pcVar11 + 2;
                            pcVar13[1] = cVar1;
                            pcVar13 = pcVar13 + 2;
                          } while (cVar1 != '\0');
                          return 0xffffffff;
                        }
                        local_dc = core_event_cpp_resolveActorByName_FUN_0047a390
                                             (local_27c,g_CCharacterActorType_00765a60.name_hash,
                                              &g_CCharacterActorType_00765a60);
                        if (local_dc == 0) {
                          return 0xffffffff;
                        }
                        if (local_dc == 0x0FFFFFFF) {
                          local_dc = local_dc ^ 0x0FFFFFFF;
                        }
                        else if (*(float *)(local_dc + 0x2610) <= 0.0) {
                          local_dc = 0;
                        }
                        else {
                          local_dc = 1;
                        }
                        *param_3 = *param_3 + local_38;
                      }
                      else {
                        iVar7 = _stricmp(local_150,"isVictim");
                        if (iVar7 == 0) {
                          local_e0 = -1;
                          sscanf
                                    (param_2 + *param_3," ( %[^ )] )%n",local_1b4,&local_e0);
                          if (local_e0 < 3) {
                            pcVar11 = "Error parsing isVictim parameters.";
                            pcVar13 = &DAT_01c08b60;
                            do {
                              cVar1 = *pcVar11;
                              *pcVar13 = cVar1;
                              if (cVar1 == '\0') {
                                return 0xffffffff;
                              }
                              cVar1 = pcVar11[1];
                              pcVar11 = pcVar11 + 2;
                              pcVar13[1] = cVar1;
                              pcVar13 = pcVar13 + 2;
                            } while (cVar1 != '\0');
                          }
                          else {
                            local_b4 = core_event_cpp_resolveActorByName_FUN_0047a390
                                                 (local_1b4,g_CCharacterActorType_00765a60.name_hash
                                                  ,&g_CCharacterActorType_00765a60);
                            if (local_b4 != 0) {
                              local_dc = 0;
                              if (local_b4 != 0x0FFFFFFF) {
                                local_34 = (float *)(local_b4 + 0x20);
                                local_14 = 0;
                                for (iVar7 = 0; iVar7 < *(int *)(0x01E57284 + 0x150bf4);
                                    iVar7 = iVar7 + 1) {
                                  iVar8 = *(int *)(0x01E57284 + local_14 + 0x150bf8);
                                  if ((((local_b4 == *(uint *)(iVar8 + 0xbca4)) &&
                                       (iVar9 = (**(code **)(*(int *)(iVar8 + 0x14c) + 0x104))
                                                          (iVar8), iVar9 < 1)) &&
                                      (iVar9 = (**(code **)(*(int *)(iVar8 + 0x14c) + 0x68))(iVar8),
                                      iVar9 == 0)) &&
                                     (fVar2 = *(float *)(iVar8 + 0x20) - *local_34,
                                     fVar4 = *(float *)(iVar8 + 0x24) - local_34[1],
                                     fVar3 = *(float *)(iVar8 + 0x28) - local_34[2],
                                     SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) <=
                                     (float)30)) {
                                    local_dc = 1;
                                    break;
                                  }
                                  local_14 = local_14 + 4;
                                }
                              }
                              *param_3 = *param_3 + local_e0;
                              goto LAB_0047e580;
                            }
                          }
                          return 0xffffffff;
                        }
                        iVar7 = _stricmp
                                          (local_150,"isWeaponDrawn");
                        if (iVar7 == 0) {
                          local_d8 = -1;
                          sscanf
                                    (param_2 + *param_3," ( %[^ )] )%n",local_470,&local_d8);
                          if (local_d8 < 3) {
                            pcVar11 = "Error parsing isWeaponDrawn parameters.";
                            pcVar13 = &DAT_01c08b60;
                            do {
                              cVar1 = *pcVar11;
                              *pcVar13 = cVar1;
                              if (cVar1 == '\0') {
                                return 0xffffffff;
                              }
                              cVar1 = pcVar11[1];
                              pcVar11 = pcVar11 + 2;
                              pcVar13[1] = cVar1;
                              pcVar13 = pcVar13 + 2;
                            } while (cVar1 != '\0');
                            return 0xffffffff;
                          }
                          uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                                            (local_470,g_CHeroActorType_01cae0ec.name_hash,
                                             &g_CHeroActorType_01cae0ec);
                          if (uVar6 == 0) {
                            return 0xffffffff;
                          }
                          if (uVar6 == 0x0FFFFFFF) {
                            local_dc = uVar6 ^ 0x0FFFFFFF;
                          }
                          else {
                            local_dc = (**(code **)(*(int *)(uVar6 + 0x14c) + 0x140))(uVar6);
                          }
                          *param_3 = *param_3 + local_d8;
                        }
                        else {
                          iVar7 = _stricmp
                                            (local_150,"isWearingGasMask");
                          if (iVar7 == 0) {
                            local_20 = -1;
                            sscanf
                                      (param_2 + *param_3," ( %[^ )] )%n",local_538,&local_20);
                            if (local_20 < 3) {
                              pcVar11 = "Error parsing isWearingGasMask parameters.";
                              pcVar13 = &DAT_01c08b60;
                              do {
                                cVar1 = *pcVar11;
                                *pcVar13 = cVar1;
                                if (cVar1 == '\0') {
                                  return 0xffffffff;
                                }
                                cVar1 = pcVar11[1];
                                pcVar11 = pcVar11 + 2;
                                pcVar13[1] = cVar1;
                                pcVar13 = pcVar13 + 2;
                              } while (cVar1 != '\0');
                              return 0xffffffff;
                            }
                            uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                                              (local_538,g_CHeroActorType_01cae0ec.name_hash,
                                               &g_CHeroActorType_01cae0ec);
                            if (uVar6 == 0) {
                              return 0xffffffff;
                            }
                            if (uVar6 == 0x0FFFFFFF) {
                              local_dc = 0;
                              *param_3 = *param_3 + local_20;
                            }
                            else {
                              local_dc = (uint)(*(int *)(uVar6 + 0x1fa00) == 2);
                              *param_3 = *param_3 + local_20;
                            }
                          }
                          else {
                            iVar7 = _stricmp
                                              (local_150,"randBool");
                            if (iVar7 != 0) {
                              iVar7 = _stricmp
                                                (local_150,"reachedDest");
                              if (iVar7 != 0) {
                                pcVar11 = "Invalid meta-function";
                                pcVar13 = &DAT_01c08b60;
                                do {
                                  cVar1 = *pcVar11;
                                  *pcVar13 = cVar1;
                                  if (cVar1 == '\0') {
                                    return 0xffffffff;
                                  }
                                  cVar1 = pcVar11[1];
                                  pcVar11 = pcVar11 + 2;
                                  pcVar13[1] = cVar1;
                                  pcVar13 = pcVar13 + 2;
                                } while (cVar1 != '\0');
                                return 0xffffffff;
                              }
                              local_18 = -1;
                              sscanf
                                        (param_2 + *param_3," ( %[^ )] )%n",local_664,&local_18);
                              if (local_18 < 3) {
                                pcVar11 = "Error parsing reachedDest parameters.";
                                pcVar13 = &DAT_01c08b60;
                                do {
                                  cVar1 = *pcVar11;
                                  *pcVar13 = cVar1;
                                  if (cVar1 == '\0') {
                                    return 0xffffffff;
                                  }
                                  cVar1 = pcVar11[1];
                                  pcVar11 = pcVar11 + 2;
                                  pcVar13[1] = cVar1;
                                  pcVar13 = pcVar13 + 2;
                                } while (cVar1 != '\0');
                              }
                              else {
                                uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                                                  (local_664,
                                                   g_CCharacterActorType_00765a60.name_hash,
                                                   &g_CCharacterActorType_00765a60);
                                if (uVar6 != 0) {
                                  if (uVar6 == 0x0FFFFFFF) {
                                    local_dc = 0;
                                    *param_3 = *param_3 + local_18;
                                  }
                                  else {
                                    iVar7 = (**(code **)(*(int *)(uVar6 + 0x14c) + 0x134))(uVar6);
                                    local_dc = (uint)(iVar7 != 0);
                                    *param_3 = *param_3 + local_18;
                                  }
                                  goto LAB_0047e580;
                                }
                              }
                              return 0xffffffff;
                            }
                            local_1c = -1;
                            sscanf
                                      (param_2 + *param_3," ( %f )%n",&local_d4,&local_1c);
                            if (local_1c < 3) {
                              pcVar11 = "Error parsing randBool parameters.";
                              pcVar13 = &DAT_01c08b60;
                              do {
                                cVar1 = *pcVar11;
                                *pcVar13 = cVar1;
                                if (cVar1 == '\0') {
                                  return 0xffffffff;
                                }
                                cVar1 = pcVar11[1];
                                pcVar11 = pcVar11 + 2;
                                pcVar13[1] = cVar1;
                                pcVar13 = pcVar13 + 2;
                              } while (cVar1 != '\0');
                              return 0xffffffff;
                            }
                            local_dc = core_actor_cpp_randomChance_FUN_0040dea0(local_d4);
                            *param_3 = *param_3 + local_1c;
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
    goto LAB_0047e580;
  }
  local_c0 = -1;
  sscanf
            (param_2 + *param_3," ( %s %s %[^ )] )%n",acStack_8bd + 1,local_219 + 1,local_345 + 1,
             &local_c0);
  if (local_c0 < 3) {
    pcVar11 = "Error parsing cmp parameters.";
    pcVar13 = &DAT_01c08b60;
    do {
      cVar1 = *pcVar11;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') {
        return 0xffffffff;
      }
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    return 0xffffffff;
  }
  pcVar11 = acStack_8bd + 1;
  uVar6 = 0xffffffff;
  pcVar13 = pcVar11;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
  } while (cVar1 != '\0');
  iVar7 = ~uVar6 - 1;
  if (0 < iVar7) {
    pcVar13 = pcVar11 + iVar7;
    do {
      if (((&DAT_005c168c)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar13 + -1;
    } while (0 < iVar7);
  }
  pcVar11[iVar7] = '\0';
  local_d0 = acStack_8bd + 2;
  while (((&DAT_005c168c)[(byte)(acStack_8bd[1] + 1)] & 2) != 0) {
    memmove(pcVar11,local_d0,iVar7);
    iVar7 = iVar7 + -1;
  }
  uVar6 = 0xffffffff;
  pcVar11 = local_345 + 1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
  } while (cVar1 != '\0');
  iVar7 = ~uVar6 - 1;
  if (0 < iVar7) {
    pcVar11 = local_345 + ~uVar6;
    do {
      if (((&DAT_005c168c)[(byte)(pcVar11[-1] + 1)] & 2) == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar11 + -1;
    } while (0 < iVar7);
  }
  (local_345 + 1)[iVar7] = '\0';
  local_cc = local_345 + 2;
  while (((&DAT_005c168c)[(byte)(local_345[1] + 1)] & 2) != 0) {
    memmove(local_345 + 1,local_cc,iVar7);
    iVar7 = iVar7 + -1;
  }
  uVar6 = 0xffffffff;
  pcVar11 = local_219 + 1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
  } while (cVar1 != '\0');
  iVar7 = ~uVar6 - 1;
  if (0 < iVar7) {
    pcVar11 = local_219 + ~uVar6;
    do {
      if (((&DAT_005c168c)[(byte)(pcVar11[-1] + 1)] & 2) == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar11 + -1;
    } while (0 < iVar7);
  }
  (local_219 + 1)[iVar7] = '\0';
  local_c8 = local_219 + 2;
  while (((&DAT_005c168c)[(byte)(local_219[1] + 1)] & 2) != 0) {
    memmove(local_219 + 1,local_c8,iVar7);
    iVar7 = iVar7 + -1;
  }
  iVar8 = _strcmp(local_219 + 1,"<");
  iVar7 = 0;
  if (iVar8 != 0) {
    iVar7 = _strcmp(local_219 + 1,"<=");
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = _strcmp(local_219 + 1,"==");
      if (iVar7 == 0) {
        iVar7 = 2;
      }
      else {
        iVar7 = _strcmp(local_219 + 1,"!=");
        if (iVar7 == 0) {
          iVar7 = 3;
        }
        else {
          iVar7 = _strcmp(local_219 + 1,">");
          if (iVar7 == 0) {
            iVar7 = 5;
          }
          else {
            iVar7 = _strcmp(local_219 + 1,">=");
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
    pcVar11 = "Invalid relational operator in cmp statement";
    pcVar13 = &DAT_01c08b60;
    do {
      cVar1 = *pcVar11;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') {
        return 0xffffffff;
      }
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    return 0xffffffff;
  }
  *param_3 = *param_3 + local_c0;
  iVar9 = sscanf(acStack_8bd + 1,"%d",&local_c4);
  iVar8 = local_c4;
  if (iVar9 != 1) {
    iVar8 = core_event_cpp_CEventList_getCounterValue_FUN_004807e0(0x01C03A10,acStack_8bd + 1);
  }
  iVar9 = sscanf(local_345 + 1,"%d",&local_74);
  if (iVar9 == 1) {
    switch(iVar7) {
    case 0:
switchD_0047e565_caseD_0:
      local_dc = (uint)(iVar8 < local_74);
      break;
    case 1:
switchD_0047e565_caseD_1:
      local_dc = (uint)(iVar8 <= local_74);
      break;
    case 2:
switchD_0047e565_caseD_2:
      local_dc = (uint)(iVar8 == local_74);
      break;
    case 3:
switchD_0047e565_caseD_3:
      local_dc = (uint)(iVar8 != local_74);
      break;
    case 4:
switchD_0047e565_caseD_4:
      local_dc = (uint)(local_74 <= iVar8);
      break;
    case 5:
switchD_0047e565_caseD_5:
      local_dc = (uint)(local_74 < iVar8);
      break;
    default:
switchD_0047e565_default:
      PTR_01cc4800 = "..\\core\\event.cpp";
      INT_01cc4804 = 0x765;
      core_main_c_FUN_004c8440("Hell froze.");
    }
LAB_0047e580:
    while (((&DAT_005c168c)[(byte)(*(char *)(param_2 + *param_3) + 1)] & 2) != 0) {
      *param_3 = *param_3 + 1;
    }
    return local_dc;
  }
  local_74 = core_event_cpp_CEventList_getCounterValue_FUN_004807e0(0x01C03A10,local_345 + 1);
  switch(iVar7) {
  case 0:
    goto switchD_0047e565_caseD_0;
  case 1:
    goto switchD_0047e565_caseD_1;
  case 2:
    goto switchD_0047e565_caseD_2;
  case 3:
    goto switchD_0047e565_caseD_3;
  case 4:
    goto switchD_0047e565_caseD_4;
  case 5:
    goto switchD_0047e565_caseD_5;
  default:
    goto switchD_0047e565_default;
  }
}
