// Name: core_fileman.cpp_refreshSoundDirectory_FUN_004be590
// Address: 004be590
// Address Range: [[004be590, 004be616]]
// Convention: __cdecl
// Signature: void __cdecl core_fileman_cpp_refreshSoundDirectory_FUN_004be590(FILE *file_list_output,char *source_directory)

#include "nocturne.h"

void __cdecl
core_fileman_cpp_refreshSoundDirectory_FUN_004be590(FILE *file_list_output,char *source_directory)

{
  crt_file_c_create_directory_FUN_00600e10("sound");
  core_fileman_cpp_preprocessMusicFiles_FUN_004bd750(source_directory);
  engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650
            (file_list_output,source_directory,"*.wav","sound");
  engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650
            (file_list_output,source_directory,"*.mp3","sound");
  engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650
            (file_list_output,source_directory,"*.klp","sound");
  engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650
            (file_list_output,source_directory,"*.vol","sound");
  engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650
            (file_list_output,source_directory,"*.sfx","sound");
  return;
}
