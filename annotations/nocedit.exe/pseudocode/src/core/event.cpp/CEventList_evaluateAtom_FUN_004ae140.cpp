// Name: core_event.cpp_CEventList_evaluateAtom_FUN_004ae140
// Address: 004ae140
// Address Range: [[004ae140, 004b026e]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_004ae140 (CEventList *this_ptr,char *expression,int *parse_position)

#include "nocturne.h"

int __cdecl
core_event_cpp_CEventList_evaluateAtom_FUN_004ae140
          (CEventList *this_ptr,char *expression,int *parse_position)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonActor *pCVar6;
  CGame *this_ptr_00;
  int iVar7;
  int iVar8;
  CDemonActor *pCVar9;
  CCharacter *pCVar10;
  CDemonActor *pCVar11;
  int iVar12;
  CEnemy *this_ptr_01;
  uint uVar13;
  SIZE_T SVar14;
  char *pcVar15;
  char *pcVar16;
  byte bVar17;
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
  byte local_218 [99];
  char acStack_1b5 [101];
  char local_150 [64];
  CVector3f local_110;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  uint local_e0;
  uint local_dc;
  int local_d8;
  char *local_d4;
  char *local_d0;
  int local_cc;
  char *local_c8;
  byte local_c4 [4];
  uint local_c0;
  char *local_bc;
  int local_b8;
  CDemonActor *local_b4;
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
  byte local_84 [16];
  byte local_74 [4];
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
  int local_44;
  int local_40;
  char *local_3c;
  int local_38;
  int local_34;
  CLocation *local_30;
  float *pfStack_2c;
  int local_20;
  int local_1c;
  float local_18 [2];
  
  bVar17 = 0;
  while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
    *parse_position = *parse_position + 1;
  }
  if (expression[*parse_position] == '.') {
    *parse_position = *parse_position + 1;
  }
  bVar2 = expression[*parse_position];
  if (bVar2 == 0) {
    pcVar15 = "Unexpected end of string";
    pcVar16 = g_EventErrorMessageBuffer;
    do {
      cVar1 = *pcVar15;
      *pcVar16 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar16[1] = cVar1;
      pcVar16 = pcVar16 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  if (bVar2 == 0x28) {
    *parse_position = *parse_position + 1;
    iVar7 = core_event_cpp_CEventList_evaluateLogicalExpr_FUN_004b0270
                      (this_ptr,expression,parse_position);
    if (iVar7 < 0) {
      return iVar7;
    }
    if (expression[*parse_position] == ')') {
      *parse_position = *parse_position + 1;
      while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
        *parse_position = *parse_position + 1;
      }
      return iVar7;
    }
    pcVar15 = "Matching ')' is missing";
    pcVar16 = g_EventErrorMessageBuffer;
    do {
      cVar1 = *pcVar15;
      *pcVar16 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar16[1] = cVar1;
      pcVar16 = pcVar16 + 2;
    } while (cVar1 != '\0');
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
  iVar7 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)bVar2);
  if (iVar7 == 0) {
    pcVar15 = "Syntax error";
    pcVar16 = g_EventErrorMessageBuffer;
    do {
      cVar1 = *pcVar15;
      *pcVar16 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar16[1] = cVar1;
      pcVar16 = pcVar16 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  pcVar15 = local_150;
  do {
    *pcVar15 = expression[*parse_position];
    iVar7 = *parse_position;
    *parse_position = iVar7 + 1;
    pcVar15 = pcVar15 + 1;
    iVar7 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)(byte)expression[iVar7 + 1]);
  } while (iVar7 != 0);
  *pcVar15 = '\0';
  if (expression[*parse_position] != '(') {
    while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
    }
    iVar7 = core_event_cpp_CEventList_resolveVariable_FUN_004adc10(this_ptr,local_150);
    return iVar7;
  }
  local_e0 = 0xffffffff;
  iVar7 = stricmp(local_150,"cmp");
  if (iVar7 != 0) {
    iVar7 = stricmp(local_150,"exists");
    if (iVar7 == 0) {
      local_6c = -1;
      sscanf
                (expression + *parse_position," ( %[^ )] )%n",acStack_345 + 1,&local_6c);
      if (local_6c < 3) {
        pcVar15 = "Error parsing exists parameters.";
        pcVar16 = g_EventErrorMessageBuffer;
        do {
          cVar1 = *pcVar15;
          *pcVar16 = cVar1;
          if (cVar1 == '\0') {
            return -1;
          }
          cVar1 = pcVar15[1];
          pcVar15 = pcVar15 + 2;
          pcVar16[1] = cVar1;
          pcVar16 = pcVar16 + 2;
        } while (cVar1 != '\0');
        return -1;
      }
      pcVar15 = acStack_345 + 1;
      uVar13 = 0xffffffff;
      pcVar16 = pcVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar16 + (uint)bVar17 * -2 + 1;
      } while (cVar1 != '\0');
      SVar14 = ~uVar13 - 1;
      if (0 < (int)SVar14) {
        pcVar16 = pcVar15 + SVar14;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
          SVar14 = SVar14 - 1;
          pcVar16 = pcVar16 + -1;
        } while (0 < (int)SVar14);
      }
      pcVar15[SVar14] = '\0';
      local_bc = acStack_345 + 2;
      while ((g_CharacterClassificationTable[(byte)(acStack_345[1] + 1)] & 2) != 0) {
        memmove(pcVar15,local_bc,SVar14);
        SVar14 = SVar14 - 1;
      }
      core_event_cpp_resolveActorByName_FUN_004aa400
                (acStack_345 + 1,g_CDemonActorClassInfo.name_hash,g_CDemonActorClassInfo.class_name)
      ;
      *parse_position = *parse_position + local_6c;
    }
    else {
      iVar7 = stricmp(local_150,"hasItem");
      if (iVar7 == 0) {
        if (g_CNetGamePtr->connection_type != 0) {
          pcVar15 = "Can't use hasItem condition in multi-player";
          pcVar16 = g_EventErrorMessageBuffer;
          do {
            cVar1 = *pcVar15;
            *pcVar16 = cVar1;
            if (cVar1 == '\0') {
              return -1;
            }
            cVar1 = pcVar15[1];
            pcVar15 = pcVar15 + 2;
            pcVar16[1] = cVar1;
            pcVar16 = pcVar16 + 2;
          } while (cVar1 != '\0');
          return -1;
        }
        local_b8 = -1;
        sscanf
                  (expression + *parse_position," (%[^)])%n",acStack_859 + 1,&local_b8);
        if (local_b8 < 3) {
          pcVar15 = "Error parsing hasItem parameters.";
          pcVar16 = g_EventErrorMessageBuffer;
          do {
            cVar1 = *pcVar15;
            *pcVar16 = cVar1;
            if (cVar1 == '\0') {
              return -1;
            }
            cVar1 = pcVar15[1];
            pcVar15 = pcVar15 + 2;
            pcVar16[1] = cVar1;
            pcVar16 = pcVar16 + 2;
          } while (cVar1 != '\0');
          return -1;
        }
        pcVar15 = acStack_859 + 1;
        uVar13 = 0xffffffff;
        pcVar16 = pcVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + (uint)bVar17 * -2 + 1;
        } while (cVar1 != '\0');
        SVar14 = ~uVar13 - 1;
        if (0 < (int)SVar14) {
          pcVar16 = pcVar15 + SVar14;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
            SVar14 = SVar14 - 1;
            pcVar16 = pcVar16 + -1;
          } while (0 < (int)SVar14);
        }
        pcVar15[SVar14] = '\0';
        local_b0 = acStack_859 + 2;
        while ((g_CharacterClassificationTable[(byte)(acStack_859[1] + 1)] & 2) != 0) {
          memmove(pcVar15,local_b0,SVar14);
          SVar14 = SVar14 - 1;
        }
        local_e0 = 0;
        if (g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) {
          core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,acStack_859 + 1);
        }
        *parse_position = *parse_position + local_b8;
      }
      else {
        iVar7 = stricmp(local_150,"hasItemType");
        if (iVar7 == 0) {
          local_ac = -1;
          sscanf
                    (expression + *parse_position," (%[^,], %[^)] )%n",acStack_59d + 1,local_72d + 1,
                     &local_ac);
          if (local_ac < 5) {
            pcVar15 = "Error parsing hasItemType parameters.";
            pcVar16 = g_EventErrorMessageBuffer;
            do {
              cVar1 = *pcVar15;
              *pcVar16 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar15[1];
              pcVar15 = pcVar15 + 2;
              pcVar16[1] = cVar1;
              pcVar16 = pcVar16 + 2;
            } while (cVar1 != '\0');
          }
          else {
            pcVar15 = acStack_59d + 1;
            uVar13 = 0xffffffff;
            pcVar16 = pcVar15;
            do {
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + (uint)bVar17 * -2 + 1;
            } while (cVar1 != '\0');
            SVar14 = ~uVar13 - 1;
            if (0 < (int)SVar14) {
              pcVar16 = pcVar15 + SVar14;
              do {
                if ((g_CharacterClassificationTable[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
                SVar14 = SVar14 - 1;
                pcVar16 = pcVar16 + -1;
              } while (0 < (int)SVar14);
            }
            pcVar15[SVar14] = '\0';
            local_50 = acStack_59d + 2;
            while ((g_CharacterClassificationTable[(byte)(acStack_59d[1] + 1)] & 2) != 0) {
              memmove(pcVar15,local_50,SVar14);
              SVar14 = SVar14 - 1;
            }
            uVar13 = 0xffffffff;
            pcVar15 = local_72d + 1;
            do {
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar15 + (uint)bVar17 * -2 + 1;
            } while (cVar1 != '\0');
            SVar14 = ~uVar13 - 1;
            if (0 < (int)SVar14) {
              pcVar15 = local_72d + ~uVar13;
              do {
                if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
                SVar14 = SVar14 - 1;
                pcVar15 = pcVar15 + -1;
              } while (0 < (int)SVar14);
            }
            (local_72d + 1)[SVar14] = '\0';
            local_a8 = local_72d + 2;
            while ((g_CharacterClassificationTable[(byte)(local_72d[1] + 1)] & 2) != 0) {
              memmove(local_72d + 1,local_a8,SVar14);
              SVar14 = SVar14 - 1;
            }
            pCVar9 = core_event_cpp_resolveActorByName_FUN_004aa400
                               (acStack_59d + 1,g_CHeroClassInfo.name_hash,
                                g_CHeroClassInfo.class_name);
            if (pCVar9 != (CDemonActor *)0x0) {
              if (pCVar9 == g_ActorNameSentinel) {
                *parse_position = *parse_position + local_ac;
              }
              else {
                core_inv_cpp_CInventory_hasItemOfClass_FUN_004fe9d0
                          ((CInventory *)(pCVar9[0x176].create_event + 0x30),local_72d + 1);
                *parse_position = *parse_position + local_ac;
              }
              goto LAB_004ae5e7;
            }
          }
          return -1;
        }
        iVar7 = stricmp(local_150,"hasKeyMask");
        if (iVar7 == 0) {
          if (g_CNetGamePtr->connection_type != 0) {
            pcVar15 = "Can't use hasKeyMask condition in multi-player";
            pcVar16 = g_EventErrorMessageBuffer;
            do {
              cVar1 = *pcVar15;
              *pcVar16 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar15[1];
              pcVar15 = pcVar15 + 2;
              pcVar16[1] = cVar1;
              pcVar16 = pcVar16 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          local_a4 = -1;
          sscanf
                    (expression + *parse_position," ( %d )%n",&local_a0,&local_a4);
          if (local_a4 < 3) {
            pcVar15 = "Error parsing hasKeyMask parameters.";
            pcVar16 = g_EventErrorMessageBuffer;
            do {
              cVar1 = *pcVar15;
              *pcVar16 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar15[1];
              pcVar15 = pcVar15 + 2;
              pcVar16[1] = cVar1;
              pcVar16 = pcVar16 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          if (local_a0 == 0) {
            pcVar15 = "hasKeyMask(0) always returns false!";
            pcVar16 = g_EventErrorMessageBuffer;
            do {
              cVar1 = *pcVar15;
              *pcVar16 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar15[1];
              pcVar15 = pcVar15 + 2;
              pcVar16[1] = cVar1;
              pcVar16 = pcVar16 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          if ((local_a0 - 1 & local_a0) != 0) {
            pcVar15 = "mask value must be a power of 2.\n(To test for multiple keys, use multiple hasKeyMask() tests)";
            pcVar16 = g_EventErrorMessageBuffer;
            do {
              cVar1 = *pcVar15;
              *pcVar16 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar15[1];
              pcVar15 = pcVar15 + 2;
              pcVar16[1] = cVar1;
              pcVar16 = pcVar16 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          local_e0 = 0;
          if (g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) {
            core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0
                      (&g_HeroActors[g_LocalHeroIndex]->inventory,local_a0,0);
          }
          *parse_position = *parse_position + local_a4;
        }
        else {
          iVar7 = stricmp(local_150,"isBroken");
          if (iVar7 == 0) {
            local_9c = -1;
            sscanf
                      (expression + *parse_position," (%[^)])%n",acStack_27d + 1,&local_9c);
            if (local_9c < 3) {
              pcVar15 = "Error parsing isBroken parameters.";
              pcVar16 = g_EventErrorMessageBuffer;
              do {
                cVar1 = *pcVar15;
                *pcVar16 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar15[1];
                pcVar15 = pcVar15 + 2;
                pcVar16[1] = cVar1;
                pcVar16 = pcVar16 + 2;
              } while (cVar1 != '\0');
            }
            else {
              pcVar15 = acStack_27d + 1;
              uVar13 = 0xffffffff;
              pcVar16 = pcVar15;
              do {
                if (uVar13 == 0) break;
                uVar13 = uVar13 - 1;
                cVar1 = *pcVar16;
                pcVar16 = pcVar16 + (uint)bVar17 * -2 + 1;
              } while (cVar1 != '\0');
              SVar14 = ~uVar13 - 1;
              if (0 < (int)SVar14) {
                pcVar16 = pcVar15 + SVar14;
                do {
                  if ((g_CharacterClassificationTable[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
                  SVar14 = SVar14 - 1;
                  pcVar16 = pcVar16 + -1;
                } while (0 < (int)SVar14);
              }
              pcVar15[SVar14] = '\0';
              local_98 = acStack_27d + 2;
              while ((g_CharacterClassificationTable[(byte)(acStack_27d[1] + 1)] & 2) != 0) {
                memmove(pcVar15,local_98,SVar14);
                SVar14 = SVar14 - 1;
              }
              pCVar9 = core_event_cpp_resolveActorByName_FUN_004aa400
                                 (acStack_27d + 1,g_CGlassClassInfo.name_hash,
                                  g_CGlassClassInfo.class_name);
              if (pCVar9 != (CDemonActor *)0x0) {
                if (pCVar9 == g_ActorNameSentinel) {
                  *parse_position = *parse_position + local_9c;
                }
                else {
                  *parse_position = *parse_position + local_9c;
                }
                goto LAB_004ae5e7;
              }
            }
            return -1;
          }
          iVar7 = stricmp(local_150,"isCurrentCamera");
          if (iVar7 == 0) {
            local_94 = -1;
            sscanf
                      (expression + *parse_position," ( %[^ )] )%n",local_8bc,&local_94);
            if (local_94 < 3) {
              pcVar15 = "Error parsing icCurrentCamera parameters.";
              pcVar16 = g_EventErrorMessageBuffer;
              do {
                cVar1 = *pcVar15;
                *pcVar16 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar15[1];
                pcVar15 = pcVar15 + 2;
                pcVar16[1] = cVar1;
                pcVar16 = pcVar16 + 2;
              } while (cVar1 != '\0');
              return -1;
            }
            local_e0 = 0;
            if (-1 < g_CDemonSetPtr->selected_camera_index) {
              stricmp
                        (g_CDemonSetPtr->cameras[g_CDemonSetPtr->selected_camera_index].name,
                         local_8bc);
            }
            *parse_position = *parse_position + local_94;
          }
          else {
            iVar7 = stricmp(local_150,"isDead");
            if (iVar7 == 0) {
              local_90 = -1;
              sscanf
                        (expression + *parse_position," ( %[^ )] )%n",local_6c8,&local_90);
              if (local_90 < 3) {
                pcVar15 = "Error parsing isDead parameters.";
                pcVar16 = g_EventErrorMessageBuffer;
                do {
                  cVar1 = *pcVar15;
                  *pcVar16 = cVar1;
                  if (cVar1 == '\0') {
                    return -1;
                  }
                  cVar1 = pcVar15[1];
                  pcVar15 = pcVar15 + 2;
                  pcVar16[1] = cVar1;
                  pcVar16 = pcVar16 + 2;
                } while (cVar1 != '\0');
              }
              else {
                pCVar10 = (CCharacter *)
                          core_event_cpp_resolveActorByName_FUN_004aa400
                                    (local_6c8,g_CCharacterClassInfo.name_hash,
                                     g_CCharacterClassInfo.class_name);
                if (pCVar10 != (CCharacter *)0x0) {
                  if (pCVar10 == (CCharacter *)g_ActorNameSentinel) {
                    *parse_position = *parse_position + local_90;
                  }
                  else {
                    iVar7 = (*(((pCVar10->base).vtable._uc)->_uc).getDeathState)(pCVar10);
                    local_dc = (uint)(1 < iVar7);
                    *parse_position = *parse_position + local_8c;
                  }
                  goto LAB_004ae5e7;
                }
              }
              return -1;
            }
            iVar7 = stricmp(local_150,"isFadeFinished");
            if (iVar7 == 0) {
              local_8c = -1;
              sscanf(expression + *parse_position," ( )%n",&local_8c);
              this_ptr_00 = g_CGamePtr;
              if (local_8c < 2) {
                pcVar15 = "Error parsing isFadeFinished function.";
                pcVar16 = g_EventErrorMessageBuffer;
                do {
                  cVar1 = *pcVar15;
                  *pcVar16 = cVar1;
                  if (cVar1 == '\0') {
                    return -1;
                  }
                  cVar1 = pcVar15[1];
                  pcVar15 = pcVar15 + 2;
                  pcVar16[1] = cVar1;
                  pcVar16 = pcVar16 + 2;
                } while (cVar1 != '\0');
                return -1;
              }
              *parse_position = *parse_position + local_8c;
              core_game_cpp_CGame_fadeIn_FUN_004e0b90(this_ptr_00);
            }
            else {
              iVar7 = stricmp(local_150,"isInRange");
              if (iVar7 == 0) {
                local_88 = -1;
                sscanf(expression + *parse_position," ( %n",&local_88)
                ;
                if (local_88 < 1) {
                  pcVar15 = "Error parsing isInRange parameters.";
                  pcVar16 = g_EventErrorMessageBuffer;
                  do {
                    cVar1 = *pcVar15;
                    *pcVar16 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar15[1];
                    pcVar15 = pcVar15 + 2;
                    pcVar16[1] = cVar1;
                    pcVar16 = pcVar16 + 2;
                  } while (cVar1 != '\0');
                  return -1;
                }
                *parse_position = *parse_position + local_88;
                iVar7 = core_event_cpp_parseVectorLocation_FUN_004aa530
                                  (expression,parse_position,&local_104);
                if (iVar7 < 0) {
                  return -1;
                }
                local_88 = -1;
                sscanf(expression + *parse_position," , %n",&local_88)
                ;
                if (local_88 < 1) {
                  pcVar15 = "Error parsing isInRange parameters.";
                  pcVar16 = g_EventErrorMessageBuffer;
                  do {
                    cVar1 = *pcVar15;
                    *pcVar16 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar15[1];
                    pcVar15 = pcVar15 + 2;
                    pcVar16[1] = cVar1;
                    pcVar16 = pcVar16 + 2;
                  } while (cVar1 != '\0');
                }
                else {
                  *parse_position = *parse_position + local_88;
                  iVar7 = core_event_cpp_parseVectorLocation_FUN_004aa530
                                    (expression,parse_position,&local_ec);
                  if (-1 < iVar7) {
                    local_88 = -1;
                    sscanf
                              (expression + *parse_position," , %f )%n",local_84,&local_88);
                    if (local_88 < 3) {
                      pcVar15 = "Error parsing isInRange parameters.";
                      pcVar16 = g_EventErrorMessageBuffer;
                      do {
                        cVar1 = *pcVar15;
                        *pcVar16 = cVar1;
                        if (cVar1 == '\0') {
                          return -1;
                        }
                        cVar1 = pcVar15[1];
                        pcVar15 = pcVar15 + 2;
                        pcVar16[1] = cVar1;
                        pcVar16 = pcVar16 + 2;
                      } while (cVar1 != '\0');
                      return -1;
                    }
                    *parse_position = *parse_position + local_88;
                    goto LAB_004ae5e7;
                  }
                }
                return -1;
              }
              iVar7 = stricmp(local_150,"isOfType");
              if (iVar7 == 0) {
                local_70 = -1;
                sscanf
                          (expression + *parse_position," ( %[^ ,] , %[^ )] )%n",acStack_471 + 1,local_665 + 1,
                           &local_70);
                if (local_70 < 3) {
                  pcVar15 = "Error parsing isOfType parameters.";
                  pcVar16 = g_EventErrorMessageBuffer;
                  do {
                    cVar1 = *pcVar15;
                    *pcVar16 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar15[1];
                    pcVar15 = pcVar15 + 2;
                    pcVar16[1] = cVar1;
                    pcVar16 = pcVar16 + 2;
                  } while (cVar1 != '\0');
                }
                else {
                  pcVar15 = acStack_471 + 1;
                  uVar13 = 0xffffffff;
                  pcVar16 = pcVar15;
                  do {
                    if (uVar13 == 0) break;
                    uVar13 = uVar13 - 1;
                    cVar1 = *pcVar16;
                    pcVar16 = pcVar16 + (uint)bVar17 * -2 + 1;
                  } while (cVar1 != '\0');
                  SVar14 = ~uVar13 - 1;
                  if (0 < (int)SVar14) {
                    pcVar16 = pcVar15 + SVar14;
                    do {
                      if ((g_CharacterClassificationTable[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
                      SVar14 = SVar14 - 1;
                      pcVar16 = pcVar16 + -1;
                    } while (0 < (int)SVar14);
                  }
                  pcVar15[SVar14] = '\0';
                  local_68 = acStack_471 + 2;
                  while ((g_CharacterClassificationTable[(byte)(acStack_471[1] + 1)] & 2) != 0) {
                    memmove(pcVar15,local_68,SVar14);
                    SVar14 = SVar14 - 1;
                  }
                  uVar13 = 0xffffffff;
                  pcVar15 = local_665 + 1;
                  do {
                    if (uVar13 == 0) break;
                    uVar13 = uVar13 - 1;
                    cVar1 = *pcVar15;
                    pcVar15 = pcVar15 + (uint)bVar17 * -2 + 1;
                  } while (cVar1 != '\0');
                  SVar14 = ~uVar13 - 1;
                  if (0 < (int)SVar14) {
                    pcVar15 = local_665 + ~uVar13;
                    do {
                      if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
                      SVar14 = SVar14 - 1;
                      pcVar15 = pcVar15 + -1;
                    } while (0 < (int)SVar14);
                  }
                  (local_665 + 1)[SVar14] = '\0';
                  local_64 = local_665 + 2;
                  while ((g_CharacterClassificationTable[(byte)(local_665[1] + 1)] & 2) != 0) {
                    memmove(local_665 + 1,local_64,SVar14);
                    SVar14 = SVar14 - 1;
                  }
                  pCVar9 = core_event_cpp_resolveActorByName_FUN_004aa400
                                     (acStack_471 + 1,g_CDemonActorClassInfo.name_hash,
                                      g_CDemonActorClassInfo.class_name);
                  if (pCVar9 != (CDemonActor *)0x0) {
                    if (pCVar9 == g_ActorNameSentinel) {
                      *parse_position = *parse_position + local_70;
                    }
                    else {
                      core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar9,local_665 + 1);
                      *parse_position = *parse_position + local_70;
                    }
                    goto LAB_004ae5e7;
                  }
                }
                return -1;
              }
              iVar7 = stricmp(local_150,"isFacing");
              if (iVar7 == 0) {
                local_60 = -1;
                sscanf
                          (expression + *parse_position," (%[^,], %[^,)]%n",acStack_1b5 + 1,local_4d5 + 1,
                           &local_60);
                if (local_60 < 5) {
                  pcVar15 = "Error parsing isFacing parameters.";
                  pcVar16 = g_EventErrorMessageBuffer;
                  do {
                    cVar1 = *pcVar15;
                    *pcVar16 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar15[1];
                    pcVar15 = pcVar15 + 2;
                    pcVar16[1] = cVar1;
                    pcVar16 = pcVar16 + 2;
                  } while (cVar1 != '\0');
                  return -1;
                }
                pcVar15 = acStack_1b5 + 1;
                uVar13 = 0xffffffff;
                pcVar16 = pcVar15;
                do {
                  if (uVar13 == 0) break;
                  uVar13 = uVar13 - 1;
                  cVar1 = *pcVar16;
                  pcVar16 = pcVar16 + (uint)bVar17 * -2 + 1;
                } while (cVar1 != '\0');
                SVar14 = ~uVar13 - 1;
                if (0 < (int)SVar14) {
                  pcVar16 = pcVar15 + SVar14;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
                    SVar14 = SVar14 - 1;
                    pcVar16 = pcVar16 + -1;
                  } while (0 < (int)SVar14);
                }
                pcVar15[SVar14] = '\0';
                local_5c = acStack_1b5 + 2;
                while ((g_CharacterClassificationTable[(byte)(acStack_1b5[1] + 1)] & 2) != 0) {
                  memmove(pcVar15,local_5c,SVar14);
                  SVar14 = SVar14 - 1;
                }
                uVar13 = 0xffffffff;
                pcVar15 = local_4d5 + 1;
                do {
                  if (uVar13 == 0) break;
                  uVar13 = uVar13 - 1;
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar15 + (uint)bVar17 * -2 + 1;
                } while (cVar1 != '\0');
                SVar14 = ~uVar13 - 1;
                if (0 < (int)SVar14) {
                  pcVar15 = local_4d5 + ~uVar13;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
                    SVar14 = SVar14 - 1;
                    pcVar15 = pcVar15 + -1;
                  } while (0 < (int)SVar14);
                }
                (local_4d5 + 1)[SVar14] = '\0';
                local_58 = local_4d5 + 2;
                while ((g_CharacterClassificationTable[(byte)(local_4d5[1] + 1)] & 2) != 0) {
                  memmove(local_4d5 + 1,local_58,SVar14);
                  SVar14 = SVar14 - 1;
                }
                pCVar9 = core_event_cpp_resolveActorByName_FUN_004aa400
                                   (acStack_1b5 + 1,g_CDemonActorClassInfo.name_hash,
                                    g_CDemonActorClassInfo.class_name);
                if ((pCVar9 == (CDemonActor *)0x0) ||
                   (pCVar11 = core_event_cpp_resolveActorByName_FUN_004aa400
                                        (local_4d5 + 1,g_CDemonActorClassInfo.name_hash,
                                         g_CDemonActorClassInfo.class_name),
                   pCVar11 == (CDemonActor *)0x0)) {
                  return -1;
                }
                *parse_position = *parse_position + local_60;
                local_a88 = 45.0;
                if (expression[*parse_position] == ',') {
                  local_60 = -1;
                  sscanf
                            (expression + *parse_position,",%f %n",&local_a88,&local_60);
                  if (local_60 < 2) {
                    pcVar15 = "Error parsing isFacing parameters.";
                    pcVar16 = g_EventErrorMessageBuffer;
                    do {
                      cVar1 = *pcVar15;
                      *pcVar16 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar15[1];
                      pcVar15 = pcVar15 + 2;
                      pcVar16[1] = cVar1;
                      pcVar16 = pcVar16 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  if (((double)local_a88 < 0.0) || (180 < (double)local_a88)) {
                    pcVar15 = "isFacing() angle must be in range 0..180.";
                    pcVar16 = g_EventErrorMessageBuffer;
                    do {
                      cVar1 = *pcVar15;
                      *pcVar16 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar15[1];
                      pcVar15 = pcVar15 + 2;
                      pcVar16[1] = cVar1;
                      pcVar16 = pcVar16 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  *parse_position = *parse_position + local_60;
                }
                pCVar6 = g_ActorNameSentinel;
                if (expression[*parse_position] != ')') {
                  pcVar15 = "Error parsing isFacing parameters.";
                  pcVar16 = g_EventErrorMessageBuffer;
                  do {
                    cVar1 = *pcVar15;
                    *pcVar16 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar15[1];
                    pcVar15 = pcVar15 + 2;
                    pcVar16[1] = cVar1;
                    pcVar16 = pcVar16 + 2;
                  } while (cVar1 != '\0');
                  return -1;
                }
                *parse_position = *parse_position + 1;
                if ((pCVar9 != pCVar6) && (pCVar11 != pCVar6)) {
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            (pCVar9,&local_110,&(pCVar11->location).position);
                  local_110.y = 0.0;
                  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (&local_f8,&local_110);
                }
              }
              else {
                iVar7 = stricmp(local_150,"isLightOn");
                if (iVar7 == 0) {
                  local_54 = -1;
                  sscanf
                            (expression + *parse_position," ( %[^ )] )%n",local_218,&local_54);
                  if (local_54 < 3) {
                    pcVar15 = "Error parsing isLightOn parameters.";
                    pcVar16 = g_EventErrorMessageBuffer;
                    do {
                      cVar1 = *pcVar15;
                      *pcVar16 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar15[1];
                      pcVar15 = pcVar15 + 2;
                      pcVar16[1] = cVar1;
                      pcVar16 = pcVar16 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10(g_CDemonSetPtr);
                  if (local_4c == 0) {
                    _sprintf
                              (local_a84,"Spotlight %s doesn't exist.",local_218);
                    pcVar15 = local_a84;
                    pcVar16 = g_EventErrorMessageBuffer;
                    do {
                      cVar1 = *pcVar15;
                      *pcVar16 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar15[1];
                      pcVar15 = pcVar15 + 2;
                      pcVar16[1] = cVar1;
                      pcVar16 = pcVar16 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  *parse_position = *parse_position + local_54;
                }
                else {
                  iVar7 = stricmp(local_150,"isNudityEnabled");
                  if (iVar7 == 0) {
                    local_44 = -1;
                    sscanf
                              (expression + *parse_position," ( )%n",&local_44);
                    if (local_44 < 2) {
                      pcVar15 = "Error parsing isNudityEnabled().";
                      pcVar16 = g_EventErrorMessageBuffer;
                      do {
                        cVar1 = *pcVar15;
                        *pcVar16 = cVar1;
                        if (cVar1 == '\0') {
                          return -1;
                        }
                        cVar1 = pcVar15[1];
                        pcVar15 = pcVar15 + 2;
                        pcVar16[1] = cVar1;
                        pcVar16 = pcVar16 + 2;
                      } while (cVar1 != '\0');
                      return -1;
                    }
                    *parse_position = *parse_position + local_44;
                  }
                  else {
                    iVar7 = stricmp(local_150,"isSfxActive");
                    if (iVar7 == 0) {
                      local_40 = -1;
                      sscanf
                                (expression + *parse_position," ( %[^ )] )%n",acStack_791 + 1,&local_40
                                );
                      if (local_40 < 3) {
                        pcVar15 = "Error parsing isSfxActive parameters.";
                        pcVar16 = g_EventErrorMessageBuffer;
                        do {
                          cVar1 = *pcVar15;
                          *pcVar16 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar15[1];
                          pcVar15 = pcVar15 + 2;
                          pcVar16[1] = cVar1;
                          pcVar16 = pcVar16 + 2;
                        } while (cVar1 != '\0');
                        return -1;
                      }
                      pcVar15 = acStack_791 + 1;
                      uVar13 = 0xffffffff;
                      pcVar16 = pcVar15;
                      do {
                        if (uVar13 == 0) break;
                        uVar13 = uVar13 - 1;
                        cVar1 = *pcVar16;
                        pcVar16 = pcVar16 + (uint)bVar17 * -2 + 1;
                      } while (cVar1 != '\0');
                      SVar14 = ~uVar13 - 1;
                      if (0 < (int)SVar14) {
                        pcVar16 = pcVar15 + SVar14;
                        do {
                          if ((g_CharacterClassificationTable[(byte)(pcVar16[-1] + 1)] & 2) == 0)
                          break;
                          SVar14 = SVar14 - 1;
                          pcVar16 = pcVar16 + -1;
                        } while (0 < (int)SVar14);
                      }
                      pcVar15[SVar14] = '\0';
                      local_3c = acStack_791 + 2;
                      while ((g_CharacterClassificationTable[(byte)(acStack_791[1] + 1)] & 2) != 0)
                      {
                        memmove(pcVar15,local_3c,SVar14);
                        SVar14 = SVar14 - 1;
                      }
                      local_e0 = 0;
                      core_event_cpp_CEventList_getSfxHandle_FUN_004b0c40(this_ptr,acStack_791 + 1);
                      *parse_position = *parse_position + local_40;
                    }
                    else {
                      iVar7 = stricmp(local_150,"isTalking");
                      if (iVar7 == 0) {
                        local_38 = -1;
                        sscanf
                                  (expression + *parse_position," ( %[^ )] )%n",local_538,&local_38);
                        if (local_38 < 3) {
                          pcVar15 = "Error parsing isTalking parameters.";
                          pcVar16 = g_EventErrorMessageBuffer;
                          do {
                            cVar1 = *pcVar15;
                            *pcVar16 = cVar1;
                            if (cVar1 == '\0') {
                              return -1;
                            }
                            cVar1 = pcVar15[1];
                            pcVar15 = pcVar15 + 2;
                            pcVar16[1] = cVar1;
                            pcVar16 = pcVar16 + 2;
                          } while (cVar1 != '\0');
                          return -1;
                        }
                        pCVar9 = core_event_cpp_resolveActorByName_FUN_004aa400
                                           (local_538,g_CCharacterClassInfo.name_hash,
                                            g_CCharacterClassInfo.class_name);
                        if (pCVar9 == (CDemonActor *)0x0) {
                          return -1;
                        }
                        *parse_position = *parse_position + local_38;
                      }
                      else {
                        iVar7 = stricmp(local_150,"isVictim");
                        if (iVar7 == 0) {
                          local_34 = -1;
                          sscanf
                                    (expression + *parse_position," ( %[^ )] )%n",local_40c,&local_34);
                          if (local_34 < 3) {
                            pcVar15 = "Error parsing isVictim parameters.";
                            pcVar16 = g_EventErrorMessageBuffer;
                            do {
                              cVar1 = *pcVar15;
                              *pcVar16 = cVar1;
                              if (cVar1 == '\0') {
                                return -1;
                              }
                              cVar1 = pcVar15[1];
                              pcVar15 = pcVar15 + 2;
                              pcVar16[1] = cVar1;
                              pcVar16 = pcVar16 + 2;
                            } while (cVar1 != '\0');
                          }
                          else {
                            local_b4 = core_event_cpp_resolveActorByName_FUN_004aa400
                                                 (local_40c,g_CCharacterClassInfo.name_hash,
                                                  g_CCharacterClassInfo.class_name);
                            if (local_b4 != (CDemonActor *)0x0) {
                              local_e0 = 0;
                              if (local_b4 != g_ActorNameSentinel) {
                                local_30 = &local_b4->location;
                                local_c0 = 0;
                                for (iVar7 = 0; iVar7 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c);
                                    iVar7 = iVar7 + 1) {
                                  iVar8 = *(int *)(g_CDemonSetPtr->unk4 + (int)local_bc + 8000);
                                  if ((((local_b0 == (char *)*(int *)(iVar8 + 0xbe3c)) &&
                                       (iVar12 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x120))(),
                                       iVar12 < 1)) &&
                                      (iVar12 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x68))(),
                                      iVar12 == 0)) &&
                                     (fVar3 = *(float *)(iVar8 + 0x20) - *pfStack_2c,
                                     fVar5 = *(float *)(iVar8 + 0x24) - pfStack_2c[1],
                                     fVar4 = *(float *)(iVar8 + 0x28) - pfStack_2c[2],
                                     SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) <=
                                     (float)30)) {
                                    local_dc = 1;
                                    break;
                                  }
                                  local_bc = (char *)((int)local_bc + 4);
                                }
                              }
                              *parse_position = (int)&(local_30->position).x + *parse_position;
                              goto LAB_004ae5e7;
                            }
                          }
                          return -1;
                        }
                        iVar7 = stricmp
                                          (local_150,"isWeaponDrawn");
                        if (iVar7 == 0) {
                          local_20 = -1;
                          sscanf
                                    (expression + *parse_position," ( %[^ )] )%n",local_2e0,&local_20);
                          if (local_20 < 3) {
                            pcVar15 = "Error parsing isWeaponDrawn parameters.";
                            pcVar16 = g_EventErrorMessageBuffer;
                            do {
                              cVar1 = *pcVar15;
                              *pcVar16 = cVar1;
                              if (cVar1 == '\0') {
                                return -1;
                              }
                              cVar1 = pcVar15[1];
                              pcVar15 = pcVar15 + 2;
                              pcVar16[1] = cVar1;
                              pcVar16 = pcVar16 + 2;
                            } while (cVar1 != '\0');
                            return -1;
                          }
                          this_ptr_01 = (CEnemy *)
                                        core_event_cpp_resolveActorByName_FUN_004aa400
                                                  (local_2e0,g_CHeroClassInfo.name_hash,
                                                   g_CHeroClassInfo.class_name);
                          if (this_ptr_01 == (CEnemy *)0x0) {
                            return -1;
                          }
                          if (this_ptr_01 == (CEnemy *)g_ActorNameSentinel) {
                            local_dc = (uint)this_ptr_01 ^ (uint)g_ActorNameSentinel;
                          }
                          else {
                            local_dc = (*(((this_ptr_01->base).base.vtable._ue)->_ue).randomize)
                                                 (this_ptr_01);
                          }
                          *parse_position = *parse_position + local_1c;
                        }
                        else {
                          iVar7 = stricmp
                                            (local_150,"isWearingGasMask");
                          if (iVar7 == 0) {
                            local_1c = -1;
                            sscanf
                                      (expression + *parse_position," ( %[^ )] )%n",local_600,&local_1c
                                      );
                            if (local_1c < 3) {
                              pcVar15 = "Error parsing isWearingGasMask parameters.";
                              pcVar16 = g_EventErrorMessageBuffer;
                              do {
                                cVar1 = *pcVar15;
                                *pcVar16 = cVar1;
                                if (cVar1 == '\0') {
                                  return -1;
                                }
                                cVar1 = pcVar15[1];
                                pcVar15 = pcVar15 + 2;
                                pcVar16[1] = cVar1;
                                pcVar16 = pcVar16 + 2;
                              } while (cVar1 != '\0');
                              return -1;
                            }
                            pCVar9 = core_event_cpp_resolveActorByName_FUN_004aa400
                                               (local_600,g_CHeroClassInfo.name_hash,
                                                g_CHeroClassInfo.class_name);
                            if (pCVar9 == (CDemonActor *)0x0) {
                              return -1;
                            }
                            if (pCVar9 == g_ActorNameSentinel) {
                              *parse_position = *parse_position + local_1c;
                            }
                            else {
                              *parse_position = *parse_position + local_1c;
                            }
                          }
                          else {
                            iVar7 = stricmp(local_150,"randBool")
                            ;
                            if (iVar7 != 0) {
                              iVar7 = stricmp
                                                (local_150,"reachedDest");
                              if (iVar7 != 0) {
                                pcVar15 = "Invalid meta-function";
                                pcVar16 = g_EventErrorMessageBuffer;
                                do {
                                  cVar1 = *pcVar15;
                                  *pcVar16 = cVar1;
                                  if (cVar1 == '\0') {
                                    return -1;
                                  }
                                  cVar1 = pcVar15[1];
                                  pcVar15 = pcVar15 + 2;
                                  pcVar16[1] = cVar1;
                                  pcVar16 = pcVar16 + 2;
                                } while (cVar1 != '\0');
                                return -1;
                              }
                              local_cc = -1;
                              sscanf
                                        (expression + *parse_position," ( %[^ )] )%n",local_7f4,
                                         &local_cc);
                              if (local_cc < 3) {
                                pcVar15 = "Error parsing reachedDest parameters.";
                                pcVar16 = g_EventErrorMessageBuffer;
                                do {
                                  cVar1 = *pcVar15;
                                  *pcVar16 = cVar1;
                                  if (cVar1 == '\0') {
                                    return -1;
                                  }
                                  cVar1 = pcVar15[1];
                                  pcVar15 = pcVar15 + 2;
                                  pcVar16[1] = cVar1;
                                  pcVar16 = pcVar16 + 2;
                                } while (cVar1 != '\0');
                              }
                              else {
                                pCVar10 = (CCharacter *)
                                          core_event_cpp_resolveActorByName_FUN_004aa400
                                                    (local_7f4,g_CCharacterClassInfo.name_hash,
                                                     g_CCharacterClassInfo.class_name);
                                if (pCVar10 != (CCharacter *)0x0) {
                                  if (pCVar10 == (CCharacter *)g_ActorNameSentinel) {
                                    *parse_position = *parse_position + local_cc;
                                  }
                                  else {
                                    iVar7 = (*(((pCVar10->base).vtable._uc)->_uc).isWalkComplete)
                                                      (pCVar10);
                                    local_dc = (uint)(iVar7 != 0);
                                    *parse_position = *parse_position + (int)local_c8;
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
                              pcVar15 = "Error parsing randBool parameters.";
                              pcVar16 = g_EventErrorMessageBuffer;
                              do {
                                cVar1 = *pcVar15;
                                *pcVar16 = cVar1;
                                if (cVar1 == '\0') {
                                  return -1;
                                }
                                cVar1 = pcVar15[1];
                                pcVar15 = pcVar15 + 2;
                                pcVar16[1] = cVar1;
                                pcVar16 = pcVar16 + 2;
                              } while (cVar1 != '\0');
                              return -1;
                            }
                            core_actor_cpp_randomChance_FUN_0040cd10(local_18[0]);
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
  local_dc = 0xffffffff;
  sscanf
            (expression + *parse_position," ( %s %s %[^ )] )%n",acStack_921 + 1,local_985 + 1,
             local_3a9 + 1,&local_dc);
  if ((int)local_dc < 3) {
    pcVar15 = "Error parsing cmp parameters.";
    pcVar16 = g_EventErrorMessageBuffer;
    do {
      cVar1 = *pcVar15;
      *pcVar16 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar16[1] = cVar1;
      pcVar16 = pcVar16 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  pcVar15 = acStack_921 + 1;
  uVar13 = 0xffffffff;
  pcVar16 = pcVar15;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar16 + (uint)bVar17 * -2 + 1;
  } while (cVar1 != '\0');
  SVar14 = ~uVar13 - 1;
  if (0 < (int)SVar14) {
    pcVar16 = pcVar15 + SVar14;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
      SVar14 = SVar14 - 1;
      pcVar16 = pcVar16 + -1;
    } while (0 < (int)SVar14);
  }
  pcVar15[SVar14] = '\0';
  local_d4 = acStack_921 + 2;
  while ((g_CharacterClassificationTable[(byte)(acStack_921[1] + 1)] & 2) != 0) {
    memmove(pcVar15,local_d4,SVar14);
    SVar14 = SVar14 - 1;
  }
  uVar13 = 0xffffffff;
  pcVar15 = local_3a9 + 1;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar15 + (uint)bVar17 * -2 + 1;
  } while (cVar1 != '\0');
  SVar14 = ~uVar13 - 1;
  if (0 < (int)SVar14) {
    pcVar15 = local_3a9 + ~uVar13;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
      SVar14 = SVar14 - 1;
      pcVar15 = pcVar15 + -1;
    } while (0 < (int)SVar14);
  }
  (local_3a9 + 1)[SVar14] = '\0';
  local_d0 = local_3a9 + 2;
  while ((g_CharacterClassificationTable[(byte)(local_3a9[1] + 1)] & 2) != 0) {
    memmove(local_3a9 + 1,local_d0,SVar14);
    SVar14 = SVar14 - 1;
  }
  uVar13 = 0xffffffff;
  pcVar15 = local_985 + 1;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar15 + (uint)bVar17 * -2 + 1;
  } while (cVar1 != '\0');
  SVar14 = ~uVar13 - 1;
  if (0 < (int)SVar14) {
    pcVar15 = local_985 + ~uVar13;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
      SVar14 = SVar14 - 1;
      pcVar15 = pcVar15 + -1;
    } while (0 < (int)SVar14);
  }
  (local_985 + 1)[SVar14] = '\0';
  local_c8 = local_985 + 2;
  while ((g_CharacterClassificationTable[(byte)(local_985[1] + 1)] & 2) != 0) {
    memmove(local_985 + 1,local_c8,SVar14);
    SVar14 = SVar14 - 1;
  }
  iVar8 = strcmp(local_985 + 1,"<");
  iVar7 = 0;
  if (iVar8 != 0) {
    iVar7 = strcmp(local_985 + 1,"<=");
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = strcmp(local_985 + 1,"==");
      if (iVar7 == 0) {
        iVar7 = 2;
      }
      else {
        iVar7 = strcmp(local_985 + 1,"!=");
        if (iVar7 == 0) {
          iVar7 = 3;
        }
        else {
          iVar7 = strcmp(local_985 + 1,">");
          if (iVar7 == 0) {
            iVar7 = 5;
          }
          else {
            iVar7 = strcmp(local_985 + 1,">=");
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
    pcVar15 = "Invalid relational operator in cmp statement";
    pcVar16 = g_EventErrorMessageBuffer;
    do {
      cVar1 = *pcVar15;
      *pcVar16 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar16[1] = cVar1;
      pcVar16 = pcVar16 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  *parse_position = *parse_position + local_dc;
  iVar8 = sscanf(acStack_921 + 1,"%d",local_c4);
  if (iVar8 != 1) {
    core_event_cpp_CEventList_getCounterValue_FUN_004b0830(g_CEventListPtr,acStack_921 + 1);
  }
  iVar8 = sscanf(local_3a9 + 1,"%d",local_74);
  if (iVar8 == 1) {
    switch(iVar7) {
    case 0:
switchD_004ae724_caseD_0:
      break;
    case 1:
switchD_004ae724_caseD_1:
      break;
    case 2:
switchD_004ae724_caseD_2:
      break;
    case 3:
switchD_004ae724_caseD_3:
      break;
    case 4:
switchD_004ae724_caseD_4:
      break;
    case 5:
switchD_004ae724_caseD_5:
      break;
    default:
switchD_004ae724_default:
      g_CurrentFilename = "..\\core\\event.cpp";
      g_CurrentLineNumber = 0x765;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
    }
LAB_004ae5e7:
    while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
    }
    return local_dc;
  }
  core_event_cpp_CEventList_getCounterValue_FUN_004b0830(g_CEventListPtr,local_3a9 + 1);
  switch(iVar7) {
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
