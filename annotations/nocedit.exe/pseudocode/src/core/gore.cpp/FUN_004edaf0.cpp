// Name: core_gore.cpp_FUN_004edaf0
// Address: 004edaf0
// Address Range: [[004edaf0, 004edb36]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004edaf0()
// Cross-references:
//   core_gore.cpp_FUN_004edb40 (004edb40) at 004edb4f [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004edb70 (004edb70) at 004edb80 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d873d4
//   undefined4 DAT_02d873d8
//   CBloodSplat[2000] DAT_02d873dc

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004edaf0() */

CBloodSplat * core_gore_cpp_FUN_004edaf0(void)

{
  CBloodSplat *pCVar1;
  int iVar2;
  
  iVar2 = DAT_02d873d4 + 1;
  pCVar1 = DAT_02d873dc + DAT_02d873d4;
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < DAT_02d873d8) {
    DAT_02d873d4 = iVar2;
    return pCVar1;
  }
  DAT_02d873d8 = DAT_02d873d8 + 1;
  DAT_02d873d4 = iVar2;
  return pCVar1;
}


// Assembly code:
// 004edaf0: MOV ECX,dword ptr [0x02d873d4]
//   Label: core_gore.cpp_FUN_004edaf0
//   XREF to: 02d873d4 (READ)
// 004edaf6: MOV EAX,ECX
// 004edaf8: SHL EAX,0x4
// 004edafb: ADD EAX,ECX
// 004edafd: SHL EAX,0x2
// 004edb00: INC ECX
// 004edb01: ADD EAX,0x2d873dc
//   XREF to: 02d873dc (DATA)
// 004edb06: CMP ECX,0x7d0
// 004edb0c: JL 0x004edb10
//   XREF to: 004edb10 (CONDITIONAL_JUMP)
// 004edb0e: XOR ECX,ECX
// 004edb10: MOV EDX,dword ptr [0x02d873d8]
//   Label: LAB_004edb10
//   XREF to: 02d873d8 (READ)
// 004edb16: CMP EDX,0x7d0
// 004edb1c: JL 0x004edb25
//   XREF to: 004edb25 (CONDITIONAL_JUMP)
// 004edb1e: MOV dword ptr [0x02d873d4],ECX
//   XREF to: 02d873d4 (WRITE)
// 004edb24: RET
// 004edb25: PUSH EBX
//   Label: LAB_004edb25
// 004edb26: LEA EBX,[EDX + 0x1]
// 004edb29: MOV dword ptr [0x02d873d8],EBX
//   XREF to: 02d873d8 (WRITE)
// 004edb2f: POP EBX
// 004edb30: MOV dword ptr [0x02d873d4],ECX
//   XREF to: 02d873d4 (WRITE)
// 004edb36: RET
