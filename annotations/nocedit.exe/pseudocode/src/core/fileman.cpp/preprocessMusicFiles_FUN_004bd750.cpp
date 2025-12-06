// Name: core_fileman.cpp_preprocessMusicFiles_FUN_004bd750
// Address: 004bd750
// Address Range: [[004bd750, 004bd8d0]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_preprocessMusicFiles_FUN_004bd750(char * source_directory)

#include "nocturne.h"

void __cdecl core_fileman_cpp_preprocessMusicFiles_FUN_004bd750(char *source_directory)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int index;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *in_stack_00000008;
  uint in_stack_fffff9bc;
  int local_440;
  SFoundFileInfo SStack_43c;
  char acStack_130 [4];
  char acStack_12c [264];
  byte local_24 [8];
  char **appcStack_1c [3];
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_24);
  shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0
            ((CStrList *)(local_24 + 4),in_stack_00000008,"*.mp3");
  index = 0;
  if (0 < (int)appcStack_1c[0]) {
    do {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)appcStack_1c,index);
      pcVar4 = &stack0xfffff9a0;
      do {
        cVar1 = *pcVar2;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)&stack0xfffff9a0);
      if (iVar3 == 0) {
        g_CurrentLineNumber = 0x3c;
        g_CurrentFilename = "..\\core\\fileman.cpp";
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't access %s");
      }
      crt_string_c_splitpath_FUN_005ff178
                (&stack0xfffff9a8,local_24 + 4,acStack_130,(char *)&SStack_43c.timestamp,(char *)0x0
                );
      crt_file_c_makepath_FUN_005febfc
                ((char *)&local_440,(char *)appcStack_1c,acStack_12c,
                 (char *)&SStack_43c.container_size,"sfx");
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&SStack_43c);
      if ((iVar3 == 0) || (SStack_43c.container_size < local_440 - 1U)) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Computing length of %s");
        sound_sndmain_cpp_convertMp3ToSfxMetadata_FUN_005acf20(&stack0xfffff9b8);
      }
      index = index + 1;
    } while (index < (int)appcStack_1c[0]);
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)appcStack_1c,0,in_stack_fffff9bc);
  return;
}
