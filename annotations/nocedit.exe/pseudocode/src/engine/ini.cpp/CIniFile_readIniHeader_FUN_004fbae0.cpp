// Name: engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
// Address: 004fbae0
// Address Range: [[004fbae0, 004fbb1a]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this, char * section)
// Cross-references:
//   core_inivar.cpp_readIniData_FUN_004fbd90 (004fbd90) at 004fc46a [UNCONDITIONAL_CALL]
//   core_inivar.cpp_writeIniData_FUN_004fc510 (004fc510) at 004fc6d1 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIniFile_ctor_FUN_004fba70 (004fba70) at 004fba89 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile *this,char *section)

{
  char cVar1;
  char *pcVar2;
  
  if (section == (char *)0x0) {
    this->section[0] = '\0';
    return;
  }
  pcVar2 = this->section;
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


// Assembly code:
// 004fbae0: PUSH ESI
//   Label: engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
// 004fbae1: PUSH EDI
// 004fbae2: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004fbae6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004fbaea: TEST ESI,ESI
// 004fbaec: JNZ 0x004fbaf8
//   XREF to: 004fbaf8 (CONDITIONAL_JUMP)
// 004fbaee: MOV byte ptr [EDI + 0x100],0x0
// 004fbaf5: POP EDI
// 004fbaf6: POP ESI
// 004fbaf7: RET
// 004fbaf8: ADD EDI,0x100
//   Label: LAB_004fbaf8
// 004fbafe: PUSH EDI
// 004fbaff: MOV AL,byte ptr [ESI]
//   Label: LAB_004fbaff
// 004fbb01: MOV byte ptr [EDI],AL
// 004fbb03: CMP AL,0x0
// 004fbb05: JZ 0x004fbb17
//   XREF to: 004fbb17 (CONDITIONAL_JUMP)
// 004fbb07: MOV AL,byte ptr [ESI + 0x1]
// 004fbb0a: ADD ESI,0x2
// 004fbb0d: MOV byte ptr [EDI + 0x1],AL
// 004fbb10: ADD EDI,0x2
// 004fbb13: CMP AL,0x0
// 004fbb15: JNZ 0x004fbaff
//   XREF to: 004fbaff (CONDITIONAL_JUMP)
// 004fbb17: POP EDI
//   Label: LAB_004fbb17
// 004fbb18: POP EDI
// 004fbb19: POP ESI
// 004fbb1a: RET
