// Name: core_setedit.cpp_CDemonSet_readIni_FUN_00584900
// Address: 00584900
// Address Range: [[00584900, 0058491c]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_readIni_FUN_00584900(CDemonSet * set_ptr, CIniFile * ini_file)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_readIni_FUN_00584900(CDemonSet *set_ptr,CIniFile *ini_file)

{
  char *unaff_retaddr;
  
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            (ini_file,"groundTypeDirectory",".\\GroundTypes",0x104,unaff_retaddr);
  return;
}
