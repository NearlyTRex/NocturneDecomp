// Name: sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
// Address: 00534550
// Address Range: [[00534550, 00534628]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(CMP3Decoder *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(CMP3Decoder *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  _FILE *file_handle;
  
  iVar2 = engine_dosio_cpp_getFileSize_FUN_00481880("sound",filename);
  if (iVar2 < 1) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xe14;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",filename);
  }
  file_handle = engine_dosio_cpp_getFile_FUN_00481a50("sound",filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xe19;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",filename);
  }
  iVar2 = sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00534630(this_ptr,file_handle,iVar2);
  if (iVar2 == 0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xe1e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error preparing to decode %s",filename);
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
