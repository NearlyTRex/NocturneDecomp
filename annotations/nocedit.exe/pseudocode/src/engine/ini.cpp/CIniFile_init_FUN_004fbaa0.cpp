// Name: engine_ini.cpp_CIniFile_init_FUN_004fbaa0
// Address: 004fbaa0
// Address Range: [[004fbaa0, 004fbad0]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_init_FUN_004fbaa0(char * dest, char * source)
// Cross-references:
//   engine_ini.cpp_CIniFile_ctor_FUN_004fba70 (004fba70) at 004fba7b [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_init_FUN_004fbaa0(char *dest,char *source)

{
  char cVar1;
  
  if (source == (char *)0x0) {
    *dest = '\0';
    return;
  }
  do {
    cVar1 = *source;
    *dest = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = source[1];
    source = source + 2;
    dest[1] = cVar1;
    dest = dest + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004fbaa0: PUSH ESI
//   Label: engine_ini.cpp_CIniFile_init_FUN_004fbaa0
// 004fbaa1: PUSH EDI
// 004fbaa2: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004fbaa6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004fbaaa: TEST ESI,ESI
// 004fbaac: JNZ 0x004fbab4
//   XREF to: 004fbab4 (CONDITIONAL_JUMP)
// 004fbaae: MOV byte ptr [EDI],0x0
// 004fbab1: POP EDI
// 004fbab2: POP ESI
// 004fbab3: RET
// 004fbab4: PUSH EDI
//   Label: LAB_004fbab4
// 004fbab5: MOV AL,byte ptr [ESI]
//   Label: LAB_004fbab5
// 004fbab7: MOV byte ptr [EDI],AL
// 004fbab9: CMP AL,0x0
// 004fbabb: JZ 0x004fbacd
//   XREF to: 004fbacd (CONDITIONAL_JUMP)
// 004fbabd: MOV AL,byte ptr [ESI + 0x1]
// 004fbac0: ADD ESI,0x2
// 004fbac3: MOV byte ptr [EDI + 0x1],AL
// 004fbac6: ADD EDI,0x2
// 004fbac9: CMP AL,0x0
// 004fbacb: JNZ 0x004fbab5
//   XREF to: 004fbab5 (CONDITIONAL_JUMP)
// 004fbacd: POP EDI
//   Label: LAB_004fbacd
// 004fbace: POP EDI
// 004fbacf: POP ESI
// 004fbad0: RET
