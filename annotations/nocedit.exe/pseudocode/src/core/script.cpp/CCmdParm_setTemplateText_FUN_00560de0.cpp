// Name: core_script.cpp_CCmdParm_setTemplateText_FUN_00560de0
// Address: 00560de0
// Address Range: [[00560de0, 0056160a]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0(CCmdParm *this_ptr,char *param_2,int *param_3)

#include "nocturne.h"

int __cdecl
core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0(CCmdParm *this_ptr,char *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  CCmdParm *pCVar5;
  CCmdParm *pCVar6;
  char *format;
  
  pcVar4 = param_2 + *param_3;
  if (*pcVar4 != '<') {
    format = "SCmdParm::setTemplateText - expected opening '<' in %s";
LAB_00560e30:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,format,pcVar4);
    return 0;
  }
  *param_3 = *param_3 + 1;
  pCVar5 = this_ptr + 0x7d;
  while( true ) {
    iVar3 = *param_3;
    if (param_2[iVar3] == '>') break;
    if (param_2[iVar3] == '\0') {
      format = "SCmdParm::setTemplateText - expected closing '>' in %s";
      pcVar4 = param_2;
      goto LAB_00560e30;
    }
    *param_3 = iVar3 + 1;
    *(char *)&pCVar5->unk = param_2[iVar3];
    pCVar5 = (CCmdParm *)((int)&pCVar5->unk + 1);
  }
  *(byte *)&pCVar5->unk = 0;
  *param_3 = *param_3 + 1;
  pCVar6 = this_ptr + 0x7d;
  pCVar5 = (CCmdParm *)0x0;
  iVar3 = strnicmp((char *)pCVar6,"kParmInt" + 5,3);
  if (iVar3 == 0) {
    this_ptr[0x96].unk = 0;
    pCVar5 = (CCmdParm *)((int)&this_ptr[0x7d].unk + 3);
    pcVar4 = "kParmInt" + 5;
  }
  else {
    iVar3 = strnicmp((char *)pCVar6,"kParmFloat" + 5,5);
    if (iVar3 == 0) {
      pCVar5 = (CCmdParm *)((int)&this_ptr[0x7e].unk + 1);
      pcVar4 = "kParmFloat" + 5;
      this_ptr[0x96].unk = 1;
    }
    else {
      iVar3 = strnicmp((char *)pCVar6,"kParmText" + 5,4);
      if (iVar3 == 0) {
        pCVar5 = this_ptr + 0x7e;
        pcVar4 = "kParmText" + 5;
        this_ptr[0x96].unk = 2;
      }
      else {
        iVar3 = strnicmp
                          ((char *)pCVar6,"kParmActorVariable" + 5,0xd);
        if (iVar3 == 0) {
          pCVar5 = (CCmdParm *)((int)&this_ptr[0x80].unk + 1);
          pcVar4 = "kParmActorVariable" + 5;
          this_ptr[0x96].unk = 7;
        }
        else {
          iVar3 = strnicmp
                            ((char *)pCVar6,"kParmActorClass" + 5,10);
          if (iVar3 == 0) {
            pCVar5 = (CCmdParm *)((int)&this_ptr[0x7f].unk + 2);
            pcVar4 = "kParmActorClass" + 5;
            this_ptr[0x96].unk = 0x1b;
          }
          else {
            iVar3 = strnicmp((char *)pCVar6,"kParmActor" + 5,5);
            if (iVar3 == 0) {
              pCVar5 = (CCmdParm *)((int)&this_ptr[0x7e].unk + 1);
              pcVar4 = "kParmActor" + 5;
              this_ptr[0x96].unk = 3;
            }
            else {
              iVar3 = strnicmp
                                ((char *)pCVar6,"kParmCondition" + 5,9);
              if (iVar3 == 0) {
                pCVar5 = (CCmdParm *)((int)&this_ptr[0x7f].unk + 1);
                pcVar4 = "kParmCondition" + 5;
                this_ptr[0x96].unk = 4;
              }
              else {
                iVar3 = strnicmp
                                  ((char *)pCVar6,"kParmLabel" + 5,5);
                if (iVar3 == 0) {
                  pCVar5 = (CCmdParm *)((int)&this_ptr[0x7e].unk + 1);
                  pcVar4 = "kParmLabel" + 5;
                  this_ptr[0x96].unk = 5;
                }
                else {
                  iVar3 = strnicmp
                                    ((char *)pCVar6,"kParmCamera" + 5,6);
                  if (iVar3 == 0) {
                    pCVar5 = (CCmdParm *)((int)&this_ptr[0x7e].unk + 2);
                    pcVar4 = "kParmCamera" + 5;
                    this_ptr[0x96].unk = 6;
                  }
                  else {
                    iVar3 = strnicmp
                                      ((char *)pCVar6,"kParmControlButton" + 5,0xd);
                    if (iVar3 == 0) {
                      pCVar5 = (CCmdParm *)((int)&this_ptr[0x80].unk + 1);
                      pcVar4 = "kParmControlButton" + 5;
                      this_ptr[0x96].unk = 8;
                    }
                    else {
                      iVar3 = strnicmp
                                        ((char *)pCVar6,"kParmDamageType" + 5,10);
                      if (iVar3 == 0) {
                        pCVar5 = (CCmdParm *)((int)&this_ptr[0x7f].unk + 2);
                        pcVar4 = "kParmDamageType" + 5;
                        this_ptr[0x96].unk = 9;
                      }
                      else {
                        iVar3 = strnicmp
                                          ((char *)pCVar6,"kParmDeathType" + 5,9);
                        if (iVar3 == 0) {
                          pCVar5 = (CCmdParm *)((int)&this_ptr[0x7f].unk + 1);
                          pcVar4 = "kParmDeathType" + 5;
                          this_ptr[0x96].unk = 10;
                        }
                        else {
                          iVar3 = strnicmp
                                            ((char *)pCVar6,"kParmSfxSet" + 5,6);
                          if (iVar3 == 0) {
                            pCVar5 = (CCmdParm *)((int)&this_ptr[0x7e].unk + 2);
                            pcVar4 = "kParmSfxSet" + 5;
                            this_ptr[0x96].unk = 0xb;
                          }
                          else {
                            iVar3 = strnicmp
                                              ((char *)pCVar6,"kParmSfxUsed" + 5,7);
                            if (iVar3 == 0) {
                              pCVar5 = (CCmdParm *)((int)&this_ptr[0x7e].unk + 3);
                              pcVar4 = "kParmSfxUsed" + 5;
                              this_ptr[0x96].unk = 0xc;
                            }
                            else {
                              iVar3 = strnicmp
                                                ((char *)pCVar6,"kParmWav" + 5,3);
                              if (iVar3 == 0) {
                                pCVar5 = (CCmdParm *)((int)&this_ptr[0x7d].unk + 3);
                                pcVar4 = "kParmWav" + 5;
                                this_ptr[0x96].unk = 0xd;
                              }
                              else {
                                iVar3 = strnicmp
                                                  ((char *)pCVar6,"kParmWeather" + 5,7);
                                if (iVar3 == 0) {
                                  pCVar5 = (CCmdParm *)((int)&this_ptr[0x7e].unk + 3);
                                  pcVar4 = "kParmWeather" + 5;
                                  this_ptr[0x96].unk = 0xe;
                                }
                                else {
                                  iVar3 = strnicmp
                                                    ((char *)pCVar6,"kParmCounterSet" + 5,
                                                     10);
                                  if (iVar3 == 0) {
                                    pCVar5 = (CCmdParm *)((int)&this_ptr[0x7f].unk + 2);
                                    pcVar4 = "kParmCounterSet" + 5;
                                    this_ptr[0x96].unk = 0xf;
                                  }
                                  else {
                                    iVar3 = strnicmp
                                                      ((char *)pCVar6,
                                                       "kParmCounterUsed" + 5,0xb);
                                    if (iVar3 == 0) {
                                      pCVar5 = (CCmdParm *)((int)&this_ptr[0x7f].unk + 3);
                                      pcVar4 = "kParmCounterUsed" + 5;
                                      this_ptr[0x96].unk = 0x10;
                                    }
                                    else {
                                      iVar3 = strnicmp
                                                        ((char *)pCVar6,
                                                         "kParmLetterBoxMode" + 5,0xd);
                                      if (iVar3 == 0) {
                                        pCVar5 = (CCmdParm *)((int)&this_ptr[0x80].unk + 1);
                                        pcVar4 = "kParmLetterBoxMode" + 5;
                                        this_ptr[0x96].unk = 0x11;
                                      }
                                      else {
                                        iVar3 = strnicmp
                                                          ((char *)pCVar6,
                                                           "kParmFilename" + 5,8);
                                        if (iVar3 == 0) {
                                          pCVar5 = this_ptr + 0x7f;
                                          pcVar4 = "kParmFilename" + 5;
                                          this_ptr[0x96].unk = 0x12;
                                        }
                                        else {
                                          iVar3 = strnicmp
                                                            ((char *)pCVar6,
                                                             "kParmSpotLight" + 5,9);
                                          if (iVar3 == 0) {
                                            pCVar5 = (CCmdParm *)((int)&this_ptr[0x7f].unk + 1);
                                            pcVar4 = "kParmSpotLight" + 5;
                                            this_ptr[0x96].unk = 0x13;
                                          }
                                          else {
                                            iVar3 = strnicmp
                                                              ((char *)pCVar6,
                                                               "kParmEventCommand" + 5,0xc)
                                            ;
                                            if (iVar3 == 0) {
                                              pCVar5 = this_ptr + 0x80;
                                              pcVar4 = "kParmEventCommand" + 5;
                                              this_ptr[0x96].unk = 0x14;
                                            }
                                            else {
                                              iVar3 = strnicmp
                                                                ((char *)pCVar6,
                                                                 "kParmPersistentEventName"
                                                                 + 5,0x13);
                                              if (iVar3 == 0) {
                                                pCVar5 = (CCmdParm *)((int)&this_ptr[0x81].unk + 3);
                                                pcVar4 = "kParmPersistentEventName" + 5;
                                                this_ptr[0x96].unk = 0x15;
                                              }
                                              else {
                                                iVar3 = strnicmp
                                                                  ((char *)pCVar6,
                                                                   "kParmGameFlagName" + 5,
                                                                   0xc);
                                                if (iVar3 == 0) {
                                                  pCVar5 = this_ptr + 0x80;
                                                  pcVar4 = "kParmGameFlagName" + 5;
                                                  this_ptr[0x96].unk = 0x16;
                                                }
                                                else {
                                                  iVar3 = strnicmp
                                                                    ((char *)pCVar6,
                                                                     "kParmMotionName" + 5,
                                                                     10);
                                                  if (iVar3 == 0) {
                                                    pCVar5 = (CCmdParm *)
                                                             ((int)&this_ptr[0x7f].unk + 2);
                                                    pcVar4 = "kParmMotionName" + 5;
                                                    this_ptr[0x96].unk = 0x17;
                                                  }
                                                  else {
                                                    iVar3 = strnicmp
                                                                      ((char *)pCVar6,
                                                                       "kParmMotionState" +
                                                                       5,0xb);
                                                    if (iVar3 == 0) {
                                                      pCVar5 = (CCmdParm *)
                                                               ((int)&this_ptr[0x7f].unk + 3);
                                                      pcVar4 = "kParmMotionState" + 5;
                                                      this_ptr[0x96].unk = 0x18;
                                                    }
                                                    else {
                                                      iVar3 = strnicmp
                                                                        ((char *)pCVar6,
                                                                         "kParmDBTag" + 5,5
                                                                        );
                                                      if (iVar3 == 0) {
                                                        pCVar5 = (CCmdParm *)
                                                                 ((int)&this_ptr[0x7e].unk + 1);
                                                        pcVar4 = "kParmDBTag" + 5;
                                                        this_ptr[0x96].unk = 0x19;
                                                      }
                                                      else {
                                                        iVar3 = strnicmp
                                                                          ((char *)pCVar6,
                                                                           "kParmHeroTask"
                                                                           + 5,8);
                                                        if (iVar3 == 0) {
                                                          pCVar5 = this_ptr + 0x7f;
                                                          pcVar4 = "kParmHeroTask" + 5;
                                                          this_ptr[0x96].unk = 0x1a;
                                                        }
                                                        else {
                                                          iVar3 = strnicmp
                                                                            ((char *)pCVar6,
                                                                             "kParmTimer" +
                                                                             5,5);
                                                          if (iVar3 == 0) {
                                                            pCVar5 = (CCmdParm *)
                                                                     ((int)&this_ptr[0x7e].unk + 1);
                                                            pcVar4 = "kParmTimer" + 5;
                                                            this_ptr[0x96].unk = 0x1c;
                                                          }
                                                          else {
                                                            iVar3 = 
                                                  strnicmp
                                                            ((char *)pCVar6,
                                                             "kParmRelOp" + 5,5);
                                                  if (iVar3 == 0) {
                                                    pCVar5 = (CCmdParm *)
                                                             ((int)&this_ptr[0x7e].unk + 1);
                                                    pcVar4 = "kParmRelOp" + 5;
                                                    this_ptr[0x96].unk = 0x1d;
                                                  }
                                                  else {
                                                    iVar3 = strnicmp
                                                                      ((char *)pCVar6,
                                                                       "kParmBodyPartList"
                                                                       + 5,0xc);
                                                    if (iVar3 == 0) {
                                                      pCVar5 = this_ptr + 0x80;
                                                      pcVar4 = "kParmBodyPartList" + 5;
                                                      this_ptr[0x96].unk = 0x1e;
                                                    }
                                                    else {
                                                      iVar3 = strnicmp
                                                                        ((char *)(this_ptr + 0x7d),
                                                                         "kParmIniVariable"
                                                                         + 5,0xb);
                                                      if (iVar3 != 0) goto LAB_00560ead;
                                                      pCVar5 = (CCmdParm *)
                                                               ((int)&this_ptr[0x7f].unk + 3);
                                                      pcVar4 = "kParmIniVariable" + 5;
                                                      this_ptr[0x96].unk = 0x1f;
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
  pCVar6 = this_ptr + 0xb0;
  do {
    cVar1 = *pcVar4;
    *(char *)&pCVar6->unk = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)&pCVar6->unk + 1) = cVar1;
    pCVar6 = (CCmdParm *)((int)&pCVar6->unk + 2);
  } while (cVar1 != '\0');
LAB_00560ead:
  if (pCVar5 == (CCmdParm *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"SCmdParm::setTemplateText - %s unknown template type!",this_ptr + 0x7d);
    return 0;
  }
  *(byte *)&this_ptr[0x97].unk = 0;
  if ((char)pCVar5->unk != '\0') {
    do {
      cVar1 = (char)pCVar5->unk;
      pCVar5 = (CCmdParm *)((int)&pCVar5->unk + 1);
      if (cVar1 == ':') {
        cVar1 = (char)pCVar5->unk;
        pCVar6 = this_ptr + 0x97;
        while ((cVar1 != '\0' && ((char)pCVar5->unk != '\''))) {
          piVar2 = &pCVar5->unk;
          pCVar5 = (CCmdParm *)((int)&pCVar5->unk + 1);
          *(char *)&pCVar6->unk = (char)*piVar2;
          cVar1 = (char)pCVar5->unk;
          pCVar6 = (CCmdParm *)((int)&pCVar6->unk + 1);
        }
        *(byte *)&pCVar6->unk = 0;
      }
      else {
        if (cVar1 != '\'') {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"SCmdParm::setTemplateText - Invalid template string: %s",this_ptr + 0x7d);
          return 0;
        }
        cVar1 = (char)pCVar5->unk;
        pCVar6 = this_ptr + 0xb0;
        while (cVar1 != '\'') {
          if ((char)pCVar5->unk == '\0') {
            g_CurrentFilename = "..\\core\\script.cpp";
            g_CurrentLineNumber = 0x1188;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Missing closing ' in template string: %s",this_ptr + 0x7d);
          }
          piVar2 = &pCVar5->unk;
          pCVar5 = (CCmdParm *)((int)&pCVar5->unk + 1);
          *(char *)&pCVar6->unk = (char)*piVar2;
          pCVar6 = (CCmdParm *)((int)&pCVar6->unk + 1);
          cVar1 = (char)pCVar5->unk;
        }
        pCVar5 = (CCmdParm *)((int)&pCVar5->unk + 1);
        *(byte *)&pCVar6->unk = 0;
      }
    } while ((char)pCVar5->unk != '\0');
  }
  return 1;
}
