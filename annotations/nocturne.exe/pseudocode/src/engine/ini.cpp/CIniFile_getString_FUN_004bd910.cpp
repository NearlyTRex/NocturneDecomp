// Name: engine_ini.cpp_CIniFile_getString_FUN_004bd910
// Address: 004bd910
// Address Range: [[004bd910, 004bd994]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getString_FUN_004bd910(CIniFile *this_ptr,char *key,char *output_buffer,int buffer_size)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getString_FUN_004bd910(CIniFile *this_ptr,char *key,char *output_buffer,int buffer_size)

{
  if (this_ptr->filename[0] == '\0') {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 613;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CIniFile::getString - filename not write!");
  }
  if (this_ptr->section[0] == '\0') {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 614;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CIniFile::getString - section not write!");
  }
  engine_ini_cpp_getProfileString_FUN_004bd750
            (this_ptr->section,key,output_buffer,output_buffer,buffer_size,this_ptr->filename);
  return;
}
