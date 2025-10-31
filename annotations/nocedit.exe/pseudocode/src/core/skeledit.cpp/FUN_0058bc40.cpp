// Name: core_skeledit.cpp_FUN_0058bc40
// Address: 0058bc40
// Address Range: [[0058bc40, 0058bcf0]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058bc40()
// Cross-references:
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b886 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c339 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_f_f_0064a902
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

undefined4 core_skeledit_cpp_FUN_0058bc40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  undefined4 unaff_EBP;
  int in_stack_0000000c;
  FILE *in_stack_00000010;
  undefined4 local_14;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x34);
  iVar3 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0x2c)) {
    iVar1 = 0;
    do {
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (in_stack_00000010,"%f,%f,%f\n",&local_14,auStack_10,&uStack_c);
      if (iVar2 != 3) {
        return 0;
      }
      iVar2 = *(int *)(in_stack_0000000c + 0x40);
      *(undefined1 *)(iVar2 + iVar1) = 1;
      *(undefined4 *)(iVar2 + 0x10 + iVar1) = local_14;
      *(undefined4 *)(iVar2 + 0x14 + iVar1) = uStack_c;
      *(undefined1 *)(iVar2 + 1 + iVar1) = 0;
      *(undefined4 *)(iVar2 + 4 + iVar1) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0x18 + iVar1) = unaff_EBP;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x34;
    } while (iVar3 < *(int *)(in_stack_0000000c + 0x2c));
  }
  return 1;
}


// Assembly code:
// 0058bc40: PUSH 0x34
//   Label: core_skeledit.cpp_FUN_0058bc40
// 0058bc45: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058bc4a: PUSH EBX
// 0058bc4b: PUSH ESI
// 0058bc4c: PUSH EDI
// 0058bc4d: PUSH EBP
// 0058bc4e: SUB ESP,0xc
// 0058bc51: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0058bc55: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0058bc59: MOV EBX,0x1
// 0058bc5e: MOV ESI,EBP
// 0058bc60: PUSH ESI
//   Label: LAB_0058bc60
// 0058bc61: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058bc66: ADD ESP,0x4
// 0058bc69: TEST EAX,EAX
// 0058bc6b: JL 0x0058bc77
//   XREF to: 0058bc77 (CONDITIONAL_JUMP)
// 0058bc6d: CMP EAX,0xa
// 0058bc70: JNZ 0x0058bc60
//   XREF to: 0058bc60 (CONDITIONAL_JUMP)
// 0058bc72: DEC EBX
// 0058bc73: TEST EBX,EBX
// 0058bc75: JG 0x0058bc60
//   XREF to: 0058bc60 (CONDITIONAL_JUMP)
// 0058bc77: MOV EDX,dword ptr [EDI + 0x2c]
//   Label: LAB_0058bc77
// 0058bc7a: XOR EBX,EBX
// 0058bc7c: TEST EDX,EDX
// 0058bc7e: JLE 0x0058bcda
//   XREF to: 0058bcda (CONDITIONAL_JUMP)
// 0058bc80: XOR ESI,ESI
// 0058bc82: LEA EAX,[ESP + 0x8]
//   Label: LAB_0058bc82
//   XREF to: Stack[-0x14] (DATA)
// 0058bc86: PUSH EAX
// 0058bc87: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x18] (DATA)
// 0058bc8b: PUSH EAX
// 0058bc8c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 0058bc90: PUSH EAX
// 0058bc91: PUSH 0x64a902
//   XREF to: 0064a902 (DATA)
// 0058bc96: PUSH EBP
// 0058bc97: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058bc9c: ADD ESP,0x14
// 0058bc9f: CMP EAX,0x3
// 0058bca2: JNZ 0x0058bce7
//   XREF to: 0058bce7 (CONDITIONAL_JUMP)
// 0058bca4: MOV EDX,dword ptr [EDI + 0x40]
// 0058bca7: MOV byte ptr [EDX + ESI*0x1],0x1
// 0058bcab: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0058bcae: MOV dword ptr [EDX + ESI*0x1 + 0x10],EAX
// 0058bcb2: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0058bcb6: MOV dword ptr [EDX + ESI*0x1 + 0x14],EAX
// 0058bcba: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0058bcbe: MOV byte ptr [EDX + ESI*0x1 + 0x1],0x0
// 0058bcc3: MOV dword ptr [EDX + ESI*0x1 + 0x4],0x3f800000
// 0058bccb: MOV dword ptr [EDX + ESI*0x1 + 0x18],EAX
// 0058bccf: INC EBX
// 0058bcd0: MOV ECX,dword ptr [EDI + 0x2c]
// 0058bcd3: ADD ESI,0x34
// 0058bcd6: CMP EBX,ECX
// 0058bcd8: JL 0x0058bc82
//   XREF to: 0058bc82 (CONDITIONAL_JUMP)
// 0058bcda: MOV EAX,0x1
//   Label: LAB_0058bcda
// 0058bcdf: ADD ESP,0xc
// 0058bce2: POP EBP
// 0058bce3: POP EDI
// 0058bce4: POP ESI
// 0058bce5: POP EBX
// 0058bce6: RET
// 0058bce7: XOR EAX,EAX
//   Label: LAB_0058bce7
// 0058bce9: ADD ESP,0xc
// 0058bcec: POP EBP
// 0058bced: POP EDI
// 0058bcee: POP ESI
// 0058bcef: POP EBX
// 0058bcf0: RET
