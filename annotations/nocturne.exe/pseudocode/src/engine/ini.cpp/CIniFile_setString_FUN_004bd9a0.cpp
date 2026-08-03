// Name: engine_ini.cpp_CIniFile_setString_FUN_004bd9a0
// Address: 004bd9a0
// Address Range: [[004bd9a0, 004bda1e]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(CIniFile *this_ptr,char *key,char *value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(CIniFile *this_ptr,char *key,char *value)

{
  if (this_ptr->filename[0] == '\0') {
    g_CHAR_PTR_01cc4800 = "..\\engine\\ini.cpp";
    g_INT_01cc4804 = 0x26b;
    core_main_c_FUN_004c8440("CIniFile::setString - filename not write!");
  }
  if (this_ptr->section[0] == '\0') {
    g_CHAR_PTR_01cc4800 = "..\\engine\\ini.cpp";
    g_INT_01cc4804 = 0x26c;
    core_main_c_FUN_004c8440("CIniFile::setString - section not write!");
  }
  engine_ini_cpp_writeProfileString_FUN_004bd830(this_ptr->section,key,value,this_ptr->filename);
  return;
}
