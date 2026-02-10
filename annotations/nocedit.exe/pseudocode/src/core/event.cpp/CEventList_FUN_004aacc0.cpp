// Name: core_event.cpp_CEventList_FUN_004aacc0
// Address: 004aacc0
// Address Range: [[004aacc0, 004adc05]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_CEventList_FUN_004aacc0(CEventList *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CDemonActor * __cdecl core_event_cpp_CEventList_FUN_004aacc0(CEventList *this_ptr)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  CDeformableModelInstance *pCVar3;
  byte bVar4;
  char cVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  CDemonActor *pCVar9;
  char *pcVar10;
  CHero *pCVar11;
  CMotionList *pCVar12;
  SMotion *pSVar13;
  CCharacter *this_ptr_00;
  CHero *pCVar14;
  uint uVar15;
  uint uVar16;
  SIZE_T SVar17;
  byte *pbVar18;
  byte *pbVar19;
  int *piVar20;
  uint *puVar21;
  int *piVar22;
  char *pcVar23;
  uint *puVar24;
  byte bVar25;
  byte *in_stack_00000008;
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
  uint local_344 [24];
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
  CVector3f local_110;
  uint local_fc;
  uint uStack_f8;
  int *local_f4;
  uint local_f0;
  byte *local_ec;
  C3DSLight *local_e8;
  int local_e4;
  byte local_e0 [4];
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
  byte local_80 [4];
  int local_7c;
  float local_78;
  int local_74;
  float local_70;
  int local_6c;
  uint local_68;
  byte local_64 [4];
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
  byte local_30 [4];
  byte local_2c [4];
  byte local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar25 = 0;
  DAT_02d0a460 = 0;
  if (((in_stack_00000008 != (byte *)0x0) && (*in_stack_00000008 != 0)) &&
     (iVar7 = stricmp((char *)in_stack_00000008,"none"),
     iVar7 != 0)) {
    if (*in_stack_00000008 == 0x2e) {
      in_stack_00000008 = in_stack_00000008 + 1;
    }
    local_f0 = (uint)(DAT_02d0a45c == 0);
    local_ec = &DAT_0062460c;
    pbVar19 = in_stack_00000008;
    do {
      pbVar18 = pbVar19;
      if (*pbVar19 == 0x28) goto LAB_004aad41;
      if (*pbVar19 == 0) break;
      pbVar18 = pbVar19 + 1;
      if (*pbVar18 == 0x28) goto LAB_004aad41;
      pbVar19 = pbVar19 + 2;
    } while (*pbVar18 != 0);
    pbVar18 = (byte *)0x0;
LAB_004aad41:
    if (pbVar18 == (byte *)0x0) {
      iVar7 = 0;
      if (0 < this_ptr->event_count) {
        piVar22 = this_ptr->event_list;
        do {
          iVar8 = stricmp((char *)piVar22,(char *)in_stack_00000008);
          if (iVar8 == 0) {
            return (CDemonActor *)0x1;
          }
          iVar7 = iVar7 + 1;
          piVar22 = piVar22 + 8;
        } while (iVar7 < this_ptr->event_count);
      }
      uVar15 = 0xffffffff;
      pbVar19 = in_stack_00000008;
      do {
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        bVar4 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar25 * -2 + 1;
      } while (bVar4 != 0);
      if (0x1f < ~uVar15 - 1) {
        pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa2a0("Event name %s is too long");
        return pCVar9;
      }
      if (99 < this_ptr->event_count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 599;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many events");
      }
      piVar20 = this_ptr->event_list + this_ptr->event_count * 8;
      local_14 = 0;
      piVar22 = piVar20;
      do {
        bVar4 = *in_stack_00000008;
        *(byte *)piVar22 = bVar4;
        local_f4 = piVar20;
        if (bVar4 == 0) break;
        bVar4 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        *(byte *)((int)piVar22 + 1) = bVar4;
        piVar22 = (int *)((int)piVar22 + 2);
      } while (bVar4 != 0);
      do {
        uVar15 = local_14;
        uVar16 = 0xffffffff;
        piVar22 = local_f4;
        do {
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          iVar7 = *piVar22;
          piVar22 = (int *)((int)piVar22 + (uint)bVar25 * -2 + 1);
        } while ((byte)iVar7 != 0);
        if (~uVar16 - 1 <= local_14) {
          if (local_f0 == 0) {
            return (CDemonActor *)0x1;
          }
          this_ptr->event_count = this_ptr->event_count + 1;
          return (CDemonActor *)0x1;
        }
        iVar7 = toupper((uint)(byte)*piVar20);
        *(byte *)piVar20 = (byte)iVar7;
        iVar7 = core_event_cpp_FUN_004b0f90((uint)(byte)*piVar20);
        if (iVar7 == 0) {
          pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa2a0("Event name %s is not valid");
          return pCVar9;
        }
        local_14 = uVar15 + 1;
        piVar20 = (int *)((int)piVar20 + 1);
      } while( true );
    }
    iVar7 = strnicmp
                      ((char *)in_stack_00000008,"advanceLightFilter",0x12);
    if ((iVar7 == 0) &&
       ((g_CharacterClassificationTable[(byte)(in_stack_00000008[0x12] + 1)] & 0xe0) == 0)) {
      local_ec = in_stack_00000008 + 0x12;
      while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
        local_ec = local_ec + 1;
      }
      pcVar10 = core_event_cpp_FUN_004aa6c0((int *)&local_ec,local_fc4,200);
      if (pcVar10 != (char *)0x0) goto LAB_004aaf38;
      core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10(g_CDemonSetPtr);
      if (local_e8 == (C3DSLight *)0x0) {
        pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa2a0("SpotLight %s doesn't exist.");
        return pCVar9;
      }
      if (local_f0 != 0) {
        if (local_44 == (CDemonLight *)0x0) {
          g_CurrentFilename = "..\\core\\event.cpp";
          g_CurrentLineNumber = 0x27f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find CDemonLight for light %s in advanceLightFilter meta-command");
        }
        core_setutil_cpp_C3DSLight_advanceFilter_FUN_00586e70(local_e8,local_44);
      }
    }
    else {
      iVar7 = strnicmp
                        ((char *)in_stack_00000008,"createExplosion",0xf);
      if ((iVar7 == 0) &&
         ((g_CharacterClassificationTable[(byte)(in_stack_00000008[0xf] + 1)] & 0xe0) == 0)) {
        local_ec = in_stack_00000008 + 0xf;
        while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
          local_ec = local_ec + 1;
        }
        local_e4 = -1;
        sscanf((char *)local_ec,"( %f , %n",local_e0);
        if (local_e4 < 0) {
          pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa2a0("Error parsing createExplosion() parms");
          return pCVar9;
        }
        local_ec = local_ec + local_e4;
        local_e4 = -1;
        sscanf
                  ((char *)local_ec,"%f , %f , %f %n",&local_128,&local_124,&local_120);
        if ((local_e4 < 0) &&
           (sscanf((char *)local_ec," %[^,)] %n",local_4d5 + 1),
           -1 < local_e4)) {
          uVar15 = 0xffffffff;
          pcVar10 = local_4d5 + 1;
          do {
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            cVar5 = *pcVar10;
            pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
          } while (cVar5 != '\0');
          SVar17 = ~uVar15 - 1;
          if (0 < (int)SVar17) {
            pcVar10 = local_4d5 + ~uVar15;
            do {
              if ((g_CharacterClassificationTable[(byte)(pcVar10[-1] + 1)] & 2) == 0) break;
              SVar17 = SVar17 - 1;
              pcVar10 = pcVar10 + -1;
            } while (0 < (int)SVar17);
          }
          (local_4d5 + 1)[SVar17] = '\0';
          while ((g_CharacterClassificationTable[(byte)(local_4d5[1] + 1)] & 2) != 0) {
            memmove(local_4d5 + 1,local_4d5 + 2,SVar17);
            SVar17 = SVar17 - 1;
          }
          pCVar11 = core_event_cpp_FUN_004aa400
                              (local_4d5 + 1,g_CDemonActorClassInfo.name_hash,0x821ff8);
          if (pCVar11 == (CHero *)0x0) {
            return (CDemonActor *)0x0;
          }
          if (pCVar11 == 0x0FFFFFFF) {
            local_f0 = 0;
          }
          else {
            pCVar1 = &(pCVar11->base).base.location;
            if ((CLocation *)&local_128 != pCVar1) {
              local_128 = (pCVar1->position).x;
              local_124 = (pCVar11->base).base.location.position.y;
              local_120 = (pCVar11->base).base.location.position.z;
            }
          }
        }
        if (local_e4 < 0) {
          pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa2a0("Error parsing createExplosion() parms");
          return pCVar9;
        }
        local_ec = local_ec + local_e4;
        while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
          local_ec = local_ec + 1;
        }
        local_dc = 0x40800000;
        if (*local_ec == 0x2c) {
          local_e4 = -1;
          sscanf((char *)local_ec,", %f %n",&local_dc);
          if (local_e4 < 0) {
            pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa2a0("Error parsing createExplosion() parms")
            ;
            return pCVar9;
          }
          local_ec = local_ec + local_e4;
          while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
            local_ec = local_ec + 1;
          }
        }
        if (*local_ec != 0x29) {
          pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa2a0("Error parsing createExplosion() parms, expected matching ')'");
          return pCVar9;
        }
        local_ec = local_ec + 1;
        if (local_f0 != 0) {
          core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
        }
      }
      else {
        iVar7 = strnicmp
                          ((char *)in_stack_00000008,"deleteActor",0xb);
        if ((iVar7 == 0) &&
           ((g_CharacterClassificationTable[(byte)(in_stack_00000008[0xb] + 1)] & 0xe0) == 0)) {
          local_ec = in_stack_00000008 + 0xb;
          while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
            local_ec = local_ec + 1;
          }
          pcVar10 = core_event_cpp_FUN_004aa6c0((int *)&local_ec,local_1154,200);
          if (pcVar10 != (char *)0x0) goto LAB_004aaf38;
          pCVar11 = core_event_cpp_FUN_004aa400
                              (local_1154,g_CDemonActorClassInfo.name_hash,0x821ff8);
          uVar15 = g_CBoxActorClassInfo.name_hash;
          if (pCVar11 == (CHero *)0x0) {
            if (DAT_02d0a45c != 0) {
              return (CDemonActor *)0x0;
            }
            local_f0 = 0;
          }
          if ((pCVar11 != 0x0FFFFFFF) && (local_f0 != 0)) {
            (pCVar11->base).base.was_created = 2;
            pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c790((CDemonActor *)pCVar11,uVar15);
            if (pCVar9 != (CDemonActor *)0x0) {
              fVar6 = pCVar9[2].orient_matrix.m[1].y;
              *(byte *)&pCVar9[2].location.position.y = 0;
              sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)fVar6);
            }
            pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c790
                               ((CDemonActor *)pCVar11,g_CChainClassInfo.name_hash);
            if (pCVar9 != (CDemonActor *)0x0) {
              fVar6 = pCVar9[1].previous_transform_state.position.x;
              *(byte *)&pCVar9[1].orient_matrix.m[2].z = 0;
              pCVar9[1].create_event[0x4c] = '\0';
              sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)fVar6);
            }
          }
        }
        else {
          iVar7 = strnicmp
                            ((char *)in_stack_00000008,"displayBitmap",0xd);
          if ((iVar7 == 0) &&
             ((g_CharacterClassificationTable[(byte)(in_stack_00000008[0xd] + 1)] & 0xe0) == 0)) {
            local_ec = in_stack_00000008 + 0xd;
            while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
              local_ec = local_ec + 1;
            }
            local_d0 = -1;
            sscanf
                      ((char *)local_ec,"( %[^ ,], %d, %d )%n",&stack0xffffe9c4,&local_d8,&local_d4);
            if (local_d0 < 0) {
              pCVar9 = (CDemonActor *)
                       core_event_cpp_FUN_004aa2a0("Error parsing displayBitmap() parms");
              return pCVar9;
            }
            local_ec = local_ec + local_d0;
            while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
              local_ec = local_ec + 1;
            }
            iVar7 = engine_dosio_c_getFileSize_FUN_00481880("art",&stack0xffffe9c4);
            if (iVar7 < 0) {
              pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa2a0("Bitmap doesn't exist");
              return pCVar9;
            }
            if (iVar7 != local_d8 * local_d4) {
              pCVar9 = (CDemonActor *)
                       core_event_cpp_FUN_004aa2a0("Bitmap file size does not match specified dimensions");
              return pCVar9;
            }
            if (local_f0 != 0) {
              core_game_cpp_CGame_displayBitmap_FUN_004e2890(g_CGamePtr);
            }
          }
          else {
            iVar7 = strnicmp
                              ((char *)in_stack_00000008,"fadeAmbientSound",0x10);
            if ((iVar7 == 0) &&
               ((g_CharacterClassificationTable[(byte)(in_stack_00000008[0x10] + 1)] & 0xe0) == 0))
            {
              local_ec = in_stack_00000008 + 0x10;
              while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                local_ec = local_ec + 1;
              }
              local_c4 = -1;
              sscanf((char *)local_ec,"(%f, %f )%n",&local_cc,&local_c8)
              ;
              if (local_c4 < 0) {
                _sprintf(&DAT_02d0a460,"Error parsing fadeAmbientSound parms")
                ;
                return (CDemonActor *)0x0;
              }
              local_ec = local_ec + local_c4;
              if (local_f0 != 0) {
                core_sound_cpp_CSound_setVolumeFade_FUN_005b3dc0(g_CSoundPtr,local_cc,local_c8);
              }
            }
            else {
              iVar7 = strnicmp
                                ((char *)in_stack_00000008,"fadeSfx",7);
              if ((iVar7 == 0) &&
                 ((g_CharacterClassificationTable[(byte)(in_stack_00000008[7] + 1)] & 0xe0) == 0)) {
                local_ec = in_stack_00000008 + 7;
                while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                  local_ec = local_ec + 1;
                }
                local_b8 = -1;
                sscanf
                          ((char *)local_ec,"(%[^,], %f, %f )%n",local_108d + 1,&local_c0,&local_bc);
                if (local_b8 < 0) {
                  _sprintf
                            (&DAT_02d0a460,"Error parsing fadeSfx parms");
                  return (CDemonActor *)0x0;
                }
                local_ec = local_ec + local_b8;
                uVar15 = 0xffffffff;
                pcVar10 = local_108d + 1;
                do {
                  if (uVar15 == 0) break;
                  uVar15 = uVar15 - 1;
                  cVar5 = *pcVar10;
                  pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                } while (cVar5 != '\0');
                SVar17 = ~uVar15 - 1;
                if (0 < (int)SVar17) {
                  pcVar10 = local_108d + ~uVar15;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar10[-1] + 1)] & 2) == 0) break;
                    SVar17 = SVar17 - 1;
                    pcVar10 = pcVar10 + -1;
                  } while (0 < (int)SVar17);
                }
                (local_108d + 1)[SVar17] = '\0';
                while ((g_CharacterClassificationTable[(byte)(local_108d[1] + 1)] & 2) != 0) {
                  memmove(local_108d + 1,local_108d + 2,SVar17);
                  SVar17 = SVar17 - 1;
                }
                if (local_f0 != 0) {
                  uVar15 = core_event_cpp_CEventList_FUN_004b0c40(this_ptr);
                  if (local_bc <= 0.0) {
                    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(uVar15,local_c0);
                  }
                  else {
                    sound_sndmain_cpp_setSfxFade_FUN_005a9c70(uVar15,local_c0,local_bc,0);
                  }
                }
              }
              else {
                iVar7 = strnicmp
                                  ((char *)in_stack_00000008,"flagOn",6);
                if ((iVar7 == 0) &&
                   ((g_CharacterClassificationTable[(byte)(in_stack_00000008[6] + 1)] & 0xe0) == 0))
                {
                  local_ec = in_stack_00000008 + 6;
                  while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                    local_ec = local_ec + 1;
                  }
                  pcVar10 = core_event_cpp_FUN_004aa6c0((int *)&local_ec,local_194,0x20);
                  if (pcVar10 != (char *)0x0) {
LAB_004aaf38:
                    pcVar23 = &DAT_02d0a460;
                    do {
                      cVar5 = *pcVar10;
                      *pcVar23 = cVar5;
                      if (cVar5 == '\0') {
                        return (CDemonActor *)0x0;
                      }
                      cVar5 = pcVar10[1];
                      pcVar10 = pcVar10 + 2;
                      pcVar23[1] = cVar5;
                      pcVar23 = pcVar23 + 2;
                    } while (cVar5 != '\0');
                    return (CDemonActor *)0x0;
                  }
                  if (local_f0 != 0) {
                    core_event_cpp_CEventList_FUN_004b0330(this_ptr);
                  }
                }
                else {
                  iVar7 = strnicmp
                                    ((char *)in_stack_00000008,"flagOff",7);
                  if ((iVar7 == 0) &&
                     ((g_CharacterClassificationTable[(byte)(in_stack_00000008[7] + 1)] & 0xe0) == 0
                     )) {
                    local_ec = in_stack_00000008 + 7;
                    while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                      local_ec = local_ec + 1;
                    }
                    pcVar10 = core_event_cpp_FUN_004aa6c0((int *)&local_ec,local_174,0x20);
                    if (pcVar10 != (char *)0x0) goto LAB_004aaf38;
                    if (local_f0 != 0) {
                      core_event_cpp_CEventList_FUN_004b0330(this_ptr);
                    }
                  }
                  else {
                    iVar7 = strnicmp
                                      ((char *)in_stack_00000008,"gameFlagOn",10);
                    if ((iVar7 == 0) &&
                       ((g_CharacterClassificationTable[(byte)(in_stack_00000008[10] + 1)] & 0xe0)
                        == 0)) {
                      local_ec = in_stack_00000008 + 10;
                      while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                        local_ec = local_ec + 1;
                      }
                      pcVar10 = core_event_cpp_FUN_004aa6c0((int *)&local_ec,local_1b4,0x20);
                      if (pcVar10 != (char *)0x0) goto LAB_004aaf38;
                      if (local_f0 != 0) {
                        core_event_cpp_CEventList_FUN_004b0470(this_ptr);
                      }
                    }
                    else {
                      iVar7 = strnicmp
                                        ((char *)in_stack_00000008,"gameFlagOff",0xb);
                      if ((iVar7 == 0) &&
                         ((g_CharacterClassificationTable[(byte)(in_stack_00000008[0xb] + 1)] & 0xe0
                          ) == 0)) {
                        local_ec = in_stack_00000008 + 0xb;
                        while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                          local_ec = local_ec + 1;
                        }
                        pcVar10 = core_event_cpp_FUN_004aa6c0((int *)&local_ec,local_154,0x20);
                        if (pcVar10 != (char *)0x0) goto LAB_004aaf38;
                        if (local_f0 != 0) {
                          core_event_cpp_CEventList_FUN_004b0470(this_ptr);
                        }
                      }
                      else {
                        iVar7 = strnicmp
                                          ((char *)in_stack_00000008,"hurtCharacter",0xd);
                        if ((iVar7 == 0) &&
                           ((g_CharacterClassificationTable[(byte)(in_stack_00000008[0xd] + 1)] &
                            0xe0) == 0)) {
                          local_ec = in_stack_00000008 + 0xd;
                          while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                            local_ec = local_ec + 1;
                          }
                          local_b4 = -1;
                          sscanf
                                    ((char *)local_ec," ( %[^,], %[^,],%f)%n",local_665 + 1,local_2e1 + 1,
                                     &local_b0);
                          if (local_b4 < 2) {
                            pCVar9 = (CDemonActor *)
                                     core_event_cpp_FUN_004aa2a0
                                               ("Syntax error in killHero() parms");
                            return pCVar9;
                          }
                          uVar15 = 0xffffffff;
                          pcVar10 = local_665 + 1;
                          do {
                            if (uVar15 == 0) break;
                            uVar15 = uVar15 - 1;
                            cVar5 = *pcVar10;
                            pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                          } while (cVar5 != '\0');
                          SVar17 = ~uVar15 - 1;
                          if (0 < (int)SVar17) {
                            pcVar10 = local_665 + ~uVar15;
                            do {
                              if ((g_CharacterClassificationTable[(byte)(pcVar10[-1] + 1)] & 2) == 0
                                 ) break;
                              SVar17 = SVar17 - 1;
                              pcVar10 = pcVar10 + -1;
                            } while (0 < (int)SVar17);
                          }
                          (local_665 + 1)[SVar17] = '\0';
                          while ((g_CharacterClassificationTable[(byte)(local_665[1] + 1)] & 2) != 0
                                ) {
                            memmove(local_665 + 1,local_665 + 2,SVar17);
                            SVar17 = SVar17 - 1;
                          }
                          uVar15 = 0xffffffff;
                          pcVar10 = local_2e1 + 1;
                          do {
                            if (uVar15 == 0) break;
                            uVar15 = uVar15 - 1;
                            cVar5 = *pcVar10;
                            pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                          } while (cVar5 != '\0');
                          SVar17 = ~uVar15 - 1;
                          if (0 < (int)SVar17) {
                            pcVar10 = local_2e1 + ~uVar15;
                            do {
                              if ((g_CharacterClassificationTable[(byte)(pcVar10[-1] + 1)] & 2) == 0
                                 ) break;
                              SVar17 = SVar17 - 1;
                              pcVar10 = pcVar10 + -1;
                            } while (0 < (int)SVar17);
                          }
                          (local_2e1 + 1)[SVar17] = '\0';
                          while ((g_CharacterClassificationTable[(byte)(local_2e1[1] + 1)] & 2) != 0
                                ) {
                            memmove(local_2e1 + 1,local_2e1 + 2,SVar17);
                            SVar17 = SVar17 - 1;
                          }
                          local_ec = local_ec + local_b4;
                          while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0) {
                            local_ec = local_ec + 1;
                          }
                          pCVar11 = core_event_cpp_FUN_004aa400
                                              (local_665 + 1,g_CCharacterClassInfo.name_hash,
                                               0x823c14);
                          if (pCVar11 == (CHero *)0x0) {
                            return (CDemonActor *)0x0;
                          }
                          if (pCVar11 == 0x0FFFFFFF) {
                            local_f0 = (uint)pCVar11 ^ (uint)0x0FFFFFFF;
                          }
                          iVar7 = core_event_cpp_DifferentWaysToDie2_FUN_004aa960
                                            (local_2e1 + 1,&local_ac);
                          if (iVar7 == 0) {
                            pCVar9 = (CDemonActor *)
                                     core_event_cpp_FUN_004aa2a0
                                               ("Unknown damage type \"%s\" in hurtCharacter command.");
                            return pCVar9;
                          }
                          if (local_f0 != 0) {
                            (*(((pCVar11->base).base.vtable._uc)->_uc).applyDamage)
                                      (&pCVar11->base,local_ac,local_b0);
                          }
                        }
                        else {
                          iVar7 = strnicmp
                                            ((char *)in_stack_00000008,"incCounter",10);
                          if ((iVar7 == 0) &&
                             ((g_CharacterClassificationTable[(byte)(in_stack_00000008[10] + 1)] &
                              0xe0) == 0)) {
                            local_ec = in_stack_00000008 + 10;
                            while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) != 0)
                            {
                              local_ec = local_ec + 1;
                            }
                            local_a8 = -1;
                            sscanf
                                      ((char *)local_ec,"( %[^ )] )%n",local_121d + 1);
                            if (local_a8 < 5) {
                              _sprintf
                                        (&DAT_02d0a460,"Error parsing incCounter arguments");
                              return (CDemonActor *)0x0;
                            }
                            local_ec = local_ec + local_a8;
                            uVar15 = 0xffffffff;
                            pcVar10 = local_121d + 1;
                            do {
                              if (uVar15 == 0) break;
                              uVar15 = uVar15 - 1;
                              cVar5 = *pcVar10;
                              pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                            } while (cVar5 != '\0');
                            SVar17 = ~uVar15 - 1;
                            if (0 < (int)SVar17) {
                              pcVar10 = local_121d + ~uVar15;
                              do {
                                if ((g_CharacterClassificationTable[(byte)(pcVar10[-1] + 1)] & 2) ==
                                    0) break;
                                SVar17 = SVar17 - 1;
                                pcVar10 = pcVar10 + -1;
                              } while (0 < (int)SVar17);
                            }
                            (local_121d + 1)[SVar17] = '\0';
                            while ((g_CharacterClassificationTable[(byte)(local_121d[1] + 1)] & 2)
                                   != 0) {
                              memmove
                                        (local_121d + 1,local_121d + 2,SVar17);
                              SVar17 = SVar17 - 1;
                            }
                            if (local_f0 != 0) {
                              core_event_cpp_CEventList_FUN_004b0830(this_ptr);
                              core_event_cpp_CEventList_setCounter_FUN_004b0720(this_ptr);
                            }
                          }
                          else {
                            iVar7 = strnicmp
                                              ((char *)in_stack_00000008,"killCharacter",
                                               0xd);
                            if ((iVar7 == 0) &&
                               ((g_CharacterClassificationTable[(byte)(in_stack_00000008[0xd] + 1)]
                                & 0xe0) == 0)) {
                              local_ec = in_stack_00000008 + 0xd;
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
                                pCVar9 = (CDemonActor *)
                                         core_event_cpp_FUN_004aa2a0
                                                   ("Syntax error in killCharacter() parms");
                                return pCVar9;
                              }
                              uVar15 = 0xffffffff;
                              pcVar10 = local_153d + 1;
                              do {
                                if (uVar15 == 0) break;
                                uVar15 = uVar15 - 1;
                                cVar5 = *pcVar10;
                                pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                              } while (cVar5 != '\0');
                              SVar17 = ~uVar15 - 1;
                              if (0 < (int)SVar17) {
                                pcVar10 = local_153d + ~uVar15;
                                do {
                                  if ((g_CharacterClassificationTable[(byte)(pcVar10[-1] + 1)] & 2)
                                      == 0) break;
                                  SVar17 = SVar17 - 1;
                                  pcVar10 = pcVar10 + -1;
                                } while (0 < (int)SVar17);
                              }
                              (local_153d + 1)[SVar17] = '\0';
                              while ((g_CharacterClassificationTable[(byte)(local_153d[1] + 1)] & 2)
                                     != 0) {
                                memmove
                                          (local_153d + 1,local_153d + 2,SVar17);
                                SVar17 = SVar17 - 1;
                              }
                              uVar15 = 0xffffffff;
                              pcVar10 = local_219 + 1;
                              do {
                                if (uVar15 == 0) break;
                                uVar15 = uVar15 - 1;
                                cVar5 = *pcVar10;
                                pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                              } while (cVar5 != '\0');
                              SVar17 = ~uVar15 - 1;
                              if (0 < (int)SVar17) {
                                pcVar10 = local_219 + ~uVar15;
                                do {
                                  if ((g_CharacterClassificationTable[(byte)(pcVar10[-1] + 1)] & 2)
                                      == 0) break;
                                  SVar17 = SVar17 - 1;
                                  pcVar10 = pcVar10 + -1;
                                } while (0 < (int)SVar17);
                              }
                              (local_219 + 1)[SVar17] = '\0';
                              while ((g_CharacterClassificationTable[(byte)(local_219[1] + 1)] & 2)
                                     != 0) {
                                memmove
                                          (local_219 + 1,local_219 + 2,SVar17);
                                SVar17 = SVar17 - 1;
                              }
                              local_ec = local_ec + local_a4;
                              while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2) !=
                                     0) {
                                local_ec = local_ec + 1;
                              }
                              pCVar11 = core_event_cpp_FUN_004aa400
                                                  (local_153d + 1,g_CCharacterClassInfo.name_hash,
                                                   0x823c14);
                              if (pCVar11 == (CHero *)0x0) {
                                return (CDemonActor *)0x0;
                              }
                              if (pCVar11 == 0x0FFFFFFF) {
                                local_f0 = 0;
                              }
                              iVar7 = core_event_cpp_DifferentWaysToDie_FUN_004aa7d0
                                                (local_219 + 1,&local_98);
                              if (iVar7 == 0) {
                                pCVar9 = (CDemonActor *)
                                         core_event_cpp_FUN_004aa2a0
                                                   ("Unknown death type \"%s\" in killCharacter command.");
                                return pCVar9;
                              }
                              if (local_f0 != 0) {
                                (*(((pCVar11->base).base.vtable._uc)->_uc).kill)
                                          (&pCVar11->base,local_98,local_a0,local_9c);
                              }
                            }
                            else {
                              iVar7 = strnicmp
                                                ((char *)in_stack_00000008,"killHero",8);
                              if ((iVar7 == 0) &&
                                 ((g_CharacterClassificationTable[(byte)(in_stack_00000008[8] + 1)]
                                  & 0xe0) == 0)) {
                                local_ec = in_stack_00000008 + 8;
                                while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2)
                                       != 0) {
                                  local_ec = local_ec + 1;
                                }
                                if (g_CNetGamePtr->connection_type != 0) {
                                  pCVar9 = (CDemonActor *)
                                           core_event_cpp_FUN_004aa2a0
                                                     ("Can't use killHero command in multi-player");
                                  return pCVar9;
                                }
                                local_94 = -1;
                                sscanf
                                          ((char *)local_ec," ( %[^)])%n",local_27c);
                                if (local_94 < 2) {
                                  pCVar9 = (CDemonActor *)
                                           core_event_cpp_FUN_004aa2a0
                                                     ("Syntax error in killHero() parms");
                                  return pCVar9;
                                }
                                local_ec = local_ec + local_94;
                                while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2)
                                       != 0) {
                                  local_ec = local_ec + 1;
                                }
                                iVar7 = core_event_cpp_DifferentWaysToDie_FUN_004aa7d0
                                                  (local_27c,&local_90);
                                if (iVar7 == 0) {
                                  pCVar9 = (CDemonActor *)
                                           core_event_cpp_FUN_004aa2a0
                                                     ("Unknown death type \"%s\" in killHero command.");
                                  return pCVar9;
                                }
                                if ((local_f0 != 0) &&
                                   (pCVar11 = g_HeroActors[g_LocalHeroIndex],
                                   pCVar11 != (CHero *)0x0)) {
                                  (*(((pCVar11->base).base.vtable._uc)->_uc).kill)
                                            (&pCVar11->base,local_90,(CVector3f *)0x0,-1.0);
                                }
                              }
                              else {
                                iVar7 = strnicmp
                                                  ((char *)in_stack_00000008,"killSfx",7);
                                if ((iVar7 == 0) &&
                                   ((g_CharacterClassificationTable
                                     [(byte)(in_stack_00000008[7] + 1)] & 0xe0) == 0)) {
                                  local_ec = in_stack_00000008 + 7;
                                  while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] & 2)
                                         != 0) {
                                    local_ec = local_ec + 1;
                                  }
                                  local_8c = -1;
                                  sscanf
                                            ((char *)local_ec,"(%[^,)]%n",local_efd + 1);
                                  if (local_8c < 3) {
                                    _sprintf
                                              (&DAT_02d0a460,"Error parsing killSfx parms");
                                    return (CDemonActor *)0x0;
                                  }
                                  local_ec = local_ec + local_8c;
                                  uVar15 = 0xffffffff;
                                  pcVar10 = local_efd + 1;
                                  do {
                                    if (uVar15 == 0) break;
                                    uVar15 = uVar15 - 1;
                                    cVar5 = *pcVar10;
                                    pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                  } while (cVar5 != '\0');
                                  SVar17 = ~uVar15 - 1;
                                  if (0 < (int)SVar17) {
                                    pcVar10 = local_efd + ~uVar15;
                                    do {
                                      if ((g_CharacterClassificationTable[(byte)(pcVar10[-1] + 1)] &
                                          2) == 0) break;
                                      SVar17 = SVar17 - 1;
                                      pcVar10 = pcVar10 + -1;
                                    } while (0 < (int)SVar17);
                                  }
                                  (local_efd + 1)[SVar17] = '\0';
                                  while ((g_CharacterClassificationTable[(byte)(local_efd[1] + 1)] &
                                         2) != 0) {
                                    memmove
                                              (local_efd + 1,local_efd + 2,SVar17);
                                    SVar17 = SVar17 - 1;
                                  }
                                  local_88 = 0.0;
                                  if (*local_ec == 0x2c) {
                                    local_8c = -1;
                                    sscanf
                                              ((char *)local_ec,",%f%n",&local_88);
                                    if (local_8c < 3) {
                                      _sprintf
                                                (&DAT_02d0a460,"Error parsing killSfx parms");
                                      return (CDemonActor *)0x0;
                                    }
                                    local_ec = local_ec + local_8c;
                                  }
                                  do {
                                    pbVar19 = local_ec;
                                    local_ec = pbVar19 + 1;
                                  } while ((g_CharacterClassificationTable[(byte)(*pbVar19 + 1)] & 2
                                           ) != 0);
                                  if (*pbVar19 != 0x29) {
                                    local_ec = pbVar19;
                                    _sprintf
                                              (&DAT_02d0a460,"Can't find matching ) in killSfx command");
                                    return (CDemonActor *)0x0;
                                  }
                                  if (local_f0 != 0) {
                                    uVar15 = core_event_cpp_CEventList_FUN_004b0c40(this_ptr);
                                    if (local_88 <= 0.0) {
                                      sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar15);
                                      core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
                                    }
                                    else {
                                      sound_sndmain_cpp_setSfxFade_FUN_005a9c70
                                                (uVar15,0.0,local_88,1);
                                      core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
                                    }
                                  }
                                }
                                else {
                                  iVar7 = strnicmp
                                                    ((char *)in_stack_00000008,"lightning",
                                                     9);
                                  if ((iVar7 == 0) &&
                                     ((g_CharacterClassificationTable
                                       [(byte)(in_stack_00000008[9] + 1)] & 0xe0) == 0)) {
                                    local_ec = in_stack_00000008 + 9;
                                    while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)] &
                                           2) != 0) {
                                      local_ec = local_ec + 1;
                                    }
                                    local_84 = -1;
                                    sscanf((char *)local_ec,"( )%n");
                                    if (local_84 < 2) {
                                      _sprintf
                                                (&DAT_02d0a460,"Error parsing lightning command");
                                      return (CDemonActor *)0x0;
                                    }
                                    local_ec = local_ec + local_84;
                                    if (local_f0 != 0) {
                                      core_weather_cpp_CWeather_FUN_005eeeb0(g_CWeatherPtr);
                                    }
                                  }
                                  else {
                                    iVar7 = strnicmp
                                                      ((char *)in_stack_00000008,"playSfx",
                                                       7);
                                    if ((iVar7 == 0) &&
                                       ((g_CharacterClassificationTable
                                         [(byte)(in_stack_00000008[7] + 1)] & 0xe0) == 0)) {
                                      local_ec = in_stack_00000008 + 7;
                                      while ((g_CharacterClassificationTable[(byte)(*local_ec + 1)]
                                             & 2) != 0) {
                                        local_ec = local_ec + 1;
                                      }
                                      local_7c = -1;
                                      sscanf
                                                ((char *)local_ec,"(%[^,)]%n",local_13ad + 1);
                                      if (local_7c < 3) {
                                        _sprintf
                                                  (&DAT_02d0a460,"Error parsing playSfx parms"
                                                  );
                                        return (CDemonActor *)0x0;
                                      }
                                      local_ec = local_ec + local_7c;
                                      uVar15 = 0xffffffff;
                                      pcVar10 = local_13ad + 1;
                                      do {
                                        if (uVar15 == 0) break;
                                        uVar15 = uVar15 - 1;
                                        cVar5 = *pcVar10;
                                        pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                      } while (cVar5 != '\0');
                                      SVar17 = ~uVar15 - 1;
                                      if (0 < (int)SVar17) {
                                        pcVar10 = local_13ad + ~uVar15;
                                        do {
                                          if ((g_CharacterClassificationTable
                                               [(byte)(pcVar10[-1] + 1)] & 2) == 0) break;
                                          SVar17 = SVar17 - 1;
                                          pcVar10 = pcVar10 + -1;
                                        } while (0 < (int)SVar17);
                                      }
                                      (local_13ad + 1)[SVar17] = '\0';
                                      while (pbVar19 = local_ec,
                                            (g_CharacterClassificationTable
                                             [(byte)(local_13ad[1] + 1)] & 2) != 0) {
                                        memmove
                                                  (local_13ad + 1,local_13ad + 2,SVar17);
                                        SVar17 = SVar17 - 1;
                                      }
                                      puVar21 = &DAT_006793d8;
                                      pcVar10 = local_b15 + 1;
                                      for (iVar7 = 0x32; iVar7 != 0; iVar7 = iVar7 + -1) {
                                        *(uint *)pcVar10 = *puVar21;
                                        puVar21 = puVar21 + (uint)bVar25 * -2 + 1;
                                        pcVar10 = (char *)((int)pcVar10 +
                                                          ((uint)bVar25 * -2 + 1) * 4);
                                      }
                                      if (*pbVar19 == 0x2c) {
                                        local_7c = -1;
                                        sscanf
                                                  ((char *)local_ec,",%[^)]%n",local_b15 + 1);
                                        if (local_7c < 3) {
                                          _sprintf
                                                    (&DAT_02d0a460,
                                                     "Error parsing playSfx parms");
                                          return (CDemonActor *)0x0;
                                        }
                                        local_ec = local_ec + local_7c;
                                        uVar15 = 0xffffffff;
                                        pcVar10 = local_b15 + 1;
                                        do {
                                          if (uVar15 == 0) break;
                                          uVar15 = uVar15 - 1;
                                          cVar5 = *pcVar10;
                                          pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                        } while (cVar5 != '\0');
                                        SVar17 = ~uVar15 - 1;
                                        if (0 < (int)SVar17) {
                                          pcVar10 = local_b15 + ~uVar15;
                                          do {
                                            if ((g_CharacterClassificationTable
                                                 [(byte)(pcVar10[-1] + 1)] & 2) == 0) break;
                                            SVar17 = SVar17 - 1;
                                            pcVar10 = pcVar10 + -1;
                                          } while (0 < (int)SVar17);
                                        }
                                        (local_b15 + 1)[SVar17] = 0;
                                        while ((g_CharacterClassificationTable
                                                [(byte)(local_b15[1] + 1)] & 2) != 0) {
                                          memmove
                                                    (local_b15 + 1,local_b15 + 2,SVar17);
                                          SVar17 = SVar17 - 1;
                                        }
                                        uVar15 = 0xffffffff;
                                        pcVar10 = local_b15 + 1;
                                        do {
                                          if (uVar15 == 0) break;
                                          uVar15 = uVar15 - 1;
                                          cVar5 = *pcVar10;
                                          pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                        } while (cVar5 != '\0');
                                        if (0x13 < ~uVar15 - 1) {
                                          _sprintf
                                                    (&DAT_02d0a460,
                                                     "handle name %s is too long, max %d chars",
                                                     local_b15 + 1,0x13);
                                          return (CDemonActor *)0x0;
                                        }
                                      }
                                      do {
                                        pbVar19 = local_ec;
                                        local_ec = pbVar19 + 1;
                                      } while ((g_CharacterClassificationTable[(byte)(*pbVar19 + 1)]
                                               & 2) != 0);
                                      if (*pbVar19 != 0x29) {
                                        local_ec = pbVar19;
                                        _sprintf
                                                  (&DAT_02d0a460,"Can't find matching ) in playSfx command"
                                                  );
                                        return (CDemonActor *)0x0;
                                      }
                                      if (local_f0 != 0) {
                                        iVar7 = strnicmp
                                                          (local_13ad + 1,"cue",3);
                                        if (iVar7 == 0) {
                                          iVar7 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0
                                                            (1);
                                          if (iVar7 != 0) {
                                            sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
                                            sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(1);
                                            core_sound_cpp_CSound_playSound_FUN_005b3a20
                                                      (g_CSoundPtr,this_ptr,local_13ad + 1);
                                            sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
                                            if (local_b15[1] != '\0') {
                                              core_event_cpp_CEventList_setSfxHandle_FUN_004b0c80
                                                        (this_ptr);
                                            }
                                          }
                                        }
                                        else {
                                          core_sound_cpp_CSound_playSound_FUN_005b3a20
                                                    (g_CSoundPtr,this_ptr,local_13ad + 1);
                                          if (local_b15[1] != '\0') {
                                            core_event_cpp_CEventList_setSfxHandle_FUN_004b0c80
                                                      (this_ptr);
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      iVar7 = strnicmp
                                                        ((char *)in_stack_00000008,
                                                         "setCameraAmbient",0x10);
                                      if ((iVar7 == 0) &&
                                         ((g_CharacterClassificationTable
                                           [(byte)(in_stack_00000008[0x10] + 1)] & 0xe0) == 0)) {
                                        local_ec = in_stack_00000008 + 0x10;
                                        while ((g_CharacterClassificationTable
                                                [(byte)(*local_ec + 1)] & 2) != 0) {
                                          local_ec = local_ec + 1;
                                        }
                                        local_74 = -1;
                                        sscanf
                                                  ((char *)local_ec,"(%[^,], %f)%n",local_12e5 + 1,
                                                   &local_78);
                                        if (local_74 < 3) {
                                          _sprintf
                                                    (&DAT_02d0a460,
                                                     "Error parsing setCameraAmbient parms");
                                          return (CDemonActor *)0x0;
                                        }
                                        local_ec = local_ec + local_74;
                                        uVar15 = 0xffffffff;
                                        pcVar10 = local_12e5 + 1;
                                        do {
                                          if (uVar15 == 0) break;
                                          uVar15 = uVar15 - 1;
                                          cVar5 = *pcVar10;
                                          pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                        } while (cVar5 != '\0');
                                        SVar17 = ~uVar15 - 1;
                                        if (0 < (int)SVar17) {
                                          pcVar10 = local_12e5 + ~uVar15;
                                          do {
                                            if ((g_CharacterClassificationTable
                                                 [(byte)(pcVar10[-1] + 1)] & 2) == 0) break;
                                            SVar17 = SVar17 - 1;
                                            pcVar10 = pcVar10 + -1;
                                          } while (0 < (int)SVar17);
                                        }
                                        (local_12e5 + 1)[SVar17] = '\0';
                                        while ((g_CharacterClassificationTable
                                                [(byte)(local_12e5[1] + 1)] & 2) != 0) {
                                          memmove
                                                    (local_12e5 + 1,local_12e5 + 2,SVar17);
                                          SVar17 = SVar17 - 1;
                                        }
                                        iVar7 = core_set_cpp_CDemonSet_FUN_0056b790(g_CDemonSetPtr);
                                        if (iVar7 < 0) {
                                          _sprintf
                                                    (&DAT_02d0a460,
                                                     "Camera \"%s\" does not exist.");
                                          return (CDemonActor *)0x0;
                                        }
                                        if ((local_78 < 0.0) || (0x42c80000 < (int)local_78)) {
                                          _sprintf
                                                    (&DAT_02d0a460,
                                                     "Ambient value %g is out of range (1..100)",
                                                     (double)local_78);
                                          return (CDemonActor *)0x0;
                                        }
                                        if (local_f0 != 0) {
                                          core_set_cpp_CDemonSet_FUN_00570e20(g_CDemonSetPtr);
                                        }
                                      }
                                      else {
                                        iVar7 = strnicmp
                                                          ((char *)in_stack_00000008,
                                                           "setCounter",10);
                                        if ((iVar7 == 0) &&
                                           ((g_CharacterClassificationTable
                                             [(byte)(in_stack_00000008[10] + 1)] & 0xe0) == 0)) {
                                          local_ec = in_stack_00000008 + 10;
                                          while ((g_CharacterClassificationTable
                                                  [(byte)(*local_ec + 1)] & 2) != 0) {
                                            local_ec = local_ec + 1;
                                          }
                                          local_6c = -1;
                                          sscanf
                                                    ((char *)local_ec,"( %[^,)]%n",local_ca5 + 1);
                                          if (local_6c < 5) {
                                            _sprintf
                                                      (&DAT_02d0a460,
                                                       "Error parsing setCounter arguments");
                                            return (CDemonActor *)0x0;
                                          }
                                          local_ec = local_ec + local_6c;
                                          uVar15 = 0xffffffff;
                                          pcVar10 = local_ca5 + 1;
                                          do {
                                            if (uVar15 == 0) break;
                                            uVar15 = uVar15 - 1;
                                            cVar5 = *pcVar10;
                                            pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                          } while (cVar5 != '\0');
                                          SVar17 = ~uVar15 - 1;
                                          if (0 < (int)SVar17) {
                                            pcVar10 = local_ca5 + ~uVar15;
                                            do {
                                              if ((g_CharacterClassificationTable
                                                   [(byte)(pcVar10[-1] + 1)] & 2) == 0) break;
                                              SVar17 = SVar17 - 1;
                                              pcVar10 = pcVar10 + -1;
                                            } while (0 < (int)SVar17);
                                          }
                                          (local_ca5 + 1)[SVar17] = '\0';
                                          while ((g_CharacterClassificationTable
                                                  [(byte)(local_ca5[1] + 1)] & 2) != 0) {
                                            memmove
                                                      (local_ca5 + 1,local_ca5 + 2,SVar17);
                                            SVar17 = SVar17 - 1;
                                          }
                                          local_68 = 0;
                                          if (*local_ec == 0x2c) {
                                            local_6c = -1;
                                            sscanf
                                                      ((char *)local_ec,",%d%n",&local_68);
                                            if (local_6c < 1) {
                                              _sprintf
                                                        (&DAT_02d0a460,
                                                         "Error parsing setCounter value argument");
                                              return (CDemonActor *)0x0;
                                            }
                                            local_ec = local_ec + local_6c;
                                            while ((g_CharacterClassificationTable
                                                    [(byte)(*local_ec + 1)] & 2) != 0) {
                                              local_ec = local_ec + 1;
                                            }
                                          }
                                          if (*local_ec != 0x29) {
                                            _sprintf
                                                      (&DAT_02d0a460,
                                                       "Error parsing setCounter arguments");
                                            return (CDemonActor *)0x0;
                                          }
                                          local_ec = local_ec + 1;
                                          if (local_f0 != 0) {
                                            core_event_cpp_CEventList_setCounter_FUN_004b0720
                                                      (this_ptr);
                                          }
                                        }
                                        else {
                                          iVar7 = strnicmp
                                                            ((char *)in_stack_00000008,
                                                             "setGroupAmbient",0xf);
                                          if ((iVar7 == 0) &&
                                             ((g_CharacterClassificationTable
                                               [(byte)(in_stack_00000008[0xf] + 1)] & 0xe0) == 0)) {
                                            local_ec = in_stack_00000008 + 0xf;
                                            while ((g_CharacterClassificationTable
                                                    [(byte)(*local_ec + 1)] & 2) != 0) {
                                              local_ec = local_ec + 1;
                                            }
                                            local_5c = -1;
                                            sscanf
                                                      ((char *)local_ec,"(%d, %f)%n",local_64,
                                                       &local_60);
                                            if (local_5c < 3) {
                                              _sprintf
                                                        (&DAT_02d0a460,
                                                         "Error parsing setGroupAmbient parms");
                                              return (CDemonActor *)0x0;
                                            }
                                            local_ec = local_ec + local_5c;
                                            if ((local_60 < 0.0) || (0x42c80000 < (int)local_60)) {
                                              _sprintf
                                                        (&DAT_02d0a460,
                                                         "Ambient value %g is out of range (1..100)",
                                                         (double)local_60);
                                              return (CDemonActor *)0x0;
                                            }
                                            if (local_f0 != 0) {
                                              core_set_cpp_CDemonSet_FUN_00570e60(g_CDemonSetPtr);
                                            }
                                          }
                                          else {
                                            iVar7 = strnicmp
                                                              ((char *)in_stack_00000008,
                                                               "setLightFilterFrame",0x13);
                                            if ((iVar7 == 0) &&
                                               ((g_CharacterClassificationTable
                                                 [(byte)(in_stack_00000008[0x13] + 1)] & 0xe0) == 0)
                                               ) {
                                              local_ec = in_stack_00000008 + 0x13;
                                              while ((g_CharacterClassificationTable
                                                      [(byte)(*local_ec + 1)] & 2) != 0) {
                                                local_ec = local_ec + 1;
                                              }
                                              local_58 = -1;
                                              sscanf
                                                        ((char *)local_ec,"( %[^ ,] , %d )%n",local_7f4,
                                                         &local_54);
                                              if (local_58 < 0) {
                                                pCVar9 = (CDemonActor *)
                                                         core_event_cpp_FUN_004aa2a0
                                                                   (
                                                  "Error parsing setLightFilterFrame parms");
                                                return pCVar9;
                                              }
                                              local_ec = local_ec + local_58;
                                              core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10
                                                        (g_CDemonSetPtr);
                                              if (local_50 == (C3DSLight *)0x0) {
                                                pCVar9 = (CDemonActor *)
                                                         core_event_cpp_FUN_004aa2a0
                                                                   (
                                                  "SpotLight %s doesn't exist.");
                                                return pCVar9;
                                              }
                                              if ((local_54 < 0) ||
                                                 (local_50->filter_count <= local_54)) {
                                                pCVar9 = (CDemonActor *)
                                                         core_event_cpp_FUN_004aa2a0
                                                                   (
                                                  "Invalid filter frame, %s has %d filters");
                                                return pCVar9;
                                              }
                                              if (local_f0 != 0) {
                                                if (local_4c == (CDemonLight *)0x0) {
                                                  g_CurrentFilename = "..\\core\\event.cpp";
                                                  g_CurrentLineNumber = 0x4e0;
                                                  core_main_c_displayErrorAndQuit_FUN_00506f10
                                                            ("Can't find CDemonLight for light %s in setLightFilterFrame meta-command");
                                                }
                                                core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00586f00
                                                          (local_50,local_54,local_4c);
                                              }
                                            }
                                            else {
                                              iVar7 = strnicmp
                                                                ((char *)in_stack_00000008,
                                                                 "setLeverState",0xd);
                                              if ((iVar7 == 0) &&
                                                 ((g_CharacterClassificationTable
                                                   [(byte)(in_stack_00000008[0xd] + 1)] & 0xe0) == 0
                                                 )) {
                                                local_ec = in_stack_00000008 + 0xd;
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(*local_ec + 1)] & 2) != 0) {
                                                  local_ec = local_ec + 1;
                                                }
                                                local_48 = -1;
                                                sscanf
                                                          ((char *)local_ec,"(%[^,], %[^)])%n",
                                                           local_d6d + 1,local_1475 + 1);
                                                if (local_48 < 5) {
                                                  _sprintf
                                                            (&DAT_02d0a460,
                                                             "Error parsing setLeverState command parms");
                                                  return (CDemonActor *)0x0;
                                                }
                                                local_ec = local_ec + local_48;
                                                uVar15 = 0xffffffff;
                                                pcVar10 = local_d6d + 1;
                                                do {
                                                  if (uVar15 == 0) break;
                                                  uVar15 = uVar15 - 1;
                                                  cVar5 = *pcVar10;
                                                  pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                                } while (cVar5 != '\0');
                                                SVar17 = ~uVar15 - 1;
                                                if (0 < (int)SVar17) {
                                                  pcVar10 = local_d6d + ~uVar15;
                                                  do {
                                                    if ((g_CharacterClassificationTable
                                                         [(byte)(pcVar10[-1] + 1)] & 2) == 0) break;
                                                    SVar17 = SVar17 - 1;
                                                    pcVar10 = pcVar10 + -1;
                                                  } while (0 < (int)SVar17);
                                                }
                                                (local_d6d + 1)[SVar17] = '\0';
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(local_d6d[1] + 1)] & 2) != 0) {
                                                  memmove
                                                            (local_d6d + 1,local_d6d + 2,SVar17);
                                                  SVar17 = SVar17 - 1;
                                                }
                                                uVar15 = 0xffffffff;
                                                pcVar10 = local_1475 + 1;
                                                do {
                                                  if (uVar15 == 0) break;
                                                  uVar15 = uVar15 - 1;
                                                  cVar5 = *pcVar10;
                                                  pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                                } while (cVar5 != '\0');
                                                SVar17 = ~uVar15 - 1;
                                                if (0 < (int)SVar17) {
                                                  pcVar10 = local_1475 + ~uVar15;
                                                  do {
                                                    if ((g_CharacterClassificationTable
                                                         [(byte)(pcVar10[-1] + 1)] & 2) == 0) break;
                                                    SVar17 = SVar17 - 1;
                                                    pcVar10 = pcVar10 + -1;
                                                  } while (0 < (int)SVar17);
                                                }
                                                (local_1475 + 1)[SVar17] = '\0';
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(local_1475[1] + 1)] & 2) != 0) {
                                                  memmove
                                                            (local_1475 + 1,local_1475 + 2,SVar17);
                                                  SVar17 = SVar17 - 1;
                                                }
                                                pCVar11 = core_event_cpp_FUN_004aa400
                                                                    (local_d6d + 1,
                                                                     g_CLeverClassInfo.name_hash,
                                                                     0x2dd3058);
                                                if (pCVar11 == (CHero *)0x0) {
                                                  return (CDemonActor *)0x0;
                                                }
                                                if ((pCVar11 == 0x0FFFFFFF) || (local_f0 == 0)) {
                                                  iVar7 = core_event_cpp_CEventList_FUN_004add00
                                                                    (this_ptr);
                                                  if (iVar7 != 0) {
                                                    return (CDemonActor *)0x0;
                                                  }
                                                }
                                                else {
                                                  iVar7 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_1475 + 1);
                                                  if (iVar7 == 0) {
                                                    uStack_f8 = 0;
                                                  }
                                                  else {
                                                    uStack_f8 = 0x3ff00000;
                                                  }
                                                  local_fc = 0;
                                                  core_lever_cpp_CLever_FUN_00504b20
                                                            ((CLever *)pCVar11);
                                                }
                                              }
                                              else {
                                                iVar7 = strnicmp
                                                                  ((char *)in_stack_00000008,
                                                                   "setModelState",0xd);
                                                if ((iVar7 == 0) &&
                                                   ((g_CharacterClassificationTable
                                                     [(byte)(in_stack_00000008[0xd] + 1)] & 0xe0) ==
                                                    0)) {
                                                  local_ec = in_stack_00000008 + 0xd;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_ec + 1)] & 2) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  local_40 = -1;
                                                  sscanf
                                                            ((char *)local_ec,"(%[^,], %[^)])%n",
                                                             local_985 + 1,local_8bd + 1);
                                                  if (local_40 < 5) {
                                                    _sprintf
                                                              (&DAT_02d0a460,
                                                               "Error parsing setModelState command parms");
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  local_ec = local_ec + local_40;
                                                  uVar15 = 0xffffffff;
                                                  pcVar10 = local_985 + 1;
                                                  do {
                                                    if (uVar15 == 0) break;
                                                    uVar15 = uVar15 - 1;
                                                    cVar5 = *pcVar10;
                                                    pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                                  } while (cVar5 != '\0');
                                                  SVar17 = ~uVar15 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar10 = local_985 + ~uVar15;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar10[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar10 = pcVar10 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_985 + 1)[SVar17] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_985[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_985 + 1,local_985 + 2,SVar17);
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  uVar15 = 0xffffffff;
                                                  pcVar10 = local_8bd + 1;
                                                  do {
                                                    if (uVar15 == 0) break;
                                                    uVar15 = uVar15 - 1;
                                                    cVar5 = *pcVar10;
                                                    pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                                  } while (cVar5 != '\0');
                                                  SVar17 = ~uVar15 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar10 = local_8bd + ~uVar15;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar10[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar10 = pcVar10 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_8bd + 1)[SVar17] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_8bd[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_8bd + 1,local_8bd + 2,SVar17);
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  pCVar11 = core_event_cpp_FUN_004aa400
                                                                      (local_985 + 1,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,0x823c14);
                                                  if (pCVar11 == (CHero *)0x0) {
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (pCVar11 != 0x0FFFFFFF) {
                                                    pCVar3 = &(pCVar11->base).model;
                                                    pCVar12 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                                            (&pCVar3->motion_controller);
                                                  iVar7 = 
                                                  core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                                                            (pCVar12);
                                                  if (iVar7 < 0) {
                                                    _sprintf
                                                              (&DAT_02d0a460,
                                                               "Model %s does not have state %s",
                                                               (pCVar11->base).model.model_name,
                                                               local_8bd + 1);
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                                            (&pCVar3->motion_controller,iVar7,1);
                                                  }
                                                  }
                                                }
                                                else {
                                                  iVar7 = strnicmp
                                                                    ((char *)in_stack_00000008,
                                                                     "setTimer",8);
                                                  if ((iVar7 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(in_stack_00000008[8] + 1)] & 0xe0) ==
                                                      0)) {
                                                    local_ec = in_stack_00000008 + 8;
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(*local_ec + 1)] & 2) != 0) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                    local_38 = -1;
                                                    sscanf
                                                              ((char *)local_ec,"(%[^,], %f)%n",
                                                               local_a4d + 1,&local_3c);
                                                    if (local_38 < 3) {
                                                      _sprintf
                                                                (&DAT_02d0a460,
                                                                 "Error parsing setTimer command parms"
                                                                );
                                                      return (CDemonActor *)0x0;
                                                    }
                                                    local_ec = local_ec + local_38;
                                                    uVar15 = 0xffffffff;
                                                    pcVar10 = local_a4d + 1;
                                                    do {
                                                      if (uVar15 == 0) break;
                                                      uVar15 = uVar15 - 1;
                                                      cVar5 = *pcVar10;
                                                      pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                                    } while (cVar5 != '\0');
                                                    SVar17 = ~uVar15 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar10 = local_a4d + ~uVar15;
                                                      do {
                                                        if ((g_CharacterClassificationTable
                                                             [(byte)(pcVar10[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar10 = pcVar10 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_a4d + 1)[SVar17] = '\0';
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(local_a4d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_a4d + 1,local_a4d + 2,SVar17)
                                                      ;
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    uVar15 = 0xffffffff;
                                                    pcVar10 = local_a4d + 1;
                                                    do {
                                                      if (uVar15 == 0) break;
                                                      uVar15 = uVar15 - 1;
                                                      cVar5 = *pcVar10;
                                                      pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                                    } while (cVar5 != '\0');
                                                    if (0x1f < ~uVar15 - 1) {
                                                      _sprintf
                                                                (&DAT_02d0a460,
                                                                 "Timer name \"%s\" is too long, (max %d chars)"
                                                                 ,local_a4d + 1,0x1f);
                                                      return (CDemonActor *)0x0;
                                                    }
                                                    if (local_3c < 0.0) {
                                                      _sprintf
                                                                (&DAT_02d0a460,
                                                                 "Invalid timer duration");
                                                      return (CDemonActor *)0x0;
                                                    }
                                                    if (local_f0 != 0) {
                                                                                                            
                                                  core_event_cpp_CEventList_setTimerEvent_FUN_004b05a0
                                                            (this_ptr);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = strnicmp
                                                                      ((char *)in_stack_00000008,
                                                                       "setWeather",10);
                                                    if ((iVar7 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(in_stack_00000008[10] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_ec = in_stack_00000008 + 10;
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_ec + 1)] & 2) != 0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_34 = -1;
                                                      sscanf
                                                                ((char *)local_ec,"(%[^)])%n",
                                                                 local_e35 + 1);
                                                      if (local_34 < 3) {
                                                        _sprintf
                                                                  (&DAT_02d0a460,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return (CDemonActor *)0x0;
                                                  }
                                                  local_ec = local_ec + local_34;
                                                  uVar15 = 0xffffffff;
                                                  pcVar10 = local_e35 + 1;
                                                  do {
                                                    if (uVar15 == 0) break;
                                                    uVar15 = uVar15 - 1;
                                                    cVar5 = *pcVar10;
                                                    pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                                  } while (cVar5 != '\0');
                                                  SVar17 = ~uVar15 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar10 = local_e35 + ~uVar15;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar10[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar10 = pcVar10 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_e35 + 1)[SVar17] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_e35[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_e35 + 1,local_e35 + 2,SVar17);
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  iVar7 = stricmp
                                                                    (local_e35 + 1,"none");
                                                  if (((iVar7 != 0) &&
                                                      (iVar7 = stricmp
                                                                         (local_e35 + 1,
                                                                          "rain"),
                                                      iVar7 != 0)) &&
                                                     (iVar7 = stricmp
                                                                        (local_e35 + 1,
                                                                         "snow"),
                                                     iVar7 != 0)) {
                                                    _sprintf
                                                              (&DAT_02d0a460,
                                                               "Invalid weather type: %s");
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (local_f0 != 0) {
                                                    core_weather_cpp_CWeather_FUN_005ef8c0
                                                              (g_CWeatherPtr);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = strnicmp
                                                                      ((char *)in_stack_00000008,
                                                                       "shakeScreen",0xb);
                                                    if ((iVar7 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(in_stack_00000008[0xb] + 1)] & 0xe0
                                                        ) == 0)) {
                                                      local_ec = in_stack_00000008 + 0xb;
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_ec + 1)] & 2) != 0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_24 = -1;
                                                      sscanf
                                                                ((char *)local_ec,
                                                                 "( %f, %f, %f, %f )%n",local_30,
                                                                 local_2c,local_80,local_28);
                                                      if (local_24 < 5) {
                                                        _sprintf
                                                                  (&DAT_02d0a460,
                                                                                                                                      
                                                  "Error parsing shakeScreen command parms");
                                                  return (CDemonActor *)0x0;
                                                  }
                                                  local_ec = local_ec + local_24;
                                                  if (local_f0 != 0) {
                                                    core_set_cpp_CDemonSet_FUN_00570fa0
                                                              (g_CDemonSetPtr);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = strnicmp
                                                                      ((char *)in_stack_00000008,
                                                                       "slamModelToMotion",
                                                                       0x11);
                                                    if ((iVar7 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(in_stack_00000008[0x11] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_ec = in_stack_00000008 + 0x11;
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_ec + 1)] & 2) != 0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_20 = -1;
                                                      sscanf
                                                                ((char *)local_ec,"(%[^,], %[^)])%n",
                                                                 local_72d + 1,local_40d + 1);
                                                      if (local_20 < 5) {
                                                        _sprintf
                                                                  (&DAT_02d0a460,
                                                                                                                                      
                                                  "Error parsing slamModelToMotion command parms");
                                                  return (CDemonActor *)0x0;
                                                  }
                                                  local_ec = local_ec + local_20;
                                                  uVar15 = 0xffffffff;
                                                  pcVar10 = local_72d + 1;
                                                  do {
                                                    if (uVar15 == 0) break;
                                                    uVar15 = uVar15 - 1;
                                                    cVar5 = *pcVar10;
                                                    pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                                  } while (cVar5 != '\0');
                                                  SVar17 = ~uVar15 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar10 = local_72d + ~uVar15;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar10[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar10 = pcVar10 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_72d + 1)[SVar17] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_72d[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_72d + 1,local_72d + 2,SVar17);
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  uVar15 = 0xffffffff;
                                                  pcVar10 = local_40d + 1;
                                                  do {
                                                    if (uVar15 == 0) break;
                                                    uVar15 = uVar15 - 1;
                                                    cVar5 = *pcVar10;
                                                    pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                                  } while (cVar5 != '\0');
                                                  SVar17 = ~uVar15 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar10 = local_40d + ~uVar15;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar10[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar10 = pcVar10 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_40d + 1)[SVar17] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_40d[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_40d + 1,local_40d + 2,SVar17);
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  pCVar11 = core_event_cpp_FUN_004aa400
                                                                      (local_72d + 1,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,0x823c14);
                                                  if (pCVar11 == (CHero *)0x0) {
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (pCVar11 != 0x0FFFFFFF) {
                                                    pCVar3 = &(pCVar11->base).model;
                                                    pCVar12 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                                            (&pCVar3->motion_controller);
                                                  iVar7 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                            (pCVar12);
                                                  if (iVar7 < 0) {
                                                    _sprintf
                                                              (&DAT_02d0a460,
                                                               "Model %s does not have motion %s",
                                                               (pCVar11->base).model.model_name,
                                                               local_40d + 1);
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                                                            (&pCVar3->motion_controller,iVar7,0.0);
                                                  iVar7 = 1;
                                                  pSVar13 = 
                                                  core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                                            (&pCVar3->motion_controller);
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                                            (&pCVar3->motion_controller,
                                                             pSVar13->state_index,iVar7);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = strnicmp
                                                                      ((char *)in_stack_00000008,
                                                                       "switchCamera",0xc);
                                                    if ((iVar7 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(in_stack_00000008[0xc] + 1)] & 0xe0
                                                        ) == 0)) {
                                                      pbVar19 = in_stack_00000008 + 0xc;
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*pbVar19 + 1)] & 2) != 0) {
                                                        pbVar19 = pbVar19 + 1;
                                                      }
                                                      local_1c = -1;
                                                      puVar21 = &DAT_006794a0;
                                                      puVar24 = local_344;
                                                      for (iVar7 = 0x19; iVar7 != 0;
                                                          iVar7 = iVar7 + -1) {
                                                        *puVar24 = *puVar21;
                                                        puVar21 = puVar21 + (uint)bVar25 * -2 + 1;
                                                        puVar24 = puVar24 + (uint)bVar25 * -2 + 1;
                                                      }
                                                      local_ec = pbVar19;
                                                      sscanf
                                                                ((char *)pbVar19," ( %[^ ,)]%n",
                                                                 local_344);
                                                      if (local_1c < 2) {
                                                        pCVar9 = (CDemonActor *)
                                                                 core_event_cpp_FUN_004aa2a0
                                                                           (
                                                  "Syntax error in switchCamera() parms");
                                                  return pCVar9;
                                                  }
                                                  local_ec = local_ec + local_1c;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_ec + 1)] & 2) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  iVar7 = core_set_cpp_CDemonSet_FUN_0056b790
                                                                    (g_CDemonSetPtr);
                                                  if (iVar7 < 0) {
                                                    pCVar9 = (CDemonActor *)
                                                             core_event_cpp_FUN_004aa2a0
                                                                       (
                                                  "Camera \"%s\" doesn't exist");
                                                  return pCVar9;
                                                  }
                                                  local_70 = 3.0;
                                                  if (*local_ec == 0x2c) {
                                                    local_1c = -1;
                                                    sscanf
                                                              ((char *)local_ec,",%f%n",
                                                               &local_70);
                                                    if (local_1c < 2) {
                                                      pCVar9 = (CDemonActor *)
                                                               core_event_cpp_FUN_004aa2a0
                                                                         (
                                                  "Syntax error in switchCamera() parms");
                                                  return pCVar9;
                                                  }
                                                  local_ec = local_ec + local_1c;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_ec + 1)] & 2) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  }
                                                  if (*local_ec != 0x29) {
                                                    pCVar9 = (CDemonActor *)
                                                             core_event_cpp_FUN_004aa2a0
                                                                       (
                                                  "Missing ')' in switchCamera() statement");
                                                  return pCVar9;
                                                  }
                                                  local_ec = local_ec + 1;
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00
                                                            (g_CDemonSetPtr,iVar7,local_70);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = strnicmp
                                                                      ((char *)in_stack_00000008,
                                                                       "warpTo",6);
                                                    if ((iVar7 != 0) ||
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(in_stack_00000008[6] + 1)] & 0xe0)
                                                        != 0)) {
                                                      pCVar9 = (CDemonActor *)
                                                               core_event_cpp_FUN_004aa2a0
                                                                         (
                                                  "Unknown meta-function starting at %s");
                                                  return pCVar9;
                                                  }
                                                  local_ec = in_stack_00000008 + 6;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_ec + 1)] & 2) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            ((char *)local_ec,"(%[^,], %[^)])%n",
                                                             local_bdd + 1,local_59d + 1);
                                                  if (local_18 < 5) {
                                                    pCVar9 = (CDemonActor *)
                                                             core_event_cpp_FUN_004aa2a0
                                                                       (
                                                  "Error parsing warpTo command parms");
                                                  return pCVar9;
                                                  }
                                                  uVar15 = 0xffffffff;
                                                  pcVar10 = local_bdd + 1;
                                                  do {
                                                    if (uVar15 == 0) break;
                                                    uVar15 = uVar15 - 1;
                                                    cVar5 = *pcVar10;
                                                    pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                                  } while (cVar5 != '\0');
                                                  SVar17 = ~uVar15 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar10 = local_bdd + ~uVar15;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar10[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar10 = pcVar10 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_bdd + 1)[SVar17] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_bdd[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_bdd + 1,local_bdd + 2,SVar17);
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  uVar15 = 0xffffffff;
                                                  pcVar10 = local_59d + 1;
                                                  do {
                                                    if (uVar15 == 0) break;
                                                    uVar15 = uVar15 - 1;
                                                    cVar5 = *pcVar10;
                                                    pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                                  } while (cVar5 != '\0');
                                                  SVar17 = ~uVar15 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar10 = local_59d + ~uVar15;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar10[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar10 = pcVar10 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_59d + 1)[SVar17] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_59d[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_59d + 1,local_59d + 2,SVar17);
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  local_ec = local_ec + local_18;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_ec + 1)] & 2) != 0) {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  pCVar11 = core_event_cpp_FUN_004aa400
                                                                      (local_bdd + 1,
                                                                       g_CDemonActorClassInfo.
                                                                       name_hash,0x821ff8);
                                                  if (pCVar11 == (CHero *)0x0) {
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (pCVar11 == 0x0FFFFFFF) {
                                                    local_f0 = 0;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            (local_59d + 1,"%f,%f,%f,%f,%f,%f%n",
                                                             &local_11c,&local_11c.y,&local_11c.z,
                                                             &local_134,&local_134.z,&local_134.y);
                                                  if (local_18 < 0) {
                                                    if ((local_f0 != 0) &&
                                                       (pUVar2 = &(pCVar11->base).base.orient,
                                                       &local_134 != (CVector3f *)pUVar2)) {
                                                      local_134.x = (pUVar2->vec).x;
                                                      local_134.y = (pCVar11->base).base.orient.vec.
                                                                    y;
                                                      local_134.z = (pCVar11->base).base.orient.vec.
                                                                    z;
                                                    }
                                                    sscanf
                                                              (local_59d + 1,"%f,%f,%f,%f%n",
                                                               &local_11c,&local_11c.y,&local_11c.z,
                                                               &local_134.y);
                                                  }
                                                  if (local_18 < 0) {
                                                    if ((local_f0 != 0) &&
                                                       (pUVar2 = &(pCVar11->base).base.orient,
                                                       &local_134 != (CVector3f *)pUVar2)) {
                                                      local_134.x = (pUVar2->vec).x;
                                                      local_134.y = (pCVar11->base).base.orient.vec.
                                                                    y;
                                                      local_134.z = (pCVar11->base).base.orient.vec.
                                                                    z;
                                                    }
                                                    sscanf
                                                              (local_59d + 1,"%f,%f,%f%n",
                                                               &local_11c,&local_11c.y,&local_11c.z)
                                                    ;
                                                  }
                                                  if (local_18 < 0) {
                                                    pCVar14 = core_event_cpp_FUN_004aa400
                                                                        (local_59d + 1,
                                                                         g_CDemonActorClassInfo.
                                                                         name_hash,0x821ff8);
                                                    if (pCVar14 == (CHero *)0x0) {
                                                      return (CDemonActor *)0x0;
                                                    }
                                                    if (pCVar14 == 0x0FFFFFFF) {
                                                      local_f0 = 0;
                                                    }
                                                    else {
                                                      pCVar1 = &(pCVar14->base).base.location;
                                                      if ((CLocation *)&local_11c != pCVar1) {
                                                        local_11c.x = (pCVar1->position).x;
                                                        local_11c.y = (pCVar14->base).base.location.
                                                                      position.y;
                                                        local_11c.z = (pCVar14->base).base.location.
                                                                      position.z;
                                                      }
                                                      pUVar2 = &(pCVar14->base).base.orient;
                                                      if (&local_134 != (CVector3f *)pUVar2) {
                                                        local_134.x = (pUVar2->vec).x;
                                                        local_134.y = (pCVar14->base).base.orient.
                                                                      vec.y;
                                                        local_134.z = (pCVar14->base).base.orient.
                                                                      vec.z;
                                                      }
                                                      uVar15 = 0xffffffff;
                                                      pcVar10 = local_59d + 1;
                                                      do {
                                                        if (uVar15 == 0) break;
                                                        uVar15 = uVar15 - 1;
                                                        cVar5 = *pcVar10;
                                                        pcVar10 = pcVar10 + (uint)bVar25 * -2 + 1;
                                                      } while (cVar5 != '\0');
                                                      local_18 = ~uVar15 - 1;
                                                    }
                                                  }
                                                  if ((local_18 < 0) ||
                                                     (local_59d[local_18 + 1] != '\0')) {
                                                    pCVar9 = (CDemonActor *)
                                                             core_event_cpp_FUN_004aa2a0
                                                                       (
                                                  "Error parsing warpTo command parms");
                                                  return pCVar9;
                                                  }
                                                  if (local_f0 != 0) {
                                                    this_ptr_00 = (CCharacter *)
                                                                                                                                    
                                                  core_actor_cpp_castToClassHash_FUN_0040c790
                                                            ((CDemonActor *)pCVar11,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (this_ptr_00 != (CCharacter *)0x0) {
                                                    (*(((this_ptr_00->base).vtable._uc)->_uc).
                                                      releaseFromGrab)(this_ptr_00);
                                                    (*(((this_ptr_00->base).vtable._uc)->_uc).
                                                      releaseVictim)(this_ptr_00);
                                                  }
                                                  (*((pCVar11->base).base.vtable._ub)->
                                                    setPositionAndOrientation)
                                                            ((CDemonActor *)pCVar11,&local_11c,
                                                             &local_134);
                                                  if (pCVar11 == (CHero *)g_CScriptPtr->focus_actor)
                                                  {
                                                    g_CScriptPtr->unk2 = 1;
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
      pCVar9 = (CDemonActor *)core_event_cpp_FUN_004aa2a0("Extra characters found");
      return pCVar9;
    }
  }
  return (CDemonActor *)0x1;
}
