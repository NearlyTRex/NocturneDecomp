// Name: sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0
// Address: 004e7df0
// Address Range: [[004e7df0, 004e7ec8]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(char *param_1,char *param_2)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  _FILE *p_Var3;
  
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",param_2);
  if (iVar2 < 1) {
    PTR_01cc4800 = "..\\sound\\mp3.cpp";
    INT_01cc4804 = 0xe0a;
    core_main_c_FUN_004c8440("Can't open %s",param_2);
  }
  p_Var3 = engine_dosio_cpp_getFile_FUN_00456a60("sound",param_2,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\sound\\mp3.cpp";
    INT_01cc4804 = 0xe0f;
    core_main_c_FUN_004c8440("Can't open %s",param_2);
  }
  iVar2 = sound_mp3_cpp_FUN_004e7ed0(param_1,p_Var3,iVar2);
  if (iVar2 == 0) {
    PTR_01cc4800 = "..\\sound\\mp3.cpp";
    INT_01cc4804 = 0xe14;
    core_main_c_FUN_004c8440("Error preparing to decode %s",param_2);
  }
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    param_1[1] = cVar1;
    param_1 = param_1 + 2;
  } while (cVar1 != '\0');
  return;
}
