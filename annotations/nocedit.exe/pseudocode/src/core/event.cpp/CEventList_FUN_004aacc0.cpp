// Name: core_event.cpp_CEventList_FUN_004aacc0
// Address: 004aacc0
// Address Range: [[004aacc0, 004adc05]]
// Convention: __cdecl
// Signature: CDemonActor * core_event.cpp_CEventList_FUN_004aacc0(CEventList * this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CDemonActor * __cdecl core_event_cpp_CEventList_FUN_004aacc0(CEventList *this_ptr)

{
  CEvent CVar1;
  char cVar2;
  CHero *this_ptr_00;
  CScript *pCVar3;
  int iVar4;
  int iVar5;
  CDemonActor *pCVar6;
  char *pcVar7;
  CDemonActor *pCVar8;
  CMotionList *pCVar9;
  SMotion *pSVar10;
  uint uVar11;
  uint uVar12;
  SIZE_T SVar13;
  BADSPACEBASE *in_ESP;
  CEvent *pCVar14;
  CEvent *pCVar15;
  uint *puVar16;
  char *pcVar17;
  uint *puVar18;
  byte bVar19;
  CEvent *in_stack_00000008;
  ulonglong uVar20;
  int *piVar21;
  CVector3f *pCVar22;
  CDemonActor *pCVar23;
  float fVar24;
  char local_163c [255];
  char local_153d [200];
  char local_1475 [200];
  char local_13ad [200];
  char local_12e5 [200];
  char local_121d [400];
  char local_108d [201];
  byte local_fc4 [199];
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
  byte local_27c [99];
  char local_219 [229];
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
  CEvent *local_f4;
  uint local_f0;
  CEvent *local_ec;
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
  byte local_b0 [8];
  int local_a8;
  int local_a4;
  byte *local_a0;
  float local_9c [2];
  int local_94 [2];
  int local_8c;
  float local_88;
  int local_84;
  byte local_80 [4];
  int local_7c;
  float local_78;
  int local_74;
  float local_70;
  int local_6c [2];
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
  
  bVar19 = 0;
  DAT_02d0a460 = 0;
  if (((in_stack_00000008 != (CEvent *)0x0) && (*in_stack_00000008 != (CEvent)0x0)) &&
     (iVar4 = crt_string_c_stricmp_FUN_005fe7f0((char *)in_stack_00000008,"none"),
     iVar4 != 0)) {
    if (*in_stack_00000008 == (CEvent)0x2e) {
      in_stack_00000008 = in_stack_00000008 + 1;
    }
    local_f0 = (uint)(DAT_02d0a45c == 0);
    local_ec = (CEvent *)&DAT_0062460c;
    pCVar15 = in_stack_00000008;
    do {
      pCVar14 = pCVar15;
      if (*pCVar15 == (CEvent)0x28) goto LAB_004aad41;
      if (*pCVar15 == (CEvent)0x0) break;
      pCVar14 = pCVar15 + 1;
      if (*pCVar14 == (CEvent)0x28) goto LAB_004aad41;
      pCVar15 = pCVar15 + 2;
    } while (*pCVar14 != (CEvent)0x0);
    pCVar14 = (CEvent *)0x0;
LAB_004aad41:
    if (pCVar14 == (CEvent *)0x0) {
      iVar4 = 0;
      if (0 < this_ptr->event_count) {
        pCVar15 = this_ptr->event_list;
        do {
          iVar5 = crt_string_c_stricmp_FUN_005fe7f0((char *)pCVar15,(char *)in_stack_00000008);
          if (iVar5 == 0) goto LAB_004aace6;
          iVar4 = iVar4 + 1;
          pCVar15 = pCVar15 + 0x20;
        } while (iVar4 < this_ptr->event_count);
      }
      uVar11 = 0xffffffff;
      pCVar15 = in_stack_00000008;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        CVar1 = *pCVar15;
        pCVar15 = pCVar15 + (uint)bVar19 * -2 + 1;
      } while (CVar1 != (CEvent)0x0);
      if (0x1f < ~uVar11 - 1) {
        pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
        return pCVar6;
      }
      if (99 < this_ptr->event_count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 599;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many events");
      }
      pCVar14 = this_ptr->event_list + this_ptr->event_count * 0x20;
      local_14 = 0;
      pCVar15 = pCVar14;
      do {
        CVar1 = *in_stack_00000008;
        *pCVar15 = CVar1;
        local_f4 = pCVar14;
        if (CVar1 == (CEvent)0x0) break;
        CVar1 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pCVar15[1] = CVar1;
        pCVar15 = pCVar15 + 2;
      } while (CVar1 != (CEvent)0x0);
      do {
        uVar11 = local_14;
        uVar12 = 0xffffffff;
        pCVar15 = local_f4;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          CVar1 = *pCVar15;
          pCVar15 = pCVar15 + (uint)bVar19 * -2 + 1;
        } while (CVar1 != (CEvent)0x0);
        if (~uVar12 - 1 <= local_14) {
          if (local_f0 != 0) {
            this_ptr->event_count = this_ptr->event_count + 1;
            return (CDemonActor *)&DAT_00000001;
          }
          goto LAB_004aace6;
        }
        iVar4 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)*pCVar14);
        *pCVar14 = SUB41 /* extract 2-byte value */(iVar4,0);
        iVar4 = core_event_cpp_FUN_004b0f90();
        if (iVar4 == 0) {
          pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
          return pCVar6;
        }
        local_14 = uVar11 + 1;
        pCVar14 = pCVar14 + 1;
      } while( true );
    }
    iVar4 = crt_string_c_strnicmp_FUN_005ff070
                      ((char *)in_stack_00000008,"advanceLightFilter",0x12);
    if ((iVar4 == 0) &&
       ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[0x12] + 1)] & 0xe0U) == 0)) {
      local_ec = in_stack_00000008 + 0x12;
      while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
        local_ec = local_ec + 1;
      }
      pcVar7 = (char *)core_event_cpp_FUN_004aa6c0();
      if (pcVar7 != (char *)0x0) goto LAB_004aaf38;
      core_set_cpp_CDemonSet_FUN_00570f10(g_CDemonSetPtr);
      if (local_e8 == (C3DSLight *)0x0) {
        pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
        return pCVar6;
      }
      if (local_f0 != 0) {
        if (local_44 == (CDemonLight *)0x0) {
          g_CurrentFilename = "..\\core\\event.cpp";
          g_CurrentLineNumber = 0x27f;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Can't find CDemonLight for light %s in advanceLightFilter meta-command",local_fc4);
        }
        core_setutil_cpp_C3DSLight_advanceFilter_FUN_00586e70(local_e8,local_44);
      }
    }
    else {
      iVar4 = crt_string_c_strnicmp_FUN_005ff070
                        ((char *)in_stack_00000008,"createExplosion",0xf);
      if ((iVar4 == 0) &&
         ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[0xf] + 1)] & 0xe0U) == 0))
      {
        local_ec = in_stack_00000008 + 0xf;
        while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
          local_ec = local_ec + 1;
        }
        local_e4 = -1;
        crt_stdio_c_sscanf_FUN_0060013c((char *)local_ec,"( %f , %n",local_e0,&local_e4);
        if (local_e4 < 0) {
          pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
          return pCVar6;
        }
        local_ec = local_ec + local_e4;
        local_e4 = -1;
        crt_stdio_c_sscanf_FUN_0060013c
                  ((char *)local_ec,"%f , %f , %f %n",&local_128,&local_124,&local_120);
        if ((local_e4 < 0) &&
           (crt_stdio_c_sscanf_FUN_0060013c((char *)local_ec," %[^,)] %n",local_4d5 + 1),
           -1 < local_e4)) {
          uVar11 = 0xffffffff;
          pcVar7 = local_4d5 + 1;
          do {
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            cVar2 = *pcVar7;
            pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
          } while (cVar2 != '\0');
          SVar13 = ~uVar11 - 1;
          if (0 < (int)SVar13) {
            pcVar7 = local_4d5 + ~uVar11;
            do {
              if ((g_CharacterClassificationTable[(byte)(pcVar7[-1] + 1)] & 2U) == 0) break;
              SVar13 = SVar13 - 1;
              pcVar7 = pcVar7 + -1;
            } while (0 < (int)SVar13);
          }
          (local_4d5 + 1)[SVar13] = '\0';
          while ((g_CharacterClassificationTable[(byte)(local_4d5[1] + 1)] & 2U) != 0) {
            crt_string_c_memmove_FUN_005fe5e0(local_4d5 + 1,local_4d5 + 2,SVar13);
            SVar13 = SVar13 - 1;
          }
          pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa400();
          if (pCVar6 == (CDemonActor *)0x0) {
            return (CDemonActor *)0x0;
          }
          if (pCVar6 == DAT_0065d95c) {
            local_f0 = 0;
          }
          else if ((CLocation *)&local_128 != &pCVar6->location) {
            local_128 = (pCVar6->location).position.x;
            local_124 = (pCVar6->location).position.y;
            local_120 = (pCVar6->location).position.z;
          }
        }
        if (local_e4 < 0) {
          pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
          return pCVar6;
        }
        local_ec = local_ec + local_e4;
        while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
          local_ec = local_ec + 1;
        }
        local_dc = 0x40800000;
        if (*local_ec == (CEvent)0x2c) {
          local_e4 = -1;
          crt_stdio_c_sscanf_FUN_0060013c((char *)local_ec,", %f %n");
          if (local_e4 < 0) {
            pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
            return pCVar6;
          }
          local_ec = local_ec + local_e4;
          while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
            local_ec = local_ec + 1;
          }
        }
        if (*local_ec != (CEvent)0x29) {
          pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
          return pCVar6;
        }
        local_ec = local_ec + 1;
        if (local_f0 != 0) {
          core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
        }
      }
      else {
        iVar4 = crt_string_c_strnicmp_FUN_005ff070
                          ((char *)in_stack_00000008,"deleteActor",0xb);
        if ((iVar4 == 0) &&
           ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[0xb] + 1)] & 0xe0U) == 0)
           ) {
          local_ec = in_stack_00000008 + 0xb;
          while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
            local_ec = local_ec + 1;
          }
          pcVar7 = (char *)core_event_cpp_FUN_004aa6c0();
          if (pcVar7 != (char *)0x0) goto LAB_004aaf38;
          pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa400();
          uVar11 = g_CBoxActorClassInfo.name_hash;
          if (pCVar6 == (CDemonActor *)0x0) {
            if (DAT_02d0a45c != 0) {
              return (CDemonActor *)0x0;
            }
            local_f0 = 0;
          }
          if ((pCVar6 != DAT_0065d95c) && (local_f0 != 0)) {
            pCVar6->was_created = 2;
            pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar6,uVar11);
            if (pCVar8 != (CDemonActor *)0x0) {
              fVar24 = pCVar8[2].orient_matrix.m[1].y;
              *(byte *)&pCVar8[2].location.position.y = 0;
              sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)fVar24);
            }
            pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar6,g_CChainClassInfo.name_hash)
            ;
            if (pCVar6 != (CDemonActor *)0x0) {
              fVar24 = pCVar6[1].previous_transform_state.position.x;
              *(byte *)&pCVar6[1].orient_matrix.m[2].z = 0;
              pCVar6[1].create_event[0x4c] = '\0';
              sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)fVar24);
            }
          }
        }
        else {
          iVar4 = crt_string_c_strnicmp_FUN_005ff070
                            ((char *)in_stack_00000008,"displayBitmap",0xd);
          if ((iVar4 == 0) &&
             ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[0xd] + 1)] & 0xe0U) ==
              0)) {
            local_ec = in_stack_00000008 + 0xd;
            while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
              local_ec = local_ec + 1;
            }
            local_d0 = -1;
            crt_stdio_c_sscanf_FUN_0060013c
                      ((char *)local_ec,"( %[^ ,], %d, %d )%n",local_163c,&local_d8,&local_d4,&local_d0);
            if (local_d0 < 0) {
              pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
              return pCVar6;
            }
            local_ec = local_ec + local_d0;
            while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
              local_ec = local_ec + 1;
            }
            iVar4 = engine_dosio_c_getFileSize_FUN_00481880("art",local_163c);
            if (iVar4 < 0) {
              pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
              return pCVar6;
            }
            if (iVar4 != local_d8 * local_d4) {
              pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
              return pCVar6;
            }
            if (local_f0 != 0) {
              core_game_cpp_CGame_displayBitmap_FUN_004e2890();
            }
          }
          else {
            iVar4 = crt_string_c_strnicmp_FUN_005ff070
                              ((char *)in_stack_00000008,"fadeAmbientSound",0x10);
            if ((iVar4 == 0) &&
               ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[0x10] + 1)] & 0xe0U)
                == 0)) {
              local_ec = in_stack_00000008 + 0x10;
              while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
                local_ec = local_ec + 1;
              }
              local_c4 = -1;
              crt_stdio_c_sscanf_FUN_0060013c
                        ((char *)local_ec,"(%f, %f )%n",&local_cc,&local_c8,&local_c4);
              if (local_c4 < 0) {
                crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02d0a460,"Error parsing fadeAmbientSound parms");
                return (CDemonActor *)0x0;
              }
              local_ec = local_ec + local_c4;
              if (local_f0 != 0) {
                core_sound_cpp_CSound_setVolumeFade_FUN_005b3dc0(g_CSoundPtr,local_cc,local_c8);
              }
            }
            else {
              iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                ((char *)in_stack_00000008,"fadeSfx",7);
              if ((iVar4 == 0) &&
                 ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[7] + 1)] & 0xe0U)
                  == 0)) {
                local_ec = in_stack_00000008 + 7;
                while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
                  local_ec = local_ec + 1;
                }
                local_b8 = -1;
                crt_stdio_c_sscanf_FUN_0060013c
                          ((char *)local_ec,"(%[^,], %f, %f )%n",local_108d + 1,&local_c0,&local_bc,
                           &local_b8);
                if (local_b8 < 0) {
                  crt_stdio_c_sprintf_FUN_005fdbd0
                            (&DAT_02d0a460,"Error parsing fadeSfx parms");
                  return (CDemonActor *)0x0;
                }
                local_ec = local_ec + local_b8;
                uVar11 = 0xffffffff;
                pcVar7 = local_108d + 1;
                do {
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1;
                  cVar2 = *pcVar7;
                  pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                } while (cVar2 != '\0');
                SVar13 = ~uVar11 - 1;
                if (0 < (int)SVar13) {
                  pcVar7 = local_108d + ~uVar11;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar7[-1] + 1)] & 2U) == 0) break;
                    SVar13 = SVar13 - 1;
                    pcVar7 = pcVar7 + -1;
                  } while (0 < (int)SVar13);
                }
                (local_108d + 1)[SVar13] = '\0';
                while ((g_CharacterClassificationTable[(byte)(local_108d[1] + 1)] & 2U) != 0) {
                  crt_string_c_memmove_FUN_005fe5e0(local_108d + 1,local_108d + 2,SVar13);
                  SVar13 = SVar13 - 1;
                }
                if (local_f0 != 0) {
                  uVar11 = core_event_cpp_CEventList_FUN_004b0c40(this_ptr);
                  if (local_bc <= 0.0) {
                    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(uVar11,local_c0);
                  }
                  else {
                    sound_sndmain_cpp_setSfxFade_FUN_005a9c70(uVar11,local_c0,local_bc,0);
                  }
                }
              }
              else {
                iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                  ((char *)in_stack_00000008,"flagOn",6);
                if ((iVar4 == 0) &&
                   ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[6] + 1)] & 0xe0U)
                    == 0)) {
                  local_ec = in_stack_00000008 + 6;
                  while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
                    local_ec = local_ec + 1;
                  }
                  pcVar7 = (char *)core_event_cpp_FUN_004aa6c0();
                  if (pcVar7 != (char *)0x0) {
LAB_004aaf38:
                    pcVar17 = &DAT_02d0a460;
                    do {
                      cVar2 = *pcVar7;
                      *pcVar17 = cVar2;
                      if (cVar2 == '\0') {
                        return (CDemonActor *)0x0;
                      }
                      cVar2 = pcVar7[1];
                      pcVar7 = pcVar7 + 2;
                      pcVar17[1] = cVar2;
                      pcVar17 = pcVar17 + 2;
                    } while (cVar2 != '\0');
                    return (CDemonActor *)0x0;
                  }
                  if (local_f0 != 0) {
                    core_event_cpp_CEventList_FUN_004b0330(this_ptr);
                  }
                }
                else {
                  iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                    ((char *)in_stack_00000008,"flagOff",7);
                  if ((iVar4 == 0) &&
                     ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[7] + 1)] &
                      0xe0U) == 0)) {
                    local_ec = in_stack_00000008 + 7;
                    while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0)
                    {
                      local_ec = local_ec + 1;
                    }
                    pcVar7 = (char *)core_event_cpp_FUN_004aa6c0();
                    if (pcVar7 != (char *)0x0) goto LAB_004aaf38;
                    if (local_f0 != 0) {
                      core_event_cpp_CEventList_FUN_004b0330(this_ptr);
                    }
                  }
                  else {
                    iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                      ((char *)in_stack_00000008,"gameFlagOn",10);
                    if ((iVar4 == 0) &&
                       ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[10] + 1)] &
                        0xe0U) == 0)) {
                      local_ec = in_stack_00000008 + 10;
                      while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0
                            ) {
                        local_ec = local_ec + 1;
                      }
                      pcVar7 = (char *)core_event_cpp_FUN_004aa6c0();
                      if (pcVar7 != (char *)0x0) goto LAB_004aaf38;
                      if (local_f0 != 0) {
                        core_event_cpp_CEventList_FUN_004b0470(this_ptr);
                      }
                    }
                    else {
                      iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                        ((char *)in_stack_00000008,"gameFlagOff",0xb);
                      if ((iVar4 == 0) &&
                         ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[0xb] + 1)]
                          & 0xe0U) == 0)) {
                        local_ec = in_stack_00000008 + 0xb;
                        while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) !=
                               0) {
                          local_ec = local_ec + 1;
                        }
                        pcVar7 = (char *)core_event_cpp_FUN_004aa6c0();
                        if (pcVar7 != (char *)0x0) goto LAB_004aaf38;
                        if (local_f0 != 0) {
                          core_event_cpp_CEventList_FUN_004b0470(this_ptr);
                        }
                      }
                      else {
                        iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                          ((char *)in_stack_00000008,"hurtCharacter",0xd);
                        if ((iVar4 == 0) &&
                           ((g_CharacterClassificationTable
                             [(byte)((char)in_stack_00000008[0xd] + 1)] & 0xe0U) == 0)) {
                          local_ec = in_stack_00000008 + 0xd;
                          while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U)
                                 != 0) {
                            local_ec = local_ec + 1;
                          }
                          local_b4 = -1;
                          crt_stdio_c_sscanf_FUN_0060013c
                                    ((char *)local_ec," ( %[^,], %[^,],%f)%n",local_665 + 1,local_2e1 + 1,
                                     local_b0,&local_b4);
                          if (local_b4 < 2) {
                            pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                            return pCVar6;
                          }
                          uVar11 = 0xffffffff;
                          pcVar7 = local_665 + 1;
                          do {
                            if (uVar11 == 0) break;
                            uVar11 = uVar11 - 1;
                            cVar2 = *pcVar7;
                            pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                          } while (cVar2 != '\0');
                          SVar13 = ~uVar11 - 1;
                          if (0 < (int)SVar13) {
                            pcVar7 = local_665 + ~uVar11;
                            do {
                              if ((g_CharacterClassificationTable[(byte)(pcVar7[-1] + 1)] & 2U) == 0
                                 ) break;
                              SVar13 = SVar13 - 1;
                              pcVar7 = pcVar7 + -1;
                            } while (0 < (int)SVar13);
                          }
                          (local_665 + 1)[SVar13] = '\0';
                          while ((g_CharacterClassificationTable[(byte)(local_665[1] + 1)] & 2U) !=
                                 0) {
                            crt_string_c_memmove_FUN_005fe5e0(local_665 + 1,local_665 + 2,SVar13);
                            SVar13 = SVar13 - 1;
                          }
                          uVar11 = 0xffffffff;
                          pcVar7 = local_2e1 + 1;
                          do {
                            if (uVar11 == 0) break;
                            uVar11 = uVar11 - 1;
                            cVar2 = *pcVar7;
                            pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                          } while (cVar2 != '\0');
                          SVar13 = ~uVar11 - 1;
                          if (0 < (int)SVar13) {
                            pcVar7 = local_2e1 + ~uVar11;
                            do {
                              if ((g_CharacterClassificationTable[(byte)(pcVar7[-1] + 1)] & 2U) == 0
                                 ) break;
                              SVar13 = SVar13 - 1;
                              pcVar7 = pcVar7 + -1;
                            } while (0 < (int)SVar13);
                          }
                          (local_2e1 + 1)[SVar13] = '\0';
                          while ((g_CharacterClassificationTable[(byte)(local_2e1[1] + 1)] & 2U) !=
                                 0) {
                            crt_string_c_memmove_FUN_005fe5e0(local_2e1 + 1,local_2e1 + 2,SVar13);
                            SVar13 = SVar13 - 1;
                          }
                          local_ec = local_ec + local_b4;
                          while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U)
                                 != 0) {
                            local_ec = local_ec + 1;
                          }
                          pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                          if (pCVar6 == (CDemonActor *)0x0) {
                            return (CDemonActor *)0x0;
                          }
                          if (pCVar6 == DAT_0065d95c) {
                            local_f0 = (uint)pCVar6 ^ (uint)DAT_0065d95c;
                          }
                          iVar4 = core_event_cpp_DifferentWaysToDie2_FUN_004aa960();
                          if (iVar4 == 0) {
                            pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                            return pCVar6;
                          }
                          if (local_f0 != 0) {
                            (*pCVar6->vtable[1].setup)(pCVar6);
                          }
                        }
                        else {
                          iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                            ((char *)in_stack_00000008,"incCounter",10);
                          if ((iVar4 == 0) &&
                             ((g_CharacterClassificationTable
                               [(byte)((char)in_stack_00000008[10] + 1)] & 0xe0U) == 0)) {
                            local_ec = in_stack_00000008 + 10;
                            while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U
                                   ) != 0) {
                              local_ec = local_ec + 1;
                            }
                            local_a8 = -1;
                            crt_stdio_c_sscanf_FUN_0060013c
                                      ((char *)local_ec,"( %[^ )] )%n",local_121d + 1,&local_a8);
                            if (local_a8 < 5) {
                              crt_stdio_c_sprintf_FUN_005fdbd0
                                        (&DAT_02d0a460,"Error parsing incCounter arguments");
                              return (CDemonActor *)0x0;
                            }
                            local_ec = local_ec + local_a8;
                            uVar11 = 0xffffffff;
                            pcVar7 = local_121d + 1;
                            do {
                              if (uVar11 == 0) break;
                              uVar11 = uVar11 - 1;
                              cVar2 = *pcVar7;
                              pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                            } while (cVar2 != '\0');
                            SVar13 = ~uVar11 - 1;
                            if (0 < (int)SVar13) {
                              pcVar7 = local_121d + ~uVar11;
                              do {
                                if ((g_CharacterClassificationTable[(byte)(pcVar7[-1] + 1)] & 2U) ==
                                    0) break;
                                SVar13 = SVar13 - 1;
                                pcVar7 = pcVar7 + -1;
                              } while (0 < (int)SVar13);
                            }
                            (local_121d + 1)[SVar13] = '\0';
                            while ((g_CharacterClassificationTable[(byte)(local_121d[1] + 1)] & 2U)
                                   != 0) {
                              crt_string_c_memmove_FUN_005fe5e0
                                        (local_121d + 1,local_121d + 2,SVar13);
                              SVar13 = SVar13 - 1;
                            }
                            if (local_f0 != 0) {
                              core_event_cpp_CEventList_FUN_004b0830(this_ptr);
                              core_event_cpp_CEventList_setCounter_FUN_004b0720(this_ptr);
                            }
                          }
                          else {
                            iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                              ((char *)in_stack_00000008,"killCharacter",
                                               0xd);
                            if ((iVar4 == 0) &&
                               ((g_CharacterClassificationTable
                                 [(byte)((char)in_stack_00000008[0xd] + 1)] & 0xe0U) == 0)) {
                              local_ec = in_stack_00000008 + 0xd;
                              while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] &
                                     2U) != 0) {
                                local_ec = local_ec + 1;
                              }
                              local_a0 = local_110;
                              local_a4 = -1;
                              local_9c[0] = 0.0;
                              crt_stdio_c_sscanf_FUN_0060013c
                                        ((char *)local_ec," ( %[^,], %[^,], %f , %f , %f , %f)%n",local_153d + 1,
                                         local_219 + 1,local_110,local_10c,local_108,local_9c,
                                         &local_a4);
                              local_9c[0] = local_9c[0] * (float)0.017453292519444399;
                              if (local_a4 < 0) {
                                local_9c[0] = -1.0;
                                crt_stdio_c_sscanf_FUN_0060013c
                                          ((char *)local_ec," ( %[^,], %[^,], %f , %f , %f )%n",local_153d + 1,
                                           local_219 + 1,local_110,local_10c,local_108,&local_a4);
                              }
                              if (local_a4 < 0) {
                                local_a0 = (byte *)0x0;
                                crt_stdio_c_sscanf_FUN_0060013c
                                          ((char *)local_ec," ( %[^,], %[^)])%n",local_153d + 1,
                                           local_219 + 1,&local_a4);
                              }
                              if (local_a4 < 0) {
                                pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                                return pCVar6;
                              }
                              uVar11 = 0xffffffff;
                              pcVar7 = local_153d + 1;
                              do {
                                if (uVar11 == 0) break;
                                uVar11 = uVar11 - 1;
                                cVar2 = *pcVar7;
                                pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                              } while (cVar2 != '\0');
                              SVar13 = ~uVar11 - 1;
                              if (0 < (int)SVar13) {
                                pcVar7 = local_153d + ~uVar11;
                                do {
                                  if ((g_CharacterClassificationTable[(byte)(pcVar7[-1] + 1)] & 2U)
                                      == 0) break;
                                  SVar13 = SVar13 - 1;
                                  pcVar7 = pcVar7 + -1;
                                } while (0 < (int)SVar13);
                              }
                              (local_153d + 1)[SVar13] = '\0';
                              while ((g_CharacterClassificationTable[(byte)(local_153d[1] + 1)] & 2U
                                     ) != 0) {
                                crt_string_c_memmove_FUN_005fe5e0
                                          (local_153d + 1,local_153d + 2,SVar13);
                                SVar13 = SVar13 - 1;
                              }
                              uVar11 = 0xffffffff;
                              pcVar7 = local_219 + 1;
                              do {
                                if (uVar11 == 0) break;
                                uVar11 = uVar11 - 1;
                                cVar2 = *pcVar7;
                                pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                              } while (cVar2 != '\0');
                              SVar13 = ~uVar11 - 1;
                              if (0 < (int)SVar13) {
                                pcVar7 = local_219 + ~uVar11;
                                do {
                                  if ((g_CharacterClassificationTable[(byte)(pcVar7[-1] + 1)] & 2U)
                                      == 0) break;
                                  SVar13 = SVar13 - 1;
                                  pcVar7 = pcVar7 + -1;
                                } while (0 < (int)SVar13);
                              }
                              (local_219 + 1)[SVar13] = '\0';
                              while ((g_CharacterClassificationTable[(byte)(local_219[1] + 1)] & 2U)
                                     != 0) {
                                crt_string_c_memmove_FUN_005fe5e0
                                          (local_219 + 1,local_219 + 2,SVar13);
                                SVar13 = SVar13 - 1;
                              }
                              local_ec = local_ec + local_a4;
                              while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] &
                                     2U) != 0) {
                                local_ec = local_ec + 1;
                              }
                              pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                              if (pCVar6 == (CDemonActor *)0x0) {
                                return (CDemonActor *)0x0;
                              }
                              if (pCVar6 == DAT_0065d95c) {
                                local_f0 = 0;
                              }
                              iVar4 = core_event_cpp_DifferentWaysToDie_FUN_004aa7d0();
                              if (iVar4 == 0) {
                                pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                                return pCVar6;
                              }
                              if (local_f0 != 0) {
                                (*pCVar6->vtable[1].process)(pCVar6);
                              }
                            }
                            else {
                              iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                ((char *)in_stack_00000008,"killHero",8);
                              if ((iVar4 == 0) &&
                                 ((g_CharacterClassificationTable
                                   [(byte)((char)in_stack_00000008[8] + 1)] & 0xe0U) == 0)) {
                                local_ec = in_stack_00000008 + 8;
                                while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)]
                                       & 2U) != 0) {
                                  local_ec = local_ec + 1;
                                }
                                if (g_CNetGameInstance->connection_type != 0) {
                                  pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                                  return pCVar6;
                                }
                                local_94[0] = -1;
                                crt_stdio_c_sscanf_FUN_0060013c
                                          ((char *)local_ec," ( %[^)])%n",local_27c,local_94);
                                if (local_94[0] < 2) {
                                  pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                                  return pCVar6;
                                }
                                local_ec = local_ec + local_94[0];
                                while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)]
                                       & 2U) != 0) {
                                  local_ec = local_ec + 1;
                                }
                                iVar4 = core_event_cpp_DifferentWaysToDie_FUN_004aa7d0();
                                if (iVar4 == 0) {
                                  pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                                  return pCVar6;
                                }
                                if ((local_f0 != 0) &&
                                   (this_ptr_00 = g_HeroActors[g_LocalHeroIndex],
                                   this_ptr_00 != (CHero *)0x0)) {
                                  (*(this_ptr_00->base_character).base_actor.vtable[1].process)
                                            ((CDemonActor *)this_ptr_00);
                                }
                              }
                              else {
                                iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                  ((char *)in_stack_00000008,"killSfx",7);
                                if ((iVar4 == 0) &&
                                   ((g_CharacterClassificationTable
                                     [(byte)((char)in_stack_00000008[7] + 1)] & 0xe0U) == 0)) {
                                  local_ec = in_stack_00000008 + 7;
                                  while ((g_CharacterClassificationTable
                                          [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                    local_ec = local_ec + 1;
                                  }
                                  local_8c = -1;
                                  crt_stdio_c_sscanf_FUN_0060013c((char *)local_ec,"(%[^,)]%n");
                                  if (local_8c < 3) {
                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                              (&DAT_02d0a460,"Error parsing killSfx parms");
                                    return (CDemonActor *)0x0;
                                  }
                                  local_ec = local_ec + local_8c;
                                  uVar11 = 0xffffffff;
                                  pcVar7 = local_efd + 1;
                                  do {
                                    if (uVar11 == 0) break;
                                    uVar11 = uVar11 - 1;
                                    cVar2 = *pcVar7;
                                    pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                  } while (cVar2 != '\0');
                                  SVar13 = ~uVar11 - 1;
                                  if (0 < (int)SVar13) {
                                    pcVar7 = local_efd + ~uVar11;
                                    do {
                                      if ((g_CharacterClassificationTable[(byte)(pcVar7[-1] + 1)] &
                                          2U) == 0) break;
                                      SVar13 = SVar13 - 1;
                                      pcVar7 = pcVar7 + -1;
                                    } while (0 < (int)SVar13);
                                  }
                                  (local_efd + 1)[SVar13] = '\0';
                                  while ((g_CharacterClassificationTable[(byte)(local_efd[1] + 1)] &
                                         2U) != 0) {
                                    crt_string_c_memmove_FUN_005fe5e0
                                              (local_efd + 1,local_efd + 2,SVar13);
                                    SVar13 = SVar13 - 1;
                                  }
                                  local_88 = 0.0;
                                  if (*local_ec == (CEvent)0x2c) {
                                    piVar21 = &local_8c;
                                    local_8c = -1;
                                    crt_stdio_c_sscanf_FUN_0060013c((char *)local_ec,",%f%n")
                                    ;
                                    if (local_8c < 3) {
                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                (&DAT_02d0a460,"Error parsing killSfx parms",
                                                 piVar21);
                                      return (CDemonActor *)0x0;
                                    }
                                    local_ec = local_ec + local_8c;
                                  }
                                  do {
                                    pCVar15 = local_ec;
                                    local_ec = pCVar15 + 1;
                                  } while ((g_CharacterClassificationTable
                                            [(byte)((char)*pCVar15 + 1)] & 2U) != 0);
                                  if (*pCVar15 != (CEvent)0x29) {
                                    local_ec = pCVar15;
                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                              (&DAT_02d0a460,"Can't find matching ) in killSfx command");
                                    return (CDemonActor *)0x0;
                                  }
                                  if (local_f0 != 0) {
                                    uVar11 = core_event_cpp_CEventList_FUN_004b0c40(this_ptr);
                                    if (local_88 <= 0.0) {
                                      sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar11);
                                      core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
                                    }
                                    else {
                                      sound_sndmain_cpp_setSfxFade_FUN_005a9c70
                                                (uVar11,0.0,local_88,1);
                                      core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
                                    }
                                  }
                                }
                                else {
                                  iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                    ((char *)in_stack_00000008,"lightning",
                                                     9);
                                  if ((iVar4 == 0) &&
                                     ((g_CharacterClassificationTable
                                       [(byte)((char)in_stack_00000008[9] + 1)] & 0xe0U) == 0)) {
                                    local_ec = in_stack_00000008 + 9;
                                    while ((g_CharacterClassificationTable
                                            [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                      local_ec = local_ec + 1;
                                    }
                                    local_84 = -1;
                                    crt_stdio_c_sscanf_FUN_0060013c
                                              ((char *)local_ec,"( )%n",&local_84);
                                    if (local_84 < 2) {
                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                (&DAT_02d0a460,"Error parsing lightning command");
                                      return (CDemonActor *)0x0;
                                    }
                                    local_ec = local_ec + local_84;
                                    if (local_f0 != 0) {
                                      core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0
                                                ();
                                    }
                                  }
                                  else {
                                    iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                      ((char *)in_stack_00000008,"playSfx",
                                                       7);
                                    if ((iVar4 == 0) &&
                                       ((g_CharacterClassificationTable
                                         [(byte)((char)in_stack_00000008[7] + 1)] & 0xe0U) == 0)) {
                                      local_ec = in_stack_00000008 + 7;
                                      while ((g_CharacterClassificationTable
                                              [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                        local_ec = local_ec + 1;
                                      }
                                      local_7c = -1;
                                      crt_stdio_c_sscanf_FUN_0060013c
                                                ((char *)local_ec,"(%[^,)]%n",local_13ad + 1,
                                                 &local_7c);
                                      if (local_7c < 3) {
                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                  (&DAT_02d0a460,"Error parsing playSfx parms"
                                                  );
                                        return (CDemonActor *)0x0;
                                      }
                                      local_ec = local_ec + local_7c;
                                      uVar11 = 0xffffffff;
                                      pcVar7 = local_13ad + 1;
                                      do {
                                        if (uVar11 == 0) break;
                                        uVar11 = uVar11 - 1;
                                        cVar2 = *pcVar7;
                                        pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                      } while (cVar2 != '\0');
                                      SVar13 = ~uVar11 - 1;
                                      if (0 < (int)SVar13) {
                                        pcVar7 = local_13ad + ~uVar11;
                                        do {
                                          if ((g_CharacterClassificationTable
                                               [(byte)(pcVar7[-1] + 1)] & 2U) == 0) break;
                                          SVar13 = SVar13 - 1;
                                          pcVar7 = pcVar7 + -1;
                                        } while (0 < (int)SVar13);
                                      }
                                      (local_13ad + 1)[SVar13] = '\0';
                                      while (pCVar15 = local_ec,
                                            (g_CharacterClassificationTable
                                             [(byte)(local_13ad[1] + 1)] & 2U) != 0) {
                                        crt_string_c_memmove_FUN_005fe5e0
                                                  (local_13ad + 1,local_13ad + 2,SVar13);
                                        SVar13 = SVar13 - 1;
                                      }
                                      puVar16 = &DAT_006793d8;
                                      pcVar7 = local_b15 + 1;
                                      for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1) {
                                        *(uint *)pcVar7 = *puVar16;
                                        puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
                                        pcVar7 = (char *)((int)pcVar7 + ((uint)bVar19 * -2 + 1) * 4)
                                        ;
                                      }
                                      if (*pCVar15 == (CEvent)0x2c) {
                                        piVar21 = &local_7c;
                                        local_7c = -1;
                                        crt_stdio_c_sscanf_FUN_0060013c
                                                  ((char *)local_ec,",%[^)]%n");
                                        if (local_7c < 3) {
                                          crt_stdio_c_sprintf_FUN_005fdbd0
                                                    (&DAT_02d0a460,
                                                     "Error parsing playSfx parms",piVar21);
                                          return (CDemonActor *)0x0;
                                        }
                                        local_ec = local_ec + local_7c;
                                        uVar11 = 0xffffffff;
                                        pcVar7 = local_b15 + 1;
                                        do {
                                          if (uVar11 == 0) break;
                                          uVar11 = uVar11 - 1;
                                          cVar2 = *pcVar7;
                                          pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                        } while (cVar2 != '\0');
                                        SVar13 = ~uVar11 - 1;
                                        if (0 < (int)SVar13) {
                                          pcVar7 = local_b15 + ~uVar11;
                                          do {
                                            if ((g_CharacterClassificationTable
                                                 [(byte)(pcVar7[-1] + 1)] & 2U) == 0) break;
                                            SVar13 = SVar13 - 1;
                                            pcVar7 = pcVar7 + -1;
                                          } while (0 < (int)SVar13);
                                        }
                                        (local_b15 + 1)[SVar13] = 0;
                                        while ((g_CharacterClassificationTable
                                                [(byte)(local_b15[1] + 1)] & 2U) != 0) {
                                          crt_string_c_memmove_FUN_005fe5e0
                                                    (local_b15 + 1,local_b15 + 2,SVar13);
                                          SVar13 = SVar13 - 1;
                                        }
                                        uVar11 = 0xffffffff;
                                        pcVar7 = local_b15 + 1;
                                        do {
                                          if (uVar11 == 0) break;
                                          uVar11 = uVar11 - 1;
                                          cVar2 = *pcVar7;
                                          pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                        } while (cVar2 != '\0');
                                        if (0x13 < ~uVar11 - 1) {
                                          crt_stdio_c_sprintf_FUN_005fdbd0
                                                    (&DAT_02d0a460,
                                                     "handle name %s is too long, max %d chars");
                                          return (CDemonActor *)0x0;
                                        }
                                      }
                                      do {
                                        pCVar15 = local_ec;
                                        local_ec = pCVar15 + 1;
                                      } while ((g_CharacterClassificationTable
                                                [(byte)((char)*pCVar15 + 1)] & 2U) != 0);
                                      if (*pCVar15 != (CEvent)0x29) {
                                        local_ec = pCVar15;
                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                  (&DAT_02d0a460,"Can't find matching ) in playSfx command"
                                                  );
                                        return (CDemonActor *)0x0;
                                      }
                                      if (local_f0 != 0) {
                                        iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                          (local_13ad + 1,"cue",3);
                                        if (iVar4 == 0) {
                                          iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0
                                                            (1);
                                          if (iVar4 != 0) {
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
                                      iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                        ((char *)in_stack_00000008,
                                                         "setCameraAmbient",0x10);
                                      if ((iVar4 == 0) &&
                                         ((g_CharacterClassificationTable
                                           [(byte)((char)in_stack_00000008[0x10] + 1)] & 0xe0U) == 0
                                         )) {
                                        local_ec = in_stack_00000008 + 0x10;
                                        while ((g_CharacterClassificationTable
                                                [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                          local_ec = local_ec + 1;
                                        }
                                        local_74 = -1;
                                        crt_stdio_c_sscanf_FUN_0060013c
                                                  ((char *)local_ec,"(%[^,], %f)%n",local_12e5 + 1,
                                                   &local_78,&local_74);
                                        if (local_74 < 3) {
                                          crt_stdio_c_sprintf_FUN_005fdbd0
                                                    (&DAT_02d0a460,
                                                     "Error parsing setCameraAmbient parms");
                                          return (CDemonActor *)0x0;
                                        }
                                        local_ec = local_ec + local_74;
                                        uVar11 = 0xffffffff;
                                        pcVar7 = local_12e5 + 1;
                                        do {
                                          if (uVar11 == 0) break;
                                          uVar11 = uVar11 - 1;
                                          cVar2 = *pcVar7;
                                          pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                        } while (cVar2 != '\0');
                                        SVar13 = ~uVar11 - 1;
                                        if (0 < (int)SVar13) {
                                          pcVar7 = local_12e5 + ~uVar11;
                                          do {
                                            if ((g_CharacterClassificationTable
                                                 [(byte)(pcVar7[-1] + 1)] & 2U) == 0) break;
                                            SVar13 = SVar13 - 1;
                                            pcVar7 = pcVar7 + -1;
                                          } while (0 < (int)SVar13);
                                        }
                                        (local_12e5 + 1)[SVar13] = '\0';
                                        while ((g_CharacterClassificationTable
                                                [(byte)(local_12e5[1] + 1)] & 2U) != 0) {
                                          crt_string_c_memmove_FUN_005fe5e0
                                                    (local_12e5 + 1,local_12e5 + 2,SVar13);
                                          SVar13 = SVar13 - 1;
                                        }
                                        iVar4 = core_set_cpp_CDemonSet_FUN_0056b790(g_CDemonSetPtr);
                                        if (iVar4 < 0) {
                                          crt_stdio_c_sprintf_FUN_005fdbd0
                                                    (&DAT_02d0a460,
                                                     "Camera \"%s\" does not exist.");
                                          return (CDemonActor *)0x0;
                                        }
                                        if ((local_78 < 0.0) || (0x42c80000 < (int)local_78)) {
                                          crt_stdio_c_sprintf_FUN_005fdbd0
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
                                        uVar20 = 0x4ac7c700000000;
                                        iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                          ((char *)in_stack_00000008,
                                                           "setCounter",10);
                                        if ((iVar4 == 0) &&
                                           ((g_CharacterClassificationTable
                                             [(byte)((char)in_stack_00000008[10] + 1)] & 0xe0U) == 0
                                           )) {
                                          local_ec = in_stack_00000008 + 10;
                                          while ((g_CharacterClassificationTable
                                                  [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                            local_ec = local_ec + 1;
                                          }
                                          local_6c[0] = -1;
                                          crt_stdio_c_sscanf_FUN_0060013c
                                                    ((char *)local_ec,"( %[^,)]%n",local_ca5 + 1,
                                                     local_6c);
                                          if (local_6c[0] < 5) {
                                            crt_stdio_c_sprintf_FUN_005fdbd0
                                                      (&DAT_02d0a460,
                                                       "Error parsing setCounter arguments");
                                            return (CDemonActor *)0x0;
                                          }
                                          local_ec = local_ec + local_6c[0];
                                          uVar11 = 0xffffffff;
                                          pcVar7 = local_ca5 + 1;
                                          do {
                                            if (uVar11 == 0) break;
                                            uVar11 = uVar11 - 1;
                                            cVar2 = *pcVar7;
                                            pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                          } while (cVar2 != '\0');
                                          SVar13 = ~uVar11 - 1;
                                          if (0 < (int)SVar13) {
                                            pcVar7 = local_ca5 + ~uVar11;
                                            do {
                                              if ((g_CharacterClassificationTable
                                                   [(byte)(pcVar7[-1] + 1)] & 2U) == 0) break;
                                              SVar13 = SVar13 - 1;
                                              pcVar7 = pcVar7 + -1;
                                            } while (0 < (int)SVar13);
                                          }
                                          (local_ca5 + 1)[SVar13] = '\0';
                                          while ((g_CharacterClassificationTable
                                                  [(byte)(local_ca5[1] + 1)] & 2U) != 0) {
                                            crt_string_c_memmove_FUN_005fe5e0
                                                      (local_ca5 + 1,local_ca5 + 2,SVar13);
                                            SVar13 = SVar13 - 1;
                                          }
                                          local_6c[1] = 0;
                                          if (*local_ec == (CEvent)0x2c) {
                                            local_6c[0] = -1;
                                            piVar21 = local_6c;
                                            crt_stdio_c_sscanf_FUN_0060013c
                                                      ((char *)local_ec,",%d%n");
                                            if (local_6c[0] < 1) {
                                              crt_stdio_c_sprintf_FUN_005fdbd0
                                                        (&DAT_02d0a460,
                                                         "Error parsing setCounter value argument",piVar21
                                                        );
                                              return (CDemonActor *)0x0;
                                            }
                                            local_ec = local_ec + local_6c[0];
                                            while ((g_CharacterClassificationTable
                                                    [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                              local_ec = local_ec + 1;
                                            }
                                          }
                                          if (*local_ec != (CEvent)0x29) {
                                            crt_stdio_c_sprintf_FUN_005fdbd0
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
                                          iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                            ((char *)in_stack_00000008,
                                                             "setGroupAmbient",0xf);
                                          if ((iVar4 == 0) &&
                                             ((g_CharacterClassificationTable
                                               [(byte)((char)in_stack_00000008[0xf] + 1)] & 0xe0U)
                                              == 0)) {
                                            local_ec = in_stack_00000008 + 0xf;
                                            while ((g_CharacterClassificationTable
                                                    [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                              local_ec = local_ec + 1;
                                            }
                                            local_5c = -1;
                                            crt_stdio_c_sscanf_FUN_0060013c
                                                      ((char *)local_ec,"(%d, %f)%n",local_64,
                                                       &local_60,&local_5c);
                                            if (local_5c < 3) {
                                              crt_stdio_c_sprintf_FUN_005fdbd0
                                                        (&DAT_02d0a460,
                                                         "Error parsing setGroupAmbient parms");
                                              return (CDemonActor *)0x0;
                                            }
                                            local_ec = local_ec + local_5c;
                                            if ((local_60 < 0.0) || (0x42c80000 < (int)local_60)) {
                                              crt_stdio_c_sprintf_FUN_005fdbd0
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
                                            iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                              ((char *)in_stack_00000008,
                                                               "setLightFilterFrame",0x13);
                                            if ((iVar4 == 0) &&
                                               ((g_CharacterClassificationTable
                                                 [(byte)((char)in_stack_00000008[0x13] + 1)] & 0xe0U
                                                ) == 0)) {
                                              local_ec = in_stack_00000008 + 0x13;
                                              while ((g_CharacterClassificationTable
                                                      [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                                local_ec = local_ec + 1;
                                              }
                                              local_58 = -1;
                                              crt_stdio_c_sscanf_FUN_0060013c
                                                        ((char *)local_ec,"( %[^ ,] , %d )%n",local_7f4,
                                                         &local_54,&local_58);
                                              if (local_58 < 0) {
                                                pCVar6 = (CDemonActor *)
                                                         core_event_cpp_FUN_004aa2a0();
                                                return pCVar6;
                                              }
                                              local_ec = local_ec + local_58;
                                              core_set_cpp_CDemonSet_FUN_00570f10(g_CDemonSetPtr);
                                              if (local_50 == (C3DSLight *)0x0) {
                                                pCVar6 = (CDemonActor *)
                                                         core_event_cpp_FUN_004aa2a0();
                                                return pCVar6;
                                              }
                                              if ((local_54 < 0) ||
                                                 (local_50->filter_count <= local_54)) {
                                                pCVar6 = (CDemonActor *)
                                                         core_event_cpp_FUN_004aa2a0();
                                                return pCVar6;
                                              }
                                              if (local_f0 != 0) {
                                                if (local_4c == (CDemonLight *)0x0) {
                                                  g_CurrentFilename = "..\\core\\event.cpp";
                                                  g_CurrentLineNumber = 0x4e0;
                                                  core_main_c_displayErrorAndQuit_FUN_00506f10
                                                            ("Can't find CDemonLight for light %s in setLightFilterFrame meta-command",
                                                             local_7f4);
                                                }
                                                core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00586f00
                                                          (local_50,local_54,local_4c);
                                              }
                                            }
                                            else {
                                              fVar24 = 6.868996e-39;
                                              iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                                ((char *)in_stack_00000008,
                                                                 "setLeverState",0xd);
                                              if ((iVar4 == 0) &&
                                                 ((g_CharacterClassificationTable
                                                   [(byte)((char)in_stack_00000008[0xd] + 1)] &
                                                  0xe0U) == 0)) {
                                                local_ec = in_stack_00000008 + 0xd;
                                                while ((g_CharacterClassificationTable
                                                        [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                                  local_ec = local_ec + 1;
                                                }
                                                local_48 = -1;
                                                crt_stdio_c_sscanf_FUN_0060013c
                                                          ((char *)local_ec,"(%[^,], %[^)])%n",
                                                           local_d6d + 1,local_1475 + 1,&local_48);
                                                if (local_48 < 5) {
                                                  crt_stdio_c_sprintf_FUN_005fdbd0
                                                            (&DAT_02d0a460,
                                                             "Error parsing setLeverState command parms");
                                                  return (CDemonActor *)0x0;
                                                }
                                                local_ec = local_ec + local_48;
                                                uVar11 = 0xffffffff;
                                                pcVar7 = local_d6d + 1;
                                                do {
                                                  if (uVar11 == 0) break;
                                                  uVar11 = uVar11 - 1;
                                                  cVar2 = *pcVar7;
                                                  pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                                } while (cVar2 != '\0');
                                                SVar13 = ~uVar11 - 1;
                                                if (0 < (int)SVar13) {
                                                  pcVar7 = local_d6d + ~uVar11;
                                                  do {
                                                    if ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[-1] + 1)] & 2U) == 0) break;
                                                    SVar13 = SVar13 - 1;
                                                    pcVar7 = pcVar7 + -1;
                                                  } while (0 < (int)SVar13);
                                                }
                                                (local_d6d + 1)[SVar13] = '\0';
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(local_d6d[1] + 1)] & 2U) != 0) {
                                                  crt_string_c_memmove_FUN_005fe5e0
                                                            (local_d6d + 1,local_d6d + 2,SVar13);
                                                  SVar13 = SVar13 - 1;
                                                }
                                                uVar11 = 0xffffffff;
                                                pcVar7 = local_1475 + 1;
                                                do {
                                                  if (uVar11 == 0) break;
                                                  uVar11 = uVar11 - 1;
                                                  cVar2 = *pcVar7;
                                                  pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                                } while (cVar2 != '\0');
                                                SVar13 = ~uVar11 - 1;
                                                if (0 < (int)SVar13) {
                                                  pcVar7 = local_1475 + ~uVar11;
                                                  do {
                                                    if ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[-1] + 1)] & 2U) == 0) break;
                                                    SVar13 = SVar13 - 1;
                                                    pcVar7 = pcVar7 + -1;
                                                  } while (0 < (int)SVar13);
                                                }
                                                (local_1475 + 1)[SVar13] = '\0';
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(local_1475[1] + 1)] & 2U) != 0) {
                                                  crt_string_c_memmove_FUN_005fe5e0
                                                            (local_1475 + 1,local_1475 + 2,SVar13);
                                                  SVar13 = SVar13 - 1;
                                                }
                                                pCVar6 = (CDemonActor *)
                                                         core_event_cpp_FUN_004aa400();
                                                if (pCVar6 == (CDemonActor *)0x0) {
                                                  return (CDemonActor *)0x0;
                                                }
                                                if ((pCVar6 == DAT_0065d95c) || (local_f0 == 0)) {
                                                  iVar4 = core_event_cpp_CEventList_FUN_004add00
                                                                    (this_ptr);
                                                  if (iVar4 != 0) {
                                                    return (CDemonActor *)0x0;
                                                  }
                                                }
                                                else {
                                                  iVar4 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_1475 + 1);
                                                  if (iVar4 == 0) {
                                                    uStack_f8 = 0;
                                                  }
                                                  else {
                                                    uStack_f8 = 0x3ff00000;
                                                  }
                                                  local_fc = 0;
                                                  core_lever_cpp_FUN_00504b20();
                                                }
                                              }
                                              else {
                                                iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                                  ((char *)in_stack_00000008,
                                                                   "setModelState",0xd);
                                                if ((iVar4 == 0) &&
                                                   ((g_CharacterClassificationTable
                                                     [(byte)((char)in_stack_00000008[0xd] + 1)] &
                                                    0xe0U) == 0)) {
                                                  local_ec = in_stack_00000008 + 0xd;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)((char)*local_ec + 1)] & 2U) != 0)
                                                  {
                                                    local_ec = local_ec + 1;
                                                  }
                                                  local_40 = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            ((char *)local_ec,"(%[^,], %[^)])%n",
                                                             local_985 + 1,local_8bd + 1,&local_40);
                                                  if (local_40 < 5) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_02d0a460,
                                                               "Error parsing setModelState command parms");
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  local_ec = local_ec + local_40;
                                                  uVar11 = 0xffffffff;
                                                  pcVar7 = local_985 + 1;
                                                  do {
                                                    if (uVar11 == 0) break;
                                                    uVar11 = uVar11 - 1;
                                                    cVar2 = *pcVar7;
                                                    pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar11 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar7 = local_985 + ~uVar11;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar7[-1] + 1)] & 2U) == 0)
                                                      break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar7 = pcVar7 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_985 + 1)[SVar13] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_985[1] + 1)] & 2U) != 0) {
                                                    crt_string_c_memmove_FUN_005fe5e0
                                                              (local_985 + 1,local_985 + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar11 = 0xffffffff;
                                                  pcVar7 = local_8bd + 1;
                                                  do {
                                                    if (uVar11 == 0) break;
                                                    uVar11 = uVar11 - 1;
                                                    cVar2 = *pcVar7;
                                                    pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar11 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar7 = local_8bd + ~uVar11;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar7[-1] + 1)] & 2U) == 0)
                                                      break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar7 = pcVar7 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_8bd + 1)[SVar13] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_8bd[1] + 1)] & 2U) != 0) {
                                                    crt_string_c_memmove_FUN_005fe5e0
                                                              (local_8bd + 1,local_8bd + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  pCVar6 = (CDemonActor *)
                                                           core_event_cpp_FUN_004aa400();
                                                  if (pCVar6 == (CDemonActor *)0x0) {
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (pCVar6 != DAT_0065d95c) {
                                                    pCVar9 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                                            ((CMotionController *)(pCVar6 + 1));
                                                  iVar4 = 
                                                  core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                                                            (pCVar9);
                                                  if (iVar4 < 0) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_02d0a460,
                                                               "Model %s does not have state %s",
                                                               pCVar6[0x1a].create_event + 0x50,
                                                               local_8bd + 1);
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                                            ((CMotionController *)(pCVar6 + 1),iVar4
                                                             ,1);
                                                  }
                                                  }
                                                }
                                                else {
                                                  iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                                    ((char *)in_stack_00000008,
                                                                     "setTimer",8);
                                                  if ((iVar4 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)((char)in_stack_00000008[8] + 1)] &
                                                      0xe0U) == 0)) {
                                                    local_ec = in_stack_00000008 + 8;
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)((char)*local_ec + 1)] & 2U) != 0
                                                          ) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                    local_38 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_ec,"(%[^,], %f)%n",
                                                               local_a4d + 1,&local_3c,&local_38);
                                                    if (local_38 < 3) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_02d0a460,
                                                                 "Error parsing setTimer command parms"
                                                                );
                                                      return (CDemonActor *)0x0;
                                                    }
                                                    local_ec = local_ec + local_38;
                                                    uVar11 = 0xffffffff;
                                                    pcVar7 = local_a4d + 1;
                                                    do {
                                                      if (uVar11 == 0) break;
                                                      uVar11 = uVar11 - 1;
                                                      cVar2 = *pcVar7;
                                                      pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    SVar13 = ~uVar11 - 1;
                                                    if (0 < (int)SVar13) {
                                                      pcVar7 = local_a4d + ~uVar11;
                                                      do {
                                                        if ((g_CharacterClassificationTable
                                                             [(byte)(pcVar7[-1] + 1)] & 2U) == 0)
                                                        break;
                                                        SVar13 = SVar13 - 1;
                                                        pcVar7 = pcVar7 + -1;
                                                      } while (0 < (int)SVar13);
                                                    }
                                                    (local_a4d + 1)[SVar13] = '\0';
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(local_a4d[1] + 1)] & 2U) != 0) {
                                                      crt_string_c_memmove_FUN_005fe5e0
                                                                (local_a4d + 1,local_a4d + 2,SVar13)
                                                      ;
                                                      SVar13 = SVar13 - 1;
                                                    }
                                                    uVar11 = 0xffffffff;
                                                    pcVar7 = local_a4d + 1;
                                                    do {
                                                      if (uVar11 == 0) break;
                                                      uVar11 = uVar11 - 1;
                                                      cVar2 = *pcVar7;
                                                      pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    if (0x1f < ~uVar11 - 1) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_02d0a460,
                                                                 "Timer name \"%s\" is too long, (max %d chars)"
                                                                );
                                                      return (CDemonActor *)0x0;
                                                    }
                                                    if (local_3c < 0.0) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
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
                                                    iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                                      ((char *)in_stack_00000008,
                                                                       "setWeather",10);
                                                    if ((iVar4 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)((char)in_stack_00000008[10] + 1)] &
                                                        0xe0U) == 0)) {
                                                      local_ec = in_stack_00000008 + 10;
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)((char)*local_ec + 1)] & 2U) !=
                                                             0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_34 = -1;
                                                      crt_stdio_c_sscanf_FUN_0060013c
                                                                ((char *)local_ec,"(%[^)])%n",
                                                                 local_e35 + 1,&local_34);
                                                      if (local_34 < 3) {
                                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                                  (&DAT_02d0a460,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return (CDemonActor *)0x0;
                                                  }
                                                  local_ec = local_ec + local_34;
                                                  uVar11 = 0xffffffff;
                                                  pcVar7 = local_e35 + 1;
                                                  do {
                                                    if (uVar11 == 0) break;
                                                    uVar11 = uVar11 - 1;
                                                    cVar2 = *pcVar7;
                                                    pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar11 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar7 = local_e35 + ~uVar11;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar7[-1] + 1)] & 2U) == 0)
                                                      break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar7 = pcVar7 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_e35 + 1)[SVar13] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_e35[1] + 1)] & 2U) != 0) {
                                                    crt_string_c_memmove_FUN_005fe5e0
                                                              (local_e35 + 1,local_e35 + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  iVar4 = crt_string_c_stricmp_FUN_005fe7f0
                                                                    (local_e35 + 1,"none");
                                                  if (((iVar4 != 0) &&
                                                      (iVar4 = crt_string_c_stricmp_FUN_005fe7f0
                                                                         (local_e35 + 1,
                                                                          "rain"),
                                                      iVar4 != 0)) &&
                                                     (iVar4 = crt_string_c_stricmp_FUN_005fe7f0
                                                                        (local_e35 + 1,
                                                                         "snow"),
                                                     iVar4 != 0)) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_02d0a460,
                                                               "Invalid weather type: %s",
                                                               local_e35 + 1);
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (local_f0 != 0) {
                                                    core_weather_cpp_CWeather_FUN_005ef8c0();
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                                      ((char *)in_stack_00000008,
                                                                       "shakeScreen",0xb);
                                                    if ((iVar4 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)((char)in_stack_00000008[0xb] + 1)]
                                                        & 0xe0U) == 0)) {
                                                      local_ec = in_stack_00000008 + 0xb;
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)((char)*local_ec + 1)] & 2U) !=
                                                             0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_24 = -1;
                                                      crt_stdio_c_sscanf_FUN_0060013c
                                                                ((char *)local_ec,
                                                                 "( %f, %f, %f, %f )%n",local_30,
                                                                 local_2c,local_80,local_28,
                                                                 &local_24);
                                                      if (local_24 < 5) {
                                                        crt_stdio_c_sprintf_FUN_005fdbd0
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
                                                    iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                                      ((char *)in_stack_00000008,
                                                                       "slamModelToMotion",
                                                                       0x11);
                                                    if ((iVar4 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)((char)in_stack_00000008[0x11] + 1)]
                                                        & 0xe0U) == 0)) {
                                                      local_ec = in_stack_00000008 + 0x11;
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)((char)*local_ec + 1)] & 2U) !=
                                                             0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      local_20 = -1;
                                                      crt_stdio_c_sscanf_FUN_0060013c
                                                                ((char *)local_ec,"(%[^,], %[^)])%n",
                                                                 local_72d + 1,local_40d + 1,
                                                                 &local_20);
                                                      if (local_20 < 5) {
                                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                                  (&DAT_02d0a460,
                                                                                                                                      
                                                  "Error parsing slamModelToMotion command parms");
                                                  return (CDemonActor *)0x0;
                                                  }
                                                  local_ec = local_ec + local_20;
                                                  uVar11 = 0xffffffff;
                                                  pcVar7 = local_72d + 1;
                                                  do {
                                                    if (uVar11 == 0) break;
                                                    uVar11 = uVar11 - 1;
                                                    cVar2 = *pcVar7;
                                                    pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar11 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar7 = local_72d + ~uVar11;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar7[-1] + 1)] & 2U) == 0)
                                                      break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar7 = pcVar7 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_72d + 1)[SVar13] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_72d[1] + 1)] & 2U) != 0) {
                                                    crt_string_c_memmove_FUN_005fe5e0
                                                              (local_72d + 1,local_72d + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar11 = 0xffffffff;
                                                  pcVar7 = local_40d + 1;
                                                  do {
                                                    if (uVar11 == 0) break;
                                                    uVar11 = uVar11 - 1;
                                                    cVar2 = *pcVar7;
                                                    pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar11 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar7 = local_40d + ~uVar11;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar7[-1] + 1)] & 2U) == 0)
                                                      break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar7 = pcVar7 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_40d + 1)[SVar13] = '\0';
                                                  while (iVar4 = (int)((ulonglong)uVar20 >> 0x20),
                                                        (g_CharacterClassificationTable
                                                         [(byte)(local_40d[1] + 1)] & 2U) != 0) {
                                                    crt_string_c_memmove_FUN_005fe5e0
                                                              (local_40d + 1,local_40d + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  pCVar6 = (CDemonActor *)
                                                           core_event_cpp_FUN_004aa400();
                                                  if (pCVar6 == (CDemonActor *)0x0) {
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (pCVar6 != DAT_0065d95c) {
                                                    pCVar8 = pCVar6 + 1;
                                                    pCVar9 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                                            ((CMotionController *)pCVar8);
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                            (pCVar9);
                                                  if (iVar5 < 0) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_02d0a460,
                                                               "Model %s does not have motion %s",
                                                               pCVar6[0x1a].create_event + 0x50,
                                                               local_40d + 1);
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                                                            ((CMotionController *)pCVar8,iVar5,0.0);
                                                  pSVar10 = 
                                                  core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                                            ((CMotionController *)pCVar8);
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                                            ((CMotionController *)pCVar8,
                                                             pSVar10->state_index,iVar4);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                                      ((char *)in_stack_00000008,
                                                                       "switchCamera",0xc);
                                                    if ((iVar4 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)((char)in_stack_00000008[0xc] + 1)]
                                                        & 0xe0U) == 0)) {
                                                      pCVar15 = in_stack_00000008 + 0xc;
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)((char)*pCVar15 + 1)] & 2U) !=
                                                             0) {
                                                        pCVar15 = pCVar15 + 1;
                                                      }
                                                      local_1c = -1;
                                                      puVar16 = &DAT_006794a0;
                                                      puVar18 = local_344;
                                                      for (iVar4 = 0x19; iVar4 != 0;
                                                          iVar4 = iVar4 + -1) {
                                                        *puVar18 = *puVar16;
                                                        puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
                                                        puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
                                                      }
                                                      local_ec = pCVar15;
                                                      crt_stdio_c_sscanf_FUN_0060013c
                                                                ((char *)pCVar15," ( %[^ ,)]%n",
                                                                 local_344,&local_1c);
                                                      if (local_1c < 2) {
                                                        pCVar6 = (CDemonActor *)
                                                                 core_event_cpp_FUN_004aa2a0();
                                                        return pCVar6;
                                                      }
                                                      local_ec = local_ec + local_1c;
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)((char)*local_ec + 1)] & 2U) !=
                                                             0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      iVar4 = core_set_cpp_CDemonSet_FUN_0056b790
                                                                        (g_CDemonSetPtr);
                                                      if (iVar4 < 0) {
                                                        pCVar6 = (CDemonActor *)
                                                                 core_event_cpp_FUN_004aa2a0();
                                                        return pCVar6;
                                                      }
                                                      local_70 = 3.0;
                                                      if (*local_ec == (CEvent)0x2c) {
                                                        local_1c = -1;
                                                        crt_stdio_c_sscanf_FUN_0060013c
                                                                  ((char *)local_ec,",%f%n");
                                                        if (local_1c < 2) {
                                                          pCVar6 = (CDemonActor *)
                                                                   core_event_cpp_FUN_004aa2a0();
                                                          return pCVar6;
                                                        }
                                                        local_ec = local_ec + local_1c;
                                                        while ((g_CharacterClassificationTable
                                                                [(byte)((char)*local_ec + 1)] & 2U)
                                                               != 0) {
                                                          local_ec = local_ec + 1;
                                                        }
                                                      }
                                                      if (*local_ec != (CEvent)0x29) {
                                                        pCVar6 = (CDemonActor *)
                                                                 core_event_cpp_FUN_004aa2a0();
                                                        return pCVar6;
                                                      }
                                                      local_ec = local_ec + 1;
                                                      if (local_f0 != 0) {
                                                                                                                
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00
                                                            (g_CDemonSetPtr,iVar4,local_70);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = crt_string_c_strnicmp_FUN_005ff070
                                                                      ((char *)in_stack_00000008,
                                                                       "warpTo",6);
                                                    if ((iVar4 != 0) ||
                                                       ((g_CharacterClassificationTable
                                                         [(byte)((char)in_stack_00000008[6] + 1)] &
                                                        0xe0U) != 0)) {
                                                      pCVar6 = (CDemonActor *)
                                                               core_event_cpp_FUN_004aa2a0();
                                                      return pCVar6;
                                                    }
                                                    local_ec = in_stack_00000008 + 6;
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)((char)*local_ec + 1)] & 2U) != 0
                                                          ) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                    local_18 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_ec,"(%[^,], %[^)])%n",
                                                               local_bdd + 1,local_59d + 1,&local_18
                                                              );
                                                    if (local_18 < 5) {
                                                      pCVar6 = (CDemonActor *)
                                                               core_event_cpp_FUN_004aa2a0();
                                                      return pCVar6;
                                                    }
                                                    uVar11 = 0xffffffff;
                                                    pcVar7 = local_bdd + 1;
                                                    do {
                                                      if (uVar11 == 0) break;
                                                      uVar11 = uVar11 - 1;
                                                      cVar2 = *pcVar7;
                                                      pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    SVar13 = ~uVar11 - 1;
                                                    if (0 < (int)SVar13) {
                                                      pcVar7 = local_bdd + ~uVar11;
                                                      do {
                                                        if ((g_CharacterClassificationTable
                                                             [(byte)(pcVar7[-1] + 1)] & 2U) == 0)
                                                        break;
                                                        SVar13 = SVar13 - 1;
                                                        pcVar7 = pcVar7 + -1;
                                                      } while (0 < (int)SVar13);
                                                    }
                                                    (local_bdd + 1)[SVar13] = '\0';
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(local_bdd[1] + 1)] & 2U) != 0) {
                                                      crt_string_c_memmove_FUN_005fe5e0
                                                                (local_bdd + 1,local_bdd + 2,SVar13)
                                                      ;
                                                      SVar13 = SVar13 - 1;
                                                    }
                                                    uVar11 = 0xffffffff;
                                                    pcVar7 = local_59d + 1;
                                                    do {
                                                      if (uVar11 == 0) break;
                                                      uVar11 = uVar11 - 1;
                                                      cVar2 = *pcVar7;
                                                      pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    SVar13 = ~uVar11 - 1;
                                                    if (0 < (int)SVar13) {
                                                      pcVar7 = local_59d + ~uVar11;
                                                      do {
                                                        if ((g_CharacterClassificationTable
                                                             [(byte)(pcVar7[-1] + 1)] & 2U) == 0)
                                                        break;
                                                        SVar13 = SVar13 - 1;
                                                        pcVar7 = pcVar7 + -1;
                                                      } while (0 < (int)SVar13);
                                                    }
                                                    (local_59d + 1)[SVar13] = '\0';
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(local_59d[1] + 1)] & 2U) != 0) {
                                                      crt_string_c_memmove_FUN_005fe5e0
                                                                (local_59d + 1,local_59d + 2,SVar13)
                                                      ;
                                                      SVar13 = SVar13 - 1;
                                                    }
                                                    local_ec = local_ec + local_18;
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)((char)*local_ec + 1)] & 2U) != 0
                                                          ) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                    pCVar6 = (CDemonActor *)
                                                             core_event_cpp_FUN_004aa400();
                                                    if (pCVar6 == (CDemonActor *)0x0) {
                                                      return (CDemonActor *)0x0;
                                                    }
                                                    if (pCVar6 == DAT_0065d95c) {
                                                      local_f0 = 0;
                                                    }
                                                    local_18 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              (local_59d + 1,
                                                               "%f,%f,%f,%f,%f,%f%n",&local_11c,
                                                               &local_11c.y,&local_11c.z,&local_134,
                                                               &local_134.z,&local_134.y,&local_18);
                                                    if (local_18 < 0) {
                                                      if ((local_f0 != 0) &&
                                                         ((COrientation *)&local_134 !=
                                                          &pCVar6->orient)) {
                                                        local_134.x = (pCVar6->orient).pitch;
                                                        local_134.y = (pCVar6->orient).bank;
                                                        local_134.z = (pCVar6->orient).heading;
                                                      }
                                                      crt_stdio_c_sscanf_FUN_0060013c
                                                                (local_59d + 1,"%f,%f,%f,%f%n",
                                                                 &local_11c,&local_11c.y,
                                                                 &local_11c.z,&local_134.y);
                                                    }
                                                    if (local_18 < 0) {
                                                      if ((local_f0 != 0) &&
                                                         ((COrientation *)&local_134 !=
                                                          &pCVar6->orient)) {
                                                        local_134.x = (pCVar6->orient).pitch;
                                                        local_134.y = (pCVar6->orient).bank;
                                                        local_134.z = (pCVar6->orient).heading;
                                                      }
                                                      crt_stdio_c_sscanf_FUN_0060013c
                                                                (local_59d + 1,"%f,%f,%f%n",
                                                                 &local_11c,&local_11c.y,
                                                                 &local_11c.z);
                                                    }
                                                    if (local_18 < 0) {
                                                      pCVar8 = (CDemonActor *)
                                                               core_event_cpp_FUN_004aa400();
                                                      if (pCVar8 == (CDemonActor *)0x0) {
                                                        return (CDemonActor *)0x0;
                                                      }
                                                      if (pCVar8 == DAT_0065d95c) {
                                                        local_f0 = 0;
                                                      }
                                                      else {
                                                        if ((CLocation *)&local_11c !=
                                                            &pCVar8->location) {
                                                          local_11c.x = (pCVar8->location).position.
                                                                        x;
                                                          local_11c.y = (pCVar8->location).position.
                                                                        y;
                                                          local_11c.z = (pCVar8->location).position.
                                                                        z;
                                                        }
                                                        if ((COrientation *)&local_134 !=
                                                            &pCVar8->orient) {
                                                          local_134.x = (pCVar8->orient).pitch;
                                                          local_134.y = (pCVar8->orient).bank;
                                                          local_134.z = (pCVar8->orient).heading;
                                                        }
                                                        uVar11 = 0xffffffff;
                                                        pcVar7 = local_59d + 1;
                                                        do {
                                                          if (uVar11 == 0) break;
                                                          uVar11 = uVar11 - 1;
                                                          cVar2 = *pcVar7;
                                                          pcVar7 = pcVar7 + (uint)bVar19 * -2 + 1;
                                                        } while (cVar2 != '\0');
                                                        local_18 = ~uVar11 - 1;
                                                      }
                                                    }
                                                    if ((local_18 < 0) ||
                                                       (local_59d[local_18 + 1] != '\0')) {
                                                      pCVar6 = (CDemonActor *)
                                                               core_event_cpp_FUN_004aa2a0();
                                                      return pCVar6;
                                                    }
                                                    if (local_f0 != 0) {
                                                      pCVar8 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040c790
                                                            (pCVar6,g_CCharacterClassInfo.name_hash)
                                                  ;
                                                  if (pCVar8 != (CDemonActor *)0x0) {
                                                    pCVar22 = (CVector3f *)0x4ada0e;
                                                    pCVar23 = pCVar8;
                                                    (*pCVar8->vtable[1].processFootstep)
                                                              (pCVar8,fVar24);
                                                    (*pCVar8->vtable[1].handleFootstep)
                                                              (pCVar8,pCVar22,(int)pCVar23,fVar24);
                                                  }
                                                  (*pCVar6->vtable->setPositionAndOrientation)
                                                            (pCVar6,&local_11c,&local_134);
                                                  if (pCVar6 == (CDemonActor *)
                                                                g_CScriptPtr->focusActor) {
                                                    pCVar3 = g_CScriptPtr;
                                                    pCVar3->padding_0x10[0] = '\x01';
                                                    pCVar3->padding_0x10[1] = '\0';
                                                    pCVar3->padding_0x10[2] = '\0';
                                                    pCVar3->padding_0x10[3] = '\0';
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
    while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
      local_ec = local_ec + 1;
    }
    if (*local_ec != (CEvent)0x0) {
      pCVar6 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
      return pCVar6;
    }
  }
LAB_004aace6:
  return (CDemonActor *)&DAT_00000001;
}
