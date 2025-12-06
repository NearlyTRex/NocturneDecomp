// Name: sound_sndmain.cpp_isStreamableFile_FUN_005a5180
// Address: 005a5180
// Address Range: [[005a5180, 005a51fb]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_isStreamableFile_FUN_005a5180(char * filename, char * filepath)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_005a5180(char *filename,char *filepath)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char acStack_f4 [244];
  
  iVar1 = engine_dosio_c_getFileSize_FUN_00481880("sound",filename);
  if (iVar1 < 0x200001) {
    engine_dosio_c_splitPath_FUN_00481f20
              (filepath,(char *)0x0,(char *)0x0,(char *)0x0,&stack0xffffff04);
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff08,"mp3");
    if (iVar1 != 0) {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(acStack_f4,".mp3");
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}
