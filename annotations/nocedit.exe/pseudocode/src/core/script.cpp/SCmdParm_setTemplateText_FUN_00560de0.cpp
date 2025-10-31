// Name: core_script.cpp_SCmdParm_setTemplateText_FUN_00560de0
// Address: 00560de0
// Address Range: [[00560de0, 0056160a]]
// Convention: unknown
// Signature: undefined core_script.cpp_SCmdParm_setTemplateText_FUN_00560de0()
// Cross-references:
//   core_script.cpp_SCmdParse_parse_FUN_00561fd0 (00561fd0) at 00562293 [UNCONDITIONAL_CALL]
//   core_script.cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0 (005643d0) at 0056443c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_SCmdParm_setTemplateText_00643649
//   TerminatedCString s_SCmdParm_setTemplateText_00643680
//   undefined4 s_Int_006436bc
//   undefined4 s_Int_006436c5
//   undefined4 s_nt_006436c6
//   undefined4 s_t_006436c7
//   undefined4 s__006436c8
//   undefined4 s_Float_006436ce
//   undefined4 s_Float_006436d9
//   undefined4 s_loat_006436da
//   undefined4 s_Text_006436e4
//   undefined4 s_Text_006436ee
//   undefined4 s_ext_006436ef
//   undefined4 s_ActorVariable_006436f8
//   undefined4 s_ActorVariable_0064370b
//   undefined4 s_ctorVariable_0064370c
//   undefined4 s_ActorClass_0064371e
//   undefined4 s_ActorClass_0064372e
//   undefined4 s_ctorClass_0064372f
//   undefined4 s_Actor_0064373e
//   undefined4 s_Actor_00643749
//   undefined4 s_ctor_0064374a
//   undefined4 s_Condition_00643754
//   undefined4 s_Condition_00643763
//   undefined4 s_ondition_00643764
//   undefined4 s_Label_00643772
//   undefined4 s_Label_0064377d
//   undefined4 s_abel_0064377e
//   undefined4 s_Camera_00643788
//   undefined4 s_Camera_00643794
//   undefined4 s_amera_00643795
//   undefined4 s_ControlButton_006437a0
//   undefined4 s_ControlButton_006437b3
//   undefined4 s_ontrolButton_006437b4
//   undefined4 s_DamageType_006437c6
//   undefined4 s_DamageType_006437d6
//   undefined4 s_amageType_006437d7
//   undefined4 s_DeathType_006437e6
//   undefined4 s_DeathType_006437f5
//   undefined4 s_eathType_006437f6
//   undefined4 s_SfxSet_00643804
//   undefined4 s_SfxSet_00643810
//   undefined4 s_fxSet_00643811
//   undefined4 s_SfxUsed_0064381c
//   undefined4 s_SfxUsed_00643829
//   undefined4 s_fxUsed_0064382a
//   undefined4 s_Wav_00643836
//   undefined4 s_Wav_0064383f
//   undefined4 s_av_00643840
//   undefined4 s_Weather_00643848
//   undefined4 s_Weather_00643855
//   undefined4 s_eather_00643856
//   undefined4 s_CounterSet_00643862
//   undefined4 s_CounterSet_00643872
//   undefined4 s_ounterSet_00643873
//   undefined4 s_CounterUsed_00643882
//   undefined4 s_CounterUsed_00643893
//   undefined4 s_ounterUsed_00643894
//   undefined4 s_LetterBoxMode_006438a4
//   undefined4 s_LetterBoxMode_006438b7
//   undefined4 s_etterBoxMode_006438b8
//   undefined4 s_Filename_006438ca
//   undefined4 s_Filename_006438d8
//   undefined4 s_ilename_006438d9
//   undefined4 s_SpotLight_006438e6
//   undefined4 s_SpotLight_006438f5
//   undefined4 s_potLight_006438f6
//   undefined4 s_EventCommand_00643904
//   undefined4 s_EventCommand_00643916
//   undefined4 s_ventCommand_00643917
//   undefined4 s_PersistentEventName_00643928
//   undefined4 s_PersistentEventName_00643941
//   undefined4 s_ersistentEventName_00643942
//   undefined4 s_GameFlagName_0064395a
//   undefined4 s_GameFlagName_0064396c
//   undefined4 s_ameFlagName_0064396d
//   undefined4 s_MotionName_0064397e
//   undefined4 s_MotionName_0064398e
//   undefined4 s_otionName_0064398f
//   undefined4 s_MotionState_0064399e
//   undefined4 s_MotionState_006439af
//   undefined4 s_otionState_006439b0
//   undefined4 s_DBTag_006439c0
//   undefined4 s_DBTag_006439cb
//   undefined4 s_BTag_006439cc
//   undefined4 s_HeroTask_006439d6
//   undefined4 s_HeroTask_006439e4
//   undefined4 s_eroTask_006439e5
//   undefined4 s_Timer_006439f2
//   undefined4 s_Timer_006439fd
//   undefined4 s_imer_006439fe
//   undefined4 s_RelOp_00643a08
//   undefined4 s_RelOp_00643a13
//   undefined4 s_elOp_00643a14
//   undefined4 s_BodyPartList_00643a1e
//   undefined4 s_BodyPartList_00643a30
//   undefined4 s_odyPartList_00643a31
//   undefined4 s_IniVariable_00643a42
//   undefined4 s_IniVariable_00643a53
//   undefined4 s_niVariable_00643a54
//   TerminatedCString s_SCmdParm_setTemplateText_00643a5f
//   TerminatedCString s_core_script_cpp_00643a95
//   TerminatedCString s_Missing_closing_in_templ_00643aa8
//   TerminatedCString s_SCmdParm_setTemplateText_00643ad1
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_strnicmp_FUN_005ff070
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_SCmdParm_setTemplateText(CScriptCmdParm* param_1,
   undefined4 param_2, undefined4 param_3) */

