// Name: support_newmsg.cpp_findLocalizedString_FUN_00544170
// Address: 00544170
// Address Range: [[00544170, 005441e5]]
// Convention: __cdecl
// Signature: char * support_newmsg.cpp_findLocalizedString_FUN_00544170(char * key, int lower_bound, int upper_bound)
// Cross-references:
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0 (005441f0) at 00544263 [UNCONDITIONAL_CALL]
// Globals:
//   char*[500] g_MessageKeys
//   char*[500] g_MessageTexts
// Function calls:
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

char * __cdecl
support_newmsg_cpp_findLocalizedString_FUN_00544170(char *key,int lower_bound,int upper_bound)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int in_stack_00000010;
  
  if (upper_bound < lower_bound) {
    return key;
  }
  iVar1 = (upper_bound + lower_bound) / 2;
  iVar2 = crt_string_c_strcmp_FUN_005fef20(key,g_MessageKeys[iVar1]);
  if (-1 < iVar2) {
    if (iVar2 < 1) {
      return g_MessageTexts[iVar1];
    }
    pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_00544170(key,iVar1 + 1,in_stack_00000010);
    return pcVar3;
  }
  pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_00544170(key,lower_bound,iVar1 + -1);
  return pcVar3;
}


// Assembly code:
// 00544170: PUSH EBX
//   Label: support_newmsg.cpp_findLocalizedString_FUN_00544170
// 00544171: PUSH ESI
// 00544172: PUSH EDI
// 00544173: PUSH EBP
// 00544174: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00544178: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054417c: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00544180: CMP EBP,EDX
// 00544182: JLE 0x0054418b
//   XREF to: 0054418b (CONDITIONAL_JUMP)
// 00544184: MOV EAX,EDI
// 00544186: POP EBP
// 00544187: POP EDI
// 00544188: POP ESI
// 00544189: POP EBX
// 0054418a: RET
// 0054418b: ADD EDX,EBP
//   Label: LAB_0054418b
// 0054418d: MOV EAX,EDX
// 0054418f: SAR EDX,0x1f
// 00544192: SUB EAX,EDX
// 00544194: SAR EAX,0x1
// 00544196: MOV EBX,EAX
// 00544198: LEA ESI,[EAX*0x4 + 0x0]
// 0054419f: MOV ECX,dword ptr [ESI + 0x2fa8cdc]
//   XREF to: 02fa8cdc (DATA)
// 005441a5: PUSH ECX
// 005441a6: PUSH EDI
// 005441a7: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 005441ac: ADD ESP,0x8
// 005441af: TEST EAX,EAX
// 005441b1: JL 0x005441c0
//   XREF to: 005441c0 (CONDITIONAL_JUMP)
// 005441b3: JG 0x005441d1
//   XREF to: 005441d1 (CONDITIONAL_JUMP)
// 005441b5: MOV EAX,dword ptr [ESI + 0x2fa94ac]
//   XREF to: 02fa94ac (DATA)
// 005441bb: POP EBP
// 005441bc: POP EDI
// 005441bd: POP ESI
// 005441be: POP EBX
// 005441bf: RET
// 005441c0: DEC EBX
//   Label: LAB_005441c0
// 005441c1: PUSH EBX
// 005441c2: PUSH EBP
// 005441c3: PUSH EDI
// 005441c4: CALL support_newmsg.cpp_findLocalizedString_FUN_00544170
//   XREF to: 00544170 (UNCONDITIONAL_CALL)
// 005441c9: ADD ESP,0xc
// 005441cc: POP EBP
// 005441cd: POP EDI
// 005441ce: POP ESI
// 005441cf: POP EBX
// 005441d0: RET
// 005441d1: MOV ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_005441d1
//   XREF to: Stack[0xc] (READ)
// 005441d5: PUSH ESI
// 005441d6: INC EBX
// 005441d7: PUSH EBX
// 005441d8: PUSH EDI
// 005441d9: CALL support_newmsg.cpp_findLocalizedString_FUN_00544170
//   XREF to: 00544170 (UNCONDITIONAL_CALL)
// 005441de: ADD ESP,0xc
// 005441e1: POP EBP
// 005441e2: POP EDI
// 005441e3: POP ESI
// 005441e4: POP EBX
// 005441e5: RET
