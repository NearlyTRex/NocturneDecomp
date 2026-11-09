// Name: engine_ini.cpp_FUN_004d8a20
// Address: 004d8a20
// Address Range: [[004d8a20, 004d8a4e]]
// Convention: __cdecl
// Signature: CIniFile * __cdecl engine_ini_cpp_FUN_004d8a20(CIniFile *this_ptr,char *filename,char *section)

#include "nocturne.h"

CIniFile * __cdecl engine_ini_cpp_FUN_004d8a20(CIniFile *this_ptr,char *filename,char *section)

{
  *(byte ***)&this_ptr->field_0x200 = &PTR_engine_ini_cpp_CIniFile_dtor_FUN_004d8a50_005e2074;
  engine_ini_cpp_initIniFile_FUN_004d8aa0((char *)this_ptr,filename);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d8ae0(this_ptr,section);
  return this_ptr;
}
