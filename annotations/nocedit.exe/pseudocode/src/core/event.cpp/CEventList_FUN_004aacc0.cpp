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
  float fVar3;
  CHero *this_ptr_00;
  CScript *pCVar4;
  int iVar5;
  int iVar6;
  CDemonActor *pCVar7;
  char *pcVar8;
  CDemonActor *pCVar9;
  CMotionList *pCVar10;
  SMotion *pSVar11;
  uint uVar12;
  uint uVar13;
  SIZE_T SVar14;
  CEvent *pCVar15;
  CEvent *pCVar16;
  uint *puVar17;
  char *pcVar18;
  uint *puVar19;
  byte bVar20;
  CEvent *in_stack_00000008;
  CVector3f *in_stack_ffffe946;
  int in_stack_ffffe94a;
  float in_stack_ffffe94e;
  char local_163c [255];
  char local_153d [200];
  char local_1475 [200];
  char local_13ad [200];
  char local_12e5 [200];
  char local_121d [400];
  char local_108d [400];
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
  
  bVar20 = 0;
  DAT_02d0a460 = 0;
  if (((in_stack_00000008 != (CEvent *)0x0) && (*in_stack_00000008 != (CEvent)0x0)) &&
     (iVar5 = crt_string_c_stricmp_FUN_005fe7f0((char *)in_stack_00000008,"none"),
     iVar5 != 0)) {
    if (*in_stack_00000008 == (CEvent)0x2e) {
      in_stack_00000008 = in_stack_00000008 + 1;
    }
    local_f0 = (uint)(DAT_02d0a45c == 0);
    local_ec = (CEvent *)&DAT_0062460c;
    pCVar16 = in_stack_00000008;
    do {
      pCVar15 = pCVar16;
      if (*pCVar16 == (CEvent)0x28) goto LAB_004aad41;
      if (*pCVar16 == (CEvent)0x0) break;
      pCVar15 = pCVar16 + 1;
      if (*pCVar15 == (CEvent)0x28) goto LAB_004aad41;
      pCVar16 = pCVar16 + 2;
    } while (*pCVar15 != (CEvent)0x0);
    pCVar15 = (CEvent *)0x0;
LAB_004aad41:
    if (pCVar15 == (CEvent *)0x0) {
      iVar5 = 0;
      if (0 < this_ptr->event_count) {
        pCVar16 = this_ptr->event_list;
        do {
          iVar6 = crt_string_c_stricmp_FUN_005fe7f0((char *)pCVar16,(char *)in_stack_00000008);
          if (iVar6 == 0) goto LAB_004aace6;
          iVar5 = iVar5 + 1;
          pCVar16 = pCVar16 + 0x20;
        } while (iVar5 < this_ptr->event_count);
      }
      uVar12 = 0xffffffff;
      pCVar16 = in_stack_00000008;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        CVar1 = *pCVar16;
        pCVar16 = pCVar16 + (uint)bVar20 * -2 + 1;
      } while (CVar1 != (CEvent)0x0);
      if (0x1f < ~uVar12 - 1) {
        pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
        return pCVar7;
      }
      if (99 < this_ptr->event_count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 599;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many events");
      }
      pCVar15 = this_ptr->event_list + this_ptr->event_count * 0x20;
      local_14 = 0;
      pCVar16 = pCVar15;
      do {
        CVar1 = *in_stack_00000008;
        *pCVar16 = CVar1;
        local_f4 = pCVar15;
        if (CVar1 == (CEvent)0x0) break;
        CVar1 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pCVar16[1] = CVar1;
        pCVar16 = pCVar16 + 2;
      } while (CVar1 != (CEvent)0x0);
      do {
        uVar12 = local_14;
        uVar13 = 0xffffffff;
        pCVar16 = local_f4;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          CVar1 = *pCVar16;
          pCVar16 = pCVar16 + (uint)bVar20 * -2 + 1;
        } while (CVar1 != (CEvent)0x0);
        if (~uVar13 - 1 <= local_14) {
          if (local_f0 != 0) {
            this_ptr->event_count = this_ptr->event_count + 1;
            return (CDemonActor *)&DAT_00000001;
          }
          goto LAB_004aace6;
        }
        iVar5 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)*pCVar15);
        *pCVar15 = SUB41 /* extract 2-byte value */(iVar5,0);
        iVar5 = core_event_cpp_FUN_004b0f90();
        if (iVar5 == 0) {
          pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
          return pCVar7;
        }
        local_14 = uVar12 + 1;
        pCVar15 = pCVar15 + 1;
      } while( true );
    }
    iVar5 = crt_string_c_strnicmp_FUN_005ff070
                      ((char *)in_stack_00000008,"advanceLightFilter",0x12);
    if ((iVar5 == 0) &&
       ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[0x12] + 1)] & 0xe0U) == 0)) {
      local_ec = in_stack_00000008 + 0x12;
      while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
        local_ec = local_ec + 1;
      }
      pcVar8 = (char *)core_event_cpp_FUN_004aa6c0();
      if (pcVar8 != (char *)0x0) goto LAB_004aaf38;
      core_set_cpp_CDemonSet_FUN_00570f10(g_CDemonSetPtr);
      if (local_e8 == (C3DSLight *)0x0) {
        pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
        return pCVar7;
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
      iVar5 = crt_string_c_strnicmp_FUN_005ff070
                        ((char *)in_stack_00000008,"createExplosion",0xf);
      if ((iVar5 == 0) &&
         ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[0xf] + 1)] & 0xe0U) == 0))
      {
        local_ec = in_stack_00000008 + 0xf;
        while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
          local_ec = local_ec + 1;
        }
        local_e4 = -1;
        crt_stdio_c_sscanf_FUN_0060013c((char *)local_ec,"( %f , %n",local_e0);
        if (local_e4 < 0) {
          pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
          return pCVar7;
        }
        local_ec = local_ec + local_e4;
        local_e4 = -1;
        crt_stdio_c_sscanf_FUN_0060013c
                  ((char *)local_ec,"%f , %f , %f %n",&local_128,&local_124,&local_120);
        if ((local_e4 < 0) &&
           (crt_stdio_c_sscanf_FUN_0060013c((char *)local_ec," %[^,)] %n",local_4d5 + 1),
           -1 < local_e4)) {
          uVar12 = 0xffffffff;
          pcVar8 = local_4d5 + 1;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
          } while (cVar2 != '\0');
          SVar14 = ~uVar12 - 1;
          if (0 < (int)SVar14) {
            pcVar8 = local_4d5 + ~uVar12;
            do {
              if ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] & 2U) == 0) break;
              SVar14 = SVar14 - 1;
              pcVar8 = pcVar8 + -1;
            } while (0 < (int)SVar14);
          }
          (local_4d5 + 1)[SVar14] = '\0';
          while ((g_CharacterClassificationTable[(byte)(local_4d5[1] + 1)] & 2U) != 0) {
            crt_string_c_memmove_FUN_005fe5e0(local_4d5 + 1,local_4d5 + 2,SVar14);
            SVar14 = SVar14 - 1;
          }
          pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa400();
          if (pCVar7 == (CDemonActor *)0x0) {
            return (CDemonActor *)0x0;
          }
          if (pCVar7 == DAT_0065d95c) {
            local_f0 = 0;
          }
          else if ((CLocation *)&local_128 != &pCVar7->location) {
            local_128 = (pCVar7->location).position.x;
            local_124 = (pCVar7->location).position.y;
            local_120 = (pCVar7->location).position.z;
          }
        }
        if (local_e4 < 0) {
          pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
          return pCVar7;
        }
        local_ec = local_ec + local_e4;
        while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
          local_ec = local_ec + 1;
        }
        local_dc = 0x40800000;
        if (*local_ec == (CEvent)0x2c) {
          local_e4 = -1;
          crt_stdio_c_sscanf_FUN_0060013c((char *)local_ec,", %f %n",&local_dc,&local_e4);
          if (local_e4 < 0) {
            pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
            return pCVar7;
          }
          local_ec = local_ec + local_e4;
          while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
            local_ec = local_ec + 1;
          }
        }
        if (*local_ec != (CEvent)0x29) {
          pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
          return pCVar7;
        }
        local_ec = local_ec + 1;
        if (local_f0 != 0) {
          core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
        }
      }
      else {
        iVar5 = crt_string_c_strnicmp_FUN_005ff070
                          ((char *)in_stack_00000008,"deleteActor",0xb);
        if ((iVar5 == 0) &&
           ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[0xb] + 1)] & 0xe0U) == 0)
           ) {
          local_ec = in_stack_00000008 + 0xb;
          while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
            local_ec = local_ec + 1;
          }
          pcVar8 = (char *)core_event_cpp_FUN_004aa6c0();
          if (pcVar8 != (char *)0x0) goto LAB_004aaf38;
          pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa400();
          uVar12 = g_CBoxActorClassInfo.name_hash;
          if (pCVar7 == (CDemonActor *)0x0) {
            if (DAT_02d0a45c != 0) {
              return (CDemonActor *)0x0;
            }
            local_f0 = 0;
          }
          if ((pCVar7 != DAT_0065d95c) && (local_f0 != 0)) {
            pCVar7->was_created = 2;
            pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar7,uVar12);
            if (pCVar9 != (CDemonActor *)0x0) {
              fVar3 = pCVar9[2].orient_matrix.m[1].y;
              *(byte *)&pCVar9[2].location.position.y = 0;
              sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)fVar3);
            }
            pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar7,g_CChainClassInfo.name_hash)
            ;
            if (pCVar7 != (CDemonActor *)0x0) {
              fVar3 = pCVar7[1].previous_transform_state.position.x;
              *(byte *)&pCVar7[1].orient_matrix.m[2].z = 0;
              pCVar7[1].create_event[0x4c] = '\0';
              sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)fVar3);
            }
          }
        }
        else {
          iVar5 = crt_string_c_strnicmp_FUN_005ff070
                            ((char *)in_stack_00000008,"displayBitmap",0xd);
          if ((iVar5 == 0) &&
             ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[0xd] + 1)] & 0xe0U) ==
              0)) {
            local_ec = in_stack_00000008 + 0xd;
            while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
              local_ec = local_ec + 1;
            }
            local_d0 = -1;
            crt_stdio_c_sscanf_FUN_0060013c
                      ((char *)local_ec,"( %[^ ,], %d, %d )%n",local_163c,&local_d8,&local_d4);
            if (local_d0 < 0) {
              pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
              return pCVar7;
            }
            local_ec = local_ec + local_d0;
            while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
              local_ec = local_ec + 1;
            }
            iVar5 = engine_dosio_c_getFileSize_FUN_00481880("art",local_163c);
            if (iVar5 < 0) {
              pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
              return pCVar7;
            }
            if (iVar5 != local_d8 * local_d4) {
              pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
              return pCVar7;
            }
            if (local_f0 != 0) {
              core_game_cpp_CGame_displayBitmap_FUN_004e2890();
            }
          }
          else {
            iVar5 = crt_string_c_strnicmp_FUN_005ff070
                              ((char *)in_stack_00000008,"fadeAmbientSound",0x10);
            if ((iVar5 == 0) &&
               ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[0x10] + 1)] & 0xe0U)
                == 0)) {
              local_ec = in_stack_00000008 + 0x10;
              while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
                local_ec = local_ec + 1;
              }
              local_c4 = -1;
              crt_stdio_c_sscanf_FUN_0060013c((char *)local_ec,"(%f, %f )%n",&local_cc,&local_c8)
              ;
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
              iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                ((char *)in_stack_00000008,"fadeSfx",7);
              if ((iVar5 == 0) &&
                 ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[7] + 1)] & 0xe0U)
                  == 0)) {
                local_ec = in_stack_00000008 + 7;
                while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
                  local_ec = local_ec + 1;
                }
                local_b8 = -1;
                crt_stdio_c_sscanf_FUN_0060013c
                          ((char *)local_ec,"(%[^,], %f, %f )%n",local_108d + 1,&local_c0,&local_bc);
                if (local_b8 < 0) {
                  crt_stdio_c_sprintf_FUN_005fdbd0
                            (&DAT_02d0a460,"Error parsing fadeSfx parms");
                  return (CDemonActor *)0x0;
                }
                local_ec = local_ec + local_b8;
                uVar12 = 0xffffffff;
                pcVar8 = local_108d + 1;
                do {
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  cVar2 = *pcVar8;
                  pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                } while (cVar2 != '\0');
                SVar14 = ~uVar12 - 1;
                if (0 < (int)SVar14) {
                  pcVar8 = local_108d + ~uVar12;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] & 2U) == 0) break;
                    SVar14 = SVar14 - 1;
                    pcVar8 = pcVar8 + -1;
                  } while (0 < (int)SVar14);
                }
                (local_108d + 1)[SVar14] = '\0';
                while ((g_CharacterClassificationTable[(byte)(local_108d[1] + 1)] & 2U) != 0) {
                  crt_string_c_memmove_FUN_005fe5e0(local_108d + 1,local_108d + 2,SVar14);
                  SVar14 = SVar14 - 1;
                }
                if (local_f0 != 0) {
                  uVar12 = core_event_cpp_CEventList_FUN_004b0c40(this_ptr);
                  if (local_bc <= 0.0) {
                    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(uVar12,local_c0);
                  }
                  else {
                    sound_sndmain_cpp_setSfxFade_FUN_005a9c70(uVar12,local_c0,local_bc,0);
                  }
                }
              }
              else {
                iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                  ((char *)in_stack_00000008,"flagOn",6);
                if ((iVar5 == 0) &&
                   ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[6] + 1)] & 0xe0U)
                    == 0)) {
                  local_ec = in_stack_00000008 + 6;
                  while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0) {
                    local_ec = local_ec + 1;
                  }
                  pcVar8 = (char *)core_event_cpp_FUN_004aa6c0();
                  if (pcVar8 != (char *)0x0) {
LAB_004aaf38:
                    pcVar18 = &DAT_02d0a460;
                    do {
                      cVar2 = *pcVar8;
                      *pcVar18 = cVar2;
                      if (cVar2 == '\0') {
                        return (CDemonActor *)0x0;
                      }
                      cVar2 = pcVar8[1];
                      pcVar8 = pcVar8 + 2;
                      pcVar18[1] = cVar2;
                      pcVar18 = pcVar18 + 2;
                    } while (cVar2 != '\0');
                    return (CDemonActor *)0x0;
                  }
                  if (local_f0 != 0) {
                    core_event_cpp_CEventList_FUN_004b0330(this_ptr);
                  }
                }
                else {
                  iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                    ((char *)in_stack_00000008,"flagOff",7);
                  if ((iVar5 == 0) &&
                     ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[7] + 1)] &
                      0xe0U) == 0)) {
                    local_ec = in_stack_00000008 + 7;
                    while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0)
                    {
                      local_ec = local_ec + 1;
                    }
                    pcVar8 = (char *)core_event_cpp_FUN_004aa6c0();
                    if (pcVar8 != (char *)0x0) goto LAB_004aaf38;
                    if (local_f0 != 0) {
                      core_event_cpp_CEventList_FUN_004b0330(this_ptr);
                    }
                  }
                  else {
                    iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                      ((char *)in_stack_00000008,"gameFlagOn",10);
                    if ((iVar5 == 0) &&
                       ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[10] + 1)] &
                        0xe0U) == 0)) {
                      local_ec = in_stack_00000008 + 10;
                      while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) != 0
                            ) {
                        local_ec = local_ec + 1;
                      }
                      pcVar8 = (char *)core_event_cpp_FUN_004aa6c0();
                      if (pcVar8 != (char *)0x0) goto LAB_004aaf38;
                      if (local_f0 != 0) {
                        core_event_cpp_CEventList_FUN_004b0470(this_ptr);
                      }
                    }
                    else {
                      iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                        ((char *)in_stack_00000008,"gameFlagOff",0xb);
                      if ((iVar5 == 0) &&
                         ((g_CharacterClassificationTable[(byte)((char)in_stack_00000008[0xb] + 1)]
                          & 0xe0U) == 0)) {
                        local_ec = in_stack_00000008 + 0xb;
                        while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U) !=
                               0) {
                          local_ec = local_ec + 1;
                        }
                        pcVar8 = (char *)core_event_cpp_FUN_004aa6c0();
                        if (pcVar8 != (char *)0x0) goto LAB_004aaf38;
                        if (local_f0 != 0) {
                          core_event_cpp_CEventList_FUN_004b0470(this_ptr);
                        }
                      }
                      else {
                        iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                          ((char *)in_stack_00000008,"hurtCharacter",0xd);
                        if ((iVar5 == 0) &&
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
                                     local_b0);
                          if (local_b4 < 2) {
                            pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                            return pCVar7;
                          }
                          uVar12 = 0xffffffff;
                          pcVar8 = local_665 + 1;
                          do {
                            if (uVar12 == 0) break;
                            uVar12 = uVar12 - 1;
                            cVar2 = *pcVar8;
                            pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                          } while (cVar2 != '\0');
                          SVar14 = ~uVar12 - 1;
                          if (0 < (int)SVar14) {
                            pcVar8 = local_665 + ~uVar12;
                            do {
                              if ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] & 2U) == 0
                                 ) break;
                              SVar14 = SVar14 - 1;
                              pcVar8 = pcVar8 + -1;
                            } while (0 < (int)SVar14);
                          }
                          (local_665 + 1)[SVar14] = '\0';
                          while ((g_CharacterClassificationTable[(byte)(local_665[1] + 1)] & 2U) !=
                                 0) {
                            crt_string_c_memmove_FUN_005fe5e0(local_665 + 1,local_665 + 2,SVar14);
                            SVar14 = SVar14 - 1;
                          }
                          uVar12 = 0xffffffff;
                          pcVar8 = local_2e1 + 1;
                          do {
                            if (uVar12 == 0) break;
                            uVar12 = uVar12 - 1;
                            cVar2 = *pcVar8;
                            pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                          } while (cVar2 != '\0');
                          SVar14 = ~uVar12 - 1;
                          if (0 < (int)SVar14) {
                            pcVar8 = local_2e1 + ~uVar12;
                            do {
                              if ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] & 2U) == 0
                                 ) break;
                              SVar14 = SVar14 - 1;
                              pcVar8 = pcVar8 + -1;
                            } while (0 < (int)SVar14);
                          }
                          (local_2e1 + 1)[SVar14] = '\0';
                          while ((g_CharacterClassificationTable[(byte)(local_2e1[1] + 1)] & 2U) !=
                                 0) {
                            crt_string_c_memmove_FUN_005fe5e0(local_2e1 + 1,local_2e1 + 2,SVar14);
                            SVar14 = SVar14 - 1;
                          }
                          local_ec = local_ec + local_b4;
                          while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U)
                                 != 0) {
                            local_ec = local_ec + 1;
                          }
                          pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                          if (pCVar7 == (CDemonActor *)0x0) {
                            return (CDemonActor *)0x0;
                          }
                          if (pCVar7 == DAT_0065d95c) {
                            local_f0 = (uint)pCVar7 ^ (uint)DAT_0065d95c;
                          }
                          iVar5 = core_event_cpp_DifferentWaysToDie2_FUN_004aa960();
                          if (iVar5 == 0) {
                            pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                            return pCVar7;
                          }
                          if (local_f0 != 0) {
                            (*pCVar7->vtable[1].setup)(pCVar7);
                          }
                        }
                        else {
                          iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                            ((char *)in_stack_00000008,"incCounter",10);
                          if ((iVar5 == 0) &&
                             ((g_CharacterClassificationTable
                               [(byte)((char)in_stack_00000008[10] + 1)] & 0xe0U) == 0)) {
                            local_ec = in_stack_00000008 + 10;
                            while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] & 2U
                                   ) != 0) {
                              local_ec = local_ec + 1;
                            }
                            local_a8 = -1;
                            crt_stdio_c_sscanf_FUN_0060013c
                                      ((char *)local_ec,"( %[^ )] )%n",local_121d + 1);
                            if (local_a8 < 5) {
                              crt_stdio_c_sprintf_FUN_005fdbd0
                                        (&DAT_02d0a460,"Error parsing incCounter arguments");
                              return (CDemonActor *)0x0;
                            }
                            local_ec = local_ec + local_a8;
                            uVar12 = 0xffffffff;
                            pcVar8 = local_121d + 1;
                            do {
                              if (uVar12 == 0) break;
                              uVar12 = uVar12 - 1;
                              cVar2 = *pcVar8;
                              pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                            } while (cVar2 != '\0');
                            SVar14 = ~uVar12 - 1;
                            if (0 < (int)SVar14) {
                              pcVar8 = local_121d + ~uVar12;
                              do {
                                if ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] & 2U) ==
                                    0) break;
                                SVar14 = SVar14 - 1;
                                pcVar8 = pcVar8 + -1;
                              } while (0 < (int)SVar14);
                            }
                            (local_121d + 1)[SVar14] = '\0';
                            while ((g_CharacterClassificationTable[(byte)(local_121d[1] + 1)] & 2U)
                                   != 0) {
                              crt_string_c_memmove_FUN_005fe5e0
                                        (local_121d + 1,local_121d + 2,SVar14);
                              SVar14 = SVar14 - 1;
                            }
                            if (local_f0 != 0) {
                              core_event_cpp_CEventList_FUN_004b0830(this_ptr);
                              core_event_cpp_CEventList_setCounter_FUN_004b0720(this_ptr);
                            }
                          }
                          else {
                            iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                              ((char *)in_stack_00000008,"killCharacter",
                                               0xd);
                            if ((iVar5 == 0) &&
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
                                         local_219 + 1,local_110,local_10c,local_108,local_9c);
                              local_9c[0] = local_9c[0] * (float)0.017453292519444399;
                              if (local_a4 < 0) {
                                local_9c[0] = -1.0;
                                crt_stdio_c_sscanf_FUN_0060013c
                                          ((char *)local_ec," ( %[^,], %[^,], %f , %f , %f )%n",local_153d + 1,
                                           local_219 + 1,local_110,local_10c,local_108);
                              }
                              if (local_a4 < 0) {
                                local_a0 = (byte *)0x0;
                                crt_stdio_c_sscanf_FUN_0060013c
                                          ((char *)local_ec," ( %[^,], %[^)])%n",local_153d + 1,
                                           local_219 + 1);
                              }
                              if (local_a4 < 0) {
                                pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                                return pCVar7;
                              }
                              uVar12 = 0xffffffff;
                              pcVar8 = local_153d + 1;
                              do {
                                if (uVar12 == 0) break;
                                uVar12 = uVar12 - 1;
                                cVar2 = *pcVar8;
                                pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                              } while (cVar2 != '\0');
                              SVar14 = ~uVar12 - 1;
                              if (0 < (int)SVar14) {
                                pcVar8 = local_153d + ~uVar12;
                                do {
                                  if ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] & 2U)
                                      == 0) break;
                                  SVar14 = SVar14 - 1;
                                  pcVar8 = pcVar8 + -1;
                                } while (0 < (int)SVar14);
                              }
                              (local_153d + 1)[SVar14] = '\0';
                              while ((g_CharacterClassificationTable[(byte)(local_153d[1] + 1)] & 2U
                                     ) != 0) {
                                crt_string_c_memmove_FUN_005fe5e0
                                          (local_153d + 1,local_153d + 2,SVar14);
                                SVar14 = SVar14 - 1;
                              }
                              uVar12 = 0xffffffff;
                              pcVar8 = local_219 + 1;
                              do {
                                if (uVar12 == 0) break;
                                uVar12 = uVar12 - 1;
                                cVar2 = *pcVar8;
                                pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                              } while (cVar2 != '\0');
                              SVar14 = ~uVar12 - 1;
                              if (0 < (int)SVar14) {
                                pcVar8 = local_219 + ~uVar12;
                                do {
                                  if ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] & 2U)
                                      == 0) break;
                                  SVar14 = SVar14 - 1;
                                  pcVar8 = pcVar8 + -1;
                                } while (0 < (int)SVar14);
                              }
                              (local_219 + 1)[SVar14] = '\0';
                              while ((g_CharacterClassificationTable[(byte)(local_219[1] + 1)] & 2U)
                                     != 0) {
                                crt_string_c_memmove_FUN_005fe5e0
                                          (local_219 + 1,local_219 + 2,SVar14);
                                SVar14 = SVar14 - 1;
                              }
                              local_ec = local_ec + local_a4;
                              while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)] &
                                     2U) != 0) {
                                local_ec = local_ec + 1;
                              }
                              pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa400();
                              if (pCVar7 == (CDemonActor *)0x0) {
                                return (CDemonActor *)0x0;
                              }
                              if (pCVar7 == DAT_0065d95c) {
                                local_f0 = 0;
                              }
                              iVar5 = core_event_cpp_DifferentWaysToDie_FUN_004aa7d0();
                              if (iVar5 == 0) {
                                pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                                return pCVar7;
                              }
                              if (local_f0 != 0) {
                                (*pCVar7->vtable[1].process)(pCVar7);
                              }
                            }
                            else {
                              iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                ((char *)in_stack_00000008,"killHero",8);
                              if ((iVar5 == 0) &&
                                 ((g_CharacterClassificationTable
                                   [(byte)((char)in_stack_00000008[8] + 1)] & 0xe0U) == 0)) {
                                local_ec = in_stack_00000008 + 8;
                                while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)]
                                       & 2U) != 0) {
                                  local_ec = local_ec + 1;
                                }
                                if (g_CNetGameInstance->connection_type != 0) {
                                  pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                                  return pCVar7;
                                }
                                local_94[0] = -1;
                                crt_stdio_c_sscanf_FUN_0060013c
                                          ((char *)local_ec," ( %[^)])%n",local_27c,local_94);
                                if (local_94[0] < 2) {
                                  pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                                  return pCVar7;
                                }
                                local_ec = local_ec + local_94[0];
                                while ((g_CharacterClassificationTable[(byte)((char)*local_ec + 1)]
                                       & 2U) != 0) {
                                  local_ec = local_ec + 1;
                                }
                                iVar5 = core_event_cpp_DifferentWaysToDie_FUN_004aa7d0();
                                if (iVar5 == 0) {
                                  pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
                                  return pCVar7;
                                }
                                if ((local_f0 != 0) &&
                                   (this_ptr_00 = g_HeroActors[g_LocalHeroIndex],
                                   this_ptr_00 != (CHero *)0x0)) {
                                  (*(this_ptr_00->base_character).base_actor.vtable[1].process)
                                            ((CDemonActor *)this_ptr_00);
                                }
                              }
                              else {
                                iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                  ((char *)in_stack_00000008,"killSfx",7);
                                if ((iVar5 == 0) &&
                                   ((g_CharacterClassificationTable
                                     [(byte)((char)in_stack_00000008[7] + 1)] & 0xe0U) == 0)) {
                                  local_ec = in_stack_00000008 + 7;
                                  while ((g_CharacterClassificationTable
                                          [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                    local_ec = local_ec + 1;
                                  }
                                  local_8c = -1;
                                  crt_stdio_c_sscanf_FUN_0060013c
                                            ((char *)local_ec,"(%[^,)]%n",local_efd + 1);
                                  if (local_8c < 3) {
                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                              (&DAT_02d0a460,"Error parsing killSfx parms");
                                    return (CDemonActor *)0x0;
                                  }
                                  local_ec = local_ec + local_8c;
                                  uVar12 = 0xffffffff;
                                  pcVar8 = local_efd + 1;
                                  do {
                                    if (uVar12 == 0) break;
                                    uVar12 = uVar12 - 1;
                                    cVar2 = *pcVar8;
                                    pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                  } while (cVar2 != '\0');
                                  SVar14 = ~uVar12 - 1;
                                  if (0 < (int)SVar14) {
                                    pcVar8 = local_efd + ~uVar12;
                                    do {
                                      if ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] &
                                          2U) == 0) break;
                                      SVar14 = SVar14 - 1;
                                      pcVar8 = pcVar8 + -1;
                                    } while (0 < (int)SVar14);
                                  }
                                  (local_efd + 1)[SVar14] = '\0';
                                  while ((g_CharacterClassificationTable[(byte)(local_efd[1] + 1)] &
                                         2U) != 0) {
                                    crt_string_c_memmove_FUN_005fe5e0
                                              (local_efd + 1,local_efd + 2,SVar14);
                                    SVar14 = SVar14 - 1;
                                  }
                                  local_88 = 0.0;
                                  if (*local_ec == (CEvent)0x2c) {
                                    local_8c = -1;
                                    crt_stdio_c_sscanf_FUN_0060013c
                                              ((char *)local_ec,",%f%n",&local_88);
                                    if (local_8c < 3) {
                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                (&DAT_02d0a460,"Error parsing killSfx parms");
                                      return (CDemonActor *)0x0;
                                    }
                                    local_ec = local_ec + local_8c;
                                  }
                                  do {
                                    pCVar16 = local_ec;
                                    local_ec = pCVar16 + 1;
                                  } while ((g_CharacterClassificationTable
                                            [(byte)((char)*pCVar16 + 1)] & 2U) != 0);
                                  if (*pCVar16 != (CEvent)0x29) {
                                    local_ec = pCVar16;
                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                              (&DAT_02d0a460,"Can't find matching ) in killSfx command");
                                    return (CDemonActor *)0x0;
                                  }
                                  if (local_f0 != 0) {
                                    uVar12 = core_event_cpp_CEventList_FUN_004b0c40(this_ptr);
                                    if (local_88 <= 0.0) {
                                      sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar12);
                                      core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
                                    }
                                    else {
                                      sound_sndmain_cpp_setSfxFade_FUN_005a9c70
                                                (uVar12,0.0,local_88,1);
                                      core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
                                    }
                                  }
                                }
                                else {
                                  iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                    ((char *)in_stack_00000008,"lightning",
                                                     9);
                                  if ((iVar5 == 0) &&
                                     ((g_CharacterClassificationTable
                                       [(byte)((char)in_stack_00000008[9] + 1)] & 0xe0U) == 0)) {
                                    local_ec = in_stack_00000008 + 9;
                                    while ((g_CharacterClassificationTable
                                            [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                      local_ec = local_ec + 1;
                                    }
                                    local_84 = -1;
                                    crt_stdio_c_sscanf_FUN_0060013c((char *)local_ec,"( )%n");
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
                                    iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                      ((char *)in_stack_00000008,"playSfx",
                                                       7);
                                    if ((iVar5 == 0) &&
                                       ((g_CharacterClassificationTable
                                         [(byte)((char)in_stack_00000008[7] + 1)] & 0xe0U) == 0)) {
                                      local_ec = in_stack_00000008 + 7;
                                      while ((g_CharacterClassificationTable
                                              [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                        local_ec = local_ec + 1;
                                      }
                                      local_7c = -1;
                                      crt_stdio_c_sscanf_FUN_0060013c
                                                ((char *)local_ec,"(%[^,)]%n",local_13ad + 1);
                                      if (local_7c < 3) {
                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                  (&DAT_02d0a460,"Error parsing playSfx parms"
                                                  );
                                        return (CDemonActor *)0x0;
                                      }
                                      local_ec = local_ec + local_7c;
                                      uVar12 = 0xffffffff;
                                      pcVar8 = local_13ad + 1;
                                      do {
                                        if (uVar12 == 0) break;
                                        uVar12 = uVar12 - 1;
                                        cVar2 = *pcVar8;
                                        pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                      } while (cVar2 != '\0');
                                      SVar14 = ~uVar12 - 1;
                                      if (0 < (int)SVar14) {
                                        pcVar8 = local_13ad + ~uVar12;
                                        do {
                                          if ((g_CharacterClassificationTable
                                               [(byte)(pcVar8[-1] + 1)] & 2U) == 0) break;
                                          SVar14 = SVar14 - 1;
                                          pcVar8 = pcVar8 + -1;
                                        } while (0 < (int)SVar14);
                                      }
                                      (local_13ad + 1)[SVar14] = '\0';
                                      while (pCVar16 = local_ec,
                                            (g_CharacterClassificationTable
                                             [(byte)(local_13ad[1] + 1)] & 2U) != 0) {
                                        crt_string_c_memmove_FUN_005fe5e0
                                                  (local_13ad + 1,local_13ad + 2,SVar14);
                                        SVar14 = SVar14 - 1;
                                      }
                                      puVar17 = &DAT_006793d8;
                                      pcVar8 = local_b15 + 1;
                                      for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
                                        *(uint *)pcVar8 = *puVar17;
                                        puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
                                        pcVar8 = (char *)((int)pcVar8 + ((uint)bVar20 * -2 + 1) * 4)
                                        ;
                                      }
                                      if (*pCVar16 == (CEvent)0x2c) {
                                        local_7c = -1;
                                        crt_stdio_c_sscanf_FUN_0060013c
                                                  ((char *)local_ec,",%[^)]%n",local_b15 + 1);
                                        if (local_7c < 3) {
                                          crt_stdio_c_sprintf_FUN_005fdbd0
                                                    (&DAT_02d0a460,
                                                     "Error parsing playSfx parms");
                                          return (CDemonActor *)0x0;
                                        }
                                        local_ec = local_ec + local_7c;
                                        uVar12 = 0xffffffff;
                                        pcVar8 = local_b15 + 1;
                                        do {
                                          if (uVar12 == 0) break;
                                          uVar12 = uVar12 - 1;
                                          cVar2 = *pcVar8;
                                          pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                        } while (cVar2 != '\0');
                                        SVar14 = ~uVar12 - 1;
                                        if (0 < (int)SVar14) {
                                          pcVar8 = local_b15 + ~uVar12;
                                          do {
                                            if ((g_CharacterClassificationTable
                                                 [(byte)(pcVar8[-1] + 1)] & 2U) == 0) break;
                                            SVar14 = SVar14 - 1;
                                            pcVar8 = pcVar8 + -1;
                                          } while (0 < (int)SVar14);
                                        }
                                        (local_b15 + 1)[SVar14] = 0;
                                        while ((g_CharacterClassificationTable
                                                [(byte)(local_b15[1] + 1)] & 2U) != 0) {
                                          crt_string_c_memmove_FUN_005fe5e0
                                                    (local_b15 + 1,local_b15 + 2,SVar14);
                                          SVar14 = SVar14 - 1;
                                        }
                                        uVar12 = 0xffffffff;
                                        pcVar8 = local_b15 + 1;
                                        do {
                                          if (uVar12 == 0) break;
                                          uVar12 = uVar12 - 1;
                                          cVar2 = *pcVar8;
                                          pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                        } while (cVar2 != '\0');
                                        if (0x13 < ~uVar12 - 1) {
                                          crt_stdio_c_sprintf_FUN_005fdbd0
                                                    (&DAT_02d0a460,
                                                     "handle name %s is too long, max %d chars",
                                                     local_b15 + 1,0x13);
                                          return (CDemonActor *)0x0;
                                        }
                                      }
                                      do {
                                        pCVar16 = local_ec;
                                        local_ec = pCVar16 + 1;
                                      } while ((g_CharacterClassificationTable
                                                [(byte)((char)*pCVar16 + 1)] & 2U) != 0);
                                      if (*pCVar16 != (CEvent)0x29) {
                                        local_ec = pCVar16;
                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                  (&DAT_02d0a460,"Can't find matching ) in playSfx command"
                                                  );
                                        return (CDemonActor *)0x0;
                                      }
                                      if (local_f0 != 0) {
                                        iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                          (local_13ad + 1,"cue",3);
                                        if (iVar5 == 0) {
                                          iVar5 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0
                                                            (1);
                                          if (iVar5 != 0) {
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
                                      iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                        ((char *)in_stack_00000008,
                                                         "setCameraAmbient",0x10);
                                      if ((iVar5 == 0) &&
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
                                                   &local_78);
                                        if (local_74 < 3) {
                                          crt_stdio_c_sprintf_FUN_005fdbd0
                                                    (&DAT_02d0a460,
                                                     "Error parsing setCameraAmbient parms");
                                          return (CDemonActor *)0x0;
                                        }
                                        local_ec = local_ec + local_74;
                                        uVar12 = 0xffffffff;
                                        pcVar8 = local_12e5 + 1;
                                        do {
                                          if (uVar12 == 0) break;
                                          uVar12 = uVar12 - 1;
                                          cVar2 = *pcVar8;
                                          pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                        } while (cVar2 != '\0');
                                        SVar14 = ~uVar12 - 1;
                                        if (0 < (int)SVar14) {
                                          pcVar8 = local_12e5 + ~uVar12;
                                          do {
                                            if ((g_CharacterClassificationTable
                                                 [(byte)(pcVar8[-1] + 1)] & 2U) == 0) break;
                                            SVar14 = SVar14 - 1;
                                            pcVar8 = pcVar8 + -1;
                                          } while (0 < (int)SVar14);
                                        }
                                        (local_12e5 + 1)[SVar14] = '\0';
                                        while ((g_CharacterClassificationTable
                                                [(byte)(local_12e5[1] + 1)] & 2U) != 0) {
                                          crt_string_c_memmove_FUN_005fe5e0
                                                    (local_12e5 + 1,local_12e5 + 2,SVar14);
                                          SVar14 = SVar14 - 1;
                                        }
                                        iVar5 = core_set_cpp_CDemonSet_FUN_0056b790(g_CDemonSetPtr);
                                        if (iVar5 < 0) {
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
                                        iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                          ((char *)in_stack_00000008,
                                                           "setCounter",10);
                                        if ((iVar5 == 0) &&
                                           ((g_CharacterClassificationTable
                                             [(byte)((char)in_stack_00000008[10] + 1)] & 0xe0U) == 0
                                           )) {
                                          local_ec = in_stack_00000008 + 10;
                                          while ((g_CharacterClassificationTable
                                                  [(byte)((char)*local_ec + 1)] & 2U) != 0) {
                                            local_ec = local_ec + 1;
                                          }
                                          local_6c = -1;
                                          crt_stdio_c_sscanf_FUN_0060013c
                                                    ((char *)local_ec,"( %[^,)]%n",local_ca5 + 1);
                                          if (local_6c < 5) {
                                            crt_stdio_c_sprintf_FUN_005fdbd0
                                                      (&DAT_02d0a460,
                                                       "Error parsing setCounter arguments");
                                            return (CDemonActor *)0x0;
                                          }
                                          local_ec = local_ec + local_6c;
                                          uVar12 = 0xffffffff;
                                          pcVar8 = local_ca5 + 1;
                                          do {
                                            if (uVar12 == 0) break;
                                            uVar12 = uVar12 - 1;
                                            cVar2 = *pcVar8;
                                            pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                          } while (cVar2 != '\0');
                                          SVar14 = ~uVar12 - 1;
                                          if (0 < (int)SVar14) {
                                            pcVar8 = local_ca5 + ~uVar12;
                                            do {
                                              if ((g_CharacterClassificationTable
                                                   [(byte)(pcVar8[-1] + 1)] & 2U) == 0) break;
                                              SVar14 = SVar14 - 1;
                                              pcVar8 = pcVar8 + -1;
                                            } while (0 < (int)SVar14);
                                          }
                                          (local_ca5 + 1)[SVar14] = '\0';
                                          while ((g_CharacterClassificationTable
                                                  [(byte)(local_ca5[1] + 1)] & 2U) != 0) {
                                            crt_string_c_memmove_FUN_005fe5e0
                                                      (local_ca5 + 1,local_ca5 + 2,SVar14);
                                            SVar14 = SVar14 - 1;
                                          }
                                          local_68 = 0;
                                          if (*local_ec == (CEvent)0x2c) {
                                            local_6c = -1;
                                            crt_stdio_c_sscanf_FUN_0060013c
                                                      ((char *)local_ec,",%d%n",&local_68);
                                            if (local_6c < 1) {
                                              crt_stdio_c_sprintf_FUN_005fdbd0
                                                        (&DAT_02d0a460,
                                                         "Error parsing setCounter value argument");
                                              return (CDemonActor *)0x0;
                                            }
                                            local_ec = local_ec + local_6c;
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
                                          iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                            ((char *)in_stack_00000008,
                                                             "setGroupAmbient",0xf);
                                          if ((iVar5 == 0) &&
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
                                                       &local_60);
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
                                            iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                              ((char *)in_stack_00000008,
                                                               "setLightFilterFrame",0x13);
                                            if ((iVar5 == 0) &&
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
                                                         &local_54);
                                              if (local_58 < 0) {
                                                pCVar7 = (CDemonActor *)
                                                         core_event_cpp_FUN_004aa2a0();
                                                return pCVar7;
                                              }
                                              local_ec = local_ec + local_58;
                                              core_set_cpp_CDemonSet_FUN_00570f10(g_CDemonSetPtr);
                                              if (local_50 == (C3DSLight *)0x0) {
                                                pCVar7 = (CDemonActor *)
                                                         core_event_cpp_FUN_004aa2a0();
                                                return pCVar7;
                                              }
                                              if ((local_54 < 0) ||
                                                 (local_50->filter_count <= local_54)) {
                                                pCVar7 = (CDemonActor *)
                                                         core_event_cpp_FUN_004aa2a0();
                                                return pCVar7;
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
                                              iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                                ((char *)in_stack_00000008,
                                                                 "setLeverState",0xd);
                                              if ((iVar5 == 0) &&
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
                                                           local_d6d + 1,local_1475 + 1);
                                                if (local_48 < 5) {
                                                  crt_stdio_c_sprintf_FUN_005fdbd0
                                                            (&DAT_02d0a460,
                                                             "Error parsing setLeverState command parms");
                                                  return (CDemonActor *)0x0;
                                                }
                                                local_ec = local_ec + local_48;
                                                uVar12 = 0xffffffff;
                                                pcVar8 = local_d6d + 1;
                                                do {
                                                  if (uVar12 == 0) break;
                                                  uVar12 = uVar12 - 1;
                                                  cVar2 = *pcVar8;
                                                  pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                                } while (cVar2 != '\0');
                                                SVar14 = ~uVar12 - 1;
                                                if (0 < (int)SVar14) {
                                                  pcVar8 = local_d6d + ~uVar12;
                                                  do {
                                                    if ((g_CharacterClassificationTable
                                                         [(byte)(pcVar8[-1] + 1)] & 2U) == 0) break;
                                                    SVar14 = SVar14 - 1;
                                                    pcVar8 = pcVar8 + -1;
                                                  } while (0 < (int)SVar14);
                                                }
                                                (local_d6d + 1)[SVar14] = '\0';
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(local_d6d[1] + 1)] & 2U) != 0) {
                                                  crt_string_c_memmove_FUN_005fe5e0
                                                            (local_d6d + 1,local_d6d + 2,SVar14);
                                                  SVar14 = SVar14 - 1;
                                                }
                                                uVar12 = 0xffffffff;
                                                pcVar8 = local_1475 + 1;
                                                do {
                                                  if (uVar12 == 0) break;
                                                  uVar12 = uVar12 - 1;
                                                  cVar2 = *pcVar8;
                                                  pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                                } while (cVar2 != '\0');
                                                SVar14 = ~uVar12 - 1;
                                                if (0 < (int)SVar14) {
                                                  pcVar8 = local_1475 + ~uVar12;
                                                  do {
                                                    if ((g_CharacterClassificationTable
                                                         [(byte)(pcVar8[-1] + 1)] & 2U) == 0) break;
                                                    SVar14 = SVar14 - 1;
                                                    pcVar8 = pcVar8 + -1;
                                                  } while (0 < (int)SVar14);
                                                }
                                                (local_1475 + 1)[SVar14] = '\0';
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(local_1475[1] + 1)] & 2U) != 0) {
                                                  crt_string_c_memmove_FUN_005fe5e0
                                                            (local_1475 + 1,local_1475 + 2,SVar14);
                                                  SVar14 = SVar14 - 1;
                                                }
                                                pCVar7 = (CDemonActor *)
                                                         core_event_cpp_FUN_004aa400();
                                                if (pCVar7 == (CDemonActor *)0x0) {
                                                  return (CDemonActor *)0x0;
                                                }
                                                if ((pCVar7 == DAT_0065d95c) || (local_f0 == 0)) {
                                                  iVar5 = core_event_cpp_CEventList_FUN_004add00
                                                                    (this_ptr);
                                                  if (iVar5 != 0) {
                                                    return (CDemonActor *)0x0;
                                                  }
                                                }
                                                else {
                                                  iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_1475 + 1);
                                                  if (iVar5 == 0) {
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
                                                iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                                  ((char *)in_stack_00000008,
                                                                   "setModelState",0xd);
                                                if ((iVar5 == 0) &&
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
                                                             local_985 + 1,local_8bd + 1);
                                                  if (local_40 < 5) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_02d0a460,
                                                               "Error parsing setModelState command parms");
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  local_ec = local_ec + local_40;
                                                  uVar12 = 0xffffffff;
                                                  pcVar8 = local_985 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar8;
                                                    pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar8 = local_985 + ~uVar12;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar8[-1] + 1)] & 2U) == 0)
                                                      break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar8 = pcVar8 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_985 + 1)[SVar14] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_985[1] + 1)] & 2U) != 0) {
                                                    crt_string_c_memmove_FUN_005fe5e0
                                                              (local_985 + 1,local_985 + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar8 = local_8bd + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar8;
                                                    pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar8 = local_8bd + ~uVar12;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar8[-1] + 1)] & 2U) == 0)
                                                      break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar8 = pcVar8 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_8bd + 1)[SVar14] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_8bd[1] + 1)] & 2U) != 0) {
                                                    crt_string_c_memmove_FUN_005fe5e0
                                                              (local_8bd + 1,local_8bd + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  pCVar7 = (CDemonActor *)
                                                           core_event_cpp_FUN_004aa400();
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (pCVar7 != DAT_0065d95c) {
                                                    pCVar10 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                                            ((CMotionController *)(pCVar7 + 1));
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                                                            (pCVar10);
                                                  if (iVar5 < 0) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_02d0a460,
                                                               "Model %s does not have state %s",
                                                               pCVar7[0x1a].create_event + 0x50,
                                                               local_8bd + 1);
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                                            ((CMotionController *)(pCVar7 + 1),iVar5
                                                             ,1);
                                                  }
                                                  }
                                                }
                                                else {
                                                  iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                                    ((char *)in_stack_00000008,
                                                                     "setTimer",8);
                                                  if ((iVar5 == 0) &&
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
                                                               local_a4d + 1,&local_3c);
                                                    if (local_38 < 3) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_02d0a460,
                                                                 "Error parsing setTimer command parms"
                                                                );
                                                      return (CDemonActor *)0x0;
                                                    }
                                                    local_ec = local_ec + local_38;
                                                    uVar12 = 0xffffffff;
                                                    pcVar8 = local_a4d + 1;
                                                    do {
                                                      if (uVar12 == 0) break;
                                                      uVar12 = uVar12 - 1;
                                                      cVar2 = *pcVar8;
                                                      pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    SVar14 = ~uVar12 - 1;
                                                    if (0 < (int)SVar14) {
                                                      pcVar8 = local_a4d + ~uVar12;
                                                      do {
                                                        if ((g_CharacterClassificationTable
                                                             [(byte)(pcVar8[-1] + 1)] & 2U) == 0)
                                                        break;
                                                        SVar14 = SVar14 - 1;
                                                        pcVar8 = pcVar8 + -1;
                                                      } while (0 < (int)SVar14);
                                                    }
                                                    (local_a4d + 1)[SVar14] = '\0';
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(local_a4d[1] + 1)] & 2U) != 0) {
                                                      crt_string_c_memmove_FUN_005fe5e0
                                                                (local_a4d + 1,local_a4d + 2,SVar14)
                                                      ;
                                                      SVar14 = SVar14 - 1;
                                                    }
                                                    uVar12 = 0xffffffff;
                                                    pcVar8 = local_a4d + 1;
                                                    do {
                                                      if (uVar12 == 0) break;
                                                      uVar12 = uVar12 - 1;
                                                      cVar2 = *pcVar8;
                                                      pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    if (0x1f < ~uVar12 - 1) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_02d0a460,
                                                                 "Timer name \"%s\" is too long, (max %d chars)"
                                                                 ,local_a4d + 1,0x1f);
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
                                                    iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                                      ((char *)in_stack_00000008,
                                                                       "setWeather",10);
                                                    if ((iVar5 == 0) &&
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
                                                                 local_e35 + 1);
                                                      if (local_34 < 3) {
                                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                                  (&DAT_02d0a460,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return (CDemonActor *)0x0;
                                                  }
                                                  local_ec = local_ec + local_34;
                                                  uVar12 = 0xffffffff;
                                                  pcVar8 = local_e35 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar8;
                                                    pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar8 = local_e35 + ~uVar12;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar8[-1] + 1)] & 2U) == 0)
                                                      break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar8 = pcVar8 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_e35 + 1)[SVar14] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_e35[1] + 1)] & 2U) != 0) {
                                                    crt_string_c_memmove_FUN_005fe5e0
                                                              (local_e35 + 1,local_e35 + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                                                                    (local_e35 + 1,"none");
                                                  if (((iVar5 != 0) &&
                                                      (iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                                                                         (local_e35 + 1,
                                                                          "rain"),
                                                      iVar5 != 0)) &&
                                                     (iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                                                                        (local_e35 + 1,
                                                                         "snow"),
                                                     iVar5 != 0)) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_02d0a460,
                                                               "Invalid weather type: %s");
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (local_f0 != 0) {
                                                    core_weather_cpp_CWeather_FUN_005ef8c0();
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                                      ((char *)in_stack_00000008,
                                                                       "shakeScreen",0xb);
                                                    if ((iVar5 == 0) &&
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
                                                                 local_2c,local_80,local_28);
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
                                                    iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                                      ((char *)in_stack_00000008,
                                                                       "slamModelToMotion",
                                                                       0x11);
                                                    if ((iVar5 == 0) &&
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
                                                                 local_72d + 1,local_40d + 1);
                                                      if (local_20 < 5) {
                                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                                  (&DAT_02d0a460,
                                                                                                                                      
                                                  "Error parsing slamModelToMotion command parms");
                                                  return (CDemonActor *)0x0;
                                                  }
                                                  local_ec = local_ec + local_20;
                                                  uVar12 = 0xffffffff;
                                                  pcVar8 = local_72d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar8;
                                                    pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar8 = local_72d + ~uVar12;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar8[-1] + 1)] & 2U) == 0)
                                                      break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar8 = pcVar8 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_72d + 1)[SVar14] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_72d[1] + 1)] & 2U) != 0) {
                                                    crt_string_c_memmove_FUN_005fe5e0
                                                              (local_72d + 1,local_72d + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar8 = local_40d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar8;
                                                    pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar8 = local_40d + ~uVar12;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar8[-1] + 1)] & 2U) == 0)
                                                      break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar8 = pcVar8 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_40d + 1)[SVar14] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_40d[1] + 1)] & 2U) != 0) {
                                                    crt_string_c_memmove_FUN_005fe5e0
                                                              (local_40d + 1,local_40d + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  pCVar7 = (CDemonActor *)
                                                           core_event_cpp_FUN_004aa400();
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (pCVar7 != DAT_0065d95c) {
                                                    pCVar9 = pCVar7 + 1;
                                                    pCVar10 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                                            ((CMotionController *)pCVar9);
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                            (pCVar10);
                                                  if (iVar5 < 0) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_02d0a460,
                                                               "Model %s does not have motion %s",
                                                               pCVar7[0x1a].create_event + 0x50,
                                                               local_40d + 1);
                                                    return (CDemonActor *)0x0;
                                                  }
                                                  if (local_f0 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                                                            ((CMotionController *)pCVar9,iVar5,0.0);
                                                  pSVar11 = 
                                                  core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                                            ((CMotionController *)pCVar9);
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                                            ((CMotionController *)pCVar9,
                                                             pSVar11->state_index,
                                                             (int)in_stack_ffffe946);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                                      ((char *)in_stack_00000008,
                                                                       "switchCamera",0xc);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)((char)in_stack_00000008[0xc] + 1)]
                                                        & 0xe0U) == 0)) {
                                                      pCVar16 = in_stack_00000008 + 0xc;
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)((char)*pCVar16 + 1)] & 2U) !=
                                                             0) {
                                                        pCVar16 = pCVar16 + 1;
                                                      }
                                                      local_1c = -1;
                                                      puVar17 = &DAT_006794a0;
                                                      puVar19 = local_344;
                                                      for (iVar5 = 0x19; iVar5 != 0;
                                                          iVar5 = iVar5 + -1) {
                                                        *puVar19 = *puVar17;
                                                        puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
                                                        puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
                                                      }
                                                      local_ec = pCVar16;
                                                      crt_stdio_c_sscanf_FUN_0060013c
                                                                ((char *)pCVar16," ( %[^ ,)]%n",
                                                                 local_344);
                                                      if (local_1c < 2) {
                                                        pCVar7 = (CDemonActor *)
                                                                 core_event_cpp_FUN_004aa2a0();
                                                        return pCVar7;
                                                      }
                                                      local_ec = local_ec + local_1c;
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)((char)*local_ec + 1)] & 2U) !=
                                                             0) {
                                                        local_ec = local_ec + 1;
                                                      }
                                                      iVar5 = core_set_cpp_CDemonSet_FUN_0056b790
                                                                        (g_CDemonSetPtr);
                                                      if (iVar5 < 0) {
                                                        pCVar7 = (CDemonActor *)
                                                                 core_event_cpp_FUN_004aa2a0();
                                                        return pCVar7;
                                                      }
                                                      local_70 = 3.0;
                                                      if (*local_ec == (CEvent)0x2c) {
                                                        local_1c = -1;
                                                        crt_stdio_c_sscanf_FUN_0060013c
                                                                  ((char *)local_ec,",%f%n",
                                                                   &local_70);
                                                        if (local_1c < 2) {
                                                          pCVar7 = (CDemonActor *)
                                                                   core_event_cpp_FUN_004aa2a0();
                                                          return pCVar7;
                                                        }
                                                        local_ec = local_ec + local_1c;
                                                        while ((g_CharacterClassificationTable
                                                                [(byte)((char)*local_ec + 1)] & 2U)
                                                               != 0) {
                                                          local_ec = local_ec + 1;
                                                        }
                                                      }
                                                      if (*local_ec != (CEvent)0x29) {
                                                        pCVar7 = (CDemonActor *)
                                                                 core_event_cpp_FUN_004aa2a0();
                                                        return pCVar7;
                                                      }
                                                      local_ec = local_ec + 1;
                                                      if (local_f0 != 0) {
                                                                                                                
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00
                                                            (g_CDemonSetPtr,iVar5,local_70);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = crt_string_c_strnicmp_FUN_005ff070
                                                                      ((char *)in_stack_00000008,
                                                                       "warpTo",6);
                                                    if ((iVar5 != 0) ||
                                                       ((g_CharacterClassificationTable
                                                         [(byte)((char)in_stack_00000008[6] + 1)] &
                                                        0xe0U) != 0)) {
                                                      pCVar7 = (CDemonActor *)
                                                               core_event_cpp_FUN_004aa2a0();
                                                      return pCVar7;
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
                                                               local_bdd + 1,local_59d + 1);
                                                    if (local_18 < 5) {
                                                      pCVar7 = (CDemonActor *)
                                                               core_event_cpp_FUN_004aa2a0();
                                                      return pCVar7;
                                                    }
                                                    uVar12 = 0xffffffff;
                                                    pcVar8 = local_bdd + 1;
                                                    do {
                                                      if (uVar12 == 0) break;
                                                      uVar12 = uVar12 - 1;
                                                      cVar2 = *pcVar8;
                                                      pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    SVar14 = ~uVar12 - 1;
                                                    if (0 < (int)SVar14) {
                                                      pcVar8 = local_bdd + ~uVar12;
                                                      do {
                                                        if ((g_CharacterClassificationTable
                                                             [(byte)(pcVar8[-1] + 1)] & 2U) == 0)
                                                        break;
                                                        SVar14 = SVar14 - 1;
                                                        pcVar8 = pcVar8 + -1;
                                                      } while (0 < (int)SVar14);
                                                    }
                                                    (local_bdd + 1)[SVar14] = '\0';
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(local_bdd[1] + 1)] & 2U) != 0) {
                                                      crt_string_c_memmove_FUN_005fe5e0
                                                                (local_bdd + 1,local_bdd + 2,SVar14)
                                                      ;
                                                      SVar14 = SVar14 - 1;
                                                    }
                                                    uVar12 = 0xffffffff;
                                                    pcVar8 = local_59d + 1;
                                                    do {
                                                      if (uVar12 == 0) break;
                                                      uVar12 = uVar12 - 1;
                                                      cVar2 = *pcVar8;
                                                      pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    SVar14 = ~uVar12 - 1;
                                                    if (0 < (int)SVar14) {
                                                      pcVar8 = local_59d + ~uVar12;
                                                      do {
                                                        if ((g_CharacterClassificationTable
                                                             [(byte)(pcVar8[-1] + 1)] & 2U) == 0)
                                                        break;
                                                        SVar14 = SVar14 - 1;
                                                        pcVar8 = pcVar8 + -1;
                                                      } while (0 < (int)SVar14);
                                                    }
                                                    (local_59d + 1)[SVar14] = '\0';
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(local_59d[1] + 1)] & 2U) != 0) {
                                                      crt_string_c_memmove_FUN_005fe5e0
                                                                (local_59d + 1,local_59d + 2,SVar14)
                                                      ;
                                                      SVar14 = SVar14 - 1;
                                                    }
                                                    local_ec = local_ec + local_18;
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)((char)*local_ec + 1)] & 2U) != 0
                                                          ) {
                                                      local_ec = local_ec + 1;
                                                    }
                                                    pCVar7 = (CDemonActor *)
                                                             core_event_cpp_FUN_004aa400();
                                                    if (pCVar7 == (CDemonActor *)0x0) {
                                                      return (CDemonActor *)0x0;
                                                    }
                                                    if (pCVar7 == DAT_0065d95c) {
                                                      local_f0 = 0;
                                                    }
                                                    local_18 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              (local_59d + 1,
                                                               "%f,%f,%f,%f,%f,%f%n",&local_11c,
                                                               &local_11c.y,&local_11c.z,&local_134,
                                                               &local_134.z,&local_134.y);
                                                    if (local_18 < 0) {
                                                      if ((local_f0 != 0) &&
                                                         ((COrientation *)&local_134 !=
                                                          &pCVar7->orient)) {
                                                        local_134.x = (pCVar7->orient).pitch;
                                                        local_134.y = (pCVar7->orient).bank;
                                                        local_134.z = (pCVar7->orient).heading;
                                                      }
                                                      crt_stdio_c_sscanf_FUN_0060013c
                                                                (local_59d + 1,"%f,%f,%f,%f%n",
                                                                 &local_11c,&local_11c.y,
                                                                 &local_11c.z,&local_134.y);
                                                    }
                                                    if (local_18 < 0) {
                                                      if ((local_f0 != 0) &&
                                                         ((COrientation *)&local_134 !=
                                                          &pCVar7->orient)) {
                                                        local_134.x = (pCVar7->orient).pitch;
                                                        local_134.y = (pCVar7->orient).bank;
                                                        local_134.z = (pCVar7->orient).heading;
                                                      }
                                                      crt_stdio_c_sscanf_FUN_0060013c
                                                                (local_59d + 1,"%f,%f,%f%n",
                                                                 &local_11c,&local_11c.y,
                                                                 &local_11c.z);
                                                    }
                                                    if (local_18 < 0) {
                                                      pCVar9 = (CDemonActor *)
                                                               core_event_cpp_FUN_004aa400();
                                                      if (pCVar9 == (CDemonActor *)0x0) {
                                                        return (CDemonActor *)0x0;
                                                      }
                                                      if (pCVar9 == DAT_0065d95c) {
                                                        local_f0 = 0;
                                                      }
                                                      else {
                                                        if ((CLocation *)&local_11c !=
                                                            &pCVar9->location) {
                                                          local_11c.x = (pCVar9->location).position.
                                                                        x;
                                                          local_11c.y = (pCVar9->location).position.
                                                                        y;
                                                          local_11c.z = (pCVar9->location).position.
                                                                        z;
                                                        }
                                                        if ((COrientation *)&local_134 !=
                                                            &pCVar9->orient) {
                                                          local_134.x = (pCVar9->orient).pitch;
                                                          local_134.y = (pCVar9->orient).bank;
                                                          local_134.z = (pCVar9->orient).heading;
                                                        }
                                                        uVar12 = 0xffffffff;
                                                        pcVar8 = local_59d + 1;
                                                        do {
                                                          if (uVar12 == 0) break;
                                                          uVar12 = uVar12 - 1;
                                                          cVar2 = *pcVar8;
                                                          pcVar8 = pcVar8 + (uint)bVar20 * -2 + 1;
                                                        } while (cVar2 != '\0');
                                                        local_18 = ~uVar12 - 1;
                                                      }
                                                    }
                                                    if ((local_18 < 0) ||
                                                       (local_59d[local_18 + 1] != '\0')) {
                                                      pCVar7 = (CDemonActor *)
                                                               core_event_cpp_FUN_004aa2a0();
                                                      return pCVar7;
                                                    }
                                                    if (local_f0 != 0) {
                                                      pCVar9 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040c790
                                                            (pCVar7,g_CCharacterClassInfo.name_hash)
                                                  ;
                                                  if (pCVar9 != (CDemonActor *)0x0) {
                                                    (*pCVar9->vtable[1].processFootstep)
                                                              (pCVar9,(float)in_stack_ffffe946);
                                                    (*pCVar9->vtable[1].handleFootstep)
                                                              (pCVar9,in_stack_ffffe946,
                                                               in_stack_ffffe94a,in_stack_ffffe94e);
                                                  }
                                                  (*pCVar7->vtable->setPositionAndOrientation)
                                                            (pCVar7,&local_11c,&local_134);
                                                  if (pCVar7 == (CDemonActor *)
                                                                g_CScriptPtr->focusActor) {
                                                    pCVar4 = g_CScriptPtr;
                                                    pCVar4->padding_0x10[0] = '\x01';
                                                    pCVar4->padding_0x10[1] = '\0';
                                                    pCVar4->padding_0x10[2] = '\0';
                                                    pCVar4->padding_0x10[3] = '\0';
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
      pCVar7 = (CDemonActor *)core_event_cpp_FUN_004aa2a0();
      return pCVar7;
    }
  }
LAB_004aace6:
  return (CDemonActor *)&DAT_00000001;
}
