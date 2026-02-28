// Name: core_script.cpp_CCmdParm_setTemplateText_FUN_00560de0
// Address: 00560de0
// Address Range: [[00560de0, 0056160a]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0(CCmdParm *this_ptr,char *template_text,int *parse_cursor)

#include "nocturne.h"

int __cdecl core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0(CCmdParm *this_ptr,char *template_text,int *parse_cursor)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar3 = template_text + *parse_cursor;
  if (*pcVar3 != '<') {
    pcVar5 = "SCmdParm::setTemplateText - expected opening '<' in %s";
LAB_00560e30:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar5,pcVar3);
    return 0;
  }
  *parse_cursor = *parse_cursor + 1;
  pcVar3 = this_ptr->template_name;
  while( true ) {
    iVar2 = *parse_cursor;
    if (template_text[iVar2] == '>') break;
    if (template_text[iVar2] == '\0') {
      pcVar5 = "SCmdParm::setTemplateText - expected closing '>' in %s";
      pcVar3 = template_text;
      goto LAB_00560e30;
    }
    *parse_cursor = iVar2 + 1;
    *pcVar3 = template_text[iVar2];
    pcVar3 = pcVar3 + 1;
  }
  *pcVar3 = '\0';
  *parse_cursor = *parse_cursor + 1;
  pcVar5 = this_ptr->template_name;
  pcVar3 = (char *)0x0;
  iVar2 = _strnicmp(pcVar5,"kParmInt" + 5,3);
  if (iVar2 == 0) {
    this_ptr->param_type = PARM_TYPE_INT;
    pcVar3 = this_ptr->template_name + 3;
    pcVar5 = "kParmInt" + 5;
  }
  else {
    iVar2 = _strnicmp(pcVar5,"kParmFloat" + 5,5);
    if (iVar2 == 0) {
      pcVar3 = this_ptr->template_name + 5;
      pcVar5 = "kParmFloat" + 5;
      this_ptr->param_type = PARM_TYPE_FLOAT;
    }
    else {
      iVar2 = _strnicmp(pcVar5,"kParmText" + 5,4);
      if (iVar2 == 0) {
        pcVar3 = this_ptr->template_name + 4;
        pcVar5 = "kParmText" + 5;
        this_ptr->param_type = PARM_TYPE_TEXT;
      }
      else {
        iVar2 = _strnicmp(pcVar5,"kParmActorVariable" + 5,0xd);
        if (iVar2 == 0) {
          pcVar3 = this_ptr->template_name + 0xd;
          pcVar5 = "kParmActorVariable" + 5;
          this_ptr->param_type = PARM_TYPE_ACTOR_VARIABLE;
        }
        else {
          iVar2 = _strnicmp(pcVar5,"kParmActorClass" + 5,10);
          if (iVar2 == 0) {
            pcVar3 = this_ptr->template_name + 10;
            pcVar5 = "kParmActorClass" + 5;
            this_ptr->param_type = PARM_TYPE_ACTOR_CLASS;
          }
          else {
            iVar2 = _strnicmp(pcVar5,"kParmActor" + 5,5);
            if (iVar2 == 0) {
              pcVar3 = this_ptr->template_name + 5;
              pcVar5 = "kParmActor" + 5;
              this_ptr->param_type = PARM_TYPE_ACTOR;
            }
            else {
              iVar2 = _strnicmp(pcVar5,"kParmCondition" + 5,9);
              if (iVar2 == 0) {
                pcVar3 = this_ptr->template_name + 9;
                pcVar5 = "kParmCondition" + 5;
                this_ptr->param_type = PARM_TYPE_CONDITION;
              }
              else {
                iVar2 = _strnicmp(pcVar5,"kParmLabel" + 5,5);
                if (iVar2 == 0) {
                  pcVar3 = this_ptr->template_name + 5;
                  pcVar5 = "kParmLabel" + 5;
                  this_ptr->param_type = PARM_TYPE_LABEL;
                }
                else {
                  iVar2 = _strnicmp(pcVar5,"kParmCamera" + 5,6);
                  if (iVar2 == 0) {
                    pcVar3 = this_ptr->template_name + 6;
                    pcVar5 = "kParmCamera" + 5;
                    this_ptr->param_type = PARM_TYPE_CAMERA;
                  }
                  else {
                    iVar2 = _strnicmp
                                      (pcVar5,"kParmControlButton" + 5,0xd);
                    if (iVar2 == 0) {
                      pcVar3 = this_ptr->template_name + 0xd;
                      pcVar5 = "kParmControlButton" + 5;
                      this_ptr->param_type = PARM_TYPE_CONTROL_BUTTON;
                    }
                    else {
                      iVar2 = _strnicmp
                                        (pcVar5,"kParmDamageType" + 5,10);
                      if (iVar2 == 0) {
                        pcVar3 = this_ptr->template_name + 10;
                        pcVar5 = "kParmDamageType" + 5;
                        this_ptr->param_type = PARM_TYPE_DAMAGE_TYPE;
                      }
                      else {
                        iVar2 = _strnicmp
                                          (pcVar5,"kParmDeathType" + 5,9);
                        if (iVar2 == 0) {
                          pcVar3 = this_ptr->template_name + 9;
                          pcVar5 = "kParmDeathType" + 5;
                          this_ptr->param_type = PARM_TYPE_DEATH_TYPE;
                        }
                        else {
                          iVar2 = _strnicmp
                                            (pcVar5,"kParmSfxSet" + 5,6);
                          if (iVar2 == 0) {
                            pcVar3 = this_ptr->template_name + 6;
                            pcVar5 = "kParmSfxSet" + 5;
                            this_ptr->param_type = PARM_TYPE_SFX_SET;
                          }
                          else {
                            iVar2 = _strnicmp
                                              (pcVar5,"kParmSfxUsed" + 5,7);
                            if (iVar2 == 0) {
                              pcVar3 = this_ptr->template_name + 7;
                              pcVar5 = "kParmSfxUsed" + 5;
                              this_ptr->param_type = PARM_TYPE_SFX_USED;
                            }
                            else {
                              iVar2 = _strnicmp
                                                (pcVar5,"kParmWav" + 5,3);
                              if (iVar2 == 0) {
                                pcVar3 = this_ptr->template_name + 3;
                                pcVar5 = "kParmWav" + 5;
                                this_ptr->param_type = PARM_TYPE_WAV;
                              }
                              else {
                                iVar2 = _strnicmp
                                                  (pcVar5,"kParmWeather" + 5,7);
                                if (iVar2 == 0) {
                                  pcVar3 = this_ptr->template_name + 7;
                                  pcVar5 = "kParmWeather" + 5;
                                  this_ptr->param_type = PARM_TYPE_WEATHER;
                                }
                                else {
                                  iVar2 = _strnicmp
                                                    (pcVar5,"kParmCounterSet" + 5,10);
                                  if (iVar2 == 0) {
                                    pcVar3 = this_ptr->template_name + 10;
                                    pcVar5 = "kParmCounterSet" + 5;
                                    this_ptr->param_type = PARM_TYPE_COUNTER_SET;
                                  }
                                  else {
                                    iVar2 = _strnicmp
                                                      (pcVar5,"kParmCounterUsed" + 5,0xb);
                                    if (iVar2 == 0) {
                                      pcVar3 = this_ptr->template_name + 0xb;
                                      pcVar5 = "kParmCounterUsed" + 5;
                                      this_ptr->param_type = PARM_TYPE_COUNTER_USED;
                                    }
                                    else {
                                      iVar2 = _strnicmp
                                                        (pcVar5,"kParmLetterBoxMode" + 5,
                                                         0xd);
                                      if (iVar2 == 0) {
                                        pcVar3 = this_ptr->template_name + 0xd;
                                        pcVar5 = "kParmLetterBoxMode" + 5;
                                        this_ptr->param_type = PARM_TYPE_LETTER_BOX_MODE;
                                      }
                                      else {
                                        iVar2 = _strnicmp
                                                          (pcVar5,"kParmFilename" + 5,8);
                                        if (iVar2 == 0) {
                                          pcVar3 = this_ptr->template_name + 8;
                                          pcVar5 = "kParmFilename" + 5;
                                          this_ptr->param_type = PARM_TYPE_FILENAME;
                                        }
                                        else {
                                          iVar2 = _strnicmp
                                                            (pcVar5,"kParmSpotLight" + 5,9)
                                          ;
                                          if (iVar2 == 0) {
                                            pcVar3 = this_ptr->template_name + 9;
                                            pcVar5 = "kParmSpotLight" + 5;
                                            this_ptr->param_type = PARM_TYPE_SPOT_LIGHT;
                                          }
                                          else {
                                            iVar2 = _strnicmp
                                                              (pcVar5,"kParmEventCommand" +
                                                                      5,0xc);
                                            if (iVar2 == 0) {
                                              pcVar3 = this_ptr->template_name + 0xc;
                                              pcVar5 = "kParmEventCommand" + 5;
                                              this_ptr->param_type = PARM_TYPE_EVENT_COMMAND;
                                            }
                                            else {
                                              iVar2 = _strnicmp
                                                                (pcVar5,
                                                  "kParmPersistentEventName" + 5,0x13);
                                              if (iVar2 == 0) {
                                                pcVar3 = this_ptr->template_name + 0x13;
                                                pcVar5 = "kParmPersistentEventName" + 5;
                                                this_ptr->param_type =
                                                     PARM_TYPE_PERSISTENT_EVENT_NAME;
                                              }
                                              else {
                                                iVar2 = _strnicmp
                                                                  (pcVar5,
                                                  "kParmGameFlagName" + 5,0xc);
                                                if (iVar2 == 0) {
                                                  pcVar3 = this_ptr->template_name + 0xc;
                                                  pcVar5 = "kParmGameFlagName" + 5;
                                                  this_ptr->param_type = PARM_TYPE_GAME_FLAG_NAME;
                                                }
                                                else {
                                                  iVar2 = _strnicmp
                                                                    (pcVar5,
                                                  "kParmMotionName" + 5,10);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = this_ptr->template_name + 10;
                                                    pcVar5 = "kParmMotionName" + 5;
                                                    this_ptr->param_type = PARM_TYPE_MOTION_NAME;
                                                  }
                                                  else {
                                                    iVar2 = _strnicmp
                                                                      (pcVar5,
                                                  "kParmMotionState" + 5,0xb);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = this_ptr->template_name + 0xb;
                                                    pcVar5 = "kParmMotionState" + 5;
                                                    this_ptr->param_type = PARM_TYPE_MOTION_STATE;
                                                  }
                                                  else {
                                                    iVar2 = _strnicmp
                                                                      (pcVar5,"kParmDBTag"
                                                                              + 5,5);
                                                    if (iVar2 == 0) {
                                                      pcVar3 = this_ptr->template_name + 5;
                                                      pcVar5 = "kParmDBTag" + 5;
                                                      this_ptr->param_type = PARM_TYPE_DB_TAG;
                                                    }
                                                    else {
                                                      iVar2 = _strnicmp
                                                                        (pcVar5,
                                                  "kParmHeroTask" + 5,8);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = this_ptr->template_name + 8;
                                                    pcVar5 = "kParmHeroTask" + 5;
                                                    this_ptr->param_type = PARM_TYPE_HERO_TASK;
                                                  }
                                                  else {
                                                    iVar2 = _strnicmp
                                                                      (pcVar5,"kParmTimer"
                                                                              + 5,5);
                                                    if (iVar2 == 0) {
                                                      pcVar3 = this_ptr->template_name + 5;
                                                      pcVar5 = "kParmTimer" + 5;
                                                      this_ptr->param_type = PARM_TYPE_TIMER;
                                                    }
                                                    else {
                                                      iVar2 = _strnicmp
                                                                        (pcVar5,
                                                  "kParmRelOp" + 5,5);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = this_ptr->template_name + 5;
                                                    pcVar5 = "kParmRelOp" + 5;
                                                    this_ptr->param_type = PARM_TYPE_REL_OP;
                                                  }
                                                  else {
                                                    iVar2 = _strnicmp
                                                                      (pcVar5,
                                                  "kParmBodyPartList" + 5,0xc);
                                                  if (iVar2 == 0) {
                                                    pcVar3 = this_ptr->template_name + 0xc;
                                                    pcVar5 = "kParmBodyPartList" + 5;
                                                    this_ptr->param_type = PARM_TYPE_BODY_PART_LIST;
                                                  }
                                                  else {
                                                    iVar2 = _strnicmp
                                                                      (this_ptr->template_name,
                                                                       "kParmIniVariable" +
                                                                       5,0xb);
                                                    if (iVar2 != 0) goto LAB_00560ead;
                                                    pcVar3 = this_ptr->template_name + 0xb;
                                                    pcVar5 = "kParmIniVariable" + 5;
                                                    this_ptr->param_type = PARM_TYPE_INI_VARIABLE;
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
  pcVar4 = this_ptr->default_value;
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
              (g_CEditorToolsPtr,"SCmdParm::setTemplateText - %s unknown template type!",this_ptr->template_name);
    return 0;
  }
  this_ptr->modifier_string[0] = '\0';
  if (*pcVar3 != '\0') {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if (cVar1 == ':') {
        cVar1 = *pcVar3;
        pcVar5 = this_ptr->modifier_string;
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
                    (g_CEditorToolsPtr,"SCmdParm::setTemplateText - Invalid template string: %s",this_ptr->template_name);
          return 0;
        }
        cVar1 = *pcVar3;
        pcVar5 = this_ptr->default_value;
        while (cVar1 != '\'') {
          if (*pcVar3 == '\0') {
            g_CurrentFilename = "..\\core\\script.cpp";
            g_CurrentLineNumber = 0x1188;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Missing closing ' in template string: %s",this_ptr->template_name);
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
