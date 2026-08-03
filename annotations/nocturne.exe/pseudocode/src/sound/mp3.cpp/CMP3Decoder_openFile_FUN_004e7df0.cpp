// Name: sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0
// Address: 004e7df0
// Address Range: [[004e7df0, 004e7ec8]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(CMP3Decoder *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(CMP3Decoder *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  _FILE *file_handle;
  
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",filename);
  if (iVar2 < 1) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
    g_INT_01cc4804 = 0xe0a;
    core_main_c_FUN_004c8440("Can't open %s",filename);
  }
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60("sound",filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
    g_INT_01cc4804 = 0xe0f;
    core_main_c_FUN_004c8440("Can't open %s",filename);
  }
  iVar2 = sound_mp3_cpp_FUN_004e7ed0(this_ptr,file_handle,iVar2);
  if (iVar2 == 0) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
    g_INT_01cc4804 = 0xe14;
    core_main_c_FUN_004c8440("Error preparing to decode %s",filename);
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
