// Name: core_event.cpp_CEventList_FUN_004ae140
// Address: 004ae140
// Address Range: [[004ae140, 004b026e]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_FUN_004ae140(CEventList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004ae140(CEventList *this_ptr)

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
  CHero *pCVar9;
  CHero *pCVar10;
  int iVar11;
  uint uVar12;
  SIZE_T SVar13;
  char *pcVar14;
  char *pcVar15;
  byte bVar16;
  int in_stack_00000008;
  int *in_stack_0000000c;
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
  float local_104 [3];
  CVector3f local_f8;
  float local_ec [3];
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
  CHero *local_b4;
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
  
  bVar16 = 0;
  while ((g_CharacterClassificationTable
          [(byte)(*(char *)(in_stack_00000008 + *in_stack_0000000c) + 1)] & 2) != 0) {
    *in_stack_0000000c = *in_stack_0000000c + 1;
  }
  if (*(char *)(in_stack_00000008 + *in_stack_0000000c) == '.') {
    *in_stack_0000000c = *in_stack_0000000c + 1;
  }
  bVar2 = *(byte *)(in_stack_00000008 + *in_stack_0000000c);
  if (bVar2 == 0) {
    pcVar14 = "Unexpected end of string";
    pcVar15 = &DAT_02d0a460;
    do {
      cVar1 = *pcVar14;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  if (bVar2 == 0x28) {
    *in_stack_0000000c = *in_stack_0000000c + 1;
    iVar7 = core_event_cpp_CEventList_FUN_004b0270(this_ptr);
    if (iVar7 < 0) {
      return iVar7;
    }
    if (*(char *)(in_stack_00000008 + *in_stack_0000000c) == ')') {
      *in_stack_0000000c = *in_stack_0000000c + 1;
      while ((g_CharacterClassificationTable
              [(byte)(*(char *)(*in_stack_0000000c + in_stack_00000008) + 1)] & 2) != 0) {
        *in_stack_0000000c = *in_stack_0000000c + 1;
      }
      return iVar7;
    }
    pcVar14 = "Matching ')' is missing";
    pcVar15 = &DAT_02d0a460;
    do {
      cVar1 = *pcVar14;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  if (bVar2 == 0x21) {
    *in_stack_0000000c = *in_stack_0000000c + 1;
    iVar7 = core_event_cpp_CEventList_FUN_004ae140(this_ptr);
    if (-1 < iVar7) {
      return (uint)(iVar7 == 0);
    }
    return iVar7;
  }
  iVar7 = core_event_cpp_FUN_004b0f90((uint)bVar2);
  if (iVar7 == 0) {
    pcVar14 = "Syntax error";
    pcVar15 = &DAT_02d0a460;
    do {
      cVar1 = *pcVar14;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  pcVar14 = local_150;
  do {
    *pcVar14 = *(char *)(in_stack_00000008 + *in_stack_0000000c);
    iVar7 = *in_stack_0000000c;
    *in_stack_0000000c = iVar7 + 1;
    pcVar14 = pcVar14 + 1;
    iVar7 = core_event_cpp_FUN_004b0f90((uint)*(byte *)(in_stack_00000008 + iVar7 + 1));
  } while (iVar7 != 0);
  *pcVar14 = '\0';
  if (*(char *)(in_stack_00000008 + *in_stack_0000000c) != '(') {
    while ((g_CharacterClassificationTable
            [(byte)(*(char *)(*in_stack_0000000c + in_stack_00000008) + 1)] & 2) != 0) {
      *in_stack_0000000c = *in_stack_0000000c + 1;
    }
    iVar7 = core_event_cpp_CEventList_FUN_004adc10(this_ptr,local_150);
    return iVar7;
  }
  local_e0 = 0xffffffff;
  iVar7 = stricmp(local_150,"cmp");
  if (iVar7 != 0) {
    iVar7 = stricmp(local_150,"exists");
    if (iVar7 == 0) {
      local_6c = -1;
      sscanf
                ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",acStack_345 + 1,
                 &local_6c);
      if (local_6c < 3) {
        pcVar14 = "Error parsing exists parameters.";
        pcVar15 = &DAT_02d0a460;
        do {
          cVar1 = *pcVar14;
          *pcVar15 = cVar1;
          if (cVar1 == '\0') {
            return -1;
          }
          cVar1 = pcVar14[1];
          pcVar14 = pcVar14 + 2;
          pcVar15[1] = cVar1;
          pcVar15 = pcVar15 + 2;
        } while (cVar1 != '\0');
        return -1;
      }
      pcVar14 = acStack_345 + 1;
      uVar12 = 0xffffffff;
      pcVar15 = pcVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar15 + (uint)bVar16 * -2 + 1;
      } while (cVar1 != '\0');
      SVar13 = ~uVar12 - 1;
      if (0 < (int)SVar13) {
        pcVar15 = pcVar14 + SVar13;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
          SVar13 = SVar13 - 1;
          pcVar15 = pcVar15 + -1;
        } while (0 < (int)SVar13);
      }
      pcVar14[SVar13] = '\0';
      local_bc = acStack_345 + 2;
      while ((g_CharacterClassificationTable[(byte)(acStack_345[1] + 1)] & 2) != 0) {
        memmove(pcVar14,local_bc,SVar13);
        SVar13 = SVar13 - 1;
      }
      core_event_cpp_FUN_004aa400(acStack_345 + 1,g_CDemonActorClassInfo.name_hash,0x821ff8);
      *in_stack_0000000c = *in_stack_0000000c + local_6c;
    }
    else {
      iVar7 = stricmp(local_150,"hasItem");
      if (iVar7 == 0) {
        if (g_CNetGamePtr->connection_type != 0) {
          pcVar14 = "Can't use hasItem condition in multi-player";
          pcVar15 = &DAT_02d0a460;
          do {
            cVar1 = *pcVar14;
            *pcVar15 = cVar1;
            if (cVar1 == '\0') {
              return -1;
            }
            cVar1 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            pcVar15[1] = cVar1;
            pcVar15 = pcVar15 + 2;
          } while (cVar1 != '\0');
          return -1;
        }
        local_b8 = -1;
        sscanf
                  ((char *)(in_stack_00000008 + *in_stack_0000000c)," (%[^)])%n",acStack_859 + 1,
                   &local_b8);
        if (local_b8 < 3) {
          pcVar14 = "Error parsing hasItem parameters.";
          pcVar15 = &DAT_02d0a460;
          do {
            cVar1 = *pcVar14;
            *pcVar15 = cVar1;
            if (cVar1 == '\0') {
              return -1;
            }
            cVar1 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            pcVar15[1] = cVar1;
            pcVar15 = pcVar15 + 2;
          } while (cVar1 != '\0');
          return -1;
        }
        pcVar14 = acStack_859 + 1;
        uVar12 = 0xffffffff;
        pcVar15 = pcVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar1 = *pcVar15;
          pcVar15 = pcVar15 + (uint)bVar16 * -2 + 1;
        } while (cVar1 != '\0');
        SVar13 = ~uVar12 - 1;
        if (0 < (int)SVar13) {
          pcVar15 = pcVar14 + SVar13;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
            SVar13 = SVar13 - 1;
            pcVar15 = pcVar15 + -1;
          } while (0 < (int)SVar13);
        }
        pcVar14[SVar13] = '\0';
        local_b0 = acStack_859 + 2;
        while ((g_CharacterClassificationTable[(byte)(acStack_859[1] + 1)] & 2) != 0) {
          memmove(pcVar14,local_b0,SVar13);
          SVar13 = SVar13 - 1;
        }
        local_e0 = 0;
        if (g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) {
          core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,acStack_859 + 1);
        }
        *in_stack_0000000c = *in_stack_0000000c + local_b8;
      }
      else {
        iVar7 = stricmp(local_150,"hasItemType");
        if (iVar7 == 0) {
          local_ac = -1;
          sscanf
                    ((char *)(in_stack_00000008 + *in_stack_0000000c)," (%[^,], %[^)] )%n",acStack_59d + 1,
                     local_72d + 1,&local_ac);
          if (local_ac < 5) {
            pcVar14 = "Error parsing hasItemType parameters.";
            pcVar15 = &DAT_02d0a460;
            do {
              cVar1 = *pcVar14;
              *pcVar15 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pcVar15[1] = cVar1;
              pcVar15 = pcVar15 + 2;
            } while (cVar1 != '\0');
          }
          else {
            pcVar14 = acStack_59d + 1;
            uVar12 = 0xffffffff;
            pcVar15 = pcVar14;
            do {
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar15 + (uint)bVar16 * -2 + 1;
            } while (cVar1 != '\0');
            SVar13 = ~uVar12 - 1;
            if (0 < (int)SVar13) {
              pcVar15 = pcVar14 + SVar13;
              do {
                if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
                SVar13 = SVar13 - 1;
                pcVar15 = pcVar15 + -1;
              } while (0 < (int)SVar13);
            }
            pcVar14[SVar13] = '\0';
            local_50 = acStack_59d + 2;
            while ((g_CharacterClassificationTable[(byte)(acStack_59d[1] + 1)] & 2) != 0) {
              memmove(pcVar14,local_50,SVar13);
              SVar13 = SVar13 - 1;
            }
            uVar12 = 0xffffffff;
            pcVar14 = local_72d + 1;
            do {
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
            } while (cVar1 != '\0');
            SVar13 = ~uVar12 - 1;
            if (0 < (int)SVar13) {
              pcVar14 = local_72d + ~uVar12;
              do {
                if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
                SVar13 = SVar13 - 1;
                pcVar14 = pcVar14 + -1;
              } while (0 < (int)SVar13);
            }
            (local_72d + 1)[SVar13] = '\0';
            local_a8 = local_72d + 2;
            while ((g_CharacterClassificationTable[(byte)(local_72d[1] + 1)] & 2) != 0) {
              memmove(local_72d + 1,local_a8,SVar13);
              SVar13 = SVar13 - 1;
            }
            pCVar9 = core_event_cpp_FUN_004aa400
                               (acStack_59d + 1,g_CHeroClassInfo.name_hash,0x2db87d4);
            if (pCVar9 != (CHero *)0x0) {
              if (pCVar9 == 0x0FFFFFFF) {
                *in_stack_0000000c = *in_stack_0000000c + local_ac;
              }
              else {
                core_inv_cpp_CInventory_hasItemOfClass_FUN_004fe9d0
                          (&pCVar9->inventory,local_72d + 1);
                *in_stack_0000000c = *in_stack_0000000c + local_ac;
              }
              goto LAB_004ae5e7;
            }
          }
          return -1;
        }
        iVar7 = stricmp(local_150,"hasKeyMask");
        if (iVar7 == 0) {
          if (g_CNetGamePtr->connection_type != 0) {
            pcVar14 = "Can't use hasKeyMask condition in multi-player";
            pcVar15 = &DAT_02d0a460;
            do {
              cVar1 = *pcVar14;
              *pcVar15 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pcVar15[1] = cVar1;
              pcVar15 = pcVar15 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          local_a4 = -1;
          sscanf
                    ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %d )%n",&local_a0,
                     &local_a4);
          if (local_a4 < 3) {
            pcVar14 = "Error parsing hasKeyMask parameters.";
            pcVar15 = &DAT_02d0a460;
            do {
              cVar1 = *pcVar14;
              *pcVar15 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pcVar15[1] = cVar1;
              pcVar15 = pcVar15 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          if (local_a0 == 0) {
            pcVar14 = "hasKeyMask(0) always returns false!";
            pcVar15 = &DAT_02d0a460;
            do {
              cVar1 = *pcVar14;
              *pcVar15 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pcVar15[1] = cVar1;
              pcVar15 = pcVar15 + 2;
            } while (cVar1 != '\0');
            return -1;
          }
          if ((local_a0 - 1 & local_a0) != 0) {
            pcVar14 = "mask value must be a power of 2.\n(To test for multiple keys, use multiple hasKeyMask() tests)";
            pcVar15 = &DAT_02d0a460;
            do {
              cVar1 = *pcVar14;
              *pcVar15 = cVar1;
              if (cVar1 == '\0') {
                return -1;
              }
              cVar1 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pcVar15[1] = cVar1;
              pcVar15 = pcVar15 + 2;
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
          iVar7 = stricmp(local_150,"isBroken");
          if (iVar7 == 0) {
            local_9c = -1;
            sscanf
                      ((char *)(in_stack_00000008 + *in_stack_0000000c)," (%[^)])%n",acStack_27d + 1
                       ,&local_9c);
            if (local_9c < 3) {
              pcVar14 = "Error parsing isBroken parameters.";
              pcVar15 = &DAT_02d0a460;
              do {
                cVar1 = *pcVar14;
                *pcVar15 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar14[1];
                pcVar14 = pcVar14 + 2;
                pcVar15[1] = cVar1;
                pcVar15 = pcVar15 + 2;
              } while (cVar1 != '\0');
            }
            else {
              pcVar14 = acStack_27d + 1;
              uVar12 = 0xffffffff;
              pcVar15 = pcVar14;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar1 = *pcVar15;
                pcVar15 = pcVar15 + (uint)bVar16 * -2 + 1;
              } while (cVar1 != '\0');
              SVar13 = ~uVar12 - 1;
              if (0 < (int)SVar13) {
                pcVar15 = pcVar14 + SVar13;
                do {
                  if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
                  SVar13 = SVar13 - 1;
                  pcVar15 = pcVar15 + -1;
                } while (0 < (int)SVar13);
              }
              pcVar14[SVar13] = '\0';
              local_98 = acStack_27d + 2;
              while ((g_CharacterClassificationTable[(byte)(acStack_27d[1] + 1)] & 2) != 0) {
                memmove(pcVar14,local_98,SVar13);
                SVar13 = SVar13 - 1;
              }
              pCVar9 = core_event_cpp_FUN_004aa400
                                 (acStack_27d + 1,g_CGlassClassInfo.name_hash,0x2d83328);
              if (pCVar9 != (CHero *)0x0) {
                if (pCVar9 == 0x0FFFFFFF) {
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
          iVar7 = stricmp(local_150,"isCurrentCamera");
          if (iVar7 == 0) {
            local_94 = -1;
            sscanf
                      ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",local_8bc,
                       &local_94);
            if (local_94 < 3) {
              pcVar14 = "Error parsing icCurrentCamera parameters.";
              pcVar15 = &DAT_02d0a460;
              do {
                cVar1 = *pcVar14;
                *pcVar15 = cVar1;
                if (cVar1 == '\0') {
                  return -1;
                }
                cVar1 = pcVar14[1];
                pcVar14 = pcVar14 + 2;
                pcVar15[1] = cVar1;
                pcVar15 = pcVar15 + 2;
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
            iVar7 = stricmp(local_150,"isDead");
            if (iVar7 == 0) {
              local_90 = -1;
              sscanf
                        ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",local_6c8,
                         &local_90);
              if (local_90 < 3) {
                pcVar14 = "Error parsing isDead parameters.";
                pcVar15 = &DAT_02d0a460;
                do {
                  cVar1 = *pcVar14;
                  *pcVar15 = cVar1;
                  if (cVar1 == '\0') {
                    return -1;
                  }
                  cVar1 = pcVar14[1];
                  pcVar14 = pcVar14 + 2;
                  pcVar15[1] = cVar1;
                  pcVar15 = pcVar15 + 2;
                } while (cVar1 != '\0');
              }
              else {
                pCVar9 = core_event_cpp_FUN_004aa400
                                   (local_6c8,g_CCharacterClassInfo.name_hash,0x823c14);
                if (pCVar9 != (CHero *)0x0) {
                  if (pCVar9 == 0x0FFFFFFF) {
                    *in_stack_0000000c = *in_stack_0000000c + local_90;
                  }
                  else {
                    iVar7 = (*(((pCVar9->base).base.vtable._uc)->_uc).isDamageable)(&pCVar9->base);
                    local_dc = (uint)(1 < iVar7);
                    *in_stack_0000000c = *in_stack_0000000c + local_8c;
                  }
                  goto LAB_004ae5e7;
                }
              }
              return -1;
            }
            iVar7 = stricmp(local_150,"isFadeFinished");
            if (iVar7 == 0) {
              local_8c = -1;
              sscanf
                        ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( )%n",&local_8c);
              this_ptr_00 = g_CGamePtr;
              if (local_8c < 2) {
                pcVar14 = "Error parsing isFadeFinished function.";
                pcVar15 = &DAT_02d0a460;
                do {
                  cVar1 = *pcVar14;
                  *pcVar15 = cVar1;
                  if (cVar1 == '\0') {
                    return -1;
                  }
                  cVar1 = pcVar14[1];
                  pcVar14 = pcVar14 + 2;
                  pcVar15[1] = cVar1;
                  pcVar15 = pcVar15 + 2;
                } while (cVar1 != '\0');
                return -1;
              }
              *in_stack_0000000c = *in_stack_0000000c + local_8c;
              core_game_cpp_CGame_fadeIn_FUN_004e0b90(this_ptr_00);
            }
            else {
              iVar7 = stricmp(local_150,"isInRange");
              if (iVar7 == 0) {
                local_88 = -1;
                sscanf
                          ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %n",&local_88);
                if (local_88 < 1) {
                  pcVar14 = "Error parsing isInRange parameters.";
                  pcVar15 = &DAT_02d0a460;
                  do {
                    cVar1 = *pcVar14;
                    *pcVar15 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar14[1];
                    pcVar14 = pcVar14 + 2;
                    pcVar15[1] = cVar1;
                    pcVar15 = pcVar15 + 2;
                  } while (cVar1 != '\0');
                  return -1;
                }
                *in_stack_0000000c = *in_stack_0000000c + local_88;
                iVar7 = core_event_cpp_FUN_004aa530(in_stack_00000008,in_stack_0000000c,local_104);
                if (iVar7 < 0) {
                  return -1;
                }
                local_88 = -1;
                sscanf
                          ((char *)(in_stack_00000008 + *in_stack_0000000c)," , %n",&local_88);
                if (local_88 < 1) {
                  pcVar14 = "Error parsing isInRange parameters.";
                  pcVar15 = &DAT_02d0a460;
                  do {
                    cVar1 = *pcVar14;
                    *pcVar15 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar14[1];
                    pcVar14 = pcVar14 + 2;
                    pcVar15[1] = cVar1;
                    pcVar15 = pcVar15 + 2;
                  } while (cVar1 != '\0');
                }
                else {
                  *in_stack_0000000c = *in_stack_0000000c + local_88;
                  iVar7 = core_event_cpp_FUN_004aa530(in_stack_00000008,in_stack_0000000c,local_ec);
                  if (-1 < iVar7) {
                    local_88 = -1;
                    sscanf
                              ((char *)(in_stack_00000008 + *in_stack_0000000c)," , %f )%n",
                               local_84,&local_88);
                    if (local_88 < 3) {
                      pcVar14 = "Error parsing isInRange parameters.";
                      pcVar15 = &DAT_02d0a460;
                      do {
                        cVar1 = *pcVar14;
                        *pcVar15 = cVar1;
                        if (cVar1 == '\0') {
                          return -1;
                        }
                        cVar1 = pcVar14[1];
                        pcVar14 = pcVar14 + 2;
                        pcVar15[1] = cVar1;
                        pcVar15 = pcVar15 + 2;
                      } while (cVar1 != '\0');
                      return -1;
                    }
                    *in_stack_0000000c = *in_stack_0000000c + local_88;
                    goto LAB_004ae5e7;
                  }
                }
                return -1;
              }
              iVar7 = stricmp(local_150,"isOfType");
              if (iVar7 == 0) {
                local_70 = -1;
                sscanf
                          ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ ,] , %[^ )] )%n",
                           acStack_471 + 1,local_665 + 1,&local_70);
                if (local_70 < 3) {
                  pcVar14 = "Error parsing isOfType parameters.";
                  pcVar15 = &DAT_02d0a460;
                  do {
                    cVar1 = *pcVar14;
                    *pcVar15 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar14[1];
                    pcVar14 = pcVar14 + 2;
                    pcVar15[1] = cVar1;
                    pcVar15 = pcVar15 + 2;
                  } while (cVar1 != '\0');
                }
                else {
                  pcVar14 = acStack_471 + 1;
                  uVar12 = 0xffffffff;
                  pcVar15 = pcVar14;
                  do {
                    if (uVar12 == 0) break;
                    uVar12 = uVar12 - 1;
                    cVar1 = *pcVar15;
                    pcVar15 = pcVar15 + (uint)bVar16 * -2 + 1;
                  } while (cVar1 != '\0');
                  SVar13 = ~uVar12 - 1;
                  if (0 < (int)SVar13) {
                    pcVar15 = pcVar14 + SVar13;
                    do {
                      if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
                      SVar13 = SVar13 - 1;
                      pcVar15 = pcVar15 + -1;
                    } while (0 < (int)SVar13);
                  }
                  pcVar14[SVar13] = '\0';
                  local_68 = acStack_471 + 2;
                  while ((g_CharacterClassificationTable[(byte)(acStack_471[1] + 1)] & 2) != 0) {
                    memmove(pcVar14,local_68,SVar13);
                    SVar13 = SVar13 - 1;
                  }
                  uVar12 = 0xffffffff;
                  pcVar14 = local_665 + 1;
                  do {
                    if (uVar12 == 0) break;
                    uVar12 = uVar12 - 1;
                    cVar1 = *pcVar14;
                    pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
                  } while (cVar1 != '\0');
                  SVar13 = ~uVar12 - 1;
                  if (0 < (int)SVar13) {
                    pcVar14 = local_665 + ~uVar12;
                    do {
                      if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
                      SVar13 = SVar13 - 1;
                      pcVar14 = pcVar14 + -1;
                    } while (0 < (int)SVar13);
                  }
                  (local_665 + 1)[SVar13] = '\0';
                  local_64 = local_665 + 2;
                  while ((g_CharacterClassificationTable[(byte)(local_665[1] + 1)] & 2) != 0) {
                    memmove(local_665 + 1,local_64,SVar13);
                    SVar13 = SVar13 - 1;
                  }
                  pCVar9 = core_event_cpp_FUN_004aa400
                                     (acStack_471 + 1,g_CDemonActorClassInfo.name_hash,0x821ff8);
                  if (pCVar9 != (CHero *)0x0) {
                    if (pCVar9 == 0x0FFFFFFF) {
                      *in_stack_0000000c = *in_stack_0000000c + local_70;
                    }
                    else {
                      core_actor_cpp_isOfClass_FUN_0040c6d0((CDemonActor *)pCVar9,local_665 + 1);
                      *in_stack_0000000c = *in_stack_0000000c + local_70;
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
                          ((char *)(in_stack_00000008 + *in_stack_0000000c)," (%[^,], %[^,)]%n",
                           acStack_1b5 + 1,local_4d5 + 1,&local_60);
                if (local_60 < 5) {
                  pcVar14 = "Error parsing isFacing parameters.";
                  pcVar15 = &DAT_02d0a460;
                  do {
                    cVar1 = *pcVar14;
                    *pcVar15 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar14[1];
                    pcVar14 = pcVar14 + 2;
                    pcVar15[1] = cVar1;
                    pcVar15 = pcVar15 + 2;
                  } while (cVar1 != '\0');
                  return -1;
                }
                pcVar14 = acStack_1b5 + 1;
                uVar12 = 0xffffffff;
                pcVar15 = pcVar14;
                do {
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar15 + (uint)bVar16 * -2 + 1;
                } while (cVar1 != '\0');
                SVar13 = ~uVar12 - 1;
                if (0 < (int)SVar13) {
                  pcVar15 = pcVar14 + SVar13;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
                    SVar13 = SVar13 - 1;
                    pcVar15 = pcVar15 + -1;
                  } while (0 < (int)SVar13);
                }
                pcVar14[SVar13] = '\0';
                local_5c = acStack_1b5 + 2;
                while ((g_CharacterClassificationTable[(byte)(acStack_1b5[1] + 1)] & 2) != 0) {
                  memmove(pcVar14,local_5c,SVar13);
                  SVar13 = SVar13 - 1;
                }
                uVar12 = 0xffffffff;
                pcVar14 = local_4d5 + 1;
                do {
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  cVar1 = *pcVar14;
                  pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
                } while (cVar1 != '\0');
                SVar13 = ~uVar12 - 1;
                if (0 < (int)SVar13) {
                  pcVar14 = local_4d5 + ~uVar12;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
                    SVar13 = SVar13 - 1;
                    pcVar14 = pcVar14 + -1;
                  } while (0 < (int)SVar13);
                }
                (local_4d5 + 1)[SVar13] = '\0';
                local_58 = local_4d5 + 2;
                while ((g_CharacterClassificationTable[(byte)(local_4d5[1] + 1)] & 2) != 0) {
                  memmove(local_4d5 + 1,local_58,SVar13);
                  SVar13 = SVar13 - 1;
                }
                pCVar9 = core_event_cpp_FUN_004aa400
                                   (acStack_1b5 + 1,g_CDemonActorClassInfo.name_hash,0x821ff8);
                if ((pCVar9 == (CHero *)0x0) ||
                   (pCVar10 = core_event_cpp_FUN_004aa400
                                        (local_4d5 + 1,g_CDemonActorClassInfo.name_hash,0x821ff8),
                   pCVar10 == (CHero *)0x0)) {
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
                    pcVar14 = "Error parsing isFacing parameters.";
                    pcVar15 = &DAT_02d0a460;
                    do {
                      cVar1 = *pcVar14;
                      *pcVar15 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar14[1];
                      pcVar14 = pcVar14 + 2;
                      pcVar15[1] = cVar1;
                      pcVar15 = pcVar15 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  if (((double)local_a88 < 0.0) || (180 < (double)local_a88)) {
                    pcVar14 = "isFacing() angle must be in range 0..180.";
                    pcVar15 = &DAT_02d0a460;
                    do {
                      cVar1 = *pcVar14;
                      *pcVar15 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar14[1];
                      pcVar14 = pcVar14 + 2;
                      pcVar15[1] = cVar1;
                      pcVar15 = pcVar15 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  *in_stack_0000000c = *in_stack_0000000c + local_60;
                }
                pCVar6 = 0x0FFFFFFF;
                if (*(char *)(in_stack_00000008 + *in_stack_0000000c) != ')') {
                  pcVar14 = "Error parsing isFacing parameters.";
                  pcVar15 = &DAT_02d0a460;
                  do {
                    cVar1 = *pcVar14;
                    *pcVar15 = cVar1;
                    if (cVar1 == '\0') {
                      return -1;
                    }
                    cVar1 = pcVar14[1];
                    pcVar14 = pcVar14 + 2;
                    pcVar15[1] = cVar1;
                    pcVar15 = pcVar15 + 2;
                  } while (cVar1 != '\0');
                  return -1;
                }
                *in_stack_0000000c = *in_stack_0000000c + 1;
                if ((pCVar9 != pCVar6) && (pCVar10 != pCVar6)) {
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            ((CDemonActor *)pCVar9,&local_110,
                             &(pCVar10->base).base.location.position);
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
                            ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",local_218
                             ,&local_54);
                  if (local_54 < 3) {
                    pcVar14 = "Error parsing isLightOn parameters.";
                    pcVar15 = &DAT_02d0a460;
                    do {
                      cVar1 = *pcVar14;
                      *pcVar15 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar14[1];
                      pcVar14 = pcVar14 + 2;
                      pcVar15[1] = cVar1;
                      pcVar15 = pcVar15 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10(g_CDemonSetPtr);
                  if (local_4c == 0) {
                    sprintf
                              (local_a84,"Spotlight %s doesn't exist.",local_218);
                    pcVar14 = local_a84;
                    pcVar15 = &DAT_02d0a460;
                    do {
                      cVar1 = *pcVar14;
                      *pcVar15 = cVar1;
                      if (cVar1 == '\0') {
                        return -1;
                      }
                      cVar1 = pcVar14[1];
                      pcVar14 = pcVar14 + 2;
                      pcVar15[1] = cVar1;
                      pcVar15 = pcVar15 + 2;
                    } while (cVar1 != '\0');
                    return -1;
                  }
                  *in_stack_0000000c = *in_stack_0000000c + local_54;
                }
                else {
                  iVar7 = stricmp(local_150,"isNudityEnabled");
                  if (iVar7 == 0) {
                    local_44 = -1;
                    sscanf
                              ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( )%n",
                               &local_44);
                    if (local_44 < 2) {
                      pcVar14 = "Error parsing isNudityEnabled().";
                      pcVar15 = &DAT_02d0a460;
                      do {
                        cVar1 = *pcVar14;
                        *pcVar15 = cVar1;
                        if (cVar1 == '\0') {
                          return -1;
                        }
                        cVar1 = pcVar14[1];
                        pcVar14 = pcVar14 + 2;
                        pcVar15[1] = cVar1;
                        pcVar15 = pcVar15 + 2;
                      } while (cVar1 != '\0');
                      return -1;
                    }
                    *in_stack_0000000c = *in_stack_0000000c + local_44;
                  }
                  else {
                    iVar7 = stricmp(local_150,"isSfxActive");
                    if (iVar7 == 0) {
                      local_40 = -1;
                      sscanf
                                ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",
                                 acStack_791 + 1,&local_40);
                      if (local_40 < 3) {
                        pcVar14 = "Error parsing isSfxActive parameters.";
                        pcVar15 = &DAT_02d0a460;
                        do {
                          cVar1 = *pcVar14;
                          *pcVar15 = cVar1;
                          if (cVar1 == '\0') {
                            return -1;
                          }
                          cVar1 = pcVar14[1];
                          pcVar14 = pcVar14 + 2;
                          pcVar15[1] = cVar1;
                          pcVar15 = pcVar15 + 2;
                        } while (cVar1 != '\0');
                        return -1;
                      }
                      pcVar14 = acStack_791 + 1;
                      uVar12 = 0xffffffff;
                      pcVar15 = pcVar14;
                      do {
                        if (uVar12 == 0) break;
                        uVar12 = uVar12 - 1;
                        cVar1 = *pcVar15;
                        pcVar15 = pcVar15 + (uint)bVar16 * -2 + 1;
                      } while (cVar1 != '\0');
                      SVar13 = ~uVar12 - 1;
                      if (0 < (int)SVar13) {
                        pcVar15 = pcVar14 + SVar13;
                        do {
                          if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0)
                          break;
                          SVar13 = SVar13 - 1;
                          pcVar15 = pcVar15 + -1;
                        } while (0 < (int)SVar13);
                      }
                      pcVar14[SVar13] = '\0';
                      local_3c = acStack_791 + 2;
                      while ((g_CharacterClassificationTable[(byte)(acStack_791[1] + 1)] & 2) != 0)
                      {
                        memmove(pcVar14,local_3c,SVar13);
                        SVar13 = SVar13 - 1;
                      }
                      local_e0 = 0;
                      core_event_cpp_CEventList_FUN_004b0c40(this_ptr);
                      *in_stack_0000000c = *in_stack_0000000c + local_40;
                    }
                    else {
                      iVar7 = stricmp(local_150,"isTalking");
                      if (iVar7 == 0) {
                        local_38 = -1;
                        sscanf
                                  ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",
                                   local_538,&local_38);
                        if (local_38 < 3) {
                          pcVar14 = "Error parsing isTalking parameters.";
                          pcVar15 = &DAT_02d0a460;
                          do {
                            cVar1 = *pcVar14;
                            *pcVar15 = cVar1;
                            if (cVar1 == '\0') {
                              return -1;
                            }
                            cVar1 = pcVar14[1];
                            pcVar14 = pcVar14 + 2;
                            pcVar15[1] = cVar1;
                            pcVar15 = pcVar15 + 2;
                          } while (cVar1 != '\0');
                          return -1;
                        }
                        pCVar9 = core_event_cpp_FUN_004aa400
                                           (local_538,g_CCharacterClassInfo.name_hash,0x823c14);
                        if (pCVar9 == (CHero *)0x0) {
                          return -1;
                        }
                        *in_stack_0000000c = *in_stack_0000000c + local_38;
                      }
                      else {
                        iVar7 = stricmp(local_150,"isVictim");
                        if (iVar7 == 0) {
                          local_34 = -1;
                          sscanf
                                    ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",
                                     local_40c,&local_34);
                          if (local_34 < 3) {
                            pcVar14 = "Error parsing isVictim parameters.";
                            pcVar15 = &DAT_02d0a460;
                            do {
                              cVar1 = *pcVar14;
                              *pcVar15 = cVar1;
                              if (cVar1 == '\0') {
                                return -1;
                              }
                              cVar1 = pcVar14[1];
                              pcVar14 = pcVar14 + 2;
                              pcVar15[1] = cVar1;
                              pcVar15 = pcVar15 + 2;
                            } while (cVar1 != '\0');
                          }
                          else {
                            local_b4 = core_event_cpp_FUN_004aa400
                                                 (local_40c,g_CCharacterClassInfo.name_hash,0x823c14
                                                 );
                            if (local_b4 != (CHero *)0x0) {
                              local_e0 = 0;
                              if (local_b4 != 0x0FFFFFFF) {
                                local_30 = &(local_b4->base).base.location;
                                local_c0 = 0;
                                for (iVar7 = 0; iVar7 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c);
                                    iVar7 = iVar7 + 1) {
                                  iVar8 = *(int *)(g_CDemonSetPtr->unk4 + (int)local_bc + 8000);
                                  if ((((local_b0 == (char *)*(int *)(iVar8 + 0xbe3c)) &&
                                       (iVar11 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x120))(),
                                       iVar11 < 1)) &&
                                      (iVar11 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x68))(),
                                      iVar11 == 0)) &&
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
                              *in_stack_0000000c = (int)&(local_30->position).x + *in_stack_0000000c
                              ;
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
                                    ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",
                                     local_2e0,&local_20);
                          if (local_20 < 3) {
                            pcVar14 = "Error parsing isWeaponDrawn parameters.";
                            pcVar15 = &DAT_02d0a460;
                            do {
                              cVar1 = *pcVar14;
                              *pcVar15 = cVar1;
                              if (cVar1 == '\0') {
                                return -1;
                              }
                              cVar1 = pcVar14[1];
                              pcVar14 = pcVar14 + 2;
                              pcVar15[1] = cVar1;
                              pcVar15 = pcVar15 + 2;
                            } while (cVar1 != '\0');
                            return -1;
                          }
                          pCVar9 = core_event_cpp_FUN_004aa400
                                             (local_2e0,g_CHeroClassInfo.name_hash,0x2db87d4);
                          if (pCVar9 == (CHero *)0x0) {
                            return -1;
                          }
                          if (pCVar9 == 0x0FFFFFFF) {
                            local_dc = (uint)pCVar9 ^ (uint)0x0FFFFFFF;
                          }
                          else {
                            local_dc = (*(((pCVar9->base).base.vtable._ue)->_ue).enemyfunc3)();
                          }
                          *in_stack_0000000c = *in_stack_0000000c + local_1c;
                        }
                        else {
                          iVar7 = stricmp
                                            (local_150,"isWearingGasMask");
                          if (iVar7 == 0) {
                            local_1c = -1;
                            sscanf
                                      ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n"
                                       ,local_600,&local_1c);
                            if (local_1c < 3) {
                              pcVar14 = "Error parsing isWearingGasMask parameters.";
                              pcVar15 = &DAT_02d0a460;
                              do {
                                cVar1 = *pcVar14;
                                *pcVar15 = cVar1;
                                if (cVar1 == '\0') {
                                  return -1;
                                }
                                cVar1 = pcVar14[1];
                                pcVar14 = pcVar14 + 2;
                                pcVar15[1] = cVar1;
                                pcVar15 = pcVar15 + 2;
                              } while (cVar1 != '\0');
                              return -1;
                            }
                            pCVar9 = core_event_cpp_FUN_004aa400
                                               (local_600,g_CHeroClassInfo.name_hash,0x2db87d4);
                            if (pCVar9 == (CHero *)0x0) {
                              return -1;
                            }
                            if (pCVar9 == 0x0FFFFFFF) {
                              *in_stack_0000000c = *in_stack_0000000c + local_1c;
                            }
                            else {
                              *in_stack_0000000c = *in_stack_0000000c + local_1c;
                            }
                          }
                          else {
                            iVar7 = stricmp(local_150,"randBool")
                            ;
                            if (iVar7 != 0) {
                              iVar7 = stricmp
                                                (local_150,"reachedDest");
                              if (iVar7 != 0) {
                                pcVar14 = "Invalid meta-function";
                                pcVar15 = &DAT_02d0a460;
                                do {
                                  cVar1 = *pcVar14;
                                  *pcVar15 = cVar1;
                                  if (cVar1 == '\0') {
                                    return -1;
                                  }
                                  cVar1 = pcVar14[1];
                                  pcVar14 = pcVar14 + 2;
                                  pcVar15[1] = cVar1;
                                  pcVar15 = pcVar15 + 2;
                                } while (cVar1 != '\0');
                                return -1;
                              }
                              local_cc = -1;
                              sscanf
                                        ((char *)(in_stack_00000008 + *in_stack_0000000c),
                                         " ( %[^ )] )%n",local_7f4,&local_cc);
                              if (local_cc < 3) {
                                pcVar14 = "Error parsing reachedDest parameters.";
                                pcVar15 = &DAT_02d0a460;
                                do {
                                  cVar1 = *pcVar14;
                                  *pcVar15 = cVar1;
                                  if (cVar1 == '\0') {
                                    return -1;
                                  }
                                  cVar1 = pcVar14[1];
                                  pcVar14 = pcVar14 + 2;
                                  pcVar15[1] = cVar1;
                                  pcVar15 = pcVar15 + 2;
                                } while (cVar1 != '\0');
                              }
                              else {
                                pCVar9 = core_event_cpp_FUN_004aa400
                                                   (local_7f4,g_CCharacterClassInfo.name_hash,
                                                    0x823c14);
                                if (pCVar9 != (CHero *)0x0) {
                                  if (pCVar9 == 0x0FFFFFFF) {
                                    *in_stack_0000000c = *in_stack_0000000c + local_cc;
                                  }
                                  else {
                                    iVar7 = (*(((pCVar9->base).base.vtable._uc)->_uc).cfunc26)();
                                    local_dc = (uint)(iVar7 != 0);
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
                              pcVar14 = "Error parsing randBool parameters.";
                              pcVar15 = &DAT_02d0a460;
                              do {
                                cVar1 = *pcVar14;
                                *pcVar15 = cVar1;
                                if (cVar1 == '\0') {
                                  return -1;
                                }
                                cVar1 = pcVar14[1];
                                pcVar14 = pcVar14 + 2;
                                pcVar15[1] = cVar1;
                                pcVar15 = pcVar15 + 2;
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
    pcVar14 = "Error parsing cmp parameters.";
    pcVar15 = &DAT_02d0a460;
    do {
      cVar1 = *pcVar14;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  pcVar14 = acStack_921 + 1;
  uVar12 = 0xffffffff;
  pcVar15 = pcVar14;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar15 + (uint)bVar16 * -2 + 1;
  } while (cVar1 != '\0');
  SVar13 = ~uVar12 - 1;
  if (0 < (int)SVar13) {
    pcVar15 = pcVar14 + SVar13;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
      SVar13 = SVar13 - 1;
      pcVar15 = pcVar15 + -1;
    } while (0 < (int)SVar13);
  }
  pcVar14[SVar13] = '\0';
  local_d4 = acStack_921 + 2;
  while ((g_CharacterClassificationTable[(byte)(acStack_921[1] + 1)] & 2) != 0) {
    memmove(pcVar14,local_d4,SVar13);
    SVar13 = SVar13 - 1;
  }
  uVar12 = 0xffffffff;
  pcVar14 = local_3a9 + 1;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
  } while (cVar1 != '\0');
  SVar13 = ~uVar12 - 1;
  if (0 < (int)SVar13) {
    pcVar14 = local_3a9 + ~uVar12;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
      SVar13 = SVar13 - 1;
      pcVar14 = pcVar14 + -1;
    } while (0 < (int)SVar13);
  }
  (local_3a9 + 1)[SVar13] = '\0';
  local_d0 = local_3a9 + 2;
  while ((g_CharacterClassificationTable[(byte)(local_3a9[1] + 1)] & 2) != 0) {
    memmove(local_3a9 + 1,local_d0,SVar13);
    SVar13 = SVar13 - 1;
  }
  uVar12 = 0xffffffff;
  pcVar14 = local_985 + 1;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
  } while (cVar1 != '\0');
  SVar13 = ~uVar12 - 1;
  if (0 < (int)SVar13) {
    pcVar14 = local_985 + ~uVar12;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2) == 0) break;
      SVar13 = SVar13 - 1;
      pcVar14 = pcVar14 + -1;
    } while (0 < (int)SVar13);
  }
  (local_985 + 1)[SVar13] = '\0';
  local_c8 = local_985 + 2;
  while ((g_CharacterClassificationTable[(byte)(local_985[1] + 1)] & 2) != 0) {
    memmove(local_985 + 1,local_c8,SVar13);
    SVar13 = SVar13 - 1;
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
    pcVar14 = "Invalid relational operator in cmp statement";
    pcVar15 = &DAT_02d0a460;
    do {
      cVar1 = *pcVar14;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  *in_stack_0000000c = *in_stack_0000000c + local_dc;
  iVar8 = sscanf(acStack_921 + 1,"%d",local_c4);
  if (iVar8 != 1) {
    core_event_cpp_CEventList_FUN_004b0830(g_CEventListPtr);
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
    while ((g_CharacterClassificationTable
            [(byte)(*(char *)(in_stack_00000008 + *in_stack_0000000c) + 1)] & 2) != 0) {
      *in_stack_0000000c = *in_stack_0000000c + 1;
    }
    return local_dc;
  }
  core_event_cpp_CEventList_FUN_004b0830(g_CEventListPtr);
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
