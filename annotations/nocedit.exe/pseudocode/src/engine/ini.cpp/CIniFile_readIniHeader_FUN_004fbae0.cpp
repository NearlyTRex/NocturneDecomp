// Name: engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
// Address: 004fbae0
// Address Range: [[004fbae0, 004fbb1a]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile *this_ptr,char *section)

{
  char cVar1;
  char *pcVar2;
  
  if (section == (char *)0x0) {
    this_ptr->section[0] = '\0';
    return;
  }
  pcVar2 = this_ptr->section;
  do {
    cVar1 = *section;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = section[1];
    section = section + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
