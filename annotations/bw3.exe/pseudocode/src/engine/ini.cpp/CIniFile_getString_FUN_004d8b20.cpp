// Name: engine_ini.cpp_CIniFile_getString_FUN_004d8b20
// Address: 004d8b20
// Address Range: [[004d8b20, 004d8ba4]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getString_FUN_004d8b20(CIniFile *this_ptr,char *key,char *output_buffer,int buffer_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_ini_cpp_CIniFile_getString_FUN_004d8b20(CIniFile *this_ptr,char *key,char *output_buffer,int buffer_size)

{
  if (this_ptr->filename[0] == '\0') {
    _DAT_01d71de0 = "..\\engine\\ini.cpp";
    _DAT_01d71de4 = 0x27a;
    core_main_c_FUN_004e4330("CIniFile::getString - filename not set!");
  }
  if (this_ptr->section[0] == '\0') {
    _DAT_01d71de0 = "..\\engine\\ini.cpp";
    _DAT_01d71de4 = 0x27b;
    core_main_c_FUN_004e4330("CIniFile::getString - section not set!");
  }
  engine_ini_cpp_getProfileString_FUN_004d8910
            (this_ptr->section,key,output_buffer,output_buffer,buffer_size,this_ptr->filename);
  return;
}
