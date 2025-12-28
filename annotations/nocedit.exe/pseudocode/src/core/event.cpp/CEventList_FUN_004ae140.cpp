// Name: core_event.cpp_CEventList_FUN_004ae140
// Address: 004ae140
// Address Range: [[004ae140, 004b026e]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004ae140(CEventList * this_ptr)

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
  int iVar8;
  CDemonActor *pCVar9;
  CDemonActor *pCVar10;
  CVector3f *pCVar11;
  uint uVar12;
  SIZE_T SVar13;
  BADSPACEBASE *in_ESP;
  char *pcVar14;
  char *pcVar15;
  byte bVar16;
  int in_stack_00000008;
  int *in_stack_0000000c;
  ulonglong in_stack_fffff574;
  float local_a84;
  char acStack_a80 [252];
  byte local_984 [3];
  char acStack_981 [97];
  byte local_920 [3];
  char acStack_91d [97];
  byte local_8bc [4];
  char acStack_8b8 [96];
  byte local_858 [3];
  char acStack_855 [97];
  byte local_7f4 [100];
  byte local_790 [3];
  char acStack_78d [97];
  byte local_72c [3];
  char acStack_729 [97];
  byte local_6c8 [100];
  byte local_664 [3];
  char acStack_661 [97];
  byte local_600 [100];
  byte local_59c [3];
  char acStack_599 [97];
  byte local_538 [100];
  byte local_4d4 [3];
  char acStack_4d1 [97];
  byte local_470 [3];
  char acStack_46d [97];
  byte local_40c [100];
  byte local_3a8 [3];
  char acStack_3a5 [97];
  byte local_344 [3];
  char acStack_341 [97];
  byte local_2e0 [100];
  byte local_27c [3];
  char acStack_279 [97];
  byte local_218 [4];
  byte auStack_214 [96];
  byte local_1b4 [3];
  char acStack_1b1 [97];
  char local_150 [68];
  CVector3f local_10c;
  float local_100;
  float local_fc;
  float local_f8;
  CVector3f CStack_f4;
  float local_e8;
  float local_e4;
  float local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  char *local_d0;
  char *local_cc;
  int local_c8;
  char *local_c4;
  int local_c0;
  int local_bc;
  char *local_b8;
  int local_b4;
  CDemonActor *local_b0;
  char *local_ac;
  int local_a8;
  char *local_a4;
  int local_a0;
  uint local_9c;
  int local_98;
  char *local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  float afStack_80 [4];
  int local_70;
  int local_6c;
  int local_68;
  char *local_64;
  char *local_60;
  int local_5c;
  char *local_58;
  char *local_54;
  int local_50;
  char *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  char *local_38;
  int local_34;
  int local_30;
  CLocation *pCStack_2c;
  uint local_20;
  int local_1c;
  int local_18;
  float fStack_14;
  
  bVar16 = 0;
  while ((g_CharacterClassificationTable
          [(byte)(*(char *)(in_stack_00000008 + *in_stack_0000000c) + 1)] & 2U) != 0) {
    *in_stack_0000000c = *in_stack_0000000c + 1;
  }
  if (*(char *)(in_stack_00000008 + *in_stack_0000000c) == '.') {
    *in_stack_0000000c = *in_stack_0000000c + 1;
  }
  cVar1 = *(char *)(in_stack_00000008 + *in_stack_0000000c);
  if (cVar1 == '\0') {
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
    *in_stack_0000000c = *in_stack_0000000c + 1;
    pcVar14 = pcVar14 + 1;
    iVar6 = core_event_cpp_FUN_004b0f90();
    pCVar9 = (CDemonActor *)in_stack_fffff574;
  } while (iVar6 != 0);
  *pcVar14 = '\0';
  if (*(char *)(in_stack_00000008 + *in_stack_0000000c) != '(') {
    while ((g_CharacterClassificationTable
            [(byte)(*(char *)(*in_stack_0000000c + in_stack_00000008) + 1)] & 2U) != 0) {
      *in_stack_0000000c = *in_stack_0000000c + 1;
    }
    iVar6 = core_event_cpp_CEventList_FUN_004adc10(this_ptr,local_150);
    return iVar6;
  }
  local_e0 = -NAN;
  iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"cmp");
  if (iVar6 != 0) {
    iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"exists");
    if (iVar6 == 0) {
      local_6c = -1;
      crt_stdio_c_sscanf_FUN_0060013c
                ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",local_344,&local_6c);
      if (local_68 < 3) {
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
      pcVar14 = acStack_341 + 1;
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
          if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2U) == 0) break;
          SVar13 = SVar13 - 1;
          pcVar15 = pcVar15 + -1;
        } while (0 < (int)SVar13);
      }
      pcVar14[SVar13] = '\0';
      local_b8 = acStack_341 + 2;
      while ((g_CharacterClassificationTable[(byte)(acStack_341[1] + 1)] & 2U) != 0) {
        crt_string_c_memmove_FUN_005fe5e0(pcVar14,local_b8,SVar13);
        SVar13 = SVar13 - 1;
      }
      pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa400();
      if ((pCVar9 == (CDemonActor *)0x0) || (pCVar9 == DAT_0065d95c)) {
        local_dc = 0;
      }
      else {
        local_dc = 1;
      }
      *in_stack_0000000c = *in_stack_0000000c + local_68;
    }
    else {
      iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"hasItem");
      if (iVar6 == 0) {
        if (g_CNetGameInstance->connection_type != 0) {
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
        local_b8 = (char *)0xffffffff;
        crt_stdio_c_sscanf_FUN_0060013c
                  ((char *)(in_stack_00000008 + *in_stack_0000000c)," (%[^)])%n",local_858,&local_b8
                  );
        if (local_b4 < 3) {
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
        pcVar14 = acStack_855 + 1;
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
            if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2U) == 0) break;
            SVar13 = SVar13 - 1;
            pcVar15 = pcVar15 + -1;
          } while (0 < (int)SVar13);
        }
        pcVar14[SVar13] = '\0';
        local_ac = acStack_855 + 2;
        while ((g_CharacterClassificationTable[(byte)(acStack_855[1] + 1)] & 2U) != 0) {
          crt_string_c_memmove_FUN_005fe5e0(pcVar14,local_ac,SVar13);
          SVar13 = SVar13 - 1;
        }
        local_dc = 0;
        if ((g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) &&
           (pCVar9 = core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                               (&g_HeroActors[g_LocalHeroIndex]->inventory,acStack_855 + 1),
           pCVar9 != (CDemonActor *)0x0)) {
          local_dc = 1;
        }
        *in_stack_0000000c = *in_stack_0000000c + local_b4;
      }
      else {
        iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"hasItemType");
        if (iVar6 == 0) {
          local_ac = (char *)0xffffffff;
          crt_stdio_c_sscanf_FUN_0060013c
                    ((char *)(in_stack_00000008 + *in_stack_0000000c)," (%[^,], %[^)] )%n",local_59c,
                     local_72c,&local_ac);
          if (local_a8 < 5) {
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
            pcVar14 = acStack_599 + 1;
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
                if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2U) == 0) break;
                SVar13 = SVar13 - 1;
                pcVar15 = pcVar15 + -1;
              } while (0 < (int)SVar13);
            }
            pcVar14[SVar13] = '\0';
            local_4c = acStack_599 + 2;
            while ((g_CharacterClassificationTable[(byte)(acStack_599[1] + 1)] & 2U) != 0) {
              crt_string_c_memmove_FUN_005fe5e0(pcVar14,local_4c,SVar13);
              SVar13 = SVar13 - 1;
            }
            uVar12 = 0xffffffff;
            pcVar14 = acStack_729 + 1;
            do {
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
            } while (cVar1 != '\0');
            SVar13 = ~uVar12 - 1;
            if (0 < (int)SVar13) {
              pcVar14 = acStack_729 + ~uVar12;
              do {
                if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0) break;
                SVar13 = SVar13 - 1;
                pcVar14 = pcVar14 + -1;
              } while (0 < (int)SVar13);
            }
            (acStack_729 + 1)[SVar13] = '\0';
            local_a4 = acStack_729 + 2;
            while ((g_CharacterClassificationTable[(byte)(acStack_729[1] + 1)] & 2U) != 0) {
              crt_string_c_memmove_FUN_005fe5e0(acStack_729 + 1,local_a4,SVar13);
              SVar13 = SVar13 - 1;
            }
            pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa400();
            if (pCVar9 != (CDemonActor *)0x0) {
              if (pCVar9 == DAT_0065d95c) {
                local_dc = 0;
                *in_stack_0000000c = *in_stack_0000000c + local_a8;
              }
              else {
                local_dc = core_inv_cpp_CInventory_hasItemOfClass_FUN_004fe9d0
                                     ((CInventory *)(pCVar9[0x176].create_event + 0x30),
                                      acStack_729 + 1);
                *in_stack_0000000c = *in_stack_0000000c + local_a8;
              }
              goto LAB_004ae5e7;
            }
          }
          return -1;
        }
        iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"hasKeyMask");
        if (iVar6 == 0) {
          if (g_CNetGameInstance->connection_type != 0) {
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
          local_a4 = (char *)0xffffffff;
          crt_stdio_c_sscanf_FUN_0060013c
                    ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %d )%n",&local_a0,
                     &local_a4);
          if (local_a0 < 3) {
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
          if (local_9c == 0) {
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
          if ((local_9c - 1 & local_9c) != 0) {
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
          local_dc = 0;
          if ((g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) &&
             (iVar6 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0
                                (&g_HeroActors[g_LocalHeroIndex]->inventory,local_9c,0), iVar6 != 0)
             ) {
            local_dc = 1;
          }
          *in_stack_0000000c = *in_stack_0000000c + local_a0;
        }
        else {
          iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"isBroken");
          if (iVar6 == 0) {
            local_9c = 0xffffffff;
            crt_stdio_c_sscanf_FUN_0060013c
                      ((char *)(in_stack_00000008 + *in_stack_0000000c)," (%[^)])%n",local_27c,
                       &local_9c);
            if (local_98 < 3) {
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
              pcVar14 = acStack_279 + 1;
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
                  if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2U) == 0) break;
                  SVar13 = SVar13 - 1;
                  pcVar15 = pcVar15 + -1;
                } while (0 < (int)SVar13);
              }
              pcVar14[SVar13] = '\0';
              local_94 = acStack_279 + 2;
              while ((g_CharacterClassificationTable[(byte)(acStack_279[1] + 1)] & 2U) != 0) {
                crt_string_c_memmove_FUN_005fe5e0(pcVar14,local_94,SVar13);
                SVar13 = SVar13 - 1;
              }
              pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa400();
              if (pCVar9 != (CDemonActor *)0x0) {
                if (pCVar9 == DAT_0065d95c) {
                  local_dc = 0;
                  *in_stack_0000000c = *in_stack_0000000c + local_98;
                }
                else {
                  local_dc = (uint)(pCVar9[1].location.position.z != 0.0);
                  *in_stack_0000000c = *in_stack_0000000c + local_98;
                }
                goto LAB_004ae5e7;
              }
            }
            return -1;
          }
          iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"isCurrentCamera");
          if (iVar6 == 0) {
            local_94 = (char *)0xffffffff;
            crt_stdio_c_sscanf_FUN_0060013c
                      ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",local_8bc,
                       &local_94);
            if (local_90 < 3) {
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
            local_dc = 0;
            if ((-1 < g_CDemonSetPtr->selected_camera_index) &&
               (iVar6 = crt_string_c_stricmp_FUN_005fe7f0
                                  (g_CDemonSetPtr->cameras[g_CDemonSetPtr->selected_camera_index].
                                   name,acStack_8b8), iVar6 == 0)) {
              local_dc = 1;
            }
            *in_stack_0000000c = *in_stack_0000000c + local_90;
          }
          else {
            iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"isDead");
            if (iVar6 == 0) {
              local_90 = -1;
              crt_stdio_c_sscanf_FUN_0060013c
                        ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",local_6c8,
                         &local_90);
              if (local_8c < 3) {
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
                pCVar10 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                if (pCVar10 != (CDemonActor *)0x0) {
                  if (pCVar10 == DAT_0065d95c) {
                    local_dc = 0;
                    *in_stack_0000000c = *in_stack_0000000c + local_8c;
                  }
                  else {
                    iVar6 = (*pCVar10->vtable[1].hasCollision)(pCVar10,(SCollisionInfo *)pCVar9);
                    local_dc = (uint)(1 < iVar6);
                    *in_stack_0000000c = *in_stack_0000000c + local_8c;
                  }
                  goto LAB_004ae5e7;
                }
              }
              return -1;
            }
            iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"isFadeFinished");
            if (iVar6 == 0) {
              local_8c = -1;
              crt_stdio_c_sscanf_FUN_0060013c
                        ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( )%n",&local_8c);
              this_ptr_00 = g_CGamePtr;
              if (local_88 < 2) {
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
              *in_stack_0000000c = *in_stack_0000000c + local_88;
              local_dc = core_game_cpp_CGame_fadeIn_FUN_004e0b90(this_ptr_00);
            }
            else {
              iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"isInRange");
              if (iVar6 == 0) {
                local_88 = -1;
                crt_stdio_c_sscanf_FUN_0060013c
                          ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %n",&local_88);
                if (local_84 < 1) {
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
                *in_stack_0000000c = *in_stack_0000000c + local_84;
                iVar6 = core_event_cpp_FUN_004aa530();
                if (iVar6 < 0) {
                  return -1;
                }
                local_84 = -1;
                crt_stdio_c_sscanf_FUN_0060013c
                          ((char *)(in_stack_00000008 + *in_stack_0000000c)," , %n",&local_84);
                if (local_84 < 1) {
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
                  *in_stack_0000000c = *in_stack_0000000c + local_84;
                  iVar7 = core_event_cpp_FUN_004aa530();
                  if (-1 < iVar7) {
                    local_84 = -1;
                    crt_stdio_c_sscanf_FUN_0060013c
                              ((char *)(in_stack_00000008 + *in_stack_0000000c)," , %f )%n",
                               afStack_80,&local_84);
                    if (local_84 < 3) {
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
                    *in_stack_0000000c = *in_stack_0000000c + local_84;
                    if ((iVar6 == 0) || (iVar7 == 0)) {
                      local_dc = 0;
                    }
                    else {
                      local_dc = (uint)(SQRT((local_f8 - local_e0) * (local_f8 - local_e0) +
                                             (local_fc - local_e4) * (local_fc - local_e4) +
                                             (local_100 - local_e8) * (local_100 - local_e8)) <=
                                       afStack_80[0]);
                    }
                    goto LAB_004ae5e7;
                  }
                }
                return -1;
              }
              iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"isOfType");
              if (iVar6 == 0) {
                local_70 = -1;
                crt_stdio_c_sscanf_FUN_0060013c
                          ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ ,] , %[^ )] )%n",local_470,
                           local_664,&local_70);
                if (local_6c < 3) {
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
                  pcVar14 = acStack_46d + 1;
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
                      if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2U) == 0)
                      break;
                      SVar13 = SVar13 - 1;
                      pcVar15 = pcVar15 + -1;
                    } while (0 < (int)SVar13);
                  }
                  pcVar14[SVar13] = '\0';
                  local_64 = acStack_46d + 2;
                  while ((g_CharacterClassificationTable[(byte)(acStack_46d[1] + 1)] & 2U) != 0) {
                    crt_string_c_memmove_FUN_005fe5e0(pcVar14,local_64,SVar13);
                    SVar13 = SVar13 - 1;
                  }
                  uVar12 = 0xffffffff;
                  pcVar14 = acStack_661 + 1;
                  do {
                    if (uVar12 == 0) break;
                    uVar12 = uVar12 - 1;
                    cVar1 = *pcVar14;
                    pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
                  } while (cVar1 != '\0');
                  SVar13 = ~uVar12 - 1;
                  if (0 < (int)SVar13) {
                    pcVar14 = acStack_661 + ~uVar12;
                    do {
                      if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0)
                      break;
                      SVar13 = SVar13 - 1;
                      pcVar14 = pcVar14 + -1;
                    } while (0 < (int)SVar13);
                  }
                  (acStack_661 + 1)[SVar13] = '\0';
                  local_60 = acStack_661 + 2;
                  while ((g_CharacterClassificationTable[(byte)(acStack_661[1] + 1)] & 2U) != 0) {
                    crt_string_c_memmove_FUN_005fe5e0(acStack_661 + 1,local_60,SVar13);
                    SVar13 = SVar13 - 1;
                  }
                  pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                  if (pCVar9 != (CDemonActor *)0x0) {
                    if (pCVar9 == DAT_0065d95c) {
                      local_dc = 0;
                      *in_stack_0000000c = *in_stack_0000000c + local_6c;
                    }
                    else {
                      local_dc = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar9,acStack_661 + 1);
                      *in_stack_0000000c = *in_stack_0000000c + local_6c;
                    }
                    goto LAB_004ae5e7;
                  }
                }
                return -1;
              }
              iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"isFacing");
              if (iVar6 == 0) {
                local_60 = (char *)0xffffffff;
                crt_stdio_c_sscanf_FUN_0060013c
                          ((char *)(in_stack_00000008 + *in_stack_0000000c)," (%[^,], %[^,)]%n",local_1b4,
                           local_4d4,&local_60);
                if (local_5c < 5) {
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
                pcVar14 = acStack_1b1 + 1;
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
                    if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2U) == 0) break;
                    SVar13 = SVar13 - 1;
                    pcVar15 = pcVar15 + -1;
                  } while (0 < (int)SVar13);
                }
                pcVar14[SVar13] = '\0';
                local_58 = acStack_1b1 + 2;
                while ((g_CharacterClassificationTable[(byte)(acStack_1b1[1] + 1)] & 2U) != 0) {
                  crt_string_c_memmove_FUN_005fe5e0(pcVar14,local_58,SVar13);
                  SVar13 = SVar13 - 1;
                }
                uVar12 = 0xffffffff;
                pcVar14 = acStack_4d1 + 1;
                do {
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  cVar1 = *pcVar14;
                  pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
                } while (cVar1 != '\0');
                SVar13 = ~uVar12 - 1;
                if (0 < (int)SVar13) {
                  pcVar14 = acStack_4d1 + ~uVar12;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0) break;
                    SVar13 = SVar13 - 1;
                    pcVar14 = pcVar14 + -1;
                  } while (0 < (int)SVar13);
                }
                (acStack_4d1 + 1)[SVar13] = '\0';
                local_54 = acStack_4d1 + 2;
                while ((g_CharacterClassificationTable[(byte)(acStack_4d1[1] + 1)] & 2U) != 0) {
                  crt_string_c_memmove_FUN_005fe5e0(acStack_4d1 + 1,local_54,SVar13);
                  SVar13 = SVar13 - 1;
                }
                pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                if ((pCVar9 == (CDemonActor *)0x0) ||
                   (pCVar10 = (CDemonActor *)core_event_cpp_FUN_004aa400(),
                   pCVar10 == (CDemonActor *)0x0)) {
                  return -1;
                }
                *in_stack_0000000c = *in_stack_0000000c + local_5c;
                local_a84 = 45.0;
                if (*(char *)(in_stack_00000008 + *in_stack_0000000c) == ',') {
                  local_5c = -1;
                  crt_stdio_c_sscanf_FUN_0060013c
                            ((char *)(in_stack_00000008 + *in_stack_0000000c),",%f %n",
                             &local_a84,&local_5c);
                  if (local_5c < 2) {
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
                  if (((double)local_a84 < 0.0) || (180 < (double)local_a84)) {
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
                  *in_stack_0000000c = *in_stack_0000000c + local_5c;
                }
                pCVar5 = DAT_0065d95c;
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
                if ((pCVar9 == pCVar5) || (pCVar10 == pCVar5)) {
                  local_dc = 0;
                }
                else {
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            (pCVar9,&local_10c,&(pCVar10->location).position);
                  local_10c.y = 0.0;
                  pCVar11 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                      (&CStack_f4,&local_10c);
                  if (local_a84 * (float)3.1415926535000001 * (float)0.0055555555555555497 < ABS(pCVar11->y))
                  {
                    local_dc = 0;
                  }
                  else {
                    local_dc = 1;
                  }
                }
              }
              else {
                iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"isLightOn");
                if (iVar6 == 0) {
                  local_54 = (char *)0xffffffff;
                  crt_stdio_c_sscanf_FUN_0060013c
                            ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",local_218
                             ,&local_54);
                  if (local_50 < 3) {
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
                  core_set_cpp_CDemonSet_FUN_00570f10(g_CDemonSetPtr);
                  if (local_48 == 0) {
                    crt_stdio_c_sprintf_FUN_005fdbd0
                              (acStack_a80,"Spotlight %s doesn't exist.",auStack_214);
                    pcVar14 = acStack_a80;
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
                  local_dc = (uint)(*(int *)(local_44 + 0x1cb4) != 0);
                  *in_stack_0000000c = *in_stack_0000000c + local_50;
                }
                else {
                  iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"isNudityEnabled");
                  if (iVar6 == 0) {
                    local_44 = -1;
                    crt_stdio_c_sscanf_FUN_0060013c
                              ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( )%n",
                               &local_44);
                    if (local_40 < 2) {
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
                    local_dc = (uint)(g_CGamePtr->nudity_flag != 0);
                    *in_stack_0000000c = *in_stack_0000000c + local_40;
                  }
                  else {
                    iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"isSfxActive");
                    if (iVar6 == 0) {
                      local_40 = -1;
                      crt_stdio_c_sscanf_FUN_0060013c
                                ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",
                                 local_790,&local_40);
                      if (local_3c < 3) {
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
                      pcVar14 = acStack_78d + 1;
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
                          if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2U) == 0)
                          break;
                          SVar13 = SVar13 - 1;
                          pcVar15 = pcVar15 + -1;
                        } while (0 < (int)SVar13);
                      }
                      pcVar14[SVar13] = '\0';
                      local_38 = acStack_78d + 2;
                      while ((g_CharacterClassificationTable[(byte)(acStack_78d[1] + 1)] & 2U) != 0)
                      {
                        crt_string_c_memmove_FUN_005fe5e0(pcVar14,local_38,SVar13);
                        SVar13 = SVar13 - 1;
                      }
                      local_dc = 0;
                      iVar6 = core_event_cpp_CEventList_FUN_004b0c40(this_ptr);
                      if (iVar6 != 0) {
                        local_dc = 1;
                      }
                      *in_stack_0000000c = *in_stack_0000000c + local_3c;
                    }
                    else {
                      iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"isTalking");
                      if (iVar6 == 0) {
                        local_38 = (char *)0xffffffff;
                        crt_stdio_c_sscanf_FUN_0060013c
                                  ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",
                                   local_538,&local_38);
                        if (local_34 < 3) {
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
                        pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                        if (pCVar9 == (CDemonActor *)0x0) {
                          return -1;
                        }
                        if (pCVar9 == DAT_0065d95c) {
                          local_dc = (uint)pCVar9 ^ (uint)DAT_0065d95c;
                        }
                        else if (*(float *)pCVar9[0x1c].create_event <= 0.0) {
                          local_dc = 0;
                        }
                        else {
                          local_dc = 1;
                        }
                        *in_stack_0000000c = *in_stack_0000000c + local_34;
                      }
                      else {
                        iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"isVictim");
                        if (iVar6 == 0) {
                          local_34 = -1;
                          crt_stdio_c_sscanf_FUN_0060013c
                                    ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",
                                     local_40c,&local_34);
                          if (local_30 < 3) {
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
                            local_b0 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                            if (local_b0 != (CDemonActor *)0x0) {
                              local_dc = 0;
                              if (local_b0 != DAT_0065d95c) {
                                pCStack_2c = &local_b0->location;
                                local_bc = 0;
                                for (iVar6 = 0;
                                    iVar6 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c);
                                    iVar6 = iVar6 + 1) {
                                  iVar7 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 +
                                                  local_bc + 8000);
                                  if ((((local_b0 == *(CDemonActor **)(iVar7 + 0xbe3c)) &&
                                       (iVar8 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x120))(),
                                       iVar8 < 1)) &&
                                      (iVar8 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x68))(),
                                      iVar8 == 0)) &&
                                     (fVar2 = *(float *)(iVar7 + 0x20) - (pCStack_2c->position).x,
                                     fVar4 = *(float *)(iVar7 + 0x24) - (pCStack_2c->position).y,
                                     fVar3 = *(float *)(iVar7 + 0x28) - (pCStack_2c->position).z,
                                     SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) <=
                                     (float)30)) {
                                    local_dc = 1;
                                    break;
                                  }
                                  local_bc = local_bc + 4;
                                }
                              }
                              *in_stack_0000000c = *in_stack_0000000c + local_30;
                              goto LAB_004ae5e7;
                            }
                          }
                          return -1;
                        }
                        iVar6 = crt_string_c_stricmp_FUN_005fe7f0
                                          (local_150,"isWeaponDrawn");
                        if (iVar6 == 0) {
                          local_20 = 0xffffffff;
                          crt_stdio_c_sscanf_FUN_0060013c
                                    ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n",
                                     local_2e0,&local_20);
                          if (local_1c < 3) {
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
                          pCVar10 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                          if (pCVar10 == (CDemonActor *)0x0) {
                            return -1;
                          }
                          if (pCVar10 == DAT_0065d95c) {
                            local_dc = (uint)pCVar10 ^ (uint)DAT_0065d95c;
                          }
                          else {
                            local_dc = (*pCVar10->vtable[1].processMeleeHit)(pCVar10,(int)pCVar9);
                          }
                          *in_stack_0000000c = *in_stack_0000000c + local_1c;
                        }
                        else {
                          iVar6 = crt_string_c_stricmp_FUN_005fe7f0
                                            (local_150,"isWearingGasMask");
                          if (iVar6 == 0) {
                            local_1c = -1;
                            crt_stdio_c_sscanf_FUN_0060013c
                                      ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %[^ )] )%n"
                                       ,local_600,&local_1c);
                            if (local_18 < 3) {
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
                            pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                            if (pCVar9 == (CDemonActor *)0x0) {
                              return -1;
                            }
                            if (pCVar9 == DAT_0065d95c) {
                              local_dc = 0;
                              *in_stack_0000000c = *in_stack_0000000c + local_18;
                            }
                            else {
                              local_dc = (uint)(pCVar9[0x179].field16_0x100 == 2);
                              *in_stack_0000000c = *in_stack_0000000c + local_18;
                            }
                          }
                          else {
                            iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_150,"randBool")
                            ;
                            if (iVar6 != 0) {
                              iVar6 = crt_string_c_stricmp_FUN_005fe7f0
                                                (local_150,"reachedDest");
                              if (iVar6 != 0) {
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
                              local_cc = (char *)0xffffffff;
                              crt_stdio_c_sscanf_FUN_0060013c
                                        ((char *)(in_stack_00000008 + *in_stack_0000000c),
                                         " ( %[^ )] )%n",local_7f4,&local_cc);
                              if (local_c8 < 3) {
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
                                pCVar10 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                                if (pCVar10 != (CDemonActor *)0x0) {
                                  if (pCVar10 == DAT_0065d95c) {
                                    local_dc = 0;
                                    *in_stack_0000000c = *in_stack_0000000c + local_c8;
                                  }
                                  else {
                                    iVar6 = (*pCVar10->vtable[1].onPickup)(pCVar10,pCVar9);
                                    local_dc = (uint)(iVar6 != 0);
                                    *in_stack_0000000c = *in_stack_0000000c + local_c8;
                                  }
                                  goto LAB_004ae5e7;
                                }
                              }
                              return -1;
                            }
                            local_d8 = -1;
                            crt_stdio_c_sscanf_FUN_0060013c
                                      ((char *)(in_stack_00000008 + *in_stack_0000000c),
                                       " ( %f )%n",&local_18,&local_d8);
                            if (local_d4 < 3) {
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
                            local_dc = core_actor_cpp_randomChance_FUN_0040cd10(fStack_14);
                            *in_stack_0000000c = *in_stack_0000000c + local_d4;
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
  crt_stdio_c_sscanf_FUN_0060013c
            ((char *)(in_stack_00000008 + *in_stack_0000000c)," ( %s %s %[^ )] )%n",local_920,local_984,
             local_3a8,&local_dc);
  if (local_d8 < 3) {
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
  pcVar14 = acStack_91d + 1;
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
      if ((g_CharacterClassificationTable[(byte)(pcVar15[-1] + 1)] & 2U) == 0) break;
      SVar13 = SVar13 - 1;
      pcVar15 = pcVar15 + -1;
    } while (0 < (int)SVar13);
  }
  pcVar14[SVar13] = '\0';
  local_d0 = acStack_91d + 2;
  while ((g_CharacterClassificationTable[(byte)(acStack_91d[1] + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(pcVar14,local_d0,SVar13);
    SVar13 = SVar13 - 1;
  }
  uVar12 = 0xffffffff;
  pcVar14 = acStack_3a5 + 1;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
  } while (cVar1 != '\0');
  SVar13 = ~uVar12 - 1;
  if (0 < (int)SVar13) {
    pcVar14 = acStack_3a5 + ~uVar12;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0) break;
      SVar13 = SVar13 - 1;
      pcVar14 = pcVar14 + -1;
    } while (0 < (int)SVar13);
  }
  (acStack_3a5 + 1)[SVar13] = '\0';
  local_cc = acStack_3a5 + 2;
  while ((g_CharacterClassificationTable[(byte)(acStack_3a5[1] + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(acStack_3a5 + 1,local_cc,SVar13);
    SVar13 = SVar13 - 1;
  }
  uVar12 = 0xffffffff;
  pcVar14 = acStack_981 + 1;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
  } while (cVar1 != '\0');
  SVar13 = ~uVar12 - 1;
  if (0 < (int)SVar13) {
    pcVar14 = acStack_981 + ~uVar12;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0) break;
      SVar13 = SVar13 - 1;
      pcVar14 = pcVar14 + -1;
    } while (0 < (int)SVar13);
  }
  (acStack_981 + 1)[SVar13] = '\0';
  local_c4 = acStack_981 + 2;
  while ((g_CharacterClassificationTable[(byte)(acStack_981[1] + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(acStack_981 + 1,local_c4,SVar13);
    SVar13 = SVar13 - 1;
  }
  iVar7 = crt_string_c_strcmp_FUN_005fef20(acStack_981 + 1,"<");
  iVar6 = 0;
  if (iVar7 != 0) {
    iVar6 = crt_string_c_strcmp_FUN_005fef20(acStack_981 + 1,"<=");
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = crt_string_c_strcmp_FUN_005fef20(acStack_981 + 1,"==");
      if (iVar6 == 0) {
        iVar6 = 2;
      }
      else {
        iVar6 = crt_string_c_strcmp_FUN_005fef20(acStack_981 + 1,"!=");
        if (iVar6 == 0) {
          iVar6 = 3;
        }
        else {
          iVar6 = crt_string_c_strcmp_FUN_005fef20(acStack_981 + 1,">");
          if (iVar6 == 0) {
            iVar6 = 5;
          }
          else {
            iVar6 = crt_string_c_strcmp_FUN_005fef20(acStack_981 + 1,">=");
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
  *in_stack_0000000c = *in_stack_0000000c + local_d8;
  iVar8 = crt_stdio_c_sscanf_FUN_0060013c(acStack_91d + 1,"%d",&local_c0);
  iVar7 = local_c0;
  if (iVar8 != 1) {
    iVar7 = core_event_cpp_CEventList_FUN_004b0830(g_CEventListPtr);
  }
  iVar8 = crt_stdio_c_sscanf_FUN_0060013c(acStack_3a5 + 1,"%d",&local_70);
  if (iVar8 == 1) {
    switch(iVar6) {
    case 0:
switchD_004ae724_caseD_0:
      local_dc = (uint)(iVar7 < local_70);
      break;
    case 1:
switchD_004ae724_caseD_1:
      local_dc = (uint)(iVar7 <= local_70);
      break;
    case 2:
switchD_004ae724_caseD_2:
      local_dc = (uint)(iVar7 == local_70);
      break;
    case 3:
switchD_004ae724_caseD_3:
      local_dc = (uint)(iVar7 != local_70);
      break;
    case 4:
switchD_004ae724_caseD_4:
      local_dc = (uint)(local_70 <= iVar7);
      break;
    case 5:
switchD_004ae724_caseD_5:
      local_dc = (uint)(local_70 < iVar7);
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
  local_70 = core_event_cpp_CEventList_FUN_004b0830(g_CEventListPtr);
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
