// Name: core_event.cpp_CEventList_executeCommand_FUN_0047ac50
// Address: 0047ac50
// Address Range: [[0047ac50, 0047db95]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_event_cpp_CEventList_executeCommand_FUN_0047ac50(int *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_event_cpp_CEventList_executeCommand_FUN_0047ac50(int *param_1,char *param_2)

{
  char cVar1;
  byte uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  byte bVar14;
  byte local_163c [255];
  char local_153d [200];
  char local_1475 [200];
  char local_13ad [200];
  char local_12e5 [200];
  char local_121d [201];
  byte local_1154 [199];
  char local_108d [201];
  byte local_fc4 [199];
  char local_efd [200];
  char local_e35 [200];
  char local_d6d [200];
  char local_ca5 [200];
  char local_bdd [200];
  char local_b15 [200];
  char local_a4d [200];
  char local_985 [200];
  char local_8bd [201];
  byte local_7f4 [199];
  char local_72d [200];
  char local_665 [200];
  char local_59d [200];
  char local_4d5 [200];
  char local_40d [201];
  uint local_344 [24];
  char local_2e1 [101];
  byte local_27c [99];
  char local_219 [101];
  byte local_1b4 [32];
  byte local_194 [32];
  byte local_174 [32];
  byte local_154 [32];
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  byte local_110 [4];
  byte local_10c [4];
  byte local_108 [12];
  uint local_fc;
  uint uStack_f8;
  int *local_f4;
  uint local_f0;
  char *local_ec;
  int local_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_cc;
  uint local_c8;
  int local_c4;
  uint local_c0;
  float local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  byte *local_a0;
  float local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  int local_8c;
  float local_88;
  int local_84;
  uint local_80;
  int local_7c;
  float local_78;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  float local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar14 = 0;
  DAT_01c08b60 = 0;
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar3 = _stricmp(), iVar3 != 0)) {
    if (*param_2 == '.') {
      param_2 = param_2 + 1;
    }
    local_f0 = (uint)(_DAT_01c08b5c == 0);
    local_ec = &DAT_0057f586;
    pcVar9 = param_2;
    do {
      pcVar8 = pcVar9;
      if (*pcVar9 == '(') goto LAB_0047acd1;
      if (*pcVar9 == '\0') break;
      pcVar8 = pcVar9 + 1;
      if (*pcVar8 == '(') goto LAB_0047acd1;
      pcVar9 = pcVar9 + 2;
    } while (*pcVar8 != '\0');
    pcVar8 = (char *)0x0;
LAB_0047acd1:
    if (pcVar8 == (char *)0x0) {
      iVar3 = 0;
      if (0 < *param_1) {
        do {
          iVar4 = _stricmp();
          if (iVar4 == 0) {
            return 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *param_1);
      }
      uVar6 = 0xffffffff;
      pcVar9 = param_2;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar6 - 1) {
        uVar5 = FUN_0047a210("Event name %s is too long",param_2);
        return uVar5;
      }
      if (99 < *param_1) {
        _DAT_01cc4800 = "..\\core\\event.cpp";
        _DAT_01cc4804 = 599;
        FUN_004c8440();
      }
      piVar10 = param_1 + *param_1 * 8 + 1;
      local_14 = 0;
      pcVar9 = param_2;
      piVar12 = piVar10;
      do {
        cVar1 = *pcVar9;
        *(char *)piVar12 = cVar1;
        local_f4 = piVar10;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        *(char *)((int)piVar12 + 1) = cVar1;
        piVar12 = (int *)((int)piVar12 + 2);
      } while (cVar1 != '\0');
      do {
        uVar6 = local_14;
        uVar7 = 0xffffffff;
        piVar12 = local_f4;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          iVar3 = *piVar12;
          piVar12 = (int *)((int)piVar12 + (uint)bVar14 * -2 + 1);
        } while ((char)iVar3 != '\0');
        if (~uVar7 - 1 <= local_14) {
          if (local_f0 == 0) {
            return 1;
          }
          *param_1 = *param_1 + 1;
          return 1;
        }
        uVar2 = toupper();
        *(byte *)piVar10 = uVar2;
        iVar3 = core_event_cpp_isValidIdentifierChar_FUN_00480f40();
        if (iVar3 == 0) {
          uVar5 = FUN_0047a210("Event name %s is not valid",param_2);
          return uVar5;
        }
        local_14 = uVar6 + 1;
        piVar10 = (int *)((int)piVar10 + 1);
      } while( true );
    }
    iVar3 = _strnicmp(param_2,"advanceLightFilter",0x12);
    if ((iVar3 == 0) && (((&DAT_005c168c)[(byte)(param_2[0x12] + 1)] & 0xe0) == 0)) {
      local_ec = param_2 + 0x12;
      while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
        local_ec = local_ec + 1;
      }
      pcVar9 = (char *)core_event_cpp_extractParenArg_FUN_0047a650(&local_ec,local_fc4,200);
      if (pcVar9 != (char *)0x0) goto LAB_0047aec8;
      core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0(0x01E57284,local_fc4,&local_e8,&local_44)
      ;
      if (local_e8 == 0) {
        uVar5 = FUN_0047a210("SpotLight %s doesn't exist.",local_fc4);
        return uVar5;
      }
      if (local_f0 != 0) {
        if (local_44 == 0) {
          _DAT_01cc4800 = "..\\core\\event.cpp";
          _DAT_01cc4804 = 0x27f;
          FUN_004c8440("Can't find CDemonLight for light %s in advanceLightFilter meta-command",local_fc4);
        }
        core_setutil_cpp_C3DSLight_advanceFilter_FUN_005155e0(local_e8,local_44);
      }
    }
    else {
      iVar3 = _strnicmp(param_2,"createExplosion",0xf);
      if ((iVar3 == 0) && (((&DAT_005c168c)[(byte)(param_2[0xf] + 1)] & 0xe0) == 0)) {
        local_ec = param_2 + 0xf;
        while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
          local_ec = local_ec + 1;
        }
        local_e4 = -1;
        sscanf(local_ec,"( %f , %n",&local_e0,&local_e4);
        if (local_e4 < 0) {
          uVar5 = FUN_0047a210();
          return uVar5;
        }
        local_ec = local_ec + local_e4;
        local_e4 = -1;
        sscanf
                  (local_ec,"%f , %f , %f %n",&local_128,&local_124,&local_120,&local_e4);
        if ((local_e4 < 0) &&
           (sscanf(local_ec," %[^,)] %n",local_4d5 + 1,&local_e4),
           -1 < local_e4)) {
          uVar6 = 0xffffffff;
          pcVar9 = local_4d5 + 1;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
          } while (cVar1 != '\0');
          iVar3 = ~uVar6 - 1;
          if (0 < iVar3) {
            pcVar9 = local_4d5 + ~uVar6;
            do {
              if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2) == 0) break;
              iVar3 = iVar3 + -1;
              pcVar9 = pcVar9 + -1;
            } while (0 < iVar3);
          }
          (local_4d5 + 1)[iVar3] = '\0';
          while (((&DAT_005c168c)[(byte)(local_4d5[1] + 1)] & 2) != 0) {
            memmove(local_4d5 + 1);
          }
          uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                            (local_4d5 + 1,DAT_00763e80,&DAT_00763e48);
          if (uVar6 == 0) {
            return 0;
          }
          if (uVar6 == 0x0FFFFFFF) {
            local_f0 = 0;
          }
          else if (&local_128 != (uint *)(uVar6 + 0x20)) {
            local_128 = *(uint *)(uVar6 + 0x20);
            local_124 = *(uint *)(uVar6 + 0x24);
            local_120 = *(uint *)(uVar6 + 0x28);
          }
        }
        if (local_e4 < 0) {
          uVar5 = FUN_0047a210();
          return uVar5;
        }
        local_ec = local_ec + local_e4;
        while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
          local_ec = local_ec + 1;
        }
        local_dc = 0x40800000;
        if (*local_ec == ',') {
          local_e4 = -1;
          sscanf(local_ec,", %f %n",&local_dc,&local_e4);
          if (local_e4 < 0) {
            uVar5 = FUN_0047a210();
            return uVar5;
          }
          local_ec = local_ec + local_e4;
          while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
            local_ec = local_ec + 1;
          }
        }
        if (*local_ec != ')') {
          uVar5 = FUN_0047a210();
          return uVar5;
        }
        local_ec = local_ec + 1;
        if (local_f0 != 0) {
          FUN_0048c0d0(0x01C08D04,&local_128,local_e0,0x44bb8000,local_dc);
        }
      }
      else {
        iVar3 = _strnicmp(param_2,"deleteActor",0xb);
        if ((iVar3 == 0) && (((&DAT_005c168c)[(byte)(param_2[0xb] + 1)] & 0xe0) == 0)) {
          local_ec = param_2 + 0xb;
          while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
            local_ec = local_ec + 1;
          }
          pcVar9 = (char *)core_event_cpp_extractParenArg_FUN_0047a650(&local_ec,local_1154,200);
          if (pcVar9 != (char *)0x0) goto LAB_0047aec8;
          uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                            (local_1154,DAT_00763e80,&DAT_00763e48);
          uVar5 = DAT_00764838;
          if (uVar6 == 0) {
            if (_DAT_01c08b5c != 0) {
              return 0;
            }
            local_f0 = 0;
          }
          if ((uVar6 != 0x0FFFFFFF) && (local_f0 != 0)) {
            *(uint *)(uVar6 + 0x70) = 2;
            iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(uVar6,uVar5);
            if (iVar3 != 0) {
              *(byte *)(iVar3 + 0x2cc) = 0;
              sound_sndmain_cpp_killSfx_FUN_00527230();
            }
            iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(uVar6,DAT_00765c68);
            if (iVar3 != 0) {
              *(byte *)(iVar3 + 0x1ac) = 0;
              *(byte *)(iVar3 + 0x214) = 0;
              sound_sndmain_cpp_killSfx_FUN_00527230();
            }
          }
        }
        else {
          iVar3 = _strnicmp(param_2,"displayBitmap",0xd);
          if ((iVar3 == 0) && (((&DAT_005c168c)[(byte)(param_2[0xd] + 1)] & 0xe0) == 0)) {
            local_ec = param_2 + 0xd;
            while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
              local_ec = local_ec + 1;
            }
            local_d0 = -1;
            sscanf
                      (local_ec,"( %[^ ,], %d, %d )%n",local_163c,&local_d8,&local_d4,
                       &local_d0);
            if (local_d0 < 0) {
              uVar5 = FUN_0047a210();
              return uVar5;
            }
            local_ec = local_ec + local_d0;
            while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
              local_ec = local_ec + 1;
            }
            iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0(&DAT_0057f7a5,local_163c);
            if (iVar3 < 0) {
              uVar5 = FUN_0047a210();
              return uVar5;
            }
            if (iVar3 != local_d8 * local_d4) {
              uVar5 = FUN_0047a210();
              return uVar5;
            }
            if (local_f0 != 0) {
              core_game_cpp_CGame_displayBitmap_FUN_004a5740
                        (0x01C775EC,local_163c,local_d8,local_d4);
            }
          }
          else {
            iVar3 = _strnicmp(param_2,"fadeAmbientSound",0x10);
            if ((iVar3 == 0) && (((&DAT_005c168c)[(byte)(param_2[0x10] + 1)] & 0xe0) == 0)) {
              local_ec = param_2 + 0x10;
              while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                local_ec = local_ec + 1;
              }
              local_c4 = -1;
              sscanf
                        (local_ec,"(%f, %f )%n",&local_cc,&local_c8,&local_c4);
              if (local_c4 < 0) {
                _sprintf(&DAT_01c08b60,"Error parsing fadeAmbientSound parms");
                return 0;
              }
              local_ec = local_ec + local_c4;
              if (local_f0 != 0) {
                core_sound_cpp_CSound_setVolumeFade_FUN_0052ede0(0x02DC9450,local_cc,local_c8);
              }
            }
            else {
              iVar3 = _strnicmp(param_2,"fadeSfx",7);
              if ((iVar3 == 0) && (((&DAT_005c168c)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                local_ec = param_2 + 7;
                while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                  local_ec = local_ec + 1;
                }
                local_b8 = -1;
                sscanf
                          (local_ec,"(%[^,], %f, %f )%n",local_108d + 1,&local_c0,&local_bc
                           ,&local_b8);
                if (local_b8 < 0) {
                  _sprintf(&DAT_01c08b60,"Error parsing fadeSfx parms");
                  return 0;
                }
                local_ec = local_ec + local_b8;
                uVar6 = 0xffffffff;
                pcVar9 = local_108d + 1;
                do {
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                } while (cVar1 != '\0');
                iVar3 = ~uVar6 - 1;
                if (0 < iVar3) {
                  pcVar9 = local_108d + ~uVar6;
                  do {
                    if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2) == 0) break;
                    iVar3 = iVar3 + -1;
                    pcVar9 = pcVar9 + -1;
                  } while (0 < iVar3);
                }
                (local_108d + 1)[iVar3] = '\0';
                while (((&DAT_005c168c)[(byte)(local_108d[1] + 1)] & 2) != 0) {
                  memmove(local_108d + 1);
                }
                if (local_f0 != 0) {
                  uVar5 = core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0
                                    (param_1,local_108d + 1);
                  if (local_bc <= 0.0) {
                    sound_sndmain_cpp_setSfxVolume_FUN_005270d0(uVar5,local_c0);
                  }
                  else {
                    sound_sndmain_cpp_setSfxFade_FUN_00527260(uVar5,local_c0,local_bc,0);
                  }
                }
              }
              else {
                iVar3 = _strnicmp(param_2,"flagOn",6);
                if ((iVar3 == 0) && (((&DAT_005c168c)[(byte)(param_2[6] + 1)] & 0xe0) == 0)) {
                  local_ec = param_2 + 6;
                  while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                    local_ec = local_ec + 1;
                  }
                  pcVar9 = (char *)core_event_cpp_extractParenArg_FUN_0047a650
                                             (&local_ec,local_194,0x20);
                  if (pcVar9 != (char *)0x0) {
LAB_0047aec8:
                    pcVar8 = &DAT_01c08b60;
                    do {
                      cVar1 = *pcVar9;
                      *pcVar8 = cVar1;
                      if (cVar1 == '\0') {
                        return 0;
                      }
                      cVar1 = pcVar9[1];
                      pcVar9 = pcVar9 + 2;
                      pcVar8[1] = cVar1;
                      pcVar8 = pcVar8 + 2;
                    } while (cVar1 != '\0');
                    return 0;
                  }
                  if (local_f0 != 0) {
                    core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
                              (param_1,local_194,1);
                  }
                }
                else {
                  iVar3 = _strnicmp(param_2,"flagOff",7);
                  if ((iVar3 == 0) && (((&DAT_005c168c)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                    local_ec = param_2 + 7;
                    while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                      local_ec = local_ec + 1;
                    }
                    pcVar9 = (char *)core_event_cpp_extractParenArg_FUN_0047a650
                                               (&local_ec,local_174,0x20);
                    if (pcVar9 != (char *)0x0) goto LAB_0047aec8;
                    if (local_f0 != 0) {
                      core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
                                (param_1,local_174,0);
                    }
                  }
                  else {
                    iVar3 = _strnicmp(param_2,"gameFlagOn",10);
                    if ((iVar3 == 0) && (((&DAT_005c168c)[(byte)(param_2[10] + 1)] & 0xe0) == 0)) {
                      local_ec = param_2 + 10;
                      while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                        local_ec = local_ec + 1;
                      }
                      pcVar9 = (char *)core_event_cpp_extractParenArg_FUN_0047a650
                                                 (&local_ec,local_1b4,0x20);
                      if (pcVar9 != (char *)0x0) goto LAB_0047aec8;
                      if (local_f0 != 0) {
                        core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_00480420
                                  (param_1,local_1b4,1);
                      }
                    }
                    else {
                      iVar3 = _strnicmp
                                        (param_2,"gameFlagOff",0xb);
                      if ((iVar3 == 0) && (((&DAT_005c168c)[(byte)(param_2[0xb] + 1)] & 0xe0) == 0))
                      {
                        local_ec = param_2 + 0xb;
                        while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                          local_ec = local_ec + 1;
                        }
                        pcVar9 = (char *)core_event_cpp_extractParenArg_FUN_0047a650
                                                   (&local_ec,local_154,0x20);
                        if (pcVar9 != (char *)0x0) goto LAB_0047aec8;
                        if (local_f0 != 0) {
                          core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_00480420
                                    (param_1,local_154,0);
                        }
                      }
                      else {
                        iVar3 = _strnicmp
                                          (param_2,"hurtCharacter",0xd);
                        if ((iVar3 == 0) &&
                           (((&DAT_005c168c)[(byte)(param_2[0xd] + 1)] & 0xe0) == 0)) {
                          local_ec = param_2 + 0xd;
                          while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                            local_ec = local_ec + 1;
                          }
                          local_b4 = -1;
                          sscanf
                                    (local_ec," ( %[^,], %[^,],%f)%n",local_665 + 1,
                                     local_2e1 + 1,&local_b0,&local_b4);
                          if (local_b4 < 2) {
                            uVar5 = FUN_0047a210();
                            return uVar5;
                          }
                          uVar6 = 0xffffffff;
                          pcVar9 = local_665 + 1;
                          do {
                            if (uVar6 == 0) break;
                            uVar6 = uVar6 - 1;
                            cVar1 = *pcVar9;
                            pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                          } while (cVar1 != '\0');
                          iVar3 = ~uVar6 - 1;
                          if (0 < iVar3) {
                            pcVar9 = local_665 + ~uVar6;
                            do {
                              if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2) == 0) break;
                              iVar3 = iVar3 + -1;
                              pcVar9 = pcVar9 + -1;
                            } while (0 < iVar3);
                          }
                          (local_665 + 1)[iVar3] = '\0';
                          while (((&DAT_005c168c)[(byte)(local_665[1] + 1)] & 2) != 0) {
                            memmove(local_665 + 1);
                          }
                          uVar6 = 0xffffffff;
                          pcVar9 = local_2e1 + 1;
                          do {
                            if (uVar6 == 0) break;
                            uVar6 = uVar6 - 1;
                            cVar1 = *pcVar9;
                            pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                          } while (cVar1 != '\0');
                          iVar3 = ~uVar6 - 1;
                          if (0 < iVar3) {
                            pcVar9 = local_2e1 + ~uVar6;
                            do {
                              if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2) == 0) break;
                              iVar3 = iVar3 + -1;
                              pcVar9 = pcVar9 + -1;
                            } while (0 < iVar3);
                          }
                          (local_2e1 + 1)[iVar3] = '\0';
                          while (((&DAT_005c168c)[(byte)(local_2e1[1] + 1)] & 2) != 0) {
                            memmove(local_2e1 + 1);
                          }
                          local_ec = local_ec + local_b4;
                          while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                            local_ec = local_ec + 1;
                          }
                          uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                                            (local_665 + 1,DAT_00765a98,&DAT_00765a60);
                          if (uVar6 == 0) {
                            return 0;
                          }
                          if (uVar6 == 0x0FFFFFFF) {
                            local_f0 = uVar6 ^ 0x0FFFFFFF;
                          }
                          iVar3 = core_event_cpp_parseDamageType_FUN_0047a8f0
                                            (local_2e1 + 1,&local_ac);
                          if (iVar3 == 0) {
                            uVar5 = FUN_0047a210("Unknown damage type \"%s\" in hurtCharacter command.",
                                                 local_2e1 + 1);
                            return uVar5;
                          }
                          if (local_f0 != 0) {
                            (**(code **)(*(int *)(uVar6 + 0x14c) + 0xd0))(uVar6,local_ac,local_b0);
                          }
                        }
                        else {
                          iVar3 = _strnicmp
                                            (param_2,"incCounter",10);
                          if ((iVar3 == 0) &&
                             (((&DAT_005c168c)[(byte)(param_2[10] + 1)] & 0xe0) == 0)) {
                            local_ec = param_2 + 10;
                            while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                              local_ec = local_ec + 1;
                            }
                            local_a8 = -1;
                            sscanf
                                      (local_ec,"( %[^ )] )%n",local_121d + 1,&local_a8);
                            if (local_a8 < 5) {
                              _sprintf(&DAT_01c08b60,"Error parsing incCounter arguments");
                              return 0;
                            }
                            local_ec = local_ec + local_a8;
                            uVar6 = 0xffffffff;
                            pcVar9 = local_121d + 1;
                            do {
                              if (uVar6 == 0) break;
                              uVar6 = uVar6 - 1;
                              cVar1 = *pcVar9;
                              pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                            } while (cVar1 != '\0');
                            iVar3 = ~uVar6 - 1;
                            if (0 < iVar3) {
                              pcVar9 = local_121d + ~uVar6;
                              do {
                                if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2) == 0) break;
                                iVar3 = iVar3 + -1;
                                pcVar9 = pcVar9 + -1;
                              } while (0 < iVar3);
                            }
                            (local_121d + 1)[iVar3] = '\0';
                            while (((&DAT_005c168c)[(byte)(local_121d[1] + 1)] & 2) != 0) {
                              memmove(local_121d + 1);
                            }
                            if (local_f0 != 0) {
                              iVar3 = core_event_cpp_CEventList_getCounterValue_FUN_004807e0
                                                (param_1,local_121d + 1);
                              core_event_cpp_CEventList_setCounter_FUN_004806d0
                                        (param_1,local_121d + 1,iVar3 + 1);
                            }
                          }
                          else {
                            iVar3 = _strnicmp
                                              (param_2,"killCharacter",0xd);
                            if ((iVar3 == 0) &&
                               (((&DAT_005c168c)[(byte)(param_2[0xd] + 1)] & 0xe0) == 0)) {
                              local_ec = param_2 + 0xd;
                              while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                local_ec = local_ec + 1;
                              }
                              local_a0 = local_110;
                              local_a4 = -1;
                              local_9c = 0.0;
                              sscanf
                                        (local_ec," ( %[^,], %[^,], %f , %f , %f , %f)%n",
                                         local_153d + 1,local_219 + 1,local_110,local_10c,local_108,
                                         &local_9c,&local_a4);
                              local_9c = local_9c * (float)_DAT_00580217;
                              if (local_a4 < 0) {
                                local_9c = -1.0;
                                sscanf
                                          (local_ec," ( %[^,], %[^,], %f , %f , %f )%n",
                                           local_153d + 1,local_219 + 1,local_110,local_10c,
                                           local_108,&local_a4);
                              }
                              if (local_a4 < 0) {
                                local_a0 = (byte *)0x0;
                                sscanf
                                          (local_ec," ( %[^,], %[^)])%n",local_153d + 1,
                                           local_219 + 1,&local_a4);
                              }
                              if (local_a4 < 0) {
                                uVar5 = FUN_0047a210();
                                return uVar5;
                              }
                              uVar6 = 0xffffffff;
                              pcVar9 = local_153d + 1;
                              do {
                                if (uVar6 == 0) break;
                                uVar6 = uVar6 - 1;
                                cVar1 = *pcVar9;
                                pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                              } while (cVar1 != '\0');
                              iVar3 = ~uVar6 - 1;
                              if (0 < iVar3) {
                                pcVar9 = local_153d + ~uVar6;
                                do {
                                  if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2) == 0) break;
                                  iVar3 = iVar3 + -1;
                                  pcVar9 = pcVar9 + -1;
                                } while (0 < iVar3);
                              }
                              (local_153d + 1)[iVar3] = '\0';
                              while (((&DAT_005c168c)[(byte)(local_153d[1] + 1)] & 2) != 0) {
                                memmove(local_153d + 1);
                              }
                              uVar6 = 0xffffffff;
                              pcVar9 = local_219 + 1;
                              do {
                                if (uVar6 == 0) break;
                                uVar6 = uVar6 - 1;
                                cVar1 = *pcVar9;
                                pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                              } while (cVar1 != '\0');
                              iVar3 = ~uVar6 - 1;
                              if (0 < iVar3) {
                                pcVar9 = local_219 + ~uVar6;
                                do {
                                  if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2) == 0) break;
                                  iVar3 = iVar3 + -1;
                                  pcVar9 = pcVar9 + -1;
                                } while (0 < iVar3);
                              }
                              (local_219 + 1)[iVar3] = '\0';
                              while (((&DAT_005c168c)[(byte)(local_219[1] + 1)] & 2) != 0) {
                                memmove(local_219 + 1);
                              }
                              local_ec = local_ec + local_a4;
                              while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                local_ec = local_ec + 1;
                              }
                              uVar6 = core_event_cpp_resolveActorByName_FUN_0047a390
                                                (local_153d + 1,DAT_00765a98,&DAT_00765a60);
                              if (uVar6 == 0) {
                                return 0;
                              }
                              if (uVar6 == 0x0FFFFFFF) {
                                local_f0 = 0;
                              }
                              iVar3 = core_event_cpp_parseDeathType_FUN_0047a760
                                                (local_219 + 1,&local_98);
                              if (iVar3 == 0) {
                                uVar5 = FUN_0047a210("Unknown death type \"%s\" in killCharacter command.",
                                                     local_219 + 1);
                                return uVar5;
                              }
                              if (local_f0 != 0) {
                                (**(code **)(*(int *)(uVar6 + 0x14c) + 0xd4))
                                          (uVar6,local_98,local_a0,local_9c);
                              }
                            }
                            else {
                              iVar3 = _strnicmp
                                                (param_2,"killHero",8);
                              if ((iVar3 == 0) &&
                                 (((&DAT_005c168c)[(byte)(param_2[8] + 1)] & 0xe0) == 0)) {
                                local_ec = param_2 + 8;
                                while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                  local_ec = local_ec + 1;
                                }
                                if (*0x01CEA280 != 0) {
                                  uVar5 = FUN_0047a210();
                                  return uVar5;
                                }
                                local_94 = -1;
                                sscanf
                                          (local_ec," ( %[^)])%n",local_27c,&local_94);
                                if (local_94 < 2) {
                                  uVar5 = FUN_0047a210();
                                  return uVar5;
                                }
                                local_ec = local_ec + local_94;
                                while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                  local_ec = local_ec + 1;
                                }
                                iVar3 = core_event_cpp_parseDeathType_FUN_0047a760
                                                  (local_27c,&local_90);
                                if (iVar3 == 0) {
                                  uVar5 = FUN_0047a210("Unknown death type \"%s\" in killHero command.",
                                                       local_27c);
                                  return uVar5;
                                }
                                if ((local_f0 != 0) &&
                                   (iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8), iVar3 != 0)) {
                                  (**(code **)(*(int *)(iVar3 + 0x14c) + 0xd4))
                                            (iVar3,local_90,0,0xbf800000);
                                }
                              }
                              else {
                                iVar3 = _strnicmp
                                                  (param_2,"killSfx",7);
                                if ((iVar3 == 0) &&
                                   (((&DAT_005c168c)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                                  local_ec = param_2 + 7;
                                  while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                    local_ec = local_ec + 1;
                                  }
                                  local_8c = -1;
                                  sscanf
                                            (local_ec,"(%[^,)]%n",local_efd + 1,&local_8c);
                                  if (local_8c < 3) {
                                    _sprintf(&DAT_01c08b60,"Error parsing killSfx parms")
                                    ;
                                    return 0;
                                  }
                                  local_ec = local_ec + local_8c;
                                  uVar6 = 0xffffffff;
                                  pcVar9 = local_efd + 1;
                                  do {
                                    if (uVar6 == 0) break;
                                    uVar6 = uVar6 - 1;
                                    cVar1 = *pcVar9;
                                    pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                  } while (cVar1 != '\0');
                                  iVar3 = ~uVar6 - 1;
                                  if (0 < iVar3) {
                                    pcVar9 = local_efd + ~uVar6;
                                    do {
                                      if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2) == 0) break;
                                      iVar3 = iVar3 + -1;
                                      pcVar9 = pcVar9 + -1;
                                    } while (0 < iVar3);
                                  }
                                  (local_efd + 1)[iVar3] = '\0';
                                  while (((&DAT_005c168c)[(byte)(local_efd[1] + 1)] & 2) != 0) {
                                    memmove(local_efd + 1);
                                  }
                                  local_88 = 0.0;
                                  if (*local_ec == ',') {
                                    local_8c = -1;
                                    sscanf
                                              (local_ec,",%f%n",&local_88,&local_8c);
                                    if (local_8c < 3) {
                                      _sprintf(&DAT_01c08b60,
                                                 "Error parsing killSfx parms");
                                      return 0;
                                    }
                                    local_ec = local_ec + local_8c;
                                  }
                                  do {
                                    pcVar9 = local_ec;
                                    local_ec = pcVar9 + 1;
                                  } while (((&DAT_005c168c)[(byte)(*pcVar9 + 1)] & 2) != 0);
                                  if (*pcVar9 != ')') {
                                    local_ec = pcVar9;
                                    _sprintf(&DAT_01c08b60,
                                               "Can't find matching ) in killSfx command");
                                    return 0;
                                  }
                                  if (local_f0 != 0) {
                                    uVar5 = core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0
                                                      (param_1,local_efd + 1);
                                    if (local_88 <= 0.0) {
                                      sound_sndmain_cpp_killSfx_FUN_00527230();
                                      core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60();
                                    }
                                    else {
                                      sound_sndmain_cpp_setSfxFade_FUN_00527260(uVar5,0,local_88,1);
                                      core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60();
                                    }
                                  }
                                }
                                else {
                                  iVar3 = _strnicmp
                                                    (param_2,"lightning",9);
                                  if ((iVar3 == 0) &&
                                     (((&DAT_005c168c)[(byte)(param_2[9] + 1)] & 0xe0) == 0)) {
                                    local_ec = param_2 + 9;
                                    while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                      local_ec = local_ec + 1;
                                    }
                                    local_84 = -1;
                                    sscanf
                                              (local_ec,"( )%n",&local_84);
                                    if (local_84 < 2) {
                                      _sprintf(&DAT_01c08b60,
                                                 "Error parsing lightning command");
                                      return 0;
                                    }
                                    local_ec = local_ec + local_84;
                                    if (local_f0 != 0) {
                                      core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40
                                                (0x02DDF9F0,0x3dcccccd,1);
                                    }
                                  }
                                  else {
                                    iVar3 = _strnicmp
                                                      (param_2,"playSfx",7);
                                    if ((iVar3 == 0) &&
                                       (((&DAT_005c168c)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                                      local_ec = param_2 + 7;
                                      while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                        local_ec = local_ec + 1;
                                      }
                                      local_7c = -1;
                                      sscanf
                                                (local_ec,"(%[^,)]%n",local_13ad + 1,
                                                 &local_7c);
                                      if (local_7c < 3) {
                                        _sprintf(&DAT_01c08b60,
                                                   "Error parsing playSfx parms");
                                        return 0;
                                      }
                                      local_ec = local_ec + local_7c;
                                      uVar6 = 0xffffffff;
                                      pcVar9 = local_13ad + 1;
                                      do {
                                        if (uVar6 == 0) break;
                                        uVar6 = uVar6 - 1;
                                        cVar1 = *pcVar9;
                                        pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                      } while (cVar1 != '\0');
                                      iVar3 = ~uVar6 - 1;
                                      if (0 < iVar3) {
                                        pcVar9 = local_13ad + ~uVar6;
                                        do {
                                          if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2) == 0)
                                          break;
                                          iVar3 = iVar3 + -1;
                                          pcVar9 = pcVar9 + -1;
                                        } while (0 < iVar3);
                                      }
                                      (local_13ad + 1)[iVar3] = '\0';
                                      while (pcVar9 = local_ec,
                                            ((&DAT_005c168c)[(byte)(local_13ad[1] + 1)] & 2) != 0) {
                                        memmove(local_13ad + 1);
                                      }
                                      puVar11 = &DAT_005b7658;
                                      puVar13 = (uint *)((int)local_b15 + 1);
                                      for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
                                        *puVar13 = *puVar11;
                                        puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
                                        puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
                                      }
                                      if (*pcVar9 == ',') {
                                        local_7c = -1;
                                        sscanf
                                                  (local_ec,",%[^)]%n",(int)local_b15 + 1,
                                                   &local_7c);
                                        if (local_7c < 3) {
                                          _sprintf(&DAT_01c08b60,
                                                     "Error parsing playSfx parms");
                                          return 0;
                                        }
                                        local_ec = local_ec + local_7c;
                                        uVar6 = 0xffffffff;
                                        pcVar9 = (char *)((int)local_b15 + 1);
                                        do {
                                          if (uVar6 == 0) break;
                                          uVar6 = uVar6 - 1;
                                          cVar1 = *pcVar9;
                                          pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                        } while (cVar1 != '\0');
                                        iVar3 = ~uVar6 - 1;
                                        if (0 < iVar3) {
                                          pcVar9 = local_b15 + ~uVar6;
                                          do {
                                            if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2) == 0)
                                            break;
                                            iVar3 = iVar3 + -1;
                                            pcVar9 = pcVar9 + -1;
                                          } while (0 < iVar3);
                                        }
                                        *(byte *)((int)local_b15 + 1U + iVar3) = 0;
                                        while (((&DAT_005c168c)[(byte)(local_b15[1] + 1)] & 2) != 0)
                                        {
                                          memmove((int)local_b15 + 1U);
                                        }
                                        uVar6 = 0xffffffff;
                                        pcVar9 = (char *)((int)local_b15 + 1);
                                        do {
                                          if (uVar6 == 0) break;
                                          uVar6 = uVar6 - 1;
                                          cVar1 = *pcVar9;
                                          pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                        } while (cVar1 != '\0');
                                        if (0x13 < ~uVar6 - 1) {
                                          _sprintf(&DAT_01c08b60,
                                                     "handle name %s is too long, max %d chars",
                                                     (int)local_b15 + 1,0x13);
                                          return 0;
                                        }
                                      }
                                      do {
                                        pcVar9 = local_ec;
                                        local_ec = pcVar9 + 1;
                                      } while (((&DAT_005c168c)[(byte)(*pcVar9 + 1)] & 2) != 0);
                                      if (*pcVar9 != ')') {
                                        local_ec = pcVar9;
                                        _sprintf(&DAT_01c08b60,
                                                   "Can't find matching ) in playSfx command");
                                        return 0;
                                      }
                                      if (local_f0 != 0) {
                                        iVar3 = _strnicmp
                                                          (local_13ad + 1,&DAT_0057fbe2,3);
                                        if (iVar3 == 0) {
                                          iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490
                                                            ();
                                          if (iVar3 != 0) {
                                            sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
                                            sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0();
                                            uVar5 = core_sound_cpp_CSound_playSound_FUN_0052ea40
                                                              (0x02DC9450,param_1,local_13ad + 1);
                                            sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
                                            if (local_b15[1] != '\0') {
                                              core_event_cpp_CEventList_setSfxHandle_FUN_00480c30
                                                        (param_1,(int)local_b15 + 1,uVar5);
                                            }
                                          }
                                        }
                                        else {
                                          uVar5 = core_sound_cpp_CSound_playSound_FUN_0052ea40
                                                            (0x02DC9450,param_1,local_13ad + 1);
                                          if (local_b15[1] != '\0') {
                                            core_event_cpp_CEventList_setSfxHandle_FUN_00480c30
                                                      (param_1,(int)local_b15 + 1,uVar5);
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      iVar3 = _strnicmp
                                                        (param_2,"setCameraAmbient",0x10);
                                      if ((iVar3 == 0) &&
                                         (((&DAT_005c168c)[(byte)(param_2[0x10] + 1)] & 0xe0) == 0))
                                      {
                                        local_ec = param_2 + 0x10;
                                        while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                          local_ec = local_ec + 1;
                                        }
                                        local_74 = -1;
                                        sscanf
                                                  (local_ec,"(%[^,], %f)%n",local_12e5 + 1,
                                                   &local_78,&local_74);
                                        if (local_74 < 3) {
                                          _sprintf(&DAT_01c08b60,
                                                     "Error parsing setCameraAmbient parms");
                                          return 0;
                                        }
                                        local_ec = local_ec + local_74;
                                        uVar6 = 0xffffffff;
                                        pcVar9 = local_12e5 + 1;
                                        do {
                                          if (uVar6 == 0) break;
                                          uVar6 = uVar6 - 1;
                                          cVar1 = *pcVar9;
                                          pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                        } while (cVar1 != '\0');
                                        iVar3 = ~uVar6 - 1;
                                        if (0 < iVar3) {
                                          pcVar9 = local_12e5 + ~uVar6;
                                          do {
                                            if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2) == 0)
                                            break;
                                            iVar3 = iVar3 + -1;
                                            pcVar9 = pcVar9 + -1;
                                          } while (0 < iVar3);
                                        }
                                        (local_12e5 + 1)[iVar3] = '\0';
                                        while (((&DAT_005c168c)[(byte)(local_12e5[1] + 1)] & 2) != 0
                                              ) {
                                          memmove(local_12e5 + 1);
                                        }
                                        iVar3 = core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0
                                                          (0x01E57284,local_12e5 + 1);
                                        if (iVar3 < 0) {
                                          _sprintf(&DAT_01c08b60,
                                                     "Camera \"%s\" does not exist.",
                                                     local_12e5 + 1);
                                          return 0;
                                        }
                                        if ((local_78 < 0.0) || (0x42c80000 < (int)local_78)) {
                                          _sprintf(&DAT_01c08b60,
                                                     "Ambient value %g is out of range (1..100)",
                                                     (double)local_78);
                                          return 0;
                                        }
                                        if (local_f0 != 0) {
                                          core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0
                                                    (0x01E57284,iVar3,
                                                     local_78 * (float)_DAT_0058021f);
                                        }
                                      }
                                      else {
                                        iVar3 = _strnicmp
                                                          (param_2,"setCounter",10);
                                        if ((iVar3 == 0) &&
                                           (((&DAT_005c168c)[(byte)(param_2[10] + 1)] & 0xe0) == 0))
                                        {
                                          local_ec = param_2 + 10;
                                          while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0)
                                          {
                                            local_ec = local_ec + 1;
                                          }
                                          local_6c = -1;
                                          sscanf
                                                    (local_ec,"( %[^,)]%n",local_ca5 + 1,
                                                     &local_6c);
                                          if (local_6c < 5) {
                                            _sprintf(&DAT_01c08b60,
                                                       "Error parsing setCounter arguments");
                                            return 0;
                                          }
                                          local_ec = local_ec + local_6c;
                                          uVar6 = 0xffffffff;
                                          pcVar9 = local_ca5 + 1;
                                          do {
                                            if (uVar6 == 0) break;
                                            uVar6 = uVar6 - 1;
                                            cVar1 = *pcVar9;
                                            pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                          } while (cVar1 != '\0');
                                          iVar3 = ~uVar6 - 1;
                                          if (0 < iVar3) {
                                            pcVar9 = local_ca5 + ~uVar6;
                                            do {
                                              if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2) == 0
                                                 ) break;
                                              iVar3 = iVar3 + -1;
                                              pcVar9 = pcVar9 + -1;
                                            } while (0 < iVar3);
                                          }
                                          (local_ca5 + 1)[iVar3] = '\0';
                                          while (((&DAT_005c168c)[(byte)(local_ca5[1] + 1)] & 2) !=
                                                 0) {
                                            memmove(local_ca5 + 1);
                                          }
                                          local_68 = 0;
                                          if (*local_ec == ',') {
                                            local_6c = -1;
                                            sscanf
                                                      (local_ec,",%d%n",&local_68,&local_6c
                                                      );
                                            if (local_6c < 1) {
                                              _sprintf(&DAT_01c08b60,
                                                         "Error parsing setCounter value argument"
                                                        );
                                              return 0;
                                            }
                                            local_ec = local_ec + local_6c;
                                            while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0
                                                  ) {
                                              local_ec = local_ec + 1;
                                            }
                                          }
                                          if (*local_ec != ')') {
                                            _sprintf(&DAT_01c08b60,
                                                       "Error parsing setCounter arguments");
                                            return 0;
                                          }
                                          local_ec = local_ec + 1;
                                          if (local_f0 != 0) {
                                            core_event_cpp_CEventList_setCounter_FUN_004806d0
                                                      (param_1,local_ca5 + 1,local_68);
                                          }
                                        }
                                        else {
                                          iVar3 = _strnicmp
                                                            (param_2,"setGroupAmbient",0xf)
                                          ;
                                          if ((iVar3 == 0) &&
                                             (((&DAT_005c168c)[(byte)(param_2[0xf] + 1)] & 0xe0) ==
                                              0)) {
                                            local_ec = param_2 + 0xf;
                                            while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0
                                                  ) {
                                              local_ec = local_ec + 1;
                                            }
                                            local_5c = -1;
                                            sscanf
                                                      (local_ec,"(%d, %f)%n",&local_64,
                                                       &local_60,&local_5c);
                                            if (local_5c < 3) {
                                              _sprintf(&DAT_01c08b60,
                                                         "Error parsing setGroupAmbient parms"
                                                        );
                                              return 0;
                                            }
                                            local_ec = local_ec + local_5c;
                                            if ((local_60 < 0.0) || (0x42c80000 < (int)local_60)) {
                                              _sprintf(&DAT_01c08b60,
                                                         "Ambient value %g is out of range (1..100)"
                                                         ,(double)local_60);
                                              return 0;
                                            }
                                            if (local_f0 != 0) {
                                              core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0050e510
                                                        (0x01E57284,local_64,
                                                         local_60 * (float)_DAT_0058021f);
                                            }
                                          }
                                          else {
                                            iVar3 = _strnicmp
                                                              (param_2,
                                                  "setLightFilterFrame",0x13);
                                            if ((iVar3 == 0) &&
                                               (((&DAT_005c168c)[(byte)(param_2[0x13] + 1)] & 0xe0)
                                                == 0)) {
                                              local_ec = param_2 + 0x13;
                                              while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) !=
                                                     0) {
                                                local_ec = local_ec + 1;
                                              }
                                              local_58 = -1;
                                              sscanf
                                                        (local_ec,"( %[^ ,] , %d )%n",
                                                         local_7f4,&local_54,&local_58);
                                              if (local_58 < 0) {
                                                uVar5 = FUN_0047a210();
                                                return uVar5;
                                              }
                                              local_ec = local_ec + local_58;
                                              core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0
                                                        (0x01E57284,local_7f4,&local_50,&local_4c)
                                              ;
                                              if (local_50 == 0) {
                                                uVar5 = FUN_0047a210(
                                                  "SpotLight %s doesn't exist.",local_7f4);
                                                return uVar5;
                                              }
                                              if ((local_54 < 0) ||
                                                 (*(int *)(local_50 + 0x11ec) <= local_54)) {
                                                uVar5 = FUN_0047a210(
                                                  "Invalid filter frame, %s has %d filters",
                                                  local_7f4,*(uint *)(local_50 + 0x11ec));
                                                return uVar5;
                                              }
                                              if (local_f0 != 0) {
                                                if (local_4c == 0) {
                                                  _DAT_01cc4800 = "..\\core\\event.cpp";
                                                  _DAT_01cc4804 = 0x4e0;
                                                  FUN_004c8440(
                                                  "Can't find CDemonLight for light %s in setLightFilterFrame meta-command",
                                                  local_7f4);
                                                }
                                                core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00515670
                                                          (local_50,local_54,local_4c);
                                              }
                                            }
                                            else {
                                              iVar3 = _strnicmp
                                                                (param_2,"setLeverState",
                                                                 0xd);
                                              if ((iVar3 == 0) &&
                                                 (((&DAT_005c168c)[(byte)(param_2[0xd] + 1)] & 0xe0)
                                                  == 0)) {
                                                local_ec = param_2 + 0xd;
                                                while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2)
                                                       != 0) {
                                                  local_ec = local_ec + 1;
                                                }
                                                local_48 = -1;
                                                sscanf
                                                          (local_ec,"(%[^,], %[^)])%n",
                                                           local_d6d + 1,local_1475 + 1,&local_48);
                                                if (local_48 < 5) {
                                                  _sprintf(&DAT_01c08b60,
                                                                                                                          
                                                  "Error parsing setLeverState command parms");
                                                  return 0;
                                                }
                                                local_ec = local_ec + local_48;
                                                uVar6 = 0xffffffff;
                                                pcVar9 = local_d6d + 1;
                                                do {
                                                  if (uVar6 == 0) break;
                                                  uVar6 = uVar6 - 1;
                                                  cVar1 = *pcVar9;
                                                  pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                                } while (cVar1 != '\0');
                                                iVar3 = ~uVar6 - 1;
                                                if (0 < iVar3) {
                                                  pcVar9 = local_d6d + ~uVar6;
                                                  do {
                                                    if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2
                                                        ) == 0) break;
                                                    iVar3 = iVar3 + -1;
                                                    pcVar9 = pcVar9 + -1;
                                                  } while (0 < iVar3);
                                                }
                                                (local_d6d + 1)[iVar3] = '\0';
                                                while (((&DAT_005c168c)[(byte)(local_d6d[1] + 1)] &
                                                       2) != 0) {
                                                  memmove(local_d6d + 1);
                                                }
                                                uVar6 = 0xffffffff;
                                                pcVar9 = local_1475 + 1;
                                                do {
                                                  if (uVar6 == 0) break;
                                                  uVar6 = uVar6 - 1;
                                                  cVar1 = *pcVar9;
                                                  pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                                } while (cVar1 != '\0');
                                                iVar3 = ~uVar6 - 1;
                                                if (0 < iVar3) {
                                                  pcVar9 = local_1475 + ~uVar6;
                                                  do {
                                                    if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] & 2
                                                        ) == 0) break;
                                                    iVar3 = iVar3 + -1;
                                                    pcVar9 = pcVar9 + -1;
                                                  } while (0 < iVar3);
                                                }
                                                (local_1475 + 1)[iVar3] = '\0';
                                                while (((&DAT_005c168c)[(byte)(local_1475[1] + 1)] &
                                                       2) != 0) {
                                                  memmove(local_1475 + 1);
                                                }
                                                uVar6 = 
                                                  core_event_cpp_resolveActorByName_FUN_0047a390
                                                            (local_d6d + 1,_DAT_01cc3660,0x1cc3628);
                                                if (uVar6 == 0) {
                                                  return 0;
                                                }
                                                if ((uVar6 == 0x0FFFFFFF) || (local_f0 == 0)) {
                                                  iVar3 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0047dc90
                                                            (param_1,local_1475 + 1);
                                                  if (iVar3 != 0) {
                                                    return 0;
                                                  }
                                                }
                                                else {
                                                  iVar3 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,local_1475 + 1);
                                                  if (iVar3 == 0) {
                                                    uStack_f8 = 0;
                                                  }
                                                  else {
                                                    uStack_f8 = 0x3ff00000;
                                                  }
                                                  local_fc = 0;
                                                  core_lever_cpp_CLever_setState_FUN_004c6390
                                                            (uVar6,(float)(double)((ulonglong)
                                                                                   uStack_f8 << 0x20
                                                                                  ));
                                                }
                                              }
                                              else {
                                                iVar3 = _strnicmp
                                                                  (param_2,"setModelState",
                                                                   0xd);
                                                if ((iVar3 == 0) &&
                                                   (((&DAT_005c168c)[(byte)(param_2[0xd] + 1)] &
                                                    0xe0) == 0)) {
                                                  local_ec = param_2 + 0xd;
                                                  while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2
                                                         ) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  local_40 = -1;
                                                  sscanf
                                                            (local_ec,"(%[^,], %[^)])%n",
                                                             local_985 + 1,local_8bd + 1,&local_40);
                                                  if (local_40 < 5) {
                                                    _sprintf(&DAT_01c08b60,
                                                                                                                              
                                                  "Error parsing setModelState command parms");
                                                  return 0;
                                                  }
                                                  local_ec = local_ec + local_40;
                                                  uVar6 = 0xffffffff;
                                                  pcVar9 = local_985 + 1;
                                                  do {
                                                    if (uVar6 == 0) break;
                                                    uVar6 = uVar6 - 1;
                                                    cVar1 = *pcVar9;
                                                    pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar3 = ~uVar6 - 1;
                                                  if (0 < iVar3) {
                                                    pcVar9 = local_985 + ~uVar6;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] &
                                                          2) == 0) break;
                                                      iVar3 = iVar3 + -1;
                                                      pcVar9 = pcVar9 + -1;
                                                    } while (0 < iVar3);
                                                  }
                                                  (local_985 + 1)[iVar3] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_985[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove(local_985 + 1)
                                                    ;
                                                  }
                                                  uVar6 = 0xffffffff;
                                                  pcVar9 = local_8bd + 1;
                                                  do {
                                                    if (uVar6 == 0) break;
                                                    uVar6 = uVar6 - 1;
                                                    cVar1 = *pcVar9;
                                                    pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar3 = ~uVar6 - 1;
                                                  if (0 < iVar3) {
                                                    pcVar9 = local_8bd + ~uVar6;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] &
                                                          2) == 0) break;
                                                      iVar3 = iVar3 + -1;
                                                      pcVar9 = pcVar9 + -1;
                                                    } while (0 < iVar3);
                                                  }
                                                  (local_8bd + 1)[iVar3] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_8bd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove(local_8bd + 1)
                                                    ;
                                                  }
                                                  uVar6 = 
                                                  core_event_cpp_resolveActorByName_FUN_0047a390
                                                            (local_985 + 1,DAT_00765a98,
                                                             &DAT_00765a60);
                                                  if (uVar6 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar6 != 0x0FFFFFFF) {
                                                    uVar5 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                                                            (uVar6 + 0x150,local_8bd + 1,0);
                                                  iVar3 = 
                                                  core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0
                                                            (uVar5);
                                                  if (iVar3 < 0) {
                                                    _sprintf(&DAT_01c08b60,
                                                                                                                              
                                                  "Model %s does not have state %s",
                                                  uVar6 + 0x23b0,local_8bd + 1);
                                                  return 0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                                            (uVar6 + 0x150,iVar3,1);
                                                  }
                                                  }
                                                }
                                                else {
                                                  iVar3 = _strnicmp
                                                                    (param_2,"setTimer",8);
                                                  if ((iVar3 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(param_2[8] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_ec = param_2 + 8;
                                                    while (((&DAT_005c168c)[(byte)(*local_ec + 1)] &
                                                           2) != 0) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                    local_38 = -1;
                                                    sscanf
                                                              (local_ec,"(%[^,], %f)%n",
                                                               local_a4d + 1,&local_3c,&local_38);
                                                    if (local_38 < 3) {
                                                      _sprintf(&DAT_01c08b60,
                                                                                                                                  
                                                  "Error parsing setTimer command parms");
                                                  return 0;
                                                  }
                                                  local_ec = local_ec + local_38;
                                                  uVar6 = 0xffffffff;
                                                  pcVar9 = local_a4d + 1;
                                                  do {
                                                    if (uVar6 == 0) break;
                                                    uVar6 = uVar6 - 1;
                                                    cVar1 = *pcVar9;
                                                    pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar3 = ~uVar6 - 1;
                                                  if (0 < iVar3) {
                                                    pcVar9 = local_a4d + ~uVar6;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] &
                                                          2) == 0) break;
                                                      iVar3 = iVar3 + -1;
                                                      pcVar9 = pcVar9 + -1;
                                                    } while (0 < iVar3);
                                                  }
                                                  (local_a4d + 1)[iVar3] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_a4d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove(local_a4d + 1)
                                                    ;
                                                  }
                                                  uVar6 = 0xffffffff;
                                                  pcVar9 = local_a4d + 1;
                                                  do {
                                                    if (uVar6 == 0) break;
                                                    uVar6 = uVar6 - 1;
                                                    cVar1 = *pcVar9;
                                                    pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  if (0x1f < ~uVar6 - 1) {
                                                    _sprintf(&DAT_01c08b60,
                                                                                                                              
                                                  "Timer name \"%s\" is too long, (max %d chars)",
                                                  local_a4d + 1,0x1f);
                                                  return 0;
                                                  }
                                                  if (local_3c < 0.0) {
                                                    _sprintf(&DAT_01c08b60,
                                                               "Invalid timer duration");
                                                    return 0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setTimerEvent_FUN_00480550
                                                            (param_1,local_a4d + 1,local_3c);
                                                  }
                                                  }
                                                  else {
                                                    iVar3 = _strnicmp
                                                                      (param_2,"setWeather"
                                                                       ,10);
                                                    if ((iVar3 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(param_2[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_ec = param_2 + 10;
                                                      while (((&DAT_005c168c)[(byte)(*local_ec + 1)]
                                                             & 2) != 0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_34 = -1;
                                                      sscanf
                                                                (local_ec,"(%[^)])%n",
                                                                 local_e35 + 1,&local_34);
                                                      if (local_34 < 3) {
                                                        _sprintf(&DAT_01c08b60,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return 0;
                                                  }
                                                  local_ec = local_ec + local_34;
                                                  uVar6 = 0xffffffff;
                                                  pcVar9 = local_e35 + 1;
                                                  do {
                                                    if (uVar6 == 0) break;
                                                    uVar6 = uVar6 - 1;
                                                    cVar1 = *pcVar9;
                                                    pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar3 = ~uVar6 - 1;
                                                  if (0 < iVar3) {
                                                    pcVar9 = local_e35 + ~uVar6;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] &
                                                          2) == 0) break;
                                                      iVar3 = iVar3 + -1;
                                                      pcVar9 = pcVar9 + -1;
                                                    } while (0 < iVar3);
                                                  }
                                                  (local_e35 + 1)[iVar3] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_e35[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove(local_e35 + 1)
                                                    ;
                                                  }
                                                  iVar3 = _stricmp
                                                                    (local_e35 + 1,&DAT_0057ffbc);
                                                  uVar5 = 0;
                                                  if (iVar3 != 0) {
                                                    iVar3 = _stricmp
                                                                      (local_e35 + 1,&DAT_0057ffc1);
                                                    if (iVar3 == 0) {
                                                      uVar5 = 1;
                                                    }
                                                    else {
                                                      iVar3 = _stricmp
                                                                        (local_e35 + 1,&DAT_0057ffc6
                                                                        );
                                                      if (iVar3 != 0) {
                                                        _sprintf(&DAT_01c08b60,
                                                                                                                                      
                                                  "Invalid weather type: %s",local_e35 + 1)
                                                  ;
                                                  return 0;
                                                  }
                                                  uVar5 = 2;
                                                  }
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_weather_cpp_CWeather_setWeatherType_FUN_00555750
                                                            (0x02DDF9F0,uVar5);
                                                  }
                                                  }
                                                  else {
                                                    iVar3 = _strnicmp
                                                                      (param_2,
                                                  "shakeScreen",0xb);
                                                  if ((iVar3 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_ec = param_2 + 0xb;
                                                    while (((&DAT_005c168c)[(byte)(*local_ec + 1)] &
                                                           2) != 0) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                    local_24 = -1;
                                                    sscanf
                                                              (local_ec,
                                                  "( %f, %f, %f, %f )%n",&local_30,
                                                  &local_2c,&local_80,&local_28,&local_24);
                                                  if (local_24 < 5) {
                                                    _sprintf(&DAT_01c08b60,
                                                                                                                              
                                                  "Error parsing shakeScreen command parms");
                                                  return 0;
                                                  }
                                                  local_ec = local_ec + local_24;
                                                  if (local_f0 != 0) {
                                                    FUN_0050e660(0x01E57284,local_30,local_2c,
                                                                 local_80,local_28);
                                                  }
                                                  }
                                                  else {
                                                    iVar3 = _strnicmp
                                                                      (param_2,
                                                  "slamModelToMotion",0x11);
                                                  if ((iVar3 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(param_2[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_ec = param_2 + 0x11;
                                                    while (((&DAT_005c168c)[(byte)(*local_ec + 1)] &
                                                           2) != 0) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                    local_20 = -1;
                                                    sscanf
                                                              (local_ec,"(%[^,], %[^)])%n",
                                                               local_72d + 1,local_40d + 1,&local_20
                                                              );
                                                    if (local_20 < 5) {
                                                      _sprintf(&DAT_01c08b60,
                                                                                                                                  
                                                  "Error parsing slamModelToMotion command parms");
                                                  return 0;
                                                  }
                                                  local_ec = local_ec + local_20;
                                                  uVar6 = 0xffffffff;
                                                  pcVar9 = local_72d + 1;
                                                  do {
                                                    if (uVar6 == 0) break;
                                                    uVar6 = uVar6 - 1;
                                                    cVar1 = *pcVar9;
                                                    pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar3 = ~uVar6 - 1;
                                                  if (0 < iVar3) {
                                                    pcVar9 = local_72d + ~uVar6;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] &
                                                          2) == 0) break;
                                                      iVar3 = iVar3 + -1;
                                                      pcVar9 = pcVar9 + -1;
                                                    } while (0 < iVar3);
                                                  }
                                                  (local_72d + 1)[iVar3] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_72d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove(local_72d + 1)
                                                    ;
                                                  }
                                                  uVar6 = 0xffffffff;
                                                  pcVar9 = local_40d + 1;
                                                  do {
                                                    if (uVar6 == 0) break;
                                                    uVar6 = uVar6 - 1;
                                                    cVar1 = *pcVar9;
                                                    pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar3 = ~uVar6 - 1;
                                                  if (0 < iVar3) {
                                                    pcVar9 = local_40d + ~uVar6;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] &
                                                          2) == 0) break;
                                                      iVar3 = iVar3 + -1;
                                                      pcVar9 = pcVar9 + -1;
                                                    } while (0 < iVar3);
                                                  }
                                                  (local_40d + 1)[iVar3] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_40d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove(local_40d + 1)
                                                    ;
                                                  }
                                                  uVar6 = 
                                                  core_event_cpp_resolveActorByName_FUN_0047a390
                                                            (local_72d + 1,DAT_00765a98,
                                                             &DAT_00765a60);
                                                  if (uVar6 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar6 != 0x0FFFFFFF) {
                                                    iVar3 = uVar6 + 0x150;
                                                    uVar5 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                                                            (iVar3,local_40d + 1,0);
                                                  iVar4 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010
                                                            (uVar5);
                                                  if (iVar4 < 0) {
                                                    _sprintf(&DAT_01c08b60,
                                                                                                                              
                                                  "Model %s does not have motion %s",
                                                  uVar6 + 0x23b0,local_40d + 1);
                                                  return 0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990
                                                            (iVar3,iVar4,0);
                                                  iVar4 = 
                                                  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                                                            (iVar3,1);
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                                            (iVar3,*(uint *)(iVar4 + 0x24));
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar3 = _strnicmp
                                                                      (param_2,
                                                  "switchCamera",0xc);
                                                  if ((iVar3 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    param_2 = param_2 + 0xc;
                                                    while (((&DAT_005c168c)[(byte)(*param_2 + 1)] &
                                                           2) != 0) {
                                                      param_2 = param_2 + 1;
                                                    }
                                                    local_1c = -1;
                                                    puVar11 = &DAT_005b7720;
                                                    puVar13 = local_344;
                                                    for (iVar3 = 0x19; iVar3 != 0;
                                                        iVar3 = iVar3 + -1) {
                                                      *puVar13 = *puVar11;
                                                      puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
                                                      puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
                                                    }
                                                    local_ec = param_2;
                                                    sscanf
                                                              (param_2," ( %[^ ,)]%n",
                                                               local_344,&local_1c);
                                                    if (local_1c < 2) {
                                                      uVar5 = FUN_0047a210();
                                                      return uVar5;
                                                    }
                                                    local_ec = local_ec + local_1c;
                                                    while (((&DAT_005c168c)[(byte)(*local_ec + 1)] &
                                                           2) != 0) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                    iVar3 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0
                                                            (0x01E57284,local_344);
                                                  if (iVar3 < 0) {
                                                    uVar5 = FUN_0047a210(
                                                  "Camera \"%s\" doesn't exist",local_344);
                                                  return uVar5;
                                                  }
                                                  local_70 = 0x40400000;
                                                  if (*local_ec == ',') {
                                                    local_1c = -1;
                                                    sscanf
                                                              (local_ec,",%f%n",&local_70,
                                                               &local_1c);
                                                    if (local_1c < 2) {
                                                      uVar5 = FUN_0047a210();
                                                      return uVar5;
                                                    }
                                                    local_ec = local_ec + local_1c;
                                                    while (((&DAT_005c168c)[(byte)(*local_ec + 1)] &
                                                           2) != 0) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                  }
                                                  if (*local_ec != ')') {
                                                    uVar5 = FUN_0047a210();
                                                    return uVar5;
                                                  }
                                                  local_ec = local_ec + 1;
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0
                                                            (0x01E57284,iVar3,local_70);
                                                  }
                                                  }
                                                  else {
                                                    iVar3 = _strnicmp
                                                                      (param_2,"warpTo",6);
                                                    if ((iVar3 != 0) ||
                                                       (((&DAT_005c168c)[(byte)(param_2[6] + 1)] &
                                                        0xe0) != 0)) {
                                                      uVar5 = FUN_0047a210(
                                                  "Unknown meta-function starting at %s",
                                                  param_2);
                                                  return uVar5;
                                                  }
                                                  local_ec = param_2 + 6;
                                                  while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2
                                                         ) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            (local_ec,"(%[^,], %[^)])%n",
                                                             local_bdd + 1,local_59d + 1,&local_18);
                                                  if (local_18 < 5) {
                                                    uVar5 = FUN_0047a210();
                                                    return uVar5;
                                                  }
                                                  uVar6 = 0xffffffff;
                                                  pcVar9 = local_bdd + 1;
                                                  do {
                                                    if (uVar6 == 0) break;
                                                    uVar6 = uVar6 - 1;
                                                    cVar1 = *pcVar9;
                                                    pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar3 = ~uVar6 - 1;
                                                  if (0 < iVar3) {
                                                    pcVar9 = local_bdd + ~uVar6;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] &
                                                          2) == 0) break;
                                                      iVar3 = iVar3 + -1;
                                                      pcVar9 = pcVar9 + -1;
                                                    } while (0 < iVar3);
                                                  }
                                                  (local_bdd + 1)[iVar3] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_bdd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove(local_bdd + 1)
                                                    ;
                                                  }
                                                  uVar6 = 0xffffffff;
                                                  pcVar9 = local_59d + 1;
                                                  do {
                                                    if (uVar6 == 0) break;
                                                    uVar6 = uVar6 - 1;
                                                    cVar1 = *pcVar9;
                                                    pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar3 = ~uVar6 - 1;
                                                  if (0 < iVar3) {
                                                    pcVar9 = local_59d + ~uVar6;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar9[-1] + 1)] &
                                                          2) == 0) break;
                                                      iVar3 = iVar3 + -1;
                                                      pcVar9 = pcVar9 + -1;
                                                    } while (0 < iVar3);
                                                  }
                                                  (local_59d + 1)[iVar3] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_59d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove(local_59d + 1)
                                                    ;
                                                  }
                                                  local_ec = local_ec + local_18;
                                                  while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2
                                                         ) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  uVar6 = 
                                                  core_event_cpp_resolveActorByName_FUN_0047a390
                                                            (local_bdd + 1,DAT_00763e80,
                                                             &DAT_00763e48);
                                                  if (uVar6 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar6 == 0x0FFFFFFF) {
                                                    local_f0 = 0;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            (local_59d + 1,
                                                             "%f,%f,%f,%f,%f,%f%n",
                                                             &local_11c,&local_118,&local_114,
                                                             &local_134,&local_12c,&local_130,
                                                             &local_18);
                                                  if (local_18 < 0) {
                                                    if ((local_f0 != 0) &&
                                                       (&local_134 != (uint *)(uVar6 + 0x30)))
                                                    {
                                                      local_134 = *(uint *)(uVar6 + 0x30);
                                                      local_130 = *(uint *)(uVar6 + 0x34);
                                                      local_12c = *(uint *)(uVar6 + 0x38);
                                                    }
                                                    sscanf
                                                              (local_59d + 1,
                                                               "%f,%f,%f,%f%n",&local_11c,
                                                               &local_118,&local_114,&local_130,
                                                               &local_18);
                                                  }
                                                  if (local_18 < 0) {
                                                    if ((local_f0 != 0) &&
                                                       (&local_134 != (uint *)(uVar6 + 0x30)))
                                                    {
                                                      local_134 = *(uint *)(uVar6 + 0x30);
                                                      local_130 = *(uint *)(uVar6 + 0x34);
                                                      local_12c = *(uint *)(uVar6 + 0x38);
                                                    }
                                                    sscanf
                                                              (local_59d + 1,"%f,%f,%f%n",
                                                               &local_11c,&local_118,&local_114,
                                                               &local_18);
                                                  }
                                                  if (local_18 < 0) {
                                                    uVar7 = 
                                                  core_event_cpp_resolveActorByName_FUN_0047a390
                                                            (local_59d + 1,DAT_00763e80,
                                                             &DAT_00763e48);
                                                  if (uVar7 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar7 == 0x0FFFFFFF) {
                                                    local_f0 = 0;
                                                  }
                                                  else {
                                                    if (&local_11c != (uint *)(uVar7 + 0x20))
                                                    {
                                                      local_11c = *(uint *)(uVar7 + 0x20);
                                                      local_118 = *(uint *)(uVar7 + 0x24);
                                                      local_114 = *(uint *)(uVar7 + 0x28);
                                                    }
                                                    if (&local_134 != (uint *)(uVar7 + 0x30))
                                                    {
                                                      local_134 = *(uint *)(uVar7 + 0x30);
                                                      local_130 = *(uint *)(uVar7 + 0x34);
                                                      local_12c = *(uint *)(uVar7 + 0x38);
                                                    }
                                                    uVar7 = 0xffffffff;
                                                    pcVar9 = local_59d + 1;
                                                    do {
                                                      if (uVar7 == 0) break;
                                                      uVar7 = uVar7 - 1;
                                                      cVar1 = *pcVar9;
                                                      pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    local_18 = ~uVar7 - 1;
                                                  }
                                                  }
                                                  if ((local_18 < 0) ||
                                                     (local_59d[local_18 + 1] != '\0')) {
                                                    uVar5 = FUN_0047a210();
                                                    return uVar5;
                                                  }
                                                  if (local_f0 != 0) {
                                                    iVar3 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040d890
                                                            (uVar6,DAT_00765a98);
                                                  if (iVar3 != 0) {
                                                    (**(code **)(*(int *)(iVar3 + 0x14c) + 0xe8))();
                                                    (**(code **)(*(int *)(iVar3 + 0x14c) + 0xf0))();
                                                  }
                                                  (**(code **)(*(int *)(uVar6 + 0x14c) + 0x60))
                                                            (uVar6,&local_11c,&local_134);
                                                  if (uVar6 == *(uint *)(0x01E56DA0 + 0xc)) {
                                                    *(uint *)(0x01E56DA0 + 0x10) = 1;
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
      }
    }
    while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
      local_ec = local_ec + 1;
    }
    if (*local_ec != '\0') {
      uVar5 = FUN_0047a210();
      return uVar5;
    }
  }
  return 1;
}
