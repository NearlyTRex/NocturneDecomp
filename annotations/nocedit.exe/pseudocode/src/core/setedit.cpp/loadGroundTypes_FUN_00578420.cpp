// Name: core_setedit.cpp_loadGroundTypes_FUN_00578420
// Address: 00578420
// Address Range: [[00578420, 00578624]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_loadGroundTypes_FUN_00578420(char *filename)

#include "nocturne.h"

void __cdecl core_setedit_cpp_loadGroundTypes_FUN_00578420(char *filename)

{
  EGroundType EVar1;
  _FILE *stream;
  char *pcVar2;
  int iVar3;
  EGroundType type;
  char *pcVar4;
  int iVar5;
  char local_19c [200];
  char local_d4 [100];
  char local_70 [100];
  EGroundType local_c;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing texture ground type list from %s...");
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"rt","..\\core\\setedit.cpp",0x2c3);
  if (stream != (_FILE *)0x0) {
    iVar5 = 0;
    while (pcVar2 = _fgets(local_19c,200,stream), pcVar2 != (char *)0x0) {
      pcVar2 = local_19c;
      do {
        pcVar4 = pcVar2;
        if (*pcVar2 == '\n') goto LAB_005784ac;
        if (*pcVar2 == '\0') break;
        pcVar4 = pcVar2 + 1;
        if (*pcVar4 == '\n') goto LAB_005784ac;
        pcVar2 = pcVar2 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_005784ac:
      iVar5 = iVar5 + 1;
      if (pcVar4 != (char *)0x0) {
        pcVar2 = local_19c;
        do {
          pcVar4 = pcVar2;
          if (*pcVar2 == '\n') goto LAB_005784e7;
          if (*pcVar2 == '\0') break;
          pcVar4 = pcVar2 + 1;
          if (*pcVar4 == '\n') goto LAB_005784e7;
          pcVar2 = pcVar2 + 2;
        } while (*pcVar4 != '\0');
        pcVar4 = (char *)0x0;
LAB_005784e7:
        *pcVar4 = '\0';
      }
      pcVar2 = local_19c;
      while ((g_CharacterClassificationTable[(byte)(*pcVar2 + 1)] & 2) != 0) {
        pcVar2 = pcVar2 + 1;
      }
      if (*pcVar2 != '\0') {
        local_c = ~GROUND_TYPE_DEFAULT;
        iVar3 = sscanf(pcVar2,"%[^,], %s",local_70,local_d4);
        EVar1 = local_c;
        if ((iVar3 == 2) &&
           (iVar3 = sscanf(local_d4,"%d",&local_c), EVar1 = local_c
           , iVar3 != 1)) {
          type = GROUND_TYPE_DEFAULT;
          while( true ) {
            pcVar2 = local_d4;
            pcVar4 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(type);
            iVar3 = _stricmp(pcVar4,pcVar2);
            EVar1 = type;
            if (iVar3 == 0) break;
            pcVar2 = local_d4;
            pcVar4 = core_ground_cpp_getGroundTypeName_FUN_004eed80(type);
            iVar3 = _stricmp(pcVar4,pcVar2);
            if ((iVar3 == 0) || (type = type + GROUND_TYPE_NONE, EVar1 = local_c, 0xd < (int)type))
            break;
          }
        }
        local_c = EVar1;
        if ((int)local_c < 0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x2f0;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Error parsing %s line %d:\n\"%s\"",filename,iVar5,local_19c);
        }
        core_setedit_cpp_addGroundType_FUN_00578290(local_70,local_c);
      }
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\core\\setedit.cpp",0x2f4);
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Imported texture ground type list from %s OK.");
  }
  return;
}
