// Name: engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
// Address: 004fbbb0
// Address Range: [[004fbbb0, 004fbc2e]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_setString_FUN_004fbbb0(CIniFile * this_ptr, char * key, char * value)

#include "nocturne.h"

void __cdecl
engine_ini_cpp_CIniFile_setString_FUN_004fbbb0(CIniFile *this_ptr,char *key,char *value)

{
  if (this_ptr->filename[0] == '\0') {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x275;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CIniFile::setString - filename not write!");
  }
  if (this_ptr->section[0] == '\0') {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x276;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CIniFile::setString - section not write!");
  }
  engine_ini_cpp_writeProfileString_FUN_004fba40(this_ptr->section,key,value,this_ptr->filename);
  return;
}
