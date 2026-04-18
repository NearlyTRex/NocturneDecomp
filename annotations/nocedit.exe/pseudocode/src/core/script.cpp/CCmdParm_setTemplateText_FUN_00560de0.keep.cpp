// Name: core_script.cpp_CCmdParm_setTemplateText_FUN_00560de0
// Address: 00560de0
// MANUAL RECONSTRUCTION
// Address Range: [[00560de0, 0056160a]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0(CCmdParm *this_ptr,char *template_text,int *parse_cursor)

#include "nocturne.h"

int __cdecl core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0(CCmdParm *this_ptr,char *template_text,int *parse_cursor)

{
  char cVar2;
  int iVar2;
  int iVar3;
  char *pcVar3;
  char *pcVar6;
  char *pcVar7;
  char *pcVar5;
  
  pcVar3 = template_text + *parse_cursor;
  if (*pcVar3 != '<') {
    pcVar5 = "SCmdParm::setTemplateText - expected opening '<' in %s";
    template_text = pcVar3;
LAB_00560e30:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar5,template_text);
    return 0;
  }
  *parse_cursor = *parse_cursor + 1;
  pcVar6 = this_ptr->template_name;
  while( true ) {
    iVar3 = *parse_cursor;
    if (template_text[iVar3] == '>') break;
    if (template_text[iVar3] == '\0') {
      pcVar5 = "SCmdParm::setTemplateText - expected closing '>' in %s";
      goto LAB_00560e30;
    }
    *parse_cursor = iVar3 + 1;
    *pcVar6 = template_text[iVar3];
    pcVar6 = pcVar6 + 1;
  }
  *pcVar6 = '\0';
  *parse_cursor = *parse_cursor + 1;
  pcVar7 = this_ptr->template_name;
  pcVar6 = (char *)0x0;
  iVar2 = _strnicmp(pcVar7,(char *)"kParmInt" + 5,3);
  if (iVar2 == 0) {
    this_ptr->param_type = PARM_TYPE_INT;
    pcVar6 = this_ptr->template_name + 3;
    pcVar7 = (char *)"kParmInt" + 5;
  }
  else {
    iVar3 = _strnicmp(pcVar7,(char *)"kParmFloat" + 5,5);
    if (iVar3 == 0) {
      pcVar6 = this_ptr->template_name + 5;
      pcVar7 = (char *)"kParmFloat" + 5;
      this_ptr->param_type = PARM_TYPE_FLOAT;
    }
    else {
      iVar3 = _strnicmp(pcVar7,(char *)"kParmText" + 5,4);
      if (iVar3 == 0) {
        pcVar6 = this_ptr->template_name + 4;
        pcVar7 = (char *)"kParmText" + 5;
        this_ptr->param_type = PARM_TYPE_TEXT;
      }
      else {
        iVar3 = _strnicmp(pcVar7,(char *)"kParmActorVariable" + 5,0xd);
        if (iVar3 == 0) {
          pcVar6 = this_ptr->template_name + 0xd;
          pcVar7 = (char *)"kParmActorVariable" + 5;
          this_ptr->param_type = PARM_TYPE_ACTOR_VARIABLE;
        }
        else {
          iVar3 = _strnicmp(pcVar7,(char *)"kParmActorClass" + 5,10);
          if (iVar3 == 0) {
            pcVar6 = this_ptr->template_name + 10;
            pcVar7 = (char *)"kParmActorClass" + 5;
            this_ptr->param_type = PARM_TYPE_ACTOR_CLASS;
          }
          else {
            iVar3 = _strnicmp(pcVar7,(char *)"kParmActor" + 5,5);
            if (iVar3 == 0) {
              pcVar6 = this_ptr->template_name + 5;
              pcVar7 = (char *)"kParmActor" + 5;
              this_ptr->param_type = PARM_TYPE_ACTOR;
            }
            else {
              iVar3 = _strnicmp(pcVar7,(char *)"kParmCondition" + 5,9);
              if (iVar3 == 0) {
                pcVar6 = this_ptr->template_name + 9;
                pcVar7 = (char *)"kParmCondition" + 5;
                this_ptr->param_type = PARM_TYPE_CONDITION;
              }
              else {
                iVar3 = _strnicmp(pcVar7,(char *)"kParmLabel" + 5,5);
                if (iVar3 == 0) {
                  pcVar6 = this_ptr->template_name + 5;
                  pcVar7 = (char *)"kParmLabel" + 5;
                  this_ptr->param_type = PARM_TYPE_LABEL;
                }
                else {
                  iVar3 = _strnicmp(pcVar7,(char *)"kParmCamera" + 5,6);
                  if (iVar3 == 0) {
                    pcVar6 = this_ptr->template_name + 6;
                    pcVar7 = (char *)"kParmCamera" + 5;
                    this_ptr->param_type = PARM_TYPE_CAMERA;
                  }
                  else {
                    iVar3 = _strnicmp
                                      (pcVar7,(char *)"kParmControlButton" + 5,0xd);
                    if (iVar3 == 0) {
                      pcVar6 = this_ptr->template_name + 0xd;
                      pcVar7 = (char *)"kParmControlButton" + 5;
                      this_ptr->param_type = PARM_TYPE_CONTROL_BUTTON;
                    }
                    else {
                      iVar3 = _strnicmp
                                        (pcVar7,(char *)"kParmDamageType" + 5,10);
                      if (iVar3 == 0) {
                        pcVar6 = this_ptr->template_name + 10;
                        pcVar7 = (char *)"kParmDamageType" + 5;
                        this_ptr->param_type = PARM_TYPE_DAMAGE_TYPE;
                      }
                      else {
                        iVar3 = _strnicmp
                                          (pcVar7,(char *)"kParmDeathType" + 5,9);
                        if (iVar3 == 0) {
                          pcVar6 = this_ptr->template_name + 9;
                          pcVar7 = (char *)"kParmDeathType" + 5;
                          this_ptr->param_type = PARM_TYPE_DEATH_TYPE;
                        }
                        else {
                          iVar3 = _strnicmp
                                            (pcVar7,(char *)"kParmSfxSet" + 5,6);
                          if (iVar3 == 0) {
                            pcVar6 = this_ptr->template_name + 6;
                            pcVar7 = (char *)"kParmSfxSet" + 5;
                            this_ptr->param_type = PARM_TYPE_SFX_SET;
                          }
                          else {
                            iVar3 = _strnicmp
                                              (pcVar7,(char *)"kParmSfxUsed" + 5,7);
                            if (iVar3 == 0) {
                              pcVar6 = this_ptr->template_name + 7;
                              pcVar7 = (char *)"kParmSfxUsed" + 5;
                              this_ptr->param_type = PARM_TYPE_SFX_USED;
                            }
                            else {
                              iVar3 = _strnicmp
                                                (pcVar7,(char *)"kParmWav" + 5,3);
                              if (iVar3 == 0) {
                                pcVar6 = this_ptr->template_name + 3;
                                pcVar7 = (char *)"kParmWav" + 5;
                                this_ptr->param_type = PARM_TYPE_WAV;
                              }
                              else {
                                iVar3 = _strnicmp
                                                  (pcVar7,(char *)"kParmWeather" + 5,7);
                                if (iVar3 == 0) {
                                  pcVar6 = this_ptr->template_name + 7;
                                  pcVar7 = (char *)"kParmWeather" + 5;
                                  this_ptr->param_type = PARM_TYPE_WEATHER;
                                }
                                else {
                                  iVar3 = _strnicmp
                                                    (pcVar7,(char *)"kParmCounterSet" + 5,10);
                                  if (iVar3 == 0) {
                                    pcVar6 = this_ptr->template_name + 10;
                                    pcVar7 = (char *)"kParmCounterSet" + 5;
                                    this_ptr->param_type = PARM_TYPE_COUNTER_SET;
                                  }
                                  else {
                                    iVar3 = _strnicmp
                                                      (pcVar7,(char *)"kParmCounterUsed" + 5,0xb);
                                    if (iVar3 == 0) {
                                      pcVar6 = this_ptr->template_name + 0xb;
                                      pcVar7 = (char *)"kParmCounterUsed" + 5;
                                      this_ptr->param_type = PARM_TYPE_COUNTER_USED;
                                    }
                                    else {
                                      iVar3 = _strnicmp
                                                        (pcVar7,(char *)"kParmLetterBoxMode" + 5,
                                                         0xd);
                                      if (iVar3 == 0) {
                                        pcVar6 = this_ptr->template_name + 0xd;
                                        pcVar7 = (char *)"kParmLetterBoxMode" + 5;
                                        this_ptr->param_type = PARM_TYPE_LETTER_BOX_MODE;
                                      }
                                      else {
                                        iVar3 = _strnicmp
                                                          (pcVar7,(char *)"kParmFilename" + 5,8);
                                        if (iVar3 == 0) {
                                          pcVar6 = this_ptr->template_name + 8;
                                          pcVar7 = (char *)"kParmFilename" + 5;
                                          this_ptr->param_type = PARM_TYPE_FILENAME;
                                        }
                                        else {
                                          iVar3 = _strnicmp
                                                            (pcVar7,(char *)"kParmSpotLight" + 5,9)
                                          ;
                                          if (iVar3 == 0) {
                                            pcVar6 = this_ptr->template_name + 9;
                                            pcVar7 = (char *)"kParmSpotLight" + 5;
                                            this_ptr->param_type = PARM_TYPE_SPOT_LIGHT;
                                          }
                                          else {
                                            iVar3 = _strnicmp
                                                              (pcVar7,(char *)"kParmEventCommand" +
                                                                      5,0xc);
                                            if (iVar3 == 0) {
                                              pcVar6 = this_ptr->template_name + 0xc;
                                              pcVar7 = (char *)"kParmEventCommand" + 5;
                                              this_ptr->param_type = PARM_TYPE_EVENT_COMMAND;
                                            }
                                            else {
                                              iVar3 = _strnicmp
                                                                (pcVar7,
                                                  (char *)"kParmPersistentEventName" + 5,0x13);
                                              if (iVar3 == 0) {
                                                pcVar6 = this_ptr->template_name + 0x13;
                                                pcVar7 = (char *)"kParmPersistentEventName" + 5;
                                                this_ptr->param_type =
                                                     PARM_TYPE_PERSISTENT_EVENT_NAME;
                                              }
                                              else {
                                                iVar3 = _strnicmp
                                                                  (pcVar7,
                                                  (char *)"kParmGameFlagName" + 5,0xc);
                                                if (iVar3 == 0) {
                                                  pcVar6 = this_ptr->template_name + 0xc;
                                                  pcVar7 = (char *)"kParmGameFlagName" + 5;
                                                  this_ptr->param_type = PARM_TYPE_GAME_FLAG_NAME;
                                                }
                                                else {
                                                  iVar3 = _strnicmp
                                                                    (pcVar7,
                                                  (char *)"kParmMotionName" + 5,10);
                                                  if (iVar3 == 0) {
                                                    pcVar6 = this_ptr->template_name + 10;
                                                    pcVar7 = (char *)"kParmMotionName" + 5;
                                                    this_ptr->param_type = PARM_TYPE_MOTION_NAME;
                                                  }
                                                  else {
                                                    iVar3 = _strnicmp
                                                                      (pcVar7,
                                                  (char *)"kParmMotionState" + 5,0xb);
                                                  if (iVar3 == 0) {
                                                    pcVar6 = this_ptr->template_name + 0xb;
                                                    pcVar7 = (char *)"kParmMotionState" + 5;
                                                    this_ptr->param_type = PARM_TYPE_MOTION_STATE;
                                                  }
                                                  else {
                                                    iVar3 = _strnicmp
                                                                      (pcVar7,(char *)"kParmDBTag"
                                                                              + 5,5);
                                                    if (iVar3 == 0) {
                                                      pcVar6 = this_ptr->template_name + 5;
                                                      pcVar7 = (char *)"kParmDBTag" + 5;
                                                      this_ptr->param_type = PARM_TYPE_DB_TAG;
                                                    }
                                                    else {
                                                      iVar3 = _strnicmp
                                                                        (pcVar7,
                                                  (char *)"kParmHeroTask" + 5,8);
                                                  if (iVar3 == 0) {
                                                    pcVar6 = this_ptr->template_name + 8;
                                                    pcVar7 = (char *)"kParmHeroTask" + 5;
                                                    this_ptr->param_type = PARM_TYPE_HERO_TASK;
                                                  }
                                                  else {
                                                    iVar3 = _strnicmp
                                                                      (pcVar7,(char *)"kParmTimer"
                                                                              + 5,5);
                                                    if (iVar3 == 0) {
                                                      pcVar6 = this_ptr->template_name + 5;
                                                      pcVar7 = (char *)"kParmTimer" + 5;
                                                      this_ptr->param_type = PARM_TYPE_TIMER;
                                                    }
                                                    else {
                                                      iVar3 = _strnicmp
                                                                        (pcVar7,
                                                  (char *)"kParmRelOp" + 5,5);
                                                  if (iVar3 == 0) {
                                                    pcVar6 = this_ptr->template_name + 5;
                                                    pcVar7 = (char *)"kParmRelOp" + 5;
                                                    this_ptr->param_type = PARM_TYPE_REL_OP;
                                                  }
                                                  else {
                                                    iVar3 = _strnicmp
                                                                      (pcVar7,
                                                  (char *)"kParmBodyPartList" + 5,0xc);
                                                  if (iVar3 == 0) {
                                                    pcVar6 = this_ptr->template_name + 0xc;
                                                    pcVar7 = (char *)"kParmBodyPartList" + 5;
                                                    this_ptr->param_type = PARM_TYPE_BODY_PART_LIST;
                                                  }
                                                  else {
                                                    iVar3 = _strnicmp
                                                                      (this_ptr->template_name,
                                                                       (char *)"kParmIniVariable" +
                                                                       5,0xb);
                                                    if (iVar3 != 0) goto LAB_00560ead;
                                                    pcVar6 = this_ptr->template_name + 0xb;
                                                    pcVar7 = (char *)"kParmIniVariable" + 5;
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
  strcpy(this_ptr->default_value,pcVar7);
LAB_00560ead:
  if (pcVar6 == (char *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"SCmdParm::setTemplateText - %s unknown template type!",this_ptr->template_name);
    return 0;
  }
  this_ptr->modifier_string[0] = '\0';
  if (*pcVar6 != '\0') {
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      if (cVar2 == ':') {
        cVar2 = *pcVar6;
        pcVar7 = this_ptr->modifier_string;
        while ((cVar2 != '\0' && (*pcVar6 != '\''))) {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          *pcVar7 = cVar2;
          cVar2 = *pcVar6;
          pcVar7 = pcVar7 + 1;
        }
        *pcVar7 = '\0';
      }
      else {
        if (cVar2 != '\'') {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"SCmdParm::setTemplateText - Invalid template string: %s",this_ptr->template_name);
          return 0;
        }
        cVar2 = *pcVar6;
        pcVar7 = this_ptr->default_value;
        while (cVar2 != '\'') {
          if (*pcVar6 == '\0') {
            g_CurrentFilename = "..\\core\\script.cpp";
            g_CurrentLineNumber = 0x1188;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Missing closing ' in template string: %s",this_ptr->template_name);
          }
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          *pcVar7 = cVar2;
          pcVar7 = pcVar7 + 1;
          cVar2 = *pcVar6;
        }
        pcVar6 = pcVar6 + 1;
        *pcVar7 = '\0';
      }
    } while (*pcVar6 != '\0');
  }
  return 1;
}
