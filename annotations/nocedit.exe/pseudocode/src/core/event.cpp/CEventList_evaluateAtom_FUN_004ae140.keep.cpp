// Name: core_event.cpp_CEventList_evaluateAtom_FUN_004ae140
// Address: 004ae140
// MANUAL RECONSTRUCTION
// Address Range: [[004ae140, 004b026e]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_004ae140(CEventList *this_ptr,char *expression,int *parse_position)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_004ae140(CEventList *this_ptr,char *expression,int *parse_position)

{
  int iVar7;
  int iVar3;
  char *pcVar4;
  int iVar8;
  int iVar9;
  int iVar5;
  int iVar10;
  CDemonActor *pCVar10;
  CDemonActor *pCVar15;
  CHero *pCVar8;
  CGlass *pCVar9;
  CCharacter *pCVar11;
  EDeathState EVar12;
  CDemonActor *pCVar13;
  CVector3f *pCVar14;
  CCharacter *pCVar12;
  EDeathState EVar16;
  CHero *this_ptr_01;
  CHero *pCVar7;
  CCharacter *this_ptr_02;
  SIZE_T SVar16;
  uint uVar17;
  SIZE_T SVar18;
  char *pcVar19;
  char *pcVar17;
  float local_a88;
  char local_a84 [255];
  char local_985 [100];
  char acStack_921 [101];
  char local_8bc [99];
  char acStack_859 [101];
  char local_7f4 [99];
  char acStack_791 [100];
  char local_72d [101];
  char local_6c8 [99];
  char local_665 [101];
  char local_600 [99];
  char acStack_59d [101];
  char local_538 [99];
  char local_4d5 [100];
  char acStack_471 [101];
  char local_40c [99];
  char local_3a9 [100];
  char acStack_345 [101];
  char local_2e0 [99];
  char acStack_27d [101];
  char local_218 [99];
  char acStack_1b5 [101];
  char local_150 [64];
  CVector3f local_110;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  uint local_e0;
  int local_dc;
  int local_d8;
  char *local_d4;
  char *local_d0;
  int local_cc;
  char *local_c8;
  int local_c4;
  char *local_bc;
  int local_b8;
  CCharacter *local_b4;
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
  C3DSLight *local_4c;
  CDemonLight *local_48;
  int local_44;
  int local_40;
  char *local_3c;
  int local_38;
  int local_34;
  CLocation *local_30;
  int local_20;
  int local_1c;
  float local_18 [2];
  CEnemy *iVar6;
  CDemonActor *pCVar6;
  float fVar3;
  float fVar4;
  byte bVar2;
  CGame *this_ptr_00;
  float fVar5;

  while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
    *parse_position = *parse_position + 1;
  }
  if (expression[*parse_position] == '.') {
    *parse_position = *parse_position + 1;
  }
  bVar2 = expression[*parse_position];
  if (bVar2 == 0) {
    strcpy(g_EventErrorMessageBuffer, "Unexpected end of string");
    return -1;
  }
  if (bVar2 == 0x28) {
    *parse_position = *parse_position + 1;
    iVar3 = core_event_cpp_CEventList_evaluateLogicalExpr_FUN_004b0270
                      (this_ptr,expression,parse_position);
    if (iVar3 < 0) {
      return iVar3;
    }
    if (expression[*parse_position] == ')') {
      *parse_position = *parse_position + 1;
      while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
        *parse_position = *parse_position + 1;
      }
      return iVar3;
    }
    strcpy(g_EventErrorMessageBuffer, "Matching ')' is missing");
    return -1;
  }
  if (bVar2 == 0x21) {
    *parse_position = *parse_position + 1;
    iVar7 = core_event_cpp_CEventList_evaluateAtom_FUN_004ae140(this_ptr,expression,parse_position);
    if (-1 < iVar7) {
      return (uint)(iVar7 == 0);
    }
    return iVar7;
  }
  iVar3 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)bVar2);
  if (iVar3 == 0) {
    strcpy(g_EventErrorMessageBuffer, "Syntax error");
    return -1;
  }
  pcVar17 = local_150;
  do {
    *pcVar17 = expression[*parse_position];
    iVar3 = *parse_position;
    *parse_position = iVar3 + 1;
    pcVar17 = pcVar17 + 1;
    iVar3 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)(byte)expression[iVar3 + 1]);
  } while (iVar3 != 0);
  *pcVar17 = '\0';
  if (expression[*parse_position] != '(') {
    while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
    }
    iVar3 = core_event_cpp_CEventList_resolveVariable_FUN_004adc10(this_ptr,local_150);
    return iVar3;
  }
  local_e0 = 0xffffffff;
  iVar3 = _stricmp(local_150,"cmp");
  if (iVar3 != 0) {
    iVar3 = _stricmp(local_150,"exists");
    if (iVar3 == 0) {
      local_6c = -1;
      sscanf
                (expression + *parse_position," ( %[^ )] )%n",acStack_345 + 1,&local_6c);
      if (local_6c < 3) {
        strcpy(g_EventErrorMessageBuffer, "Error parsing exists parameters.");
        return -1;
      }
      pcVar19 = acStack_345 + 1;
      SVar18 = strlen(pcVar19);
      if (0 < (int)SVar18) {
        pcVar4 = pcVar19 + SVar18;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2) == 0) break;
          SVar18 = SVar18 - 1;
          pcVar4 = pcVar4 + -1;
        } while (0 < (int)SVar18);
      }
      pcVar19[SVar18] = '\0';
      local_bc = acStack_345 + 2;
      while ((g_CharacterClassificationTable[(byte)(acStack_345[1] + 1)] & 2) != 0) {
        memmove(pcVar19,local_bc,SVar18);
        SVar18 = SVar18 - 1;
      }
      pCVar10 = core_event_cpp_resolveActorByName_FUN_004aa400
                          (acStack_345 + 1,g_CDemonActorClassInfo.name_hash,
                           g_CDemonActorClassInfo.class_name);
      if ((pCVar10 == (CDemonActor *)0x0) || (pCVar10 == g_ActorNameSentinel)) {
        local_e0 = 0;
      }
      else {
        local_e0 = 1;
      }
      *parse_position = *parse_position + local_6c;
    }
    else {
      iVar3 = _stricmp(local_150,"hasItem");
      if (iVar3 == 0) {
        if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
          strcpy(g_EventErrorMessageBuffer, "Can't use hasItem condition in multi-player");
          return -1;
        }
        local_b8 = -1;
        sscanf
                  (expression + *parse_position," (%[^)])%n",acStack_859 + 1,&local_b8);
        if (local_b8 < 3) {
          strcpy(g_EventErrorMessageBuffer, "Error parsing hasItem parameters.");
          return -1;
        }
        pcVar19 = acStack_859 + 1;
        SVar18 = strlen(pcVar19);
        if (0 < (int)SVar18) {
          pcVar4 = pcVar19 + SVar18;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2) == 0) break;
            SVar18 = SVar18 - 1;
            pcVar4 = pcVar4 + -1;
          } while (0 < (int)SVar18);
        }
        pcVar19[SVar18] = '\0';
        local_b0 = acStack_859 + 2;
        while ((g_CharacterClassificationTable[(byte)(acStack_859[1] + 1)] & 2) != 0) {
          memmove(pcVar19,local_b0,SVar18);
          SVar18 = SVar18 - 1;
        }
        local_e0 = 0;
        if ((g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) &&
           (pCVar15 = core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                                (&g_HeroActors[g_LocalHeroIndex]->inventory,acStack_859 + 1),
           pCVar15 != (CDemonActor *)0x0)) {
          local_e0 = 1;
        }
        *parse_position = *parse_position + local_b8;
      }
      else {
        iVar3 = _stricmp(local_150,"hasItemType");
        if (iVar3 == 0) {
          local_ac = -1;
          sscanf
                    (expression + *parse_position," (%[^,], %[^)] )%n",acStack_59d + 1,local_72d + 1,
                     &local_ac);
          if (local_ac < 5) {
            strcpy(g_EventErrorMessageBuffer, "Error parsing hasItemType parameters.");
          }
          else {
            pcVar19 = acStack_59d + 1;
            SVar18 = strlen(pcVar19);
            if (0 < (int)SVar18) {
              pcVar4 = pcVar19 + SVar18;
              do {
                if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2) == 0) break;
                SVar18 = SVar18 - 1;
                pcVar4 = pcVar4 + -1;
              } while (0 < (int)SVar18);
            }
            pcVar19[SVar18] = '\0';
            local_50 = acStack_59d + 2;
            while ((g_CharacterClassificationTable[(byte)(acStack_59d[1] + 1)] & 2) != 0) {
              memmove(pcVar19,local_50,SVar18);
              SVar18 = SVar18 - 1;
            }
            pcVar19 = local_72d + 1;
            SVar18 = strlen(pcVar19);
            if (0 < (int)SVar18) {
              pcVar19 = (local_72d + 1) + SVar18;
              do {
                if ((g_CharacterClassificationTable[(byte)(pcVar19[-1] + 1)] & 2) == 0) break;
                SVar18 = SVar18 - 1;
                pcVar19 = pcVar19 + -1;
              } while (0 < (int)SVar18);
            }
            (local_72d + 1)[SVar18] = '\0';
            local_a8 = local_72d + 2;
            while ((g_CharacterClassificationTable[(byte)(local_72d[1] + 1)] & 2) != 0) {
              memmove(local_72d + 1,local_a8,SVar18);
              SVar18 = SVar18 - 1;
            }
            pCVar8 = (CHero *)core_event_cpp_resolveActorByName_FUN_004aa400
                                        (acStack_59d + 1,g_CHeroClassInfo.name_hash,
                                         g_CHeroClassInfo.class_name);
            if (pCVar8 != (CHero *)0x0) {
              if (pCVar8 == (CHero *)g_ActorNameSentinel) {
                local_e0 = 0;
                *parse_position = *parse_position + local_ac;
              }
              else {
                local_e0 = core_inv_cpp_CInventory_hasItemOfClass_FUN_004fea20
                                     (&pCVar8->inventory,local_72d + 1);
                *parse_position = *parse_position + local_ac;
              }
              goto LAB_004ae5e7;
            }
          }
          return -1;
        }
        iVar3 = _stricmp(local_150,"hasKeyMask");
        if (iVar3 == 0) {
          if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
            strcpy(g_EventErrorMessageBuffer, "Can't use hasKeyMask condition in multi-player");
            return -1;
          }
          local_a4 = -1;
          sscanf
                    (expression + *parse_position," ( %d )%n",&local_a0,&local_a4);
          if (local_a4 < 3) {
            strcpy(g_EventErrorMessageBuffer, "Error parsing hasKeyMask parameters.");
            return -1;
          }
          if (local_a0 == 0) {
            strcpy(g_EventErrorMessageBuffer, "hasKeyMask(0) always returns false!");
            return -1;
          }
          if ((local_a0 - 1 & local_a0) != 0) {
            strcpy(g_EventErrorMessageBuffer, "mask value must be a power of 2.\n(To test for multiple keys, use multiple hasKeyMask() tests)");
            return -1;
          }
          local_e0 = 0;
          if ((g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) &&
             (iVar3 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0
                                (&g_HeroActors[g_LocalHeroIndex]->inventory,local_a0,0), iVar3 != 0)
             ) {
            local_e0 = 1;
          }
          *parse_position = *parse_position + local_a4;
        }
        else {
          iVar3 = _stricmp(local_150,"isBroken");
          if (iVar3 == 0) {
            local_9c = -1;
            sscanf
                      (expression + *parse_position," (%[^)])%n",acStack_27d + 1,&local_9c);
            if (local_9c < 3) {
              strcpy(g_EventErrorMessageBuffer, "Error parsing isBroken parameters.");
            }
            else {
              pcVar19 = acStack_27d + 1;
              SVar18 = strlen(pcVar19);
              if (0 < (int)SVar18) {
                pcVar4 = pcVar19 + SVar18;
                do {
                  if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2) == 0) break;
                  SVar18 = SVar18 - 1;
                  pcVar4 = pcVar4 + -1;
                } while (0 < (int)SVar18);
              }
              pcVar19[SVar18] = '\0';
              local_98 = acStack_27d + 2;
              while ((g_CharacterClassificationTable[(byte)(acStack_27d[1] + 1)] & 2) != 0) {
                memmove(pcVar19,local_98,SVar18);
                SVar18 = SVar18 - 1;
              }
              pCVar9 = (CGlass *)
                       core_event_cpp_resolveActorByName_FUN_004aa400
                                 (acStack_27d + 1,g_CGlassClassInfo.name_hash,
                                  g_CGlassClassInfo.class_name);
              if (pCVar9 != (CGlass *)0x0) {
                if (pCVar9 == (CGlass *)g_ActorNameSentinel) {
                  local_e0 = 0;
                  *parse_position = *parse_position + local_9c;
                }
                else {
                  local_e0 = (uint)(pCVar9->shattered != 0);
                  *parse_position = *parse_position + local_9c;
                }
                goto LAB_004ae5e7;
              }
            }
            return -1;
          }
          iVar3 = _stricmp(local_150,"isCurrentCamera");
          if (iVar3 == 0) {
            local_94 = -1;
            sscanf
                      (expression + *parse_position," ( %[^ )] )%n",local_8bc,&local_94);
            if (local_94 < 3) {
              strcpy(g_EventErrorMessageBuffer, "Error parsing icCurrentCamera parameters.");
              return -1;
            }
            local_e0 = 0;
            if ((-1 < g_CDemonSetPtr->selected_camera_index) &&
               (iVar3 = _stricmp
                                  (g_CDemonSetPtr->cameras[g_CDemonSetPtr->selected_camera_index].
                                   name,local_8bc), iVar3 == 0)) {
              local_e0 = 1;
            }
            *parse_position = *parse_position + local_94;
          }
          else {
            iVar3 = _stricmp(local_150,"isDead");
            if (iVar3 == 0) {
              local_90 = -1;
              sscanf
                        (expression + *parse_position," ( %[^ )] )%n",local_6c8,&local_90);
              if (local_90 < 3) {
                strcpy(g_EventErrorMessageBuffer, "Error parsing isDead parameters.");
              }
              else {
                pCVar11 = (CCharacter *)
                          core_event_cpp_resolveActorByName_FUN_004aa400
                                    (local_6c8,g_CCharacterClassInfo.name_hash,
                                     g_CCharacterClassInfo.class_name);
                if (pCVar11 != (CCharacter *)0x0) {
                  if (pCVar11 == (CCharacter *)g_ActorNameSentinel) {
                    local_e0 = 0;
                    *parse_position = *parse_position + local_90;
                  }
                  else {
                    EVar12 = (*(((pCVar11->base).vtable._uc)->_uc).getDeathState)(pCVar11);
                    local_e0 = (uint)(1 < (int)EVar12);
                    *parse_position = *parse_position + local_90;
                  }
                  goto LAB_004ae5e7;
                }
              }
              return -1;
            }
            iVar3 = _stricmp(local_150,"isFadeFinished");
            if (iVar3 == 0) {
              local_8c = -1;
              sscanf(expression + *parse_position," ( )%n",&local_8c);
              this_ptr_00 = g_CGamePtr;
              if (local_8c < 2) {
                strcpy(g_EventErrorMessageBuffer, "Error parsing isFadeFinished function.");
                return -1;
              }
              *parse_position = *parse_position + local_8c;
              local_e0 = core_game_cpp_CGame_fadeIn_FUN_004e0b90(this_ptr_00);
            }
            else {
              iVar3 = _stricmp(local_150,"isInRange");
              if (iVar3 == 0) {
                local_88 = -1;
                sscanf(expression + *parse_position," ( %n",&local_88)
                ;
                if (local_88 < 1) {
                  strcpy(g_EventErrorMessageBuffer, "Error parsing isInRange parameters.");
                  return -1;
                }
                *parse_position = *parse_position + local_88;
                iVar3 = core_event_cpp_parseVectorLocation_FUN_004aa530
                                  (expression,parse_position,&local_104);
                if (iVar3 < 0) {
                  return -1;
                }
                local_88 = -1;
                sscanf(expression + *parse_position," , %n",&local_88)
                ;
                if (local_88 < 1) {
                  strcpy(g_EventErrorMessageBuffer, "Error parsing isInRange parameters.");
                }
                else {
                  *parse_position = *parse_position + local_88;
                  iVar10 = core_event_cpp_parseVectorLocation_FUN_004aa530
                                     (expression,parse_position,&local_ec);
                  if (-1 < iVar10) {
                    local_88 = -1;
                    sscanf
                              (expression + *parse_position," , %f )%n",local_84,&local_88);
                    if (local_88 < 3) {
                      strcpy(g_EventErrorMessageBuffer, "Error parsing isInRange parameters.");
                      return -1;
                    }
                    *parse_position = *parse_position + local_88;
                    if ((iVar3 == 0) || (iVar10 == 0)) {
                      local_e0 = 0;
                    }
                    else {
                      local_e0 = (uint)(SQRT((local_104.z - local_ec.z) * (local_104.z - local_ec.z)
                                             + (local_104.y - local_ec.y) *
                                               (local_104.y - local_ec.y) +
                                               (local_104.x - local_ec.x) *
                                               (local_104.x - local_ec.x)) <= local_84[0]);
                    }
                    goto LAB_004ae5e7;
                  }
                }
                return -1;
              }
              iVar3 = _stricmp(local_150,"isOfType");
              if (iVar3 == 0) {
                local_70 = -1;
                sscanf
                          (expression + *parse_position," ( %[^ ,] , %[^ )] )%n",acStack_471 + 1,local_665 + 1,
                           &local_70);
                if (local_70 < 3) {
                  strcpy(g_EventErrorMessageBuffer, "Error parsing isOfType parameters.");
                }
                else {
                  pcVar19 = acStack_471 + 1;
                  SVar18 = strlen(pcVar19);
                  if (0 < (int)SVar18) {
                    pcVar4 = pcVar19 + SVar18;
                    do {
                      if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2) == 0) break;
                      SVar18 = SVar18 - 1;
                      pcVar4 = pcVar4 + -1;
                    } while (0 < (int)SVar18);
                  }
                  pcVar19[SVar18] = '\0';
                  local_68 = acStack_471 + 2;
                  while ((g_CharacterClassificationTable[(byte)(acStack_471[1] + 1)] & 2) != 0) {
                    memmove(pcVar19,local_68,SVar18);
                    SVar18 = SVar18 - 1;
                  }
                  pcVar19 = local_665 + 1;
                  SVar18 = strlen(pcVar19);
                  if (0 < (int)SVar18) {
                    pcVar19 = (local_665 + 1) + SVar18;
                    do {
                      if ((g_CharacterClassificationTable[(byte)(pcVar19[-1] + 1)] & 2) == 0) break;
                      SVar18 = SVar18 - 1;
                      pcVar19 = pcVar19 + -1;
                    } while (0 < (int)SVar18);
                  }
                  (local_665 + 1)[SVar18] = '\0';
                  local_64 = local_665 + 2;
                  while ((g_CharacterClassificationTable[(byte)(local_665[1] + 1)] & 2) != 0) {
                    memmove(local_665 + 1,local_64,SVar18);
                    SVar18 = SVar18 - 1;
                  }
                  pCVar15 = core_event_cpp_resolveActorByName_FUN_004aa400
                                      (acStack_471 + 1,g_CDemonActorClassInfo.name_hash,
                                       g_CDemonActorClassInfo.class_name);
                  if (pCVar15 != (CDemonActor *)0x0) {
                    if (pCVar15 == g_ActorNameSentinel) {
                      local_e0 = 0;
                      *parse_position = *parse_position + local_70;
                    }
                    else {
                      local_e0 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar15,local_665 + 1);
                      *parse_position = *parse_position + local_70;
                    }
                    goto LAB_004ae5e7;
                  }
                }
                return -1;
              }
              iVar3 = _stricmp(local_150,"isFacing");
              if (iVar3 == 0) {
                local_60 = -1;
                sscanf
                          (expression + *parse_position," (%[^,], %[^,)]%n",acStack_1b5 + 1,local_4d5 + 1,
                           &local_60);
                if (local_60 < 5) {
                  strcpy(g_EventErrorMessageBuffer, "Error parsing isFacing parameters.");
                  return -1;
                }
                pcVar19 = acStack_1b5 + 1;
                SVar18 = strlen(pcVar19);
                if (0 < (int)SVar18) {
                  pcVar4 = pcVar19 + SVar18;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2) == 0) break;
                    SVar18 = SVar18 - 1;
                    pcVar4 = pcVar4 + -1;
                  } while (0 < (int)SVar18);
                }
                pcVar19[SVar18] = '\0';
                local_5c = acStack_1b5 + 2;
                while ((g_CharacterClassificationTable[(byte)(acStack_1b5[1] + 1)] & 2) != 0) {
                  memmove(pcVar19,local_5c,SVar18);
                  SVar18 = SVar18 - 1;
                }
                pcVar19 = local_4d5 + 1;
                SVar18 = strlen(pcVar19);
                if (0 < (int)SVar18) {
                  pcVar19 = (local_4d5 + 1) + SVar18;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar19[-1] + 1)] & 2) == 0) break;
                    SVar18 = SVar18 - 1;
                    pcVar19 = pcVar19 + -1;
                  } while (0 < (int)SVar18);
                }
                (local_4d5 + 1)[SVar18] = '\0';
                local_58 = local_4d5 + 2;
                while ((g_CharacterClassificationTable[(byte)(local_4d5[1] + 1)] & 2) != 0) {
                  memmove(local_4d5 + 1,local_58,SVar18);
                  SVar18 = SVar18 - 1;
                }
                pCVar15 = core_event_cpp_resolveActorByName_FUN_004aa400
                                    (acStack_1b5 + 1,g_CDemonActorClassInfo.name_hash,
                                     g_CDemonActorClassInfo.class_name);
                if ((pCVar15 == (CDemonActor *)0x0) ||
                   (pCVar13 = core_event_cpp_resolveActorByName_FUN_004aa400
                                        (local_4d5 + 1,g_CDemonActorClassInfo.name_hash,
                                         g_CDemonActorClassInfo.class_name),
                   pCVar13 == (CDemonActor *)0x0)) {
                  return -1;
                }
                *parse_position = *parse_position + local_60;
                local_a88 = 45.0;
                if (expression[*parse_position] == ',') {
                  local_60 = -1;
                  sscanf
                            (expression + *parse_position,",%f %n",&local_a88,&local_60);
                  if (local_60 < 2) {
                    strcpy(g_EventErrorMessageBuffer, "Error parsing isFacing parameters.");
                    return -1;
                  }
                  if (((double)local_a88 < 0.0) || (180 < (double)local_a88)) {
                    strcpy(g_EventErrorMessageBuffer, "isFacing() angle must be in range 0..180.");
                    return -1;
                  }
                  *parse_position = *parse_position + local_60;
                }
                pCVar6 = g_ActorNameSentinel;
                if (expression[*parse_position] != ')') {
                  strcpy(g_EventErrorMessageBuffer, "Error parsing isFacing parameters.");
                  return -1;
                }
                *parse_position = *parse_position + 1;
                if ((pCVar15 == pCVar6) || (pCVar13 == pCVar6)) {
                  local_e0 = 0;
                }
                else {
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            (pCVar15,&local_110,&(pCVar13->location).position);
                  local_110.y = 0.0;
                  pCVar14 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                      (&local_f8,&local_110);
                  if (local_a88 * (float)3.1415926535000001 * (float)0.0055555555555555497 < ABS(pCVar14->y))
                  {
                    local_e0 = 0;
                  }
                  else {
                    local_e0 = 1;
                  }
                }
              }
              else {
                iVar3 = _stricmp(local_150,"isLightOn");
                if (iVar3 == 0) {
                  local_54 = -1;
                  sscanf
                            (expression + *parse_position," ( %[^ )] )%n",local_218,&local_54);
                  if (local_54 < 3) {
                    strcpy(g_EventErrorMessageBuffer, "Error parsing isLightOn parameters.");
                    return -1;
                  }
                  core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10
                            (g_CDemonSetPtr,local_218,&local_4c,&local_48);
                  if (local_4c == (C3DSLight *)0x0) {
                    _sprintf(local_a84,"Spotlight %s doesn't exist.",local_218);
                    strcpy(g_EventErrorMessageBuffer, local_a84);
                    return -1;
                  }
                  local_e0 = (uint)(local_48->light_enabled_flag != 0);
                  *parse_position = *parse_position + local_54;
                }
                else {
                  iVar3 = _stricmp(local_150,"isNudityEnabled");
                  if (iVar3 == 0) {
                    local_44 = -1;
                    sscanf
                              (expression + *parse_position," ( )%n",&local_44);
                    if (local_44 < 2) {
                      strcpy(g_EventErrorMessageBuffer, "Error parsing isNudityEnabled().");
                      return -1;
                    }
                    local_e0 = (uint)(g_CGamePtr->nudity_flag != 0);
                    *parse_position = *parse_position + local_44;
                  }
                  else {
                    iVar3 = _stricmp(local_150,"isSfxActive");
                    if (iVar3 == 0) {
                      local_40 = -1;
                      sscanf
                                (expression + *parse_position," ( %[^ )] )%n",acStack_791 + 1,&local_40
                                );
                      if (local_40 < 3) {
                        strcpy(g_EventErrorMessageBuffer, "Error parsing isSfxActive parameters.");
                        return -1;
                      }
                      pcVar19 = acStack_791 + 1;
                      SVar18 = strlen(pcVar19);
                      if (0 < (int)SVar18) {
                        pcVar4 = pcVar19 + SVar18;
                        do {
                          if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2) == 0)
                          break;
                          SVar18 = SVar18 - 1;
                          pcVar4 = pcVar4 + -1;
                        } while (0 < (int)SVar18);
                      }
                      pcVar19[SVar18] = '\0';
                      local_3c = acStack_791 + 2;
                      while ((g_CharacterClassificationTable[(byte)(acStack_791[1] + 1)] & 2) != 0)
                      {
                        memmove(pcVar19,local_3c,SVar18);
                        SVar18 = SVar18 - 1;
                      }
                      uVar17 = core_event_cpp_CEventList_getSfxHandle_FUN_004b0c40
                                         (this_ptr,acStack_791 + 1);
                      local_e0 = (uint)(uVar17 != 0);
                      *parse_position = *parse_position + local_40;
                    }
                    else {
                      iVar3 = _stricmp(local_150,"isTalking");
                      if (iVar3 == 0) {
                        local_38 = -1;
                        sscanf
                                  (expression + *parse_position," ( %[^ )] )%n",local_538,&local_38);
                        if (local_38 < 3) {
                          strcpy(g_EventErrorMessageBuffer, "Error parsing isTalking parameters.");
                          return -1;
                        }
                        pCVar12 = (CCharacter *)
                                  core_event_cpp_resolveActorByName_FUN_004aa400
                                            (local_538,g_CCharacterClassInfo.name_hash,
                                             g_CCharacterClassInfo.class_name);
                        if (pCVar12 == (CCharacter *)0x0) {
                          return -1;
                        }
                        if (pCVar12 == (CCharacter *)g_ActorNameSentinel) {
                          local_e0 = 0;
                        }
                        else if (pCVar12->speech_timer <= 0.0) {
                          local_e0 = 0;
                        }
                        else {
                          local_e0 = 1;
                        }
                        *parse_position = *parse_position + local_38;
                      }
                      else {
                        iVar3 = _stricmp(local_150,"isVictim");
                        if (iVar3 == 0) {
                          local_34 = -1;
                          sscanf
                                    (expression + *parse_position," ( %[^ )] )%n",local_40c,&local_34);
                          if (local_34 < 3) {
                            strcpy(g_EventErrorMessageBuffer, "Error parsing isVictim parameters.");
                          }
                          else {
                            local_b4 = (CCharacter *)
                                       core_event_cpp_resolveActorByName_FUN_004aa400
                                                 (local_40c,g_CCharacterClassInfo.name_hash,
                                                  g_CCharacterClassInfo.class_name);
                            if (local_b4 != (CCharacter *)0x0) {
                              local_e0 = 0;
                              if (local_b4 != (CCharacter *)g_ActorNameSentinel) {
                                local_30 = &(local_b4->base).location;
                                for (iVar3 = 0; iVar3 < g_CDemonSetPtr->enemy_count;
                                    iVar3 = iVar3 + 1) {
                                  iVar6 = g_CDemonSetPtr->enemies[iVar3];
                                  if ((((local_b4 == iVar6->victim) &&
                                       (EVar16 = (*(((iVar6->base).base.vtable._uc)->_uc).
                                                   getDeathState)(&iVar6->base), (int)EVar16 < 1))
                                      && (iVar10 = (*((iVar6->base).base.vtable._ub)->
                                                     shouldIgnoreForTargeting)((CDemonActor *)iVar6)
                                         , iVar10 == 0)) &&
                                     (fVar3 = (iVar6->base).base.location.position.x -
                                              (local_30->position).x,
                                     fVar5 = (iVar6->base).base.location.position.y -
                                             (local_30->position).y,
                                     fVar4 = (iVar6->base).base.location.position.z -
                                             (local_30->position).z,
                                     SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) <=
                                     (float)30)) {
                                    local_e0 = 1;
                                    break;
                                  }
                                }
                              }
                              *parse_position = *parse_position + local_34;
                              goto LAB_004ae5e7;
                            }
                          }
                          return -1;
                        }
                        iVar3 = _stricmp
                                          (local_150,"isWeaponDrawn");
                        if (iVar3 == 0) {
                          local_20 = -1;
                          sscanf
                                    (expression + *parse_position," ( %[^ )] )%n",local_2e0,&local_20);
                          if (local_20 < 3) {
                            strcpy(g_EventErrorMessageBuffer, "Error parsing isWeaponDrawn parameters.");
                            return -1;
                          }
                          this_ptr_01 = (CHero *)core_event_cpp_resolveActorByName_FUN_004aa400
                                                           (local_2e0,g_CHeroClassInfo.name_hash,
                                                            g_CHeroClassInfo.class_name);
                          if (this_ptr_01 == (CHero *)0x0) {
                            return -1;
                          }
                          if (this_ptr_01 == (CHero *)g_ActorNameSentinel) {
                            local_e0 = 0;
                          }
                          else {
                            local_e0 = (*(((this_ptr_01->base).base.vtable._uh)->_uh).isWeaponDrawn)
                                                 (this_ptr_01);
                          }
                          *parse_position = *parse_position + local_20;
                        }
                        else {
                          iVar3 = _stricmp
                                            (local_150,"isWearingGasMask");
                          if (iVar3 == 0) {
                            local_1c = -1;
                            sscanf
                                      (expression + *parse_position," ( %[^ )] )%n",local_600,&local_1c
                                      );
                            if (local_1c < 3) {
                              strcpy(g_EventErrorMessageBuffer, "Error parsing isWearingGasMask parameters.");
                              return -1;
                            }
                            pCVar7 = (CHero *)core_event_cpp_resolveActorByName_FUN_004aa400
                                                        (local_600,g_CHeroClassInfo.name_hash,
                                                         g_CHeroClassInfo.class_name);
                            if (pCVar7 == (CHero *)0x0) {
                              return -1;
                            }
                            if (pCVar7 == (CHero *)g_ActorNameSentinel) {
                              local_e0 = 0;
                              *parse_position = *parse_position + local_1c;
                            }
                            else {
                              local_e0 = (uint)(pCVar7->is_wearing_gas_mask == 2);
                              *parse_position = *parse_position + local_1c;
                            }
                          }
                          else {
                            iVar3 = _stricmp
                                              (local_150,"randBool");
                            if (iVar3 != 0) {
                              iVar3 = _stricmp
                                                (local_150,"reachedDest");
                              if (iVar3 != 0) {
                                strcpy(g_EventErrorMessageBuffer, "Invalid meta-function");
                                return -1;
                              }
                              local_cc = -1;
                              sscanf
                                        (expression + *parse_position," ( %[^ )] )%n",local_7f4,
                                         &local_cc);
                              if (local_cc < 3) {
                                strcpy(g_EventErrorMessageBuffer, "Error parsing reachedDest parameters.");
                              }
                              else {
                                this_ptr_02 = (CCharacter *)
                                              core_event_cpp_resolveActorByName_FUN_004aa400
                                                        (local_7f4,g_CCharacterClassInfo.name_hash,
                                                         g_CCharacterClassInfo.class_name);
                                if (this_ptr_02 != (CCharacter *)0x0) {
                                  if (this_ptr_02 == (CCharacter *)g_ActorNameSentinel) {
                                    local_e0 = 0;
                                    *parse_position = *parse_position + local_cc;
                                  }
                                  else {
                                    iVar3 = (*(((this_ptr_02->base).vtable._uc)->_uc).isWalkComplete
                                            )(this_ptr_02);
                                    local_e0 = (uint)(iVar3 != 0);
                                    *parse_position = *parse_position + local_cc;
                                  }
                                  goto LAB_004ae5e7;
                                }
                              }
                              return -1;
                            }
                            local_d8 = -1;
                            sscanf
                                      (expression + *parse_position," ( %f )%n",local_18,
                                       &local_d8);
                            if (local_d8 < 3) {
                              strcpy(g_EventErrorMessageBuffer, "Error parsing randBool parameters.");
                              return -1;
                            }
                            local_e0 = core_actor_cpp_randomChance_FUN_0040cd10(local_18[0]);
                            *parse_position = *parse_position + local_d8;
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
    goto LAB_004ae5e7;
  }
  local_dc = -1;
  sscanf
            (expression + *parse_position," ( %s %s %[^ )] )%n",acStack_921 + 1,local_985 + 1,
             local_3a9 + 1,&local_dc);
  if (local_dc < 3) {
    strcpy(g_EventErrorMessageBuffer, "Error parsing cmp parameters.");
    return -1;
  }
  pcVar19 = acStack_921 + 1;
  SVar16 = strlen(pcVar19);
  if (0 < (int)SVar16) {
    pcVar4 = pcVar19 + SVar16;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2) == 0) break;
      SVar16 = SVar16 - 1;
      pcVar4 = pcVar4 + -1;
    } while (0 < (int)SVar16);
  }
  pcVar19[SVar16] = '\0';
  local_d4 = acStack_921 + 2;
  while ((g_CharacterClassificationTable[(byte)(acStack_921[1] + 1)] & 2) != 0) {
    memmove(pcVar19,local_d4,SVar16);
    SVar16 = SVar16 - 1;
  }
  pcVar19 = local_3a9 + 1;
  SVar18 = strlen(pcVar19);
  if (0 < (int)SVar18) {
    pcVar19 = (local_3a9 + 1) + SVar18;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar19[-1] + 1)] & 2) == 0) break;
      SVar18 = SVar18 - 1;
      pcVar19 = pcVar19 + -1;
    } while (0 < (int)SVar18);
  }
  (local_3a9 + 1)[SVar18] = '\0';
  local_d0 = local_3a9 + 2;
  while ((g_CharacterClassificationTable[(byte)(local_3a9[1] + 1)] & 2) != 0) {
    memmove(local_3a9 + 1,local_d0,SVar18);
    SVar18 = SVar18 - 1;
  }
  pcVar19 = local_985 + 1;
  SVar18 = strlen(pcVar19);
  if (0 < (int)SVar18) {
    pcVar19 = (local_985 + 1) + SVar18;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar19[-1] + 1)] & 2) == 0) break;
      SVar18 = SVar18 - 1;
      pcVar19 = pcVar19 + -1;
    } while (0 < (int)SVar18);
  }
  (local_985 + 1)[SVar18] = '\0';
  local_c8 = local_985 + 2;
  while ((g_CharacterClassificationTable[(byte)(local_985[1] + 1)] & 2) != 0) {
    memmove(local_985 + 1,local_c8,SVar18);
    SVar18 = SVar18 - 1;
  }
  iVar8 = _strcmp(local_985 + 1,"<");
  iVar3 = 0;
  if (iVar8 != 0) {
    iVar3 = _strcmp(local_985 + 1,"<=");
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = _strcmp(local_985 + 1,"==");
      if (iVar3 == 0) {
        iVar3 = 2;
      }
      else {
        iVar3 = _strcmp(local_985 + 1,"!=");
        if (iVar3 == 0) {
          iVar3 = 3;
        }
        else {
          iVar3 = _strcmp(local_985 + 1,">");
          if (iVar3 == 0) {
            iVar3 = 5;
          }
          else {
            iVar3 = _strcmp(local_985 + 1,">=");
            if (iVar3 == 0) {
              iVar3 = 4;
            }
            else {
              iVar3 = 6;
            }
          }
        }
      }
    }
  }
  if (iVar3 == 6) {
    strcpy(g_EventErrorMessageBuffer, "Invalid relational operator in cmp statement");
    return -1;
  }
  *parse_position = *parse_position + local_dc;
  iVar9 = sscanf(acStack_921 + 1,"%d",&local_c4);
  iVar10 = local_c4;
  if (iVar9 != 1) {
    iVar10 = core_event_cpp_CEventList_getCounterValue_FUN_004b0830(g_CEventListPtr,acStack_921 + 1)
    ;
  }
  iVar5 = sscanf(local_3a9 + 1,"%d",&local_74);
  if (iVar5 == 1) {
    switch(iVar3) {
    case 0:
switchD_004ae724_caseD_0:
      local_e0 = (uint)(iVar10 < local_74);
      break;
    case 1:
switchD_004ae724_caseD_1:
      local_e0 = (uint)(iVar10 <= local_74);
      break;
    case 2:
switchD_004ae724_caseD_2:
      local_e0 = (uint)(iVar10 == local_74);
      break;
    case 3:
switchD_004ae724_caseD_3:
      local_e0 = (uint)(iVar10 != local_74);
      break;
    case 4:
switchD_004ae724_caseD_4:
      local_e0 = (uint)(local_74 <= iVar10);
      break;
    case 5:
switchD_004ae724_caseD_5:
      local_e0 = (uint)(local_74 < iVar10);
      break;
    default:
switchD_004ae724_default:
      g_CurrentFilename = "..\\core\\event.cpp";
      g_CurrentLineNumber = 1893;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
    }
LAB_004ae5e7:
    while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
    }
    return local_e0;
  }
  local_74 = core_event_cpp_CEventList_getCounterValue_FUN_004b0830(g_CEventListPtr,local_3a9 + 1);
  switch(iVar3) {
  case 0:
    goto switchD_004ae724_caseD_0;
  case 1:
    goto switchD_004ae724_caseD_1;
  case 2:
    goto switchD_004ae724_caseD_2;
  case 3:
    goto switchD_004ae724_caseD_3;
  case 4:
    goto switchD_004ae724_caseD_4;
  case 5:
    goto switchD_004ae724_caseD_5;
  default:
    goto switchD_004ae724_default;
  }
}
