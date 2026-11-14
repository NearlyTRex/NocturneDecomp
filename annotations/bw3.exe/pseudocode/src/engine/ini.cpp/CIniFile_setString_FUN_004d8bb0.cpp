// Name: engine_ini.cpp_CIniFile_setString_FUN_004d8bb0
// Address: 004d8bb0
// Address Range: [[004d8bb0, 004d8c2e]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004d8bb0(CIniFile *this_ptr,char *key,char *value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004d8bb0(CIniFile *this_ptr,char *key,char *value)

{
  if (this_ptr->filename[0] == '\0') {
    _DAT_01d71de0 = "..\\engine\\ini.cpp";
    _DAT_01d71de4 = 0x280;
    core_main_c_FUN_004e4330("CIniFile::setString - filename not set!");
  }
  if (this_ptr->section[0] == '\0') {
    _DAT_01d71de0 = "..\\engine\\ini.cpp";
    _DAT_01d71de4 = 0x281;
    core_main_c_FUN_004e4330("CIniFile::setString - section not set!");
  }
  engine_ini_cpp_writeProfileString_FUN_004d89f0(this_ptr->section,key,value,this_ptr->filename);
  return;
}
