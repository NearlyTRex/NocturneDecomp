// Name: core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0
// Address: 004a70d0
// Address Range: [[004a70d0, 004a97ae]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_004a70d0(CEventList *this_ptr,char *expression,int *parse_position)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_004a70d0(CEventList *this_ptr,char *expression,int *parse_position)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CHero *pCVar6;
  CGame *this_ptr_00;
  int iVar7;
  int iVar8;
  int iVar9;
  CHero *pCVar10;
  CDemonActor *pCVar11;
  EDeathState EVar12;
  CHero *pCVar13;
  uint uVar14;
  SIZE_T SVar15;
  char *pcVar16;
  char *pcVar17;
  byte bVar18;
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
  CHero *local_54;
  CLocation *local_50;
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
  
  bVar18 = 0;
  while (((&DAT_00626114)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
    *parse_position = *parse_position + 1;
  }
  if (expression[*parse_position] == '.') {
    *parse_position = *parse_position + 1;
  }
  bVar2 = expression[*parse_position];
  if (bVar2 == 0) {
    pcVar16 = "Unexpected end of string";
    pcVar17 = &DAT_01c56ed0;
    do {
      cVar1 = *pcVar16;
      *pcVar17 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar16[1];
      pcVar16 = pcVar16 + 2;
      pcVar17[1] = cVar1;
      pcVar17 = pcVar17 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  if (bVar2 == 0x28) {
    *parse_position = *parse_position + 1;
    iVar7 = core_event_cpp_CEventList_evaluateLogicalExpr_FUN_004a97b0
                      (this_ptr,expression,parse_position);
    if (iVar7 < 0) {
      return iVar7;
    }
    if (expression[*parse_position] != ')') {
      pcVar16 = "Matching ')' is missing";
      pcVar17 = &DAT_01c56ed0;
      do {
        cVar1 = *pcVar16;
        *pcVar17 = cVar1;
        if (cVar1 == '\0') {
          return -1;
        }
        cVar1 = pcVar16[1];
        pcVar16 = pcVar16 + 2;
        pcVar17[1] = cVar1;
        pcVar17 = pcVar17 + 2;
      } while (cVar1 != '\0');
      return -1;
    }
    *parse_position = *parse_position + 1;
    while (((&DAT_00626114)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
    }
    return iVar7;
  }
  if (bVar2 == 0x21) {
    *parse_position = *parse_position + 1;
    iVar7 = core_event_cpp_CEventList_evaluateAtom_FUN_004a70d0(this_ptr,expression,parse_position);
    if (-1 < iVar7) {
      return (uint)(iVar7 == 0);
    }
    return iVar7;
  }
  iVar7 = core_event_cpp_isValidIdentifierChar_FUN_004aa5e0((uint)bVar2);
  if (iVar7 == 0) {
    pcVar16 = "Syntax error";
    pcVar17 = &DAT_01c56ed0;
    do {
      cVar1 = *pcVar16;
      *pcVar17 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar16[1];
      pcVar16 = pcVar16 + 2;
      pcVar17[1] = cVar1;
      pcVar17 = pcVar17 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  pcVar16 = local_18c;
  do {
    *pcVar16 = expression[*parse_position];
    iVar7 = *parse_position;
    *parse_position = iVar7 + 1;
    pcVar16 = pcVar16 + 1;
    iVar7 = core_event_cpp_isValidIdentifierChar_FUN_004aa5e0((uint)(byte)expression[iVar7 + 1]);
  } while (iVar7 != 0);
  *pcVar16 = '\0';
  if (expression[*parse_position] != '(') {
    while (((&DAT_00626114)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
    }
    iVar7 = core_event_cpp_CEventList_resolveVariable_FUN_004a6ba0(this_ptr,local_18c);
    return iVar7;
  }
  local_104 = 0xffffffff;
  iVar7 = _stricmp(local_18c,&DAT_005de221);
  if (iVar7 != 0) {
    iVar7 = _stricmp(local_18c,"exists");
    if (iVar7 == 0) {
      local_e4 = -1;
      sscanf(expression + *parse_position," ( %[^ )] )%n");
      if (local_e4 < 3) {
        pcVar16 = "Error parsing exists parameters.";
        pcVar17 = &DAT_01c56ed0;
        do {
          cVar1 = *pcVar16;
          *pcVar17 = cVar1;
          if (cVar1 == '\0') {
            return -1;
          }
          cVar1 = pcVar16[1];
          pcVar16 = pcVar16 + 2;
          pcVar17[1] = cVar1;
          pcVar17 = pcVar17 + 2;
        } while (cVar1 != '\0');
        return -1;
      }
      pcVar16 = acStack_255 + 1;
      uVar14 = 0xffffffff;
      pcVar17 = pcVar16;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar17 + (uint)bVar18 * -2 + 1;
      } while (cVar1 != '\0');
      SVar15 = ~uVar14 - 1;
      if (0 < (int)SVar15) {
        pcVar17 = pcVar16 + SVar15;
        do {
          if (((&DAT_00626114)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
          SVar15 = SVar15 - 1;
          pcVar17 = pcVar17 + -1;
        } while (0 < (int)SVar15);
      }
      pcVar16[SVar15] = '\0';
      local_e0 = acStack_255 + 2;
      while (((&DAT_00626114)[(byte)(acStack_255[1] + 1)] & 2) != 0) {
        memmove(pcVar16,local_e0,SVar15);
        SVar15 = SVar15 - 1;
      }
      pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_004a1370
                                   (acStack_255 + 1,g_CDemonActorClassInfo.name_hash,
                                    &g_CDemonActorClassInfo);
      if ((pCVar10 == (CHero *)0x0) || (pCVar10 == 0x0FFFFFFF)) {
        local_104 = 0;
      }
      else {
        local_104 = 1;
      }
      *parse_position = *parse_position + local_e4;
    }
    else {
      iVar7 = _stricmp(local_18c,"fieldNotesDisplayed");
      if (iVar7 == 0) {
        local_dc = -1;
        sscanf(expression + *parse_position," ( )%n");
        if (local_dc < 2) {
          pcVar16 = "Error parsing fieldNotesDisplayed condition.";
          pcVar17 = &DAT_01c56ed0;
          do {
            cVar1 = *pcVar16;
            *pcVar17 = cVar1;
            if (cVar1 == '\0') {
              return -1;
            }
            cVar1 = pcVar16[1];
            pcVar16 = pcVar16 + 2;
            pcVar17[1] = cVar1;
            pcVar17 = pcVar17 + 2;
          } while (cVar1 != '\0');
          return -1;
        }
        local_104 = g_CFieldNotesPtr->is_displayed;
        *parse_position = *parse_position + local_dc;
      }
      else {
        iVar7 = _stricmp(local_18c,"hasItem");
        if (iVar7 == 0) {
          if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
            pcVar16 = "Can't use hasItem condition in multi-player";
            pcVar17 = &DAT_01c56ed0;
            do {
              cVar1 = *pcVar16;
              *pcVar17 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar16[1];
              pcVar16 = pcVar16 + 2;
              pcVar17[1] = cVar1;
              pcVar17 = pcVar17 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          local_d8 = -1;
          sscanf(expression + *parse_position," (%[^)])%n");
          if (local_d8 < 3) {
            pcVar16 = "Error parsing hasItem parameters.";
            pcVar17 = &DAT_01c56ed0;
            do {
              cVar1 = *pcVar16;
              *pcVar17 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar16[1];
              pcVar16 = pcVar16 + 2;
              pcVar17[1] = cVar1;
              pcVar17 = pcVar17 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          pcVar16 = acStack_6a1 + 1;
          uVar14 = 0xffffffff;
          pcVar17 = pcVar16;
          do {
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar17 + (uint)bVar18 * -2 + 1;
          } while (cVar1 != '\0');
          SVar15 = ~uVar14 - 1;
          if (0 < (int)SVar15) {
            pcVar17 = pcVar16 + SVar15;
            do {
              if (((&DAT_00626114)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
              SVar15 = SVar15 - 1;
              pcVar17 = pcVar17 + -1;
            } while (0 < (int)SVar15);
          }
          pcVar16[SVar15] = '\0';
          local_7c = acStack_6a1 + 2;
          while (((&DAT_00626114)[(byte)(acStack_6a1[1] + 1)] & 2) != 0) {
            memmove(pcVar16,local_7c,SVar15);
            SVar15 = SVar15 - 1;
          }
          iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          local_104 = 0;
          if ((iVar7 != 0) &&
             (pCVar11 = core_inv_cpp_FUN_004f8c40((CInventory *)(iVar7 + 0x1fae8),acStack_6a1 + 1),
             pCVar11 != (CDemonActor *)0x0)) {
            local_104 = 1;
          }
          *parse_position = *parse_position + local_d8;
        }
        else {
          iVar7 = _stricmp(local_18c,"hasItemType");
          if (iVar7 == 0) {
            local_78 = -1;
            sscanf(expression + *parse_position," (%[^,], %[^)] )%n");
            if (local_78 < 5) {
              pcVar16 = "Error parsing hasItemType parameters.";
              pcVar17 = &DAT_01c56ed0;
              do {
                cVar1 = *pcVar16;
                *pcVar17 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar16[1];
                pcVar16 = pcVar16 + 2;
                pcVar17[1] = cVar1;
                pcVar17 = pcVar17 + 2;
              } while (cVar1 != '\0');
            }
            else {
              pcVar16 = acStack_63d + 1;
              uVar14 = 0xffffffff;
              pcVar17 = pcVar16;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar17 + (uint)bVar18 * -2 + 1;
              } while (cVar1 != '\0');
              SVar15 = ~uVar14 - 1;
              if (0 < (int)SVar15) {
                pcVar17 = pcVar16 + SVar15;
                do {
                  if (((&DAT_00626114)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                  SVar15 = SVar15 - 1;
                  pcVar17 = pcVar17 + -1;
                } while (0 < (int)SVar15);
              }
              pcVar16[SVar15] = '\0';
              local_d4 = acStack_63d + 2;
              while (((&DAT_00626114)[(byte)(acStack_63d[1] + 1)] & 2) != 0) {
                memmove(pcVar16,local_d4,SVar15);
                SVar15 = SVar15 - 1;
              }
              uVar14 = 0xffffffff;
              pcVar16 = local_a25 + 1;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar1 = *pcVar16;
                pcVar16 = pcVar16 + (uint)bVar18 * -2 + 1;
              } while (cVar1 != '\0');
              SVar15 = ~uVar14 - 1;
              if (0 < (int)SVar15) {
                pcVar16 = local_a25 + ~uVar14;
                do {
                  if (((&DAT_00626114)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
                  SVar15 = SVar15 - 1;
                  pcVar16 = pcVar16 + -1;
                } while (0 < (int)SVar15);
              }
              (local_a25 + 1)[SVar15] = '\0';
              local_d0 = local_a25 + 2;
              while (((&DAT_00626114)[(byte)(local_a25[1] + 1)] & 2) != 0) {
                memmove(local_a25 + 1,local_d0,SVar15);
                SVar15 = SVar15 - 1;
              }
              pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_004a1370
                                           (acStack_63d + 1,g_CHeroClassInfo.name_hash,
                                            &g_CHeroClassInfo);
              if (pCVar10 != (CHero *)0x0) {
                if (pCVar10 == 0x0FFFFFFF) {
                  local_104 = 0;
                  *parse_position = *parse_position + local_78;
                }
                else {
                  local_104 = core_inv_cpp_FUN_004f8ce0(&pCVar10->inventory,local_a25 + 1);
                  *parse_position = *parse_position + local_78;
                }
                goto LAB_004a757f;
              }
            }
            return -1;
          }
          iVar7 = _stricmp(local_18c,"hasKeyMask");
          if (iVar7 == 0) {
            if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
              pcVar16 = "Can't use hasKeyMask condition in multi-player";
              pcVar17 = &DAT_01c56ed0;
              do {
                cVar1 = *pcVar16;
                *pcVar17 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar16[1];
                pcVar16 = pcVar16 + 2;
                pcVar17[1] = cVar1;
                pcVar17 = pcVar17 + 2;
              } while (cVar1 != '\0');
              return -1;
            }
            local_cc = -1;
            sscanf(expression + *parse_position," ( %d )%n");
            if (local_cc < 3) {
              pcVar16 = "Error parsing hasKeyMask parameters.";
              pcVar17 = &DAT_01c56ed0;
              do {
                cVar1 = *pcVar16;
                *pcVar17 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar16[1];
                pcVar16 = pcVar16 + 2;
                pcVar17[1] = cVar1;
                pcVar17 = pcVar17 + 2;
              } while (cVar1 != '\0');
              return -1;
            }
            if (local_c8 == 0) {
              pcVar16 = "hasKeyMask(0) always returns false!";
              pcVar17 = &DAT_01c56ed0;
              do {
                cVar1 = *pcVar16;
                *pcVar17 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar16[1];
                pcVar16 = pcVar16 + 2;
                pcVar17[1] = cVar1;
                pcVar17 = pcVar17 + 2;
              } while (cVar1 != '\0');
              return -1;
            }
            if ((local_c8 - 1 & local_c8) != 0) {
              pcVar16 = "mask value must be a power of 2.\n(To test for multiple keys, use multiple hasKeyMask() tests)";
              pcVar17 = &DAT_01c56ed0;
              do {
                cVar1 = *pcVar16;
                *pcVar17 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar16[1];
                pcVar16 = pcVar16 + 2;
                pcVar17[1] = cVar1;
                pcVar17 = pcVar17 + 2;
              } while (cVar1 != '\0');
              return -1;
            }
            iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
            local_104 = 0;
            if ((iVar7 != 0) &&
               (iVar7 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004fc240
                                  ((CInventory *)(iVar7 + 0x1fae8),local_c8,0), iVar7 != 0)) {
              local_104 = 1;
            }
            *parse_position = *parse_position + local_cc;
          }
          else {
            iVar7 = _stricmp(local_18c,"isBroken");
            if (iVar7 == 0) {
              local_c4 = -1;
              sscanf(expression + *parse_position," (%[^)])%n");
              if (local_c4 < 3) {
                pcVar16 = "Error parsing isBroken parameters.";
                pcVar17 = &DAT_01c56ed0;
                do {
                  cVar1 = *pcVar16;
                  *pcVar17 = cVar1;
                  if (cVar1 == '\0') {
                    return -1;
                  }
                  cVar1 = pcVar16[1];
                  pcVar16 = pcVar16 + 2;
                  pcVar17[1] = cVar1;
                  pcVar17 = pcVar17 + 2;
                } while (cVar1 != '\0');
              }
              else {
                pcVar16 = acStack_9c1 + 1;
                uVar14 = 0xffffffff;
                pcVar17 = pcVar16;
                do {
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  cVar1 = *pcVar17;
                  pcVar17 = pcVar17 + (uint)bVar18 * -2 + 1;
                } while (cVar1 != '\0');
                SVar15 = ~uVar14 - 1;
                if (0 < (int)SVar15) {
                  pcVar17 = pcVar16 + SVar15;
                  do {
                    if (((&DAT_00626114)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                    SVar15 = SVar15 - 1;
                    pcVar17 = pcVar17 + -1;
                  } while (0 < (int)SVar15);
                }
                pcVar16[SVar15] = '\0';
                local_c0 = acStack_9c1 + 2;
                while (((&DAT_00626114)[(byte)(acStack_9c1[1] + 1)] & 2) != 0) {
                  memmove(pcVar16,local_c0,SVar15);
                  SVar15 = SVar15 - 1;
                }
                pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_004a1370
                                             (acStack_9c1 + 1,g_CGlassClassInfo.name_hash,
                                              &g_CGlassClassInfo);
                if (pCVar10 != (CHero *)0x0) {
                  if (pCVar10 == 0x0FFFFFFF) {
                    local_104 = 0;
                    *parse_position = *parse_position + local_c4;
                  }
                  else {
                    local_104 = (uint)((pCVar10->base).model.base.state_index != 0);
                    *parse_position = *parse_position + local_c4;
                  }
                  goto LAB_004a757f;
                }
              }
              return -1;
            }
            iVar7 = _stricmp(local_18c,"isCurrentCamera");
            if (iVar7 == 0) {
              local_bc = -1;
              sscanf(expression + *parse_position," ( %[^ )] )%n");
              if (local_bc < 3) {
                pcVar16 = "Error parsing isCurrentCamera parameters.";
                pcVar17 = &DAT_01c56ed0;
                do {
                  cVar1 = *pcVar16;
                  *pcVar17 = cVar1;
                  if (cVar1 == '\0') {
                    return -1;
                  }
                  cVar1 = pcVar16[1];
                  pcVar16 = pcVar16 + 2;
                  pcVar17[1] = cVar1;
                  pcVar17 = pcVar17 + 2;
                } while (cVar1 != '\0');
                return -1;
              }
              local_104 = 0;
              if ((-1 < g_CDemonSetPtr->selected_camera_index) &&
                 (iVar7 = _stricmp
                                    (g_CDemonSetPtr->cameras[g_CDemonSetPtr->selected_camera_index].
                                     name,local_510), iVar7 == 0)) {
                local_104 = 1;
              }
              *parse_position = *parse_position + local_bc;
            }
            else {
              iVar7 = _stricmp(local_18c,"isCurrentSet");
              if (iVar7 == 0) {
                local_b8 = -1;
                sscanf(expression + *parse_position," ( %[^ )] )%n");
                if (local_b8 < 3) {
                  pcVar16 = "Error parsing isCurrentSet parameters.";
                  pcVar17 = &DAT_01c56ed0;
                  do {
                    cVar1 = *pcVar16;
                    *pcVar17 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar16[1];
                    pcVar16 = pcVar16 + 2;
                    pcVar17[1] = cVar1;
                    pcVar17 = pcVar17 + 2;
                  } while (cVar1 != '\0');
                  return -1;
                }
                local_104 = 0;
                if (-1 < *0x01D2C900) {
                  engine_dosio_cpp_splitPath_FUN_00479580
                            (local_7cc,(char *)0x0,(char *)0x0,local_cb4,(char *)0x0);
                  engine_dosio_cpp_splitPath_FUN_00479580
                            ((char *)(0x01D2C900 + *0x01D2C900 * 0x40 + 2),(char *)0x0,
                             (char *)0x0,local_fb4,(char *)0x0);
                  iVar7 = _stricmp(local_cb4,local_fb4);
                  if (iVar7 == 0) {
                    local_104 = 1;
                  }
                }
                *parse_position = *parse_position + local_b8;
              }
              else {
                iVar7 = _stricmp(local_18c,"isDead");
                if (iVar7 == 0) {
                  local_b4 = -1;
                  sscanf(expression + *parse_position," ( %[^ )] )%n");
                  if (local_b4 < 3) {
                    pcVar16 = "Error parsing isDead parameters.";
                    pcVar17 = &DAT_01c56ed0;
                    do {
                      cVar1 = *pcVar16;
                      *pcVar17 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar16[1];
                      pcVar16 = pcVar16 + 2;
                      pcVar17[1] = cVar1;
                      pcVar17 = pcVar17 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_004a1370
                                               (local_830,g_CCharacterClassInfo.name_hash,
                                                &g_CCharacterClassInfo);
                  if (pCVar10 == (CHero *)0x0) {
                    return -1;
                  }
                  if (pCVar10 == 0x0FFFFFFF) {
                    local_104 = 0;
                    *parse_position = *parse_position + local_b4;
                  }
                  else {
                    EVar12 = (*(((pCVar10->base).base.vtable._uc)->_uc).getDeathState)
                                       ((CCharacter *)pCVar10);
                    local_104 = (uint)(1 < (int)EVar12);
                    *parse_position = *parse_position + local_b4;
                  }
                }
                else {
                  iVar7 = _stricmp(local_18c,"isFadeFinished");
                  if (iVar7 == 0) {
                    local_b0 = -1;
                    sscanf(expression + *parse_position," ( )%n");
                    this_ptr_00 = g_CGamePtr;
                    if (local_b0 < 2) {
                      pcVar16 = "Error parsing isFadeFinished function.";
                      pcVar17 = &DAT_01c56ed0;
                      do {
                        cVar1 = *pcVar16;
                        *pcVar17 = cVar1;
                        if (cVar1 == '\0') {
                          return -1;
                        }
                        cVar1 = pcVar16[1];
                        pcVar16 = pcVar16 + 2;
                        pcVar17[1] = cVar1;
                        pcVar17 = pcVar17 + 2;
                      } while (cVar1 != '\0');
                      return -1;
                    }
                    *parse_position = *parse_position + local_b0;
                    local_104 = core_game_cpp_CGame_fadeIn_FUN_004d62e0(this_ptr_00);
                  }
                  else {
                    iVar7 = _stricmp(local_18c,"isInRange");
                    if (iVar7 == 0) {
                      local_ac = -1;
                      sscanf(expression + *parse_position," ( %n");
                      if (local_ac < 1) {
                        pcVar16 = "Error parsing isInRange parameters.";
                        pcVar17 = &DAT_01c56ed0;
                        do {
                          cVar1 = *pcVar16;
                          *pcVar17 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar16[1];
                          pcVar16 = pcVar16 + 2;
                          pcVar17[1] = cVar1;
                          pcVar17 = pcVar17 + 2;
                        } while (cVar1 != '\0');
                        return -1;
                      }
                      *parse_position = *parse_position + local_ac;
                      iVar7 = core_event_cpp_parseVectorLocation_FUN_004a14a0
                                        (expression,parse_position,local_148 + 2);
                      if (iVar7 < 0) {
                        return -1;
                      }
                      local_ac = -1;
                      sscanf(expression + *parse_position," , %n");
                      if (local_ac < 1) {
                        pcVar16 = "Error parsing isInRange parameters.";
                        pcVar17 = &DAT_01c56ed0;
                        do {
                          cVar1 = *pcVar16;
                          *pcVar17 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar16[1];
                          pcVar16 = pcVar16 + 2;
                          pcVar17[1] = cVar1;
                          pcVar17 = pcVar17 + 2;
                        } while (cVar1 != '\0');
                      }
                      else {
                        *parse_position = *parse_position + local_ac;
                        iVar8 = core_event_cpp_parseVectorLocation_FUN_004a14a0
                                          (expression,parse_position,local_130 + 2);
                        if (-1 < iVar8) {
                          local_ac = -1;
                          sscanf
                                    (expression + *parse_position," , %f )%n");
                          if (local_ac < 3) {
                            pcVar16 = "Error parsing isInRange parameters.";
                            pcVar17 = &DAT_01c56ed0;
                            do {
                              cVar1 = *pcVar16;
                              *pcVar17 = cVar1;
                              if (cVar1 == '\0') {
                                return -1;
                              }
                              cVar1 = pcVar16[1];
                              pcVar16 = pcVar16 + 2;
                              pcVar17[1] = cVar1;
                              pcVar17 = pcVar17 + 2;
                            } while (cVar1 != '\0');
                            return -1;
                          }
                          *parse_position = *parse_position + local_ac;
                          if ((iVar7 == 0) || (iVar8 == 0)) {
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
                          goto LAB_004a757f;
                        }
                      }
                      return -1;
                    }
                    iVar7 = _stricmp(local_18c,"isOfType");
                    if (iVar7 == 0) {
                      local_98 = -1;
                      sscanf(expression + *parse_position," ( %[^ ,] , %[^ )] )%n");
                      if (local_98 < 3) {
                        pcVar16 = "Error parsing isOfType parameters.";
                        pcVar17 = &DAT_01c56ed0;
                        do {
                          cVar1 = *pcVar16;
                          *pcVar17 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar16[1];
                          pcVar16 = pcVar16 + 2;
                          pcVar17[1] = cVar1;
                          pcVar17 = pcVar17 + 2;
                        } while (cVar1 != '\0');
                      }
                      else {
                        pcVar16 = acStack_381 + 1;
                        uVar14 = 0xffffffff;
                        pcVar17 = pcVar16;
                        do {
                          if (uVar14 == 0) break;
                          uVar14 = uVar14 - 1;
                          cVar1 = *pcVar17;
                          pcVar17 = pcVar17 + (uint)bVar18 * -2 + 1;
                        } while (cVar1 != '\0');
                        SVar15 = ~uVar14 - 1;
                        if (0 < (int)SVar15) {
                          pcVar17 = pcVar16 + SVar15;
                          do {
                            if (((&DAT_00626114)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                            SVar15 = SVar15 - 1;
                            pcVar17 = pcVar17 + -1;
                          } while (0 < (int)SVar15);
                        }
                        pcVar16[SVar15] = '\0';
                        local_90 = acStack_381 + 2;
                        while (((&DAT_00626114)[(byte)(acStack_381[1] + 1)] & 2) != 0) {
                          memmove(pcVar16,local_90,SVar15);
                          SVar15 = SVar15 - 1;
                        }
                        uVar14 = 0xffffffff;
                        pcVar16 = local_895 + 1;
                        do {
                          if (uVar14 == 0) break;
                          uVar14 = uVar14 - 1;
                          cVar1 = *pcVar16;
                          pcVar16 = pcVar16 + (uint)bVar18 * -2 + 1;
                        } while (cVar1 != '\0');
                        SVar15 = ~uVar14 - 1;
                        if (0 < (int)SVar15) {
                          pcVar16 = local_895 + ~uVar14;
                          do {
                            if (((&DAT_00626114)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
                            SVar15 = SVar15 - 1;
                            pcVar16 = pcVar16 + -1;
                          } while (0 < (int)SVar15);
                        }
                        (local_895 + 1)[SVar15] = '\0';
                        local_8c = local_895 + 2;
                        while (((&DAT_00626114)[(byte)(local_895[1] + 1)] & 2) != 0) {
                          memmove(local_895 + 1,local_8c,SVar15);
                          SVar15 = SVar15 - 1;
                        }
                        pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_004a1370
                                                     (acStack_381 + 1,
                                                      g_CDemonActorClassInfo.name_hash,
                                                      &g_CDemonActorClassInfo);
                        if (pCVar10 != (CHero *)0x0) {
                          if (pCVar10 == 0x0FFFFFFF) {
                            local_104 = 0;
                            *parse_position = *parse_position + local_98;
                          }
                          else {
                            local_104 = core_actor_cpp_isOfClass_FUN_0040c550
                                                  ((CDemonActor *)pCVar10,local_895 + 1);
                            *parse_position = *parse_position + local_98;
                          }
                          goto LAB_004a757f;
                        }
                      }
                      return -1;
                    }
                    iVar7 = _stricmp(local_18c,"isFacing");
                    if (iVar7 == 0) {
                      local_88 = -1;
                      sscanf(expression + *parse_position," (%[^,], %[^,)]%n");
                      if (local_88 < 5) {
                        pcVar16 = "Error parsing isFacing parameters.";
                        pcVar17 = &DAT_01c56ed0;
                        do {
                          cVar1 = *pcVar16;
                          *pcVar17 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar16[1];
                          pcVar16 = pcVar16 + 2;
                          pcVar17[1] = cVar1;
                          pcVar17 = pcVar17 + 2;
                        } while (cVar1 != '\0');
                        return -1;
                      }
                      pcVar16 = acStack_2b9 + 1;
                      uVar14 = 0xffffffff;
                      pcVar17 = pcVar16;
                      do {
                        if (uVar14 == 0) break;
                        uVar14 = uVar14 - 1;
                        cVar1 = *pcVar17;
                        pcVar17 = pcVar17 + (uint)bVar18 * -2 + 1;
                      } while (cVar1 != '\0');
                      SVar15 = ~uVar14 - 1;
                      if (0 < (int)SVar15) {
                        pcVar17 = pcVar16 + SVar15;
                        do {
                          if (((&DAT_00626114)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                          SVar15 = SVar15 - 1;
                          pcVar17 = pcVar17 + -1;
                        } while (0 < (int)SVar15);
                      }
                      pcVar16[SVar15] = '\0';
                      local_84 = acStack_2b9 + 2;
                      while (((&DAT_00626114)[(byte)(acStack_2b9[1] + 1)] & 2) != 0) {
                        memmove(pcVar16,local_84,SVar15);
                        SVar15 = SVar15 - 1;
                      }
                      local_80 = local_31d + 1;
                      uVar14 = 0xffffffff;
                      pcVar16 = local_31d + 1;
                      do {
                        if (uVar14 == 0) break;
                        uVar14 = uVar14 - 1;
                        cVar1 = *pcVar16;
                        pcVar16 = pcVar16 + (uint)bVar18 * -2 + 1;
                      } while (cVar1 != '\0');
                      SVar15 = ~uVar14 - 1;
                      if (0 < (int)SVar15) {
                        pcVar16 = local_31d + ~uVar14;
                        do {
                          if (((&DAT_00626114)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
                          SVar15 = SVar15 - 1;
                          pcVar16 = pcVar16 + -1;
                        } while (0 < (int)SVar15);
                      }
                      (local_31d + 1)[SVar15] = '\0';
                      while (((&DAT_00626114)[(byte)(*local_80 + 1)] & 2) != 0) {
                        memmove(local_80,local_31d + 2,SVar15);
                        SVar15 = SVar15 - 1;
                      }
                      pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_004a1370
                                                   (acStack_2b9 + 1,g_CDemonActorClassInfo.name_hash
                                                    ,&g_CDemonActorClassInfo);
                      if ((pCVar10 == (CHero *)0x0) ||
                         (pCVar13 = (CHero *)core_event_cpp_resolveActorByName_FUN_004a1370
                                                       (local_31d + 1,
                                                        g_CDemonActorClassInfo.name_hash,
                                                        &g_CDemonActorClassInfo),
                         pCVar13 == (CHero *)0x0)) {
                        return -1;
                      }
                      *parse_position = *parse_position + local_88;
                      local_10b8 = 45.0;
                      if (expression[*parse_position] == ',') {
                        local_88 = -1;
                        sscanf(expression + *parse_position,",%f %n")
                        ;
                        if (local_88 < 2) {
                          pcVar16 = "Error parsing isFacing parameters.";
                          pcVar17 = &DAT_01c56ed0;
                          do {
                            cVar1 = *pcVar16;
                            *pcVar17 = cVar1;
                            if (cVar1 == '\0') {
                              return -1;
                            }
                            cVar1 = pcVar16[1];
                            pcVar16 = pcVar16 + 2;
                            pcVar17[1] = cVar1;
                            pcVar17 = pcVar17 + 2;
                          } while (cVar1 != '\0');
                          return -1;
                        }
                        if (((double)local_10b8 < 0.0) || (_DAT_005dea94 < (double)local_10b8)) {
                          pcVar16 = "isFacing() angle must be in range 0..180.";
                          pcVar17 = &DAT_01c56ed0;
                          do {
                            cVar1 = *pcVar16;
                            *pcVar17 = cVar1;
                            if (cVar1 == '\0') {
                              return -1;
                            }
                            cVar1 = pcVar16[1];
                            pcVar16 = pcVar16 + 2;
                            pcVar17[1] = cVar1;
                            pcVar17 = pcVar17 + 2;
                          } while (cVar1 != '\0');
                          return -1;
                        }
                        *parse_position = *parse_position + local_88;
                      }
                      pCVar6 = 0x0FFFFFFF;
                      if (expression[*parse_position] != ')') {
                        pcVar16 = "Error parsing isFacing parameters.";
                        pcVar17 = &DAT_01c56ed0;
                        do {
                          cVar1 = *pcVar16;
                          *pcVar17 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar16[1];
                          pcVar16 = pcVar16 + 2;
                          pcVar17[1] = cVar1;
                          pcVar17 = pcVar17 + 2;
                        } while (cVar1 != '\0');
                        return -1;
                      }
                      *parse_position = *parse_position + 1;
                      if ((pCVar10 == pCVar6) || (pCVar13 == pCVar6)) {
                        local_104 = 0;
                      }
                      else {
                        core_actor_cpp_FUN_00408bb0(pCVar10,&(pCVar13->base).base.location);
                        local_134 = local_11c;
                        local_130[(uint)bVar18 * -2] = afStack_118[(uint)bVar18 * -2];
                        local_130[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                             afStack_118[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
                        local_130[0] = 0.0;
                        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_134)
                        ;
                        local_14c = afStack_118[2];
                        local_148[(uint)bVar18 * -2] = afStack_118[(uint)bVar18 * -2 + 3];
                        local_148[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                             afStack_118[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
                        if (local_10b8 * _DAT_005dea9c * (float)_DAT_005deaa4 < ABS(local_148[0])) {
                          local_104 = 0;
                        }
                        else {
                          local_104 = 1;
                        }
                      }
                    }
                    else {
                      iVar7 = _stricmp(local_18c,"isLightOn");
                      if (iVar7 == 0) {
                        local_74 = -1;
                        sscanf(expression + *parse_position," ( %[^ )] )%n");
                        if (local_74 < 3) {
                          pcVar16 = "Error parsing isLightOn parameters.";
                          pcVar17 = &DAT_01c56ed0;
                          do {
                            cVar1 = *pcVar16;
                            *pcVar17 = cVar1;
                            if (cVar1 == '\0') {
                              return -1;
                            }
                            cVar1 = pcVar16[1];
                            pcVar16 = pcVar16 + 2;
                            pcVar17[1] = cVar1;
                            pcVar17 = pcVar17 + 2;
                          } while (cVar1 != '\0');
                          return -1;
                        }
                        core_set_cpp_CDemonSet_addLightFilter_FUN_00555a20
                                  (g_CDemonSetPtr,local_4ac,&local_70,&local_6c);
                        if (local_70 == (C3DSLight *)0x0) {
                          _sprintf(local_eb4,"Spotlight %s doesn't exist.");
                          pcVar16 = local_eb4;
                          pcVar17 = &DAT_01c56ed0;
                          do {
                            cVar1 = *pcVar16;
                            *pcVar17 = cVar1;
                            if (cVar1 == '\0') {
                              return -1;
                            }
                            cVar1 = pcVar16[1];
                            pcVar16 = pcVar16 + 2;
                            pcVar17[1] = cVar1;
                            pcVar17 = pcVar17 + 2;
                          } while (cVar1 != '\0');
                          return -1;
                        }
                        local_104 = (uint)(local_6c->light_enabled_flag != 0);
                        *parse_position = *parse_position + local_74;
                      }
                      else {
                        iVar7 = _stricmp
                                          (local_18c,"isNudityEnabled");
                        if (iVar7 == 0) {
                          local_68 = -1;
                          sscanf(expression + *parse_position," ( )%n")
                          ;
                          if (local_68 < 2) {
                            pcVar16 = "Error parsing isNudityEnabled().";
                            pcVar17 = &DAT_01c56ed0;
                            do {
                              cVar1 = *pcVar16;
                              *pcVar17 = cVar1;
                              if (cVar1 == '\0') {
                                return -1;
                              }
                              cVar1 = pcVar16[1];
                              pcVar16 = pcVar16 + 2;
                              pcVar17[1] = cVar1;
                              pcVar17 = pcVar17 + 2;
                            } while (cVar1 != '\0');
                            return -1;
                          }
                          local_104 = (uint)(g_CGamePtr->nudity_flag != 0);
                          *parse_position = *parse_position + local_68;
                        }
                        else {
                          iVar7 = _stricmp
                                            (local_18c,"isSfxActive");
                          if (iVar7 == 0) {
                            local_64 = -1;
                            sscanf
                                      (expression + *parse_position," ( %[^ )] )%n");
                            if (local_64 < 3) {
                              pcVar16 = "Error parsing isSfxActive parameters.";
                              pcVar17 = &DAT_01c56ed0;
                              do {
                                cVar1 = *pcVar16;
                                *pcVar17 = cVar1;
                                if (cVar1 == '\0') {
                                  return -1;
                                }
                                cVar1 = pcVar16[1];
                                pcVar16 = pcVar16 + 2;
                                pcVar17[1] = cVar1;
                                pcVar17 = pcVar17 + 2;
                              } while (cVar1 != '\0');
                              return -1;
                            }
                            pcVar16 = acStack_705 + 1;
                            uVar14 = 0xffffffff;
                            pcVar17 = pcVar16;
                            do {
                              if (uVar14 == 0) break;
                              uVar14 = uVar14 - 1;
                              cVar1 = *pcVar17;
                              pcVar17 = pcVar17 + (uint)bVar18 * -2 + 1;
                            } while (cVar1 != '\0');
                            SVar15 = ~uVar14 - 1;
                            if (0 < (int)SVar15) {
                              pcVar17 = pcVar16 + SVar15;
                              do {
                                if (((&DAT_00626114)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                                SVar15 = SVar15 - 1;
                                pcVar17 = pcVar17 + -1;
                              } while (0 < (int)SVar15);
                            }
                            pcVar16[SVar15] = '\0';
                            local_60 = acStack_705 + 2;
                            while (((&DAT_00626114)[(byte)(acStack_705[1] + 1)] & 2) != 0) {
                              memmove(pcVar16,local_60,SVar15);
                              SVar15 = SVar15 - 1;
                            }
                            local_104 = 0;
                            uVar14 = core_event_cpp_CEventList_getSfxHandle_FUN_004aa290
                                               (this_ptr,acStack_705 + 1);
                            if (uVar14 != 0) {
                              local_104 = 1;
                            }
                            *parse_position = *parse_position + local_64;
                          }
                          else {
                            iVar7 = _stricmp
                                              (local_18c,"isTalking");
                            if (iVar7 == 0) {
                              local_5c = -1;
                              sscanf
                                        (expression + *parse_position," ( %[^ )] )%n");
                              if (local_5c < 3) {
                                pcVar16 = "Error parsing isTalking parameters.";
                                pcVar17 = &DAT_01c56ed0;
                                do {
                                  cVar1 = *pcVar16;
                                  *pcVar17 = cVar1;
                                  if (cVar1 == '\0') {
                                    return -1;
                                  }
                                  cVar1 = pcVar16[1];
                                  pcVar16 = pcVar16 + 2;
                                  pcVar17[1] = cVar1;
                                  pcVar17 = pcVar17 + 2;
                                } while (cVar1 != '\0');
                                return -1;
                              }
                              pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_004a1370
                                                           (local_574,
                                                            g_CCharacterClassInfo.name_hash,
                                                            &g_CCharacterClassInfo);
                              if (pCVar10 == (CHero *)0x0) {
                                return -1;
                              }
                              if (pCVar10 == 0x0FFFFFFF) {
                                local_104 = (uint)pCVar10 ^ (uint)0x0FFFFFFF;
                              }
                              else if ((pCVar10->base).speech_timer <= 0.0) {
                                local_104 = 0;
                              }
                              else {
                                local_104 = 1;
                              }
                              *parse_position = *parse_position + local_5c;
                            }
                            else {
                              iVar7 = _stricmp
                                                (local_18c,"isVictim");
                              if (iVar7 == 0) {
                                local_58 = -1;
                                sscanf
                                          (expression + *parse_position," ( %[^ )] )%n");
                                if (local_58 < 3) {
                                  pcVar16 = "Error parsing isVictim parameters.";
                                  pcVar17 = &DAT_01c56ed0;
                                  do {
                                    cVar1 = *pcVar16;
                                    *pcVar17 = cVar1;
                                    if (cVar1 == '\0') {
                                      return -1;
                                    }
                                    cVar1 = pcVar16[1];
                                    pcVar16 = pcVar16 + 2;
                                    pcVar17[1] = cVar1;
                                    pcVar17 = pcVar17 + 2;
                                  } while (cVar1 != '\0');
                                }
                                else {
                                  local_54 = (CHero *)core_event_cpp_resolveActorByName_FUN_004a1370
                                                                (local_95c,
                                                                 g_CCharacterClassInfo.name_hash,
                                                                 &g_CCharacterClassInfo);
                                  if (local_54 != (CHero *)0x0) {
                                    local_104 = 0;
                                    if (local_54 != 0x0FFFFFFF) {
                                      local_50 = &(local_54->base).base.location;
                                      local_18 = 0;
                                      for (iVar7 = 0; iVar7 < g_CDemonSetPtr->enemy_count;
                                          iVar7 = iVar7 + 1) {
                                        iVar8 = *(int *)((int)g_CDemonSetPtr->enemies + local_18);
                                        if ((((local_54 == *(CHero **)(iVar8 + 0xc1e8)) &&
                                             (iVar9 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x10c))
                                                                (iVar8), iVar9 < 1)) &&
                                            (iVar9 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x70))
                                                               (iVar8), iVar9 == 0)) &&
                                           (fVar3 = *(float *)(iVar8 + 0x20) -
                                                    (local_50->position).x,
                                           fVar5 = *(float *)(iVar8 + 0x24) - (local_50->position).y
                                           , fVar4 = *(float *)(iVar8 + 0x28) -
                                                     (local_50->position).z,
                                           SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) <=
                                           (float)_DAT_005deaac)) {
                                          local_104 = 1;
                                          break;
                                        }
                                        local_18 = local_18 + 4;
                                      }
                                    }
                                    *parse_position = *parse_position + local_58;
                                    goto LAB_004a757f;
                                  }
                                }
                                return -1;
                              }
                              iVar7 = _stricmp
                                                (local_18c,"isWeaponDrawn");
                              if (iVar7 == 0) {
                                local_40 = -1;
                                sscanf
                                          (expression + *parse_position," ( %[^ )] )%n");
                                if (local_40 < 3) {
                                  pcVar16 = "Error parsing isWeaponDrawn parameters.";
                                  pcVar17 = &DAT_01c56ed0;
                                  do {
                                    cVar1 = *pcVar16;
                                    *pcVar17 = cVar1;
                                    if (cVar1 == '\0') {
                                      return -1;
                                    }
                                    cVar1 = pcVar16[1];
                                    pcVar16 = pcVar16 + 2;
                                    pcVar17[1] = cVar1;
                                    pcVar17 = pcVar17 + 2;
                                  } while (cVar1 != '\0');
                                }
                                else {
                                  pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_004a1370
                                                               (local_768,g_CHeroClassInfo.name_hash
                                                                ,&g_CHeroClassInfo);
                                  if (pCVar10 != (CHero *)0x0) {
                                    if (pCVar10 == 0x0FFFFFFF) {
                                      local_104 = (uint)pCVar10 ^ (uint)0x0FFFFFFF;
                                    }
                                    else {
                                      local_104 = (*(((pCVar10->base).base.vtable._uh)->_uh).
                                                    isWeaponDrawn)(pCVar10);
                                    }
                                    *parse_position = *parse_position + local_40;
                                    goto LAB_004a757f;
                                  }
                                }
                                return -1;
                              }
                              iVar7 = _stricmp
                                                (local_18c,"isWearingGasMask");
                              if (iVar7 == 0) {
                                local_3c = -1;
                                sscanf
                                          (expression + *parse_position," ( %[^ )] )%n");
                                if (local_3c < 3) {
                                  pcVar16 = "Error parsing isWearingGasMask parameters.";
                                  pcVar17 = &DAT_01c56ed0;
                                  do {
                                    cVar1 = *pcVar16;
                                    *pcVar17 = cVar1;
                                    if (cVar1 == '\0') {
                                      return -1;
                                    }
                                    cVar1 = pcVar16[1];
                                    pcVar16 = pcVar16 + 2;
                                    pcVar17[1] = cVar1;
                                    pcVar17 = pcVar17 + 2;
                                  } while (cVar1 != '\0');
                                }
                                else {
                                  pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_004a1370
                                                               (local_3e4,g_CHeroClassInfo.name_hash
                                                                ,&g_CHeroClassInfo);
                                  if (pCVar10 != (CHero *)0x0) {
                                    if (pCVar10 == 0x0FFFFFFF) {
                                      local_104 = 0;
                                      *parse_position = *parse_position + local_3c;
                                    }
                                    else {
                                      local_104 = (uint)(pCVar10->is_wearing_gas_mask ==
                                                        GAS_MASK_ON_FACE);
                                      *parse_position = *parse_position + local_3c;
                                    }
                                    goto LAB_004a757f;
                                  }
                                }
                                return -1;
                              }
                              iVar7 = _stricmp
                                                (local_18c,"isPuzzleActive");
                              if (iVar7 == 0) {
                                local_38 = -1;
                                sscanf
                                          (expression + *parse_position,"(%[^)])%n");
                                if (local_38 < 3) {
                                  iVar7 = core_event_cpp_formatEventError_FUN_004a1210
                                                    ("Error parsing activatePuzzle command");
                                  return iVar7;
                                }
                                iVar7 = 0;
                                local_34 = 0;
                                if (0 < DAT_007c394c) {
                                  iVar8 = 0;
                                  do {
                                    pcVar16 = (char *)(**(code **)(**(int **)((int)&DAT_007c3950 +
                                                                             iVar8) + 4))
                                                                (*(int **)((int)&DAT_007c3950 +
                                                                          iVar8));
                                    iVar9 = _stricmp(local_10b4,pcVar16);
                                    if (iVar9 == 0) {
                                      local_34 = *(int *)((int)&DAT_007c3950 + iVar8);
                                      break;
                                    }
                                    iVar7 = iVar7 + 1;
                                    iVar8 = iVar8 + 4;
                                  } while (iVar7 < DAT_007c394c);
                                }
                                if (local_34 == 0) {
                                  iVar7 = core_event_cpp_formatEventError_FUN_004a1210
                                                    ("No such puzzle '%s'");
                                  return iVar7;
                                }
                                local_104 = (uint)(DAT_007c3978 != 0);
                                *parse_position = *parse_position + local_38;
                              }
                              else {
                                iVar7 = _stricmp
                                                  (local_18c,"randBool");
                                if (iVar7 != 0) {
                                  iVar7 = _stricmp
                                                    (local_18c,"reachedDest");
                                  if (iVar7 == 0) {
                                    local_28 = -1;
                                    sscanf
                                              (expression + *parse_position," ( %[^ )] )%n");
                                    if (local_28 < 3) {
                                      pcVar16 = "Error parsing reachedDest parameters.";
                                      pcVar17 = &DAT_01c56ed0;
                                      do {
                                        cVar1 = *pcVar16;
                                        *pcVar17 = cVar1;
                                        if (cVar1 == '\0') {
                                          return -1;
                                        }
                                        cVar1 = pcVar16[1];
                                        pcVar16 = pcVar16 + 2;
                                        pcVar17[1] = cVar1;
                                        pcVar17 = pcVar17 + 2;
                                      } while (cVar1 != '\0');
                                    }
                                    else {
                                      pCVar10 = (CHero *)
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_448,
                                                             g_CCharacterClassInfo.name_hash,
                                                             &g_CCharacterClassInfo);
                                      if (pCVar10 != (CHero *)0x0) {
                                        if (pCVar10 == 0x0FFFFFFF) {
                                          local_104 = 0;
                                          *parse_position = *parse_position + local_28;
                                        }
                                        else {
                                          iVar7 = (*(((pCVar10->base).base.vtable._uc)->_uc).
                                                    isWalkComplete)((CCharacter *)pCVar10);
                                          local_104 = (uint)(iVar7 != 0);
                                          *parse_position = *parse_position + local_28;
                                        }
                                        goto LAB_004a757f;
                                      }
                                    }
                                    return -1;
                                  }
                                  iVar7 = _stricmp
                                                    (local_18c,"testActorBool");
                                  if (iVar7 != 0) {
                                    pcVar16 = "Invalid meta-function";
                                    pcVar17 = &DAT_01c56ed0;
                                    do {
                                      cVar1 = *pcVar16;
                                      *pcVar17 = cVar1;
                                      if (cVar1 == '\0') {
                                        return -1;
                                      }
                                      cVar1 = pcVar16[1];
                                      pcVar16 = pcVar16 + 2;
                                      pcVar17[1] = cVar1;
                                      pcVar17 = pcVar17 + 2;
                                    } while (cVar1 != '\0');
                                    return -1;
                                  }
                                  local_24 = -1;
                                  sscanf
                                            (expression + *parse_position,"(%[^,], %[^)])%n");
                                  if (local_24 < 3) {
                                    pcVar16 = "Error parsing testActorBool parameters.";
                                    pcVar17 = &DAT_01c56ed0;
                                    do {
                                      cVar1 = *pcVar16;
                                      *pcVar17 = cVar1;
                                      if (cVar1 == '\0') {
                                        return -1;
                                      }
                                      cVar1 = pcVar16[1];
                                      pcVar16 = pcVar16 + 2;
                                      pcVar17[1] = cVar1;
                                      pcVar17 = pcVar17 + 2;
                                    } while (cVar1 != '\0');
                                    return -1;
                                  }
                                  uVar14 = 0xffffffff;
                                  pcVar16 = acStack_aed + 1;
                                  do {
                                    if (uVar14 == 0) break;
                                    uVar14 = uVar14 - 1;
                                    cVar1 = *pcVar16;
                                    pcVar16 = pcVar16 + (uint)bVar18 * -2 + 1;
                                  } while (cVar1 != '\0');
                                  SVar15 = ~uVar14 - 1;
                                  if (0 < (int)SVar15) {
                                    pcVar16 = acStack_aed + ~uVar14;
                                    do {
                                      if (((&DAT_00626114)[(byte)(pcVar16[-1] + 1)] & 2) == 0)
                                      break;
                                      SVar15 = SVar15 - 1;
                                      pcVar16 = pcVar16 + -1;
                                    } while (0 < (int)SVar15);
                                  }
                                  (acStack_aed + 1)[SVar15] = '\0';
                                  local_20 = acStack_aed + 2;
                                  while (((&DAT_00626114)[(byte)(acStack_aed[1] + 1)] & 2) != 0) {
                                    memmove
                                              (acStack_aed + 1,local_20,SVar15);
                                    SVar15 = SVar15 - 1;
                                  }
                                  local_1c = local_bb5 + 1;
                                  uVar14 = 0xffffffff;
                                  pcVar16 = local_bb5 + 1;
                                  do {
                                    if (uVar14 == 0) break;
                                    uVar14 = uVar14 - 1;
                                    cVar1 = *pcVar16;
                                    pcVar16 = pcVar16 + (uint)bVar18 * -2 + 1;
                                  } while (cVar1 != '\0');
                                  SVar15 = ~uVar14 - 1;
                                  if (0 < (int)SVar15) {
                                    pcVar16 = local_bb5 + ~uVar14;
                                    do {
                                      if (((&DAT_00626114)[(byte)(pcVar16[-1] + 1)] & 2) == 0)
                                      break;
                                      SVar15 = SVar15 - 1;
                                      pcVar16 = pcVar16 + -1;
                                    } while (0 < (int)SVar15);
                                  }
                                  (local_bb5 + 1)[SVar15] = '\0';
                                  while (((&DAT_00626114)[(byte)(*local_1c + 1)] & 2) != 0) {
                                    memmove(local_1c,local_bb5 + 2,SVar15)
                                    ;
                                    SVar15 = SVar15 - 1;
                                  }
                                  iVar7 = 0;
                                  local_fc = 0;
                                  if (0 < 0x00000002) {
                                    iVar8 = 0;
                                    do {
                                      if (*(int *)((int)&DAT_0061b4d4 + iVar8) == 0) {
                                        local_a0 = (int)&DAT_0061b4d4 + iVar8;
                                        iVar9 = _stricmp
                                                          ("spectralFlag" + iVar8,
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
                                    _sprintf(local_db4,"%s is not a valid boolean actor variable name");
                                    pcVar16 = local_db4;
                                    pcVar17 = &DAT_01c56ed0;
                                    do {
                                      cVar1 = *pcVar16;
                                      *pcVar17 = cVar1;
                                      if (cVar1 == '\0') {
                                        return -1;
                                      }
                                      cVar1 = pcVar16[1];
                                      pcVar16 = pcVar16 + 2;
                                      pcVar17[1] = cVar1;
                                      pcVar17 = pcVar17 + 2;
                                    } while (cVar1 != '\0');
                                  }
                                  else {
                                    pCVar10 = (CHero *)
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (acStack_aed + 1,
                                                             *(uint *)(local_fc + 0x44),
                                                             local_fc + 0x22);
                                    if (pCVar10 != (CHero *)0x0) {
                                      if (pCVar10 == 0x0FFFFFFF) {
                                        local_104 = 0;
                                      }
                                      else {
                                        local_104 = *(uint *)((pCVar10->base).base.actor_name +
                                                             *(int *)(iVar7 + 0x40));
                                      }
                                      goto LAB_004a757f;
                                    }
                                  }
                                  return -1;
                                }
                                local_30 = -1;
                                sscanf
                                          (expression + *parse_position," ( %f )%n");
                                if (local_30 < 3) {
                                  pcVar16 = "Error parsing randBool parameters.";
                                  pcVar17 = &DAT_01c56ed0;
                                  do {
                                    cVar1 = *pcVar16;
                                    *pcVar17 = cVar1;
                                    if (cVar1 == '\0') {
                                      return -1;
                                    }
                                    cVar1 = pcVar16[1];
                                    pcVar16 = pcVar16 + 2;
                                    pcVar17[1] = cVar1;
                                    pcVar17 = pcVar17 + 2;
                                  } while (cVar1 != '\0');
                                  return -1;
                                }
                                local_104 = core_actor_cpp_randomChance_FUN_0040cd00(local_2c);
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
    goto LAB_004a757f;
  }
  local_100 = -1;
  sscanf(expression + *parse_position," ( %s %s %[^ )] )%n");
  if (local_100 < 3) {
    pcVar16 = "Error parsing cmp parameters.";
    pcVar17 = &DAT_01c56ed0;
    do {
      cVar1 = *pcVar16;
      *pcVar17 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar16[1];
      pcVar16 = pcVar16 + 2;
      pcVar17[1] = cVar1;
      pcVar17 = pcVar17 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  pcVar16 = acStack_1f1 + 1;
  uVar14 = 0xffffffff;
  pcVar17 = pcVar16;
  do {
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + (uint)bVar18 * -2 + 1;
  } while (cVar1 != '\0');
  SVar15 = ~uVar14 - 1;
  if (0 < (int)SVar15) {
    pcVar17 = pcVar16 + SVar15;
    do {
      if (((&DAT_00626114)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
      SVar15 = SVar15 - 1;
      pcVar17 = pcVar17 + -1;
    } while (0 < (int)SVar15);
  }
  pcVar16[SVar15] = '\0';
  local_f8 = acStack_1f1 + 2;
  while (((&DAT_00626114)[(byte)(acStack_1f1[1] + 1)] & 2) != 0) {
    memmove(pcVar16,local_f8,SVar15);
    SVar15 = SVar15 - 1;
  }
  uVar14 = 0xffffffff;
  pcVar16 = local_5d9 + 1;
  do {
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar16 + (uint)bVar18 * -2 + 1;
  } while (cVar1 != '\0');
  SVar15 = ~uVar14 - 1;
  if (0 < (int)SVar15) {
    pcVar16 = local_5d9 + ~uVar14;
    do {
      if (((&DAT_00626114)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
      SVar15 = SVar15 - 1;
      pcVar16 = pcVar16 + -1;
    } while (0 < (int)SVar15);
  }
  (local_5d9 + 1)[SVar15] = '\0';
  local_f4 = local_5d9 + 2;
  while (((&DAT_00626114)[(byte)(local_5d9[1] + 1)] & 2) != 0) {
    memmove(local_5d9 + 1,local_f4,SVar15);
    SVar15 = SVar15 - 1;
  }
  uVar14 = 0xffffffff;
  pcVar16 = local_8f9 + 1;
  do {
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar16 + (uint)bVar18 * -2 + 1;
  } while (cVar1 != '\0');
  SVar15 = ~uVar14 - 1;
  if (0 < (int)SVar15) {
    pcVar16 = local_8f9 + ~uVar14;
    do {
      if (((&DAT_00626114)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
      SVar15 = SVar15 - 1;
      pcVar16 = pcVar16 + -1;
    } while (0 < (int)SVar15);
  }
  (local_8f9 + 1)[SVar15] = '\0';
  local_ec = local_8f9 + 2;
  while (((&DAT_00626114)[(byte)(local_8f9[1] + 1)] & 2) != 0) {
    memmove(local_8f9 + 1,local_ec,SVar15);
    SVar15 = SVar15 - 1;
  }
  iVar8 = _strcmp(local_8f9 + 1,&DAT_005dcbc4);
  iVar7 = 0;
  if (iVar8 != 0) {
    iVar7 = _strcmp(local_8f9 + 1,&DAT_005dcbc6);
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = _strcmp(local_8f9 + 1,&DAT_005dcbc9);
      if (iVar7 == 0) {
        iVar7 = 2;
      }
      else {
        iVar7 = _strcmp(local_8f9 + 1,&DAT_005dcbcc);
        if (iVar7 == 0) {
          iVar7 = 3;
        }
        else {
          iVar7 = _strcmp(local_8f9 + 1,&DAT_005dcbcf);
          if (iVar7 == 0) {
            iVar7 = 5;
          }
          else {
            iVar7 = _strcmp(local_8f9 + 1,&DAT_005dcbd1);
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
    pcVar16 = "Invalid relational operator in cmp statement";
    pcVar17 = &DAT_01c56ed0;
    do {
      cVar1 = *pcVar16;
      *pcVar17 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar16[1];
      pcVar16 = pcVar16 + 2;
      pcVar17[1] = cVar1;
      pcVar17 = pcVar17 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  *parse_position = *parse_position + local_100;
  iVar9 = sscanf(acStack_1f1 + 1,&DAT_005dcbd4);
  iVar8 = local_e8;
  if (iVar9 != 1) {
    iVar8 = core_event_cpp_CEventList_getCounterValue_FUN_004a9e80(0x01C51D80,acStack_1f1 + 1);
  }
  iVar9 = sscanf(local_5d9 + 1,&DAT_005dcbd4);
  if (iVar9 == 1) {
    switch(iVar7) {
    case 0:
switchD_004a7564_caseD_0:
      local_104 = (uint)(iVar8 < local_94);
      break;
    case 1:
switchD_004a7564_caseD_1:
      local_104 = (uint)(iVar8 <= local_94);
      break;
    case 2:
switchD_004a7564_caseD_2:
      local_104 = (uint)(iVar8 == local_94);
      break;
    case 3:
switchD_004a7564_caseD_3:
      local_104 = (uint)(iVar8 != local_94);
      break;
    case 4:
switchD_004a7564_caseD_4:
      local_104 = (uint)(local_94 <= iVar8);
      break;
    case 5:
switchD_004a7564_caseD_5:
      local_104 = (uint)(local_94 < iVar8);
      break;
    default:
switchD_004a7564_default:
      _DAT_01d1d400 = "..\\core\\event.cpp";
      _DAT_01d1d404 = 0xa27;
      core_main_c_FUN_005030e0("Hell froze.");
    }
LAB_004a757f:
    while (((&DAT_00626114)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
    }
    return local_104;
  }
  local_94 = core_event_cpp_CEventList_getCounterValue_FUN_004a9e80(0x01C51D80,local_5d9 + 1);
  switch(iVar7) {
  case 0:
    goto switchD_004a7564_caseD_0;
  case 1:
    goto switchD_004a7564_caseD_1;
  case 2:
    goto switchD_004a7564_caseD_2;
  case 3:
    goto switchD_004a7564_caseD_3;
  case 4:
    goto switchD_004a7564_caseD_4;
  case 5:
    goto switchD_004a7564_caseD_5;
  default:
    goto switchD_004a7564_default;
  }
}
