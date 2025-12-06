// Name: engine_ini.cpp_CIniFile_ctor_FUN_004fba70
// Address: 004fba70
// Address Range: [[004fba70, 004fba94]]
// Convention: __cdecl
// Signature: CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004fba70(CIniFile * this, char * filename, int read_mode)

#include "nocturne.h"

CIniFile * __cdecl
engine_ini_cpp_CIniFile_ctor_FUN_004fba70(CIniFile *this,char *filename,int read_mode)

{
  char *in_stack_00000010;
  
  engine_ini_cpp_CIniFile_init_FUN_004fbaa0(this->filename,filename);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(this,in_stack_00000010);
  return this;
}
