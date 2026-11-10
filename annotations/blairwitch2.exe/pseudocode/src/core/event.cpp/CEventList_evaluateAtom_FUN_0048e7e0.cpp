// Name: core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0
// Address: 0048e7e0
// Address Range: [[0048e7e0, 00490ebe]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_0048e7e0(CEventList *this_ptr,char *expression,int *parse_position)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_0048e7e0(CEventList *this_ptr,char *expression,int *parse_position)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CCharacter *pCVar6;
  CGame *pCVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  CCharacter *pCVar11;
  CDemonActor *pCVar12;
  EDeathState EVar13;
  CCharacter *pCVar14;
  uint uVar15;
  SIZE_T SVar16;
  char *pcVar17;
  char *pcVar18;
  byte bVar19;
  float afStackY_1134 [23];
  float local_10b8;
  char local_10b4 [256];
  char local_fb4 [256];
  char local_eb4 [256];
  char local_db4 [256];
  char local_cb4 [255];
  char local_bb5 [200];
  char acStack_aed [200];
  char local_a25 [100];
  char acStack_9c1 [101];
  byte local_95c [99];
  char local_8f9 [100];
  char local_895 [101];
  byte local_830 [100];
  char local_7cc [100];
  byte local_768 [99];
  char acStack_705 [100];
  char acStack_6a1 [100];
  char acStack_63d [100];
  char local_5d9 [101];
  byte local_574 [100];
  char local_510 [100];
  char local_4ac [100];
  byte local_448 [100];
  byte local_3e4 [99];
  char acStack_381 [100];
  char local_31d [100];
  char acStack_2b9 [100];
  char acStack_255 [100];
  char acStack_1f1 [101];
  char local_18c [64];
  uint local_14c;
  float local_148 [4];
  float local_138;
  uint local_134;
  float local_130 [4];
  float local_120;
  uint local_11c;
  float afStack_118 [5];
  uint local_104;
  int local_100;
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
  float local_a8;
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
  C3DSLight *local_70;
  CDemonLight *local_6c;
  int local_68;
  int local_64;
  char *local_60;
  int local_5c;
  int local_58;
  CCharacter *local_54;
  float *local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  
  bVar19 = 0;
  while (((&DAT_0061ed94)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
    *parse_position = *parse_position + 1;
  }
  if (expression[*parse_position] == '.') {
    *parse_position = *parse_position + 1;
  }
  bVar2 = expression[*parse_position];
  if (bVar2 == 0) {
    pcVar17 = "Unexpected end of string";
    pcVar18 = &DAT_01c3dd10;
    do {
      cVar1 = *pcVar17;
      *pcVar18 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar17[1];
      pcVar17 = pcVar17 + 2;
      pcVar18[1] = cVar1;
      pcVar18 = pcVar18 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  if (bVar2 == 0x28) {
    *parse_position = *parse_position + 1;
    iVar8 = core_event_cpp_CEventList_evaluateLogicalExpr_FUN_00490ec0
                      (this_ptr,expression,parse_position);
    if (iVar8 < 0) {
      return iVar8;
    }
    if (expression[*parse_position] != ')') {
      pcVar17 = "Matching ')' is missing";
      pcVar18 = &DAT_01c3dd10;
      do {
        cVar1 = *pcVar17;
        *pcVar18 = cVar1;
        if (cVar1 == '\0') {
          return -1;
        }
        cVar1 = pcVar17[1];
        pcVar17 = pcVar17 + 2;
        pcVar18[1] = cVar1;
        pcVar18 = pcVar18 + 2;
      } while (cVar1 != '\0');
      return -1;
    }
    *parse_position = *parse_position + 1;
    while (((&DAT_0061ed94)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
    }
    return iVar8;
  }
  if (bVar2 == 0x21) {
    *parse_position = *parse_position + 1;
    iVar8 = core_event_cpp_CEventList_evaluateAtom_FUN_0048e7e0(this_ptr,expression,parse_position);
    if (-1 < iVar8) {
      return (uint)(iVar8 == 0);
    }
    return iVar8;
  }
  iVar8 = core_event_cpp_isValidIdentifierChar_FUN_00491c70((uint)bVar2);
  if (iVar8 == 0) {
    pcVar17 = "Syntax error";
    pcVar18 = &DAT_01c3dd10;
    do {
      cVar1 = *pcVar17;
      *pcVar18 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar17[1];
      pcVar17 = pcVar17 + 2;
      pcVar18[1] = cVar1;
      pcVar18 = pcVar18 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  pcVar17 = local_18c;
  do {
    *pcVar17 = expression[*parse_position];
    iVar8 = *parse_position;
    *parse_position = iVar8 + 1;
    pcVar17 = pcVar17 + 1;
    iVar8 = core_event_cpp_isValidIdentifierChar_FUN_00491c70((uint)(byte)expression[iVar8 + 1]);
  } while (iVar8 != 0);
  *pcVar17 = '\0';
  if (expression[*parse_position] != '(') {
    while (((&DAT_0061ed94)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
    }
    iVar8 = core_event_cpp_CEventList_resolveVariable_FUN_0048e2b0(this_ptr,local_18c);
    return iVar8;
  }
  local_104 = 0xffffffff;
  iVar8 = _stricmp(local_18c,&DAT_005d4428);
  if (iVar8 != 0) {
    iVar8 = _stricmp(local_18c,"exists");
    if (iVar8 == 0) {
      local_e4 = -1;
      sscanf(expression + *parse_position," ( %[^ )] )%n");
      if (local_e4 < 3) {
        pcVar17 = "Error parsing exists parameters.";
        pcVar18 = &DAT_01c3dd10;
        do {
          cVar1 = *pcVar17;
          *pcVar18 = cVar1;
          if (cVar1 == '\0') {
            return -1;
          }
          cVar1 = pcVar17[1];
          pcVar17 = pcVar17 + 2;
          pcVar18[1] = cVar1;
          pcVar18 = pcVar18 + 2;
        } while (cVar1 != '\0');
        return -1;
      }
      pcVar17 = acStack_255 + 1;
      uVar15 = 0xffffffff;
      pcVar18 = pcVar17;
      do {
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar18 + (uint)bVar19 * -2 + 1;
      } while (cVar1 != '\0');
      SVar16 = ~uVar15 - 1;
      if (0 < (int)SVar16) {
        pcVar18 = pcVar17 + SVar16;
        do {
          if (((&DAT_0061ed94)[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
          SVar16 = SVar16 - 1;
          pcVar18 = pcVar18 + -1;
        } while (0 < (int)SVar16);
      }
      pcVar17[SVar16] = '\0';
      local_e0 = acStack_255 + 2;
      while (((&DAT_0061ed94)[(byte)(acStack_255[1] + 1)] & 2) != 0) {
        memmove(pcVar17,local_e0,SVar16);
        SVar16 = SVar16 - 1;
      }
      pCVar11 = (CCharacter *)
                core_event_cpp_resolveActorByName_FUN_00488d00
                          (acStack_255 + 1,g_CDemonActorClassInfo.name_hash,&g_CDemonActorClassInfo)
      ;
      if ((pCVar11 == (CCharacter *)0x0) || (pCVar11 == 0x0FFFFFFF)) {
        local_104 = 0;
      }
      else {
        local_104 = 1;
      }
      *parse_position = *parse_position + local_e4;
    }
    else {
      iVar8 = _stricmp(local_18c,"fieldNotesDisplayed");
      if (iVar8 == 0) {
        local_dc = -1;
        sscanf(expression + *parse_position," ( )%n");
        if (local_dc < 2) {
          pcVar17 = "Error parsing fieldNotesDisplayed condition.";
          pcVar18 = &DAT_01c3dd10;
          do {
            cVar1 = *pcVar17;
            *pcVar18 = cVar1;
            if (cVar1 == '\0') {
              return -1;
            }
            cVar1 = pcVar17[1];
            pcVar17 = pcVar17 + 2;
            pcVar18[1] = cVar1;
            pcVar18 = pcVar18 + 2;
          } while (cVar1 != '\0');
          return -1;
        }
        local_104 = *(uint *)&g_CFieldNotesPtr->field_0x40;
        *parse_position = *parse_position + local_dc;
      }
      else {
        iVar8 = _stricmp(local_18c,"hasItem");
        if (iVar8 == 0) {
          if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
            pcVar17 = "Can't use hasItem condition in multi-player";
            pcVar18 = &DAT_01c3dd10;
            do {
              cVar1 = *pcVar17;
              *pcVar18 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar17[1];
              pcVar17 = pcVar17 + 2;
              pcVar18[1] = cVar1;
              pcVar18 = pcVar18 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          local_d8 = -1;
          sscanf(expression + *parse_position," (%[^)])%n");
          if (local_d8 < 3) {
            pcVar17 = "Error parsing hasItem parameters.";
            pcVar18 = &DAT_01c3dd10;
            do {
              cVar1 = *pcVar17;
              *pcVar18 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar17[1];
              pcVar17 = pcVar17 + 2;
              pcVar18[1] = cVar1;
              pcVar18 = pcVar18 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          pcVar17 = acStack_6a1 + 1;
          uVar15 = 0xffffffff;
          pcVar18 = pcVar17;
          do {
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            cVar1 = *pcVar18;
            pcVar18 = pcVar18 + (uint)bVar19 * -2 + 1;
          } while (cVar1 != '\0');
          SVar16 = ~uVar15 - 1;
          if (0 < (int)SVar16) {
            pcVar18 = pcVar17 + SVar16;
            do {
              if (((&DAT_0061ed94)[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
              SVar16 = SVar16 - 1;
              pcVar18 = pcVar18 + -1;
            } while (0 < (int)SVar16);
          }
          pcVar17[SVar16] = '\0';
          local_7c = acStack_6a1 + 2;
          while (((&DAT_0061ed94)[(byte)(acStack_6a1[1] + 1)] & 2) != 0) {
            memmove(pcVar17,local_7c,SVar16);
            SVar16 = SVar16 - 1;
          }
          iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          local_104 = 0;
          if ((iVar8 != 0) &&
             (pCVar12 = core_inv_cpp_CInventory_findItemByName_FUN_004db830
                                  ((CInventory *)(iVar8 + 0x2437c),acStack_6a1 + 1),
             pCVar12 != (CDemonActor *)0x0)) {
            local_104 = 1;
          }
          *parse_position = *parse_position + local_d8;
        }
        else {
          iVar8 = _stricmp(local_18c,"hasItemType");
          if (iVar8 == 0) {
            local_78 = -1;
            sscanf(expression + *parse_position," (%[^,], %[^)] )%n");
            if (local_78 < 5) {
              pcVar17 = "Error parsing hasItemType parameters.";
              pcVar18 = &DAT_01c3dd10;
              do {
                cVar1 = *pcVar17;
                *pcVar18 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar17[1];
                pcVar17 = pcVar17 + 2;
                pcVar18[1] = cVar1;
                pcVar18 = pcVar18 + 2;
              } while (cVar1 != '\0');
            }
            else {
              pcVar17 = acStack_63d + 1;
              uVar15 = 0xffffffff;
              pcVar18 = pcVar17;
              do {
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1;
                cVar1 = *pcVar18;
                pcVar18 = pcVar18 + (uint)bVar19 * -2 + 1;
              } while (cVar1 != '\0');
              SVar16 = ~uVar15 - 1;
              if (0 < (int)SVar16) {
                pcVar18 = pcVar17 + SVar16;
                do {
                  if (((&DAT_0061ed94)[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                  SVar16 = SVar16 - 1;
                  pcVar18 = pcVar18 + -1;
                } while (0 < (int)SVar16);
              }
              pcVar17[SVar16] = '\0';
              local_d4 = acStack_63d + 2;
              while (((&DAT_0061ed94)[(byte)(acStack_63d[1] + 1)] & 2) != 0) {
                memmove(pcVar17,local_d4,SVar16);
                SVar16 = SVar16 - 1;
              }
              uVar15 = 0xffffffff;
              pcVar17 = local_a25 + 1;
              do {
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar17 + (uint)bVar19 * -2 + 1;
              } while (cVar1 != '\0');
              SVar16 = ~uVar15 - 1;
              if (0 < (int)SVar16) {
                pcVar17 = local_a25 + ~uVar15;
                do {
                  if (((&DAT_0061ed94)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                  SVar16 = SVar16 - 1;
                  pcVar17 = pcVar17 + -1;
                } while (0 < (int)SVar16);
              }
              (local_a25 + 1)[SVar16] = '\0';
              local_d0 = local_a25 + 2;
              while (((&DAT_0061ed94)[(byte)(local_a25[1] + 1)] & 2) != 0) {
                memmove(local_a25 + 1,local_d0,SVar16);
                SVar16 = SVar16 - 1;
              }
              pCVar11 = (CCharacter *)
                        core_event_cpp_resolveActorByName_FUN_00488d00
                                  (acStack_63d + 1,g_CHeroClassInfo.name_hash,&g_CHeroClassInfo);
              if (pCVar11 != (CCharacter *)0x0) {
                if (pCVar11 == 0x0FFFFFFF) {
                  local_104 = 0;
                  *parse_position = *parse_position + local_78;
                }
                else {
                  local_104 = core_inv_cpp_CInventory_hasItemOfClass_FUN_004db880
                                        ((CInventory *)(pCVar11[2].cloth_list.cloths + 7),
                                         local_a25 + 1);
                  *parse_position = *parse_position + local_78;
                }
                goto LAB_0048ec8f;
              }
            }
            return -1;
          }
          iVar8 = _stricmp(local_18c,"hasKeyMask");
          if (iVar8 == 0) {
            if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
              pcVar17 = "Can't use hasKeyMask condition in multi-player";
              pcVar18 = &DAT_01c3dd10;
              do {
                cVar1 = *pcVar17;
                *pcVar18 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar17[1];
                pcVar17 = pcVar17 + 2;
                pcVar18[1] = cVar1;
                pcVar18 = pcVar18 + 2;
              } while (cVar1 != '\0');
              return -1;
            }
            local_cc = -1;
            sscanf(expression + *parse_position," ( %d )%n");
            if (local_cc < 3) {
              pcVar17 = "Error parsing hasKeyMask parameters.";
              pcVar18 = &DAT_01c3dd10;
              do {
                cVar1 = *pcVar17;
                *pcVar18 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar17[1];
                pcVar17 = pcVar17 + 2;
                pcVar18[1] = cVar1;
                pcVar18 = pcVar18 + 2;
              } while (cVar1 != '\0');
              return -1;
            }
            if (local_c8 == 0) {
              pcVar17 = "hasKeyMask(0) always returns false!";
              pcVar18 = &DAT_01c3dd10;
              do {
                cVar1 = *pcVar17;
                *pcVar18 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar17[1];
                pcVar17 = pcVar17 + 2;
                pcVar18[1] = cVar1;
                pcVar18 = pcVar18 + 2;
              } while (cVar1 != '\0');
              return -1;
            }
            if ((local_c8 - 1 & local_c8) != 0) {
              pcVar17 = "mask value must be a power of 2.\n(To test for multiple keys, use multiple hasKeyMask() tests)";
              pcVar18 = &DAT_01c3dd10;
              do {
                cVar1 = *pcVar17;
                *pcVar18 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar17[1];
                pcVar17 = pcVar17 + 2;
                pcVar18[1] = cVar1;
                pcVar18 = pcVar18 + 2;
              } while (cVar1 != '\0');
              return -1;
            }
            iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
            local_104 = 0;
            if ((iVar8 != 0) &&
               (iVar8 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004dee70
                                  ((CInventory *)(iVar8 + 0x2437c),local_c8,0), iVar8 != 0)) {
              local_104 = 1;
            }
            *parse_position = *parse_position + local_cc;
          }
          else {
            iVar8 = _stricmp(local_18c,"isBroken");
            if (iVar8 == 0) {
              local_c4 = -1;
              sscanf(expression + *parse_position," (%[^)])%n");
              if (local_c4 < 3) {
                pcVar17 = "Error parsing isBroken parameters.";
                pcVar18 = &DAT_01c3dd10;
                do {
                  cVar1 = *pcVar17;
                  *pcVar18 = cVar1;
                  if (cVar1 == '\0') {
                    return -1;
                  }
                  cVar1 = pcVar17[1];
                  pcVar17 = pcVar17 + 2;
                  pcVar18[1] = cVar1;
                  pcVar18 = pcVar18 + 2;
                } while (cVar1 != '\0');
              }
              else {
                pcVar17 = acStack_9c1 + 1;
                uVar15 = 0xffffffff;
                pcVar18 = pcVar17;
                do {
                  if (uVar15 == 0) break;
                  uVar15 = uVar15 - 1;
                  cVar1 = *pcVar18;
                  pcVar18 = pcVar18 + (uint)bVar19 * -2 + 1;
                } while (cVar1 != '\0');
                SVar16 = ~uVar15 - 1;
                if (0 < (int)SVar16) {
                  pcVar18 = pcVar17 + SVar16;
                  do {
                    if (((&DAT_0061ed94)[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                    SVar16 = SVar16 - 1;
                    pcVar18 = pcVar18 + -1;
                  } while (0 < (int)SVar16);
                }
                pcVar17[SVar16] = '\0';
                local_c0 = acStack_9c1 + 2;
                while (((&DAT_0061ed94)[(byte)(acStack_9c1[1] + 1)] & 2) != 0) {
                  memmove(pcVar17,local_c0,SVar16);
                  SVar16 = SVar16 - 1;
                }
                pCVar11 = (CCharacter *)
                          core_event_cpp_resolveActorByName_FUN_00488d00
                                    (acStack_9c1 + 1,g_CGlassClassInfo.name_hash,&g_CGlassClassInfo)
                ;
                if (pCVar11 != (CCharacter *)0x0) {
                  if (pCVar11 == 0x0FFFFFFF) {
                    local_104 = 0;
                    *parse_position = *parse_position + local_c4;
                  }
                  else {
                    local_104 = (uint)(*(int *)&(pCVar11->model).field_0x28 != 0);
                    *parse_position = *parse_position + local_c4;
                  }
                  goto LAB_0048ec8f;
                }
              }
              return -1;
            }
            iVar8 = _stricmp(local_18c,"isCurrentCamera");
            if (iVar8 == 0) {
              local_bc = -1;
              sscanf(expression + *parse_position," ( %[^ )] )%n");
              if (local_bc < 3) {
                pcVar17 = "Error parsing isCurrentCamera parameters.";
                pcVar18 = &DAT_01c3dd10;
                do {
                  cVar1 = *pcVar17;
                  *pcVar18 = cVar1;
                  if (cVar1 == '\0') {
                    return -1;
                  }
                  cVar1 = pcVar17[1];
                  pcVar17 = pcVar17 + 2;
                  pcVar18[1] = cVar1;
                  pcVar18 = pcVar18 + 2;
                } while (cVar1 != '\0');
                return -1;
              }
              local_104 = 0;
              if ((-1 < g_CDemonSetPtr->selected_camera_index) &&
                 (iVar8 = _stricmp
                                    ((char *)(g_CDemonSetPtr->cameras +
                                             g_CDemonSetPtr->selected_camera_index),local_510),
                 iVar8 == 0)) {
                local_104 = 1;
              }
              *parse_position = *parse_position + local_bc;
            }
            else {
              iVar8 = _stricmp(local_18c,"isCurrentSet");
              if (iVar8 == 0) {
                local_b8 = -1;
                sscanf(expression + *parse_position," ( %[^ )] )%n");
                if (local_b8 < 3) {
                  pcVar17 = "Error parsing isCurrentSet parameters.";
                  pcVar18 = &DAT_01c3dd10;
                  do {
                    cVar1 = *pcVar17;
                    *pcVar18 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar17[1];
                    pcVar17 = pcVar17 + 2;
                    pcVar18[1] = cVar1;
                    pcVar18 = pcVar18 + 2;
                  } while (cVar1 != '\0');
                  return -1;
                }
                local_104 = 0;
                if (-1 < *0x01D182F0) {
                  engine_dosio_cpp_splitPath_FUN_00461070
                            (local_7cc,(char *)0x0,(char *)0x0,local_cb4,(char *)0x0);
                  engine_dosio_cpp_splitPath_FUN_00461070
                            ((char *)(0x01D182F0 + *0x01D182F0 * 0x40 + 2),(char *)0x0,
                             (char *)0x0,local_fb4,(char *)0x0);
                  iVar8 = _stricmp(local_cb4,local_fb4);
                  if (iVar8 == 0) {
                    local_104 = 1;
                  }
                }
                *parse_position = *parse_position + local_b8;
              }
              else {
                iVar8 = _stricmp(local_18c,"isDead");
                if (iVar8 == 0) {
                  local_b4 = -1;
                  sscanf(expression + *parse_position," ( %[^ )] )%n");
                  if (local_b4 < 3) {
                    pcVar17 = "Error parsing isDead parameters.";
                    pcVar18 = &DAT_01c3dd10;
                    do {
                      cVar1 = *pcVar17;
                      *pcVar18 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar17[1];
                      pcVar17 = pcVar17 + 2;
                      pcVar18[1] = cVar1;
                      pcVar18 = pcVar18 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  pCVar11 = (CCharacter *)
                            core_event_cpp_resolveActorByName_FUN_00488d00
                                      (local_830,g_CCharacterClassInfo.name_hash,
                                       &g_CCharacterClassInfo);
                  if (pCVar11 == (CCharacter *)0x0) {
                    return -1;
                  }
                  if (pCVar11 == 0x0FFFFFFF) {
                    local_104 = 0;
                    *parse_position = *parse_position + local_b4;
                  }
                  else {
                    EVar13 = (*(((pCVar11->base).vtable._uc)->_uc).getDeathState)(pCVar11);
                    local_104 = (uint)(1 < (int)EVar13);
                    *parse_position = *parse_position + local_b4;
                  }
                }
                else {
                  iVar8 = _stricmp(local_18c,"isFadeFinished");
                  if (iVar8 == 0) {
                    local_b0 = -1;
                    sscanf(expression + *parse_position," ( )%n");
                    pCVar7 = g_CGamePtr;
                    if (local_b0 < 2) {
                      pcVar17 = "Error parsing isFadeFinished function.";
                      pcVar18 = &DAT_01c3dd10;
                      do {
                        cVar1 = *pcVar17;
                        *pcVar18 = cVar1;
                        if (cVar1 == '\0') {
                          return -1;
                        }
                        cVar1 = pcVar17[1];
                        pcVar17 = pcVar17 + 2;
                        pcVar18[1] = cVar1;
                        pcVar18 = pcVar18 + 2;
                      } while (cVar1 != '\0');
                      return -1;
                    }
                    *parse_position = *parse_position + local_b0;
                    local_104 = core_game_cpp_FUN_004bb4e0(pCVar7);
                  }
                  else {
                    iVar8 = _stricmp(local_18c,"isInRange");
                    if (iVar8 == 0) {
                      local_ac = -1;
                      sscanf(expression + *parse_position," ( %n");
                      if (local_ac < 1) {
                        pcVar17 = "Error parsing isInRange parameters.";
                        pcVar18 = &DAT_01c3dd10;
                        do {
                          cVar1 = *pcVar17;
                          *pcVar18 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar17[1];
                          pcVar17 = pcVar17 + 2;
                          pcVar18[1] = cVar1;
                          pcVar18 = pcVar18 + 2;
                        } while (cVar1 != '\0');
                        return -1;
                      }
                      *parse_position = *parse_position + local_ac;
                      iVar8 = core_event_cpp_parseVectorLocation_FUN_00488e30
                                        (expression,parse_position,local_148 + 2);
                      if (iVar8 < 0) {
                        return -1;
                      }
                      local_ac = -1;
                      sscanf(expression + *parse_position," , %n");
                      if (local_ac < 1) {
                        pcVar17 = "Error parsing isInRange parameters.";
                        pcVar18 = &DAT_01c3dd10;
                        do {
                          cVar1 = *pcVar17;
                          *pcVar18 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar17[1];
                          pcVar17 = pcVar17 + 2;
                          pcVar18[1] = cVar1;
                          pcVar18 = pcVar18 + 2;
                        } while (cVar1 != '\0');
                      }
                      else {
                        *parse_position = *parse_position + local_ac;
                        iVar9 = core_event_cpp_parseVectorLocation_FUN_00488e30
                                          (expression,parse_position,local_130 + 2);
                        if (-1 < iVar9) {
                          local_ac = -1;
                          sscanf
                                    (expression + *parse_position," , %f )%n");
                          if (local_ac < 3) {
                            pcVar17 = "Error parsing isInRange parameters.";
                            pcVar18 = &DAT_01c3dd10;
                            do {
                              cVar1 = *pcVar17;
                              *pcVar18 = cVar1;
                              if (cVar1 == '\0') {
                                return -1;
                              }
                              cVar1 = pcVar17[1];
                              pcVar17 = pcVar17 + 2;
                              pcVar18[1] = cVar1;
                              pcVar18 = pcVar18 + 2;
                            } while (cVar1 != '\0');
                            return -1;
                          }
                          *parse_position = *parse_position + local_ac;
                          if ((iVar8 == 0) || (iVar9 == 0)) {
                            local_104 = 0;
                          }
                          else {
                            local_104 = (uint)(SQRT((local_138 - local_120) *
                                                    (local_138 - local_120) +
                                                    (local_148[3] - local_130[3]) *
                                                    (local_148[3] - local_130[3]) +
                                                    (local_148[2] - local_130[2]) *
                                                    (local_148[2] - local_130[2])) <= local_a8);
                          }
                          goto LAB_0048ec8f;
                        }
                      }
                      return -1;
                    }
                    iVar8 = _stricmp(local_18c,"isOfType");
                    if (iVar8 == 0) {
                      local_98 = -1;
                      sscanf(expression + *parse_position," ( %[^ ,] , %[^ )] )%n");
                      if (local_98 < 3) {
                        pcVar17 = "Error parsing isOfType parameters.";
                        pcVar18 = &DAT_01c3dd10;
                        do {
                          cVar1 = *pcVar17;
                          *pcVar18 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar17[1];
                          pcVar17 = pcVar17 + 2;
                          pcVar18[1] = cVar1;
                          pcVar18 = pcVar18 + 2;
                        } while (cVar1 != '\0');
                      }
                      else {
                        pcVar17 = acStack_381 + 1;
                        uVar15 = 0xffffffff;
                        pcVar18 = pcVar17;
                        do {
                          if (uVar15 == 0) break;
                          uVar15 = uVar15 - 1;
                          cVar1 = *pcVar18;
                          pcVar18 = pcVar18 + (uint)bVar19 * -2 + 1;
                        } while (cVar1 != '\0');
                        SVar16 = ~uVar15 - 1;
                        if (0 < (int)SVar16) {
                          pcVar18 = pcVar17 + SVar16;
                          do {
                            if (((&DAT_0061ed94)[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                            SVar16 = SVar16 - 1;
                            pcVar18 = pcVar18 + -1;
                          } while (0 < (int)SVar16);
                        }
                        pcVar17[SVar16] = '\0';
                        local_90 = acStack_381 + 2;
                        while (((&DAT_0061ed94)[(byte)(acStack_381[1] + 1)] & 2) != 0) {
                          memmove(pcVar17,local_90,SVar16);
                          SVar16 = SVar16 - 1;
                        }
                        uVar15 = 0xffffffff;
                        pcVar17 = local_895 + 1;
                        do {
                          if (uVar15 == 0) break;
                          uVar15 = uVar15 - 1;
                          cVar1 = *pcVar17;
                          pcVar17 = pcVar17 + (uint)bVar19 * -2 + 1;
                        } while (cVar1 != '\0');
                        SVar16 = ~uVar15 - 1;
                        if (0 < (int)SVar16) {
                          pcVar17 = local_895 + ~uVar15;
                          do {
                            if (((&DAT_0061ed94)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                            SVar16 = SVar16 - 1;
                            pcVar17 = pcVar17 + -1;
                          } while (0 < (int)SVar16);
                        }
                        (local_895 + 1)[SVar16] = '\0';
                        local_8c = local_895 + 2;
                        while (((&DAT_0061ed94)[(byte)(local_895[1] + 1)] & 2) != 0) {
                          memmove(local_895 + 1,local_8c,SVar16);
                          SVar16 = SVar16 - 1;
                        }
                        pCVar11 = (CCharacter *)
                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                            (acStack_381 + 1,g_CDemonActorClassInfo.name_hash,
                                             &g_CDemonActorClassInfo);
                        if (pCVar11 != (CCharacter *)0x0) {
                          if (pCVar11 == 0x0FFFFFFF) {
                            local_104 = 0;
                            *parse_position = *parse_position + local_98;
                          }
                          else {
                            local_104 = core_actor_cpp_isOfClass_FUN_0040c840
                                                  ((CDemonActor *)pCVar11,local_895 + 1);
                            *parse_position = *parse_position + local_98;
                          }
                          goto LAB_0048ec8f;
                        }
                      }
                      return -1;
                    }
                    iVar8 = _stricmp(local_18c,"isFacing");
                    if (iVar8 == 0) {
                      local_88 = -1;
                      sscanf(expression + *parse_position," (%[^,], %[^,)]%n");
                      if (local_88 < 5) {
                        pcVar17 = "Error parsing isFacing parameters.";
                        pcVar18 = &DAT_01c3dd10;
                        do {
                          cVar1 = *pcVar17;
                          *pcVar18 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar17[1];
                          pcVar17 = pcVar17 + 2;
                          pcVar18[1] = cVar1;
                          pcVar18 = pcVar18 + 2;
                        } while (cVar1 != '\0');
                        return -1;
                      }
                      pcVar17 = acStack_2b9 + 1;
                      uVar15 = 0xffffffff;
                      pcVar18 = pcVar17;
                      do {
                        if (uVar15 == 0) break;
                        uVar15 = uVar15 - 1;
                        cVar1 = *pcVar18;
                        pcVar18 = pcVar18 + (uint)bVar19 * -2 + 1;
                      } while (cVar1 != '\0');
                      SVar16 = ~uVar15 - 1;
                      if (0 < (int)SVar16) {
                        pcVar18 = pcVar17 + SVar16;
                        do {
                          if (((&DAT_0061ed94)[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                          SVar16 = SVar16 - 1;
                          pcVar18 = pcVar18 + -1;
                        } while (0 < (int)SVar16);
                      }
                      pcVar17[SVar16] = '\0';
                      local_84 = acStack_2b9 + 2;
                      while (((&DAT_0061ed94)[(byte)(acStack_2b9[1] + 1)] & 2) != 0) {
                        memmove(pcVar17,local_84,SVar16);
                        SVar16 = SVar16 - 1;
                      }
                      local_80 = local_31d + 1;
                      uVar15 = 0xffffffff;
                      pcVar17 = local_31d + 1;
                      do {
                        if (uVar15 == 0) break;
                        uVar15 = uVar15 - 1;
                        cVar1 = *pcVar17;
                        pcVar17 = pcVar17 + (uint)bVar19 * -2 + 1;
                      } while (cVar1 != '\0');
                      SVar16 = ~uVar15 - 1;
                      if (0 < (int)SVar16) {
                        pcVar17 = local_31d + ~uVar15;
                        do {
                          if (((&DAT_0061ed94)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                          SVar16 = SVar16 - 1;
                          pcVar17 = pcVar17 + -1;
                        } while (0 < (int)SVar16);
                      }
                      (local_31d + 1)[SVar16] = '\0';
                      while (((&DAT_0061ed94)[(byte)(*local_80 + 1)] & 2) != 0) {
                        memmove(local_80,local_31d + 2,SVar16);
                        SVar16 = SVar16 - 1;
                      }
                      pCVar11 = (CCharacter *)
                                core_event_cpp_resolveActorByName_FUN_00488d00
                                          (acStack_2b9 + 1,g_CDemonActorClassInfo.name_hash,
                                           &g_CDemonActorClassInfo);
                      if ((pCVar11 == (CCharacter *)0x0) ||
                         (pCVar14 = (CCharacter *)
                                    core_event_cpp_resolveActorByName_FUN_00488d00
                                              (local_31d + 1,g_CDemonActorClassInfo.name_hash,
                                               &g_CDemonActorClassInfo),
                         pCVar14 == (CCharacter *)0x0)) {
                        return -1;
                      }
                      *parse_position = *parse_position + local_88;
                      local_10b8 = 45.0;
                      if (expression[*parse_position] == ',') {
                        local_88 = -1;
                        sscanf(expression + *parse_position,",%f %n")
                        ;
                        if (local_88 < 2) {
                          pcVar17 = "Error parsing isFacing parameters.";
                          pcVar18 = &DAT_01c3dd10;
                          do {
                            cVar1 = *pcVar17;
                            *pcVar18 = cVar1;
                            if (cVar1 == '\0') {
                              return -1;
                            }
                            cVar1 = pcVar17[1];
                            pcVar17 = pcVar17 + 2;
                            pcVar18[1] = cVar1;
                            pcVar18 = pcVar18 + 2;
                          } while (cVar1 != '\0');
                          return -1;
                        }
                        if (((double)local_10b8 < 0.0) || (_DAT_005d4c9b < (double)local_10b8)) {
                          pcVar17 = "isFacing() angle must be in range 0..180.";
                          pcVar18 = &DAT_01c3dd10;
                          do {
                            cVar1 = *pcVar17;
                            *pcVar18 = cVar1;
                            if (cVar1 == '\0') {
                              return -1;
                            }
                            cVar1 = pcVar17[1];
                            pcVar17 = pcVar17 + 2;
                            pcVar18[1] = cVar1;
                            pcVar18 = pcVar18 + 2;
                          } while (cVar1 != '\0');
                          return -1;
                        }
                        *parse_position = *parse_position + local_88;
                      }
                      pCVar6 = 0x0FFFFFFF;
                      if (expression[*parse_position] != ')') {
                        pcVar17 = "Error parsing isFacing parameters.";
                        pcVar18 = &DAT_01c3dd10;
                        do {
                          cVar1 = *pcVar17;
                          *pcVar18 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar17[1];
                          pcVar17 = pcVar17 + 2;
                          pcVar18[1] = cVar1;
                          pcVar18 = pcVar18 + 2;
                        } while (cVar1 != '\0');
                        return -1;
                      }
                      *parse_position = *parse_position + 1;
                      if ((pCVar11 == pCVar6) || (pCVar14 == pCVar6)) {
                        local_104 = 0;
                      }
                      else {
                        core_actor_cpp_FUN_00408de0(pCVar11,&(pCVar14->base).field_0x20);
                        local_134 = local_11c;
                        local_130[(uint)bVar19 * -2] = afStack_118[(uint)bVar19 * -2];
                        local_130[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                             afStack_118[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
                        local_130[0] = 0.0;
                        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_134)
                        ;
                        local_14c = afStack_118[2];
                        local_148[(uint)bVar19 * -2] = afStack_118[(uint)bVar19 * -2 + 3];
                        local_148[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                             afStack_118[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
                        if (local_10b8 * _DAT_005d4ca3 * (float)_DAT_005d4cab < ABS(local_148[0])) {
                          local_104 = 0;
                        }
                        else {
                          local_104 = 1;
                        }
                      }
                    }
                    else {
                      iVar8 = _stricmp(local_18c,"isLightOn");
                      if (iVar8 == 0) {
                        local_74 = -1;
                        sscanf(expression + *parse_position," ( %[^ )] )%n");
                        if (local_74 < 3) {
                          pcVar17 = "Error parsing isLightOn parameters.";
                          pcVar18 = &DAT_01c3dd10;
                          do {
                            cVar1 = *pcVar17;
                            *pcVar18 = cVar1;
                            if (cVar1 == '\0') {
                              return -1;
                            }
                            cVar1 = pcVar17[1];
                            pcVar17 = pcVar17 + 2;
                            pcVar18[1] = cVar1;
                            pcVar18 = pcVar18 + 2;
                          } while (cVar1 != '\0');
                          return -1;
                        }
                        core_set_cpp_CDemonSet_addLightFilter_FUN_00534770
                                  (g_CDemonSetPtr,local_4ac,&local_70,&local_6c);
                        if (local_70 == (C3DSLight *)0x0) {
                          _sprintf(local_eb4,"Spotlight %s doesn't exist.");
                          pcVar17 = local_eb4;
                          pcVar18 = &DAT_01c3dd10;
                          do {
                            cVar1 = *pcVar17;
                            *pcVar18 = cVar1;
                            if (cVar1 == '\0') {
                              return -1;
                            }
                            cVar1 = pcVar17[1];
                            pcVar17 = pcVar17 + 2;
                            pcVar18[1] = cVar1;
                            pcVar18 = pcVar18 + 2;
                          } while (cVar1 != '\0');
                          return -1;
                        }
                        local_104 = (uint)(local_6c->light_enabled_flag != 0);
                        *parse_position = *parse_position + local_74;
                      }
                      else {
                        iVar8 = _stricmp
                                          (local_18c,"isNudityEnabled");
                        if (iVar8 == 0) {
                          local_68 = -1;
                          sscanf(expression + *parse_position," ( )%n")
                          ;
                          if (local_68 < 2) {
                            pcVar17 = "Error parsing isNudityEnabled().";
                            pcVar18 = &DAT_01c3dd10;
                            do {
                              cVar1 = *pcVar17;
                              *pcVar18 = cVar1;
                              if (cVar1 == '\0') {
                                return -1;
                              }
                              cVar1 = pcVar17[1];
                              pcVar17 = pcVar17 + 2;
                              pcVar18[1] = cVar1;
                              pcVar18 = pcVar18 + 2;
                            } while (cVar1 != '\0');
                            return -1;
                          }
                          local_104 = (uint)(*(int *)&g_CGamePtr->field_0x18 != 0);
                          *parse_position = *parse_position + local_68;
                        }
                        else {
                          iVar8 = _stricmp
                                            (local_18c,"isSfxActive");
                          if (iVar8 == 0) {
                            local_64 = -1;
                            sscanf
                                      (expression + *parse_position," ( %[^ )] )%n");
                            if (local_64 < 3) {
                              pcVar17 = "Error parsing isSfxActive parameters.";
                              pcVar18 = &DAT_01c3dd10;
                              do {
                                cVar1 = *pcVar17;
                                *pcVar18 = cVar1;
                                if (cVar1 == '\0') {
                                  return -1;
                                }
                                cVar1 = pcVar17[1];
                                pcVar17 = pcVar17 + 2;
                                pcVar18[1] = cVar1;
                                pcVar18 = pcVar18 + 2;
                              } while (cVar1 != '\0');
                              return -1;
                            }
                            pcVar17 = acStack_705 + 1;
                            uVar15 = 0xffffffff;
                            pcVar18 = pcVar17;
                            do {
                              if (uVar15 == 0) break;
                              uVar15 = uVar15 - 1;
                              cVar1 = *pcVar18;
                              pcVar18 = pcVar18 + (uint)bVar19 * -2 + 1;
                            } while (cVar1 != '\0');
                            SVar16 = ~uVar15 - 1;
                            if (0 < (int)SVar16) {
                              pcVar18 = pcVar17 + SVar16;
                              do {
                                if (((&DAT_0061ed94)[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                                SVar16 = SVar16 - 1;
                                pcVar18 = pcVar18 + -1;
                              } while (0 < (int)SVar16);
                            }
                            pcVar17[SVar16] = '\0';
                            local_60 = acStack_705 + 2;
                            while (((&DAT_0061ed94)[(byte)(acStack_705[1] + 1)] & 2) != 0) {
                              memmove(pcVar17,local_60,SVar16);
                              SVar16 = SVar16 - 1;
                            }
                            local_104 = 0;
                            uVar15 = core_event_cpp_CEventList_getSfxHandle_FUN_00491920
                                               (this_ptr,acStack_705 + 1);
                            if (uVar15 != 0) {
                              local_104 = 1;
                            }
                            *parse_position = *parse_position + local_64;
                          }
                          else {
                            iVar8 = _stricmp
                                              (local_18c,"isTalking");
                            if (iVar8 == 0) {
                              local_5c = -1;
                              sscanf
                                        (expression + *parse_position," ( %[^ )] )%n");
                              if (local_5c < 3) {
                                pcVar17 = "Error parsing isTalking parameters.";
                                pcVar18 = &DAT_01c3dd10;
                                do {
                                  cVar1 = *pcVar17;
                                  *pcVar18 = cVar1;
                                  if (cVar1 == '\0') {
                                    return -1;
                                  }
                                  cVar1 = pcVar17[1];
                                  pcVar17 = pcVar17 + 2;
                                  pcVar18[1] = cVar1;
                                  pcVar18 = pcVar18 + 2;
                                } while (cVar1 != '\0');
                                return -1;
                              }
                              pCVar11 = (CCharacter *)
                                        core_event_cpp_resolveActorByName_FUN_00488d00
                                                  (local_574,g_CCharacterClassInfo.name_hash,
                                                   &g_CCharacterClassInfo);
                              if (pCVar11 == (CCharacter *)0x0) {
                                return -1;
                              }
                              if (pCVar11 == 0x0FFFFFFF) {
                                local_104 = (uint)pCVar11 ^ (uint)0x0FFFFFFF;
                              }
                              else if (*(float *)&pCVar11->field_0x2820 <= 0.0) {
                                local_104 = 0;
                              }
                              else {
                                local_104 = 1;
                              }
                              *parse_position = *parse_position + local_5c;
                            }
                            else {
                              iVar8 = _stricmp
                                                (local_18c,"isVictim");
                              if (iVar8 == 0) {
                                local_58 = -1;
                                sscanf
                                          (expression + *parse_position," ( %[^ )] )%n");
                                if (local_58 < 3) {
                                  pcVar17 = "Error parsing isVictim parameters.";
                                  pcVar18 = &DAT_01c3dd10;
                                  do {
                                    cVar1 = *pcVar17;
                                    *pcVar18 = cVar1;
                                    if (cVar1 == '\0') {
                                      return -1;
                                    }
                                    cVar1 = pcVar17[1];
                                    pcVar17 = pcVar17 + 2;
                                    pcVar18[1] = cVar1;
                                    pcVar18 = pcVar18 + 2;
                                  } while (cVar1 != '\0');
                                }
                                else {
                                  local_54 = (CCharacter *)
                                             core_event_cpp_resolveActorByName_FUN_00488d00
                                                       (local_95c,g_CCharacterClassInfo.name_hash,
                                                        &g_CCharacterClassInfo);
                                  if (local_54 != (CCharacter *)0x0) {
                                    local_104 = 0;
                                    if (local_54 != 0x0FFFFFFF) {
                                      local_50 = (float *)&(local_54->base).field_0x20;
                                      local_18 = 0;
                                      for (iVar8 = 0; iVar8 < g_CDemonSetPtr->enemy_count;
                                          iVar8 = iVar8 + 1) {
                                        iVar9 = *(int *)((int)g_CDemonSetPtr->enemies + local_18);
                                        if ((((local_54 == *(CCharacter **)(iVar9 + 0x10a78)) &&
                                             (iVar10 = (**(code **)(*(int *)(iVar9 + 0x2b0) + 0x114)
                                                       )(iVar9), iVar10 < 1)) &&
                                            (iVar10 = (**(code **)(*(int *)(iVar9 + 0x2b0) + 0x78))
                                                                (iVar9), iVar10 == 0)) &&
                                           (fVar3 = *(float *)(iVar9 + 0x20) - *local_50,
                                           fVar5 = *(float *)(iVar9 + 0x24) - local_50[1],
                                           fVar4 = *(float *)(iVar9 + 0x28) - local_50[2],
                                           SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) <=
                                           (float)_DAT_005d4cb3)) {
                                          local_104 = 1;
                                          break;
                                        }
                                        local_18 = local_18 + 4;
                                      }
                                    }
                                    *parse_position = *parse_position + local_58;
                                    goto LAB_0048ec8f;
                                  }
                                }
                                return -1;
                              }
                              iVar8 = _stricmp
                                                (local_18c,"isWeaponDrawn");
                              if (iVar8 == 0) {
                                local_40 = -1;
                                sscanf
                                          (expression + *parse_position," ( %[^ )] )%n");
                                if (local_40 < 3) {
                                  pcVar17 = "Error parsing isWeaponDrawn parameters.";
                                  pcVar18 = &DAT_01c3dd10;
                                  do {
                                    cVar1 = *pcVar17;
                                    *pcVar18 = cVar1;
                                    if (cVar1 == '\0') {
                                      return -1;
                                    }
                                    cVar1 = pcVar17[1];
                                    pcVar17 = pcVar17 + 2;
                                    pcVar18[1] = cVar1;
                                    pcVar18 = pcVar18 + 2;
                                  } while (cVar1 != '\0');
                                }
                                else {
                                  pCVar11 = (CCharacter *)
                                            core_event_cpp_resolveActorByName_FUN_00488d00
                                                      (local_768,g_CHeroClassInfo.name_hash,
                                                       &g_CHeroClassInfo);
                                  if (pCVar11 != (CCharacter *)0x0) {
                                    if (pCVar11 == 0x0FFFFFFF) {
                                      local_104 = (uint)pCVar11 ^ (uint)0x0FFFFFFF;
                                    }
                                    else {
                                      local_104 = (*(((pCVar11->base).vtable._uh)->_uh).
                                                    isWeaponDrawn)((CHero *)pCVar11);
                                    }
                                    *parse_position = *parse_position + local_40;
                                    goto LAB_0048ec8f;
                                  }
                                }
                                return -1;
                              }
                              iVar8 = _stricmp
                                                (local_18c,"isWearingGasMask");
                              if (iVar8 == 0) {
                                local_3c = -1;
                                sscanf
                                          (expression + *parse_position," ( %[^ )] )%n");
                                if (local_3c < 3) {
                                  pcVar17 = "Error parsing isWearingGasMask parameters.";
                                  pcVar18 = &DAT_01c3dd10;
                                  do {
                                    cVar1 = *pcVar17;
                                    *pcVar18 = cVar1;
                                    if (cVar1 == '\0') {
                                      return -1;
                                    }
                                    cVar1 = pcVar17[1];
                                    pcVar17 = pcVar17 + 2;
                                    pcVar18[1] = cVar1;
                                    pcVar18 = pcVar18 + 2;
                                  } while (cVar1 != '\0');
                                }
                                else {
                                  pCVar11 = (CCharacter *)
                                            core_event_cpp_resolveActorByName_FUN_00488d00
                                                      (local_3e4,g_CHeroClassInfo.name_hash,
                                                       &g_CHeroClassInfo);
                                  if (pCVar11 != (CCharacter *)0x0) {
                                    if (pCVar11 == 0x0FFFFFFF) {
                                      local_104 = 0;
                                      *parse_position = *parse_position + local_3c;
                                    }
                                    else {
                                      local_104 = (uint)(*(int *)&pCVar11[2].field_0x4128 == 2);
                                      *parse_position = *parse_position + local_3c;
                                    }
                                    goto LAB_0048ec8f;
                                  }
                                }
                                return -1;
                              }
                              iVar8 = _stricmp
                                                (local_18c,"isPuzzleActive");
                              if (iVar8 == 0) {
                                local_38 = -1;
                                sscanf
                                          (expression + *parse_position,"(%[^)])%n");
                                if (local_38 < 3) {
                                  iVar8 = core_event_cpp_formatEventError_FUN_00488ba0
                                                    ("Error parsing activatePuzzle command");
                                  return iVar8;
                                }
                                iVar8 = 0;
                                local_34 = 0;
                                if (0 < _DAT_026677b4) {
                                  iVar9 = 0;
                                  do {
                                    pcVar17 = (char *)(**(code **)(**(int **)(iVar9 + 0x26677b8) + 4
                                                                  ))(*(int **)(iVar9 + 0x26677b8));
                                    iVar10 = _stricmp(local_10b4,pcVar17);
                                    if (iVar10 == 0) {
                                      local_34 = *(int *)(iVar9 + 0x26677b8);
                                      break;
                                    }
                                    iVar8 = iVar8 + 1;
                                    iVar9 = iVar9 + 4;
                                  } while (iVar8 < _DAT_026677b4);
                                }
                                if (local_34 == 0) {
                                  iVar8 = core_event_cpp_formatEventError_FUN_00488ba0
                                                    ("No such puzzle '%s'");
                                  return iVar8;
                                }
                                local_104 = (uint)(_DAT_026677e0 != 0);
                                *parse_position = *parse_position + local_38;
                              }
                              else {
                                iVar8 = _stricmp
                                                  (local_18c,"randBool");
                                if (iVar8 != 0) {
                                  iVar8 = _stricmp
                                                    (local_18c,"reachedDest");
                                  if (iVar8 == 0) {
                                    local_28 = -1;
                                    sscanf
                                              (expression + *parse_position," ( %[^ )] )%n");
                                    if (local_28 < 3) {
                                      pcVar17 = "Error parsing reachedDest parameters.";
                                      pcVar18 = &DAT_01c3dd10;
                                      do {
                                        cVar1 = *pcVar17;
                                        *pcVar18 = cVar1;
                                        if (cVar1 == '\0') {
                                          return -1;
                                        }
                                        cVar1 = pcVar17[1];
                                        pcVar17 = pcVar17 + 2;
                                        pcVar18[1] = cVar1;
                                        pcVar18 = pcVar18 + 2;
                                      } while (cVar1 != '\0');
                                    }
                                    else {
                                      pCVar11 = (CCharacter *)
                                                core_event_cpp_resolveActorByName_FUN_00488d00
                                                          (local_448,g_CCharacterClassInfo.name_hash
                                                           ,&g_CCharacterClassInfo);
                                      if (pCVar11 != (CCharacter *)0x0) {
                                        if (pCVar11 == 0x0FFFFFFF) {
                                          local_104 = 0;
                                          *parse_position = *parse_position + local_28;
                                        }
                                        else {
                                          iVar8 = (*(((pCVar11->base).vtable._uc)->_uc).
                                                    isWalkComplete)(pCVar11);
                                          local_104 = (uint)(iVar8 != 0);
                                          *parse_position = *parse_position + local_28;
                                        }
                                        goto LAB_0048ec8f;
                                      }
                                    }
                                    return -1;
                                  }
                                  iVar8 = _stricmp
                                                    (local_18c,"testActorBool");
                                  if (iVar8 != 0) {
                                    pcVar17 = "Invalid meta-function";
                                    pcVar18 = &DAT_01c3dd10;
                                    do {
                                      cVar1 = *pcVar17;
                                      *pcVar18 = cVar1;
                                      if (cVar1 == '\0') {
                                        return -1;
                                      }
                                      cVar1 = pcVar17[1];
                                      pcVar17 = pcVar17 + 2;
                                      pcVar18[1] = cVar1;
                                      pcVar18 = pcVar18 + 2;
                                    } while (cVar1 != '\0');
                                    return -1;
                                  }
                                  local_24 = -1;
                                  sscanf
                                            (expression + *parse_position,"(%[^,], %[^)])%n");
                                  if (local_24 < 3) {
                                    pcVar17 = "Error parsing testActorBool parameters.";
                                    pcVar18 = &DAT_01c3dd10;
                                    do {
                                      cVar1 = *pcVar17;
                                      *pcVar18 = cVar1;
                                      if (cVar1 == '\0') {
                                        return -1;
                                      }
                                      cVar1 = pcVar17[1];
                                      pcVar17 = pcVar17 + 2;
                                      pcVar18[1] = cVar1;
                                      pcVar18 = pcVar18 + 2;
                                    } while (cVar1 != '\0');
                                    return -1;
                                  }
                                  uVar15 = 0xffffffff;
                                  pcVar17 = acStack_aed + 1;
                                  do {
                                    if (uVar15 == 0) break;
                                    uVar15 = uVar15 - 1;
                                    cVar1 = *pcVar17;
                                    pcVar17 = pcVar17 + (uint)bVar19 * -2 + 1;
                                  } while (cVar1 != '\0');
                                  SVar16 = ~uVar15 - 1;
                                  if (0 < (int)SVar16) {
                                    pcVar17 = acStack_aed + ~uVar15;
                                    do {
                                      if (((&DAT_0061ed94)[(byte)(pcVar17[-1] + 1)] & 2) == 0)
                                      break;
                                      SVar16 = SVar16 - 1;
                                      pcVar17 = pcVar17 + -1;
                                    } while (0 < (int)SVar16);
                                  }
                                  (acStack_aed + 1)[SVar16] = '\0';
                                  local_20 = acStack_aed + 2;
                                  while (((&DAT_0061ed94)[(byte)(acStack_aed[1] + 1)] & 2) != 0) {
                                    memmove
                                              (acStack_aed + 1,local_20,SVar16);
                                    SVar16 = SVar16 - 1;
                                  }
                                  local_1c = local_bb5 + 1;
                                  uVar15 = 0xffffffff;
                                  pcVar17 = local_bb5 + 1;
                                  do {
                                    if (uVar15 == 0) break;
                                    uVar15 = uVar15 - 1;
                                    cVar1 = *pcVar17;
                                    pcVar17 = pcVar17 + (uint)bVar19 * -2 + 1;
                                  } while (cVar1 != '\0');
                                  SVar16 = ~uVar15 - 1;
                                  if (0 < (int)SVar16) {
                                    pcVar17 = local_bb5 + ~uVar15;
                                    do {
                                      if (((&DAT_0061ed94)[(byte)(pcVar17[-1] + 1)] & 2) == 0)
                                      break;
                                      SVar16 = SVar16 - 1;
                                      pcVar17 = pcVar17 + -1;
                                    } while (0 < (int)SVar16);
                                  }
                                  (local_bb5 + 1)[SVar16] = '\0';
                                  while (((&DAT_0061ed94)[(byte)(*local_1c + 1)] & 2) != 0) {
                                    memmove(local_1c,local_bb5 + 2,SVar16)
                                    ;
                                    SVar16 = SVar16 - 1;
                                  }
                                  iVar8 = 0;
                                  local_fc = 0;
                                  if (0 < 0x00000002) {
                                    iVar9 = 0;
                                    do {
                                      if (*(int *)((int)&DAT_006141f4 + iVar9) == 0) {
                                        local_a0 = (int)&DAT_006141f4 + iVar9;
                                        iVar10 = _stricmp
                                                           ("spectralFlag" + iVar9,
                                                            local_bb5 + 1);
                                        if (iVar10 == 0) {
                                          local_fc = local_a0;
                                          break;
                                        }
                                      }
                                      iVar8 = iVar8 + 1;
                                      iVar9 = iVar9 + 0x48;
                                    } while (iVar8 < 0x00000002);
                                  }
                                  iVar8 = local_fc;
                                  if (local_fc == 0) {
                                    _sprintf(local_db4,"%s is not a valid boolean actor variable name");
                                    pcVar17 = local_db4;
                                    pcVar18 = &DAT_01c3dd10;
                                    do {
                                      cVar1 = *pcVar17;
                                      *pcVar18 = cVar1;
                                      if (cVar1 == '\0') {
                                        return -1;
                                      }
                                      cVar1 = pcVar17[1];
                                      pcVar17 = pcVar17 + 2;
                                      pcVar18[1] = cVar1;
                                      pcVar18 = pcVar18 + 2;
                                    } while (cVar1 != '\0');
                                  }
                                  else {
                                    pCVar11 = (CCharacter *)
                                              core_event_cpp_resolveActorByName_FUN_00488d00
                                                        (acStack_aed + 1,
                                                         *(uint *)(local_fc + 0x44),
                                                         local_fc + 0x22);
                                    if (pCVar11 != (CCharacter *)0x0) {
                                      if (pCVar11 == 0x0FFFFFFF) {
                                        local_104 = 0;
                                      }
                                      else {
                                        local_104 = *(uint *)((pCVar11->base).actor_name +
                                                             *(int *)(iVar8 + 0x40));
                                      }
                                      goto LAB_0048ec8f;
                                    }
                                  }
                                  return -1;
                                }
                                local_30 = -1;
                                sscanf
                                          (expression + *parse_position," ( %f )%n");
                                if (local_30 < 3) {
                                  pcVar17 = "Error parsing randBool parameters.";
                                  pcVar18 = &DAT_01c3dd10;
                                  do {
                                    cVar1 = *pcVar17;
                                    *pcVar18 = cVar1;
                                    if (cVar1 == '\0') {
                                      return -1;
                                    }
                                    cVar1 = pcVar17[1];
                                    pcVar17 = pcVar17 + 2;
                                    pcVar18[1] = cVar1;
                                    pcVar18 = pcVar18 + 2;
                                  } while (cVar1 != '\0');
                                  return -1;
                                }
                                local_104 = core_actor_cpp_randomChance_FUN_0040d060(local_2c);
                                *parse_position = *parse_position + local_30;
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
    goto LAB_0048ec8f;
  }
  local_100 = -1;
  sscanf(expression + *parse_position," ( %s %s %[^ )] )%n");
  if (local_100 < 3) {
    pcVar17 = "Error parsing cmp parameters.";
    pcVar18 = &DAT_01c3dd10;
    do {
      cVar1 = *pcVar17;
      *pcVar18 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar17[1];
      pcVar17 = pcVar17 + 2;
      pcVar18[1] = cVar1;
      pcVar18 = pcVar18 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  pcVar17 = acStack_1f1 + 1;
  uVar15 = 0xffffffff;
  pcVar18 = pcVar17;
  do {
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar18 + (uint)bVar19 * -2 + 1;
  } while (cVar1 != '\0');
  SVar16 = ~uVar15 - 1;
  if (0 < (int)SVar16) {
    pcVar18 = pcVar17 + SVar16;
    do {
      if (((&DAT_0061ed94)[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
      SVar16 = SVar16 - 1;
      pcVar18 = pcVar18 + -1;
    } while (0 < (int)SVar16);
  }
  pcVar17[SVar16] = '\0';
  local_f8 = acStack_1f1 + 2;
  while (((&DAT_0061ed94)[(byte)(acStack_1f1[1] + 1)] & 2) != 0) {
    memmove(pcVar17,local_f8,SVar16);
    SVar16 = SVar16 - 1;
  }
  uVar15 = 0xffffffff;
  pcVar17 = local_5d9 + 1;
  do {
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + (uint)bVar19 * -2 + 1;
  } while (cVar1 != '\0');
  SVar16 = ~uVar15 - 1;
  if (0 < (int)SVar16) {
    pcVar17 = local_5d9 + ~uVar15;
    do {
      if (((&DAT_0061ed94)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
      SVar16 = SVar16 - 1;
      pcVar17 = pcVar17 + -1;
    } while (0 < (int)SVar16);
  }
  (local_5d9 + 1)[SVar16] = '\0';
  local_f4 = local_5d9 + 2;
  while (((&DAT_0061ed94)[(byte)(local_5d9[1] + 1)] & 2) != 0) {
    memmove(local_5d9 + 1,local_f4,SVar16);
    SVar16 = SVar16 - 1;
  }
  uVar15 = 0xffffffff;
  pcVar17 = local_8f9 + 1;
  do {
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + (uint)bVar19 * -2 + 1;
  } while (cVar1 != '\0');
  SVar16 = ~uVar15 - 1;
  if (0 < (int)SVar16) {
    pcVar17 = local_8f9 + ~uVar15;
    do {
      if (((&DAT_0061ed94)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
      SVar16 = SVar16 - 1;
      pcVar17 = pcVar17 + -1;
    } while (0 < (int)SVar16);
  }
  (local_8f9 + 1)[SVar16] = '\0';
  local_ec = local_8f9 + 2;
  while (((&DAT_0061ed94)[(byte)(local_8f9[1] + 1)] & 2) != 0) {
    memmove(local_8f9 + 1,local_ec,SVar16);
    SVar16 = SVar16 - 1;
  }
  iVar9 = _strcmp(local_8f9 + 1,&DAT_005d2e2b);
  iVar8 = 0;
  if (iVar9 != 0) {
    iVar8 = _strcmp(local_8f9 + 1,&DAT_005d2e2d);
    if (iVar8 == 0) {
      iVar8 = 1;
    }
    else {
      iVar8 = _strcmp(local_8f9 + 1,&DAT_005d2e30);
      if (iVar8 == 0) {
        iVar8 = 2;
      }
      else {
        iVar8 = _strcmp(local_8f9 + 1,&DAT_005d2e33);
        if (iVar8 == 0) {
          iVar8 = 3;
        }
        else {
          iVar8 = _strcmp(local_8f9 + 1,&DAT_005d2e36);
          if (iVar8 == 0) {
            iVar8 = 5;
          }
          else {
            iVar8 = _strcmp(local_8f9 + 1,&DAT_005d2e38);
            if (iVar8 == 0) {
              iVar8 = 4;
            }
            else {
              iVar8 = 6;
            }
          }
        }
      }
    }
  }
  if (iVar8 == 6) {
    pcVar17 = "Invalid relational operator in cmp statement";
    pcVar18 = &DAT_01c3dd10;
    do {
      cVar1 = *pcVar17;
      *pcVar18 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar17[1];
      pcVar17 = pcVar17 + 2;
      pcVar18[1] = cVar1;
      pcVar18 = pcVar18 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  *parse_position = *parse_position + local_100;
  iVar10 = sscanf(acStack_1f1 + 1,&DAT_005d2e3b);
  iVar9 = local_e8;
  if (iVar10 != 1) {
    iVar9 = core_event_cpp_CEventList_getCounterValue_FUN_00491510(0x01C38BC0,acStack_1f1 + 1);
  }
  iVar10 = sscanf(local_5d9 + 1,&DAT_005d2e3b);
  if (iVar10 == 1) {
    switch(iVar8) {
    case 0:
switchD_0048ec74_caseD_0:
      local_104 = (uint)(iVar9 < local_94);
      break;
    case 1:
switchD_0048ec74_caseD_1:
      local_104 = (uint)(iVar9 <= local_94);
      break;
    case 2:
switchD_0048ec74_caseD_2:
      local_104 = (uint)(iVar9 == local_94);
      break;
    case 3:
switchD_0048ec74_caseD_3:
      local_104 = (uint)(iVar9 != local_94);
      break;
    case 4:
switchD_0048ec74_caseD_4:
      local_104 = (uint)(local_94 <= iVar9);
      break;
    case 5:
switchD_0048ec74_caseD_5:
      local_104 = (uint)(local_94 < iVar9);
      break;
    default:
switchD_0048ec74_default:
      _DAT_01d046a0 = "..\\core\\event.cpp";
      _DAT_01d046a4 = 0x9e3;
      core_main_c_FUN_004e4500("Hell froze.");
    }
LAB_0048ec8f:
    while (((&DAT_0061ed94)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
    }
    return local_104;
  }
  local_94 = core_event_cpp_CEventList_getCounterValue_FUN_00491510(0x01C38BC0,local_5d9 + 1);
  switch(iVar8) {
  case 0:
    goto switchD_0048ec74_caseD_0;
  case 1:
    goto switchD_0048ec74_caseD_1;
  case 2:
    goto switchD_0048ec74_caseD_2;
  case 3:
    goto switchD_0048ec74_caseD_3;
  case 4:
    goto switchD_0048ec74_caseD_4;
  case 5:
    goto switchD_0048ec74_caseD_5;
  default:
    goto switchD_0048ec74_default;
  }
}
