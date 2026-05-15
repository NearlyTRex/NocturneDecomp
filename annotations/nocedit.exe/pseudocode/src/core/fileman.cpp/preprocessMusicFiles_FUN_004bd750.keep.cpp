// Name: core_fileman.cpp_preprocessMusicFiles_FUN_004bd750
// Address: 004bd750
// MANUAL RECONSTRUCTION
// Address Range: [[004bd750, 004bd8d0]]
// Convention: __cdecl
// Signature: void __cdecl core_fileman_cpp_preprocessMusicFiles_FUN_004bd750(char *source_directory)

#include "nocturne.h"

void __cdecl core_fileman_cpp_preprocessMusicFiles_FUN_004bd750(char *source_directory)

{
  char *pcVar2;
  int iVar3;
  int iVar4;
  int index;
  SFoundFileInfo local_64c;
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
      strcpy(local_64c.found_path,pcVar2);
      iVar3 = engine_dosio_cpp_findFileNormally_FUN_004817c0(&local_64c);
      if (iVar3 == 0) {
        g_CurrentLineNumber = 0x3c;
        g_CurrentFilename = "..\\core\\fileman.cpp";
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't access %s",local_64c.found_path);
      }
      splitpath
                (local_64c.found_path,local_14,local_124,local_224,(char *)0x0);
      makepath
                (local_438.found_path,local_14,local_124,local_224,"sfx");
      iVar4 = engine_dosio_cpp_findFileNormally_FUN_004817c0(&local_438);
      if ((iVar4 == 0) || (local_438.timestamp < local_64c.timestamp - 1)) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Computing length of %s",local_64c.found_path);
        sound_sndmain_cpp_convertMp3ToSfxMetadata_FUN_005acf20(local_64c.found_path);
      }
      index = index + 1;
    } while (index < local_24.item_count);
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_24,0);
  return;
}
