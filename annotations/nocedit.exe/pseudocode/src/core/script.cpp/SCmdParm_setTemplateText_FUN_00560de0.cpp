// Name: core_script.cpp_SCmdParm_setTemplateText_FUN_00560de0
// Address: 00560de0
// Address Range: [[00560de0, 0056160a]]
// Convention: unknown
// Signature: undefined core_script.cpp_SCmdParm_setTemplateText_FUN_00560de0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_SCmdParm_setTemplateText(CScriptCmdParm* param_1,
   uint param_2, uint param_3) */

uint core_script_cpp_SCmdParm_setTemplateText_FUN_00560de0(void)

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
    *(uint *)(in_stack_00000004 + 600) = 0;
    pcVar3 = (char *)(in_stack_00000004 + 0x1f7);
    pcVar5 = "kParmInt" + 5;
  }
  else {
    iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmFloat" + 5,5);
    if (iVar2 == 0) {
      pcVar3 = (char *)(in_stack_00000004 + 0x1f9);
      pcVar5 = "kParmFloat" + 5;
      *(uint *)(in_stack_00000004 + 600) = 1;
    }
    else {
      iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmText" + 5,4);
      if (iVar2 == 0) {
        pcVar3 = (char *)(in_stack_00000004 + 0x1f8);
        pcVar5 = "kParmText" + 5;
        *(uint *)(in_stack_00000004 + 600) = 2;
      }
      else {
        iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmActorVariable" + 5,0xd);
        if (iVar2 == 0) {
          pcVar3 = (char *)(in_stack_00000004 + 0x201);
          pcVar5 = "kParmActorVariable" + 5;
          *(uint *)(in_stack_00000004 + 600) = 7;
        }
        else {
          iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmActorClass" + 5,10);
          if (iVar2 == 0) {
            pcVar3 = (char *)(in_stack_00000004 + 0x1fe);
            pcVar5 = "kParmActorClass" + 5;
            *(uint *)(in_stack_00000004 + 600) = 0x1b;
          }
          else {
            iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmActor" + 5,5);
            if (iVar2 == 0) {
              pcVar3 = (char *)(in_stack_00000004 + 0x1f9);
              pcVar5 = "kParmActor" + 5;
              *(uint *)(in_stack_00000004 + 600) = 3;
            }
            else {
              iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmCondition" + 5,9);
              if (iVar2 == 0) {
                pcVar3 = (char *)(in_stack_00000004 + 0x1fd);
                pcVar5 = "kParmCondition" + 5;
                *(uint *)(in_stack_00000004 + 600) = 4;
              }
              else {
                iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmLabel" + 5,5);
                if (iVar2 == 0) {
                  pcVar3 = (char *)(in_stack_00000004 + 0x1f9);
                  pcVar5 = "kParmLabel" + 5;
                  *(uint *)(in_stack_00000004 + 600) = 5;
                }
                else {
                  iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar5,"kParmCamera" + 5,6);
                  if (iVar2 == 0) {
                    pcVar3 = (char *)(in_stack_00000004 + 0x1fa);
                    pcVar5 = "kParmCamera" + 5;
                    *(uint *)(in_stack_00000004 + 600) = 6;
                  }
                  else {
                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                      (pcVar5,"kParmControlButton" + 5,0xd);
                    if (iVar2 == 0) {
                      pcVar3 = (char *)(in_stack_00000004 + 0x201);
                      pcVar5 = "kParmControlButton" + 5;
                      *(uint *)(in_stack_00000004 + 600) = 8;
                    }
                    else {
                      iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                        (pcVar5,"kParmDamageType" + 5,10);
                      if (iVar2 == 0) {
                        pcVar3 = (char *)(in_stack_00000004 + 0x1fe);
                        pcVar5 = "kParmDamageType" + 5;
                        *(uint *)(in_stack_00000004 + 600) = 9;
                      }
                      else {
                        iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                          (pcVar5,"kParmDeathType" + 5,9);
                        if (iVar2 == 0) {
                          pcVar3 = (char *)(in_stack_00000004 + 0x1fd);
                          pcVar5 = "kParmDeathType" + 5;
                          *(uint *)(in_stack_00000004 + 600) = 10;
                        }
                        else {
                          iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                            (pcVar5,"kParmSfxSet" + 5,6);
                          if (iVar2 == 0) {
                            pcVar3 = (char *)(in_stack_00000004 + 0x1fa);
                            pcVar5 = "kParmSfxSet" + 5;
                            *(uint *)(in_stack_00000004 + 600) = 0xb;
                          }
                          else {
                            iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                              (pcVar5,"kParmSfxUsed" + 5,7);
                            if (iVar2 == 0) {
                              pcVar3 = (char *)(in_stack_00000004 + 0x1fb);
                              pcVar5 = "kParmSfxUsed" + 5;
                              *(uint *)(in_stack_00000004 + 600) = 0xc;
                            }
                            else {
                              iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                (pcVar5,"kParmWav" + 5,3);
                              if (iVar2 == 0) {
                                pcVar3 = (char *)(in_stack_00000004 + 0x1f7);
                                pcVar5 = "kParmWav" + 5;
                                *(uint *)(in_stack_00000004 + 600) = 0xd;
                              }
                              else {
                                iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                  (pcVar5,"kParmWeather" + 5,7);
                                if (iVar2 == 0) {
                                  pcVar3 = (char *)(in_stack_00000004 + 0x1fb);
                                  pcVar5 = "kParmWeather" + 5;
                                  *(uint *)(in_stack_00000004 + 600) = 0xe;
                                }
                                else {
                                  iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                    (pcVar5,"kParmCounterSet" + 5,10);
                                  if (iVar2 == 0) {
                                    pcVar3 = (char *)(in_stack_00000004 + 0x1fe);
                                    pcVar5 = "kParmCounterSet" + 5;
                                    *(uint *)(in_stack_00000004 + 600) = 0xf;
                                  }
                                  else {
                                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                      (pcVar5,"kParmCounterUsed" + 5,0xb);
                                    if (iVar2 == 0) {
                                      pcVar3 = (char *)(in_stack_00000004 + 0x1ff);
                                      pcVar5 = "kParmCounterUsed" + 5;
                                      *(uint *)(in_stack_00000004 + 600) = 0x10;
                                    }
                                    else {
                                      iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                        (pcVar5,"kParmLetterBoxMode" + 5,
                                                         0xd);
                                      if (iVar2 == 0) {
                                        pcVar3 = (char *)(in_stack_00000004 + 0x201);
                                        pcVar5 = "kParmLetterBoxMode" + 5;
                                        *(uint *)(in_stack_00000004 + 600) = 0x11;
                                      }
                                      else {
                                        iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                          (pcVar5,"kParmFilename" + 5,8);
                                        if (iVar2 == 0) {
                                          pcVar3 = (char *)(in_stack_00000004 + 0x1fc);
                                          pcVar5 = "kParmFilename" + 5;
                                          *(uint *)(in_stack_00000004 + 600) = 0x12;
                                        }
                                        else {
                                          iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                            (pcVar5,"kParmSpotLight" + 5,9)
                                          ;
                                          if (iVar2 == 0) {
                                            pcVar3 = (char *)(in_stack_00000004 + 0x1fd);
                                            pcVar5 = "kParmSpotLight" + 5;
                                            *(uint *)(in_stack_00000004 + 600) = 0x13;
                                          }
                                          else {
                                            iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                              (pcVar5,"kParmEventCommand" +
                                                                      5,0xc);
                                            if (iVar2 == 0) {
                                              pcVar3 = (char *)(in_stack_00000004 + 0x200);
                                              pcVar5 = "kParmEventCommand" + 5;
                                              *(uint *)(in_stack_00000004 + 600) = 0x14;
                                            }
                                            else {
                                              iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                (pcVar5,
                                                  "kParmPersistentEventName" + 5,0x13);
                                              if (iVar2 == 0) {
                                                pcVar3 = (char *)(in_stack_00000004 + 0x207);
                                                pcVar5 = "kParmPersistentEventName" + 5;
                                                *(uint *)(in_stack_00000004 + 600) = 0x15;
                                              }
                                              else {
                                                iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                  (pcVar5,
                                                  "kParmGameFlagName" + 5,0xc);
                                                if (iVar2 == 0) {
                                                  pcVar3 = (char *)(in_stack_00000004 + 0x200);
                                                  pcVar5 = "kParmGameFlagName" + 5;
                                                  *(uint *)(in_stack_00000004 + 600) = 0x16;
                                                }
                                                else {
                                                  iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                    (pcVar5,
                                                  "kParmMotionName" + 5,10);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = (char *)(in_stack_00000004 + 0x1fe);
                                                    pcVar5 = "kParmMotionName" + 5;
                                                    *(uint *)(in_stack_00000004 + 600) = 0x17;
                                                  }
                                                  else {
                                                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar5,
                                                  "kParmMotionState" + 5,0xb);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = (char *)(in_stack_00000004 + 0x1ff);
                                                    pcVar5 = "kParmMotionState" + 5;
                                                    *(uint *)(in_stack_00000004 + 600) = 0x18;
                                                  }
                                                  else {
                                                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar5,"kParmDBTag"
                                                                              + 5,5);
                                                    if (iVar2 == 0) {
                                                      pcVar3 = (char *)(in_stack_00000004 + 0x1f9);
                                                      pcVar5 = "kParmDBTag" + 5;
                                                      *(uint *)(in_stack_00000004 + 600) =
                                                           0x19;
                                                    }
                                                    else {
                                                      iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                        (pcVar5,
                                                  "kParmHeroTask" + 5,8);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = (char *)(in_stack_00000004 + 0x1fc);
                                                    pcVar5 = "kParmHeroTask" + 5;
                                                    *(uint *)(in_stack_00000004 + 600) = 0x1a;
                                                  }
                                                  else {
                                                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar5,"kParmTimer"
                                                                              + 5,5);
                                                    if (iVar2 == 0) {
                                                      pcVar3 = (char *)(in_stack_00000004 + 0x1f9);
                                                      pcVar5 = "kParmTimer" + 5;
                                                      *(uint *)(in_stack_00000004 + 600) =
                                                           0x1c;
                                                    }
                                                    else {
                                                      iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                        (pcVar5,
                                                  "kParmRelOp" + 5,5);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = (char *)(in_stack_00000004 + 0x1f9);
                                                    pcVar5 = "kParmRelOp" + 5;
                                                    *(uint *)(in_stack_00000004 + 600) = 0x1d;
                                                  }
                                                  else {
                                                    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar5,
                                                  "kParmBodyPartList" + 5,0xc);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = (char *)(in_stack_00000004 + 0x200);
                                                    pcVar5 = "kParmBodyPartList" + 5;
                                                    *(uint *)(in_stack_00000004 + 600) = 0x1e;
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
                                                    *(uint *)(in_stack_00000004 + 600) = 0x1f;
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
              (g_CEditorToolsPtr,"SCmdParm::setTemplateText - %s unknown template type!",in_stack_00000004 + 500);
    return 0;
  }
  *(byte *)(in_stack_00000004 + 0x25c) = 0;
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
                    (g_CEditorToolsPtr,"SCmdParm::setTemplateText - Invalid template string: %s",in_stack_00000004 + 500);
          return 0;
        }
        cVar1 = *pcVar3;
        pcVar5 = (char *)(in_stack_00000004 + 0x2c0);
        while (cVar1 != '\'') {
          if (*pcVar3 == '\0') {
            g_CurrentFilename = "..\\core\\script.cpp";
            g_CurrentLineNumber = 0x1188;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Missing closing ' in template string: %s",in_stack_00000004 + 500);
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
