// Name: sound_mp3.cpp_CMP3Decoder_openFile_FUN_0052aea0
// Address: 0052aea0
// Address Range: [[0052aea0, 0052af78]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_0052aea0(CMP3Decoder *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_0052aea0(CMP3Decoder *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  _FILE *file_handle;
  
  iVar2 = engine_dosio_cpp_getFileSize_FUN_00478fb0(">sound" + 1,filename);
  if (iVar2 < 1) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 0xea3;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Can't open %s");
  }
  file_handle = engine_dosio_cpp_getFile_FUN_00479180("sound",filename,&DAT_005eb533);
  if (file_handle == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 0xea8;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Can't open %s");
  }
  iVar2 = sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_0052af80(this_ptr,file_handle,iVar2);
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 0xead;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Error preparing to decode %s");
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
