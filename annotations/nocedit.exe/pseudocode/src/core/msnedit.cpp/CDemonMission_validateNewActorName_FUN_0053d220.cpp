// Name: core_msnedit.cpp_CDemonMission_validateNewActorName_FUN_0053d220
// Address: 0053d220
// Address Range: [[0053d220, 0053d398]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_CDemonMission_validateNewActorName_FUN_0053d220(CDemonMission *this_ptr,char *orig_name,char *new_name)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_CDemonMission_validateNewActorName_FUN_0053d220(CDemonMission *this_ptr,char *orig_name,char *new_name)

{
  int iVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = new_name;
  do {
    pcVar3 = pcVar4;
    if (*pcVar4 == ' ') goto LAB_0053d242;
    if (*pcVar4 == '\0') break;
    pcVar3 = pcVar4 + 1;
    if (*pcVar3 == ' ') goto LAB_0053d242;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_0053d242:
  pcVar4 = new_name;
  if (pcVar3 == (char *)0x0) {
    do {
      pcVar3 = pcVar4;
      if (*pcVar4 == '\t') goto LAB_0053d266;
      if (*pcVar4 == '\0') break;
      pcVar3 = pcVar4 + 1;
      if (*pcVar3 == '\t') goto LAB_0053d266;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar3 != '\0');
    pcVar3 = (char *)0x0;
LAB_0053d266:
    pcVar4 = new_name;
    if (pcVar3 == (char *)0x0) {
      do {
        pcVar3 = pcVar4;
        if (*pcVar4 == '\r') goto LAB_0053d28a;
        if (*pcVar4 == '\0') break;
        pcVar3 = pcVar4 + 1;
        if (*pcVar3 == '\r') goto LAB_0053d28a;
        pcVar4 = pcVar4 + 2;
      } while (*pcVar3 != '\0');
      pcVar3 = (char *)0x0;
LAB_0053d28a:
      pcVar4 = new_name;
      if (pcVar3 == (char *)0x0) {
        do {
          pcVar3 = pcVar4;
          if (*pcVar4 == '\n') goto LAB_0053d2ae;
          if (*pcVar4 == '\0') break;
          pcVar3 = pcVar4 + 1;
          if (*pcVar3 == '\n') goto LAB_0053d2ae;
          pcVar4 = pcVar4 + 2;
        } while (*pcVar3 != '\0');
        pcVar3 = (char *)0x0;
LAB_0053d2ae:
        pcVar4 = new_name;
        if (pcVar3 == (char *)0x0) {
          do {
            pcVar3 = pcVar4;
            if (*pcVar4 == '\"') goto LAB_0053d2d2;
            if (*pcVar4 == '\0') break;
            pcVar3 = pcVar4 + 1;
            if (*pcVar3 == '\"') goto LAB_0053d2d2;
            pcVar4 = pcVar4 + 2;
          } while (*pcVar3 != '\0');
          pcVar3 = (char *)0x0;
LAB_0053d2d2:
          pcVar4 = new_name;
          if (pcVar3 == (char *)0x0) {
            do {
              pcVar3 = pcVar4;
              if (*pcVar4 == '\'') goto LAB_0053d2f6;
              if (*pcVar4 == '\0') break;
              pcVar3 = pcVar4 + 1;
              if (*pcVar3 == '\'') goto LAB_0053d2f6;
              pcVar4 = pcVar4 + 2;
            } while (*pcVar3 != '\0');
            pcVar3 = (char *)0x0;
LAB_0053d2f6:
            pcVar4 = new_name;
            if (pcVar3 == (char *)0x0) {
              do {
                pcVar3 = pcVar4;
                if (*pcVar4 == '{') goto LAB_0053d316;
                if (*pcVar4 == '\0') break;
                pcVar3 = pcVar4 + 1;
                if (*pcVar3 == '{') goto LAB_0053d316;
                pcVar4 = pcVar4 + 2;
              } while (*pcVar3 != '\0');
              pcVar3 = (char *)0x0;
LAB_0053d316:
              pcVar4 = new_name;
              if (pcVar3 == (char *)0x0) {
                do {
                  pcVar3 = pcVar4;
                  if (*pcVar4 == '}') goto LAB_0053d336;
                  if (*pcVar4 == '\0') break;
                  pcVar3 = pcVar4 + 1;
                  if (*pcVar3 == '}') goto LAB_0053d336;
                  pcVar4 = pcVar4 + 2;
                } while (*pcVar3 != '\0');
                pcVar3 = (char *)0x0;
LAB_0053d336:
                if (pcVar3 == (char *)0x0) {
                  iVar1 = _stricmp(orig_name,new_name);
                  if ((iVar1 != 0) &&
                     (pCVar2 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                                         (this_ptr,new_name), pCVar2 != (CDemonActor *)0x0)) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Already an actor named %s in this mission!",new_name);
                    return 0;
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Actor name contains invalid characters.");
  return 0;
}
