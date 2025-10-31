// Name: core_setedit.cpp_CDemonSet_writeIni_FUN_00584920
// Address: 00584920
// Address Range: [[00584920, 00584937]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_writeIni_FUN_00584920(CDemonSet * set, CIniFile * ini_file)
// Cross-references:
//   core_inivar.cpp_writeIniData_FUN_004fc510 (004fc510) at 004fcbbf [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_groundTypeDirectory_00648e59
//   TerminatedCString s_GroundTypes_006816d8
// Function calls:
//   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_writeIni_FUN_00584920(CDemonSet *set,CIniFile *ini_file)

{
  engine_ini_cpp_CIniFile_setString_FUN_004fbbb0
            (ini_file,"groundTypeDirectory",".\\GroundTypes");
  return;
}


// Assembly code:
// 00584920: PUSH 0x6816d8
//   Label: core_setedit.cpp_CDemonSet_writeIni_FUN_00584920
//   XREF to: 006816d8 (DATA)
// 00584925: PUSH 0x648e59
//   XREF to: 00648e59 (DATA)
// 0058492a: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0058492e: PUSH EDX
// 0058492f: CALL engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
//   XREF to: 004fbbb0 (UNCONDITIONAL_CALL)
// 00584934: ADD ESP,0xc
// 00584937: RET
