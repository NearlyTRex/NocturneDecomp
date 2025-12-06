// Name: core_setedit.cpp_ImportingGroundTextures_FUN_00578420
// Address: 00578420
// Address Range: [[00578420, 00578624]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_ImportingGroundTextures_FUN_00578420()

#include "nocturne.h"

void core_setedit_cpp_ImportingGroundTextures_FUN_00578420(void)

{
  FILE *stream;
  char *pcVar1;
  int iVar2;
  char *str1;
  char *type;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  int iVar4;
  uint in_stack_00000004;
  char *in_stack_00000008;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char *str2;
  char *pcStack_194;
  char acStack_190 [8];
  char acStack_188 [192];
  byte auStack_c8 [4];
  char acStack_c4 [4];
  char acStack_c0 [92];
  byte auStack_64 [92];
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing texture ground type list from %s...");
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (in_stack_00000008,(char *)0x0,"rt","..\\core\\setedit.cpp",0x2c3)
  ;
  if (stream != (FILE *)0x0) {
    iVar4 = 0;
    while (pcVar1 = crt_stdio_c_fgets_FUN_005fefd0((char *)&pcStack_194,200,stream),
          pcVar1 != (char *)0x0) {
      pcVar1 = acStack_190;
      do {
        pcVar3 = pcVar1;
        if (*pcVar1 == '\n') goto LAB_005784ac;
        if (*pcVar1 == '\0') break;
        pcVar3 = pcVar1 + 1;
        if (*pcVar3 == '\n') goto LAB_005784ac;
        pcVar1 = pcVar1 + 2;
      } while (*pcVar3 != '\0');
      pcVar3 = (char *)0x0;
LAB_005784ac:
      iVar4 = iVar4 + 1;
      if (pcVar3 != (char *)0x0) {
        pcVar1 = acStack_190;
        do {
          pcVar3 = pcVar1;
          if (*pcVar1 == '\n') goto LAB_005784e7;
          if (*pcVar1 == '\0') break;
          pcVar3 = pcVar1 + 1;
          if (*pcVar3 == '\n') goto LAB_005784e7;
          pcVar1 = pcVar1 + 2;
        } while (*pcVar3 != '\0');
        pcVar3 = (char *)0x0;
LAB_005784e7:
        *pcVar3 = '\0';
      }
      pcVar1 = acStack_190;
      while ((g_CharacterClassificationTable[(byte)(*pcVar1 + 1)] & 2U) != 0) {
        pcVar1 = pcVar1 + 1;
      }
      if (*pcVar1 != '\0') {
        iVar2 = crt_stdio_c_sscanf_FUN_0060013c(pcVar1,"%[^,], %s",auStack_64,auStack_c8);
        pcVar1 = in_stack_00000008;
        if (iVar2 == 2) {
          pcVar3 = acStack_c4;
          iVar2 = crt_stdio_c_sscanf_FUN_0060013c(pcVar3,"%d",&stack0x00000004);
          pcVar1 = in_stack_00000008;
          if (iVar2 != 1) {
            type = (char *)0x0;
            while( true ) {
              pcStack_194 = acStack_c0;
              str2 = type;
              pcVar1 = core_ground_cpp_getGroundTypeCode_FUN_004eece0((int)type);
              iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar1,pcVar3);
              pcVar1 = type;
              if (iVar2 == 0) break;
              str1 = core_ground_cpp_getGroundTypeName_FUN_004eed80((int)type);
              pcVar3 = (char *)0x5785af;
              iVar2 = crt_string_c_stricmp_FUN_005fe7f0(str1,str2);
              if ((iVar2 == 0) || (type = type + 1, pcVar1 = in_stack_00000008, 0xd < (int)type))
              break;
            }
          }
        }
        in_stack_00000008 = pcVar1;
        if ((int)in_stack_00000008 < 0) {
          pcStack_194 = acStack_188;
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x2f0;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Error parsing %s line %d:\n\"%s\"",in_stack_00000018,iVar4);
        }
        pcStack_194 = in_stack_00000008;
        core_setedit_cpp_DefineTexturesMaybe_FUN_00578290();
      }
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\core\\setedit.cpp",0x2f4);
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Imported texture ground type list from %s OK.");
  }
  return;
}
