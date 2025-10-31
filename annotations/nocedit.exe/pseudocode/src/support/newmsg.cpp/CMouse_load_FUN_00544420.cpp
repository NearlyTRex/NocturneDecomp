// Name: support_newmsg.cpp_CMouse_load_FUN_00544420
// Address: 00544420
// Address Range: [[00544420, 005444ff]]
// Convention: __cdecl
// Signature: void support_newmsg.cpp_CMouse_load_FUN_00544420(CMouse * this_ptr)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 005081bc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_crsr_d_0063e2d0
//   TerminatedCString s_flame_d_0063e2d7
//   TerminatedCString s_crsrskll_d_0063e2df
//   TerminatedCString s_crsrskll7_0063e2ea
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0

#include "nocturne.h"

void __cdecl support_newmsg_cpp_CMouse_load_FUN_00544420(CMouse *this_ptr)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  BADSPACEBASE *in_ESP;
  CMouse *this_ptr_00;
  char acStack_38 [12];
  char local_2c [4];
  char acStack_28 [12];
  char local_1c [4];
  char acStack_18 [12];
  
  iVar1 = 0;
  this_ptr_00 = this_ptr;
  do {
    iVar1 = iVar1 + 1;
    crt_stdio_c_sprintf_FUN_005fdbd0(local_1c,"crsr%d",iVar1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(this_ptr_00->cursors,acStack_18,0x36,0x37);
    this_ptr_00 = (CMouse *)(this_ptr_00->cursors + 1);
  } while (iVar1 < 8);
  pCVar2 = this_ptr->flames;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffc4,"flame%d",iVar1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(pCVar2,acStack_38,0x36,0x37);
    pCVar2 = pCVar2 + 1;
  } while (iVar1 < 7);
  pCVar2 = this_ptr->skulls;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    crt_stdio_c_sprintf_FUN_005fdbd0(local_2c,"crsrskll%d",iVar1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(pCVar2,acStack_28,0x36,0x37);
    pCVar2 = pCVar2 + 1;
  } while (iVar1 < 7);
  pCVar2 = this_ptr->skulls + 7;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(pCVar2,"crsrskll7",0x36,0x37);
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CAlphaBitmap *)&this_ptr->field_600);
  return;
}


// Assembly code:
// 00544420: PUSH EBX
//   Label: support_newmsg.cpp_CMouse_load_FUN_00544420
// 00544421: PUSH ESI
// 00544422: PUSH EDI
// 00544423: SUB ESP,0x30
// 00544426: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0054442a: MOV ESI,EDI
// 0054442c: XOR EBX,EBX
// 0054442e: INC EBX
//   Label: LAB_0054442e
// 0054442f: PUSH EBX
// 00544430: PUSH 0x63e2d0
//   XREF to: 0063e2d0 (DATA)
// 00544435: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x1c] (DATA)
// 00544439: PUSH EAX
// 0054443a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054443f: ADD ESP,0xc
// 00544442: PUSH 0x37
// 00544444: PUSH 0x36
// 00544446: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x1c] (DATA)
// 0054444a: PUSH EAX
// 0054444b: PUSH ESI
// 0054444c: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 00544451: ADD ESP,0x10
// 00544454: ADD ESI,0x14
// 00544457: CMP EBX,0x8
// 0054445a: JL 0x0054442e
//   XREF to: 0054442e (CONDITIONAL_JUMP)
// 0054445c: LEA ESI,[EDI + 0xa0]
// 00544462: XOR EBX,EBX
// 00544464: INC EBX
//   Label: LAB_00544464
// 00544465: PUSH EBX
// 00544466: PUSH 0x63e2d7
//   XREF to: 0063e2d7 (DATA)
// 0054446b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3c] (DATA)
// 0054446f: PUSH EAX
// 00544470: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00544475: ADD ESP,0xc
// 00544478: PUSH 0x37
// 0054447a: PUSH 0x36
// 0054447c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3c] (DATA)
// 00544480: PUSH EAX
// 00544481: PUSH ESI
// 00544482: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 00544487: ADD ESP,0x10
// 0054448a: ADD ESI,0x14
// 0054448d: CMP EBX,0x7
// 00544490: JL 0x00544464
//   XREF to: 00544464 (CONDITIONAL_JUMP)
// 00544492: LEA ESI,[EDI + 0x12c]
// 00544498: XOR EBX,EBX
// 0054449a: INC EBX
//   Label: LAB_0054449a
// 0054449b: PUSH EBX
// 0054449c: PUSH 0x63e2df
//   XREF to: 0063e2df (DATA)
// 005444a1: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x2c] (DATA)
// 005444a5: PUSH EAX
// 005444a6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005444ab: ADD ESP,0xc
// 005444ae: PUSH 0x37
// 005444b0: PUSH 0x36
// 005444b2: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x2c] (DATA)
// 005444b6: PUSH EAX
// 005444b7: PUSH ESI
// 005444b8: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 005444bd: ADD ESP,0x10
// 005444c0: ADD ESI,0x14
// 005444c3: CMP EBX,0x7
// 005444c6: JL 0x0054449a
//   XREF to: 0054449a (CONDITIONAL_JUMP)
// 005444c8: LEA EBX,[EDI + 0x1b8]
// 005444ce: LEA ESI,[EDI + 0x258]
// 005444d4: PUSH 0x37
//   Label: LAB_005444d4
// 005444d6: PUSH 0x36
// 005444d8: PUSH 0x63e2ea
//   XREF to: 0063e2ea (DATA)
// 005444dd: PUSH EBX
// 005444de: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 005444e3: ADD EBX,0x14
// 005444e6: ADD ESP,0x10
// 005444e9: CMP EBX,ESI
// 005444eb: JNZ 0x005444d4
//   XREF to: 005444d4 (CONDITIONAL_JUMP)
// 005444ed: ADD ESP,0x30
// 005444f0: POP EDI
// 005444f1: POP ESI
// 005444f2: POP EBX
// 005444f3: LEA EAX,[EAX]
// 005444f9: LEA EDX,[EDX]
// 005444ff: NOP
