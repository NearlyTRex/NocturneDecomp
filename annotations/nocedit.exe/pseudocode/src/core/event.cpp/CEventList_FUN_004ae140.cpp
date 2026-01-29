// Name: core_event.cpp_CEventList_FUN_004ae140
// Address: 004ae140
// Address Range: [[004ae140, 004b026e]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_FUN_004ae140(CEventList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004ae140(CEventList *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  CGame *this_ptr_00;
  int iVar6;
  int iVar7;
  CDemonActor *pCVar8;
  CCharacter *this_ptr_01;
  CDemonActor *pCVar9;
  int iVar10;
  uint uVar11;
  SIZE_T SVar12;
  char *pcVar13;
  char *pcVar14;
  byte bVar15;
  int in_stack_00000008;
  int *in_stack_0000000c;
  float local_a88;
  char local_a84 [255];
  char local_985 [100];
  char acStack_921 [101];
  char local_8bc [99];
  char acStack_859 [101];
  byte local_7f4 [99];
  char acStack_791 [100];
  char local_72d [101];
  byte local_6c8 [99];
  char local_665 [101];
  byte local_600 [99];
  char acStack_59d [101];
  byte local_538 [99];
  char local_4d5 [100];
  char acStack_471 [101];
  byte local_40c [99];
  char local_3a9 [100];
  char acStack_345 [101];
  byte local_2e0 [99];
  char acStack_27d [101];
  byte local_218 [99];
  char acStack_1b5 [101];
  char local_150 [64];
  CVector3f local_110 [2];
  CVector3f local_f8 [2];
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
  
  bVar15 = 0;
  while ((g_CharacterClassificationTable
          [(byte)(*(char *)(in_stack_00000008 + *in_stack_0000000c) + 1)] & 2U) != 0) {
    *in_stack_0000000c = *in_stack_0000000c + 1;
  }
  if (*(char *)(in_stack_00000008 + *in_stack_0000000c) == '.') {
    *in_stack_0000000c = *in_stack_0000000c + 1;
  }
  cVar1 = *(char *)(in_stack_00000008 + *in_stack_0000000c);
  if (cVar1 == '\0') {
    pcVar13 = "Unexpected end of string";
    pcVar14 = &DAT_02d0a460;
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  if (cVar1 == '(') {
    *in_stack_0000000c = *in_stack_0000000c + 1;
    iVar6 = core_event_cpp_CEventList_FUN_004b0270(this_ptr);
    if (iVar6 < 0) {
      return iVar6;
    }
    if (*(char *)(in_stack_00000008 + *in_stack_0000000c) == ')') {
      *in_stack_0000000c = *in_stack_0000000c + 1;
      while ((g_CharacterClassificationTable
              [(byte)(*(char *)(*in_stack_0000000c + in_stack_00000008) + 1)] & 2U) != 0) {
        *in_stack_0000000c = *in_stack_0000000c + 1;
      }
      return iVar6;
    }
    pcVar13 = "Matching ')' is missing";
    pcVar14 = &DAT_02d0a460;
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  if (cVar1 == '!') {
    *in_stack_0000000c = *in_stack_0000000c + 1;
    iVar6 = core_event_cpp_CEventList_FUN_004ae140(this_ptr);
    if (-1 < iVar6) {
      return (uint)(iVar6 == 0);
    }
    return iVar6;
  }
  iVar6 = core_event_cpp_FUN_004b0f90();
  if (iVar6 == 0) {
    pcVar13 = "Syntax error";
    pcVar14 = &DAT_02d0a460;
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  pcVar13 = local_150;
  do {
    *pcVar13 = *(char *)(in_stack_00000008 + *in_stack_0000000c);
    *in_stack_0000000c = *in_stack_0000000c + 1;
    pcVar13 = pcVar13 + 1;
    iVar6 = core_event_cpp_FUN_004b0f90();
  } while (iVar6 != 0);
  *pcVar13 = '\0';
  if (*(char *)(in_stack_00000008 + *in_stack_0000000c) != '(') {
    while ((g_CharacterClassificationTable
            [(byte)(*(char *)(*in_stack_0000000c + in_stack_00000008) + 1)] & 2U) != 0) {
      *in_stack_0000000c = *in_stack_0000000c + 1;
    }
    iVar6 = core_event_cpp_CEventList_FUN_004adc10(this_ptr,local_150);
    return iVar6;
  }
  local_e0 = 0xffffffff;
  iVar6 = stricmp(local_150,"cmp");
  if (iVar6 != 0) {
    iVar6 = stricmp(local_150,"exists");
    if (iVar6 == 0) {
      local_6c = -1;
      sscanf
                ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",acStack_345 + 1,
                 &local_6c);
      if (local_6c < 3) {
        pcVar13 = "Error parsing exists parameters.";
        pcVar14 = &DAT_02d0a460;
        do {
          cVar1 = *pcVar13;
          *pcVar14 = cVar1;
          if (cVar1 == '\0') {
            return -1;
          }
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar14[1] = cVar1;
          pcVar14 = pcVar14 + 2;
        } while (cVar1 != '\0');
        return -1;
      }
      pcVar13 = acStack_345 + 1;
      uVar11 = 0xffffffff;
      pcVar14 = pcVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
      } while (cVar1 != '\0');
      SVar12 = ~uVar11 - 1;
      if (0 < (int)SVar12) {
        pcVar14 = pcVar13 + SVar12;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0) break;
          SVar12 = SVar12 - 1;
          pcVar14 = pcVar14 + -1;
        } while (0 < (int)SVar12);
      }
      pcVar13[SVar12] = '\0';
      local_bc = acStack_345 + 2;
      while ((g_CharacterClassificationTable[(byte)(acStack_345[1] + 1)] & 2U) != 0) {
        memmove(pcVar13,local_bc,SVar12);
        SVar12 = SVar12 - 1;
      }
      core_event_cpp_FUN_004aa400();
      *in_stack_0000000c = *in_stack_0000000c + local_6c;
    }
    else {
      iVar6 = stricmp(local_150,"hasItem");
      if (iVar6 == 0) {
        if (g_CNetGamePtr->connection_type != 0) {
          pcVar13 = "Can't use hasItem condition in multi-player";
          pcVar14 = &DAT_02d0a460;
          do {
            cVar1 = *pcVar13;
            *pcVar14 = cVar1;
            if (cVar1 == '\0') {
              return -1;
            }
            cVar1 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            pcVar14[1] = cVar1;
            pcVar14 = pcVar14 + 2;
          } while (cVar1 != '\0');
          return -1;
        }
        local_b8 = -1;
        sscanf
                  ((char *)(in_stack_00000008 + *in_stack_0000000c)," (%[^)])%n",acStack_859 + 1,
                   &local_b8);
        if (local_b8 < 3) {
          pcVar13 = "Error parsing hasItem parameters.";
          pcVar14 = &DAT_02d0a460;
          do {
            cVar1 = *pcVar13;
            *pcVar14 = cVar1;
            if (cVar1 == '\0') {
              return -1;
            }
            cVar1 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            pcVar14[1] = cVar1;
            pcVar14 = pcVar14 + 2;
          } while (cVar1 != '\0');
          return -1;
        }
        pcVar13 = acStack_859 + 1;
        uVar11 = 0xffffffff;
        pcVar14 = pcVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
        } while (cVar1 != '\0');
        SVar12 = ~uVar11 - 1;
        if (0 < (int)SVar12) {
          pcVar14 = pcVar13 + SVar12;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0) break;
            SVar12 = SVar12 - 1;
            pcVar14 = pcVar14 + -1;
          } while (0 < (int)SVar12);
        }
        pcVar13[SVar12] = '\0';
        local_b0 = acStack_859 + 2;
        while ((g_CharacterClassificationTable[(byte)(acStack_859[1] + 1)] & 2U) != 0) {
          memmove(pcVar13,local_b0,SVar12);
          SVar12 = SVar12 - 1;
        }
        local_e0 = 0;
        if (g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) {
          core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,acStack_859 + 1);
        }
        *in_stack_0000000c = *in_stack_0000000c + local_b8;
      }
      else {
        iVar6 = stricmp(local_150,"hasItemType");
        if (iVar6 == 0) {
          local_ac = -1;
          sscanf
                    ((char *)(in_stack_00000008 + *in_stack_0000000c)," (%[^,], %[^)] )%n",acStack_59d + 1,
                     local_72d + 1,&local_ac);
          if (local_ac < 5) {
            pcVar13 = "Error parsing hasItemType parameters.";
            pcVar14 = &DAT_02d0a460;
            do {
              cVar1 = *pcVar13;
              *pcVar14 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              pcVar14[1] = cVar1;
              pcVar14 = pcVar14 + 2;
            } while (cVar1 != '\0');
          }
          else {
            pcVar13 = acStack_59d + 1;
            uVar11 = 0xffffffff;
            pcVar14 = pcVar13;
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
            } while (cVar1 != '\0');
            SVar12 = ~uVar11 - 1;
            if (0 < (int)SVar12) {
              pcVar14 = pcVar13 + SVar12;
              do {
                if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0) break;
                SVar12 = SVar12 - 1;
                pcVar14 = pcVar14 + -1;
              } while (0 < (int)SVar12);
            }
            pcVar13[SVar12] = '\0';
            local_50 = acStack_59d + 2;
            while ((g_CharacterClassificationTable[(byte)(acStack_59d[1] + 1)] & 2U) != 0) {
              memmove(pcVar13,local_50,SVar12);
              SVar12 = SVar12 - 1;
            }
            uVar11 = 0xffffffff;
            pcVar13 = local_72d + 1;
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar13 + (uint)bVar15 * -2 + 1;
            } while (cVar1 != '\0');
            SVar12 = ~uVar11 - 1;
            if (0 < (int)SVar12) {
              pcVar13 = local_72d + ~uVar11;
              do {
                if ((g_CharacterClassificationTable[(byte)(pcVar13[-1] + 1)] & 2U) == 0) break;
                SVar12 = SVar12 - 1;
                pcVar13 = pcVar13 + -1;
              } while (0 < (int)SVar12);
            }
            (local_72d + 1)[SVar12] = '\0';
            local_a8 = local_72d + 2;
            while ((g_CharacterClassificationTable[(byte)(local_72d[1] + 1)] & 2U) != 0) {
              memmove(local_72d + 1,local_a8,SVar12);
              SVar12 = SVar12 - 1;
            }
            pCVar8 = (CDemonActor *)core_event_cpp_FUN_004aa400();
            if (pCVar8 != (CDemonActor *)0x0) {
              if (pCVar8 == 0x0FFFFFFF) {
                *in_stack_0000000c = *in_stack_0000000c + local_ac;
              }
              else {
                core_inv_cpp_CInventory_hasItemOfClass_FUN_004fe9d0
                          ((CInventory *)(pCVar8[0x176].create_event + 0x30),local_72d + 1);
                *in_stack_0000000c = *in_stack_0000000c + local_ac;
              }
              goto LAB_004ae5e7;
            }
          }
          return -1;
        }
        iVar6 = stricmp(local_150,"hasKeyMask");
        if (iVar6 == 0) {
          if (g_CNetGamePtr->connection_type != 0) {
            pcVar13 = "Can't use hasKeyMask condition in multi-player";
            pcVar14 = &DAT_02d0a460;
            do {
              cVar1 = *pcVar13;
              *pcVar14 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              pcVar14[1] = cVar1;
              pcVar14 = pcVar14 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          local_a4 = -1;
          sscanf
                    ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %d )%n",&local_a0,
                     &local_a4);
          if (local_a4 < 3) {
            pcVar13 = "Error parsing hasKeyMask parameters.";
            pcVar14 = &DAT_02d0a460;
            do {
              cVar1 = *pcVar13;
              *pcVar14 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              pcVar14[1] = cVar1;
              pcVar14 = pcVar14 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          if (local_a0 == 0) {
            pcVar13 = "hasKeyMask(0) always returns false!";
            pcVar14 = &DAT_02d0a460;
            do {
              cVar1 = *pcVar13;
              *pcVar14 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              pcVar14[1] = cVar1;
              pcVar14 = pcVar14 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          if ((local_a0 - 1 & local_a0) != 0) {
            pcVar13 = "mask value must be a power of 2.\n(To test for multiple keys, use multiple hasKeyMask() tests)";
            pcVar14 = &DAT_02d0a460;
            do {
              cVar1 = *pcVar13;
              *pcVar14 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              pcVar14[1] = cVar1;
              pcVar14 = pcVar14 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          local_e0 = 0;
          if (g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) {
            core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0
                      (&g_HeroActors[g_LocalHeroIndex]->inventory,local_a0,0);
          }
          *in_stack_0000000c = *in_stack_0000000c + local_a4;
        }
        else {
          iVar6 = stricmp(local_150,"isBroken");
          if (iVar6 == 0) {
            local_9c = -1;
            sscanf
                      ((char *)(in_stack_00000008 + *in_stack_0000000c)," (%[^)])%n",acStack_27d + 1
                       ,&local_9c);
            if (local_9c < 3) {
              pcVar13 = "Error parsing isBroken parameters.";
              pcVar14 = &DAT_02d0a460;
              do {
                cVar1 = *pcVar13;
                *pcVar14 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar13[1];
                pcVar13 = pcVar13 + 2;
                pcVar14[1] = cVar1;
                pcVar14 = pcVar14 + 2;
              } while (cVar1 != '\0');
            }
            else {
              pcVar13 = acStack_27d + 1;
              uVar11 = 0xffffffff;
              pcVar14 = pcVar13;
              do {
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                cVar1 = *pcVar14;
                pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
              } while (cVar1 != '\0');
              SVar12 = ~uVar11 - 1;
              if (0 < (int)SVar12) {
                pcVar14 = pcVar13 + SVar12;
                do {
                  if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0) break;
                  SVar12 = SVar12 - 1;
                  pcVar14 = pcVar14 + -1;
                } while (0 < (int)SVar12);
              }
              pcVar13[SVar12] = '\0';
              local_98 = acStack_27d + 2;
              while ((g_CharacterClassificationTable[(byte)(acStack_27d[1] + 1)] & 2U) != 0) {
                memmove(pcVar13,local_98,SVar12);
                SVar12 = SVar12 - 1;
              }
              pCVar8 = (CDemonActor *)core_event_cpp_FUN_004aa400();
              if (pCVar8 != (CDemonActor *)0x0) {
                if (pCVar8 == 0x0FFFFFFF) {
                  *in_stack_0000000c = *in_stack_0000000c + local_9c;
                }
                else {
                  *in_stack_0000000c = *in_stack_0000000c + local_9c;
                }
                goto LAB_004ae5e7;
              }
            }
            return -1;
          }
          iVar6 = stricmp(local_150,"isCurrentCamera");
          if (iVar6 == 0) {
            local_94 = -1;
            sscanf
                      ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",local_8bc,
                       &local_94);
            if (local_94 < 3) {
              pcVar13 = "Error parsing icCurrentCamera parameters.";
              pcVar14 = &DAT_02d0a460;
              do {
                cVar1 = *pcVar13;
                *pcVar14 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar13[1];
                pcVar13 = pcVar13 + 2;
                pcVar14[1] = cVar1;
                pcVar14 = pcVar14 + 2;
              } while (cVar1 != '\0');
              return -1;
            }
            local_e0 = 0;
            if (-1 < g_CDemonSetPtr->selected_camera_index) {
              stricmp
                        (g_CDemonSetPtr->cameras[g_CDemonSetPtr->selected_camera_index].name,
                         local_8bc);
            }
            *in_stack_0000000c = *in_stack_0000000c + local_94;
          }
          else {
            iVar6 = stricmp(local_150,"isDead");
            if (iVar6 == 0) {
              local_90 = -1;
              sscanf
                        ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",local_6c8,
                         &local_90);
              if (local_90 < 3) {
                pcVar13 = "Error parsing isDead parameters.";
                pcVar14 = &DAT_02d0a460;
                do {
                  cVar1 = *pcVar13;
                  *pcVar14 = cVar1;
                  if (cVar1 == '\0') {
                    return -1;
                  }
                  cVar1 = pcVar13[1];
                  pcVar13 = pcVar13 + 2;
                  pcVar14[1] = cVar1;
                  pcVar14 = pcVar14 + 2;
                } while (cVar1 != '\0');
              }
              else {
                this_ptr_01 = (CCharacter *)core_event_cpp_FUN_004aa400();
                if (this_ptr_01 != (CCharacter *)0x0) {
                  if (this_ptr_01 == (CCharacter *)0x0FFFFFFF) {
                    *in_stack_0000000c = *in_stack_0000000c + local_90;
                  }
                  else {
                    iVar6 = (*(((this_ptr_01->base).vtable._uc)->_uc).isDamageable)(this_ptr_01);
                    local_dc = (uint)(1 < iVar6);
                    *in_stack_0000000c = *in_stack_0000000c + local_8c;
                  }
                  goto LAB_004ae5e7;
                }
              }
              return -1;
            }
            iVar6 = stricmp(local_150,"isFadeFinished");
            if (iVar6 == 0) {
              local_8c = -1;
              sscanf
                        ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( )%n",&local_8c);
              this_ptr_00 = g_CGamePtr;
              if (local_8c < 2) {
                pcVar13 = "Error parsing isFadeFinished function.";
                pcVar14 = &DAT_02d0a460;
                do {
                  cVar1 = *pcVar13;
                  *pcVar14 = cVar1;
                  if (cVar1 == '\0') {
                    return -1;
                  }
                  cVar1 = pcVar13[1];
                  pcVar13 = pcVar13 + 2;
                  pcVar14[1] = cVar1;
                  pcVar14 = pcVar14 + 2;
                } while (cVar1 != '\0');
                return -1;
              }
              *in_stack_0000000c = *in_stack_0000000c + local_8c;
              core_game_cpp_CGame_fadeIn_FUN_004e0b90(this_ptr_00);
            }
            else {
              iVar6 = stricmp(local_150,"isInRange");
              if (iVar6 == 0) {
                local_88 = -1;
                sscanf
                          ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %n",&local_88);
                if (local_88 < 1) {
                  pcVar13 = "Error parsing isInRange parameters.";
                  pcVar14 = &DAT_02d0a460;
                  do {
                    cVar1 = *pcVar13;
                    *pcVar14 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar13[1];
                    pcVar13 = pcVar13 + 2;
                    pcVar14[1] = cVar1;
                    pcVar14 = pcVar14 + 2;
                  } while (cVar1 != '\0');
                  return -1;
                }
                *in_stack_0000000c = *in_stack_0000000c + local_88;
                iVar6 = core_event_cpp_FUN_004aa530();
                if (iVar6 < 0) {
                  return -1;
                }
                local_88 = -1;
                sscanf
                          ((char *)(in_stack_00000008 + *in_stack_0000000c)," , %n",&local_88);
                if (local_88 < 1) {
                  pcVar13 = "Error parsing isInRange parameters.";
                  pcVar14 = &DAT_02d0a460;
                  do {
                    cVar1 = *pcVar13;
                    *pcVar14 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar13[1];
                    pcVar13 = pcVar13 + 2;
                    pcVar14[1] = cVar1;
                    pcVar14 = pcVar14 + 2;
                  } while (cVar1 != '\0');
                }
                else {
                  *in_stack_0000000c = *in_stack_0000000c + local_88;
                  iVar6 = core_event_cpp_FUN_004aa530();
                  if (-1 < iVar6) {
                    local_88 = -1;
                    sscanf
                              ((char *)(in_stack_00000008 + *in_stack_0000000c)," , %f )%n",
                               local_84,&local_88);
                    if (local_88 < 3) {
                      pcVar13 = "Error parsing isInRange parameters.";
                      pcVar14 = &DAT_02d0a460;
                      do {
                        cVar1 = *pcVar13;
                        *pcVar14 = cVar1;
                        if (cVar1 == '\0') {
                          return -1;
                        }
                        cVar1 = pcVar13[1];
                        pcVar13 = pcVar13 + 2;
                        pcVar14[1] = cVar1;
                        pcVar14 = pcVar14 + 2;
                      } while (cVar1 != '\0');
                      return -1;
                    }
                    *in_stack_0000000c = *in_stack_0000000c + local_88;
                    goto LAB_004ae5e7;
                  }
                }
                return -1;
              }
              iVar6 = stricmp(local_150,"isOfType");
              if (iVar6 == 0) {
                local_70 = -1;
                sscanf
                          ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ ,] , %[^ )] )%n",
                           acStack_471 + 1,local_665 + 1,&local_70);
                if (local_70 < 3) {
                  pcVar13 = "Error parsing isOfType parameters.";
                  pcVar14 = &DAT_02d0a460;
                  do {
                    cVar1 = *pcVar13;
                    *pcVar14 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar13[1];
                    pcVar13 = pcVar13 + 2;
                    pcVar14[1] = cVar1;
                    pcVar14 = pcVar14 + 2;
                  } while (cVar1 != '\0');
                }
                else {
                  pcVar13 = acStack_471 + 1;
                  uVar11 = 0xffffffff;
                  pcVar14 = pcVar13;
                  do {
                    if (uVar11 == 0) break;
                    uVar11 = uVar11 - 1;
                    cVar1 = *pcVar14;
                    pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
                  } while (cVar1 != '\0');
                  SVar12 = ~uVar11 - 1;
                  if (0 < (int)SVar12) {
                    pcVar14 = pcVar13 + SVar12;
                    do {
                      if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0)
                      break;
                      SVar12 = SVar12 - 1;
                      pcVar14 = pcVar14 + -1;
                    } while (0 < (int)SVar12);
                  }
                  pcVar13[SVar12] = '\0';
                  local_68 = acStack_471 + 2;
                  while ((g_CharacterClassificationTable[(byte)(acStack_471[1] + 1)] & 2U) != 0) {
                    memmove(pcVar13,local_68,SVar12);
                    SVar12 = SVar12 - 1;
                  }
                  uVar11 = 0xffffffff;
                  pcVar13 = local_665 + 1;
                  do {
                    if (uVar11 == 0) break;
                    uVar11 = uVar11 - 1;
                    cVar1 = *pcVar13;
                    pcVar13 = pcVar13 + (uint)bVar15 * -2 + 1;
                  } while (cVar1 != '\0');
                  SVar12 = ~uVar11 - 1;
                  if (0 < (int)SVar12) {
                    pcVar13 = local_665 + ~uVar11;
                    do {
                      if ((g_CharacterClassificationTable[(byte)(pcVar13[-1] + 1)] & 2U) == 0)
                      break;
                      SVar12 = SVar12 - 1;
                      pcVar13 = pcVar13 + -1;
                    } while (0 < (int)SVar12);
                  }
                  (local_665 + 1)[SVar12] = '\0';
                  local_64 = local_665 + 2;
                  while ((g_CharacterClassificationTable[(byte)(local_665[1] + 1)] & 2U) != 0) {
                    memmove(local_665 + 1,local_64,SVar12);
                    SVar12 = SVar12 - 1;
                  }
                  pCVar8 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                  if (pCVar8 != (CDemonActor *)0x0) {
                    if (pCVar8 == 0x0FFFFFFF) {
                      *in_stack_0000000c = *in_stack_0000000c + local_70;
                    }
                    else {
                      core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar8,local_665 + 1);
                      *in_stack_0000000c = *in_stack_0000000c + local_70;
                    }
                    goto LAB_004ae5e7;
                  }
                }
                return -1;
              }
              iVar6 = stricmp(local_150,"isFacing");
              if (iVar6 == 0) {
                local_60 = -1;
                sscanf
                          ((char *)(in_stack_00000008 + *in_stack_0000000c)," (%[^,], %[^,)]%n",
                           acStack_1b5 + 1,local_4d5 + 1,&local_60);
                if (local_60 < 5) {
                  pcVar13 = "Error parsing isFacing parameters.";
                  pcVar14 = &DAT_02d0a460;
                  do {
                    cVar1 = *pcVar13;
                    *pcVar14 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar13[1];
                    pcVar13 = pcVar13 + 2;
                    pcVar14[1] = cVar1;
                    pcVar14 = pcVar14 + 2;
                  } while (cVar1 != '\0');
                  return -1;
                }
                pcVar13 = acStack_1b5 + 1;
                uVar11 = 0xffffffff;
                pcVar14 = pcVar13;
                do {
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1;
                  cVar1 = *pcVar14;
                  pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
                } while (cVar1 != '\0');
                SVar12 = ~uVar11 - 1;
                if (0 < (int)SVar12) {
                  pcVar14 = pcVar13 + SVar12;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0) break;
                    SVar12 = SVar12 - 1;
                    pcVar14 = pcVar14 + -1;
                  } while (0 < (int)SVar12);
                }
                pcVar13[SVar12] = '\0';
                local_5c = acStack_1b5 + 2;
                while ((g_CharacterClassificationTable[(byte)(acStack_1b5[1] + 1)] & 2U) != 0) {
                  memmove(pcVar13,local_5c,SVar12);
                  SVar12 = SVar12 - 1;
                }
                uVar11 = 0xffffffff;
                pcVar13 = local_4d5 + 1;
                do {
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar13 + (uint)bVar15 * -2 + 1;
                } while (cVar1 != '\0');
                SVar12 = ~uVar11 - 1;
                if (0 < (int)SVar12) {
                  pcVar13 = local_4d5 + ~uVar11;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar13[-1] + 1)] & 2U) == 0) break;
                    SVar12 = SVar12 - 1;
                    pcVar13 = pcVar13 + -1;
                  } while (0 < (int)SVar12);
                }
                (local_4d5 + 1)[SVar12] = '\0';
                local_58 = local_4d5 + 2;
                while ((g_CharacterClassificationTable[(byte)(local_4d5[1] + 1)] & 2U) != 0) {
                  memmove(local_4d5 + 1,local_58,SVar12);
                  SVar12 = SVar12 - 1;
                }
                pCVar8 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                if ((pCVar8 == (CDemonActor *)0x0) ||
                   (pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa400(),
                   pCVar9 == (CDemonActor *)0x0)) {
                  return -1;
                }
                *in_stack_0000000c = *in_stack_0000000c + local_60;
                local_a88 = 45.0;
                if (*(char *)(in_stack_00000008 + *in_stack_0000000c) == ',') {
                  local_60 = -1;
                  sscanf
                            ((char *)(in_stack_00000008 + *in_stack_0000000c),",%f %n",
                             &local_a88,&local_60);
                  if (local_60 < 2) {
                    pcVar13 = "Error parsing isFacing parameters.";
                    pcVar14 = &DAT_02d0a460;
                    do {
                      cVar1 = *pcVar13;
                      *pcVar14 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar13[1];
                      pcVar13 = pcVar13 + 2;
                      pcVar14[1] = cVar1;
                      pcVar14 = pcVar14 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  if (((double)local_a88 < 0.0) || (180 < (double)local_a88)) {
                    pcVar13 = "isFacing() angle must be in range 0..180.";
                    pcVar14 = &DAT_02d0a460;
                    do {
                      cVar1 = *pcVar13;
                      *pcVar14 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar13[1];
                      pcVar13 = pcVar13 + 2;
                      pcVar14[1] = cVar1;
                      pcVar14 = pcVar14 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  *in_stack_0000000c = *in_stack_0000000c + local_60;
                }
                pCVar5 = 0x0FFFFFFF;
                if (*(char *)(in_stack_00000008 + *in_stack_0000000c) != ')') {
                  pcVar13 = "Error parsing isFacing parameters.";
                  pcVar14 = &DAT_02d0a460;
                  do {
                    cVar1 = *pcVar13;
                    *pcVar14 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar13[1];
                    pcVar13 = pcVar13 + 2;
                    pcVar14[1] = cVar1;
                    pcVar14 = pcVar14 + 2;
                  } while (cVar1 != '\0');
                  return -1;
                }
                *in_stack_0000000c = *in_stack_0000000c + 1;
                if ((pCVar8 != pCVar5) && (pCVar9 != pCVar5)) {
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            (pCVar8,local_110,&(pCVar9->location).position);
                  local_110[0].y = 0.0;
                  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (local_f8,local_110);
                }
              }
              else {
                iVar6 = stricmp(local_150,"isLightOn");
                if (iVar6 == 0) {
                  local_54 = -1;
                  sscanf
                            ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",local_218
                             ,&local_54);
                  if (local_54 < 3) {
                    pcVar13 = "Error parsing isLightOn parameters.";
                    pcVar14 = &DAT_02d0a460;
                    do {
                      cVar1 = *pcVar13;
                      *pcVar14 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar13[1];
                      pcVar13 = pcVar13 + 2;
                      pcVar14[1] = cVar1;
                      pcVar14 = pcVar14 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  core_set_cpp_CDemonSet_FUN_00570f10(g_CDemonSetPtr);
                  if (local_4c == 0) {
                    sprintf
                              (local_a84,"Spotlight %s doesn't exist.",local_218);
                    pcVar13 = local_a84;
                    pcVar14 = &DAT_02d0a460;
                    do {
                      cVar1 = *pcVar13;
                      *pcVar14 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar13[1];
                      pcVar13 = pcVar13 + 2;
                      pcVar14[1] = cVar1;
                      pcVar14 = pcVar14 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  *in_stack_0000000c = *in_stack_0000000c + local_54;
                }
                else {
                  iVar6 = stricmp(local_150,"isNudityEnabled");
                  if (iVar6 == 0) {
                    local_44 = -1;
                    sscanf
                              ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( )%n",
                               &local_44);
                    if (local_44 < 2) {
                      pcVar13 = "Error parsing isNudityEnabled().";
                      pcVar14 = &DAT_02d0a460;
                      do {
                        cVar1 = *pcVar13;
                        *pcVar14 = cVar1;
                        if (cVar1 == '\0') {
                          return -1;
                        }
                        cVar1 = pcVar13[1];
                        pcVar13 = pcVar13 + 2;
                        pcVar14[1] = cVar1;
                        pcVar14 = pcVar14 + 2;
                      } while (cVar1 != '\0');
                      return -1;
                    }
                    *in_stack_0000000c = *in_stack_0000000c + local_44;
                  }
                  else {
                    iVar6 = stricmp(local_150,"isSfxActive");
                    if (iVar6 == 0) {
                      local_40 = -1;
                      sscanf
                                ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",
                                 acStack_791 + 1,&local_40);
                      if (local_40 < 3) {
                        pcVar13 = "Error parsing isSfxActive parameters.";
                        pcVar14 = &DAT_02d0a460;
                        do {
                          cVar1 = *pcVar13;
                          *pcVar14 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar13[1];
                          pcVar13 = pcVar13 + 2;
                          pcVar14[1] = cVar1;
                          pcVar14 = pcVar14 + 2;
                        } while (cVar1 != '\0');
                        return -1;
                      }
                      pcVar13 = acStack_791 + 1;
                      uVar11 = 0xffffffff;
                      pcVar14 = pcVar13;
                      do {
                        if (uVar11 == 0) break;
                        uVar11 = uVar11 - 1;
                        cVar1 = *pcVar14;
                        pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
                      } while (cVar1 != '\0');
                      SVar12 = ~uVar11 - 1;
                      if (0 < (int)SVar12) {
                        pcVar14 = pcVar13 + SVar12;
                        do {
                          if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0)
                          break;
                          SVar12 = SVar12 - 1;
                          pcVar14 = pcVar14 + -1;
                        } while (0 < (int)SVar12);
                      }
                      pcVar13[SVar12] = '\0';
                      local_3c = acStack_791 + 2;
                      while ((g_CharacterClassificationTable[(byte)(acStack_791[1] + 1)] & 2U) != 0)
                      {
                        memmove(pcVar13,local_3c,SVar12);
                        SVar12 = SVar12 - 1;
                      }
                      local_e0 = 0;
                      core_event_cpp_CEventList_FUN_004b0c40(this_ptr);
                      *in_stack_0000000c = *in_stack_0000000c + local_40;
                    }
                    else {
                      iVar6 = stricmp(local_150,"isTalking");
                      if (iVar6 == 0) {
                        local_38 = -1;
                        sscanf
                                  ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",
                                   local_538,&local_38);
                        if (local_38 < 3) {
                          pcVar13 = "Error parsing isTalking parameters.";
                          pcVar14 = &DAT_02d0a460;
                          do {
                            cVar1 = *pcVar13;
                            *pcVar14 = cVar1;
                            if (cVar1 == '\0') {
                              return -1;
                            }
                            cVar1 = pcVar13[1];
                            pcVar13 = pcVar13 + 2;
                            pcVar14[1] = cVar1;
                            pcVar14 = pcVar14 + 2;
                          } while (cVar1 != '\0');
                          return -1;
                        }
                        iVar6 = core_event_cpp_FUN_004aa400();
                        if (iVar6 == 0) {
                          return -1;
                        }
                        *in_stack_0000000c = *in_stack_0000000c + local_38;
                      }
                      else {
                        iVar6 = stricmp(local_150,"isVictim");
                        if (iVar6 == 0) {
                          local_34 = -1;
                          sscanf
                                    ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",
                                     local_40c,&local_34);
                          if (local_34 < 3) {
                            pcVar13 = "Error parsing isVictim parameters.";
                            pcVar14 = &DAT_02d0a460;
                            do {
                              cVar1 = *pcVar13;
                              *pcVar14 = cVar1;
                              if (cVar1 == '\0') {
                                return -1;
                              }
                              cVar1 = pcVar13[1];
                              pcVar13 = pcVar13 + 2;
                              pcVar14[1] = cVar1;
                              pcVar14 = pcVar14 + 2;
                            } while (cVar1 != '\0');
                          }
                          else {
                            local_b4 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                            if (local_b4 != (CDemonActor *)0x0) {
                              local_e0 = 0;
                              if (local_b4 != 0x0FFFFFFF) {
                                local_30 = &local_b4->location;
                                local_c0 = 0;
                                for (iVar6 = 0; iVar6 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c);
                                    iVar6 = iVar6 + 1) {
                                  iVar7 = *(int *)(g_CDemonSetPtr->unk4 + (int)local_bc + 8000);
                                  if ((((local_b0 == (char *)*(int *)(iVar7 + 0xbe3c)) &&
                                       (iVar10 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x120))(),
                                       iVar10 < 1)) &&
                                      (iVar10 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x68))(),
                                      iVar10 == 0)) &&
                                     (fVar2 = *(float *)(iVar7 + 0x20) - *pfStack_2c,
                                     fVar4 = *(float *)(iVar7 + 0x24) - pfStack_2c[1],
                                     fVar3 = *(float *)(iVar7 + 0x28) - pfStack_2c[2],
                                     SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) <=
                                     (float)30)) {
                                    local_dc = 1;
                                    break;
                                  }
                                  local_bc = (char *)((int)local_bc + 4);
                                }
                              }
                              *in_stack_0000000c = (int)&(local_30->position).x + *in_stack_0000000c
                              ;
                              goto LAB_004ae5e7;
                            }
                          }
                          return -1;
                        }
                        iVar6 = stricmp
                                          (local_150,"isWeaponDrawn");
                        if (iVar6 == 0) {
                          local_20 = -1;
                          sscanf
                                    ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",
                                     local_2e0,&local_20);
                          if (local_20 < 3) {
                            pcVar13 = "Error parsing isWeaponDrawn parameters.";
                            pcVar14 = &DAT_02d0a460;
                            do {
                              cVar1 = *pcVar13;
                              *pcVar14 = cVar1;
                              if (cVar1 == '\0') {
                                return -1;
                              }
                              cVar1 = pcVar13[1];
                              pcVar13 = pcVar13 + 2;
                              pcVar14[1] = cVar1;
                              pcVar14 = pcVar14 + 2;
                            } while (cVar1 != '\0');
                            return -1;
                          }
                          pCVar8 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                          if (pCVar8 == (CDemonActor *)0x0) {
                            return -1;
                          }
                          if (pCVar8 == 0x0FFFFFFF) {
                            local_dc = (uint)pCVar8 ^ (uint)0x0FFFFFFF;
                          }
                          else {
                            local_dc = (*(((pCVar8->vtable)._ue)->_ue).field_8)();
                          }
                          *in_stack_0000000c = *in_stack_0000000c + local_1c;
                        }
                        else {
                          iVar6 = stricmp
                                            (local_150,"isWearingGasMask");
                          if (iVar6 == 0) {
                            local_1c = -1;
                            sscanf
                                      ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n"
                                       ,local_600,&local_1c);
                            if (local_1c < 3) {
                              pcVar13 = "Error parsing isWearingGasMask parameters.";
                              pcVar14 = &DAT_02d0a460;
                              do {
                                cVar1 = *pcVar13;
                                *pcVar14 = cVar1;
                                if (cVar1 == '\0') {
                                  return -1;
                                }
                                cVar1 = pcVar13[1];
                                pcVar13 = pcVar13 + 2;
                                pcVar14[1] = cVar1;
                                pcVar14 = pcVar14 + 2;
                              } while (cVar1 != '\0');
                              return -1;
                            }
                            pCVar8 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                            if (pCVar8 == (CDemonActor *)0x0) {
                              return -1;
                            }
                            if (pCVar8 == 0x0FFFFFFF) {
                              *in_stack_0000000c = *in_stack_0000000c + local_1c;
                            }
                            else {
                              *in_stack_0000000c = *in_stack_0000000c + local_1c;
                            }
                          }
                          else {
                            iVar6 = stricmp(local_150,"randBool")
                            ;
                            if (iVar6 != 0) {
                              iVar6 = stricmp
                                                (local_150,"reachedDest");
                              if (iVar6 != 0) {
                                pcVar13 = "Invalid meta-function";
                                pcVar14 = &DAT_02d0a460;
                                do {
                                  cVar1 = *pcVar13;
                                  *pcVar14 = cVar1;
                                  if (cVar1 == '\0') {
                                    return -1;
                                  }
                                  cVar1 = pcVar13[1];
                                  pcVar13 = pcVar13 + 2;
                                  pcVar14[1] = cVar1;
                                  pcVar14 = pcVar14 + 2;
                                } while (cVar1 != '\0');
                                return -1;
                              }
                              local_cc = -1;
                              sscanf
                                        ((char *)(in_stack_00000008 + *in_stack_0000000c),
                                         " ( %[^ )] )%n",local_7f4,&local_cc);
                              if (local_cc < 3) {
                                pcVar13 = "Error parsing reachedDest parameters.";
                                pcVar14 = &DAT_02d0a460;
                                do {
                                  cVar1 = *pcVar13;
                                  *pcVar14 = cVar1;
                                  if (cVar1 == '\0') {
                                    return -1;
                                  }
                                  cVar1 = pcVar13[1];
                                  pcVar13 = pcVar13 + 2;
                                  pcVar14[1] = cVar1;
                                  pcVar14 = pcVar14 + 2;
                                } while (cVar1 != '\0');
                              }
                              else {
                                pCVar8 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                                if (pCVar8 != (CDemonActor *)0x0) {
                                  if (pCVar8 == 0x0FFFFFFF) {
                                    *in_stack_0000000c = *in_stack_0000000c + local_cc;
                                  }
                                  else {
                                    iVar6 = (*(((pCVar8->vtable)._uc)->_uc).cfunc26)();
                                    local_dc = (uint)(iVar6 != 0);
                                    *in_stack_0000000c = *in_stack_0000000c + (int)local_c8;
                                  }
                                  goto LAB_004ae5e7;
                                }
                              }
                              return -1;
                            }
                            local_d8 = -1;
                            sscanf
                                      ((char *)(in_stack_00000008 + *in_stack_0000000c),
                                       " ( %f )%n",local_18,&local_d8);
                            if (local_d8 < 3) {
                              pcVar13 = "Error parsing randBool parameters.";
                              pcVar14 = &DAT_02d0a460;
                              do {
                                cVar1 = *pcVar13;
                                *pcVar14 = cVar1;
                                if (cVar1 == '\0') {
                                  return -1;
                                }
                                cVar1 = pcVar13[1];
                                pcVar13 = pcVar13 + 2;
                                pcVar14[1] = cVar1;
                                pcVar14 = pcVar14 + 2;
                              } while (cVar1 != '\0');
                              return -1;
                            }
                            core_actor_cpp_randomChance_FUN_0040cd10(local_18[0]);
                            *in_stack_0000000c = *in_stack_0000000c + local_d8;
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
            ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %s %s %[^ )] )%n",acStack_921 + 1,
             local_985 + 1,local_3a9 + 1,&local_dc);
  if ((int)local_dc < 3) {
    pcVar13 = "Error parsing cmp parameters.";
    pcVar14 = &DAT_02d0a460;
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  pcVar13 = acStack_921 + 1;
  uVar11 = 0xffffffff;
  pcVar14 = pcVar13;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
  } while (cVar1 != '\0');
  SVar12 = ~uVar11 - 1;
  if (0 < (int)SVar12) {
    pcVar14 = pcVar13 + SVar12;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0) break;
      SVar12 = SVar12 - 1;
      pcVar14 = pcVar14 + -1;
    } while (0 < (int)SVar12);
  }
  pcVar13[SVar12] = '\0';
  local_d4 = acStack_921 + 2;
  while ((g_CharacterClassificationTable[(byte)(acStack_921[1] + 1)] & 2U) != 0) {
    memmove(pcVar13,local_d4,SVar12);
    SVar12 = SVar12 - 1;
  }
  uVar11 = 0xffffffff;
  pcVar13 = local_3a9 + 1;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + (uint)bVar15 * -2 + 1;
  } while (cVar1 != '\0');
  SVar12 = ~uVar11 - 1;
  if (0 < (int)SVar12) {
    pcVar13 = local_3a9 + ~uVar11;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar13[-1] + 1)] & 2U) == 0) break;
      SVar12 = SVar12 - 1;
      pcVar13 = pcVar13 + -1;
    } while (0 < (int)SVar12);
  }
  (local_3a9 + 1)[SVar12] = '\0';
  local_d0 = local_3a9 + 2;
  while ((g_CharacterClassificationTable[(byte)(local_3a9[1] + 1)] & 2U) != 0) {
    memmove(local_3a9 + 1,local_d0,SVar12);
    SVar12 = SVar12 - 1;
  }
  uVar11 = 0xffffffff;
  pcVar13 = local_985 + 1;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + (uint)bVar15 * -2 + 1;
  } while (cVar1 != '\0');
  SVar12 = ~uVar11 - 1;
  if (0 < (int)SVar12) {
    pcVar13 = local_985 + ~uVar11;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar13[-1] + 1)] & 2U) == 0) break;
      SVar12 = SVar12 - 1;
      pcVar13 = pcVar13 + -1;
    } while (0 < (int)SVar12);
  }
  (local_985 + 1)[SVar12] = '\0';
  local_c8 = local_985 + 2;
  while ((g_CharacterClassificationTable[(byte)(local_985[1] + 1)] & 2U) != 0) {
    memmove(local_985 + 1,local_c8,SVar12);
    SVar12 = SVar12 - 1;
  }
  iVar7 = strcmp(local_985 + 1,"<");
  iVar6 = 0;
  if (iVar7 != 0) {
    iVar6 = strcmp(local_985 + 1,"<=");
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = strcmp(local_985 + 1,"==");
      if (iVar6 == 0) {
        iVar6 = 2;
      }
      else {
        iVar6 = strcmp(local_985 + 1,"!=");
        if (iVar6 == 0) {
          iVar6 = 3;
        }
        else {
          iVar6 = strcmp(local_985 + 1,">");
          if (iVar6 == 0) {
            iVar6 = 5;
          }
          else {
            iVar6 = strcmp(local_985 + 1,">=");
            if (iVar6 == 0) {
              iVar6 = 4;
            }
            else {
              iVar6 = 6;
            }
          }
        }
      }
    }
  }
  if (iVar6 == 6) {
    pcVar13 = "Invalid relational operator in cmp statement";
    pcVar14 = &DAT_02d0a460;
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  *in_stack_0000000c = *in_stack_0000000c + local_dc;
  iVar7 = sscanf(acStack_921 + 1,"%d",local_c4);
  if (iVar7 != 1) {
    core_event_cpp_CEventList_FUN_004b0830(g_CEventListPtr);
  }
  iVar7 = sscanf(local_3a9 + 1,"%d",local_74);
  if (iVar7 == 1) {
    switch(iVar6) {
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
    while ((g_CharacterClassificationTable
            [(byte)(*(char *)(in_stack_00000008 + *in_stack_0000000c) + 1)] & 2U) != 0) {
      *in_stack_0000000c = *in_stack_0000000c + 1;
    }
    return local_dc;
  }
  core_event_cpp_CEventList_FUN_004b0830(g_CEventListPtr);
  switch(iVar6) {
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
