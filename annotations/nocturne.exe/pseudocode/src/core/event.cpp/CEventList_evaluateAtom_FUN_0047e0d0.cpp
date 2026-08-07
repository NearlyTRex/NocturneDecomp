// Name: core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0
// Address: 0047e0d0
// Address Range: [[0047e0d0, 00480215]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(CEventList *this_ptr,char *expression,int *parse_position)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(CEventList *this_ptr,char *expression,int *parse_position)

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
  CVector3f *pCVar14;
  uint uVar15;
  SIZE_T SVar16;
  char *pcVar17;
  char *pcVar18;
  byte bVar19;
  float local_a88;
  char local_a84 [255];
  char local_985 [101];
  char local_920 [99];
  char acStack_8bd [101];
  char local_858 [99];
  char acStack_7f5 [100];
  char acStack_791 [100];
  char acStack_72d [100];
  char local_6c9 [101];
  char local_664 [100];
  char local_600 [99];
  char acStack_59d [101];
  char local_538 [99];
  char acStack_4d5 [101];
  char local_470 [99];
  char acStack_40d [100];
  char local_3a9 [100];
  char local_345 [100];
  char acStack_2e1 [101];
  char local_27c [99];
  char local_219 [101];
  char local_1b4 [100];
  char local_150 [64];
  CVector3f local_110;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  int local_e0;
  uint local_dc;
  int local_d8;
  float local_d4;
  char *local_d0;
  char *local_cc;
  char *local_c8;
  int local_c4;
  int local_c0;
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
  CLocation *local_34;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar19 = 0;
  while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
    *parse_position = *parse_position + 1;
  }
  if (expression[*parse_position] == '.') {
    *parse_position = *parse_position + 1;
  }
  bVar2 = expression[*parse_position];
  if (bVar2 == 0) {
    pcVar17 = "Unexpected end of string";
    pcVar18 = &DAT_01c08b60;
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
    iVar7 = core_event_cpp_CEventList_evaluateLogicalExpr_FUN_00480220
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
    pcVar17 = "Matching ')' is missing";
    pcVar18 = &DAT_01c08b60;
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
  if (bVar2 == 0x21) {
    *parse_position = *parse_position + 1;
    iVar7 = core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(this_ptr,expression,parse_position);
    if (-1 < iVar7) {
      return (uint)(iVar7 == 0);
    }
    return iVar7;
  }
  iVar7 = core_event_cpp_isValidIdentifierChar_FUN_00480f40((uint)bVar2);
  if (iVar7 == 0) {
    pcVar17 = "Syntax error";
    pcVar18 = &DAT_01c08b60;
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
  pcVar17 = local_150;
  do {
    *pcVar17 = expression[*parse_position];
    iVar7 = *parse_position;
    *parse_position = iVar7 + 1;
    pcVar17 = pcVar17 + 1;
    iVar7 = core_event_cpp_isValidIdentifierChar_FUN_00480f40((uint)(byte)expression[iVar7 + 1]);
  } while (iVar7 != 0);
  *pcVar17 = '\0';
  if (expression[*parse_position] != '(') {
    while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
    }
    iVar7 = core_event_cpp_CEventList_resolveVariable_FUN_0047dba0(this_ptr,local_150);
    return iVar7;
  }
  local_dc = 0xffffffff;
  iVar7 = _stricmp(local_150,"cmp");
  if (iVar7 != 0) {
    iVar7 = _stricmp(local_150,"exists");
    if (iVar7 == 0) {
      local_6c = -1;
      sscanf
                (expression + *parse_position," ( %[^ )] )%n",acStack_2e1 + 1,&local_6c);
      if (local_6c < 3) {
        pcVar17 = "Error parsing exists parameters.";
        pcVar18 = &DAT_01c08b60;
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
      pcVar17 = acStack_2e1 + 1;
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
          if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
          SVar16 = SVar16 - 1;
          pcVar18 = pcVar18 + -1;
        } while (0 < (int)SVar16);
      }
      pcVar17[SVar16] = '\0';
      local_bc = acStack_2e1 + 2;
      while ((g_CharacterClassificationTable[(byte)(acStack_2e1[1] + 1)] & 2) != 0) {
        memmove(pcVar17,local_bc,SVar16);
        SVar16 = SVar16 - 1;
      }
      pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_0047a390
                                   (acStack_2e1 + 1,g_CDemonActorActorType_00763e48.name_hash,
                                    g_CDemonActorActorType_00763e48.class_name);
      if ((pCVar10 == (CHero *)0x0) || (pCVar10 == 0x0FFFFFFF)) {
        local_dc = 0;
      }
      else {
        local_dc = 1;
      }
      *parse_position = *parse_position + local_6c;
    }
    else {
      iVar7 = _stricmp(local_150,"hasItem");
      if (iVar7 == 0) {
        if (g_CNetGame_PTR_005bdee0->connection_type != CONNECTION_NONE) {
          pcVar17 = "Can't use hasItem condition in multi-player";
          pcVar18 = &DAT_01c08b60;
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
        local_b8 = -1;
        sscanf
                  (expression + *parse_position," (%[^)])%n",acStack_7f5 + 1,&local_b8);
        if (local_b8 < 3) {
          pcVar17 = "Error parsing hasItem parameters.";
          pcVar18 = &DAT_01c08b60;
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
        pcVar17 = acStack_7f5 + 1;
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
            if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
            SVar16 = SVar16 - 1;
            pcVar18 = pcVar18 + -1;
          } while (0 < (int)SVar16);
        }
        pcVar17[SVar16] = '\0';
        local_b0 = acStack_7f5 + 2;
        while ((g_CharacterClassificationTable[(byte)(acStack_7f5[1] + 1)] & 2) != 0) {
          memmove(pcVar17,local_b0,SVar16);
          SVar16 = SVar16 - 1;
        }
        iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        local_dc = 0;
        if ((iVar7 != 0) &&
           (pCVar11 = core_inv_cpp_CInventory_findItemByName_FUN_004c0710
                                ((CInventory *)(iVar7 + 0x1f5a0),acStack_7f5 + 1),
           pCVar11 != (CDemonActor *)0x0)) {
          local_dc = 1;
        }
        *parse_position = *parse_position + local_b8;
      }
      else {
        iVar7 = _stricmp(local_150,"hasItemType");
        if (iVar7 == 0) {
          local_ac = -1;
          sscanf
                    (expression + *parse_position," (%[^,], %[^)] )%n",acStack_72d + 1,local_6c9 + 1,
                     &local_ac);
          if (local_ac < 5) {
            pcVar17 = "Error parsing hasItemType parameters.";
            pcVar18 = &DAT_01c08b60;
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
            pcVar17 = acStack_72d + 1;
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
                if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                SVar16 = SVar16 - 1;
                pcVar18 = pcVar18 + -1;
              } while (0 < (int)SVar16);
            }
            pcVar17[SVar16] = '\0';
            local_50 = acStack_72d + 2;
            while ((g_CharacterClassificationTable[(byte)(acStack_72d[1] + 1)] & 2) != 0) {
              memmove(pcVar17,local_50,SVar16);
              SVar16 = SVar16 - 1;
            }
            uVar15 = 0xffffffff;
            pcVar17 = local_6c9 + 1;
            do {
              if (uVar15 == 0) break;
              uVar15 = uVar15 - 1;
              cVar1 = *pcVar17;
              pcVar17 = pcVar17 + (uint)bVar19 * -2 + 1;
            } while (cVar1 != '\0');
            SVar16 = ~uVar15 - 1;
            if (0 < (int)SVar16) {
              pcVar17 = local_6c9 + ~uVar15;
              do {
                if ((g_CharacterClassificationTable[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                SVar16 = SVar16 - 1;
                pcVar17 = pcVar17 + -1;
              } while (0 < (int)SVar16);
            }
            (local_6c9 + 1)[SVar16] = '\0';
            local_a8 = local_6c9 + 2;
            while ((g_CharacterClassificationTable[(byte)(local_6c9[1] + 1)] & 2) != 0) {
              memmove(local_6c9 + 1,local_a8,SVar16);
              SVar16 = SVar16 - 1;
            }
            pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_0047a390
                                         (acStack_72d + 1,g_CHeroActorType_01cae0ec.name_hash,
                                          g_CHeroActorType_01cae0ec.class_name);
            if (pCVar10 != (CHero *)0x0) {
              if (pCVar10 == 0x0FFFFFFF) {
                local_dc = 0;
                *parse_position = *parse_position + local_ac;
              }
              else {
                local_dc = core_inv_cpp_CInventory_hasItemOfClass_FUN_004c0760
                                     ((CInventory *)((int)(&pCVar10->path_map + 1) + 4),
                                      local_6c9 + 1);
                *parse_position = *parse_position + local_ac;
              }
              goto LAB_0047e580;
            }
          }
          return -1;
        }
        iVar7 = _stricmp(local_150,"hasKeyMask");
        if (iVar7 == 0) {
          if (g_CNetGame_PTR_005bdee0->connection_type != CONNECTION_NONE) {
            pcVar17 = "Can't use hasKeyMask condition in multi-player";
            pcVar18 = &DAT_01c08b60;
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
          local_a4 = -1;
          sscanf
                    (expression + *parse_position," ( %d )%n",&local_a0,&local_a4);
          if (local_a4 < 3) {
            pcVar17 = "Error parsing hasKeyMask parameters.";
            pcVar18 = &DAT_01c08b60;
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
          if (local_a0 == 0) {
            pcVar17 = "hasKeyMask(0) always returns false!";
            pcVar18 = &DAT_01c08b60;
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
          if ((local_a0 - 1 & local_a0) != 0) {
            pcVar17 = "mask value must be a power of 2.\n(To test for multiple keys, use multiple hasKeyMask() tests)";
            pcVar18 = &DAT_01c08b60;
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
          iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          local_dc = 0;
          if ((iVar7 != 0) &&
             (iVar7 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004c31b0
                                ((CInventory *)(iVar7 + 0x1f5a0),local_a0,0), iVar7 != 0)) {
            local_dc = 1;
          }
          *parse_position = *parse_position + local_a4;
        }
        else {
          iVar7 = _stricmp(local_150,"isBroken");
          if (iVar7 == 0) {
            local_9c = -1;
            sscanf
                      (expression + *parse_position," (%[^)])%n",acStack_59d + 1,&local_9c);
            if (local_9c < 3) {
              pcVar17 = "Error parsing isBroken parameters.";
              pcVar18 = &DAT_01c08b60;
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
              pcVar17 = acStack_59d + 1;
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
                  if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                  SVar16 = SVar16 - 1;
                  pcVar18 = pcVar18 + -1;
                } while (0 < (int)SVar16);
              }
              pcVar17[SVar16] = '\0';
              local_98 = acStack_59d + 2;
              while ((g_CharacterClassificationTable[(byte)(acStack_59d[1] + 1)] & 2) != 0) {
                memmove(pcVar17,local_98,SVar16);
                SVar16 = SVar16 - 1;
              }
              pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_0047a390
                                           (acStack_59d + 1,g_CGlassActorType_01c78c40.name_hash,
                                            g_CGlassActorType_01c78c40.class_name);
              if (pCVar10 != (CHero *)0x0) {
                if (pCVar10 == 0x0FFFFFFF) {
                  local_dc = 0;
                  *parse_position = *parse_position + local_9c;
                }
                else {
                  local_dc = (uint)((pCVar10->base).model.motion_controller.state_index != 0);
                  *parse_position = *parse_position + local_9c;
                }
                goto LAB_0047e580;
              }
            }
            return -1;
          }
          iVar7 = _stricmp(local_150,"isCurrentCamera");
          if (iVar7 == 0) {
            local_94 = -1;
            sscanf
                      (expression + *parse_position," ( %[^ )] )%n",local_858,&local_94);
            if (local_94 < 3) {
              pcVar17 = "Error parsing icCurrentCamera parameters.";
              pcVar18 = &DAT_01c08b60;
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
            local_dc = 0;
            if ((-1 < g_CDemonSet_PTR_005be368->selected_camera_index) &&
               (iVar7 = _stricmp
                                  (g_CDemonSet_PTR_005be368->cameras
                                   [g_CDemonSet_PTR_005be368->selected_camera_index].name,local_858)
               , iVar7 == 0)) {
              local_dc = 1;
            }
            *parse_position = *parse_position + local_94;
          }
          else {
            iVar7 = _stricmp(local_150,"isDead");
            if (iVar7 == 0) {
              local_90 = -1;
              sscanf
                        (expression + *parse_position," ( %[^ )] )%n",local_600,&local_90);
              if (local_90 < 3) {
                pcVar17 = "Error parsing isDead parameters.";
                pcVar18 = &DAT_01c08b60;
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
                pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_0047a390
                                             (local_600,g_CCharacterActorType_00765a60.name_hash,
                                              g_CCharacterActorType_00765a60.class_name);
                if (pCVar10 != (CHero *)0x0) {
                  if (pCVar10 == 0x0FFFFFFF) {
                    local_dc = 0;
                    *parse_position = *parse_position + local_90;
                  }
                  else {
                    EVar12 = (*(((pCVar10->base).base.vtable._uc)->_uc).getDeathState)
                                       ((CCharacter *)pCVar10);
                    local_dc = (uint)(1 < (int)EVar12);
                    *parse_position = *parse_position + local_90;
                  }
                  goto LAB_0047e580;
                }
              }
              return -1;
            }
            iVar7 = _stricmp(local_150,"isFadeFinished");
            if (iVar7 == 0) {
              local_8c = -1;
              sscanf(expression + *parse_position," ( )%n",&local_8c);
              this_ptr_00 = g_CGame_PTR_005b9354;
              if (local_8c < 2) {
                pcVar17 = "Error parsing isFadeFinished function.";
                pcVar18 = &DAT_01c08b60;
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
              *parse_position = *parse_position + local_8c;
              local_dc = core_game_cpp_CGame_fadeIn_FUN_004a3a50(this_ptr_00);
            }
            else {
              iVar7 = _stricmp(local_150,"isInRange");
              if (iVar7 == 0) {
                local_88 = -1;
                sscanf(expression + *parse_position," ( %n",&local_88)
                ;
                if (local_88 < 1) {
                  pcVar17 = "Error parsing isInRange parameters.";
                  pcVar18 = &DAT_01c08b60;
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
                iVar7 = core_event_cpp_parseVectorLocation_FUN_0047a4c0
                                  (expression,parse_position,&local_104);
                if (iVar7 < 0) {
                  return -1;
                }
                local_88 = -1;
                sscanf(expression + *parse_position," , %n",&local_88)
                ;
                if (local_88 < 1) {
                  pcVar17 = "Error parsing isInRange parameters.";
                  pcVar18 = &DAT_01c08b60;
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
                  *parse_position = *parse_position + local_88;
                  iVar8 = core_event_cpp_parseVectorLocation_FUN_0047a4c0
                                    (expression,parse_position,&local_ec);
                  if (-1 < iVar8) {
                    local_88 = -1;
                    sscanf
                              (expression + *parse_position," , %f )%n",local_84,&local_88);
                    if (local_88 < 3) {
                      pcVar17 = "Error parsing isInRange parameters.";
                      pcVar18 = &DAT_01c08b60;
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
                    if ((iVar7 == 0) || (iVar8 == 0)) {
                      local_dc = 0;
                    }
                    else {
                      local_dc = (uint)(SQRT((local_104.z - local_ec.z) * (local_104.z - local_ec.z)
                                             + (local_104.y - local_ec.y) *
                                               (local_104.y - local_ec.y) +
                                               (local_104.x - local_ec.x) *
                                               (local_104.x - local_ec.x)) <= local_84[0]);
                    }
                    goto LAB_0047e580;
                  }
                }
                return -1;
              }
              iVar7 = _stricmp(local_150,"isOfType");
              if (iVar7 == 0) {
                local_70 = -1;
                sscanf
                          (expression + *parse_position," ( %[^ ,] , %[^ )] )%n",acStack_40d + 1,local_985 + 1,
                           &local_70);
                if (local_70 < 3) {
                  pcVar17 = "Error parsing isOfType parameters.";
                  pcVar18 = &DAT_01c08b60;
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
                  pcVar17 = acStack_40d + 1;
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
                      if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                      SVar16 = SVar16 - 1;
                      pcVar18 = pcVar18 + -1;
                    } while (0 < (int)SVar16);
                  }
                  pcVar17[SVar16] = '\0';
                  local_68 = acStack_40d + 2;
                  while ((g_CharacterClassificationTable[(byte)(acStack_40d[1] + 1)] & 2) != 0) {
                    memmove(pcVar17,local_68,SVar16);
                    SVar16 = SVar16 - 1;
                  }
                  uVar15 = 0xffffffff;
                  pcVar17 = local_985 + 1;
                  do {
                    if (uVar15 == 0) break;
                    uVar15 = uVar15 - 1;
                    cVar1 = *pcVar17;
                    pcVar17 = pcVar17 + (uint)bVar19 * -2 + 1;
                  } while (cVar1 != '\0');
                  SVar16 = ~uVar15 - 1;
                  if (0 < (int)SVar16) {
                    pcVar17 = local_985 + ~uVar15;
                    do {
                      if ((g_CharacterClassificationTable[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                      SVar16 = SVar16 - 1;
                      pcVar17 = pcVar17 + -1;
                    } while (0 < (int)SVar16);
                  }
                  (local_985 + 1)[SVar16] = '\0';
                  local_64 = local_985 + 2;
                  while ((g_CharacterClassificationTable[(byte)(local_985[1] + 1)] & 2) != 0) {
                    memmove(local_985 + 1,local_64,SVar16);
                    SVar16 = SVar16 - 1;
                  }
                  pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_0047a390
                                               (acStack_40d + 1,
                                                g_CDemonActorActorType_00763e48.name_hash,
                                                g_CDemonActorActorType_00763e48.class_name);
                  if (pCVar10 != (CHero *)0x0) {
                    if (pCVar10 == 0x0FFFFFFF) {
                      local_dc = 0;
                      *parse_position = *parse_position + local_70;
                    }
                    else {
                      local_dc = core_actor_cpp_isOfClass_FUN_0040d7e0
                                           ((CDemonActor *)pCVar10,local_985 + 1);
                      *parse_position = *parse_position + local_70;
                    }
                    goto LAB_0047e580;
                  }
                }
                return -1;
              }
              iVar7 = _stricmp(local_150,"isFacing");
              if (iVar7 == 0) {
                local_60 = -1;
                sscanf
                          (expression + *parse_position," (%[^,], %[^,)]%n",acStack_4d5 + 1,local_3a9 + 1,
                           &local_60);
                if (local_60 < 5) {
                  pcVar17 = "Error parsing isFacing parameters.";
                  pcVar18 = &DAT_01c08b60;
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
                pcVar17 = acStack_4d5 + 1;
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
                    if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                    SVar16 = SVar16 - 1;
                    pcVar18 = pcVar18 + -1;
                  } while (0 < (int)SVar16);
                }
                pcVar17[SVar16] = '\0';
                local_5c = acStack_4d5 + 2;
                while ((g_CharacterClassificationTable[(byte)(acStack_4d5[1] + 1)] & 2) != 0) {
                  memmove(pcVar17,local_5c,SVar16);
                  SVar16 = SVar16 - 1;
                }
                uVar15 = 0xffffffff;
                pcVar17 = local_3a9 + 1;
                do {
                  if (uVar15 == 0) break;
                  uVar15 = uVar15 - 1;
                  cVar1 = *pcVar17;
                  pcVar17 = pcVar17 + (uint)bVar19 * -2 + 1;
                } while (cVar1 != '\0');
                SVar16 = ~uVar15 - 1;
                if (0 < (int)SVar16) {
                  pcVar17 = local_3a9 + ~uVar15;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                    SVar16 = SVar16 - 1;
                    pcVar17 = pcVar17 + -1;
                  } while (0 < (int)SVar16);
                }
                (local_3a9 + 1)[SVar16] = '\0';
                local_58 = local_3a9 + 2;
                while ((g_CharacterClassificationTable[(byte)(local_3a9[1] + 1)] & 2) != 0) {
                  memmove(local_3a9 + 1,local_58,SVar16);
                  SVar16 = SVar16 - 1;
                }
                pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_0047a390
                                             (acStack_4d5 + 1,
                                              g_CDemonActorActorType_00763e48.name_hash,
                                              g_CDemonActorActorType_00763e48.class_name);
                if ((pCVar10 == (CHero *)0x0) ||
                   (pCVar13 = (CHero *)core_event_cpp_resolveActorByName_FUN_0047a390
                                                 (local_3a9 + 1,
                                                  g_CDemonActorActorType_00763e48.name_hash,
                                                  g_CDemonActorActorType_00763e48.class_name),
                   pCVar13 == (CHero *)0x0)) {
                  return -1;
                }
                *parse_position = *parse_position + local_60;
                local_a88 = 45.0;
                if (expression[*parse_position] == ',') {
                  local_60 = -1;
                  sscanf
                            (expression + *parse_position,",%f %n",&local_a88,&local_60);
                  if (local_60 < 2) {
                    pcVar17 = "Error parsing isFacing parameters.";
                    pcVar18 = &DAT_01c08b60;
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
                  if (((double)local_a88 < 0.0) || (180 < (double)local_a88)) {
                    pcVar17 = "isFacing() angle must be in range 0..180.";
                    pcVar18 = &DAT_01c08b60;
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
                  *parse_position = *parse_position + local_60;
                }
                pCVar6 = 0x0FFFFFFF;
                if (expression[*parse_position] != ')') {
                  pcVar17 = "Error parsing isFacing parameters.";
                  pcVar18 = &DAT_01c08b60;
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
                if ((pCVar10 == pCVar6) || (pCVar13 == pCVar6)) {
                  local_dc = 0;
                }
                else {
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                            ((CDemonActor *)pCVar10,&local_110,
                             &(pCVar13->base).base.location.position);
                  local_110.y = 0.0;
                  pCVar14 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                      (&local_f8,&local_110);
                  if (local_a88 * (float)3.1415926535000001 * (float)0.0055555555555555497 < ABS(pCVar14->y))
                  {
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
                            (expression + *parse_position," ( %[^ )] )%n",local_920,&local_54);
                  if (local_54 < 3) {
                    pcVar17 = "Error parsing isLightOn parameters.";
                    pcVar18 = &DAT_01c08b60;
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
                  core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0
                            (g_CDemonSet_PTR_005be368,local_920,&local_4c,&local_48);
                  if (local_4c == (C3DSLight *)0x0) {
                    _sprintf(local_a84,"Spotlight %s doesn't exist.",local_920);
                    pcVar17 = local_a84;
                    pcVar18 = &DAT_01c08b60;
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
                  local_dc = (uint)(local_48->light_enabled_flag != 0);
                  *parse_position = *parse_position + local_54;
                }
                else {
                  iVar7 = _stricmp(local_150,"isNudityEnabled");
                  if (iVar7 == 0) {
                    local_44 = -1;
                    sscanf
                              (expression + *parse_position," ( )%n",&local_44);
                    if (local_44 < 2) {
                      pcVar17 = "Error parsing isNudityEnabled().";
                      pcVar18 = &DAT_01c08b60;
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
                    local_dc = (uint)(g_CGame_PTR_005b9354->nudity_flag != 0);
                    *parse_position = *parse_position + local_44;
                  }
                  else {
                    iVar7 = _stricmp(local_150,"isSfxActive");
                    if (iVar7 == 0) {
                      local_40 = -1;
                      sscanf
                                (expression + *parse_position," ( %[^ )] )%n",acStack_791 + 1,&local_40
                                );
                      if (local_40 < 3) {
                        pcVar17 = "Error parsing isSfxActive parameters.";
                        pcVar18 = &DAT_01c08b60;
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
                      pcVar17 = acStack_791 + 1;
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
                          if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) == 0)
                          break;
                          SVar16 = SVar16 - 1;
                          pcVar18 = pcVar18 + -1;
                        } while (0 < (int)SVar16);
                      }
                      pcVar17[SVar16] = '\0';
                      local_3c = acStack_791 + 2;
                      while ((g_CharacterClassificationTable[(byte)(acStack_791[1] + 1)] & 2) != 0)
                      {
                        memmove(pcVar17,local_3c,SVar16);
                        SVar16 = SVar16 - 1;
                      }
                      local_dc = 0;
                      uVar15 = core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0
                                         (this_ptr,acStack_791 + 1);
                      if (uVar15 != 0) {
                        local_dc = 1;
                      }
                      *parse_position = *parse_position + local_40;
                    }
                    else {
                      iVar7 = _stricmp(local_150,"isTalking");
                      if (iVar7 == 0) {
                        local_38 = -1;
                        sscanf
                                  (expression + *parse_position," ( %[^ )] )%n",local_27c,&local_38);
                        if (local_38 < 3) {
                          pcVar17 = "Error parsing isTalking parameters.";
                          pcVar18 = &DAT_01c08b60;
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
                        pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_0047a390
                                                     (local_27c,
                                                      g_CCharacterActorType_00765a60.name_hash,
                                                      g_CCharacterActorType_00765a60.class_name);
                        if (pCVar10 == (CHero *)0x0) {
                          return -1;
                        }
                        if (pCVar10 == 0x0FFFFFFF) {
                          local_dc = (uint)pCVar10 ^ (uint)0x0FFFFFFF;
                        }
                        else if ((pCVar10->base).speech_timer <= 0.0) {
                          local_dc = 0;
                        }
                        else {
                          local_dc = 1;
                        }
                        *parse_position = *parse_position + local_38;
                      }
                      else {
                        iVar7 = _stricmp(local_150,"isVictim");
                        if (iVar7 == 0) {
                          local_e0 = -1;
                          sscanf
                                    (expression + *parse_position," ( %[^ )] )%n",local_1b4,&local_e0);
                          if (local_e0 < 3) {
                            pcVar17 = "Error parsing isVictim parameters.";
                            pcVar18 = &DAT_01c08b60;
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
                            local_b4 = (CHero *)core_event_cpp_resolveActorByName_FUN_0047a390
                                                          (local_1b4,
                                                           g_CCharacterActorType_00765a60.name_hash,
                                                           g_CCharacterActorType_00765a60.class_name
                                                          );
                            if (local_b4 != (CHero *)0x0) {
                              local_dc = 0;
                              if (local_b4 != 0x0FFFFFFF) {
                                local_34 = &(local_b4->base).base.location;
                                local_14 = 0;
                                for (iVar7 = 0; iVar7 < g_CDemonSet_PTR_005be368->enemy_count;
                                    iVar7 = iVar7 + 1) {
                                  iVar8 = *(int *)((int)g_CDemonSet_PTR_005be368->enemies + local_14
                                                  );
                                  if ((((local_b4 == *(CHero **)(iVar8 + 0xbca4)) &&
                                       (iVar9 = (**(code **)(*(int *)(iVar8 + 0x14c) + 0x104))
                                                          (iVar8), iVar9 < 1)) &&
                                      (iVar9 = (**(code **)(*(int *)(iVar8 + 0x14c) + 0x68))(iVar8),
                                      iVar9 == 0)) &&
                                     (fVar3 = *(float *)(iVar8 + 0x20) - (local_34->position).x,
                                     fVar5 = *(float *)(iVar8 + 0x24) - (local_34->position).y,
                                     fVar4 = *(float *)(iVar8 + 0x28) - (local_34->position).z,
                                     SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) <=
                                     (float)30)) {
                                    local_dc = 1;
                                    break;
                                  }
                                  local_14 = local_14 + 4;
                                }
                              }
                              *parse_position = *parse_position + local_e0;
                              goto LAB_0047e580;
                            }
                          }
                          return -1;
                        }
                        iVar7 = _stricmp
                                          (local_150,"isWeaponDrawn");
                        if (iVar7 == 0) {
                          local_d8 = -1;
                          sscanf
                                    (expression + *parse_position," ( %[^ )] )%n",local_470,&local_d8);
                          if (local_d8 < 3) {
                            pcVar17 = "Error parsing isWeaponDrawn parameters.";
                            pcVar18 = &DAT_01c08b60;
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
                          pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_0047a390
                                                       (local_470,
                                                        g_CHeroActorType_01cae0ec.name_hash,
                                                        g_CHeroActorType_01cae0ec.class_name);
                          if (pCVar10 == (CHero *)0x0) {
                            return -1;
                          }
                          if (pCVar10 == 0x0FFFFFFF) {
                            local_dc = (uint)pCVar10 ^ (uint)0x0FFFFFFF;
                          }
                          else {
                            local_dc = (*(((pCVar10->base).base.vtable._uh)->_uh).isWeaponDrawn)
                                                 (pCVar10);
                          }
                          *parse_position = *parse_position + local_d8;
                        }
                        else {
                          iVar7 = _stricmp
                                            (local_150,"isWearingGasMask");
                          if (iVar7 == 0) {
                            local_20 = -1;
                            sscanf
                                      (expression + *parse_position," ( %[^ )] )%n",local_538,&local_20
                                      );
                            if (local_20 < 3) {
                              pcVar17 = "Error parsing isWearingGasMask parameters.";
                              pcVar18 = &DAT_01c08b60;
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
                            pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_0047a390
                                                         (local_538,
                                                          g_CHeroActorType_01cae0ec.name_hash,
                                                          g_CHeroActorType_01cae0ec.class_name);
                            if (pCVar10 == (CHero *)0x0) {
                              return -1;
                            }
                            if (pCVar10 == 0x0FFFFFFF) {
                              local_dc = 0;
                              *parse_position = *parse_position + local_20;
                            }
                            else {
                              local_dc = (uint)(pCVar10->is_wearing_gas_mask == 2);
                              *parse_position = *parse_position + local_20;
                            }
                          }
                          else {
                            iVar7 = _stricmp
                                              (local_150,"randBool");
                            if (iVar7 != 0) {
                              iVar7 = _stricmp
                                                (local_150,"reachedDest");
                              if (iVar7 != 0) {
                                pcVar17 = "Invalid meta-function";
                                pcVar18 = &DAT_01c08b60;
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
                              local_18 = -1;
                              sscanf
                                        (expression + *parse_position," ( %[^ )] )%n",local_664,
                                         &local_18);
                              if (local_18 < 3) {
                                pcVar17 = "Error parsing reachedDest parameters.";
                                pcVar18 = &DAT_01c08b60;
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
                                pCVar10 = (CHero *)core_event_cpp_resolveActorByName_FUN_0047a390
                                                             (local_664,
                                                              g_CCharacterActorType_00765a60.
                                                              name_hash,
                                                              g_CCharacterActorType_00765a60.
                                                              class_name);
                                if (pCVar10 != (CHero *)0x0) {
                                  if (pCVar10 == 0x0FFFFFFF) {
                                    local_dc = 0;
                                    *parse_position = *parse_position + local_18;
                                  }
                                  else {
                                    iVar7 = (*(((pCVar10->base).base.vtable._uc)->_uc).
                                              isWalkComplete)((CCharacter *)pCVar10);
                                    local_dc = (uint)(iVar7 != 0);
                                    *parse_position = *parse_position + local_18;
                                  }
                                  goto LAB_0047e580;
                                }
                              }
                              return -1;
                            }
                            local_1c = -1;
                            sscanf
                                      (expression + *parse_position," ( %f )%n",&local_d4,
                                       &local_1c);
                            if (local_1c < 3) {
                              pcVar17 = "Error parsing randBool parameters.";
                              pcVar18 = &DAT_01c08b60;
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
                            local_dc = core_actor_cpp_randomChance_FUN_0040dea0(local_d4);
                            *parse_position = *parse_position + local_1c;
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
            (expression + *parse_position," ( %s %s %[^ )] )%n",acStack_8bd + 1,local_219 + 1,
             local_345 + 1,&local_c0);
  if (local_c0 < 3) {
    pcVar17 = "Error parsing cmp parameters.";
    pcVar18 = &DAT_01c08b60;
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
  pcVar17 = acStack_8bd + 1;
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
      if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
      SVar16 = SVar16 - 1;
      pcVar18 = pcVar18 + -1;
    } while (0 < (int)SVar16);
  }
  pcVar17[SVar16] = '\0';
  local_d0 = acStack_8bd + 2;
  while ((g_CharacterClassificationTable[(byte)(acStack_8bd[1] + 1)] & 2) != 0) {
    memmove(pcVar17,local_d0,SVar16);
    SVar16 = SVar16 - 1;
  }
  uVar15 = 0xffffffff;
  pcVar17 = local_345 + 1;
  do {
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + (uint)bVar19 * -2 + 1;
  } while (cVar1 != '\0');
  SVar16 = ~uVar15 - 1;
  if (0 < (int)SVar16) {
    pcVar17 = local_345 + ~uVar15;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
      SVar16 = SVar16 - 1;
      pcVar17 = pcVar17 + -1;
    } while (0 < (int)SVar16);
  }
  (local_345 + 1)[SVar16] = '\0';
  local_cc = local_345 + 2;
  while ((g_CharacterClassificationTable[(byte)(local_345[1] + 1)] & 2) != 0) {
    memmove(local_345 + 1,local_cc,SVar16);
    SVar16 = SVar16 - 1;
  }
  uVar15 = 0xffffffff;
  pcVar17 = local_219 + 1;
  do {
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + (uint)bVar19 * -2 + 1;
  } while (cVar1 != '\0');
  SVar16 = ~uVar15 - 1;
  if (0 < (int)SVar16) {
    pcVar17 = local_219 + ~uVar15;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
      SVar16 = SVar16 - 1;
      pcVar17 = pcVar17 + -1;
    } while (0 < (int)SVar16);
  }
  (local_219 + 1)[SVar16] = '\0';
  local_c8 = local_219 + 2;
  while ((g_CharacterClassificationTable[(byte)(local_219[1] + 1)] & 2) != 0) {
    memmove(local_219 + 1,local_c8,SVar16);
    SVar16 = SVar16 - 1;
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
    pcVar17 = "Invalid relational operator in cmp statement";
    pcVar18 = &DAT_01c08b60;
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
  *parse_position = *parse_position + local_c0;
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
      g_CurrentFilename = "..\\core\\event.cpp";
      g_CurrentLineNumber = 1893;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Hell froze.");
    }
LAB_0047e580:
    while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
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
