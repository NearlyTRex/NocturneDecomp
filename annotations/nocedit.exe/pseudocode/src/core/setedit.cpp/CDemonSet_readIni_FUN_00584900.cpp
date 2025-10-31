// Name: core_setedit.cpp_CDemonSet_readIni_FUN_00584900
// Address: 00584900
// Address Range: [[00584900, 0058491c]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_readIni_FUN_00584900(CDemonSet * set_ptr, CIniFile * ini_file)
// Cross-references:
//   core_inivar.cpp_readIniData_FUN_004fbd90 (004fbd90) at 004fc4d5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_groundTypeDirectory_00648e45
//   TerminatedCString s_GroundTypes_006816d8
// Function calls:
//   engine_ini.cpp_CIniFile_getString_FUN_004fbb20

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_readIni_FUN_00584900(CDemonSet *set_ptr,CIniFile *ini_file)

{
  char *unaff_retaddr;
  
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            (ini_file,"groundTypeDirectory",".\\GroundTypes",0x104,unaff_retaddr);
  return;
}


// Assembly code:
// 00584900: PUSH 0x104
//   Label: core_setedit.cpp_CDemonSet_readIni_FUN_00584900
// 00584905: PUSH 0x6816d8
//   XREF to: 006816d8 (DATA)
// 0058490a: PUSH 0x648e45
//   XREF to: 00648e45 (DATA)
// 0058490f: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00584913: PUSH EDX
// 00584914: CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20
//   XREF to: 004fbb20 (UNCONDITIONAL_CALL)
// 00584919: ADD ESP,0x10
// 0058491c: RET
