// Name: core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0
// Address: 0047e0d0
// Address Range: [[0047e0d0, 00480215]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(CEventList *this_ptr,char *expression,int *parse_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(CEventList *this_ptr,char *expression,int *parse_position)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CCharacter *pCVar6;
  CGame *this_ptr_00;
  int iVar7;
  int iVar8;
  CCharacter *pCVar9;
  CCharacter *pCVar10;
  CDemonActor *pCVar11;
  int iVar12;
  uint uVar13;
  SIZE_T SVar14;
  int unaff_EBP;
  char *pcVar15;
  char *pcVar16;
  byte bVar17;
  ulonglong in_stack_fffff570;
  float local_a88;
  char local_a84 [255];
  char local_985 [101];
  byte local_920 [99];
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
  byte local_f8 [12];
  CVector3f local_ec;
  int local_e0;
  int local_dc;
  uint local_d8;
  float local_d4;
  char *local_d0;
  char *local_cc;
  char *local_c8;
  byte local_c4 [4];
  int local_c0;
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
  byte local_48 [4];
  int local_44;
  int local_40;
  char *local_3c;
  int local_38;
  CLocation *local_34;
  float *pfStack_30;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar17 = 0;
  while (((&DAT_005c168c)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
    *parse_position = *parse_position + 1;
  }
  if (expression[*parse_position] == '.') {
    *parse_position = *parse_position + 1;
  }
  bVar2 = expression[*parse_position];
  if (bVar2 == 0) {
    pcVar15 = "Unexpected end of string";
    pcVar16 = &DAT_01c08b60;
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
    iVar7 = core_event_cpp_CEventList_evaluateLogicalExpr_FUN_00480220
                      (this_ptr,expression,parse_position);
    if (iVar7 < 0) {
      return iVar7;
    }
    if (expression[*parse_position] == ')') {
      *parse_position = *parse_position + 1;
      while (((&DAT_005c168c)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
        *parse_position = *parse_position + 1;
      }
      return iVar7;
    }
    pcVar15 = "Matching ')' is missing";
    pcVar16 = &DAT_01c08b60;
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
    iVar7 = core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(this_ptr,expression,parse_position);
    if (-1 < iVar7) {
      return (uint)(iVar7 == 0);
    }
    return iVar7;
  }
  iVar7 = core_event_cpp_isValidIdentifierChar_FUN_00480f40((uint)bVar2);
  if (iVar7 == 0) {
    pcVar15 = "Syntax error";
    pcVar16 = &DAT_01c08b60;
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
    iVar7 = core_event_cpp_isValidIdentifierChar_FUN_00480f40((uint)(byte)expression[iVar7 + 1]);
  } while (iVar7 != 0);
  *pcVar15 = '\0';
  if (expression[*parse_position] != '(') {
    while (((&DAT_005c168c)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
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
        pcVar15 = "Error parsing exists parameters.";
        pcVar16 = &DAT_01c08b60;
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
      pcVar15 = acStack_2e1 + 1;
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
          if (((&DAT_005c168c)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
          SVar14 = SVar14 - 1;
          pcVar16 = pcVar16 + -1;
        } while (0 < (int)SVar14);
      }
      pcVar15[SVar14] = '\0';
      local_bc = acStack_2e1 + 2;
      while (((&DAT_005c168c)[(byte)(acStack_2e1[1] + 1)] & 2) != 0) {
        memmove(pcVar15,local_bc,SVar14);
        SVar14 = SVar14 - 1;
      }
      core_event_cpp_resolveActorByName_FUN_0047a390
                (acStack_2e1 + 1,g_CDemonActorActorType_00763e48.name_hash,
                 g_CDemonActorActorType_00763e48.class_name);
      *parse_position = *parse_position + local_6c;
    }
    else {
      iVar7 = _stricmp(local_150,"hasItem");
      if (iVar7 == 0) {
        if (*0x01CEA280 != 0) {
          pcVar15 = "Can't use hasItem condition in multi-player";
          pcVar16 = &DAT_01c08b60;
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
                  (expression + *parse_position," (%[^)])%n",acStack_7f5 + 1,&local_b8);
        if (local_b8 < 3) {
          pcVar15 = "Error parsing hasItem parameters.";
          pcVar16 = &DAT_01c08b60;
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
        pcVar15 = acStack_7f5 + 1;
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
            if (((&DAT_005c168c)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
            SVar14 = SVar14 - 1;
            pcVar16 = pcVar16 + -1;
          } while (0 < (int)SVar14);
        }
        pcVar15[SVar14] = '\0';
        local_b0 = acStack_7f5 + 2;
        while (((&DAT_005c168c)[(byte)(acStack_7f5[1] + 1)] & 2) != 0) {
          memmove(pcVar15,local_b0,SVar14);
          SVar14 = SVar14 - 1;
        }
        iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        local_dc = 0;
        if (iVar7 != 0) {
          core_inv_cpp_CInventory_findItemByName_FUN_004c0710
                    ((CInventory *)(iVar7 + 0x1f5a0),acStack_7f5 + 1);
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
            pcVar15 = "Error parsing hasItemType parameters.";
            pcVar16 = &DAT_01c08b60;
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
            pcVar15 = acStack_72d + 1;
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
                if (((&DAT_005c168c)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
                SVar14 = SVar14 - 1;
                pcVar16 = pcVar16 + -1;
              } while (0 < (int)SVar14);
            }
            pcVar15[SVar14] = '\0';
            local_50 = acStack_72d + 2;
            while (((&DAT_005c168c)[(byte)(acStack_72d[1] + 1)] & 2) != 0) {
              memmove(pcVar15,local_50,SVar14);
              SVar14 = SVar14 - 1;
            }
            uVar13 = 0xffffffff;
            pcVar15 = local_6c9 + 1;
            do {
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar15 + (uint)bVar17 * -2 + 1;
            } while (cVar1 != '\0');
            SVar14 = ~uVar13 - 1;
            if (0 < (int)SVar14) {
              pcVar15 = local_6c9 + ~uVar13;
              do {
                if (((&DAT_005c168c)[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
                SVar14 = SVar14 - 1;
                pcVar15 = pcVar15 + -1;
              } while (0 < (int)SVar14);
            }
            (local_6c9 + 1)[SVar14] = '\0';
            local_a8 = local_6c9 + 2;
            while (((&DAT_005c168c)[(byte)(local_6c9[1] + 1)] & 2) != 0) {
              memmove(local_6c9 + 1,local_a8,SVar14);
              SVar14 = SVar14 - 1;
            }
            pCVar9 = (CCharacter *)
                     core_event_cpp_resolveActorByName_FUN_0047a390
                               (acStack_72d + 1,g_CHeroActorType_01cae0ec.name_hash,
                                g_CHeroActorType_01cae0ec.class_name);
            if (pCVar9 != (CCharacter *)0x0) {
              if (pCVar9 == 0x0FFFFFFF) {
                *parse_position = *parse_position + local_ac;
              }
              else {
                core_inv_cpp_CInventory_hasItemOfClass_FUN_004c0760
                          ((CInventory *)(pCVar9[2].flames[0x1b].off_event + 0x3c),local_6c9 + 1);
                *parse_position = *parse_position + local_ac;
              }
              goto LAB_0047e580;
            }
          }
          return -1;
        }
        iVar7 = _stricmp(local_150,"hasKeyMask");
        if (iVar7 == 0) {
          if (*0x01CEA280 != 0) {
            pcVar15 = "Can't use hasKeyMask condition in multi-player";
            pcVar16 = &DAT_01c08b60;
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
            pcVar16 = &DAT_01c08b60;
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
            pcVar16 = &DAT_01c08b60;
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
            pcVar16 = &DAT_01c08b60;
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
          iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          local_dc = 0;
          if (iVar7 != 0) {
            core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004c31b0
                      ((CInventory *)(iVar7 + 0x1f5a0),local_a0,0);
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
              pcVar15 = "Error parsing isBroken parameters.";
              pcVar16 = &DAT_01c08b60;
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
                  if (((&DAT_005c168c)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
                  SVar14 = SVar14 - 1;
                  pcVar16 = pcVar16 + -1;
                } while (0 < (int)SVar14);
              }
              pcVar15[SVar14] = '\0';
              local_98 = acStack_59d + 2;
              while (((&DAT_005c168c)[(byte)(acStack_59d[1] + 1)] & 2) != 0) {
                memmove(pcVar15,local_98,SVar14);
                SVar14 = SVar14 - 1;
              }
              pCVar9 = (CCharacter *)
                       core_event_cpp_resolveActorByName_FUN_0047a390
                                 (acStack_59d + 1,g_CGlassActorType_01c78c40.name_hash,
                                  g_CGlassActorType_01c78c40.class_name);
              if (pCVar9 != (CCharacter *)0x0) {
                if (pCVar9 == 0x0FFFFFFF) {
                  *parse_position = *parse_position + local_9c;
                }
                else {
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
              pcVar15 = "Error parsing icCurrentCamera parameters.";
              pcVar16 = &DAT_01c08b60;
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
            local_dc = 0;
            if (-1 < *(int *)(0x01E57284 + 0x15aabc)) {
              _stricmp
                        ((char *)(*(int *)(0x01E57284 + 0x15aabc) * 0x1a0 + 0x01E57284 + 4),
                         local_858);
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
                pcVar15 = "Error parsing isDead parameters.";
                pcVar16 = &DAT_01c08b60;
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
                pCVar9 = (CCharacter *)
                         core_event_cpp_resolveActorByName_FUN_0047a390
                                   (local_600,g_CCharacterActorType_00765a60.name_hash,
                                    g_CCharacterActorType_00765a60.class_name);
                if (pCVar9 != (CCharacter *)0x0) {
                  if (pCVar9 == 0x0FFFFFFF) {
                    *parse_position = *parse_position + local_90;
                  }
                  else {
                    iVar7 = (*(((pCVar9->base).vtable._uc)->_uc).releaseFromGrab)(pCVar9);
                    local_d8 = (uint)(1 < iVar7);
                    *parse_position = *parse_position + local_8c;
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
              this_ptr_00 = 0x01C775EC;
              if (local_8c < 2) {
                pcVar15 = "Error parsing isFadeFinished function.";
                pcVar16 = &DAT_01c08b60;
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
              core_game_cpp_CGame_fadeIn_FUN_004a3a50(this_ptr_00);
            }
            else {
              iVar7 = _stricmp(local_150,"isInRange");
              if (iVar7 == 0) {
                local_88 = -1;
                sscanf(expression + *parse_position," ( %n",&local_88)
                ;
                if (local_88 < 1) {
                  pcVar15 = "Error parsing isInRange parameters.";
                  pcVar16 = &DAT_01c08b60;
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
                iVar7 = core_event_cpp_parseVectorLocation_FUN_0047a4c0
                                  (expression,parse_position,&local_104);
                if (iVar7 < 0) {
                  return -1;
                }
                local_88 = -1;
                sscanf(expression + *parse_position," , %n",&local_88)
                ;
                if (local_88 < 1) {
                  pcVar15 = "Error parsing isInRange parameters.";
                  pcVar16 = &DAT_01c08b60;
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
                  iVar7 = core_event_cpp_parseVectorLocation_FUN_0047a4c0
                                    (expression,parse_position,&local_ec);
                  if (-1 < iVar7) {
                    local_88 = -1;
                    sscanf
                              (expression + *parse_position," , %f )%n",local_84,&local_88);
                    if (local_88 < 3) {
                      pcVar15 = "Error parsing isInRange parameters.";
                      pcVar16 = &DAT_01c08b60;
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
                  pcVar15 = "Error parsing isOfType parameters.";
                  pcVar16 = &DAT_01c08b60;
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
                  pcVar15 = acStack_40d + 1;
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
                      if (((&DAT_005c168c)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
                      SVar14 = SVar14 - 1;
                      pcVar16 = pcVar16 + -1;
                    } while (0 < (int)SVar14);
                  }
                  pcVar15[SVar14] = '\0';
                  local_68 = acStack_40d + 2;
                  while (((&DAT_005c168c)[(byte)(acStack_40d[1] + 1)] & 2) != 0) {
                    memmove(pcVar15,local_68,SVar14);
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
                      if (((&DAT_005c168c)[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
                      SVar14 = SVar14 - 1;
                      pcVar15 = pcVar15 + -1;
                    } while (0 < (int)SVar14);
                  }
                  (local_985 + 1)[SVar14] = '\0';
                  local_64 = local_985 + 2;
                  while (((&DAT_005c168c)[(byte)(local_985[1] + 1)] & 2) != 0) {
                    memmove(local_985 + 1,local_64,SVar14);
                    SVar14 = SVar14 - 1;
                  }
                  pCVar9 = (CCharacter *)
                           core_event_cpp_resolveActorByName_FUN_0047a390
                                     (acStack_40d + 1,g_CDemonActorActorType_00763e48.name_hash,
                                      g_CDemonActorActorType_00763e48.class_name);
                  if (pCVar9 != (CCharacter *)0x0) {
                    if (pCVar9 == 0x0FFFFFFF) {
                      *parse_position = *parse_position + local_70;
                    }
                    else {
                      core_actor_cpp_isOfClass_FUN_0040d7e0((CDemonActor *)pCVar9,local_985 + 1);
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
                  pcVar15 = "Error parsing isFacing parameters.";
                  pcVar16 = &DAT_01c08b60;
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
                pcVar15 = acStack_4d5 + 1;
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
                    if (((&DAT_005c168c)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
                    SVar14 = SVar14 - 1;
                    pcVar16 = pcVar16 + -1;
                  } while (0 < (int)SVar14);
                }
                pcVar15[SVar14] = '\0';
                local_5c = acStack_4d5 + 2;
                while (((&DAT_005c168c)[(byte)(acStack_4d5[1] + 1)] & 2) != 0) {
                  memmove(pcVar15,local_5c,SVar14);
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
                    if (((&DAT_005c168c)[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
                    SVar14 = SVar14 - 1;
                    pcVar15 = pcVar15 + -1;
                  } while (0 < (int)SVar14);
                }
                (local_3a9 + 1)[SVar14] = '\0';
                local_58 = local_3a9 + 2;
                while (((&DAT_005c168c)[(byte)(local_3a9[1] + 1)] & 2) != 0) {
                  memmove(local_3a9 + 1,local_58,SVar14);
                  SVar14 = SVar14 - 1;
                }
                pCVar9 = (CCharacter *)
                         core_event_cpp_resolveActorByName_FUN_0047a390
                                   (acStack_4d5 + 1,g_CDemonActorActorType_00763e48.name_hash,
                                    g_CDemonActorActorType_00763e48.class_name);
                if ((pCVar9 == (CCharacter *)0x0) ||
                   (pCVar10 = (CCharacter *)
                              core_event_cpp_resolveActorByName_FUN_0047a390
                                        (local_3a9 + 1,g_CDemonActorActorType_00763e48.name_hash,
                                         g_CDemonActorActorType_00763e48.class_name),
                   pCVar10 == (CCharacter *)0x0)) {
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
                    pcVar16 = &DAT_01c08b60;
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
                    pcVar16 = &DAT_01c08b60;
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
                pCVar6 = 0x0FFFFFFF;
                if (expression[*parse_position] != ')') {
                  pcVar15 = "Error parsing isFacing parameters.";
                  pcVar16 = &DAT_01c08b60;
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
                if ((pCVar9 != pCVar6) && (pCVar10 != pCVar6)) {
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                            ((CDemonActor *)pCVar9,&local_110,&(pCVar10->base).location.position);
                  local_110.y = 0.0;
                  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                            (local_f8,&local_110);
                }
              }
              else {
                iVar7 = _stricmp(local_150,"isLightOn");
                if (iVar7 == 0) {
                  local_54 = -1;
                  sscanf
                            (expression + *parse_position," ( %[^ )] )%n",local_920,&local_54);
                  if (local_54 < 3) {
                    pcVar15 = "Error parsing isLightOn parameters.";
                    pcVar16 = &DAT_01c08b60;
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
                  core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0
                            (0x01E57284,local_920,&local_4c,local_48);
                  if (local_4c == 0) {
                    _sprintf(local_a84,"Spotlight %s doesn't exist.",local_920);
                    pcVar15 = local_a84;
                    pcVar16 = &DAT_01c08b60;
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
                  iVar7 = _stricmp(local_150,"isNudityEnabled");
                  if (iVar7 == 0) {
                    local_44 = -1;
                    sscanf
                              (expression + *parse_position," ( )%n",&local_44);
                    if (local_44 < 2) {
                      pcVar15 = "Error parsing isNudityEnabled().";
                      pcVar16 = &DAT_01c08b60;
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
                    iVar7 = _stricmp(local_150,"isSfxActive");
                    if (iVar7 == 0) {
                      local_40 = -1;
                      sscanf
                                (expression + *parse_position," ( %[^ )] )%n",acStack_791 + 1,&local_40
                                );
                      if (local_40 < 3) {
                        pcVar15 = "Error parsing isSfxActive parameters.";
                        pcVar16 = &DAT_01c08b60;
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
                          if (((&DAT_005c168c)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
                          SVar14 = SVar14 - 1;
                          pcVar16 = pcVar16 + -1;
                        } while (0 < (int)SVar14);
                      }
                      pcVar15[SVar14] = '\0';
                      local_3c = acStack_791 + 2;
                      while (((&DAT_005c168c)[(byte)(acStack_791[1] + 1)] & 2) != 0) {
                        memmove(pcVar15,local_3c,SVar14);
                        SVar14 = SVar14 - 1;
                      }
                      local_dc = 0;
                      core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0(this_ptr,acStack_791 + 1);
                      *parse_position = *parse_position + local_40;
                    }
                    else {
                      iVar7 = _stricmp(local_150,"isTalking");
                      if (iVar7 == 0) {
                        local_38 = -1;
                        sscanf
                                  (expression + *parse_position," ( %[^ )] )%n",local_27c,&local_38);
                        if (local_38 < 3) {
                          pcVar15 = "Error parsing isTalking parameters.";
                          pcVar16 = &DAT_01c08b60;
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
                        pCVar11 = core_event_cpp_resolveActorByName_FUN_0047a390
                                            (local_27c,g_CCharacterActorType_00765a60.name_hash,
                                             g_CCharacterActorType_00765a60.class_name);
                        if (pCVar11 == (CDemonActor *)0x0) {
                          return -1;
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
                            pcVar15 = "Error parsing isVictim parameters.";
                            pcVar16 = &DAT_01c08b60;
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
                            local_b4 = (CCharacter *)
                                       core_event_cpp_resolveActorByName_FUN_0047a390
                                                 (local_1b4,g_CCharacterActorType_00765a60.name_hash
                                                  ,g_CCharacterActorType_00765a60.class_name);
                            if (local_b4 != (CCharacter *)0x0) {
                              local_dc = 0;
                              if (local_b4 != 0x0FFFFFFF) {
                                local_34 = &(local_b4->base).location;
                                local_14 = 0;
                                for (iVar7 = 0; iVar7 < *(int *)(0x01E57284 + 0x150bf4);
                                    iVar7 = iVar7 + 1) {
                                  iVar8 = *(int *)(0x01E57284 + unaff_EBP + 0x150bf8);
                                  if ((((local_b0 == (char *)*(int *)(iVar8 + 0xbca4)) &&
                                       (iVar12 = (**(code **)(*(int *)(iVar8 + 0x14c) + 0x104))
                                                           (iVar8), iVar12 < 1)) &&
                                      (iVar12 = (**(code **)(*(int *)(iVar8 + 0x14c) + 0x68))(iVar8)
                                      , iVar12 == 0)) &&
                                     (fVar3 = *(float *)(iVar8 + 0x20) - *pfStack_30,
                                     fVar5 = *(float *)(iVar8 + 0x24) - pfStack_30[1],
                                     fVar4 = *(float *)(iVar8 + 0x28) - pfStack_30[2],
                                     SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) <=
                                     (float)30)) {
                                    local_d8 = 1;
                                    break;
                                  }
                                  unaff_EBP = unaff_EBP + 4;
                                }
                              }
                              *parse_position = *parse_position + local_dc;
                              goto LAB_0047e580;
                            }
                          }
                          return -1;
                        }
                        iVar7 = _stricmp
                                          (local_150,"isWeaponDrawn");
                        if (iVar7 == 0) {
                          local_d8 = 0xffffffff;
                          sscanf
                                    (expression + *parse_position," ( %[^ )] )%n",local_470,&local_d8);
                          if ((int)local_d8 < 3) {
                            pcVar15 = "Error parsing isWeaponDrawn parameters.";
                            pcVar16 = &DAT_01c08b60;
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
                          pCVar9 = (CCharacter *)
                                   core_event_cpp_resolveActorByName_FUN_0047a390
                                             (local_470,g_CHeroActorType_01cae0ec.name_hash,
                                              g_CHeroActorType_01cae0ec.class_name);
                          if (pCVar9 == (CCharacter *)0x0) {
                            return -1;
                          }
                          if (pCVar9 == 0x0FFFFFFF) {
                            local_d8 = (uint)pCVar9 ^ (uint)0x0FFFFFFF;
                          }
                          else {
                            local_d8 = (*(((pCVar9->base).vtable._uc)->_uc).getCarryObjToBodyXForm)
                                                 (pCVar9,(int)in_stack_fffff570,
                                                  (CMatrix3x4f *)
                                                  ((ulonglong)in_stack_fffff570 >> 0x20));
                          }
                          *parse_position = *parse_position + (int)local_d4;
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
                              pcVar15 = "Error parsing isWearingGasMask parameters.";
                              pcVar16 = &DAT_01c08b60;
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
                            pCVar9 = (CCharacter *)
                                     core_event_cpp_resolveActorByName_FUN_0047a390
                                               (local_538,g_CHeroActorType_01cae0ec.name_hash,
                                                g_CHeroActorType_01cae0ec.class_name);
                            if (pCVar9 == (CCharacter *)0x0) {
                              return -1;
                            }
                            if (pCVar9 == 0x0FFFFFFF) {
                              *parse_position = *parse_position + local_20;
                            }
                            else {
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
                                pcVar15 = "Invalid meta-function";
                                pcVar16 = &DAT_01c08b60;
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
                              local_18 = -1;
                              sscanf
                                        (expression + *parse_position," ( %[^ )] )%n",local_664,
                                         &local_18);
                              if (local_18 < 3) {
                                pcVar15 = "Error parsing reachedDest parameters.";
                                pcVar16 = &DAT_01c08b60;
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
                                pCVar9 = (CCharacter *)
                                         core_event_cpp_resolveActorByName_FUN_0047a390
                                                   (local_664,
                                                    g_CCharacterActorType_00765a60.name_hash,
                                                    g_CCharacterActorType_00765a60.class_name);
                                if (pCVar9 != (CCharacter *)0x0) {
                                  if (pCVar9 == 0x0FFFFFFF) {
                                    *parse_position = *parse_position + local_18;
                                  }
                                  else {
                                    iVar7 = (*(((pCVar9->base).vtable._uc)->_uc).clearDoorTarget)
                                                      (pCVar9);
                                    local_d8 = (uint)(iVar7 != 0);
                                    *parse_position = *parse_position + local_14;
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
                              pcVar15 = "Error parsing randBool parameters.";
                              pcVar16 = &DAT_01c08b60;
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
                            core_actor_cpp_randomChance_FUN_0040dea0(local_d4);
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
    pcVar15 = "Error parsing cmp parameters.";
    pcVar16 = &DAT_01c08b60;
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
  pcVar15 = acStack_8bd + 1;
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
      if (((&DAT_005c168c)[(byte)(pcVar16[-1] + 1)] & 2) == 0) break;
      SVar14 = SVar14 - 1;
      pcVar16 = pcVar16 + -1;
    } while (0 < (int)SVar14);
  }
  pcVar15[SVar14] = '\0';
  local_d0 = acStack_8bd + 2;
  while (((&DAT_005c168c)[(byte)(acStack_8bd[1] + 1)] & 2) != 0) {
    memmove(pcVar15,local_d0,SVar14);
    SVar14 = SVar14 - 1;
  }
  uVar13 = 0xffffffff;
  pcVar15 = local_345 + 1;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar15 + (uint)bVar17 * -2 + 1;
  } while (cVar1 != '\0');
  SVar14 = ~uVar13 - 1;
  if (0 < (int)SVar14) {
    pcVar15 = local_345 + ~uVar13;
    do {
      if (((&DAT_005c168c)[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
      SVar14 = SVar14 - 1;
      pcVar15 = pcVar15 + -1;
    } while (0 < (int)SVar14);
  }
  (local_345 + 1)[SVar14] = '\0';
  local_cc = local_345 + 2;
  while (((&DAT_005c168c)[(byte)(local_345[1] + 1)] & 2) != 0) {
    memmove(local_345 + 1,local_cc,SVar14);
    SVar14 = SVar14 - 1;
  }
  uVar13 = 0xffffffff;
  pcVar15 = local_219 + 1;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar15 + (uint)bVar17 * -2 + 1;
  } while (cVar1 != '\0');
  SVar14 = ~uVar13 - 1;
  if (0 < (int)SVar14) {
    pcVar15 = local_219 + ~uVar13;
    do {
      if (((&DAT_005c168c)[(byte)(pcVar15[-1] + 1)] & 2) == 0) break;
      SVar14 = SVar14 - 1;
      pcVar15 = pcVar15 + -1;
    } while (0 < (int)SVar14);
  }
  (local_219 + 1)[SVar14] = '\0';
  local_c8 = local_219 + 2;
  while (((&DAT_005c168c)[(byte)(local_219[1] + 1)] & 2) != 0) {
    memmove(local_219 + 1,local_c8,SVar14);
    SVar14 = SVar14 - 1;
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
    pcVar15 = "Invalid relational operator in cmp statement";
    pcVar16 = &DAT_01c08b60;
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
  *parse_position = *parse_position + local_c0;
  iVar8 = sscanf(acStack_8bd + 1,"%d",local_c4);
  if (iVar8 != 1) {
    core_event_cpp_CEventList_getCounterValue_FUN_004807e0(0x01C03A10,acStack_8bd + 1);
  }
  iVar8 = sscanf(local_345 + 1,"%d",local_74);
  if (iVar8 == 1) {
    switch(iVar7) {
    case 0:
switchD_0047e565_caseD_0:
      break;
    case 1:
switchD_0047e565_caseD_1:
      break;
    case 2:
switchD_0047e565_caseD_2:
      break;
    case 3:
switchD_0047e565_caseD_3:
      break;
    case 4:
switchD_0047e565_caseD_4:
      break;
    case 5:
switchD_0047e565_caseD_5:
      break;
    default:
switchD_0047e565_default:
      PTR_01cc4800 = "..\\core\\event.cpp";
      INT_01cc4804 = 0x765;
      core_main_c_FUN_004c8440("Hell froze.");
    }
LAB_0047e580:
    while (((&DAT_005c168c)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
      *parse_position = *parse_position + 1;
    }
    return local_d8;
  }
  core_event_cpp_CEventList_getCounterValue_FUN_004807e0(0x01C03A10,local_345 + 1);
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
