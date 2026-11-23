// Name: engine_ini.cpp_CIniFile_setString_FUN_004f4c90
// Address: 004f4c90
// Address Range: [[004f4c90, 004f4d0e]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004f4c90(CIniFile *this_ptr,char *key,char *value)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004f4c90(CIniFile *this_ptr,char *key,char *value)

{
  if (this_ptr->filename[0] == '\0') {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 640;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CIniFile::setString - filename not set!");
  }
  if (this_ptr->section[0] == '\0') {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 641;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CIniFile::setString - section not set!");
  }
  engine_ini_cpp_writeProfileString_FUN_004f4ad0(this_ptr->section,key,value,this_ptr->filename);
  return;
}