undefined4 core_script_cpp_SCmdParm_setTemplateText_FUN_00560de0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int in_stack_00000004;
  char *in_stack_00000008;
  int *in_stack_0000000c;
  char *pcVar5;
  
  pcVar3 = in_stack_00000008 + *in_stack_0000000c;
  if (*pcVar3 != '<') {
    pcVar5 = "SCmdParm::setTemplateText - expected opening '<' in %s";
LAB_00560e30:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar5,pcVar3);
    return 0;
  }
  *in_stack_0000000c = *in_stack_0000000c + 1;
  pcVar3 = (char *)(in_stack_00000004 + 500);
  while( true ) {
    iVar2 = *in_stack_0000000c;
    if (in_stack_00000008[iVar2] == '>') break;
    if (in_stack_00000008[iVar2] == '\0') {
      pcVar5 = "SCmdParm::setTemplateText - expected closing '>' in %s";
      pcVar3 = in_stack_00000008;
      goto LAB_00560e30;
    }
    *in_stack_0000000c = iVar2 + 1;
    *pcVar3 = in_stack_00000008[iVar2];
    pcVar3 = pcVar3 + 1;
  }
  *pcVar3 = '\0';
  *in_stack_0000000c = *in_stack_0000000c + 1;
  pcVar5 = (char *)(in_stack_00000004 + 500);
  pcVar3 = (char *)0x0;
  iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmInt" + 5,3);
  if (iVar2 == 0) {
    *(undefined4 *)(in_stack_00000004 + 600) = 0;
    pcVar3 = (char *)(in_stack_00000004 + 0x1f7);
    pcVar5 = "kParmInt" + 5;
  }
  else {
    iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmFloat" + 5,5);
    if (iVar2 == 0) {
      pcVar3 = (char *)(in_stack_00000004 + 0x1f9);
      pcVar5 = "kParmFloat" + 5;
      *(undefined4 *)(in_stack_00000004 + 600) = 1;
    }
    else {
      iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmText" + 5,4);
      if (iVar2 == 0) {
        pcVar3 = (char *)(in_stack_00000004 + 0x1f8);
        pcVar5 = "kParmText" + 5;
        *(undefined4 *)(in_stack_00000004 + 600) = 2;
      }
      else {
        iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmActorVariable" + 5,0xd);
        if (iVar2 == 0) {
          pcVar3 = (char *)(in_stack_00000004 + 0x201);
          pcVar5 = "kParmActorVariable" + 5;
          *(undefined4 *)(in_stack_00000004 + 600) = 7;
        }
        else {
          iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmActorClass" + 5,10);
          if (iVar2 == 0) {
            pcVar3 = (char *)(in_stack_00000004 + 0x1fe);
            pcVar5 = "kParmActorClass" + 5;
            *(undefined4 *)(in_stack_00000004 + 600) = 0x1b;
          }
          else {
            iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmActor" + 5,5);
            if (iVar2 == 0) {
              pcVar3 = (char *)(in_stack_00000004 + 0x1f9);
              pcVar5 = "kParmActor" + 5;
              *(undefined4 *)(in_stack_00000004 + 600) = 3;
            }
            else {
              iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmCondition" + 5,9);
              if (iVar2 == 0) {
                pcVar3 = (char *)(in_stack_00000004 + 0x1fd);
                pcVar5 = "kParmCondition" + 5;
                *(undefined4 *)(in_stack_00000004 + 600) = 4;
              }
              else {
                iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmLabel" + 5,5);
                if (iVar2 == 0) {
                  pcVar3 = (char *)(in_stack_00000004 + 0x1f9);
                  pcVar5 = "kParmLabel" + 5;
                  *(undefined4 *)(in_stack_00000004 + 600) = 5;
                }
                else {
                  iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmCamera" + 5,6);
                  if (iVar2 == 0) {
                    pcVar3 = (char *)(in_stack_00000004 + 0x1fa);
                    pcVar5 = "kParmCamera" + 5;
                    *(undefined4 *)(in_stack_00000004 + 600) = 6;
                  }
                  else {
                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                      (pcVar5,"kParmControlButton" + 5,0xd);
                    if (iVar2 == 0) {
                      pcVar3 = (char *)(in_stack_00000004 + 0x201);
                      pcVar5 = "kParmControlButton" + 5;
                      *(undefined4 *)(in_stack_00000004 + 600) = 8;
                    }
                    else {
                      iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                        (pcVar5,"kParmDamageType" + 5,10);
                      if (iVar2 == 0) {
                        pcVar3 = (char *)(in_stack_00000004 + 0x1fe);
                        pcVar5 = "kParmDamageType" + 5;
                        *(undefined4 *)(in_stack_00000004 + 600) = 9;
                      }
                      else {
                        iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                          (pcVar5,"kParmDeathType" + 5,9);
                        if (iVar2 == 0) {
                          pcVar3 = (char *)(in_stack_00000004 + 0x1fd);
                          pcVar5 = "kParmDeathType" + 5;
                          *(undefined4 *)(in_stack_00000004 + 600) = 10;
                        }
                        else {
                          iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                            (pcVar5,"kParmSfxSet" + 5,6);
                          if (iVar2 == 0) {
                            pcVar3 = (char *)(in_stack_00000004 + 0x1fa);
                            pcVar5 = "kParmSfxSet" + 5;
                            *(undefined4 *)(in_stack_00000004 + 600) = 0xb;
                          }
                          else {
                            iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                              (pcVar5,"kParmSfxUsed" + 5,7);
                            if (iVar2 == 0) {
                              pcVar3 = (char *)(in_stack_00000004 + 0x1fb);
                              pcVar5 = "kParmSfxUsed" + 5;
                              *(undefined4 *)(in_stack_00000004 + 600) = 0xc;
                            }
                            else {
                              iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                (pcVar5,"kParmWav" + 5,3);
                              if (iVar2 == 0) {
                                pcVar3 = (char *)(in_stack_00000004 + 0x1f7);
                                pcVar5 = "kParmWav" + 5;
                                *(undefined4 *)(in_stack_00000004 + 600) = 0xd;
                              }
                              else {
                                iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                  (pcVar5,"kParmWeather" + 5,7);
                                if (iVar2 == 0) {
                                  pcVar3 = (char *)(in_stack_00000004 + 0x1fb);
                                  pcVar5 = "kParmWeather" + 5;
                                  *(undefined4 *)(in_stack_00000004 + 600) = 0xe;
                                }
                                else {
                                  iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                    (pcVar5,"kParmCounterSet" + 5,10);
                                  if (iVar2 == 0) {
                                    pcVar3 = (char *)(in_stack_00000004 + 0x1fe);
                                    pcVar5 = "kParmCounterSet" + 5;
                                    *(undefined4 *)(in_stack_00000004 + 600) = 0xf;
                                  }
                                  else {
                                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                      (pcVar5,"kParmCounterUsed" + 5,0xb);
                                    if (iVar2 == 0) {
                                      pcVar3 = (char *)(in_stack_00000004 + 0x1ff);
                                      pcVar5 = "kParmCounterUsed" + 5;
                                      *(undefined4 *)(in_stack_00000004 + 600) = 0x10;
                                    }
                                    else {
                                      iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                        (pcVar5,"kParmLetterBoxMode" + 5,
                                                         0xd);
                                      if (iVar2 == 0) {
                                        pcVar3 = (char *)(in_stack_00000004 + 0x201);
                                        pcVar5 = "kParmLetterBoxMode" + 5;
                                        *(undefined4 *)(in_stack_00000004 + 600) = 0x11;
                                      }
                                      else {
                                        iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                          (pcVar5,"kParmFilename" + 5,8);
                                        if (iVar2 == 0) {
                                          pcVar3 = (char *)(in_stack_00000004 + 0x1fc);
                                          pcVar5 = "kParmFilename" + 5;
                                          *(undefined4 *)(in_stack_00000004 + 600) = 0x12;
                                        }
                                        else {
                                          iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                            (pcVar5,"kParmSpotLight" + 5,9)
                                          ;
                                          if (iVar2 == 0) {
                                            pcVar3 = (char *)(in_stack_00000004 + 0x1fd);
                                            pcVar5 = "kParmSpotLight" + 5;
                                            *(undefined4 *)(in_stack_00000004 + 600) = 0x13;
                                          }
                                          else {
                                            iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                              (pcVar5,"kParmEventCommand" +
                                                                      5,0xc);
                                            if (iVar2 == 0) {
                                              pcVar3 = (char *)(in_stack_00000004 + 0x200);
                                              pcVar5 = "kParmEventCommand" + 5;
                                              *(undefined4 *)(in_stack_00000004 + 600) = 0x14;
                                            }
                                            else {
                                              iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                (pcVar5,
                                                  "kParmPersistentEventName" + 5,0x13);
                                              if (iVar2 == 0) {
                                                pcVar3 = (char *)(in_stack_00000004 + 0x207);
                                                pcVar5 = "kParmPersistentEventName" + 5;
                                                *(undefined4 *)(in_stack_00000004 + 600) = 0x15;
                                              }
                                              else {
                                                iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                  (pcVar5,
                                                  "kParmGameFlagName" + 5,0xc);
                                                if (iVar2 == 0) {
                                                  pcVar3 = (char *)(in_stack_00000004 + 0x200);
                                                  pcVar5 = "kParmGameFlagName" + 5;
                                                  *(undefined4 *)(in_stack_00000004 + 600) = 0x16;
                                                }
                                                else {
                                                  iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                    (pcVar5,
                                                  "kParmMotionName" + 5,10);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = (char *)(in_stack_00000004 + 0x1fe);
                                                    pcVar5 = "kParmMotionName" + 5;
                                                    *(undefined4 *)(in_stack_00000004 + 600) = 0x17;
                                                  }
                                                  else {
                                                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar5,
                                                  "kParmMotionState" + 5,0xb);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = (char *)(in_stack_00000004 + 0x1ff);
                                                    pcVar5 = "kParmMotionState" + 5;
                                                    *(undefined4 *)(in_stack_00000004 + 600) = 0x18;
                                                  }
                                                  else {
                                                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar5,"kParmDBTag"
                                                                              + 5,5);
                                                    if (iVar2 == 0) {
                                                      pcVar3 = (char *)(in_stack_00000004 + 0x1f9);
                                                      pcVar5 = "kParmDBTag" + 5;
                                                      *(undefined4 *)(in_stack_00000004 + 600) =
                                                           0x19;
                                                    }
                                                    else {
                                                      iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                        (pcVar5,
                                                  "kParmHeroTask" + 5,8);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = (char *)(in_stack_00000004 + 0x1fc);
                                                    pcVar5 = "kParmHeroTask" + 5;
                                                    *(undefined4 *)(in_stack_00000004 + 600) = 0x1a;
                                                  }
                                                  else {
                                                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar5,"kParmTimer"
                                                                              + 5,5);
                                                    if (iVar2 == 0) {
                                                      pcVar3 = (char *)(in_stack_00000004 + 0x1f9);
                                                      pcVar5 = "kParmTimer" + 5;
                                                      *(undefined4 *)(in_stack_00000004 + 600) =
                                                           0x1c;
                                                    }
                                                    else {
                                                      iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                        (pcVar5,
                                                  "kParmRelOp" + 5,5);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = (char *)(in_stack_00000004 + 0x1f9);
                                                    pcVar5 = "kParmRelOp" + 5;
                                                    *(undefined4 *)(in_stack_00000004 + 600) = 0x1d;
                                                  }
                                                  else {
                                                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar5,
                                                  "kParmBodyPartList" + 5,0xc);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = (char *)(in_stack_00000004 + 0x200);
                                                    pcVar5 = "kParmBodyPartList" + 5;
                                                    *(undefined4 *)(in_stack_00000004 + 600) = 0x1e;
                                                  }
                                                  else {
                                                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                      ((char *)(in_stack_00000004 +
                                                                               500),
                                                                       "kParmIniVariable" +
                                                                       5,0xb);
                                                    if (iVar2 != 0) goto LAB_00560ead;
                                                    pcVar3 = (char *)(in_stack_00000004 + 0x1ff);
                                                    pcVar5 = "kParmIniVariable" + 5;
                                                    *(undefined4 *)(in_stack_00000004 + 600) = 0x1f;
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
  }
  pcVar4 = (char *)(in_stack_00000004 + 0x2c0);
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
LAB_00560ead:
  if (pcVar3 == (char *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"SCmdParm::setTemplateText - %s unknown template type!");
    return 0;
  }
  *(undefined1 *)(in_stack_00000004 + 0x25c) = 0;
  if (*pcVar3 != '\0') {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if (cVar1 == ':') {
        cVar1 = *pcVar3;
        pcVar5 = (char *)(in_stack_00000004 + 0x25c);
        while ((cVar1 != '\0' && (*pcVar3 != '\''))) {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          *pcVar5 = cVar1;
          cVar1 = *pcVar3;
          pcVar5 = pcVar5 + 1;
        }
        *pcVar5 = '\0';
      }
      else {
        if (cVar1 != '\'') {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"SCmdParm::setTemplateText - Invalid template string: %s");
          return 0;
        }
        cVar1 = *pcVar3;
        pcVar5 = (char *)(in_stack_00000004 + 0x2c0);
        while (cVar1 != '\'') {
          if (*pcVar3 == '\0') {
            g_CurrentFilename = "..\\core\\script.cpp";
            g_CurrentLineNumber = 0x1188;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Missing closing ' in template string: %s");
          }
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
          cVar1 = *pcVar3;
        }
        pcVar3 = pcVar3 + 1;
        *pcVar5 = '\0';
      }
    } while (*pcVar3 != '\0');
  }
  return 1;
}


// Assembly code:
// 00560de0: PUSH EBX
//   Label: core_script.cpp_SCmdParm_setTemplateText_FUN_00560de0
// 00560de1: PUSH ESI
// 00560de2: PUSH EDI
// 00560de3: PUSH EBP
// 00560de4: SUB ESP,0x8
// 00560de7: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00560deb: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00560def: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00560df3: MOV EDX,dword ptr [EAX]
// 00560df5: ADD EDX,EDI
// 00560df7: CMP byte ptr [EDX],0x3c
// 00560dfa: JNZ 0x00560e23
//   XREF to: 00560e23 (CONDITIONAL_JUMP)
// 00560dfc: MOV EDX,dword ptr [EAX]
// 00560dfe: INC EDX
// 00560dff: LEA ESI,[EBP + 0x1f4]
// 00560e05: MOV dword ptr [EAX],EDX
// 00560e07: MOV EDX,dword ptr [EAX]
//   Label: LAB_00560e07
// 00560e09: MOV BH,byte ptr [EDX + EDI*0x1]
// 00560e0c: CMP BH,0x3e
// 00560e0f: JZ 0x00560e54
//   XREF to: 00560e54 (CONDITIONAL_JUMP)
// 00560e11: TEST BH,BH
// 00560e13: JZ 0x00560e44
//   XREF to: 00560e44 (CONDITIONAL_JUMP)
// 00560e15: LEA ECX,[EDX + 0x1]
// 00560e18: MOV dword ptr [EAX],ECX
// 00560e1a: INC ESI
// 00560e1b: MOV DL,byte ptr [EDX + EDI*0x1]
// 00560e1e: MOV byte ptr [ESI + -0x1],DL
// 00560e21: JMP 0x00560e07
//   XREF to: 00560e07 (UNCONDITIONAL_JUMP)
// 00560e23: PUSH EDX
//   Label: LAB_00560e23
// 00560e24: PUSH 0x643649
//   XREF to: 00643649 (DATA)
// 00560e29: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00560e2f: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00560e30: XOR ESI,ESI
//   Label: LAB_00560e30
// 00560e32: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00560e37: ADD ESP,0xc
// 00560e3a: MOV EAX,ESI
// 00560e3c: ADD ESP,0x8
// 00560e3f: POP EBP
// 00560e40: POP EDI
// 00560e41: POP ESI
// 00560e42: POP EBX
// 00560e43: RET
// 00560e44: PUSH EDI
//   Label: LAB_00560e44
// 00560e45: MOV EAX,0x643680
//   XREF to: 00643680 (PARAM)
// 00560e4a: PUSH EAX
//   XREF to: 00643680 (DATA)
// 00560e4b: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00560e51: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00560e52: JMP 0x00560e30
//   XREF to: 00560e30 (UNCONDITIONAL_JUMP)
// 00560e54: MOV byte ptr [ESI],0x0
//   Label: LAB_00560e54
// 00560e57: MOV ESI,dword ptr [EAX]
// 00560e59: PUSH 0x3
// 00560e5b: INC ESI
// 00560e5c: PUSH 0x6436bc
//   XREF to: 006436bc (DATA)
// 00560e61: MOV dword ptr [EAX],ESI
// 00560e63: LEA ESI,[EBP + 0x1f4]
// 00560e69: PUSH ESI
// 00560e6a: XOR EBX,EBX
// 00560e6c: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00560e71: ADD ESP,0xc
// 00560e74: TEST EAX,EAX
// 00560e76: JNZ 0x00560f1e
//   XREF to: 00560f1e (CONDITIONAL_JUMP)
// 00560e7c: MOV dword ptr [EBP + 0x258],EBX
// 00560e82: LEA EBX,[EBP + 0x1f7]
// 00560e88: MOV ESI,0x6436c5
//   XREF to: 006436c5 (DATA)
// 00560e8d: LEA EDI,[EBP + 0x2c0]
// 00560e93: PUSH EDI
//   Label: LAB_00560e93
// 00560e94: MOV AL,byte ptr [ESI]
//   Label: LAB_00560e94
//   XREF to: 006436c5 (READ)
//   XREF to: 006436c7 (READ)
//   XREF to: 006436d9 (READ)
//   XREF to: 006436ee (READ)
//   XREF to: 0064370b (READ)
//   XREF to: 0064372e (READ)
//   XREF to: 00643749 (READ)
//   XREF to: 00643763 (READ)
//   XREF to: 0064377d (READ)
//   XREF to: 00643794 (READ)
//   XREF to: 006437b3 (READ)
//   XREF to: 006437d6 (READ)
//   XREF to: 006437f5 (READ)
//   XREF to: 00643810 (READ)
//   XREF to: 00643829 (READ)
//   XREF to: 0064383f (READ)
//   XREF to: 00643855 (READ)
//   XREF to: 00643872 (READ)
//   XREF to: 00643893 (READ)
//   XREF to: 006438b7 (READ)
//   XREF to: 006438d8 (READ)
//   XREF to: 006438f5 (READ)
//   XREF to: 00643916 (READ)
//   XREF to: 00643941 (READ)
//   XREF to: 0064396c (READ)
//   XREF to: 0064398e (READ)
//   XREF to: 006439af (READ)
//   XREF to: 006439cb (READ)
//   XREF to: 006439e4 (READ)
//   XREF to: 006439fd (READ)
//   XREF to: 00643a13 (READ)
//   XREF to: 00643a30 (READ)
//   XREF to: 00643a53 (READ)
// 00560e96: MOV byte ptr [EDI],AL
// 00560e98: CMP AL,0x0
// 00560e9a: JZ 0x00560eac
//   XREF to: 00560eac (CONDITIONAL_JUMP)
// 00560e9c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006436c6 (READ)
//   XREF to: 006436c8 (READ)
//   XREF to: 006436da (READ)
//   XREF to: 006436ef (READ)
//   XREF to: 0064370c (READ)
//   XREF to: 0064372f (READ)
//   XREF to: 0064374a (READ)
//   XREF to: 00643764 (READ)
//   XREF to: 0064377e (READ)
//   XREF to: 00643795 (READ)
//   XREF to: 006437b4 (READ)
//   XREF to: 006437d7 (READ)
//   XREF to: 006437f6 (READ)
//   XREF to: 00643811 (READ)
//   XREF to: 0064382a (READ)
//   XREF to: 00643840 (READ)
//   XREF to: 00643856 (READ)
//   XREF to: 00643873 (READ)
//   XREF to: 00643894 (READ)
//   XREF to: 006438b8 (READ)
//   XREF to: 006438d9 (READ)
//   XREF to: 006438f6 (READ)
//   XREF to: 00643917 (READ)
//   XREF to: 00643942 (READ)
//   XREF to: 0064396d (READ)
//   XREF to: 0064398f (READ)
//   XREF to: 006439b0 (READ)
//   XREF to: 006439cc (READ)
//   XREF to: 006439e5 (READ)
//   XREF to: 006439fe (READ)
//   XREF to: 00643a14 (READ)
//   XREF to: 00643a31 (READ)
//   XREF to: 00643a54 (READ)
// 00560e9f: ADD ESI,0x2
// 00560ea2: MOV byte ptr [EDI + 0x1],AL
// 00560ea5: ADD EDI,0x2
// 00560ea8: CMP AL,0x0
// 00560eaa: JNZ 0x00560e94
//   XREF to: 00560e94 (CONDITIONAL_JUMP)
// 00560eac: POP EDI
//   Label: LAB_00560eac
// 00560ead: LEA ESI,[EBP + 0x1f4]
//   Label: LAB_00560ead
// 00560eb3: TEST EBX,EBX
// 00560eb5: JZ 0x00561575
//   XREF to: 00561575 (CONDITIONAL_JUMP)
// 00560ebb: MOV byte ptr [EBP + 0x25c],0x0
// 00560ec2: CMP byte ptr [EBX],0x0
// 00560ec5: JZ 0x00560f0f
//   XREF to: 00560f0f (CONDITIONAL_JUMP)
// 00560ec7: LEA EAX,[EBP + 0x25c]
// 00560ecd: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00560ed1: LEA EAX,[EBP + 0x2c0]
// 00560ed7: MOV EDI,ESI
// 00560ed9: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00560edc: MOV AH,byte ptr [EBX]
//   Label: LAB_00560edc
// 00560ede: LEA EDX,[EBX + 0x1]
// 00560ee1: CMP AH,0x3a
// 00560ee4: JNZ 0x00561596
//   XREF to: 00561596 (CONDITIONAL_JUMP)
// 00560eea: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00560eee: MOV CL,byte ptr [EDX]
// 00560ef0: MOV EBX,EDX
// 00560ef2: TEST CL,CL
// 00560ef4: JZ 0x00560f07
//   XREF to: 00560f07 (CONDITIONAL_JUMP)
// 00560ef6: CMP byte ptr [EBX],0x27
//   Label: LAB_00560ef6
// 00560ef9: JZ 0x00560f07
//   XREF to: 00560f07 (CONDITIONAL_JUMP)
// 00560efb: MOV DL,byte ptr [EBX]
// 00560efd: INC EBX
// 00560efe: MOV byte ptr [EAX],DL
// 00560f00: MOV DL,byte ptr [EBX]
// 00560f02: INC EAX
// 00560f03: TEST DL,DL
// 00560f05: JNZ 0x00560ef6
//   XREF to: 00560ef6 (CONDITIONAL_JUMP)
// 00560f07: MOV byte ptr [EAX],0x0
//   Label: LAB_00560f07
// 00560f0a: CMP byte ptr [EBX],0x0
//   Label: LAB_00560f0a
// 00560f0d: JNZ 0x00560edc
//   XREF to: 00560edc (CONDITIONAL_JUMP)
// 00560f0f: MOV ESI,0x1
//   Label: LAB_00560f0f
// 00560f14: MOV EAX,ESI
// 00560f16: ADD ESP,0x8
// 00560f19: POP EBP
// 00560f1a: POP EDI
// 00560f1b: POP ESI
// 00560f1c: POP EBX
// 00560f1d: RET
// 00560f1e: PUSH 0x5
//   Label: LAB_00560f1e
// 00560f20: PUSH 0x6436ce
//   XREF to: 006436ce (DATA)
// 00560f25: PUSH ESI
// 00560f26: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00560f2b: ADD ESP,0xc
// 00560f2e: TEST EAX,EAX
// 00560f30: JNZ 0x00560f52
//   XREF to: 00560f52 (CONDITIONAL_JUMP)
// 00560f32: LEA EBX,[EBP + 0x1f9]
// 00560f38: MOV ESI,0x6436d9
//   XREF to: 006436d9 (DATA)
// 00560f3d: LEA EDI,[EBP + 0x2c0]
// 00560f43: MOV dword ptr [EBP + 0x258],0x1
// 00560f4d: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00560f52: PUSH 0x4
//   Label: LAB_00560f52
// 00560f54: PUSH 0x6436e4
//   XREF to: 006436e4 (DATA)
// 00560f59: PUSH ESI
// 00560f5a: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00560f5f: ADD ESP,0xc
// 00560f62: TEST EAX,EAX
// 00560f64: JNZ 0x00560f86
//   XREF to: 00560f86 (CONDITIONAL_JUMP)
// 00560f66: LEA EBX,[EBP + 0x1f8]
// 00560f6c: MOV ESI,0x6436ee
//   XREF to: 006436ee (DATA)
// 00560f71: LEA EDI,[EBP + 0x2c0]
// 00560f77: MOV dword ptr [EBP + 0x258],0x2
// 00560f81: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00560f86: PUSH 0xd
//   Label: LAB_00560f86
// 00560f88: PUSH 0x6436f8
//   XREF to: 006436f8 (DATA)
// 00560f8d: PUSH ESI
// 00560f8e: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00560f93: ADD ESP,0xc
// 00560f96: TEST EAX,EAX
// 00560f98: JNZ 0x00560fba
//   XREF to: 00560fba (CONDITIONAL_JUMP)
// 00560f9a: LEA EBX,[EBP + 0x201]
// 00560fa0: MOV ESI,0x64370b
//   XREF to: 0064370b (DATA)
// 00560fa5: LEA EDI,[EBP + 0x2c0]
// 00560fab: MOV dword ptr [EBP + 0x258],0x7
// 00560fb5: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00560fba: PUSH 0xa
//   Label: LAB_00560fba
// 00560fbc: PUSH 0x64371e
//   XREF to: 0064371e (DATA)
// 00560fc1: PUSH ESI
// 00560fc2: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00560fc7: ADD ESP,0xc
// 00560fca: TEST EAX,EAX
// 00560fcc: JNZ 0x00560fee
//   XREF to: 00560fee (CONDITIONAL_JUMP)
// 00560fce: LEA EBX,[EBP + 0x1fe]
// 00560fd4: MOV ESI,0x64372e
//   XREF to: 0064372e (DATA)
// 00560fd9: LEA EDI,[EBP + 0x2c0]
// 00560fdf: MOV dword ptr [EBP + 0x258],0x1b
// 00560fe9: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00560fee: PUSH 0x5
//   Label: LAB_00560fee
// 00560ff0: PUSH 0x64373e
//   XREF to: 0064373e (DATA)
// 00560ff5: PUSH ESI
// 00560ff6: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00560ffb: ADD ESP,0xc
// 00560ffe: TEST EAX,EAX
// 00561000: JNZ 0x00561022
//   XREF to: 00561022 (CONDITIONAL_JUMP)
// 00561002: LEA EBX,[EBP + 0x1f9]
// 00561008: MOV ESI,0x643749
//   XREF to: 00643749 (DATA)
// 0056100d: LEA EDI,[EBP + 0x2c0]
// 00561013: MOV dword ptr [EBP + 0x258],0x3
// 0056101d: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00561022: PUSH 0x9
//   Label: LAB_00561022
// 00561024: PUSH 0x643754
//   XREF to: 00643754 (DATA)
// 00561029: PUSH ESI
// 0056102a: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056102f: ADD ESP,0xc
// 00561032: TEST EAX,EAX
// 00561034: JNZ 0x00561056
//   XREF to: 00561056 (CONDITIONAL_JUMP)
// 00561036: LEA EBX,[EBP + 0x1fd]
// 0056103c: MOV ESI,0x643763
//   XREF to: 00643763 (DATA)
// 00561041: LEA EDI,[EBP + 0x2c0]
// 00561047: MOV dword ptr [EBP + 0x258],0x4
// 00561051: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00561056: PUSH 0x5
//   Label: LAB_00561056
// 00561058: PUSH 0x643772
//   XREF to: 00643772 (DATA)
// 0056105d: PUSH ESI
// 0056105e: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00561063: ADD ESP,0xc
// 00561066: TEST EAX,EAX
// 00561068: JNZ 0x0056108a
//   XREF to: 0056108a (CONDITIONAL_JUMP)
// 0056106a: LEA EBX,[EBP + 0x1f9]
// 00561070: MOV ESI,0x64377d
//   XREF to: 0064377d (DATA)
// 00561075: LEA EDI,[EBP + 0x2c0]
// 0056107b: MOV dword ptr [EBP + 0x258],0x5
// 00561085: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 0056108a: PUSH 0x6
//   Label: LAB_0056108a
// 0056108c: PUSH 0x643788
//   XREF to: 00643788 (DATA)
// 00561091: PUSH ESI
// 00561092: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00561097: ADD ESP,0xc
// 0056109a: TEST EAX,EAX
// 0056109c: JNZ 0x005610be
//   XREF to: 005610be (CONDITIONAL_JUMP)
// 0056109e: LEA EBX,[EBP + 0x1fa]
// 005610a4: MOV ESI,0x643794
//   XREF to: 00643794 (DATA)
// 005610a9: LEA EDI,[EBP + 0x2c0]
// 005610af: MOV dword ptr [EBP + 0x258],0x6
// 005610b9: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 005610be: PUSH 0xd
//   Label: LAB_005610be
// 005610c0: PUSH 0x6437a0
//   XREF to: 006437a0 (DATA)
// 005610c5: PUSH ESI
// 005610c6: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005610cb: ADD ESP,0xc
// 005610ce: TEST EAX,EAX
// 005610d0: JNZ 0x005610f2
//   XREF to: 005610f2 (CONDITIONAL_JUMP)
// 005610d2: LEA EBX,[EBP + 0x201]
// 005610d8: MOV ESI,0x6437b3
//   XREF to: 006437b3 (DATA)
// 005610dd: LEA EDI,[EBP + 0x2c0]
// 005610e3: MOV dword ptr [EBP + 0x258],0x8
// 005610ed: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 005610f2: PUSH 0xa
//   Label: LAB_005610f2
// 005610f4: PUSH 0x6437c6
//   XREF to: 006437c6 (DATA)
// 005610f9: PUSH ESI
// 005610fa: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005610ff: ADD ESP,0xc
// 00561102: TEST EAX,EAX
// 00561104: JNZ 0x00561126
//   XREF to: 00561126 (CONDITIONAL_JUMP)
// 00561106: LEA EBX,[EBP + 0x1fe]
// 0056110c: MOV ESI,0x6437d6
//   XREF to: 006437d6 (DATA)
// 00561111: LEA EDI,[EBP + 0x2c0]
// 00561117: MOV dword ptr [EBP + 0x258],0x9
// 00561121: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00561126: PUSH 0x9
//   Label: LAB_00561126
// 00561128: PUSH 0x6437e6
//   XREF to: 006437e6 (DATA)
// 0056112d: PUSH ESI
// 0056112e: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00561133: ADD ESP,0xc
// 00561136: TEST EAX,EAX
// 00561138: JNZ 0x0056115a
//   XREF to: 0056115a (CONDITIONAL_JUMP)
// 0056113a: LEA EBX,[EBP + 0x1fd]
// 00561140: MOV ESI,0x6437f5
//   XREF to: 006437f5 (DATA)
// 00561145: LEA EDI,[EBP + 0x2c0]
// 0056114b: MOV dword ptr [EBP + 0x258],0xa
// 00561155: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 0056115a: PUSH 0x6
//   Label: LAB_0056115a
// 0056115c: PUSH 0x643804
//   XREF to: 00643804 (DATA)
// 00561161: PUSH ESI
// 00561162: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00561167: ADD ESP,0xc
// 0056116a: TEST EAX,EAX
// 0056116c: JNZ 0x0056118e
//   XREF to: 0056118e (CONDITIONAL_JUMP)
// 0056116e: LEA EBX,[EBP + 0x1fa]
// 00561174: MOV ESI,0x643810
//   XREF to: 00643810 (DATA)
// 00561179: LEA EDI,[EBP + 0x2c0]
// 0056117f: MOV dword ptr [EBP + 0x258],0xb
// 00561189: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 0056118e: PUSH 0x7
//   Label: LAB_0056118e
// 00561190: PUSH 0x64381c
//   XREF to: 0064381c (DATA)
// 00561195: PUSH ESI
// 00561196: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056119b: ADD ESP,0xc
// 0056119e: TEST EAX,EAX
// 005611a0: JNZ 0x005611c2
//   XREF to: 005611c2 (CONDITIONAL_JUMP)
// 005611a2: LEA EBX,[EBP + 0x1fb]
// 005611a8: MOV ESI,0x643829
//   XREF to: 00643829 (DATA)
// 005611ad: LEA EDI,[EBP + 0x2c0]
// 005611b3: MOV dword ptr [EBP + 0x258],0xc
// 005611bd: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 005611c2: PUSH 0x3
//   Label: LAB_005611c2
// 005611c4: PUSH 0x643836
//   XREF to: 00643836 (DATA)
// 005611c9: PUSH ESI
// 005611ca: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005611cf: ADD ESP,0xc
// 005611d2: TEST EAX,EAX
// 005611d4: JNZ 0x005611f6
//   XREF to: 005611f6 (CONDITIONAL_JUMP)
// 005611d6: LEA EBX,[EBP + 0x1f7]
// 005611dc: MOV ESI,0x64383f
//   XREF to: 0064383f (DATA)
// 005611e1: LEA EDI,[EBP + 0x2c0]
// 005611e7: MOV dword ptr [EBP + 0x258],0xd
// 005611f1: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 005611f6: PUSH 0x7
//   Label: LAB_005611f6
// 005611f8: PUSH 0x643848
//   XREF to: 00643848 (DATA)
// 005611fd: PUSH ESI
// 005611fe: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00561203: ADD ESP,0xc
// 00561206: TEST EAX,EAX
// 00561208: JNZ 0x0056122a
//   XREF to: 0056122a (CONDITIONAL_JUMP)
// 0056120a: LEA EBX,[EBP + 0x1fb]
// 00561210: MOV ESI,0x643855
//   XREF to: 00643855 (DATA)
// 00561215: LEA EDI,[EBP + 0x2c0]
// 0056121b: MOV dword ptr [EBP + 0x258],0xe
// 00561225: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 0056122a: PUSH 0xa
//   Label: LAB_0056122a
// 0056122c: PUSH 0x643862
//   XREF to: 00643862 (DATA)
// 00561231: PUSH ESI
// 00561232: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00561237: ADD ESP,0xc
// 0056123a: TEST EAX,EAX
// 0056123c: JNZ 0x0056125e
//   XREF to: 0056125e (CONDITIONAL_JUMP)
// 0056123e: LEA EBX,[EBP + 0x1fe]
// 00561244: MOV ESI,0x643872
//   XREF to: 00643872 (DATA)
// 00561249: LEA EDI,[EBP + 0x2c0]
// 0056124f: MOV dword ptr [EBP + 0x258],0xf
// 00561259: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 0056125e: PUSH 0xb
//   Label: LAB_0056125e
// 00561260: PUSH 0x643882
//   XREF to: 00643882 (DATA)
// 00561265: PUSH ESI
// 00561266: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056126b: ADD ESP,0xc
// 0056126e: TEST EAX,EAX
// 00561270: JNZ 0x00561292
//   XREF to: 00561292 (CONDITIONAL_JUMP)
// 00561272: LEA EBX,[EBP + 0x1ff]
// 00561278: MOV ESI,0x643893
//   XREF to: 00643893 (DATA)
// 0056127d: LEA EDI,[EBP + 0x2c0]
// 00561283: MOV dword ptr [EBP + 0x258],0x10
// 0056128d: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00561292: PUSH 0xd
//   Label: LAB_00561292
// 00561294: PUSH 0x6438a4
//   XREF to: 006438a4 (DATA)
// 00561299: PUSH ESI
// 0056129a: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056129f: ADD ESP,0xc
// 005612a2: TEST EAX,EAX
// 005612a4: JNZ 0x005612c6
//   XREF to: 005612c6 (CONDITIONAL_JUMP)
// 005612a6: LEA EBX,[EBP + 0x201]
// 005612ac: MOV ESI,0x6438b7
//   XREF to: 006438b7 (DATA)
// 005612b1: LEA EDI,[EBP + 0x2c0]
// 005612b7: MOV dword ptr [EBP + 0x258],0x11
// 005612c1: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 005612c6: PUSH 0x8
//   Label: LAB_005612c6
// 005612c8: PUSH 0x6438ca
//   XREF to: 006438ca (DATA)
// 005612cd: PUSH ESI
// 005612ce: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005612d3: ADD ESP,0xc
// 005612d6: TEST EAX,EAX
// 005612d8: JNZ 0x005612fa
//   XREF to: 005612fa (CONDITIONAL_JUMP)
// 005612da: LEA EBX,[EBP + 0x1fc]
// 005612e0: MOV ESI,0x6438d8
//   XREF to: 006438d8 (DATA)
// 005612e5: LEA EDI,[EBP + 0x2c0]
// 005612eb: MOV dword ptr [EBP + 0x258],0x12
// 005612f5: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 005612fa: PUSH 0x9
//   Label: LAB_005612fa
// 005612fc: PUSH 0x6438e6
//   XREF to: 006438e6 (DATA)
// 00561301: PUSH ESI
// 00561302: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00561307: ADD ESP,0xc
// 0056130a: TEST EAX,EAX
// 0056130c: JNZ 0x0056132e
//   XREF to: 0056132e (CONDITIONAL_JUMP)
// 0056130e: LEA EBX,[EBP + 0x1fd]
// 00561314: MOV ESI,0x6438f5
//   XREF to: 006438f5 (DATA)
// 00561319: LEA EDI,[EBP + 0x2c0]
// 0056131f: MOV dword ptr [EBP + 0x258],0x13
// 00561329: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 0056132e: PUSH 0xc
//   Label: LAB_0056132e
// 00561330: PUSH 0x643904
//   XREF to: 00643904 (DATA)
// 00561335: PUSH ESI
// 00561336: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056133b: ADD ESP,0xc
// 0056133e: TEST EAX,EAX
// 00561340: JNZ 0x00561362
//   XREF to: 00561362 (CONDITIONAL_JUMP)
// 00561342: LEA EBX,[EBP + 0x200]
// 00561348: MOV ESI,0x643916
//   XREF to: 00643916 (DATA)
// 0056134d: LEA EDI,[EBP + 0x2c0]
// 00561353: MOV dword ptr [EBP + 0x258],0x14
// 0056135d: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00561362: PUSH 0x13
//   Label: LAB_00561362
// 00561364: PUSH 0x643928
//   XREF to: 00643928 (DATA)
// 00561369: PUSH ESI
// 0056136a: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056136f: ADD ESP,0xc
// 00561372: TEST EAX,EAX
// 00561374: JNZ 0x00561396
//   XREF to: 00561396 (CONDITIONAL_JUMP)
// 00561376: LEA EBX,[EBP + 0x207]
// 0056137c: MOV ESI,0x643941
//   XREF to: 00643941 (DATA)
// 00561381: LEA EDI,[EBP + 0x2c0]
// 00561387: MOV dword ptr [EBP + 0x258],0x15
// 00561391: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00561396: PUSH 0xc
//   Label: LAB_00561396
// 00561398: PUSH 0x64395a
//   XREF to: 0064395a (DATA)
// 0056139d: PUSH ESI
// 0056139e: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005613a3: ADD ESP,0xc
// 005613a6: TEST EAX,EAX
// 005613a8: JNZ 0x005613ca
//   XREF to: 005613ca (CONDITIONAL_JUMP)
// 005613aa: LEA EBX,[EBP + 0x200]
// 005613b0: MOV ESI,0x64396c
//   XREF to: 0064396c (DATA)
// 005613b5: LEA EDI,[EBP + 0x2c0]
// 005613bb: MOV dword ptr [EBP + 0x258],0x16
// 005613c5: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 005613ca: PUSH 0xa
//   Label: LAB_005613ca
// 005613cc: PUSH 0x64397e
//   XREF to: 0064397e (DATA)
// 005613d1: PUSH ESI
// 005613d2: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005613d7: ADD ESP,0xc
// 005613da: TEST EAX,EAX
// 005613dc: JNZ 0x005613fe
//   XREF to: 005613fe (CONDITIONAL_JUMP)
// 005613de: LEA EBX,[EBP + 0x1fe]
// 005613e4: MOV ESI,0x64398e
//   XREF to: 0064398e (DATA)
// 005613e9: LEA EDI,[EBP + 0x2c0]
// 005613ef: MOV dword ptr [EBP + 0x258],0x17
// 005613f9: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 005613fe: PUSH 0xb
//   Label: LAB_005613fe
// 00561400: PUSH 0x64399e
//   XREF to: 0064399e (DATA)
// 00561405: PUSH ESI
// 00561406: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056140b: ADD ESP,0xc
// 0056140e: TEST EAX,EAX
// 00561410: JNZ 0x00561432
//   XREF to: 00561432 (CONDITIONAL_JUMP)
// 00561412: LEA EBX,[EBP + 0x1ff]
// 00561418: MOV ESI,0x6439af
//   XREF to: 006439af (DATA)
// 0056141d: LEA EDI,[EBP + 0x2c0]
// 00561423: MOV dword ptr [EBP + 0x258],0x18
// 0056142d: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00561432: PUSH 0x5
//   Label: LAB_00561432
// 00561434: PUSH 0x6439c0
//   XREF to: 006439c0 (DATA)
// 00561439: PUSH ESI
// 0056143a: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056143f: ADD ESP,0xc
// 00561442: TEST EAX,EAX
// 00561444: JNZ 0x00561466
//   XREF to: 00561466 (CONDITIONAL_JUMP)
// 00561446: LEA EBX,[EBP + 0x1f9]
// 0056144c: MOV ESI,0x6439cb
//   XREF to: 006439cb (DATA)
// 00561451: LEA EDI,[EBP + 0x2c0]
// 00561457: MOV dword ptr [EBP + 0x258],0x19
// 00561461: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00561466: PUSH 0x8
//   Label: LAB_00561466
// 00561468: PUSH 0x6439d6
//   XREF to: 006439d6 (DATA)
// 0056146d: PUSH ESI
// 0056146e: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00561473: ADD ESP,0xc
// 00561476: TEST EAX,EAX
// 00561478: JNZ 0x0056149a
//   XREF to: 0056149a (CONDITIONAL_JUMP)
// 0056147a: LEA EBX,[EBP + 0x1fc]
// 00561480: MOV ESI,0x6439e4
//   XREF to: 006439e4 (DATA)
// 00561485: LEA EDI,[EBP + 0x2c0]
// 0056148b: MOV dword ptr [EBP + 0x258],0x1a
// 00561495: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 0056149a: PUSH 0x5
//   Label: LAB_0056149a
// 0056149c: PUSH 0x6439f2
//   XREF to: 006439f2 (DATA)
// 005614a1: PUSH ESI
// 005614a2: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005614a7: ADD ESP,0xc
// 005614aa: TEST EAX,EAX
// 005614ac: JNZ 0x005614ce
//   XREF to: 005614ce (CONDITIONAL_JUMP)
// 005614ae: LEA EBX,[EBP + 0x1f9]
// 005614b4: MOV ESI,0x6439fd
//   XREF to: 006439fd (DATA)
// 005614b9: LEA EDI,[EBP + 0x2c0]
// 005614bf: MOV dword ptr [EBP + 0x258],0x1c
// 005614c9: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 005614ce: PUSH 0x5
//   Label: LAB_005614ce
// 005614d0: PUSH 0x643a08
//   XREF to: 00643a08 (DATA)
// 005614d5: PUSH ESI
// 005614d6: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005614db: ADD ESP,0xc
// 005614de: TEST EAX,EAX
// 005614e0: JNZ 0x00561502
//   XREF to: 00561502 (CONDITIONAL_JUMP)
// 005614e2: LEA EBX,[EBP + 0x1f9]
// 005614e8: MOV ESI,0x643a13
//   XREF to: 00643a13 (DATA)
// 005614ed: LEA EDI,[EBP + 0x2c0]
// 005614f3: MOV dword ptr [EBP + 0x258],0x1d
// 005614fd: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00561502: PUSH 0xc
//   Label: LAB_00561502
// 00561504: PUSH 0x643a1e
//   XREF to: 00643a1e (DATA)
// 00561509: PUSH ESI
// 0056150a: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056150f: ADD ESP,0xc
// 00561512: TEST EAX,EAX
// 00561514: JNZ 0x00561536
//   XREF to: 00561536 (CONDITIONAL_JUMP)
// 00561516: LEA EBX,[EBP + 0x200]
// 0056151c: MOV ESI,0x643a30
//   XREF to: 00643a30 (DATA)
// 00561521: LEA EDI,[EBP + 0x2c0]
// 00561527: MOV dword ptr [EBP + 0x258],0x1e
// 00561531: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00561536: PUSH 0xb
//   Label: LAB_00561536
// 00561538: MOV EAX,0x643a42
//   XREF to: 00643a42 (DATA)
// 0056153d: PUSH EAX
//   XREF to: 00643a42 (DATA)
// 0056153e: LEA EAX,[EBP + 0x1f4]
// 00561544: PUSH EAX
// 00561545: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056154a: ADD ESP,0xc
// 0056154d: TEST EAX,EAX
// 0056154f: JNZ 0x00560ead
//   XREF to: 00560ead (CONDITIONAL_JUMP)
// 00561555: LEA EBX,[EBP + 0x1ff]
// 0056155b: MOV ESI,0x643a53
//   XREF to: 00643a53 (DATA)
// 00561560: LEA EDI,[EBP + 0x2c0]
// 00561566: MOV dword ptr [EBP + 0x258],0x1f
// 00561570: JMP 0x00560e93
//   XREF to: 00560e93 (UNCONDITIONAL_JUMP)
// 00561575: PUSH ESI
//   Label: LAB_00561575
// 00561576: PUSH 0x643a5f
//   XREF to: 00643a5f (DATA)
// 0056157b: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00561581: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00561582: XOR ESI,ESI
// 00561584: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00561589: ADD ESP,0xc
// 0056158c: MOV EAX,ESI
// 0056158e: ADD ESP,0x8
// 00561591: POP EBP
// 00561592: POP EDI
// 00561593: POP ESI
// 00561594: POP EBX
// 00561595: RET
// 00561596: CMP AH,0x27
//   Label: LAB_00561596
// 00561599: JNZ 0x005615e4
//   XREF to: 005615e4 (CONDITIONAL_JUMP)
// 0056159b: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0056159e: MOV CH,byte ptr [EDX]
// 005615a0: MOV EBX,EDX
// 005615a2: CMP CH,AH
// 005615a4: JZ 0x005615db
//   XREF to: 005615db (CONDITIONAL_JUMP)
// 005615a6: CMP byte ptr [EBX],0x0
//   Label: LAB_005615a6
// 005615a9: JNZ 0x005615ce
//   XREF to: 005615ce (CONDITIONAL_JUMP)
// 005615ab: PUSH EDI
// 005615ac: MOV EAX,0x643a95
//   XREF to: 00643a95 (PARAM)
// 005615b1: MOV EDX,0x1188
// 005615b6: PUSH 0x643aa8
//   XREF to: 00643aa8 (DATA)
// 005615bb: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005615c0: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005615c6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005615cb: ADD ESP,0x8
// 005615ce: MOV AL,byte ptr [EBX]
//   Label: LAB_005615ce
// 005615d0: INC EBX
// 005615d1: MOV byte ptr [ESI],AL
// 005615d3: MOV CH,byte ptr [EBX]
// 005615d5: INC ESI
// 005615d6: CMP CH,0x27
// 005615d9: JNZ 0x005615a6
//   XREF to: 005615a6 (CONDITIONAL_JUMP)
// 005615db: INC EBX
//   Label: LAB_005615db
// 005615dc: MOV byte ptr [ESI],0x0
// 005615df: JMP 0x00560f0a
//   XREF to: 00560f0a (UNCONDITIONAL_JUMP)
// 005615e4: ADD EBP,0x1f4
//   Label: LAB_005615e4
// 005615ea: PUSH EBP
// 005615eb: PUSH 0x643ad1
//   XREF to: 00643ad1 (DATA)
// 005615f0: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005615f6: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 005615f7: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 005615fc: ADD ESP,0xc
// 005615ff: XOR ESI,ESI
// 00561601: MOV EAX,ESI
// 00561603: ADD ESP,0x8
// 00561606: POP EBP
// 00561607: POP EDI
// 00561608: POP ESI
// 00561609: POP EBX
// 0056160a: RET
