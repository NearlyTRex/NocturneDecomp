// Name: core_setedit.cpp_loadGroundTypes_FUN_00578420
// Address: 00578420
// Address Range: [[00578420, 00578624]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_loadGroundTypes_FUN_00578420(char *filename)

#include "nocturne.h"

void __cdecl core_setedit_cpp_loadGroundTypes_FUN_00578420(char *filename)

{
  int iVar1;
  _FILE *stream;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char local_19c [200];
  char local_d4 [100];
  char local_70 [100];
  int local_c;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing texture ground type list from %s...");
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"rt","..\\core\\setedit.cpp",0x2c3);
  if (stream != (_FILE *)0x0) {
    iVar6 = 0;
    while (pcVar2 = _fgets(local_19c,200,stream), pcVar2 != (char *)0x0) {
      pcVar2 = local_19c;
      do {
        pcVar5 = pcVar2;
        if (*pcVar2 == '\n') goto LAB_005784ac;
        if (*pcVar2 == '\0') break;
        pcVar5 = pcVar2 + 1;
        if (*pcVar5 == '\n') goto LAB_005784ac;
        pcVar2 = pcVar2 + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_005784ac:
      iVar6 = iVar6 + 1;
      if (pcVar5 != (char *)0x0) {
        pcVar2 = local_19c;
        do {
          pcVar5 = pcVar2;
          if (*pcVar2 == '\n') goto LAB_005784e7;
          if (*pcVar2 == '\0') break;
          pcVar5 = pcVar2 + 1;
          if (*pcVar5 == '\n') goto LAB_005784e7;
          pcVar2 = pcVar2 + 2;
        } while (*pcVar5 != '\0');
        pcVar5 = (char *)0x0;
LAB_005784e7:
        *pcVar5 = '\0';
      }
      pcVar2 = local_19c;
      while ((g_CharacterClassificationTable[(byte)(*pcVar2 + 1)] & 2) != 0) {
        pcVar2 = pcVar2 + 1;
      }
      if (*pcVar2 != '\0') {
        local_c = -1;
        iVar3 = sscanf(pcVar2,"%[^,], %s",local_70,local_d4);
        iVar1 = local_c;
        if ((iVar3 == 2) &&
           (iVar3 = sscanf(local_d4,"%d",&local_c), iVar1 = local_c
           , iVar3 != 1)) {
          iVar3 = 0;
          while( true ) {
            pcVar2 = local_d4;
            pcVar5 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(iVar3);
            iVar4 = stricmp(pcVar5,pcVar2);
            iVar1 = iVar3;
            if (iVar4 == 0) break;
            pcVar2 = local_d4;
            pcVar5 = core_ground_cpp_getGroundTypeName_FUN_004eed80(iVar3);
            iVar4 = stricmp(pcVar5,pcVar2);
            if ((iVar4 == 0) || (iVar3 = iVar3 + 1, iVar1 = local_c, 0xd < iVar3)) break;
          }
        }
        local_c = iVar1;
        if (local_c < 0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x2f0;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Error parsing %s line %d:\n\"%s\"",filename,iVar6,local_19c);
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
