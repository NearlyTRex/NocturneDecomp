// Name: core_msnedit.cpp_FUN_0053d220
// Address: 0053d220
// Address Range: [[0053d220, 0053d398]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_FUN_0053d220(CDemonMission *this_ptr)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_FUN_0053d220(CDemonMission *this_ptr)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  
  pcVar3 = in_stack_0000000c;
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == ' ') goto LAB_0053d242;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == ' ') goto LAB_0053d242;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_0053d242:
  pcVar3 = in_stack_0000000c;
  if (pcVar2 == (char *)0x0) {
    do {
      pcVar2 = pcVar3;
      if (*pcVar3 == '\t') goto LAB_0053d266;
      if (*pcVar3 == '\0') break;
      pcVar2 = pcVar3 + 1;
      if (*pcVar2 == '\t') goto LAB_0053d266;
      pcVar3 = pcVar3 + 2;
    } while (*pcVar2 != '\0');
    pcVar2 = (char *)0x0;
LAB_0053d266:
    pcVar3 = in_stack_0000000c;
    if (pcVar2 == (char *)0x0) {
      do {
        pcVar2 = pcVar3;
        if (*pcVar3 == '\r') goto LAB_0053d28a;
        if (*pcVar3 == '\0') break;
        pcVar2 = pcVar3 + 1;
        if (*pcVar2 == '\r') goto LAB_0053d28a;
        pcVar3 = pcVar3 + 2;
      } while (*pcVar2 != '\0');
      pcVar2 = (char *)0x0;
LAB_0053d28a:
      pcVar3 = in_stack_0000000c;
      if (pcVar2 == (char *)0x0) {
        do {
          pcVar2 = pcVar3;
          if (*pcVar3 == '\n') goto LAB_0053d2ae;
          if (*pcVar3 == '\0') break;
          pcVar2 = pcVar3 + 1;
          if (*pcVar2 == '\n') goto LAB_0053d2ae;
          pcVar3 = pcVar3 + 2;
        } while (*pcVar2 != '\0');
        pcVar2 = (char *)0x0;
LAB_0053d2ae:
        pcVar3 = in_stack_0000000c;
        if (pcVar2 == (char *)0x0) {
          do {
            pcVar2 = pcVar3;
            if (*pcVar3 == '\"') goto LAB_0053d2d2;
            if (*pcVar3 == '\0') break;
            pcVar2 = pcVar3 + 1;
            if (*pcVar2 == '\"') goto LAB_0053d2d2;
            pcVar3 = pcVar3 + 2;
          } while (*pcVar2 != '\0');
          pcVar2 = (char *)0x0;
LAB_0053d2d2:
          pcVar3 = in_stack_0000000c;
          if (pcVar2 == (char *)0x0) {
            do {
              pcVar2 = pcVar3;
              if (*pcVar3 == '\'') goto LAB_0053d2f6;
              if (*pcVar3 == '\0') break;
              pcVar2 = pcVar3 + 1;
              if (*pcVar2 == '\'') goto LAB_0053d2f6;
              pcVar3 = pcVar3 + 2;
            } while (*pcVar2 != '\0');
            pcVar2 = (char *)0x0;
LAB_0053d2f6:
            pcVar3 = in_stack_0000000c;
            if (pcVar2 == (char *)0x0) {
              do {
                pcVar2 = pcVar3;
                if (*pcVar3 == '{') goto LAB_0053d316;
                if (*pcVar3 == '\0') break;
                pcVar2 = pcVar3 + 1;
                if (*pcVar2 == '{') goto LAB_0053d316;
                pcVar3 = pcVar3 + 2;
              } while (*pcVar2 != '\0');
              pcVar2 = (char *)0x0;
LAB_0053d316:
              pcVar3 = in_stack_0000000c;
              if (pcVar2 == (char *)0x0) {
                do {
                  pcVar2 = pcVar3;
                  if (*pcVar3 == '}') goto LAB_0053d336;
                  if (*pcVar3 == '\0') break;
                  pcVar2 = pcVar3 + 1;
                  if (*pcVar2 == '}') goto LAB_0053d336;
                  pcVar3 = pcVar3 + 2;
                } while (*pcVar2 != '\0');
                pcVar2 = (char *)0x0;
LAB_0053d336:
                if (pcVar2 == (char *)0x0) {
                  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000008,in_stack_0000000c);
                  if ((iVar1 != 0) &&
                     (pcVar3 = core_mission_cpp_CDemonMission_FUN_00524030(this_ptr),
                     pcVar3 != (char *)0x0)) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Already an actor named %s in this mission!");
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
