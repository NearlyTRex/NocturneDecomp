// Name: engine_ini.cpp_FUN_004f4b00
// Address: 004f4b00
// Address Range: [[004f4b00, 004f4b2e]]
// Convention: unknown
// Signature: CIniFile * engine_ini_cpp_FUN_004f4b00(CIniFile *param_1,char *param_2,char *param_3)

#include "nocturne.h"

CIniFile * engine_ini_cpp_FUN_004f4b00(CIniFile *param_1,char *param_2,char *param_3)

{
  param_1->vtable = &PTR_engine_ini_cpp_CIniFile_dtor_FUN_004f4b30_00602964;
  engine_ini_cpp_initIniFile_FUN_004f4b80(param_1->filename,param_2);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(param_1,param_3);
  return param_1;
}
