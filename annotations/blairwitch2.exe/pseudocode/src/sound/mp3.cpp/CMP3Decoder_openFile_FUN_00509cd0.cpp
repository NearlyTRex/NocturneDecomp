// Name: sound_mp3.cpp_CMP3Decoder_openFile_FUN_00509cd0
// Address: 00509cd0
// Address Range: [[00509cd0, 00509da8]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_00509cd0(CMP3Decoder *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_00509cd0(CMP3Decoder *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  _FILE *file_handle;
  
  iVar2 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",filename);
  if (iVar2 < 1) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\mp3.cpp";
    g_INT_01d046a4 = 0xea3;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Can't open %s");
  }
  file_handle = engine_dosio_cpp_getFile_FUN_00460c70("sound",filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\mp3.cpp";
    g_INT_01d046a4 = 0xea8;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Can't open %s");
  }
  iVar2 = sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00509db0(this_ptr,file_handle,iVar2);
  if (iVar2 == 0) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\mp3.cpp";
    g_INT_01d046a4 = 0xead;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Error preparing to decode %s");
  }
  do {
    cVar1 = *filename;
    this_ptr->filename[0] = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = filename[1];
    filename = filename + 2;
    this_ptr->filename[1] = cVar1;
    this_ptr = (CMP3Decoder *)(this_ptr->filename + 2);
  } while (cVar1 != '\0');
  return;
}
