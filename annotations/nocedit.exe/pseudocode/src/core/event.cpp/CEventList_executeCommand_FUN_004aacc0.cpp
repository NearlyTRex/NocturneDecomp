// Name: core_event.cpp_CEventList_executeCommand_FUN_004aacc0
// Address: 004aacc0
// Address Range: [[004aacc0, 004adc05]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_executeCommand_FUN_004aacc0(CEventList *this_ptr,char *command_buffer)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_executeCommand_FUN_004aacc0(CEventList *this_ptr,char *command_buffer)

{
  CDeformableModelInstance *this_ptr_00;
  char cVar1;
  CHero *this_ptr_01;
  int iVar2;
  int iVar3;
  CDemonActor *pCVar8;
  CBoxActor *pCVar6;
  CChain *pCVar5;
  CCharacter *pCVar9;
  CLever *this_ptr_02;
  CCharacter *pCVar4;
  CMotionList *pCVar10;
  EWeatherType type;
  CHero *pCVar7;
  SMotion *pSVar11;
  byte *pbVar12;
  CDemonActor *pCVar13;
  uint uVar14;
  uint uVar15;
  SIZE_T SVar16;
  char *pcVar17;
  char *pcVar18;
  char (*str1) [32];
  char *pcVar19;
  byte bVar20;
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
  char local_b15 [200];
  char local_a4d [200];
  char local_985 [200];
  char local_8bd [201];
  char local_7f4 [199];
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
  CVector3f local_128;
  CVector3f local_11c;
  CVector3f local_110;
  uint uStack_f8;
  char *local_f4;
  uint local_f0;
  byte *local_ec;
  C3DSLight *local_e8;
  int local_e4;
  float local_e0 [2];
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
  float local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  CVector3f *local_a0;
  float local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  float local_88;
  int local_84;
  float local_80;
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
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar20 = 0;
  g_EventErrorMessageBuffer[0] = '\0';
  if (((command_buffer != (char *)0x0) && (*command_buffer != '\0')) &&
     (iVar2 = _stricmp(command_buffer,"none"), iVar2 != 0)) {
    if (*command_buffer == '.') {
      command_buffer = command_buffer + 1;
    }
    local_f0 = (uint)(g_EventDryRun == 0);
    local_ec = (byte *)&s_EmptyChar_0062460c;
    pcVar18 = command_buffer;
    do {
      pcVar17 = pcVar18;
      if (*pcVar18 == '(') goto LAB_004aad41;
      if (*pcVar18 == '\0') break;
      pcVar17 = pcVar18 + 1;
      if (*pcVar17 == '(') goto LAB_004aad41;
      pcVar18 = pcVar18 + 2;
    } while (*pcVar17 != '\0');
    pcVar17 = (char *)0x0;
LAB_004aad41:
    if (pcVar17 == (char *)0x0) {
      iVar2 = 0;
      if (0 < (this_ptr->events).count) {
        str1 = (this_ptr->events).names;
        do {
          iVar3 = _stricmp(*str1,command_buffer);
          if (iVar3 == 0) {
            return 1;
          }
          iVar2 = iVar2 + 1;
          str1 = str1 + 1;
        } while (iVar2 < (this_ptr->events).count);
      }
      uVar14 = 0xffffffff;
      pcVar18 = command_buffer;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar14 - 1) {
        iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0("Event name %s is too long");
        return iVar2;
      }
      if (99 < (this_ptr->events).count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 599;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many events");
      }
      pcVar17 = (this_ptr->events).names[(this_ptr->events).count];
      local_14 = 0;
      pcVar18 = pcVar17;
      do {
        cVar1 = *command_buffer;
        *pcVar18 = cVar1;
        pcVar19 = pcVar17;
        if (cVar1 == '\0') break;
        cVar1 = command_buffer[1];
        command_buffer = command_buffer + 2;
        pcVar18[1] = cVar1;
        pcVar18 = pcVar18 + 2;
      } while (cVar1 != '\0');
      do {
        uVar14 = local_14;
        uVar15 = 0xffffffff;
        pcVar18 = pcVar17;
        do {
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
        } while (cVar1 != '\0');
        if (~uVar15 - 1 <= local_14) {
          if (local_f0 == 0) {
            return 1;
          }
          (this_ptr->events).count = (this_ptr->events).count + 1;
          return 1;
        }
        iVar2 = toupper((uint)(byte)*pcVar19);
        *pcVar19 = (byte)iVar2;
        iVar2 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)(byte)*pcVar19);
        if (iVar2 == 0) {
          iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0("Event name %s is not valid");
          return iVar2;
        }
        local_14 = uVar14 + 1;
        pcVar19 = pcVar19 + 1;
      } while( true );
    }
    iVar2 = _strnicmp(command_buffer,"advanceLightFilter",0x12);
    if ((iVar2 == 0) &&
       ((g_CharacterClassificationTable[(byte)(command_buffer[0x12] + 1)] & 0xe0) == 0)) {
      local_ec = (byte *)(command_buffer + 0x12);
      while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
        local_ec = local_ec + 1;
      }
      pcVar18 = core_event_cpp_extractParenArg_FUN_004aa6c0((char **)&local_ec,local_fc4,200);
      if (pcVar18 != (char *)0x0) goto LAB_004aaf38;
      core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10
                (g_CDemonSetPtr,local_fc4,&local_e8,&local_44);
      if (local_e8 == (C3DSLight *)0x0) {
        iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0("SpotLight %s doesn't exist.");
        return iVar2;
      }
      if (local_f0 != 0) {
        if (local_44 == (CDemonLight *)0x0) {
          g_CurrentFilename = "..\\core\\event.cpp";
          g_CurrentLineNumber = 639;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find CDemonLight for light %s in advanceLightFilter meta-command");
        }
        core_setutil_cpp_C3DSLight_advanceFilter_FUN_00586e70(local_e8,local_44);
      }
    }
    else {
      iVar2 = _strnicmp(command_buffer,"createExplosion",0xf);
      if ((iVar2 == 0) &&
         ((g_CharacterClassificationTable[(byte)(command_buffer[0xf] + 1)] & 0xe0) == 0)) {
        local_ec = (byte *)(command_buffer + 0xf);
        while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
          local_ec = local_ec + 1;
        }
        local_e4 = -1;
        sscanf((char *)local_ec,"( %f , %n",local_e0);
        if (local_e4 < 0) {
          iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0("Error parsing createExplosion() parms");
          return iVar2;
        }
        local_ec = local_ec + local_e4;
        local_e4 = -1;
        sscanf
                  ((char *)local_ec,"%f , %f , %f %n",&local_128,&local_128.y,&local_128.z);
        if ((local_e4 < 0) &&
           (sscanf((char *)local_ec," %[^,)] %n",local_4d5 + 1),
           -1 < local_e4)) {
          uVar14 = 0xffffffff;
          pcVar18 = local_4d5 + 1;
          do {
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            cVar1 = *pcVar18;
            pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
          } while (cVar1 != '\0');
          SVar16 = ~uVar14 - 1;
          if (0 < (int)SVar16) {
            pcVar18 = local_4d5 + ~uVar14;
            do {
              if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
              SVar16 = SVar16 - 1;
              pcVar18 = pcVar18 + -1;
            } while (0 < (int)SVar16);
          }
          (local_4d5 + 1)[SVar16] = '\0';
          while ((g_CharacterClassificationTable[(byte)(local_4d5[1] + 1)] & 2) != 0) {
            memmove(local_4d5 + 1,local_4d5 + 2,SVar16);
            SVar16 = SVar16 - 1;
          }
          pCVar8 = core_event_cpp_resolveActorByName_FUN_004aa400
                             (local_4d5 + 1,g_CDemonActorClassInfo.name_hash,
                              g_CDemonActorClassInfo.class_name);
          if (pCVar8 == (CDemonActor *)0x0) {
            return 0;
          }
          if (pCVar8 == g_ActorNameSentinel) {
            local_f0 = 0;
          }
          else if ((CLocation *)&local_128 != &pCVar8->location) {
            local_128.x = (pCVar8->location).position.x;
            local_128.y = (pCVar8->location).position.y;
            local_128.z = (pCVar8->location).position.z;
          }
        }
        if (local_e4 < 0) {
          iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0("Error parsing createExplosion() parms");
          return iVar2;
        }
        local_ec = local_ec + local_e4;
        while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
          local_ec = local_ec + 1;
        }
        local_e0[1] = 4.0;
        if (*local_ec == 0x2c) {
          local_e4 = -1;
          sscanf((char *)local_ec,", %f %n",local_e0 + 1);
          if (local_e4 < 0) {
            iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                              ("Error parsing createExplosion() parms");
            return iVar2;
          }
          local_ec = local_ec + local_e4;
          while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
            local_ec = local_ec + 1;
          }
        }
        if (*local_ec != 0x29) {
          iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0("Error parsing createExplosion() parms, expected matching ')'");
          return iVar2;
        }
        local_ec = local_ec + 1;
        if (local_f0 != 0) {
          core_fire_cpp_CFireEffect_createExplosion_FUN_004c8c10
                    (g_CFireEffectPtr,&local_128,local_e0[0],1500.0,local_e0[1]);
        }
      }
      else {
        iVar2 = _strnicmp(command_buffer,"deleteActor",0xb);
        if ((iVar2 == 0) &&
           ((g_CharacterClassificationTable[(byte)(command_buffer[0xb] + 1)] & 0xe0) == 0)) {
          local_ec = (byte *)(command_buffer + 0xb);
          while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
            local_ec = local_ec + 1;
          }
          pcVar18 = core_event_cpp_extractParenArg_FUN_004aa6c0((char **)&local_ec,local_1154,200);
          if (pcVar18 != (char *)0x0) goto LAB_004aaf38;
          pCVar8 = core_event_cpp_resolveActorByName_FUN_004aa400
                             (local_1154,g_CDemonActorClassInfo.name_hash,
                              g_CDemonActorClassInfo.class_name);
          uVar14 = g_CBoxActorClassInfo.name_hash;
          if (pCVar8 == (CDemonActor *)0x0) {
            if (g_EventDryRun != 0) {
              return 0;
            }
            local_f0 = 0;
          }
          if ((pCVar8 != g_ActorNameSentinel) && (local_f0 != 0)) {
            pCVar8->lifecycle_state = ACTOR_DESTROYED;
            pCVar6 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c790(pCVar8,uVar14);
            if (pCVar6 != (CBoxActor *)0x0) {
              pCVar6->loop_wav_name[0] = '\0';
              sound_sndmain_cpp_killSfx_FUN_005a9c40(pCVar6->sfx_handle);
            }
            pCVar5 = (CChain *)
                     core_actor_cpp_castToClassHash_FUN_0040c790(pCVar8,g_CChainClassInfo.name_hash)
            ;
            if (pCVar5 != (CChain *)0x0) {
              pCVar5->pull_wav_name[0] = '\0';
              pCVar5->move_wav_name[0] = '\0';
              sound_sndmain_cpp_killSfx_FUN_005a9c40(pCVar5->move_wav_handle);
            }
          }
        }
        else {
          iVar2 = _strnicmp(command_buffer,"displayBitmap",0xd);
          if ((iVar2 == 0) &&
             ((g_CharacterClassificationTable[(byte)(command_buffer[0xd] + 1)] & 0xe0) == 0)) {
            local_ec = (byte *)(command_buffer + 0xd);
            while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
              local_ec = local_ec + 1;
            }
            local_d0 = -1;
            sscanf
                      ((char *)local_ec,"( %[^ ,], %d, %d )%n",&stack0xffffe9c4,&local_d8,&local_d4);
            if (local_d0 < 0) {
              iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                                ("Error parsing displayBitmap() parms");
              return iVar2;
            }
            local_ec = local_ec + local_d0;
            while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
              local_ec = local_ec + 1;
            }
            iVar2 = engine_dosio_cpp_getFileSize_FUN_00481880("art",&stack0xffffe9c4);
            if (iVar2 < 0) {
              iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0("Bitmap doesn't exist");
              return iVar2;
            }
            if (iVar2 != local_d8 * local_d4) {
              iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                                ("Bitmap file size does not match specified dimensions");
              return iVar2;
            }
            if (local_f0 != 0) {
              core_game_cpp_CGame_displayBitmap_FUN_004e2890
                        (g_CGamePtr,&stack0xffffe9c4,local_d8,local_d4);
            }
          }
          else {
            iVar2 = _strnicmp
                              (command_buffer,"fadeAmbientSound",0x10);
            if ((iVar2 == 0) &&
               ((g_CharacterClassificationTable[(byte)(command_buffer[0x10] + 1)] & 0xe0) == 0)) {
              local_ec = (byte *)(command_buffer + 0x10);
              while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                local_ec = local_ec + 1;
              }
              local_c4 = -1;
              sscanf((char *)local_ec,"(%f, %f )%n",&local_cc,&local_c8)
              ;
              if (local_c4 < 0) {
                _sprintf(g_EventErrorMessageBuffer,"Error parsing fadeAmbientSound parms");
                return 0;
              }
              local_ec = local_ec + local_c4;
              if (local_f0 != 0) {
                core_sound_cpp_CSound_setVolumeFade_FUN_005b3dc0(g_CSoundPtr,local_cc,local_c8);
              }
            }
            else {
              iVar2 = _strnicmp(command_buffer,"fadeSfx",7);
              if ((iVar2 == 0) &&
                 ((g_CharacterClassificationTable[(byte)(command_buffer[7] + 1)] & 0xe0) == 0)) {
                local_ec = (byte *)(command_buffer + 7);
                while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                  local_ec = local_ec + 1;
                }
                local_b8 = -1;
                sscanf
                          ((char *)local_ec,"(%[^,], %f, %f )%n",local_108d + 1,&local_c0,&local_bc);
                if (local_b8 < 0) {
                  _sprintf(g_EventErrorMessageBuffer,"Error parsing fadeSfx parms");
                  return 0;
                }
                local_ec = local_ec + local_b8;
                uVar14 = 0xffffffff;
                pcVar18 = local_108d + 1;
                do {
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  cVar1 = *pcVar18;
                  pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                } while (cVar1 != '\0');
                SVar16 = ~uVar14 - 1;
                if (0 < (int)SVar16) {
                  pcVar18 = local_108d + ~uVar14;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                    SVar16 = SVar16 - 1;
                    pcVar18 = pcVar18 + -1;
                  } while (0 < (int)SVar16);
                }
                (local_108d + 1)[SVar16] = '\0';
                while ((g_CharacterClassificationTable[(byte)(local_108d[1] + 1)] & 2) != 0) {
                  memmove(local_108d + 1,local_108d + 2,SVar16);
                  SVar16 = SVar16 - 1;
                }
                if (local_f0 != 0) {
                  uVar14 = core_event_cpp_CEventList_getSfxHandle_FUN_004b0c40
                                     (this_ptr,local_108d + 1);
                  if (local_bc <= 0.0) {
                    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(uVar14,local_c0);
                  }
                  else {
                    sound_sndmain_cpp_setSfxFade_FUN_005a9c70(uVar14,local_c0,local_bc,0);
                  }
                }
              }
              else {
                iVar2 = _strnicmp(command_buffer,"flagOn",6);
                if ((iVar2 == 0) &&
                   ((g_CharacterClassificationTable[(byte)(command_buffer[6] + 1)] & 0xe0) == 0)) {
                  local_ec = (byte *)(command_buffer + 6);
                  while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                    local_ec = local_ec + 1;
                  }
                  pcVar18 = core_event_cpp_extractParenArg_FUN_004aa6c0
                                      ((char **)&local_ec,local_194,0x20);
                  if (pcVar18 != (char *)0x0) {
LAB_004aaf38:
                    pcVar17 = g_EventErrorMessageBuffer;
                    do {
                      cVar1 = *pcVar18;
                      *pcVar17 = cVar1;
                      if (cVar1 == '\0') {
                        return 0;
                      }
                      cVar1 = pcVar18[1];
                      pcVar18 = pcVar18 + 2;
                      pcVar17[1] = cVar1;
                      pcVar17 = pcVar17 + 2;
                    } while (cVar1 != '\0');
                    return 0;
                  }
                  if (local_f0 != 0) {
                    core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330
                              (this_ptr,local_194,1);
                  }
                }
                else {
                  iVar2 = _strnicmp(command_buffer,"flagOff",7);
                  if ((iVar2 == 0) &&
                     ((g_CharacterClassificationTable[(byte)(command_buffer[7] + 1)] & 0xe0) == 0))
                  {
                    local_ec = (byte *)(command_buffer + 7);
                    while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                      local_ec = local_ec + 1;
                    }
                    pcVar18 = core_event_cpp_extractParenArg_FUN_004aa6c0
                                        ((char **)&local_ec,local_174,0x20);
                    if (pcVar18 != (char *)0x0) goto LAB_004aaf38;
                    if (local_f0 != 0) {
                      core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330
                                (this_ptr,local_174,0);
                    }
                  }
                  else {
                    iVar2 = _strnicmp
                                      (command_buffer,"gameFlagOn",10);
                    if ((iVar2 == 0) &&
                       ((g_CharacterClassificationTable[(byte)(command_buffer[10] + 1)] & 0xe0) == 0
                       )) {
                      local_ec = (byte *)(command_buffer + 10);
                      while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                        local_ec = local_ec + 1;
                      }
                      pcVar18 = core_event_cpp_extractParenArg_FUN_004aa6c0
                                          ((char **)&local_ec,local_1b4,0x20);
                      if (pcVar18 != (char *)0x0) goto LAB_004aaf38;
                      if (local_f0 != 0) {
                        core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470
                                  (this_ptr,local_1b4,1);
                      }
                    }
                    else {
                      iVar2 = _strnicmp
                                        (command_buffer,"gameFlagOff",0xb);
                      if ((iVar2 == 0) &&
                         ((g_CharacterClassificationTable[(byte)(command_buffer[0xb] + 1)] & 0xe0)
                          == 0)) {
                        local_ec = (byte *)(command_buffer + 0xb);
                        while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                          local_ec = local_ec + 1;
                        }
                        pcVar18 = core_event_cpp_extractParenArg_FUN_004aa6c0
                                            ((char **)&local_ec,local_154,0x20);
                        if (pcVar18 != (char *)0x0) goto LAB_004aaf38;
                        if (local_f0 != 0) {
                          core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470
                                    (this_ptr,local_154,0);
                        }
                      }
                      else {
                        iVar2 = _strnicmp
                                          (command_buffer,"hurtCharacter",0xd);
                        if ((iVar2 == 0) &&
                           ((g_CharacterClassificationTable[(byte)(command_buffer[0xd] + 1)] & 0xe0)
                            == 0)) {
                          local_ec = (byte *)(command_buffer + 0xd);
                          while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                            local_ec = local_ec + 1;
                          }
                          local_b4 = -1;
                          sscanf
                                    ((char *)local_ec," ( %[^,], %[^,],%f)%n",local_665 + 1,local_2e1 + 1,
                                     &local_b0);
                          if (local_b4 < 2) {
                            iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                                              ("Syntax error in killHero() parms");
                            return iVar2;
                          }
                          uVar14 = 0xffffffff;
                          pcVar18 = local_665 + 1;
                          do {
                            if (uVar14 == 0) break;
                            uVar14 = uVar14 - 1;
                            cVar1 = *pcVar18;
                            pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                          } while (cVar1 != '\0');
                          SVar16 = ~uVar14 - 1;
                          if (0 < (int)SVar16) {
                            pcVar18 = local_665 + ~uVar14;
                            do {
                              if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) == 0
                                 ) break;
                              SVar16 = SVar16 - 1;
                              pcVar18 = pcVar18 + -1;
                            } while (0 < (int)SVar16);
                          }
                          (local_665 + 1)[SVar16] = '\0';
                          while ((g_CharacterClassificationTable[(byte)(local_665[1] + 1)] & 2) != 0
                                ) {
                            memmove(local_665 + 1,local_665 + 2,SVar16);
                            SVar16 = SVar16 - 1;
                          }
                          uVar14 = 0xffffffff;
                          pcVar18 = local_2e1 + 1;
                          do {
                            if (uVar14 == 0) break;
                            uVar14 = uVar14 - 1;
                            cVar1 = *pcVar18;
                            pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                          } while (cVar1 != '\0');
                          SVar16 = ~uVar14 - 1;
                          if (0 < (int)SVar16) {
                            pcVar18 = local_2e1 + ~uVar14;
                            do {
                              if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) == 0
                                 ) break;
                              SVar16 = SVar16 - 1;
                              pcVar18 = pcVar18 + -1;
                            } while (0 < (int)SVar16);
                          }
                          (local_2e1 + 1)[SVar16] = '\0';
                          while ((g_CharacterClassificationTable[(byte)(local_2e1[1] + 1)] & 2) != 0
                                ) {
                            memmove(local_2e1 + 1,local_2e1 + 2,SVar16);
                            SVar16 = SVar16 - 1;
                          }
                          local_ec = local_ec + local_b4;
                          while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                            local_ec = local_ec + 1;
                          }
                          pCVar9 = (CCharacter *)
                                   core_event_cpp_resolveActorByName_FUN_004aa400
                                             (local_665 + 1,g_CCharacterClassInfo.name_hash,
                                              g_CCharacterClassInfo.class_name);
                          if (pCVar9 == (CCharacter *)0x0) {
                            return 0;
                          }
                          if (pCVar9 == (CCharacter *)g_ActorNameSentinel) {
                            local_f0 = (uint)pCVar9 ^ (uint)g_ActorNameSentinel;
                          }
                          iVar2 = core_event_cpp_parseDamageType_FUN_004aa960
                                            (local_2e1 + 1,&local_ac);
                          if (iVar2 == 0) {
                            iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                                              ("Unknown damage type \"%s\" in hurtCharacter command.");
                            return iVar2;
                          }
                          if (local_f0 != 0) {
                            (*(((pCVar9->base).vtable._uc)->_uc).applyDamage)
                                      (pCVar9,local_ac,local_b0);
                          }
                        }
                        else {
                          iVar2 = _strnicmp
                                            (command_buffer,"incCounter",10);
                          if ((iVar2 == 0) &&
                             ((g_CharacterClassificationTable[(byte)(command_buffer[10] + 1)] & 0xe0
                              ) == 0)) {
                            local_ec = (byte *)(command_buffer + 10);
                            while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0)
                            {
                              local_ec = local_ec + 1;
                            }
                            local_a8 = -1;
                            sscanf
                                      ((char *)local_ec,"( %[^ )] )%n",local_121d + 1);
                            if (local_a8 < 5) {
                              _sprintf(g_EventErrorMessageBuffer,
                                         "Error parsing incCounter arguments");
                              return 0;
                            }
                            local_ec = local_ec + local_a8;
                            uVar14 = 0xffffffff;
                            pcVar18 = local_121d + 1;
                            do {
                              if (uVar14 == 0) break;
                              uVar14 = uVar14 - 1;
                              cVar1 = *pcVar18;
                              pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                            } while (cVar1 != '\0');
                            SVar16 = ~uVar14 - 1;
                            if (0 < (int)SVar16) {
                              pcVar18 = local_121d + ~uVar14;
                              do {
                                if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2) ==
                                    0) break;
                                SVar16 = SVar16 - 1;
                                pcVar18 = pcVar18 + -1;
                              } while (0 < (int)SVar16);
                            }
                            (local_121d + 1)[SVar16] = '\0';
                            while ((g_CharacterClassificationTable[(byte)(local_121d[1] + 1)] & 2)
                                   != 0) {
                              memmove
                                        (local_121d + 1,local_121d + 2,SVar16);
                              SVar16 = SVar16 - 1;
                            }
                            if (local_f0 != 0) {
                              iVar2 = core_event_cpp_CEventList_getCounterValue_FUN_004b0830
                                                (this_ptr,local_121d + 1);
                              core_event_cpp_CEventList_setCounter_FUN_004b0720
                                        (this_ptr,local_121d + 1,iVar2 + 1);
                            }
                          }
                          else {
                            iVar2 = _strnicmp
                                              (command_buffer,"killCharacter",0xd);
                            if ((iVar2 == 0) &&
                               ((g_CharacterClassificationTable[(byte)(command_buffer[0xd] + 1)] &
                                0xe0) == 0)) {
                              local_ec = (byte *)(command_buffer + 0xd);
                              while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) !=
                                     0) {
                                local_ec = local_ec + 1;
                              }
                              local_a0 = &local_110;
                              local_a4 = -1;
                              local_9c = 0.0;
                              sscanf
                                        ((char *)local_ec," ( %[^,], %[^,], %f , %f , %f , %f)%n",local_153d + 1,
                                         local_219 + 1,&local_110,&local_110.y,&local_110.z,
                                         &local_9c);
                              local_9c = local_9c * (float)0.017453292519444399;
                              if (local_a4 < 0) {
                                local_9c = -1.0;
                                sscanf
                                          ((char *)local_ec," ( %[^,], %[^,], %f , %f , %f )%n",local_153d + 1,
                                           local_219 + 1,&local_110,&local_110.y,&local_110.z);
                              }
                              if (local_a4 < 0) {
                                local_a0 = (CVector3f *)0x0;
                                sscanf
                                          ((char *)local_ec," ( %[^,], %[^)])%n",local_153d + 1,
                                           local_219 + 1);
                              }
                              if (local_a4 < 0) {
                                iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                                                  ("Syntax error in killCharacter() parms");
                                return iVar2;
                              }
                              uVar14 = 0xffffffff;
                              pcVar18 = local_153d + 1;
                              do {
                                if (uVar14 == 0) break;
                                uVar14 = uVar14 - 1;
                                cVar1 = *pcVar18;
                                pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                              } while (cVar1 != '\0');
                              SVar16 = ~uVar14 - 1;
                              if (0 < (int)SVar16) {
                                pcVar18 = local_153d + ~uVar14;
                                do {
                                  if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2)
                                      == 0) break;
                                  SVar16 = SVar16 - 1;
                                  pcVar18 = pcVar18 + -1;
                                } while (0 < (int)SVar16);
                              }
                              (local_153d + 1)[SVar16] = '\0';
                              while ((g_CharacterClassificationTable[(byte)(local_153d[1] + 1)] & 2)
                                     != 0) {
                                memmove
                                          (local_153d + 1,local_153d + 2,SVar16);
                                SVar16 = SVar16 - 1;
                              }
                              uVar14 = 0xffffffff;
                              pcVar18 = local_219 + 1;
                              do {
                                if (uVar14 == 0) break;
                                uVar14 = uVar14 - 1;
                                cVar1 = *pcVar18;
                                pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                              } while (cVar1 != '\0');
                              SVar16 = ~uVar14 - 1;
                              if (0 < (int)SVar16) {
                                pcVar18 = local_219 + ~uVar14;
                                do {
                                  if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] & 2)
                                      == 0) break;
                                  SVar16 = SVar16 - 1;
                                  pcVar18 = pcVar18 + -1;
                                } while (0 < (int)SVar16);
                              }
                              (local_219 + 1)[SVar16] = '\0';
                              while ((g_CharacterClassificationTable[(byte)(local_219[1] + 1)] & 2)
                                     != 0) {
                                memmove
                                          (local_219 + 1,local_219 + 2,SVar16);
                                SVar16 = SVar16 - 1;
                              }
                              local_ec = local_ec + local_a4;
                              while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) !=
                                     0) {
                                local_ec = local_ec + 1;
                              }
                              pCVar9 = (CCharacter *)
                                       core_event_cpp_resolveActorByName_FUN_004aa400
                                                 (local_153d + 1,g_CCharacterClassInfo.name_hash,
                                                  g_CCharacterClassInfo.class_name);
                              if (pCVar9 == (CCharacter *)0x0) {
                                return 0;
                              }
                              if (pCVar9 == (CCharacter *)g_ActorNameSentinel) {
                                local_f0 = 0;
                              }
                              iVar2 = core_event_cpp_parseDeathType_FUN_004aa7d0
                                                (local_219 + 1,&local_98);
                              if (iVar2 == 0) {
                                iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                                                  ("Unknown death type \"%s\" in killCharacter command.");
                                return iVar2;
                              }
                              if (local_f0 != 0) {
                                (*(((pCVar9->base).vtable._uc)->_uc).kill)
                                          (pCVar9,local_98,local_a0,local_9c);
                              }
                            }
                            else {
                              iVar2 = _strnicmp
                                                (command_buffer,"killHero",8);
                              if ((iVar2 == 0) &&
                                 ((g_CharacterClassificationTable[(byte)(command_buffer[8] + 1)] &
                                  0xe0) == 0)) {
                                local_ec = (byte *)(command_buffer + 8);
                                while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2)
                                       != 0) {
                                  local_ec = local_ec + 1;
                                }
                                if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
                                  iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                                                    ("Can't use killHero command in multi-player");
                                  return iVar2;
                                }
                                local_94 = -1;
                                sscanf
                                          ((char *)local_ec," ( %[^)])%n",local_27c);
                                if (local_94 < 2) {
                                  iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                                                    ("Syntax error in killHero() parms");
                                  return iVar2;
                                }
                                local_ec = local_ec + local_94;
                                while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2)
                                       != 0) {
                                  local_ec = local_ec + 1;
                                }
                                iVar2 = core_event_cpp_parseDeathType_FUN_004aa7d0
                                                  (local_27c,&local_90);
                                if (iVar2 == 0) {
                                  iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                                                    ("Unknown death type \"%s\" in killHero command.");
                                  return iVar2;
                                }
                                if ((local_f0 != 0) &&
                                   (this_ptr_01 = g_HeroActors[g_LocalHeroIndex],
                                   this_ptr_01 != (CHero *)0x0)) {
                                  (*(((this_ptr_01->base).base.vtable._uc)->_uc).kill)
                                            (&this_ptr_01->base,local_90,(CVector3f *)0x0,-1.0);
                                }
                              }
                              else {
                                iVar2 = _strnicmp
                                                  (command_buffer,"killSfx",7);
                                if ((iVar2 == 0) &&
                                   ((g_CharacterClassificationTable[(byte)(command_buffer[7] + 1)] &
                                    0xe0) == 0)) {
                                  local_ec = (byte *)(command_buffer + 7);
                                  while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2)
                                         != 0) {
                                    local_ec = local_ec + 1;
                                  }
                                  local_8c = -1;
                                  sscanf
                                            ((char *)local_ec,"(%[^,)]%n",local_efd + 1);
                                  if (local_8c < 3) {
                                    _sprintf(g_EventErrorMessageBuffer,
                                               "Error parsing killSfx parms");
                                    return 0;
                                  }
                                  local_ec = local_ec + local_8c;
                                  uVar14 = 0xffffffff;
                                  pcVar18 = local_efd + 1;
                                  do {
                                    if (uVar14 == 0) break;
                                    uVar14 = uVar14 - 1;
                                    cVar1 = *pcVar18;
                                    pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                  } while (cVar1 != '\0');
                                  SVar16 = ~uVar14 - 1;
                                  if (0 < (int)SVar16) {
                                    pcVar18 = local_efd + ~uVar14;
                                    do {
                                      if ((g_CharacterClassificationTable[(byte)(pcVar18[-1] + 1)] &
                                          2) == 0) break;
                                      SVar16 = SVar16 - 1;
                                      pcVar18 = pcVar18 + -1;
                                    } while (0 < (int)SVar16);
                                  }
                                  (local_efd + 1)[SVar16] = '\0';
                                  while ((g_CharacterClassificationTable[(byte)(local_efd[1] + 1)] &
                                         2) != 0) {
                                    memmove
                                              (local_efd + 1,local_efd + 2,SVar16);
                                    SVar16 = SVar16 - 1;
                                  }
                                  local_88 = 0.0;
                                  if (*local_ec == 0x2c) {
                                    local_8c = -1;
                                    sscanf
                                              ((char *)local_ec,",%f%n",&local_88);
                                    if (local_8c < 3) {
                                      _sprintf(g_EventErrorMessageBuffer,
                                                 "Error parsing killSfx parms");
                                      return 0;
                                    }
                                    local_ec = local_ec + local_8c;
                                  }
                                  do {
                                    pbVar12 = local_ec;
                                    local_ec = pbVar12 + 1;
                                  } while ((g_CharacterClassificationTable[(byte)(*pbVar12 + 1)] & 2
                                           ) != 0);
                                  if (*pbVar12 != 0x29) {
                                    local_ec = pbVar12;
                                    _sprintf(g_EventErrorMessageBuffer,
                                               "Can't find matching ) in killSfx command");
                                    return 0;
                                  }
                                  if (local_f0 != 0) {
                                    uVar14 = core_event_cpp_CEventList_getSfxHandle_FUN_004b0c40
                                                       (this_ptr,local_efd + 1);
                                    if (local_88 <= 0.0) {
                                      sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar14);
                                      core_event_cpp_CEventList_updateSfxEntries_FUN_004b0db0
                                                (this_ptr);
                                    }
                                    else {
                                      sound_sndmain_cpp_setSfxFade_FUN_005a9c70
                                                (uVar14,0.0,local_88,1);
                                      core_event_cpp_CEventList_updateSfxEntries_FUN_004b0db0
                                                (this_ptr);
                                    }
                                  }
                                }
                                else {
                                  iVar2 = _strnicmp
                                                    (command_buffer,"lightning",9);
                                  if ((iVar2 == 0) &&
                                     ((g_CharacterClassificationTable[(byte)(command_buffer[9] + 1)]
                                      & 0xe0) == 0)) {
                                    local_ec = (byte *)(command_buffer + 9);
                                    while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] &
                                           2) != 0) {
                                      local_ec = local_ec + 1;
                                    }
                                    local_84 = -1;
                                    sscanf((char *)local_ec,"( )%n");
                                    if (local_84 < 2) {
                                      _sprintf(g_EventErrorMessageBuffer,
                                                 "Error parsing lightning command");
                                      return 0;
                                    }
                                    local_ec = local_ec + local_84;
                                    if (local_f0 != 0) {
                                      core_weather_cpp_CWeather_createLightningStrike_FUN_005eeeb0
                                                (g_CWeatherPtr,0.1,1);
                                    }
                                  }
                                  else {
                                    iVar2 = _strnicmp
                                                      (command_buffer,"playSfx",7);
                                    if ((iVar2 == 0) &&
                                       ((g_CharacterClassificationTable
                                         [(byte)(command_buffer[7] + 1)] & 0xe0) == 0)) {
                                      local_ec = (byte *)(command_buffer + 7);
                                      while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)]
                                             & 2) != 0) {
                                        local_ec = local_ec + 1;
                                      }
                                      local_7c = -1;
                                      sscanf
                                                ((char *)local_ec,"(%[^,)]%n",local_13ad + 1);
                                      if (local_7c < 3) {
                                        _sprintf(g_EventErrorMessageBuffer,
                                                   "Error parsing playSfx parms");
                                        return 0;
                                      }
                                      local_ec = local_ec + local_7c;
                                      uVar14 = 0xffffffff;
                                      pcVar18 = local_13ad + 1;
                                      do {
                                        if (uVar14 == 0) break;
                                        uVar14 = uVar14 - 1;
                                        cVar1 = *pcVar18;
                                        pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                      } while (cVar1 != '\0');
                                      SVar16 = ~uVar14 - 1;
                                      if (0 < (int)SVar16) {
                                        pcVar18 = local_13ad + ~uVar14;
                                        do {
                                          if ((g_CharacterClassificationTable
                                               [(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                                          SVar16 = SVar16 - 1;
                                          pcVar18 = pcVar18 + -1;
                                        } while (0 < (int)SVar16);
                                      }
                                      (local_13ad + 1)[SVar16] = '\0';
                                      while (pbVar12 = local_ec,
                                            (g_CharacterClassificationTable
                                             [(byte)(local_13ad[1] + 1)] & 2) != 0) {
                                        memmove
                                                  (local_13ad + 1,local_13ad + 2,SVar16);
                                        SVar16 = SVar16 - 1;
                                      }
                                      pcVar18 = g_DefaultSfxHandleName;
                                      pcVar17 = local_b15 + 1;
                                      for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
                                        *(uint *)pcVar17 = *(uint *)pcVar18;
                                        pcVar18 = pcVar18 + ((uint)bVar20 * -2 + 1) * 4;
                                        pcVar17 = pcVar17 + (uint)bVar20 * -8 + 4;
                                      }
                                      if (*pbVar12 == 0x2c) {
                                        local_7c = -1;
                                        sscanf
                                                  ((char *)local_ec,",%[^)]%n",local_b15 + 1);
                                        if (local_7c < 3) {
                                          _sprintf(g_EventErrorMessageBuffer,
                                                     "Error parsing playSfx parms");
                                          return 0;
                                        }
                                        local_ec = local_ec + local_7c;
                                        uVar14 = 0xffffffff;
                                        pcVar18 = local_b15 + 1;
                                        do {
                                          if (uVar14 == 0) break;
                                          uVar14 = uVar14 - 1;
                                          cVar1 = *pcVar18;
                                          pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                        } while (cVar1 != '\0');
                                        SVar16 = ~uVar14 - 1;
                                        if (0 < (int)SVar16) {
                                          pcVar18 = local_b15 + ~uVar14;
                                          do {
                                            if ((g_CharacterClassificationTable
                                                 [(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                                            SVar16 = SVar16 - 1;
                                            pcVar18 = pcVar18 + -1;
                                          } while (0 < (int)SVar16);
                                        }
                                        (local_b15 + 1)[SVar16] = '\0';
                                        while ((g_CharacterClassificationTable
                                                [(byte)(local_b15[1] + 1)] & 2) != 0) {
                                          memmove
                                                    (local_b15 + 1,local_b15 + 2,SVar16);
                                          SVar16 = SVar16 - 1;
                                        }
                                        uVar14 = 0xffffffff;
                                        pcVar18 = local_b15 + 1;
                                        do {
                                          if (uVar14 == 0) break;
                                          uVar14 = uVar14 - 1;
                                          cVar1 = *pcVar18;
                                          pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                        } while (cVar1 != '\0');
                                        if (0x13 < ~uVar14 - 1) {
                                          _sprintf(g_EventErrorMessageBuffer,
                                                     "handle name %s is too long, max %d chars",
                                                     local_b15 + 1,0x13);
                                          return 0;
                                        }
                                      }
                                      do {
                                        pbVar12 = local_ec;
                                        local_ec = pbVar12 + 1;
                                      } while ((g_CharacterClassificationTable[(byte)(*pbVar12 + 1)]
                                               & 2) != 0);
                                      if (*pbVar12 != 0x29) {
                                        local_ec = pbVar12;
                                        _sprintf(g_EventErrorMessageBuffer,
                                                   "Can't find matching ) in playSfx command");
                                        return 0;
                                      }
                                      if (local_f0 != 0) {
                                        iVar2 = _strnicmp
                                                          (local_13ad + 1,"cue",3);
                                        if (iVar2 == 0) {
                                          iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0
                                                            (1);
                                          if (iVar2 != 0) {
                                            sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
                                            sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(1);
                                            uVar14 = core_sound_cpp_CSound_playSound_FUN_005b3a20
                                                               (g_CSoundPtr,this_ptr,local_13ad + 1)
                                            ;
                                            sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
                                            if (local_b15[1] != '\0') {
                                              core_event_cpp_CEventList_setSfxHandle_FUN_004b0c80
                                                        (this_ptr,local_b15 + 1,uVar14);
                                            }
                                          }
                                        }
                                        else {
                                          uVar14 = core_sound_cpp_CSound_playSound_FUN_005b3a20
                                                             (g_CSoundPtr,this_ptr,local_13ad + 1);
                                          if (local_b15[1] != '\0') {
                                            core_event_cpp_CEventList_setSfxHandle_FUN_004b0c80
                                                      (this_ptr,local_b15 + 1,uVar14);
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      iVar2 = _strnicmp
                                                        (command_buffer,"setCameraAmbient",
                                                         0x10);
                                      if ((iVar2 == 0) &&
                                         ((g_CharacterClassificationTable
                                           [(byte)(command_buffer[0x10] + 1)] & 0xe0) == 0)) {
                                        local_ec = (byte *)(command_buffer + 0x10);
                                        while ((g_CharacterClassificationTable
                                                [(byte)(*local_ec + 1)] & 2) != 0) {
                                          local_ec = local_ec + 1;
                                        }
                                        local_74 = -1;
                                        sscanf
                                                  ((char *)local_ec,"(%[^,], %f)%n",local_12e5 + 1,
                                                   &local_78);
                                        if (local_74 < 3) {
                                          _sprintf(g_EventErrorMessageBuffer,
                                                     "Error parsing setCameraAmbient parms");
                                          return 0;
                                        }
                                        local_ec = local_ec + local_74;
                                        uVar14 = 0xffffffff;
                                        pcVar18 = local_12e5 + 1;
                                        do {
                                          if (uVar14 == 0) break;
                                          uVar14 = uVar14 - 1;
                                          cVar1 = *pcVar18;
                                          pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                        } while (cVar1 != '\0');
                                        SVar16 = ~uVar14 - 1;
                                        if (0 < (int)SVar16) {
                                          pcVar18 = local_12e5 + ~uVar14;
                                          do {
                                            if ((g_CharacterClassificationTable
                                                 [(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                                            SVar16 = SVar16 - 1;
                                            pcVar18 = pcVar18 + -1;
                                          } while (0 < (int)SVar16);
                                        }
                                        (local_12e5 + 1)[SVar16] = '\0';
                                        while ((g_CharacterClassificationTable
                                                [(byte)(local_12e5[1] + 1)] & 2) != 0) {
                                          memmove
                                                    (local_12e5 + 1,local_12e5 + 2,SVar16);
                                          SVar16 = SVar16 - 1;
                                        }
                                        iVar2 = core_set_cpp_CDemonSet_findCameraByName_FUN_0056b790
                                                          (g_CDemonSetPtr,local_12e5 + 1);
                                        if (iVar2 < 0) {
                                          _sprintf(g_EventErrorMessageBuffer,
                                                     "Camera \"%s\" does not exist.");
                                          return 0;
                                        }
                                        if ((local_78 < 0.0) || (0x42c80000 < (int)local_78)) {
                                          _sprintf(g_EventErrorMessageBuffer,
                                                     "Ambient value %g is out of range (1..100)",
                                                     (double)local_78);
                                          return 0;
                                        }
                                        if (local_f0 != 0) {
                                          core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20
                                                    (g_CDemonSetPtr,iVar2,
                                                     local_78 * (float)0.01);
                                        }
                                      }
                                      else {
                                        iVar2 = _strnicmp
                                                          (command_buffer,"setCounter",10);
                                        if ((iVar2 == 0) &&
                                           ((g_CharacterClassificationTable
                                             [(byte)(command_buffer[10] + 1)] & 0xe0) == 0)) {
                                          local_ec = (byte *)(command_buffer + 10);
                                          while ((g_CharacterClassificationTable
                                                  [(byte)(*local_ec + 1)] & 2) != 0) {
                                            local_ec = local_ec + 1;
                                          }
                                          local_6c = -1;
                                          sscanf
                                                    ((char *)local_ec,"( %[^,)]%n",local_ca5 + 1);
                                          if (local_6c < 5) {
                                            _sprintf(g_EventErrorMessageBuffer,
                                                       "Error parsing setCounter arguments");
                                            return 0;
                                          }
                                          local_ec = local_ec + local_6c;
                                          uVar14 = 0xffffffff;
                                          pcVar18 = local_ca5 + 1;
                                          do {
                                            if (uVar14 == 0) break;
                                            uVar14 = uVar14 - 1;
                                            cVar1 = *pcVar18;
                                            pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                          } while (cVar1 != '\0');
                                          SVar16 = ~uVar14 - 1;
                                          if (0 < (int)SVar16) {
                                            pcVar18 = local_ca5 + ~uVar14;
                                            do {
                                              if ((g_CharacterClassificationTable
                                                   [(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                                              SVar16 = SVar16 - 1;
                                              pcVar18 = pcVar18 + -1;
                                            } while (0 < (int)SVar16);
                                          }
                                          (local_ca5 + 1)[SVar16] = '\0';
                                          while ((g_CharacterClassificationTable
                                                  [(byte)(local_ca5[1] + 1)] & 2) != 0) {
                                            memmove
                                                      (local_ca5 + 1,local_ca5 + 2,SVar16);
                                            SVar16 = SVar16 - 1;
                                          }
                                          local_68 = 0;
                                          if (*local_ec == 0x2c) {
                                            local_6c = -1;
                                            sscanf
                                                      ((char *)local_ec,",%d%n",&local_68);
                                            if (local_6c < 1) {
                                              _sprintf(g_EventErrorMessageBuffer,
                                                         "Error parsing setCounter value argument");
                                              return 0;
                                            }
                                            local_ec = local_ec + local_6c;
                                            while ((g_CharacterClassificationTable
                                                    [(byte)(*local_ec + 1)] & 2) != 0) {
                                              local_ec = local_ec + 1;
                                            }
                                          }
                                          if (*local_ec != 0x29) {
                                            _sprintf(g_EventErrorMessageBuffer,
                                                       "Error parsing setCounter arguments");
                                            return 0;
                                          }
                                          local_ec = local_ec + 1;
                                          if (local_f0 != 0) {
                                            core_event_cpp_CEventList_setCounter_FUN_004b0720
                                                      (this_ptr,local_ca5 + 1,local_68);
                                          }
                                        }
                                        else {
                                          iVar2 = _strnicmp
                                                            (command_buffer,
                                                             "setGroupAmbient",0xf);
                                          if ((iVar2 == 0) &&
                                             ((g_CharacterClassificationTable
                                               [(byte)(command_buffer[0xf] + 1)] & 0xe0) == 0)) {
                                            local_ec = (byte *)(command_buffer + 0xf);
                                            while ((g_CharacterClassificationTable
                                                    [(byte)(*local_ec + 1)] & 2) != 0) {
                                              local_ec = local_ec + 1;
                                            }
                                            local_5c = -1;
                                            sscanf
                                                      ((char *)local_ec,"(%d, %f)%n",&local_64,
                                                       &local_60);
                                            if (local_5c < 3) {
                                              _sprintf(g_EventErrorMessageBuffer,
                                                         "Error parsing setGroupAmbient parms");
                                              return 0;
                                            }
                                            local_ec = local_ec + local_5c;
                                            if ((local_60 < 0.0) || (0x42c80000 < (int)local_60)) {
                                              _sprintf(g_EventErrorMessageBuffer,
                                                         "Ambient value %g is out of range (1..100)",
                                                         (double)local_60);
                                              return 0;
                                            }
                                            if (local_f0 != 0) {
                                              core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00570e60
                                                        (g_CDemonSetPtr,local_64,
                                                         local_60 * (float)0.01);
                                            }
                                          }
                                          else {
                                            iVar2 = _strnicmp
                                                              (command_buffer,
                                                               "setLightFilterFrame",0x13);
                                            if ((iVar2 == 0) &&
                                               ((g_CharacterClassificationTable
                                                 [(byte)(command_buffer[0x13] + 1)] & 0xe0) == 0)) {
                                              local_ec = (byte *)(command_buffer + 0x13);
                                              while ((g_CharacterClassificationTable
                                                      [(byte)(*local_ec + 1)] & 2) != 0) {
                                                local_ec = local_ec + 1;
                                              }
                                              local_58 = -1;
                                              sscanf
                                                        ((char *)local_ec,"( %[^ ,] , %d )%n",local_7f4,
                                                         &local_54);
                                              if (local_58 < 0) {
                                                iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                                                                  (
                                                  "Error parsing setLightFilterFrame parms");
                                                return iVar2;
                                              }
                                              local_ec = local_ec + local_58;
                                              core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10
                                                        (g_CDemonSetPtr,local_7f4,&local_50,
                                                         &local_4c);
                                              if (local_50 == (C3DSLight *)0x0) {
                                                iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                                                                  (
                                                  "SpotLight %s doesn't exist.");
                                                return iVar2;
                                              }
                                              if ((local_54 < 0) ||
                                                 (local_50->filter_count <= local_54)) {
                                                iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0
                                                                  (
                                                  "Invalid filter frame, %s has %d filters",local_7f4,
                                                  local_50->filter_count);
                                                return iVar2;
                                              }
                                              if (local_f0 != 0) {
                                                if (local_4c == (CDemonLight *)0x0) {
                                                  g_CurrentFilename = "..\\core\\event.cpp";
                                                  g_CurrentLineNumber = 1248;
                                                  core_main_c_displayErrorAndQuit_FUN_00506f10
                                                            ("Can't find CDemonLight for light %s in setLightFilterFrame meta-command");
                                                }
                                                core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00586f00
                                                          (local_50,local_54,local_4c);
                                              }
                                            }
                                            else {
                                              iVar2 = _strnicmp
                                                                (command_buffer,
                                                                 "setLeverState",0xd);
                                              if ((iVar2 == 0) &&
                                                 ((g_CharacterClassificationTable
                                                   [(byte)(command_buffer[0xd] + 1)] & 0xe0) == 0))
                                              {
                                                local_ec = (byte *)(command_buffer + 0xd);
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(*local_ec + 1)] & 2) != 0) {
                                                  local_ec = local_ec + 1;
                                                }
                                                local_48 = -1;
                                                sscanf
                                                          ((char *)local_ec,"(%[^,], %[^)])%n",
                                                           local_d6d + 1,local_1475 + 1);
                                                if (local_48 < 5) {
                                                  _sprintf(g_EventErrorMessageBuffer,
                                                             "Error parsing setLeverState command parms");
                                                  return 0;
                                                }
                                                local_ec = local_ec + local_48;
                                                uVar14 = 0xffffffff;
                                                pcVar18 = local_d6d + 1;
                                                do {
                                                  if (uVar14 == 0) break;
                                                  uVar14 = uVar14 - 1;
                                                  cVar1 = *pcVar18;
                                                  pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                                } while (cVar1 != '\0');
                                                SVar16 = ~uVar14 - 1;
                                                if (0 < (int)SVar16) {
                                                  pcVar18 = local_d6d + ~uVar14;
                                                  do {
                                                    if ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                                                    SVar16 = SVar16 - 1;
                                                    pcVar18 = pcVar18 + -1;
                                                  } while (0 < (int)SVar16);
                                                }
                                                (local_d6d + 1)[SVar16] = '\0';
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(local_d6d[1] + 1)] & 2) != 0) {
                                                  memmove
                                                            (local_d6d + 1,local_d6d + 2,SVar16);
                                                  SVar16 = SVar16 - 1;
                                                }
                                                uVar14 = 0xffffffff;
                                                pcVar18 = local_1475 + 1;
                                                do {
                                                  if (uVar14 == 0) break;
                                                  uVar14 = uVar14 - 1;
                                                  cVar1 = *pcVar18;
                                                  pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                                } while (cVar1 != '\0');
                                                SVar16 = ~uVar14 - 1;
                                                if (0 < (int)SVar16) {
                                                  pcVar18 = local_1475 + ~uVar14;
                                                  do {
                                                    if ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[-1] + 1)] & 2) == 0) break;
                                                    SVar16 = SVar16 - 1;
                                                    pcVar18 = pcVar18 + -1;
                                                  } while (0 < (int)SVar16);
                                                }
                                                (local_1475 + 1)[SVar16] = '\0';
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(local_1475[1] + 1)] & 2) != 0) {
                                                  memmove
                                                            (local_1475 + 1,local_1475 + 2,SVar16);
                                                  SVar16 = SVar16 - 1;
                                                }
                                                this_ptr_02 = (CLever *)
                                                                                                                            
                                                  core_event_cpp_resolveActorByName_FUN_004aa400
                                                            (local_d6d + 1,
                                                             g_CLeverClassInfo.name_hash,
                                                             g_CLeverClassInfo.class_name);
                                                if (this_ptr_02 == (CLever *)0x0) {
                                                  return 0;
                                                }
                                                if ((this_ptr_02 == (CLever *)g_ActorNameSentinel)
                                                   || (local_f0 == 0)) {
                                                  pcVar18 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004add00
                                                            (this_ptr,local_1475 + 1);
                                                  if (pcVar18 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                }
                                                else {
                                                  iVar2 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_1475 + 1);
                                                  if (iVar2 == 0) {
                                                    uVar14 = 0;
                                                  }
                                                  else {
                                                    uVar14 = 0x3ff00000;
                                                  }
                                                  core_lever_cpp_CLever_setState_FUN_00504b20
                                                            (this_ptr_02,
                                                             (float)(double)((ulonglong)uVar14 <<
                                                                            0x20));
                                                }
                                              }
                                              else {
                                                iVar2 = _strnicmp
                                                                  (command_buffer,
                                                                   "setModelState",0xd);
                                                if ((iVar2 == 0) &&
                                                   ((g_CharacterClassificationTable
                                                     [(byte)(command_buffer[0xd] + 1)] & 0xe0) == 0)
                                                   ) {
                                                  local_ec = (byte *)(command_buffer + 0xd);
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_ec + 1)] & 2) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  local_40 = -1;
                                                  sscanf
                                                            ((char *)local_ec,"(%[^,], %[^)])%n",
                                                             local_985 + 1,local_8bd + 1);
                                                  if (local_40 < 5) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Error parsing setModelState command parms");
                                                    return 0;
                                                  }
                                                  local_ec = local_ec + local_40;
                                                  uVar14 = 0xffffffff;
                                                  pcVar18 = local_985 + 1;
                                                  do {
                                                    if (uVar14 == 0) break;
                                                    uVar14 = uVar14 - 1;
                                                    cVar1 = *pcVar18;
                                                    pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  SVar16 = ~uVar14 - 1;
                                                  if (0 < (int)SVar16) {
                                                    pcVar18 = local_985 + ~uVar14;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar18[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar16 = SVar16 - 1;
                                                      pcVar18 = pcVar18 + -1;
                                                    } while (0 < (int)SVar16);
                                                  }
                                                  (local_985 + 1)[SVar16] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_985[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_985 + 1,local_985 + 2,SVar16);
                                                    SVar16 = SVar16 - 1;
                                                  }
                                                  uVar14 = 0xffffffff;
                                                  pcVar18 = local_8bd + 1;
                                                  do {
                                                    if (uVar14 == 0) break;
                                                    uVar14 = uVar14 - 1;
                                                    cVar1 = *pcVar18;
                                                    pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  SVar16 = ~uVar14 - 1;
                                                  if (0 < (int)SVar16) {
                                                    pcVar18 = local_8bd + ~uVar14;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar18[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar16 = SVar16 - 1;
                                                      pcVar18 = pcVar18 + -1;
                                                    } while (0 < (int)SVar16);
                                                  }
                                                  (local_8bd + 1)[SVar16] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_8bd[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_8bd + 1,local_8bd + 2,SVar16);
                                                    SVar16 = SVar16 - 1;
                                                  }
                                                  pCVar4 = (CCharacter *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_004aa400
                                                            (local_985 + 1,
                                                             g_CCharacterClassInfo.name_hash,
                                                             g_CCharacterClassInfo.class_name);
                                                  if (pCVar4 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar4 != (CCharacter *)g_ActorNameSentinel) {
                                                    pcVar18 = local_8bd + 1;
                                                    iVar2 = 0;
                                                    pCVar10 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                                            (&(pCVar4->model).motion_controller);
                                                  iVar2 = 
                                                  core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                                                            (pCVar10,pcVar18,iVar2);
                                                  if (iVar2 < 0) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Model %s does not have state %s",
                                                               (pCVar4->model).model_name,
                                                               local_8bd + 1);
                                                    return 0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                                            (&(pCVar4->model).motion_controller,
                                                             iVar2,1);
                                                  }
                                                  }
                                                }
                                                else {
                                                  iVar2 = _strnicmp
                                                                    (command_buffer,
                                                                     "setTimer",8);
                                                  if ((iVar2 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(command_buffer[8] + 1)] & 0xe0) == 0)
                                                     ) {
                                                    local_ec = (byte *)(command_buffer + 8);
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(*local_ec + 1)] & 2) != 0) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                    local_38 = -1;
                                                    sscanf
                                                              ((char *)local_ec,"(%[^,], %f)%n",
                                                               local_a4d + 1,&local_3c);
                                                    if (local_38 < 3) {
                                                      _sprintf(g_EventErrorMessageBuffer,
                                                                 "Error parsing setTimer command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_ec = local_ec + local_38;
                                                    uVar14 = 0xffffffff;
                                                    pcVar18 = local_a4d + 1;
                                                    do {
                                                      if (uVar14 == 0) break;
                                                      uVar14 = uVar14 - 1;
                                                      cVar1 = *pcVar18;
                                                      pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    SVar16 = ~uVar14 - 1;
                                                    if (0 < (int)SVar16) {
                                                      pcVar18 = local_a4d + ~uVar14;
                                                      do {
                                                        if ((g_CharacterClassificationTable
                                                             [(byte)(pcVar18[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar16 = SVar16 - 1;
                                                        pcVar18 = pcVar18 + -1;
                                                      } while (0 < (int)SVar16);
                                                    }
                                                    (local_a4d + 1)[SVar16] = '\0';
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(local_a4d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_a4d + 1,local_a4d + 2,SVar16)
                                                      ;
                                                      SVar16 = SVar16 - 1;
                                                    }
                                                    uVar14 = 0xffffffff;
                                                    pcVar18 = local_a4d + 1;
                                                    do {
                                                      if (uVar14 == 0) break;
                                                      uVar14 = uVar14 - 1;
                                                      cVar1 = *pcVar18;
                                                      pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    if (0x1f < ~uVar14 - 1) {
                                                      _sprintf(g_EventErrorMessageBuffer,
                                                                 "Timer name \"%s\" is too long, (max %d chars)"
                                                                 ,local_a4d + 1,0x1f);
                                                      return 0;
                                                    }
                                                    if (local_3c < 0.0) {
                                                      _sprintf(g_EventErrorMessageBuffer,
                                                                 "Invalid timer duration");
                                                      return 0;
                                                    }
                                                    if (local_f0 != 0) {
                                                                                                            
                                                  core_event_cpp_CEventList_setTimerEvent_FUN_004b05a0
                                                            (this_ptr,local_a4d + 1,local_3c);
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = _strnicmp
                                                                      (command_buffer,
                                                                       "setWeather",10);
                                                    if ((iVar2 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[10] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_ec = (byte *)(command_buffer + 10);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_ec + 1)] & 2) != 0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_34 = -1;
                                                      sscanf
                                                                ((char *)local_ec,"(%[^)])%n",
                                                                 local_e35 + 1);
                                                      if (local_34 < 3) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return 0;
                                                  }
                                                  local_ec = local_ec + local_34;
                                                  uVar14 = 0xffffffff;
                                                  pcVar18 = local_e35 + 1;
                                                  do {
                                                    if (uVar14 == 0) break;
                                                    uVar14 = uVar14 - 1;
                                                    cVar1 = *pcVar18;
                                                    pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  SVar16 = ~uVar14 - 1;
                                                  if (0 < (int)SVar16) {
                                                    pcVar18 = local_e35 + ~uVar14;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar18[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar16 = SVar16 - 1;
                                                      pcVar18 = pcVar18 + -1;
                                                    } while (0 < (int)SVar16);
                                                  }
                                                  (local_e35 + 1)[SVar16] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_e35[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_e35 + 1,local_e35 + 2,SVar16);
                                                    SVar16 = SVar16 - 1;
                                                  }
                                                  iVar2 = _stricmp
                                                                    (local_e35 + 1,"none");
                                                  type = WEATHER_TYPE_NONE;
                                                  if (iVar2 != 0) {
                                                    iVar2 = _stricmp
                                                                      (local_e35 + 1,"rain"
                                                                      );
                                                    if (iVar2 == 0) {
                                                      type = WEATHER_TYPE_RAIN;
                                                    }
                                                    else {
                                                      iVar2 = _stricmp
                                                                        (local_e35 + 1,
                                                                         "snow");
                                                      if (iVar2 != 0) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                   "Invalid weather type: %s"
                                                                  );
                                                        return 0;
                                                      }
                                                      type = WEATHER_TYPE_SNOW;
                                                    }
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_weather_cpp_CWeather_setWeatherType_FUN_005ef8c0
                                                            (g_CWeatherPtr,type);
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = _strnicmp
                                                                      (command_buffer,
                                                                       "shakeScreen",0xb);
                                                    if ((iVar2 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0xb] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_ec = (byte *)(command_buffer + 0xb);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_ec + 1)] & 2) != 0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_24 = -1;
                                                      sscanf
                                                                ((char *)local_ec,
                                                                 "( %f, %f, %f, %f )%n",&local_30,
                                                                 &local_2c,&local_80,&local_28);
                                                      if (local_24 < 5) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing shakeScreen command parms");
                                                  return 0;
                                                  }
                                                  local_ec = local_ec + local_24;
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_initCameraShake_FUN_00570fa0
                                                            (g_CDemonSetPtr,local_30,local_2c,
                                                             local_80,local_28);
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = _strnicmp
                                                                      (command_buffer,
                                                                       "slamModelToMotion",
                                                                       0x11);
                                                    if ((iVar2 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0x11] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_ec = (byte *)(command_buffer + 0x11);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_ec + 1)] & 2) != 0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_20 = -1;
                                                      sscanf
                                                                ((char *)local_ec,"(%[^,], %[^)])%n",
                                                                 local_72d + 1,local_40d + 1);
                                                      if (local_20 < 5) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing slamModelToMotion command parms");
                                                  return 0;
                                                  }
                                                  local_ec = local_ec + local_20;
                                                  uVar14 = 0xffffffff;
                                                  pcVar18 = local_72d + 1;
                                                  do {
                                                    if (uVar14 == 0) break;
                                                    uVar14 = uVar14 - 1;
                                                    cVar1 = *pcVar18;
                                                    pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  SVar16 = ~uVar14 - 1;
                                                  if (0 < (int)SVar16) {
                                                    pcVar18 = local_72d + ~uVar14;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar18[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar16 = SVar16 - 1;
                                                      pcVar18 = pcVar18 + -1;
                                                    } while (0 < (int)SVar16);
                                                  }
                                                  (local_72d + 1)[SVar16] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_72d[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_72d + 1,local_72d + 2,SVar16);
                                                    SVar16 = SVar16 - 1;
                                                  }
                                                  uVar14 = 0xffffffff;
                                                  pcVar18 = local_40d + 1;
                                                  do {
                                                    if (uVar14 == 0) break;
                                                    uVar14 = uVar14 - 1;
                                                    cVar1 = *pcVar18;
                                                    pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  SVar16 = ~uVar14 - 1;
                                                  if (0 < (int)SVar16) {
                                                    pcVar18 = local_40d + ~uVar14;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar18[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar16 = SVar16 - 1;
                                                      pcVar18 = pcVar18 + -1;
                                                    } while (0 < (int)SVar16);
                                                  }
                                                  (local_40d + 1)[SVar16] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_40d[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_40d + 1,local_40d + 2,SVar16);
                                                    SVar16 = SVar16 - 1;
                                                  }
                                                  pCVar7 = (CHero *)
                                                  core_event_cpp_resolveActorByName_FUN_004aa400
                                                            (local_72d + 1,
                                                             g_CCharacterClassInfo.name_hash,
                                                             g_CCharacterClassInfo.class_name);
                                                  if (pCVar7 == (CHero *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != (CHero *)g_ActorNameSentinel) {
                                                    pcVar18 = local_40d + 1;
                                                    iVar2 = 0;
                                                    this_ptr_00 = &(pCVar7->base).model;
                                                    pCVar10 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                                            (&this_ptr_00->motion_controller);
                                                  iVar2 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                            (pCVar10,pcVar18,iVar2);
                                                  if (iVar2 < 0) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Model %s does not have motion %s",
                                                               (pCVar7->base).model.model_name,
                                                               local_40d + 1);
                                                    return 0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                                                            (&this_ptr_00->motion_controller,iVar2,
                                                             0.0);
                                                  iVar2 = 1;
                                                  pSVar11 = 
                                                  core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                                            (&this_ptr_00->motion_controller);
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                                            (&this_ptr_00->motion_controller,
                                                             pSVar11->state_index,iVar2);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = _strnicmp
                                                                      (command_buffer,
                                                                       "switchCamera",0xc);
                                                    if ((iVar2 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0xc] + 1)] & 0xe0)
                                                        == 0)) {
                                                      pbVar12 = (byte *)(command_buffer + 0xc);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*pbVar12 + 1)] & 2) != 0) {
                                                        pbVar12 = pbVar12 + 1;
                                                      }
                                                      local_1c = -1;
                                                      pcVar18 = g_DefaultCommandArg;
                                                      pcVar17 = local_344;
                                                      for (iVar2 = 0x19; iVar2 != 0;
                                                          iVar2 = iVar2 + -1) {
                                                        *(uint *)pcVar17 =
                                                             *(uint *)pcVar18;
                                                        pcVar18 = pcVar18 + ((uint)bVar20 * -2 + 1)
                                                                            * 4;
                                                        pcVar17 = pcVar17 + (uint)bVar20 * -8 + 4;
                                                      }
                                                      local_ec = pbVar12;
                                                      sscanf
                                                                ((char *)pbVar12," ( %[^ ,)]%n",
                                                                 local_344);
                                                      if (local_1c < 2) {
                                                        iVar2 = 
                                                  core_event_cpp_formatEventError_FUN_004aa2a0
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar2;
                                                  }
                                                  local_ec = local_ec + local_1c;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_ec + 1)] & 2) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  iVar2 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0056b790
                                                            (g_CDemonSetPtr,local_344);
                                                  if (iVar2 < 0) {
                                                    iVar2 = 
                                                  core_event_cpp_formatEventError_FUN_004aa2a0
                                                            ("Camera \"%s\" doesn't exist");
                                                  return iVar2;
                                                  }
                                                  local_70 = 3.0;
                                                  if (*local_ec == 0x2c) {
                                                    local_1c = -1;
                                                    sscanf
                                                              ((char *)local_ec,",%f%n",
                                                               &local_70);
                                                    if (local_1c < 2) {
                                                      iVar2 = 
                                                  core_event_cpp_formatEventError_FUN_004aa2a0
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar2;
                                                  }
                                                  local_ec = local_ec + local_1c;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_ec + 1)] & 2) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  }
                                                  if (*local_ec != 0x29) {
                                                    iVar2 = 
                                                  core_event_cpp_formatEventError_FUN_004aa2a0
                                                            ("Missing ')' in switchCamera() statement");
                                                  return iVar2;
                                                  }
                                                  local_ec = local_ec + 1;
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00
                                                            (g_CDemonSetPtr,iVar2,local_70);
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = _strnicmp
                                                                      (command_buffer,
                                                                       "warpTo",6);
                                                    if ((iVar2 != 0) ||
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[6] + 1)] & 0xe0) !=
                                                        0)) {
                                                      iVar2 = 
                                                  core_event_cpp_formatEventError_FUN_004aa2a0
                                                            ("Unknown meta-function starting at %s");
                                                  return iVar2;
                                                  }
                                                  local_ec = (byte *)(command_buffer + 6);
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_ec + 1)] & 2) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            ((char *)local_ec,"(%[^,], %[^)])%n",
                                                             local_bdd + 1,local_59d + 1);
                                                  if (local_18 < 5) {
                                                    iVar2 = 
                                                  core_event_cpp_formatEventError_FUN_004aa2a0
                                                            ("Error parsing warpTo command parms");
                                                  return iVar2;
                                                  }
                                                  uVar14 = 0xffffffff;
                                                  pcVar18 = local_bdd + 1;
                                                  do {
                                                    if (uVar14 == 0) break;
                                                    uVar14 = uVar14 - 1;
                                                    cVar1 = *pcVar18;
                                                    pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  SVar16 = ~uVar14 - 1;
                                                  if (0 < (int)SVar16) {
                                                    pcVar18 = local_bdd + ~uVar14;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar18[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar16 = SVar16 - 1;
                                                      pcVar18 = pcVar18 + -1;
                                                    } while (0 < (int)SVar16);
                                                  }
                                                  (local_bdd + 1)[SVar16] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_bdd[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_bdd + 1,local_bdd + 2,SVar16);
                                                    SVar16 = SVar16 - 1;
                                                  }
                                                  uVar14 = 0xffffffff;
                                                  pcVar18 = local_59d + 1;
                                                  do {
                                                    if (uVar14 == 0) break;
                                                    uVar14 = uVar14 - 1;
                                                    cVar1 = *pcVar18;
                                                    pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  SVar16 = ~uVar14 - 1;
                                                  if (0 < (int)SVar16) {
                                                    pcVar18 = local_59d + ~uVar14;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar18[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar16 = SVar16 - 1;
                                                      pcVar18 = pcVar18 + -1;
                                                    } while (0 < (int)SVar16);
                                                  }
                                                  (local_59d + 1)[SVar16] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_59d[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_59d + 1,local_59d + 2,SVar16);
                                                    SVar16 = SVar16 - 1;
                                                  }
                                                  local_ec = local_ec + local_18;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_ec + 1)] & 2) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  pCVar8 = 
                                                  core_event_cpp_resolveActorByName_FUN_004aa400
                                                            (local_bdd + 1,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             g_CDemonActorClassInfo.class_name);
                                                  if (pCVar8 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar8 == g_ActorNameSentinel) {
                                                    local_f0 = 0;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            (local_59d + 1,"%f,%f,%f,%f,%f,%f%n",
                                                             &local_11c,&local_11c.y,&local_11c.z,
                                                             &local_134,&local_134.z,&local_134.y);
                                                  if (local_18 < 0) {
                                                    if ((local_f0 != 0) &&
                                                       (&local_134 != (CVector3f *)&pCVar8->orient))
                                                    {
                                                      local_134.x = (pCVar8->orient).vec.x;
                                                      local_134.y = (pCVar8->orient).vec.y;
                                                      local_134.z = (pCVar8->orient).vec.z;
                                                    }
                                                    sscanf
                                                              (local_59d + 1,"%f,%f,%f,%f%n",
                                                               &local_11c,&local_11c.y,&local_11c.z,
                                                               &local_134.y);
                                                  }
                                                  if (local_18 < 0) {
                                                    if ((local_f0 != 0) &&
                                                       (&local_134 != (CVector3f *)&pCVar8->orient))
                                                    {
                                                      local_134.x = (pCVar8->orient).vec.x;
                                                      local_134.y = (pCVar8->orient).vec.y;
                                                      local_134.z = (pCVar8->orient).vec.z;
                                                    }
                                                    sscanf
                                                              (local_59d + 1,"%f,%f,%f%n",
                                                               &local_11c,&local_11c.y,&local_11c.z)
                                                    ;
                                                  }
                                                  if (local_18 < 0) {
                                                    pCVar13 = 
                                                  core_event_cpp_resolveActorByName_FUN_004aa400
                                                            (local_59d + 1,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             g_CDemonActorClassInfo.class_name);
                                                  if (pCVar13 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar13 == g_ActorNameSentinel) {
                                                    local_f0 = 0;
                                                  }
                                                  else {
                                                    if ((CLocation *)&local_11c !=
                                                        &pCVar13->location) {
                                                      local_11c.x = (pCVar13->location).position.x;
                                                      local_11c.y = (pCVar13->location).position.y;
                                                      local_11c.z = (pCVar13->location).position.z;
                                                    }
                                                    if (&local_134 != (CVector3f *)&pCVar13->orient)
                                                    {
                                                      local_134.x = (pCVar13->orient).vec.x;
                                                      local_134.y = (pCVar13->orient).vec.y;
                                                      local_134.z = (pCVar13->orient).vec.z;
                                                    }
                                                    uVar14 = 0xffffffff;
                                                    pcVar18 = local_59d + 1;
                                                    do {
                                                      if (uVar14 == 0) break;
                                                      uVar14 = uVar14 - 1;
                                                      cVar1 = *pcVar18;
                                                      pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    local_18 = ~uVar14 - 1;
                                                  }
                                                  }
                                                  if ((local_18 < 0) ||
                                                     (local_59d[local_18 + 1] != '\0')) {
                                                    iVar2 = 
                                                  core_event_cpp_formatEventError_FUN_004aa2a0
                                                            ("Error parsing warpTo command parms");
                                                  return iVar2;
                                                  }
                                                  if (local_f0 != 0) {
                                                    pCVar9 = (CCharacter *)
                                                                                                                          
                                                  core_actor_cpp_castToClassHash_FUN_0040c790
                                                            (pCVar8,g_CCharacterClassInfo.name_hash)
                                                  ;
                                                  if (pCVar9 != (CCharacter *)0x0) {
                                                    (*(((pCVar9->base).vtable._uc)->_uc).
                                                      releaseFromGrab)(pCVar9);
                                                    (*(((pCVar9->base).vtable._uc)->_uc).
                                                      releaseVictim)(pCVar9);
                                                  }
                                                  (*((pCVar8->vtable)._ub)->
                                                    setPositionAndOrientation)
                                                            (pCVar8,&local_11c,&local_134);
                                                  if (pCVar8 == g_CScriptPtr->focus_actor) {
                                                    g_CScriptPtr->focus_actor_changed = 1;
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
    while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
      local_ec = local_ec + 1;
    }
    if (*local_ec != 0) {
      iVar2 = core_event_cpp_formatEventError_FUN_004aa2a0("Extra characters found");
      return iVar2;
    }
  }
  return 1;
}
