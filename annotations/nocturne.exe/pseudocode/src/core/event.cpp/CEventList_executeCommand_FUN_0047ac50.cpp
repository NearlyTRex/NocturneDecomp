// Name: core_event.cpp_CEventList_executeCommand_FUN_0047ac50
// Address: 0047ac50
// Address Range: [[0047ac50, 0047db95]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_executeCommand_FUN_0047ac50(CEventList *this_ptr,char *command_buffer)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_executeCommand_FUN_0047ac50(CEventList *this_ptr,char *command_buffer)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char cVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CLever *pCVar7;
  CDemonActor *pCVar8;
  CMotionList *pCVar9;
  EWeatherType type;
  SMotion *pSVar10;
  byte *pbVar11;
  CCharacter *this_ptr_01;
  CLever *pCVar12;
  uint uVar13;
  uint uVar14;
  SIZE_T SVar15;
  char *pcVar16;
  char *pcVar17;
  char (*str1) [32];
  char *pcVar18;
  uint *puVar19;
  byte bVar20;
  int in_stack_ffffe9c8;
  CVector3f *in_stack_ffffe9cc;
  float in_stack_ffffe9d0;
  char local_153d [200];
  char local_1475 [200];
  char local_13ad [200];
  char local_12e5 [200];
  char local_121d [201];
  char local_1154 [199];
  char local_108d [201];
  char local_fc4 [199];
  char local_efd [200];
  char local_e35 [200];
  char local_d6d [200];
  char local_ca5 [200];
  char local_bdd [200];
  char local_b15 [2];
  uint local_b13 [49];
  char local_a4d [200];
  char local_985 [200];
  char local_8bd [201];
  byte local_7f4 [199];
  char local_72d [200];
  char local_665 [200];
  char local_59d [200];
  char local_4d5 [200];
  char local_40d [201];
  char local_344 [99];
  char local_2e1 [101];
  char local_27c [99];
  char local_219 [101];
  char local_1b4 [32];
  char local_194 [32];
  char local_174 [32];
  char local_154 [32];
  CVector3f local_134;
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_11c;
  byte local_110 [4];
  byte local_10c [4];
  byte local_108 [12];
  uint local_fc;
  uint uStack_f8;
  char *local_f4;
  uint local_f0;
  byte *local_ec;
  C3DSLight *local_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  float local_cc;
  float local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  int local_b4;
  byte local_b0 [4];
  int local_ac;
  int local_a8;
  int local_a4;
  byte *local_a0;
  float local_9c;
  CActorPropertyList *local_98;
  int local_94;
  int local_90;
  int local_8c;
  float local_88;
  int local_84;
  uint local_80;
  int local_7c;
  float local_78;
  int local_74;
  float local_70;
  int local_6c;
  int local_68;
  int local_64;
  float local_60;
  int local_5c;
  int local_58;
  int local_54;
  C3DSLight *local_50;
  CDemonLight *local_4c;
  int local_48;
  CDemonLight *local_44;
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
  
  bVar20 = 0;
  DAT_01c08b60 = 0;
  if (((command_buffer != (char *)0x0) && (*command_buffer != '\0')) &&
     (iVar5 = _stricmp(command_buffer,"none"), iVar5 != 0)) {
    if (*command_buffer == '.') {
      command_buffer = command_buffer + 1;
    }
    local_f0 = (uint)(_DAT_01c08b5c == 0);
    local_ec = (byte *)&CHAR_00h_0057f586;
    pcVar17 = command_buffer;
    do {
      pcVar16 = pcVar17;
      if (*pcVar17 == '(') goto LAB_0047acd1;
      if (*pcVar17 == '\0') break;
      pcVar16 = pcVar17 + 1;
      if (*pcVar16 == '(') goto LAB_0047acd1;
      pcVar17 = pcVar17 + 2;
    } while (*pcVar16 != '\0');
    pcVar16 = (char *)0x0;
LAB_0047acd1:
    if (pcVar16 == (char *)0x0) {
      iVar5 = 0;
      if (0 < (this_ptr->events).count) {
        str1 = (this_ptr->events).names;
        do {
          iVar6 = _stricmp(*str1,command_buffer);
          if (iVar6 == 0) {
            return 1;
          }
          iVar5 = iVar5 + 1;
          str1 = str1 + 1;
        } while (iVar5 < (this_ptr->events).count);
      }
      uVar13 = 0xffffffff;
      pcVar17 = command_buffer;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        cVar3 = *pcVar17;
        pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
      } while (cVar3 != '\0');
      if (0x1f < ~uVar13 - 1) {
        iVar5 = core_event_cpp_FUN_0047a210("Event name %s is too long",command_buffer);
        return iVar5;
      }
      if (99 < (this_ptr->events).count) {
        PTR_01cc4800 = "..\\core\\event.cpp";
        INT_01cc4804 = 599;
        core_main_c_FUN_004c8440();
      }
      pcVar16 = (this_ptr->events).names[(this_ptr->events).count];
      local_14 = 0;
      pcVar18 = command_buffer;
      pcVar17 = pcVar16;
      do {
        cVar3 = *pcVar18;
        *pcVar17 = cVar3;
        local_f4 = pcVar16;
        if (cVar3 == '\0') break;
        cVar3 = pcVar18[1];
        pcVar18 = pcVar18 + 2;
        pcVar17[1] = cVar3;
        pcVar17 = pcVar17 + 2;
      } while (cVar3 != '\0');
      do {
        uVar13 = local_14;
        uVar14 = 0xffffffff;
        pcVar17 = local_f4;
        do {
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          cVar3 = *pcVar17;
          pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
        } while (cVar3 != '\0');
        if (~uVar14 - 1 <= local_14) {
          if (local_f0 == 0) {
            return 1;
          }
          (this_ptr->events).count = (this_ptr->events).count + 1;
          return 1;
        }
        iVar5 = toupper((uint)(byte)*pcVar16);
        *pcVar16 = (byte)iVar5;
        iVar5 = core_event_cpp_isValidIdentifierChar_FUN_00480f40((uint)(byte)*pcVar16);
        if (iVar5 == 0) {
          iVar5 = core_event_cpp_FUN_0047a210("Event name %s is not valid",command_buffer);
          return iVar5;
        }
        local_14 = uVar13 + 1;
        pcVar16 = pcVar16 + 1;
      } while( true );
    }
    iVar5 = _strnicmp(command_buffer,"advanceLightFilter",0x12);
    if ((iVar5 == 0) && (((&DAT_005c168c)[(byte)(command_buffer[0x12] + 1)] & 0xe0) == 0)) {
      local_ec = (byte *)(command_buffer + 0x12);
      while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
        local_ec = local_ec + 1;
      }
      pcVar17 = core_event_cpp_extractParenArg_FUN_0047a650((char **)&local_ec,local_fc4,200);
      if (pcVar17 != (char *)0x0) goto LAB_0047aec8;
      core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0(0x01E57284,local_fc4,&local_e8);
      if (local_e8 == (C3DSLight *)0x0) {
        iVar5 = core_event_cpp_FUN_0047a210("SpotLight %s doesn't exist.",local_fc4);
        return iVar5;
      }
      if (local_f0 != 0) {
        if (local_44 == (CDemonLight *)0x0) {
          PTR_01cc4800 = "..\\core\\event.cpp";
          INT_01cc4804 = 0x27f;
          core_main_c_FUN_004c8440("Can't find CDemonLight for light %s in advanceLightFilter meta-command");
        }
        core_setutil_cpp_C3DSLight_advanceFilter_FUN_005155e0(local_e8,local_44);
      }
    }
    else {
      iVar5 = _strnicmp(command_buffer,"createExplosion",0xf);
      if ((iVar5 == 0) && (((&DAT_005c168c)[(byte)(command_buffer[0xf] + 1)] & 0xe0) == 0)) {
        local_ec = (byte *)(command_buffer + 0xf);
        while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
          local_ec = local_ec + 1;
        }
        local_e4 = -1;
        sscanf(local_ec,"( %f , %n",&local_e0);
        if (local_e4 < 0) {
          iVar5 = core_event_cpp_FUN_0047a210();
          return iVar5;
        }
        local_ec = local_ec + local_e4;
        local_e4 = -1;
        sscanf
                  (local_ec,"%f , %f , %f %n",&local_128,&local_124,&local_120);
        if ((local_e4 < 0) &&
           (sscanf(local_ec," %[^,)] %n",local_4d5 + 1), -1 < local_e4)) {
          uVar13 = 0xffffffff;
          pcVar17 = local_4d5 + 1;
          do {
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            cVar3 = *pcVar17;
            pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
          } while (cVar3 != '\0');
          SVar15 = ~uVar13 - 1;
          if (0 < (int)SVar15) {
            pcVar17 = local_4d5 + ~uVar13;
            do {
              if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
              SVar15 = SVar15 - 1;
              pcVar17 = pcVar17 + -1;
            } while (0 < (int)SVar15);
          }
          (local_4d5 + 1)[SVar15] = '\0';
          while (((&DAT_005c168c)[(byte)(local_4d5[1] + 1)] & 2) != 0) {
            memmove(local_4d5 + 1,local_4d5 + 2,SVar15);
            SVar15 = SVar15 - 1;
          }
          pCVar7 = (CLever *)
                   core_event_cpp_resolveActorByName_FUN_0047a390
                             (local_4d5 + 1,g_CDemonActorActorType_00763e48.name_hash,
                              g_CDemonActorActorType_00763e48.class_name);
          if (pCVar7 == (CLever *)0x0) {
            return 0;
          }
          if (pCVar7 == 0x0FFFFFFF) {
            local_f0 = 0;
          }
          else {
            pCVar1 = &(pCVar7->base).location;
            if ((CLocation *)&local_128 != pCVar1) {
              local_128 = (pCVar1->position).x;
              local_124 = (pCVar7->base).location.position.y;
              local_120 = (pCVar7->base).location.position.z;
            }
          }
        }
        if (local_e4 < 0) {
          iVar5 = core_event_cpp_FUN_0047a210();
          return iVar5;
        }
        local_ec = local_ec + local_e4;
        while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
          local_ec = local_ec + 1;
        }
        local_dc = 0x40800000;
        if (*local_ec == 0x2c) {
          local_e4 = -1;
          sscanf(local_ec,", %f %n",&local_dc,&local_e4);
          if (local_e4 < 0) {
            iVar5 = core_event_cpp_FUN_0047a210();
            return iVar5;
          }
          local_ec = local_ec + local_e4;
          while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
            local_ec = local_ec + 1;
          }
        }
        if (*local_ec != 0x29) {
          iVar5 = core_event_cpp_FUN_0047a210();
          return iVar5;
        }
        local_ec = local_ec + 1;
        if (local_f0 != 0) {
          core_fire_cpp_FUN_0048c0d0(0x01C08D04,&local_128,local_e0,0x44bb8000,local_dc);
        }
      }
      else {
        iVar5 = _strnicmp(command_buffer,"deleteActor",0xb);
        if ((iVar5 == 0) && (((&DAT_005c168c)[(byte)(command_buffer[0xb] + 1)] & 0xe0) == 0)) {
          local_ec = (byte *)(command_buffer + 0xb);
          while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
            local_ec = local_ec + 1;
          }
          pcVar17 = core_event_cpp_extractParenArg_FUN_0047a650((char **)&local_ec,local_1154,200);
          if (pcVar17 != (char *)0x0) goto LAB_0047aec8;
          pCVar7 = (CLever *)
                   core_event_cpp_resolveActorByName_FUN_0047a390
                             (local_1154,g_CDemonActorActorType_00763e48.name_hash,
                              g_CDemonActorActorType_00763e48.class_name);
          uVar13 = g_CBoxActorActorType_00764800.name_hash;
          if (pCVar7 == (CLever *)0x0) {
            if (_DAT_01c08b5c != 0) {
              return 0;
            }
            local_f0 = 0;
          }
          if ((pCVar7 != 0x0FFFFFFF) && (local_f0 != 0)) {
            (pCVar7->base).lifecycle_state = ACTOR_DESTROYED;
            pCVar8 = core_actor_cpp_castToClassHash_FUN_0040d890((CDemonActor *)pCVar7,uVar13);
            if (pCVar8 != (CDemonActor *)0x0) {
              fVar4 = pCVar8[2].orient_matrix.m[2].x;
              *(byte *)&pCVar8[2].location.area_id = 0;
              sound_sndmain_cpp_killSfx_FUN_00527230((uint)fVar4);
            }
            pCVar8 = core_actor_cpp_castToClassHash_FUN_0040d890
                               ((CDemonActor *)pCVar7,g_CChainActorType_00765c30.name_hash);
            if (pCVar8 != (CDemonActor *)0x0) {
              fVar4 = pCVar8[1].previous_transform_state.position.x;
              *(byte *)&pCVar8[1].orient_matrix.m[2].z = 0;
              pCVar8[1].create_event[0x4c] = '\0';
              sound_sndmain_cpp_killSfx_FUN_00527230((uint)fVar4);
            }
          }
        }
        else {
          iVar5 = _strnicmp(command_buffer,"displayBitmap",0xd);
          if ((iVar5 == 0) && (((&DAT_005c168c)[(byte)(command_buffer[0xd] + 1)] & 0xe0) == 0)) {
            local_ec = (byte *)(command_buffer + 0xd);
            while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
              local_ec = local_ec + 1;
            }
            local_d0 = -1;
            sscanf
                      (local_ec,"( %[^ ,], %d, %d )%n",&stack0xffffe9c4,&local_d8,&local_d4);
            if (local_d0 < 0) {
              iVar5 = core_event_cpp_FUN_0047a210();
              return iVar5;
            }
            local_ec = local_ec + local_d0;
            while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
              local_ec = local_ec + 1;
            }
            iVar5 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",&stack0xffffe9c4);
            if (iVar5 < 0) {
              iVar5 = core_event_cpp_FUN_0047a210();
              return iVar5;
            }
            if (iVar5 != local_d8 * local_d4) {
              iVar5 = core_event_cpp_FUN_0047a210();
              return iVar5;
            }
            if (local_f0 != 0) {
              core_game_cpp_CGame_displayBitmap_FUN_004a5740
                        (0x01C775EC,&stack0xffffe9c4,local_d8,local_d4);
            }
          }
          else {
            iVar5 = _strnicmp
                              (command_buffer,"fadeAmbientSound",0x10);
            if ((iVar5 == 0) && (((&DAT_005c168c)[(byte)(command_buffer[0x10] + 1)] & 0xe0) == 0)) {
              local_ec = (byte *)(command_buffer + 0x10);
              while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                local_ec = local_ec + 1;
              }
              local_c4 = -1;
              sscanf(local_ec,"(%f, %f )%n",&local_cc,&local_c8);
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
              iVar5 = _strnicmp(command_buffer,"fadeSfx",7);
              if ((iVar5 == 0) && (((&DAT_005c168c)[(byte)(command_buffer[7] + 1)] & 0xe0) == 0)) {
                local_ec = (byte *)(command_buffer + 7);
                while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                  local_ec = local_ec + 1;
                }
                local_b8 = -1;
                sscanf
                          (local_ec,"(%[^,], %f, %f )%n",local_108d + 1,&local_c0,&local_bc);
                if (local_b8 < 0) {
                  _sprintf(&DAT_01c08b60,"Error parsing fadeSfx parms");
                  return 0;
                }
                local_ec = local_ec + local_b8;
                uVar13 = 0xffffffff;
                pcVar17 = local_108d + 1;
                do {
                  if (uVar13 == 0) break;
                  uVar13 = uVar13 - 1;
                  cVar3 = *pcVar17;
                  pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                } while (cVar3 != '\0');
                SVar15 = ~uVar13 - 1;
                if (0 < (int)SVar15) {
                  pcVar17 = local_108d + ~uVar13;
                  do {
                    if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                    SVar15 = SVar15 - 1;
                    pcVar17 = pcVar17 + -1;
                  } while (0 < (int)SVar15);
                }
                (local_108d + 1)[SVar15] = '\0';
                while (((&DAT_005c168c)[(byte)(local_108d[1] + 1)] & 2) != 0) {
                  memmove(local_108d + 1,local_108d + 2,SVar15);
                  SVar15 = SVar15 - 1;
                }
                if (local_f0 != 0) {
                  uVar13 = core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0(this_ptr);
                  if (local_bc <= 0.0) {
                    sound_sndmain_cpp_setSfxVolume_FUN_005270d0(uVar13,local_c0);
                  }
                  else {
                    sound_sndmain_cpp_setSfxFade_FUN_00527260(uVar13,local_c0,local_bc,0);
                  }
                }
              }
              else {
                iVar5 = _strnicmp(command_buffer,"flagOn",6);
                if ((iVar5 == 0) && (((&DAT_005c168c)[(byte)(command_buffer[6] + 1)] & 0xe0) == 0))
                {
                  local_ec = (byte *)(command_buffer + 6);
                  while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                    local_ec = local_ec + 1;
                  }
                  pcVar17 = core_event_cpp_extractParenArg_FUN_0047a650
                                      ((char **)&local_ec,local_194,0x20);
                  if (pcVar17 != (char *)0x0) {
LAB_0047aec8:
                    pcVar16 = &DAT_01c08b60;
                    do {
                      cVar3 = *pcVar17;
                      *pcVar16 = cVar3;
                      if (cVar3 == '\0') {
                        return 0;
                      }
                      cVar3 = pcVar17[1];
                      pcVar17 = pcVar17 + 2;
                      pcVar16[1] = cVar3;
                      pcVar16 = pcVar16 + 2;
                    } while (cVar3 != '\0');
                    return 0;
                  }
                  if (local_f0 != 0) {
                    core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
                              (this_ptr,local_194,1);
                  }
                }
                else {
                  iVar5 = _strnicmp(command_buffer,"flagOff",7);
                  if ((iVar5 == 0) && (((&DAT_005c168c)[(byte)(command_buffer[7] + 1)] & 0xe0) == 0)
                     ) {
                    local_ec = (byte *)(command_buffer + 7);
                    while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                      local_ec = local_ec + 1;
                    }
                    pcVar17 = core_event_cpp_extractParenArg_FUN_0047a650
                                        ((char **)&local_ec,local_174,0x20);
                    if (pcVar17 != (char *)0x0) goto LAB_0047aec8;
                    if (local_f0 != 0) {
                      core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
                                (this_ptr,local_174,0);
                    }
                  }
                  else {
                    iVar5 = _strnicmp
                                      (command_buffer,"gameFlagOn",10);
                    if ((iVar5 == 0) &&
                       (((&DAT_005c168c)[(byte)(command_buffer[10] + 1)] & 0xe0) == 0)) {
                      local_ec = (byte *)(command_buffer + 10);
                      while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                        local_ec = local_ec + 1;
                      }
                      pcVar17 = core_event_cpp_extractParenArg_FUN_0047a650
                                          ((char **)&local_ec,local_1b4,0x20);
                      if (pcVar17 != (char *)0x0) goto LAB_0047aec8;
                      if (local_f0 != 0) {
                        core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_00480420
                                  (this_ptr,local_1b4,1);
                      }
                    }
                    else {
                      iVar5 = _strnicmp
                                        (command_buffer,"gameFlagOff",0xb);
                      if ((iVar5 == 0) &&
                         (((&DAT_005c168c)[(byte)(command_buffer[0xb] + 1)] & 0xe0) == 0)) {
                        local_ec = (byte *)(command_buffer + 0xb);
                        while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                          local_ec = local_ec + 1;
                        }
                        pcVar17 = core_event_cpp_extractParenArg_FUN_0047a650
                                            ((char **)&local_ec,local_154,0x20);
                        if (pcVar17 != (char *)0x0) goto LAB_0047aec8;
                        if (local_f0 != 0) {
                          core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_00480420
                                    (this_ptr,local_154,0);
                        }
                      }
                      else {
                        iVar5 = _strnicmp
                                          (command_buffer,"hurtCharacter",0xd);
                        if ((iVar5 == 0) &&
                           (((&DAT_005c168c)[(byte)(command_buffer[0xd] + 1)] & 0xe0) == 0)) {
                          local_ec = (byte *)(command_buffer + 0xd);
                          while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                            local_ec = local_ec + 1;
                          }
                          local_b4 = -1;
                          sscanf
                                    (local_ec," ( %[^,], %[^,],%f)%n",local_665 + 1,local_2e1 + 1,local_b0);
                          if (local_b4 < 2) {
                            iVar5 = core_event_cpp_FUN_0047a210();
                            return iVar5;
                          }
                          uVar13 = 0xffffffff;
                          pcVar17 = local_665 + 1;
                          do {
                            if (uVar13 == 0) break;
                            uVar13 = uVar13 - 1;
                            cVar3 = *pcVar17;
                            pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                          } while (cVar3 != '\0');
                          SVar15 = ~uVar13 - 1;
                          if (0 < (int)SVar15) {
                            pcVar17 = local_665 + ~uVar13;
                            do {
                              if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                              SVar15 = SVar15 - 1;
                              pcVar17 = pcVar17 + -1;
                            } while (0 < (int)SVar15);
                          }
                          (local_665 + 1)[SVar15] = '\0';
                          while (((&DAT_005c168c)[(byte)(local_665[1] + 1)] & 2) != 0) {
                            memmove(local_665 + 1,local_665 + 2,SVar15);
                            SVar15 = SVar15 - 1;
                          }
                          uVar13 = 0xffffffff;
                          pcVar17 = local_2e1 + 1;
                          do {
                            if (uVar13 == 0) break;
                            uVar13 = uVar13 - 1;
                            cVar3 = *pcVar17;
                            pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                          } while (cVar3 != '\0');
                          SVar15 = ~uVar13 - 1;
                          if (0 < (int)SVar15) {
                            pcVar17 = local_2e1 + ~uVar13;
                            do {
                              if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                              SVar15 = SVar15 - 1;
                              pcVar17 = pcVar17 + -1;
                            } while (0 < (int)SVar15);
                          }
                          (local_2e1 + 1)[SVar15] = '\0';
                          while (((&DAT_005c168c)[(byte)(local_2e1[1] + 1)] & 2) != 0) {
                            memmove(local_2e1 + 1,local_2e1 + 2,SVar15);
                            SVar15 = SVar15 - 1;
                          }
                          local_ec = local_ec + local_b4;
                          while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                            local_ec = local_ec + 1;
                          }
                          pCVar7 = (CLever *)
                                   core_event_cpp_resolveActorByName_FUN_0047a390
                                             (local_665 + 1,g_CCharacterActorType_00765a60.name_hash
                                              ,g_CCharacterActorType_00765a60.class_name);
                          if (pCVar7 == (CLever *)0x0) {
                            return 0;
                          }
                          if (pCVar7 == 0x0FFFFFFF) {
                            local_f0 = (uint)pCVar7 ^ (uint)0x0FFFFFFF;
                          }
                          iVar5 = core_event_cpp_parseDamageType_FUN_0047a8f0
                                            (local_2e1 + 1,&local_ac);
                          if (iVar5 == 0) {
                            iVar5 = core_event_cpp_FUN_0047a210
                                              ("Unknown damage type \"%s\" in hurtCharacter command.",local_2e1 + 1);
                            return iVar5;
                          }
                          if (local_f0 != 0) {
                            (*((pCVar7->base).vtable._ub)->processInEditor)((CDemonActor *)pCVar7);
                          }
                        }
                        else {
                          iVar5 = _strnicmp
                                            (command_buffer,"incCounter",10);
                          if ((iVar5 == 0) &&
                             (((&DAT_005c168c)[(byte)(command_buffer[10] + 1)] & 0xe0) == 0)) {
                            local_ec = (byte *)(command_buffer + 10);
                            while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                              local_ec = local_ec + 1;
                            }
                            local_a8 = -1;
                            sscanf(local_ec,"( %[^ )] )%n",local_121d + 1);
                            if (local_a8 < 5) {
                              _sprintf(&DAT_01c08b60,"Error parsing incCounter arguments");
                              return 0;
                            }
                            local_ec = local_ec + local_a8;
                            uVar13 = 0xffffffff;
                            pcVar17 = local_121d + 1;
                            do {
                              if (uVar13 == 0) break;
                              uVar13 = uVar13 - 1;
                              cVar3 = *pcVar17;
                              pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                            } while (cVar3 != '\0');
                            SVar15 = ~uVar13 - 1;
                            if (0 < (int)SVar15) {
                              pcVar17 = local_121d + ~uVar13;
                              do {
                                if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                                SVar15 = SVar15 - 1;
                                pcVar17 = pcVar17 + -1;
                              } while (0 < (int)SVar15);
                            }
                            (local_121d + 1)[SVar15] = '\0';
                            while (((&DAT_005c168c)[(byte)(local_121d[1] + 1)] & 2) != 0) {
                              memmove
                                        (local_121d + 1,local_121d + 2,SVar15);
                              SVar15 = SVar15 - 1;
                            }
                            if (local_f0 != 0) {
                              iVar5 = core_event_cpp_CEventList_getCounterValue_FUN_004807e0
                                                (this_ptr,local_121d + 1);
                              core_event_cpp_CEventList_setCounter_FUN_004806d0
                                        (this_ptr,local_121d + 1,iVar5 + 1);
                            }
                          }
                          else {
                            iVar5 = _strnicmp
                                              (command_buffer,"killCharacter",0xd);
                            if ((iVar5 == 0) &&
                               (((&DAT_005c168c)[(byte)(command_buffer[0xd] + 1)] & 0xe0) == 0)) {
                              local_ec = (byte *)(command_buffer + 0xd);
                              while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                local_ec = local_ec + 1;
                              }
                              local_a0 = local_110;
                              local_a4 = -1;
                              local_9c = 0.0;
                              sscanf
                                        (local_ec," ( %[^,], %[^,], %f , %f , %f , %f)%n",local_153d + 1,local_219 + 1,
                                         local_110,local_10c,local_108,&local_9c);
                              local_9c = local_9c * (float)0.017453292519444399;
                              if (local_a4 < 0) {
                                local_9c = -1.0;
                                sscanf
                                          (local_ec," ( %[^,], %[^,], %f , %f , %f )%n",local_153d + 1,local_219 + 1,
                                           local_110,local_10c,local_108);
                              }
                              if (local_a4 < 0) {
                                local_a0 = (byte *)0x0;
                                sscanf
                                          (local_ec," ( %[^,], %[^)])%n",local_153d + 1,local_219 + 1);
                              }
                              if (local_a4 < 0) {
                                iVar5 = core_event_cpp_FUN_0047a210();
                                return iVar5;
                              }
                              uVar13 = 0xffffffff;
                              pcVar17 = local_153d + 1;
                              do {
                                if (uVar13 == 0) break;
                                uVar13 = uVar13 - 1;
                                cVar3 = *pcVar17;
                                pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                              } while (cVar3 != '\0');
                              SVar15 = ~uVar13 - 1;
                              if (0 < (int)SVar15) {
                                pcVar17 = local_153d + ~uVar13;
                                do {
                                  if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                                  SVar15 = SVar15 - 1;
                                  pcVar17 = pcVar17 + -1;
                                } while (0 < (int)SVar15);
                              }
                              (local_153d + 1)[SVar15] = '\0';
                              while (((&DAT_005c168c)[(byte)(local_153d[1] + 1)] & 2) != 0) {
                                memmove
                                          (local_153d + 1,local_153d + 2,SVar15);
                                SVar15 = SVar15 - 1;
                              }
                              uVar13 = 0xffffffff;
                              pcVar17 = local_219 + 1;
                              do {
                                if (uVar13 == 0) break;
                                uVar13 = uVar13 - 1;
                                cVar3 = *pcVar17;
                                pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                              } while (cVar3 != '\0');
                              SVar15 = ~uVar13 - 1;
                              if (0 < (int)SVar15) {
                                pcVar17 = local_219 + ~uVar13;
                                do {
                                  if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] & 2) == 0) break;
                                  SVar15 = SVar15 - 1;
                                  pcVar17 = pcVar17 + -1;
                                } while (0 < (int)SVar15);
                              }
                              (local_219 + 1)[SVar15] = '\0';
                              while (((&DAT_005c168c)[(byte)(local_219[1] + 1)] & 2) != 0) {
                                memmove
                                          (local_219 + 1,local_219 + 2,SVar15);
                                SVar15 = SVar15 - 1;
                              }
                              local_ec = local_ec + local_a4;
                              while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                local_ec = local_ec + 1;
                              }
                              pCVar7 = (CLever *)
                                       core_event_cpp_resolveActorByName_FUN_0047a390
                                                 (local_153d + 1,
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  g_CCharacterActorType_00765a60.class_name);
                              if (pCVar7 == (CLever *)0x0) {
                                return 0;
                              }
                              if (pCVar7 == 0x0FFFFFFF) {
                                local_f0 = 0;
                              }
                              iVar5 = core_event_cpp_parseDeathType_FUN_0047a760
                                                (local_219 + 1,(int *)&local_98);
                              if (iVar5 == 0) {
                                iVar5 = core_event_cpp_FUN_0047a210
                                                  ("Unknown death type \"%s\" in killCharacter command.",local_219 + 1)
                                ;
                                return iVar5;
                              }
                              if (local_f0 != 0) {
                                (*((pCVar7->base).vtable._ub)->getPropertyList)
                                          ((CDemonActor *)pCVar7,local_98);
                              }
                            }
                            else {
                              iVar5 = _strnicmp
                                                (command_buffer,"killHero",8);
                              if ((iVar5 == 0) &&
                                 (((&DAT_005c168c)[(byte)(command_buffer[8] + 1)] & 0xe0) == 0)) {
                                local_ec = (byte *)(command_buffer + 8);
                                while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                  local_ec = local_ec + 1;
                                }
                                if (*0x01CEA280 != 0) {
                                  iVar5 = core_event_cpp_FUN_0047a210();
                                  return iVar5;
                                }
                                local_94 = -1;
                                sscanf(local_ec," ( %[^)])%n",local_27c);
                                if (local_94 < 2) {
                                  iVar5 = core_event_cpp_FUN_0047a210();
                                  return iVar5;
                                }
                                local_ec = local_ec + local_94;
                                while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                  local_ec = local_ec + 1;
                                }
                                iVar5 = core_event_cpp_parseDeathType_FUN_0047a760
                                                  (local_27c,&local_90);
                                if (iVar5 == 0) {
                                  iVar5 = core_event_cpp_FUN_0047a210
                                                    ("Unknown death type \"%s\" in killHero command.",local_27c);
                                  return iVar5;
                                }
                                if ((local_f0 != 0) &&
                                   (iVar5 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8), iVar5 != 0)) {
                                  (**(code **)(*(int *)(iVar5 + 0x14c) + 0xd4))
                                            (iVar5,local_90,0,0xbf800000);
                                }
                              }
                              else {
                                iVar5 = _strnicmp
                                                  (command_buffer,"killSfx",7);
                                if ((iVar5 == 0) &&
                                   (((&DAT_005c168c)[(byte)(command_buffer[7] + 1)] & 0xe0) == 0)) {
                                  local_ec = (byte *)(command_buffer + 7);
                                  while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                    local_ec = local_ec + 1;
                                  }
                                  local_8c = -1;
                                  sscanf
                                            (local_ec,"(%[^,)]%n",local_efd + 1);
                                  if (local_8c < 3) {
                                    _sprintf(&DAT_01c08b60,"Error parsing killSfx parms");
                                    return 0;
                                  }
                                  local_ec = local_ec + local_8c;
                                  uVar13 = 0xffffffff;
                                  pcVar17 = local_efd + 1;
                                  do {
                                    if (uVar13 == 0) break;
                                    uVar13 = uVar13 - 1;
                                    cVar3 = *pcVar17;
                                    pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                  } while (cVar3 != '\0');
                                  SVar15 = ~uVar13 - 1;
                                  if (0 < (int)SVar15) {
                                    pcVar17 = local_efd + ~uVar13;
                                    do {
                                      if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] & 2) == 0)
                                      break;
                                      SVar15 = SVar15 - 1;
                                      pcVar17 = pcVar17 + -1;
                                    } while (0 < (int)SVar15);
                                  }
                                  (local_efd + 1)[SVar15] = '\0';
                                  while (((&DAT_005c168c)[(byte)(local_efd[1] + 1)] & 2) != 0) {
                                    memmove
                                              (local_efd + 1,local_efd + 2,SVar15);
                                    SVar15 = SVar15 - 1;
                                  }
                                  local_88 = 0.0;
                                  if (*local_ec == 0x2c) {
                                    local_8c = -1;
                                    sscanf
                                              (local_ec,",%f%n",&local_88);
                                    if (local_8c < 3) {
                                      _sprintf(&DAT_01c08b60,"Error parsing killSfx parms");
                                      return 0;
                                    }
                                    local_ec = local_ec + local_8c;
                                  }
                                  do {
                                    pbVar11 = local_ec;
                                    local_ec = pbVar11 + 1;
                                  } while (((&DAT_005c168c)[(byte)(*pbVar11 + 1)] & 2) != 0);
                                  if (*pbVar11 != 0x29) {
                                    local_ec = pbVar11;
                                    _sprintf(&DAT_01c08b60,"Can't find matching ) in killSfx command");
                                    return 0;
                                  }
                                  if (local_f0 != 0) {
                                    uVar13 = core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0
                                                       (this_ptr);
                                    if (local_88 <= 0.0) {
                                      sound_sndmain_cpp_killSfx_FUN_00527230(uVar13);
                                      core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60
                                                (this_ptr);
                                    }
                                    else {
                                      sound_sndmain_cpp_setSfxFade_FUN_00527260
                                                (uVar13,0.0,local_88,1);
                                      core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60
                                                (this_ptr);
                                    }
                                  }
                                }
                                else {
                                  iVar5 = _strnicmp
                                                    (command_buffer,"lightning",9);
                                  if ((iVar5 == 0) &&
                                     (((&DAT_005c168c)[(byte)(command_buffer[9] + 1)] & 0xe0) == 0))
                                  {
                                    local_ec = (byte *)(command_buffer + 9);
                                    while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                      local_ec = local_ec + 1;
                                    }
                                    local_84 = -1;
                                    sscanf(local_ec,"( )%n");
                                    if (local_84 < 2) {
                                      _sprintf(&DAT_01c08b60,"Error parsing lightning command");
                                      return 0;
                                    }
                                    local_ec = local_ec + local_84;
                                    if (local_f0 != 0) {
                                      core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40
                                                (0x02DDF9F0,0.1,1);
                                    }
                                  }
                                  else {
                                    iVar5 = _strnicmp
                                                      (command_buffer,"playSfx",7);
                                    if ((iVar5 == 0) &&
                                       (((&DAT_005c168c)[(byte)(command_buffer[7] + 1)] & 0xe0) == 0
                                       )) {
                                      local_ec = (byte *)(command_buffer + 7);
                                      while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                        local_ec = local_ec + 1;
                                      }
                                      local_7c = -1;
                                      sscanf
                                                (local_ec,"(%[^,)]%n",local_13ad + 1);
                                      if (local_7c < 3) {
                                        _sprintf(&DAT_01c08b60,"Error parsing playSfx parms"
                                                  );
                                        return 0;
                                      }
                                      local_ec = local_ec + local_7c;
                                      uVar13 = 0xffffffff;
                                      pcVar17 = local_13ad + 1;
                                      do {
                                        if (uVar13 == 0) break;
                                        uVar13 = uVar13 - 1;
                                        cVar3 = *pcVar17;
                                        pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                      } while (cVar3 != '\0');
                                      SVar15 = ~uVar13 - 1;
                                      if (0 < (int)SVar15) {
                                        pcVar17 = local_13ad + ~uVar13;
                                        do {
                                          if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] & 2) == 0)
                                          break;
                                          SVar15 = SVar15 - 1;
                                          pcVar17 = pcVar17 + -1;
                                        } while (0 < (int)SVar15);
                                      }
                                      (local_13ad + 1)[SVar15] = '\0';
                                      while (pbVar11 = local_ec,
                                            ((&DAT_005c168c)[(byte)(local_13ad[1] + 1)] & 2) != 0) {
                                        memmove
                                                  (local_13ad + 1,local_13ad + 2,SVar15);
                                        SVar15 = SVar15 - 1;
                                      }
                                      puVar19 = &DAT_005b7658;
                                      pcVar17 = local_b15 + 1;
                                      for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
                                        *(uint *)pcVar17 = *puVar19;
                                        puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
                                        pcVar17 = (char *)((int)pcVar17 +
                                                          ((uint)bVar20 * -2 + 1) * 4);
                                      }
                                      if (*pbVar11 == 0x2c) {
                                        local_7c = -1;
                                        sscanf
                                                  (local_ec,",%[^)]%n",local_b15 + 1);
                                        if (local_7c < 3) {
                                          _sprintf(&DAT_01c08b60,
                                                     "Error parsing playSfx parms");
                                          return 0;
                                        }
                                        local_ec = local_ec + local_7c;
                                        uVar13 = 0xffffffff;
                                        pcVar17 = local_b15 + 1;
                                        do {
                                          if (uVar13 == 0) break;
                                          uVar13 = uVar13 - 1;
                                          cVar3 = *pcVar17;
                                          pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                        } while (cVar3 != '\0');
                                        SVar15 = ~uVar13 - 1;
                                        if (0 < (int)SVar15) {
                                          pcVar17 = local_b15 + ~uVar13;
                                          do {
                                            if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] & 2) == 0)
                                            break;
                                            SVar15 = SVar15 - 1;
                                            pcVar17 = pcVar17 + -1;
                                          } while (0 < (int)SVar15);
                                        }
                                        (local_b15 + 1)[SVar15] = 0;
                                        while (((&DAT_005c168c)[(byte)(local_b15[1] + 1)] & 2) != 0)
                                        {
                                          memmove
                                                    (local_b15 + 1,local_b15 + 2,SVar15);
                                          SVar15 = SVar15 - 1;
                                        }
                                        uVar13 = 0xffffffff;
                                        pcVar17 = local_b15 + 1;
                                        do {
                                          if (uVar13 == 0) break;
                                          uVar13 = uVar13 - 1;
                                          cVar3 = *pcVar17;
                                          pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                        } while (cVar3 != '\0');
                                        if (0x13 < ~uVar13 - 1) {
                                          _sprintf(&DAT_01c08b60,
                                                     "handle name %s is too long, max %d chars",
                                                     local_b15 + 1,0x13);
                                          return 0;
                                        }
                                      }
                                      do {
                                        pbVar11 = local_ec;
                                        local_ec = pbVar11 + 1;
                                      } while (((&DAT_005c168c)[(byte)(*pbVar11 + 1)] & 2) != 0);
                                      if (*pbVar11 != 0x29) {
                                        local_ec = pbVar11;
                                        _sprintf(&DAT_01c08b60,"Can't find matching ) in playSfx command"
                                                  );
                                        return 0;
                                      }
                                      if (local_f0 != 0) {
                                        iVar5 = _strnicmp
                                                          (local_13ad + 1,"cue",3);
                                        if (iVar5 == 0) {
                                          iVar5 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490
                                                            (1);
                                          if (iVar5 != 0) {
                                            sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
                                            sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(1);
                                            uVar13 = core_sound_cpp_CSound_playSound_FUN_0052ea40
                                                               (0x02DC9450,this_ptr,local_13ad + 1
                                                               );
                                            sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
                                            if (local_b15[1] != '\0') {
                                              core_event_cpp_CEventList_setSfxHandle_FUN_00480c30
                                                        (this_ptr,local_b15 + 1,uVar13);
                                            }
                                          }
                                        }
                                        else {
                                          uVar13 = core_sound_cpp_CSound_playSound_FUN_0052ea40
                                                             (0x02DC9450,this_ptr,local_13ad + 1);
                                          if (local_b15[1] != '\0') {
                                            core_event_cpp_CEventList_setSfxHandle_FUN_00480c30
                                                      (this_ptr,local_b15 + 1,uVar13);
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      iVar5 = _strnicmp
                                                        (command_buffer,"setCameraAmbient",
                                                         0x10);
                                      if ((iVar5 == 0) &&
                                         (((&DAT_005c168c)[(byte)(command_buffer[0x10] + 1)] & 0xe0)
                                          == 0)) {
                                        local_ec = (byte *)(command_buffer + 0x10);
                                        while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0) {
                                          local_ec = local_ec + 1;
                                        }
                                        local_74 = -1;
                                        sscanf
                                                  (local_ec,"(%[^,], %f)%n",local_12e5 + 1,&local_78)
                                        ;
                                        if (local_74 < 3) {
                                          _sprintf(&DAT_01c08b60,
                                                     "Error parsing setCameraAmbient parms");
                                          return 0;
                                        }
                                        local_ec = local_ec + local_74;
                                        uVar13 = 0xffffffff;
                                        pcVar17 = local_12e5 + 1;
                                        do {
                                          if (uVar13 == 0) break;
                                          uVar13 = uVar13 - 1;
                                          cVar3 = *pcVar17;
                                          pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                        } while (cVar3 != '\0');
                                        SVar15 = ~uVar13 - 1;
                                        if (0 < (int)SVar15) {
                                          pcVar17 = local_12e5 + ~uVar13;
                                          do {
                                            if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] & 2) == 0)
                                            break;
                                            SVar15 = SVar15 - 1;
                                            pcVar17 = pcVar17 + -1;
                                          } while (0 < (int)SVar15);
                                        }
                                        (local_12e5 + 1)[SVar15] = '\0';
                                        while (((&DAT_005c168c)[(byte)(local_12e5[1] + 1)] & 2) != 0
                                              ) {
                                          memmove
                                                    (local_12e5 + 1,local_12e5 + 2,SVar15);
                                          SVar15 = SVar15 - 1;
                                        }
                                        iVar5 = core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0
                                                          (0x01E57284,local_12e5 + 1);
                                        if (iVar5 < 0) {
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
                                                    (0x01E57284,iVar5,
                                                     local_78 * (float)0.01);
                                        }
                                      }
                                      else {
                                        iVar5 = _strnicmp
                                                          (command_buffer,"setCounter",10);
                                        if ((iVar5 == 0) &&
                                           (((&DAT_005c168c)[(byte)(command_buffer[10] + 1)] & 0xe0)
                                            == 0)) {
                                          local_ec = (byte *)(command_buffer + 10);
                                          while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0)
                                          {
                                            local_ec = local_ec + 1;
                                          }
                                          local_6c = -1;
                                          sscanf
                                                    (local_ec,"( %[^,)]%n",local_ca5 + 1);
                                          if (local_6c < 5) {
                                            _sprintf(&DAT_01c08b60,
                                                       "Error parsing setCounter arguments");
                                            return 0;
                                          }
                                          local_ec = local_ec + local_6c;
                                          uVar13 = 0xffffffff;
                                          pcVar17 = local_ca5 + 1;
                                          do {
                                            if (uVar13 == 0) break;
                                            uVar13 = uVar13 - 1;
                                            cVar3 = *pcVar17;
                                            pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                          } while (cVar3 != '\0');
                                          SVar15 = ~uVar13 - 1;
                                          if (0 < (int)SVar15) {
                                            pcVar17 = local_ca5 + ~uVar13;
                                            do {
                                              if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] & 2) ==
                                                  0) break;
                                              SVar15 = SVar15 - 1;
                                              pcVar17 = pcVar17 + -1;
                                            } while (0 < (int)SVar15);
                                          }
                                          (local_ca5 + 1)[SVar15] = '\0';
                                          while (((&DAT_005c168c)[(byte)(local_ca5[1] + 1)] & 2) !=
                                                 0) {
                                            memmove
                                                      (local_ca5 + 1,local_ca5 + 2,SVar15);
                                            SVar15 = SVar15 - 1;
                                          }
                                          local_68 = 0;
                                          if (*local_ec == 0x2c) {
                                            local_6c = -1;
                                            sscanf
                                                      (local_ec,",%d%n",&local_68);
                                            if (local_6c < 1) {
                                              _sprintf(&DAT_01c08b60,
                                                         "Error parsing setCounter value argument");
                                              return 0;
                                            }
                                            local_ec = local_ec + local_6c;
                                            while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0
                                                  ) {
                                              local_ec = local_ec + 1;
                                            }
                                          }
                                          if (*local_ec != 0x29) {
                                            _sprintf(&DAT_01c08b60,
                                                       "Error parsing setCounter arguments");
                                            return 0;
                                          }
                                          local_ec = local_ec + 1;
                                          if (local_f0 != 0) {
                                            core_event_cpp_CEventList_setCounter_FUN_004806d0
                                                      (this_ptr,local_ca5 + 1,local_68);
                                          }
                                        }
                                        else {
                                          iVar5 = _strnicmp
                                                            (command_buffer,
                                                             "setGroupAmbient",0xf);
                                          if ((iVar5 == 0) &&
                                             (((&DAT_005c168c)[(byte)(command_buffer[0xf] + 1)] &
                                              0xe0) == 0)) {
                                            local_ec = (byte *)(command_buffer + 0xf);
                                            while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) != 0
                                                  ) {
                                              local_ec = local_ec + 1;
                                            }
                                            local_5c = -1;
                                            sscanf
                                                      (local_ec,"(%d, %f)%n",&local_64,&local_60
                                                      );
                                            if (local_5c < 3) {
                                              _sprintf(&DAT_01c08b60,
                                                         "Error parsing setGroupAmbient parms");
                                              return 0;
                                            }
                                            local_ec = local_ec + local_5c;
                                            if ((local_60 < 0.0) || (0x42c80000 < (int)local_60)) {
                                              _sprintf(&DAT_01c08b60,
                                                         "Ambient value %g is out of range (1..100)",
                                                         (double)local_60);
                                              return 0;
                                            }
                                            if (local_f0 != 0) {
                                              core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0050e510
                                                        (0x01E57284,local_64,
                                                         local_60 * (float)0.01);
                                            }
                                          }
                                          else {
                                            iVar5 = _strnicmp
                                                              (command_buffer,
                                                               "setLightFilterFrame",0x13);
                                            if ((iVar5 == 0) &&
                                               (((&DAT_005c168c)[(byte)(command_buffer[0x13] + 1)] &
                                                0xe0) == 0)) {
                                              local_ec = (byte *)(command_buffer + 0x13);
                                              while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2) !=
                                                     0) {
                                                local_ec = local_ec + 1;
                                              }
                                              local_58 = -1;
                                              sscanf
                                                        (local_ec,"( %[^ ,] , %d )%n",local_7f4,&local_54
                                                        );
                                              if (local_58 < 0) {
                                                iVar5 = core_event_cpp_FUN_0047a210();
                                                return iVar5;
                                              }
                                              local_ec = local_ec + local_58;
                                              core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0
                                                        (0x01E57284,local_7f4,&local_50);
                                              if (local_50 == (C3DSLight *)0x0) {
                                                iVar5 = core_event_cpp_FUN_0047a210
                                                                  (
                                                  "SpotLight %s doesn't exist.",local_7f4);
                                                return iVar5;
                                              }
                                              if ((local_54 < 0) ||
                                                 (local_50->filter_count <= local_54)) {
                                                iVar5 = core_event_cpp_FUN_0047a210
                                                                  (
                                                  "Invalid filter frame, %s has %d filters",local_7f4,
                                                  local_50->filter_count);
                                                return iVar5;
                                              }
                                              if (local_f0 != 0) {
                                                if (local_4c == (CDemonLight *)0x0) {
                                                  PTR_01cc4800 = "..\\core\\event.cpp";
                                                  INT_01cc4804 = 0x4e0;
                                                  core_main_c_FUN_004c8440
                                                            ("Can't find CDemonLight for light %s in setLightFilterFrame meta-command");
                                                }
                                                core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00515670
                                                          (local_50,local_54,local_4c);
                                              }
                                            }
                                            else {
                                              iVar5 = _strnicmp
                                                                (command_buffer,
                                                                 "setLeverState",0xd);
                                              if ((iVar5 == 0) &&
                                                 (((&DAT_005c168c)[(byte)(command_buffer[0xd] + 1)]
                                                  & 0xe0) == 0)) {
                                                local_ec = (byte *)(command_buffer + 0xd);
                                                while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2)
                                                       != 0) {
                                                  local_ec = local_ec + 1;
                                                }
                                                local_48 = -1;
                                                sscanf
                                                          (local_ec,"(%[^,], %[^)])%n",local_d6d + 1,
                                                           local_1475 + 1);
                                                if (local_48 < 5) {
                                                  _sprintf(&DAT_01c08b60,
                                                             "Error parsing setLeverState command parms");
                                                  return 0;
                                                }
                                                local_ec = local_ec + local_48;
                                                uVar13 = 0xffffffff;
                                                pcVar17 = local_d6d + 1;
                                                do {
                                                  if (uVar13 == 0) break;
                                                  uVar13 = uVar13 - 1;
                                                  cVar3 = *pcVar17;
                                                  pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                                } while (cVar3 != '\0');
                                                SVar15 = ~uVar13 - 1;
                                                if (0 < (int)SVar15) {
                                                  pcVar17 = local_d6d + ~uVar13;
                                                  do {
                                                    if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] &
                                                        2) == 0) break;
                                                    SVar15 = SVar15 - 1;
                                                    pcVar17 = pcVar17 + -1;
                                                  } while (0 < (int)SVar15);
                                                }
                                                (local_d6d + 1)[SVar15] = '\0';
                                                while (((&DAT_005c168c)[(byte)(local_d6d[1] + 1)] &
                                                       2) != 0) {
                                                  memmove
                                                            (local_d6d + 1,local_d6d + 2,SVar15);
                                                  SVar15 = SVar15 - 1;
                                                }
                                                uVar13 = 0xffffffff;
                                                pcVar17 = local_1475 + 1;
                                                do {
                                                  if (uVar13 == 0) break;
                                                  uVar13 = uVar13 - 1;
                                                  cVar3 = *pcVar17;
                                                  pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                                } while (cVar3 != '\0');
                                                SVar15 = ~uVar13 - 1;
                                                if (0 < (int)SVar15) {
                                                  pcVar17 = local_1475 + ~uVar13;
                                                  do {
                                                    if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)] &
                                                        2) == 0) break;
                                                    SVar15 = SVar15 - 1;
                                                    pcVar17 = pcVar17 + -1;
                                                  } while (0 < (int)SVar15);
                                                }
                                                (local_1475 + 1)[SVar15] = '\0';
                                                while (((&DAT_005c168c)[(byte)(local_1475[1] + 1)] &
                                                       2) != 0) {
                                                  memmove
                                                            (local_1475 + 1,local_1475 + 2,SVar15);
                                                  SVar15 = SVar15 - 1;
                                                }
                                                pCVar7 = (CLever *)
                                                                                                                  
                                                  core_event_cpp_resolveActorByName_FUN_0047a390
                                                            (local_d6d + 1,
                                                             g_CLeverActorType_01cc3628.name_hash,
                                                             g_CLeverActorType_01cc3628.class_name);
                                                if (pCVar7 == (CLever *)0x0) {
                                                  return 0;
                                                }
                                                if ((pCVar7 == 0x0FFFFFFF) || (local_f0 == 0)) {
                                                  pcVar17 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0047dc90
                                                            (this_ptr,local_1475 + 1);
                                                  if (pcVar17 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                }
                                                else {
                                                  iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,local_1475 + 1);
                                                  if (iVar5 == 0) {
                                                    uStack_f8 = 0;
                                                  }
                                                  else {
                                                    uStack_f8 = 0x3ff00000;
                                                  }
                                                  local_fc = 0;
                                                  core_lever_cpp_CLever_setState_FUN_004c6390
                                                            (pCVar7,(float)(double)((ulonglong)
                                                                                    uStack_f8 <<
                                                                                   0x20));
                                                }
                                              }
                                              else {
                                                iVar5 = _strnicmp
                                                                  (command_buffer,
                                                                   "setModelState",0xd);
                                                if ((iVar5 == 0) &&
                                                   (((&DAT_005c168c)
                                                     [(byte)(command_buffer[0xd] + 1)] & 0xe0) == 0)
                                                   ) {
                                                  local_ec = (byte *)(command_buffer + 0xd);
                                                  while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2
                                                         ) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  local_40 = -1;
                                                  sscanf
                                                            (local_ec,"(%[^,], %[^)])%n",local_985 + 1,
                                                             local_8bd + 1);
                                                  if (local_40 < 5) {
                                                    _sprintf(&DAT_01c08b60,
                                                               "Error parsing setModelState command parms");
                                                    return 0;
                                                  }
                                                  local_ec = local_ec + local_40;
                                                  uVar13 = 0xffffffff;
                                                  pcVar17 = local_985 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar3 = *pcVar17;
                                                    pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar15 = ~uVar13 - 1;
                                                  if (0 < (int)SVar15) {
                                                    pcVar17 = local_985 + ~uVar13;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar15 = SVar15 - 1;
                                                      pcVar17 = pcVar17 + -1;
                                                    } while (0 < (int)SVar15);
                                                  }
                                                  (local_985 + 1)[SVar15] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_985[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_985 + 1,local_985 + 2,SVar15);
                                                    SVar15 = SVar15 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar17 = local_8bd + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar3 = *pcVar17;
                                                    pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar15 = ~uVar13 - 1;
                                                  if (0 < (int)SVar15) {
                                                    pcVar17 = local_8bd + ~uVar13;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar15 = SVar15 - 1;
                                                      pcVar17 = pcVar17 + -1;
                                                    } while (0 < (int)SVar15);
                                                  }
                                                  (local_8bd + 1)[SVar15] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_8bd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_8bd + 1,local_8bd + 2,SVar15);
                                                    SVar15 = SVar15 - 1;
                                                  }
                                                  pCVar7 = (CLever *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0047a390
                                                            (local_985 + 1,
                                                             g_CCharacterActorType_00765a60.
                                                             name_hash,
                                                             g_CCharacterActorType_00765a60.
                                                             class_name);
                                                  if (pCVar7 == (CLever *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != 0x0FFFFFFF) {
                                                    pcVar17 = local_8bd + 1;
                                                    iVar5 = 0;
                                                    pCVar9 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                                                            ((CMotionController *)&pCVar7->model);
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0
                                                            (pCVar9,pcVar17,iVar5);
                                                  if (iVar5 < 0) {
                                                    _sprintf(&DAT_01c08b60,
                                                               "Model %s does not have state %s",
                                                               pCVar7[4].off_event + 0x44,
                                                               local_8bd + 1);
                                                    return 0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                                            ((CMotionController *)&pCVar7->model,
                                                             iVar5,1);
                                                  }
                                                  }
                                                }
                                                else {
                                                  iVar5 = _strnicmp
                                                                    (command_buffer,
                                                                     "setTimer",8);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_005c168c)
                                                       [(byte)(command_buffer[8] + 1)] & 0xe0) == 0)
                                                     ) {
                                                    local_ec = (byte *)(command_buffer + 8);
                                                    while (((&DAT_005c168c)[(byte)(*local_ec + 1)] &
                                                           2) != 0) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                    local_38 = -1;
                                                    sscanf
                                                              (local_ec,"(%[^,], %f)%n",local_a4d + 1
                                                               ,&local_3c);
                                                    if (local_38 < 3) {
                                                      _sprintf(&DAT_01c08b60,
                                                                 "Error parsing setTimer command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_ec = local_ec + local_38;
                                                    uVar13 = 0xffffffff;
                                                    pcVar17 = local_a4d + 1;
                                                    do {
                                                      if (uVar13 == 0) break;
                                                      uVar13 = uVar13 - 1;
                                                      cVar3 = *pcVar17;
                                                      pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar15 = ~uVar13 - 1;
                                                    if (0 < (int)SVar15) {
                                                      pcVar17 = local_a4d + ~uVar13;
                                                      do {
                                                        if (((&DAT_005c168c)
                                                             [(byte)(pcVar17[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar15 = SVar15 - 1;
                                                        pcVar17 = pcVar17 + -1;
                                                      } while (0 < (int)SVar15);
                                                    }
                                                    (local_a4d + 1)[SVar15] = '\0';
                                                    while (((&DAT_005c168c)
                                                            [(byte)(local_a4d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_a4d + 1,local_a4d + 2,SVar15)
                                                      ;
                                                      SVar15 = SVar15 - 1;
                                                    }
                                                    uVar13 = 0xffffffff;
                                                    pcVar17 = local_a4d + 1;
                                                    do {
                                                      if (uVar13 == 0) break;
                                                      uVar13 = uVar13 - 1;
                                                      cVar3 = *pcVar17;
                                                      pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    if (0x1f < ~uVar13 - 1) {
                                                      _sprintf(&DAT_01c08b60,
                                                                 "Timer name \"%s\" is too long, (max %d chars)"
                                                                 ,local_a4d + 1,0x1f);
                                                      return 0;
                                                    }
                                                    if (local_3c < 0.0) {
                                                      _sprintf(&DAT_01c08b60,
                                                                 "Invalid timer duration");
                                                      return 0;
                                                    }
                                                    if (local_f0 != 0) {
                                                                                                            
                                                  core_event_cpp_CEventList_setTimerEvent_FUN_00480550
                                                            (this_ptr,local_a4d + 1,local_3c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "setWeather",10);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_005c168c)
                                                         [(byte)(command_buffer[10] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_ec = (byte *)(command_buffer + 10);
                                                      while (((&DAT_005c168c)[(byte)(*local_ec + 1)]
                                                             & 2) != 0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_34 = -1;
                                                      sscanf
                                                                (local_ec,"(%[^)])%n",local_e35 + 1
                                                                );
                                                      if (local_34 < 3) {
                                                        _sprintf(&DAT_01c08b60,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return 0;
                                                  }
                                                  local_ec = local_ec + local_34;
                                                  uVar13 = 0xffffffff;
                                                  pcVar17 = local_e35 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar3 = *pcVar17;
                                                    pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar15 = ~uVar13 - 1;
                                                  if (0 < (int)SVar15) {
                                                    pcVar17 = local_e35 + ~uVar13;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar15 = SVar15 - 1;
                                                      pcVar17 = pcVar17 + -1;
                                                    } while (0 < (int)SVar15);
                                                  }
                                                  (local_e35 + 1)[SVar15] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_e35[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_e35 + 1,local_e35 + 2,SVar15);
                                                    SVar15 = SVar15 - 1;
                                                  }
                                                  iVar5 = _stricmp
                                                                    (local_e35 + 1,"none");
                                                  type = WEATHER_TYPE_NONE;
                                                  if (iVar5 != 0) {
                                                    iVar5 = _stricmp
                                                                      (local_e35 + 1,"rain"
                                                                      );
                                                    if (iVar5 == 0) {
                                                      type = WEATHER_TYPE_RAIN;
                                                    }
                                                    else {
                                                      iVar5 = _stricmp
                                                                        (local_e35 + 1,
                                                                         "snow");
                                                      if (iVar5 != 0) {
                                                        _sprintf(&DAT_01c08b60,
                                                                   "Invalid weather type: %s"
                                                                   ,local_e35 + 1);
                                                        return 0;
                                                      }
                                                      type = WEATHER_TYPE_SNOW;
                                                    }
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_weather_cpp_CWeather_setWeatherType_FUN_00555750
                                                            (0x02DDF9F0,type);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "shakeScreen",0xb);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_005c168c)
                                                         [(byte)(command_buffer[0xb] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_ec = (byte *)(command_buffer + 0xb);
                                                      while (((&DAT_005c168c)[(byte)(*local_ec + 1)]
                                                             & 2) != 0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_24 = -1;
                                                      sscanf
                                                                (local_ec,"( %f, %f, %f, %f )%n",
                                                                 &local_30,&local_2c,&local_80,
                                                                 &local_28,&local_24);
                                                      if (local_24 < 5) {
                                                        _sprintf(&DAT_01c08b60,
                                                                                                                                      
                                                  "Error parsing shakeScreen command parms");
                                                  return 0;
                                                  }
                                                  local_ec = local_ec + local_24;
                                                  if (local_f0 != 0) {
                                                    core_set_cpp_FUN_0050e660
                                                              (0x01E57284,local_30,local_2c,
                                                               local_80,local_28);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "slamModelToMotion",
                                                                       0x11);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_005c168c)
                                                         [(byte)(command_buffer[0x11] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_ec = (byte *)(command_buffer + 0x11);
                                                      while (((&DAT_005c168c)[(byte)(*local_ec + 1)]
                                                             & 2) != 0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_20 = -1;
                                                      sscanf
                                                                (local_ec,"(%[^,], %[^)])%n",local_72d + 1
                                                                 ,local_40d + 1);
                                                      if (local_20 < 5) {
                                                        _sprintf(&DAT_01c08b60,
                                                                                                                                      
                                                  "Error parsing slamModelToMotion command parms");
                                                  return 0;
                                                  }
                                                  local_ec = local_ec + local_20;
                                                  uVar13 = 0xffffffff;
                                                  pcVar17 = local_72d + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar3 = *pcVar17;
                                                    pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar15 = ~uVar13 - 1;
                                                  if (0 < (int)SVar15) {
                                                    pcVar17 = local_72d + ~uVar13;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar15 = SVar15 - 1;
                                                      pcVar17 = pcVar17 + -1;
                                                    } while (0 < (int)SVar15);
                                                  }
                                                  (local_72d + 1)[SVar15] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_72d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_72d + 1,local_72d + 2,SVar15);
                                                    SVar15 = SVar15 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar17 = local_40d + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar3 = *pcVar17;
                                                    pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar15 = ~uVar13 - 1;
                                                  if (0 < (int)SVar15) {
                                                    pcVar17 = local_40d + ~uVar13;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar15 = SVar15 - 1;
                                                      pcVar17 = pcVar17 + -1;
                                                    } while (0 < (int)SVar15);
                                                  }
                                                  (local_40d + 1)[SVar15] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_40d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_40d + 1,local_40d + 2,SVar15);
                                                    SVar15 = SVar15 - 1;
                                                  }
                                                  pCVar7 = (CLever *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0047a390
                                                            (local_72d + 1,
                                                             g_CCharacterActorType_00765a60.
                                                             name_hash,
                                                             g_CCharacterActorType_00765a60.
                                                             class_name);
                                                  if (pCVar7 == (CLever *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != 0x0FFFFFFF) {
                                                    pcVar17 = local_40d + 1;
                                                    iVar5 = 0;
                                                    this_ptr_00 = &pCVar7->model;
                                                    pCVar9 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                                                            ((CMotionController *)this_ptr_00);
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010
                                                            (pCVar9,pcVar17,iVar5);
                                                  if (iVar5 < 0) {
                                                    _sprintf(&DAT_01c08b60,
                                                               "Model %s does not have motion %s",
                                                               pCVar7[4].off_event + 0x44,
                                                               local_40d + 1);
                                                    return 0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990
                                                            ((CMotionController *)this_ptr_00,iVar5,
                                                             0.0);
                                                  iVar5 = 1;
                                                  pSVar10 = 
                                                  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                                                            ((CMotionController *)this_ptr_00);
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                                            ((CMotionController *)this_ptr_00,
                                                             pSVar10->state_index,iVar5);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "switchCamera",0xc);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_005c168c)
                                                         [(byte)(command_buffer[0xc] + 1)] & 0xe0)
                                                        == 0)) {
                                                      pbVar11 = (byte *)(command_buffer + 0xc);
                                                      while (((&DAT_005c168c)[(byte)(*pbVar11 + 1)]
                                                             & 2) != 0) {
                                                        pbVar11 = pbVar11 + 1;
                                                      }
                                                      local_1c = -1;
                                                      puVar19 = &DAT_005b7720;
                                                      pcVar17 = local_344;
                                                      for (iVar5 = 0x19; iVar5 != 0;
                                                          iVar5 = iVar5 + -1) {
                                                        *(uint *)pcVar17 = *puVar19;
                                                        puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
                                                        pcVar17 = pcVar17 + ((uint)bVar20 * -2 + 1)
                                                                            * 4;
                                                      }
                                                      local_ec = pbVar11;
                                                      sscanf
                                                                (pbVar11," ( %[^ ,)]%n",local_344);
                                                      if (local_1c < 2) {
                                                        iVar5 = core_event_cpp_FUN_0047a210();
                                                        return iVar5;
                                                      }
                                                      local_ec = local_ec + local_1c;
                                                      while (((&DAT_005c168c)[(byte)(*local_ec + 1)]
                                                             & 2) != 0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      iVar5 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0
                                                            (0x01E57284,local_344);
                                                  if (iVar5 < 0) {
                                                    iVar5 = core_event_cpp_FUN_0047a210
                                                                      (
                                                  "Camera \"%s\" doesn't exist",local_344);
                                                  return iVar5;
                                                  }
                                                  local_70 = 3.0;
                                                  if (*local_ec == 0x2c) {
                                                    local_1c = -1;
                                                    sscanf
                                                              (local_ec,",%f%n",&local_70);
                                                    if (local_1c < 2) {
                                                      iVar5 = core_event_cpp_FUN_0047a210();
                                                      return iVar5;
                                                    }
                                                    local_ec = local_ec + local_1c;
                                                    while (((&DAT_005c168c)[(byte)(*local_ec + 1)] &
                                                           2) != 0) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                  }
                                                  if (*local_ec != 0x29) {
                                                    iVar5 = core_event_cpp_FUN_0047a210();
                                                    return iVar5;
                                                  }
                                                  local_ec = local_ec + 1;
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0
                                                            (0x01E57284,iVar5,local_70);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "warpTo",6);
                                                    if ((iVar5 != 0) ||
                                                       (((&DAT_005c168c)
                                                         [(byte)(command_buffer[6] + 1)] & 0xe0) !=
                                                        0)) {
                                                      iVar5 = core_event_cpp_FUN_0047a210
                                                                        (
                                                  "Unknown meta-function starting at %s",command_buffer
                                                  );
                                                  return iVar5;
                                                  }
                                                  local_ec = (byte *)(command_buffer + 6);
                                                  while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2
                                                         ) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            (local_ec,"(%[^,], %[^)])%n",local_bdd + 1,
                                                             local_59d + 1);
                                                  if (local_18 < 5) {
                                                    iVar5 = core_event_cpp_FUN_0047a210();
                                                    return iVar5;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar17 = local_bdd + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar3 = *pcVar17;
                                                    pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar15 = ~uVar13 - 1;
                                                  if (0 < (int)SVar15) {
                                                    pcVar17 = local_bdd + ~uVar13;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar15 = SVar15 - 1;
                                                      pcVar17 = pcVar17 + -1;
                                                    } while (0 < (int)SVar15);
                                                  }
                                                  (local_bdd + 1)[SVar15] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_bdd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_bdd + 1,local_bdd + 2,SVar15);
                                                    SVar15 = SVar15 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar17 = local_59d + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar3 = *pcVar17;
                                                    pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar15 = ~uVar13 - 1;
                                                  if (0 < (int)SVar15) {
                                                    pcVar17 = local_59d + ~uVar13;
                                                    do {
                                                      if (((&DAT_005c168c)[(byte)(pcVar17[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar15 = SVar15 - 1;
                                                      pcVar17 = pcVar17 + -1;
                                                    } while (0 < (int)SVar15);
                                                  }
                                                  (local_59d + 1)[SVar15] = '\0';
                                                  while (((&DAT_005c168c)[(byte)(local_59d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_59d + 1,local_59d + 2,SVar15);
                                                    SVar15 = SVar15 - 1;
                                                  }
                                                  local_ec = local_ec + local_18;
                                                  while (((&DAT_005c168c)[(byte)(*local_ec + 1)] & 2
                                                         ) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  pCVar7 = (CLever *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0047a390
                                                            (local_bdd + 1,
                                                             g_CDemonActorActorType_00763e48.
                                                             name_hash,
                                                             g_CDemonActorActorType_00763e48.
                                                             class_name);
                                                  if (pCVar7 == (CLever *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_f0 = 0;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            (local_59d + 1,"%f,%f,%f,%f,%f,%f%n",
                                                             &local_11c,&local_11c.y,&local_11c.z,
                                                             &local_134,&local_134.z,&local_134.y);
                                                  if (local_18 < 0) {
                                                    if ((local_f0 != 0) &&
                                                       (pUVar2 = &(pCVar7->base).orient,
                                                       &local_134 != (CVector3f *)pUVar2)) {
                                                      local_134.x = (pUVar2->vec).x;
                                                      local_134.y = (pCVar7->base).orient.vec.y;
                                                      local_134.z = (pCVar7->base).orient.vec.z;
                                                    }
                                                    sscanf
                                                              (local_59d + 1,"%f,%f,%f,%f%n",
                                                               &local_11c,&local_11c.y,&local_11c.z,
                                                               &local_134.y);
                                                  }
                                                  if (local_18 < 0) {
                                                    if ((local_f0 != 0) &&
                                                       (pUVar2 = &(pCVar7->base).orient,
                                                       &local_134 != (CVector3f *)pUVar2)) {
                                                      local_134.x = (pUVar2->vec).x;
                                                      local_134.y = (pCVar7->base).orient.vec.y;
                                                      local_134.z = (pCVar7->base).orient.vec.z;
                                                    }
                                                    sscanf
                                                              (local_59d + 1,"%f,%f,%f%n",
                                                               &local_11c,&local_11c.y,&local_11c.z)
                                                    ;
                                                  }
                                                  if (local_18 < 0) {
                                                    pCVar12 = (CLever *)
                                                                                                                            
                                                  core_event_cpp_resolveActorByName_FUN_0047a390
                                                            (local_59d + 1,
                                                             g_CDemonActorActorType_00763e48.
                                                             name_hash,
                                                             g_CDemonActorActorType_00763e48.
                                                             class_name);
                                                  if (pCVar12 == (CLever *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar12 == 0x0FFFFFFF) {
                                                    local_f0 = 0;
                                                  }
                                                  else {
                                                    pCVar1 = &(pCVar12->base).location;
                                                    if ((CLocation *)&local_11c != pCVar1) {
                                                      local_11c.x = (pCVar1->position).x;
                                                      local_11c.y = (pCVar12->base).location.
                                                                    position.y;
                                                      local_11c.z = (pCVar12->base).location.
                                                                    position.z;
                                                    }
                                                    pUVar2 = &(pCVar12->base).orient;
                                                    if (&local_134 != (CVector3f *)pUVar2) {
                                                      local_134.x = (pUVar2->vec).x;
                                                      local_134.y = (pCVar12->base).orient.vec.y;
                                                      local_134.z = (pCVar12->base).orient.vec.z;
                                                    }
                                                    uVar13 = 0xffffffff;
                                                    pcVar17 = local_59d + 1;
                                                    do {
                                                      if (uVar13 == 0) break;
                                                      uVar13 = uVar13 - 1;
                                                      cVar3 = *pcVar17;
                                                      pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    local_18 = ~uVar13 - 1;
                                                  }
                                                  }
                                                  if ((local_18 < 0) ||
                                                     (local_59d[local_18 + 1] != '\0')) {
                                                    iVar5 = core_event_cpp_FUN_0047a210();
                                                    return iVar5;
                                                  }
                                                  if (local_f0 != 0) {
                                                    this_ptr_01 = (CCharacter *)
                                                                                                                                    
                                                  core_actor_cpp_castToClassHash_FUN_0040d890
                                                            ((CDemonActor *)pCVar7,
                                                             g_CCharacterActorType_00765a60.
                                                             name_hash);
                                                  if (this_ptr_01 != (CCharacter *)0x0) {
                                                    (*((this_ptr_01->base).vtable._ub)->archive)
                                                              ((CDemonActor *)this_ptr_01);
                                                    (*(((this_ptr_01->base).vtable._uc)->_uc).kill)
                                                              (this_ptr_01,in_stack_ffffe9c8,
                                                               in_stack_ffffe9cc,in_stack_ffffe9d0);
                                                  }
                                                  (*((pCVar7->base).vtable._ub)->
                                                    setPositionAndOrientation)
                                                            ((CDemonActor *)pCVar7,&local_11c,
                                                             &local_134);
                                                  if (pCVar7 == *(CLever **)(0x01E56DA0 + 0xc)) {
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
    if (*local_ec != 0) {
      iVar5 = core_event_cpp_FUN_0047a210();
      return iVar5;
    }
  }
  return 1;
}
