// Name: engine_ini.cpp_CIniFile_getString_FUN_004fbb20
// Address: 004fbb20
// Address Range: [[004fbb20, 004fbba4]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_getString_FUN_004fbb20(CIniFile * this, char * key, char * output_buffer, int buffer_size, char * default_value)

#include "nocturne.h"

void __cdecl
engine_ini_cpp_CIniFile_getString_FUN_004fbb20
          (CIniFile *this,char *key,char *output_buffer,int buffer_size,char *default_value)

{
  if (this->filename[0] == '\0') {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x26f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CIniFile::getString - filename not write!");
  }
  if (this->section[0] == '\0') {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x270;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CIniFile::getString - section not write!");
  }
  engine_ini_cpp_getProfileString_FUN_004fb960
            (this->section,output_buffer,(char *)buffer_size,(char *)buffer_size,(int)default_value,
             this->filename);
  return;
}
