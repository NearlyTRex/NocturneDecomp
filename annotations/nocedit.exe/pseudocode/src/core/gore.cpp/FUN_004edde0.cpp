// Name: core_gore.cpp_FUN_004edde0
// Address: 004edde0
// Address Range: [[004edde0, 004ede22]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004edde0()
// Cross-references:
//   core_gore.cpp_FUN_004ede30 (004ede30) at 004ede3f [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02da871c
//   undefined4 DAT_02da8720
//   CBloodPool[32] DAT_02da8724

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004edde0() */

CBloodPool * core_gore_cpp_FUN_004edde0(void)

{
  CBloodPool *pCVar1;
  int iVar2;
  
  iVar2 = DAT_02da871c + 1;
  pCVar1 = DAT_02da8724 + DAT_02da871c;
  if (0x1f < iVar2) {
    iVar2 = 0;
  }
  if (0x1f < DAT_02da8720) {
    DAT_02da871c = iVar2;
    return pCVar1;
  }
  DAT_02da8720 = DAT_02da8720 + 1;
  DAT_02da871c = iVar2;
  return pCVar1;
}


// Assembly code:
// 004edde0: MOV ECX,dword ptr [0x02da871c]
//   Label: core_gore.cpp_FUN_004edde0
//   XREF to: 02da871c (READ)
// 004edde6: LEA EAX,[ECX*0x4 + 0x0]
// 004edded: ADD EAX,ECX
// 004eddef: SHL EAX,0x3
// 004eddf2: INC ECX
// 004eddf3: ADD EAX,0x2da8724
//   XREF to: 02da8724 (DATA)
// 004eddf8: CMP ECX,0x20
// 004eddfb: JL 0x004eddff
//   XREF to: 004eddff (CONDITIONAL_JUMP)
// 004eddfd: XOR ECX,ECX
// 004eddff: MOV EDX,dword ptr [0x02da8720]
//   Label: LAB_004eddff
//   XREF to: 02da8720 (READ)
// 004ede05: CMP EDX,0x20
// 004ede08: JL 0x004ede11
//   XREF to: 004ede11 (CONDITIONAL_JUMP)
// 004ede0a: MOV dword ptr [0x02da871c],ECX
//   XREF to: 02da871c (WRITE)
// 004ede10: RET
// 004ede11: PUSH EBX
//   Label: LAB_004ede11
// 004ede12: LEA EBX,[EDX + 0x1]
// 004ede15: MOV dword ptr [0x02da8720],EBX
//   XREF to: 02da8720 (WRITE)
// 004ede1b: POP EBX
// 004ede1c: MOV dword ptr [0x02da871c],ECX
//   XREF to: 02da871c (WRITE)
// 004ede22: RET
