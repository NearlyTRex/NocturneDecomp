// Name: sound_mp3.cpp_CMP3Decoder_openFile_FUN_005027b0
// Address: 005027b0
// Address Range: [[005027b0, 00502888]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_005027b0(CMP3Decoder *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_005027b0(CMP3Decoder *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  _FILE *p_Var3;
  
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004657f0(">sound" + 1,filename);
  if (iVar2 < 1) {
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 0xea3;
    core_main_c_FUN_004e4330("Can't open %s",filename);
  }
  p_Var3 = engine_dosio_cpp_FUN_004659c0("sound",filename,&DAT_005ca344);
  if (p_Var3 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 0xea8;
    core_main_c_FUN_004e4330("Can't open %s",filename);
  }
  iVar2 = sound_mp3_cpp_FUN_00502890(this_ptr,p_Var3,iVar2);
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 0xead;
    core_main_c_FUN_004e4330("Error preparing to decode %s",filename);
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
