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
  char *pcVar4;
  uint in_stack_fffff9b4;
  uint local_440;
  SFoundFileInfo local_438;
  char local_224 [256];
  char local_124 [256];
  CStrList local_24;
  char local_14 [4];
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_24);
  shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0
            (&local_24,source_directory,"*.mp3");
  index = 0;
  if (0 < local_24.item_count) {
    do {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_24,index);
      pcVar4 = &stack0xfffff9b4;
      do {
        cVar1 = *pcVar2;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)&stack0xfffff9b4);
      if (iVar3 == 0) {
        g_CurrentLineNumber = 0x3c;
        g_CurrentFilename = "..\\core\\fileman.cpp";
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't access %s",&stack0xfffff9b4);
      }
      crt_string_c_splitpath_FUN_005ff178(&stack0xfffff9b4,local_14,local_124,local_224,(char *)0x0)
      ;
      crt_file_c_makepath_FUN_005febfc
                (local_438.found_path,local_14,local_124,local_224,"sfx");
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_438);
      if ((iVar3 == 0) || (local_438.timestamp < local_440 - 1)) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Computing length of %s");
        sound_sndmain_cpp_convertMp3ToSfxMetadata_FUN_005acf20(&stack0xfffff9b4);
      }
      index = index + 1;
    } while (index < local_24.item_count);
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_24,0,in_stack_fffff9b4);
  return;
}
