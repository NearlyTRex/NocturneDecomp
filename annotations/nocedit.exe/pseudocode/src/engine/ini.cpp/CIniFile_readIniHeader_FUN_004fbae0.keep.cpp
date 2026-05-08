// Name: engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
// Address: 004fbae0
// MANUAL RECONSTRUCTION
// Address Range: [[004fbae0, 004fbb1a]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile *this_ptr,char *section)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile *this_ptr,char *section)

{
  if (section == (char *)0x0) {
    this_ptr->section[0] = '\0';
    return;
  }
  strcpy(this_ptr->section, section);
  return;
}
