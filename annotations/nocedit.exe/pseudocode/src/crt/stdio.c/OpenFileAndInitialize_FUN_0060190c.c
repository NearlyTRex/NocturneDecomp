// Name: crt_stdio.c_OpenFileAndInitialize_FUN_0060190c
// Address: 0060190c
// Address Range: [[0060190c, 00601a1d]]
// Convention: __cdecl
// Signature: FILE * crt_stdio.c_OpenFileAndInitialize_FUN_0060190c(char * filename, char mode_char, int parsed_mode_flags, int stage1_result, int additional_flags, FILE * file_struct)
// Cross-references:
//   crt_stdio.c_fopenThreadSafe_FUN_00601b14 (00601b14) at 00601b88 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fopenWithFlags_FUN_00601a20 (00601a20) at 00601a66 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_ctype.c_tolower_FUN_005feb30
//   crt_stdio.c_CreateFileVariadic_FUN_00609074
//   crt_stdio.c_DeallocateFileStruct_FUN_006093b0
//   crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0
//   crt_stdio.c_fseek_FUN_005ffacc

#include "nocturne.h"

FILE * __cdecl
crt_stdio_c_OpenFileAndInitialize_FUN_0060190c
          (char *filename,char mode_char,int parsed_mode_flags,int stage1_result,
          int additional_flags,FILE *file_struct)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined3 in_stack_00000009;
  undefined4 uVar5;
  
  *(byte *)&file_struct->_flag = (byte)file_struct->_flag & 0xfc;
  file_struct->_flag = file_struct->_flag | parsed_mode_flags;
  iVar3 = crt_ctype_c_tolower_FUN_005feb30((uint)(byte)mode_char);
  if ((char)iVar3 == 'r') {
    uVar4 = 0;
    if ((stage1_result & 2U) != 0) {
      uVar4 = 2;
    }
    if ((stage1_result & 0x40U) == 0) {
      uVar4 = uVar4 | 0x100;
    }
    else {
      uVar4 = uVar4 | 0x200;
    }
    uVar5 = 0;
  }
  else {
    bVar1 = ((stage1_result & 1U) != 0) + 0x21;
    if ((stage1_result & 0x80U) == 0) {
      bVar1 = bVar1 | 0x40;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    if ((stage1_result & 0x40U) == 0) {
      uVar2 = CONCAT11(1,bVar1);
    }
    else {
      uVar2 = CONCAT11(2,bVar1);
    }
    uVar4 = (uint)uVar2;
    uVar5 = 0x180;
  }
  iVar3 = crt_stdio_c_CreateFileVariadic_FUN_00609074(_mode_char,uVar4,(int)file_struct,uVar5);
  file_struct->_handle = iVar3;
  if (file_struct->_handle == -1) {
    crt_stdio_c_DeallocateFileStruct_FUN_006093b0(file_struct);
    return (FILE *)0x0;
  }
  file_struct->_cnt = 0;
  file_struct->_bufsize = 0;
  file_struct->_link->__get_base = (char *)0x0;
  file_struct->_link->__get_end = (char *)file_struct;
  *(undefined4 *)((int)&file_struct->_link->__get_ptr + 1) = 0;
  file_struct->_link->__reserve_end = (char *)0x0;
  if ((additional_flags & 0x80U) != 0) {
    crt_stdio_c_fseek_FUN_005ffacc(file_struct,0,2);
  }
  crt_stdio_c_DetectDeviceAndSetBuffering_FUN_00608ee0(file_struct);
  return file_struct;
}


// Assembly code:
// 0060190c: PUSH EBX
//   Label: crt_stdio.c_OpenFileAndInitialize_FUN_0060190c
// 0060190d: PUSH ESI
// 0060190e: PUSH EDI
// 0060190f: PUSH EBP
// 00601910: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00601914: AND byte ptr [EBX + 0xc],0xfc
// 00601918: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0060191c: MOV EDX,dword ptr [EBX + 0xc]
// 0060191f: OR EDX,EAX
// 00601921: XOR EAX,EAX
// 00601923: MOV AL,byte ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00601927: PUSH EAX
// 00601928: MOV dword ptr [EBX + 0xc],EDX
// 0060192b: CALL crt_ctype.c_tolower_FUN_005feb30
//   XREF to: 005feb30 (UNCONDITIONAL_CALL)
// 00601930: ADD ESP,0x4
// 00601933: CMP AL,0x72
// 00601935: JNZ 0x00601965
//   XREF to: 00601965 (CONDITIONAL_JUMP)
// 00601937: MOV CH,byte ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0060193b: XOR EAX,EAX
// 0060193d: TEST CH,0x2
// 00601940: JZ 0x00601947
//   XREF to: 00601947 (CONDITIONAL_JUMP)
// 00601942: MOV EAX,0x2
// 00601947: TEST byte ptr [ESP + 0x1c],0x40
//   Label: LAB_00601947
//   XREF to: Stack[0xc] (READ)
// 0060194c: JZ 0x00601953
//   XREF to: 00601953 (CONDITIONAL_JUMP)
// 0060194e: OR AH,0x2
// 00601951: JMP 0x00601956
//   XREF to: 00601956 (UNCONDITIONAL_JUMP)
// 00601953: OR AH,0x1
//   Label: LAB_00601953
// 00601956: PUSH 0x0
//   Label: LAB_00601956
// 00601958: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0060195c: PUSH EDI
// 0060195d: PUSH EAX
// 0060195e: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00601962: PUSH EBP
// 00601963: JMP 0x006019a1
//   XREF to: 006019a1 (UNCONDITIONAL_JUMP)
// 00601965: MOV DL,byte ptr [ESP + 0x1c]
//   Label: LAB_00601965
//   XREF to: Stack[0xc] (READ)
// 00601969: TEST DL,0x1
// 0060196c: SETNZ AL
// 0060196f: AND EAX,0xff
// 00601974: ADD EAX,0x21
// 00601977: TEST DL,0x80
// 0060197a: JZ 0x00601980
//   XREF to: 00601980 (CONDITIONAL_JUMP)
// 0060197c: OR AL,0x10
// 0060197e: JMP 0x00601982
//   XREF to: 00601982 (UNCONDITIONAL_JUMP)
// 00601980: OR AL,0x40
//   Label: LAB_00601980
// 00601982: TEST byte ptr [ESP + 0x1c],0x40
//   Label: LAB_00601982
//   XREF to: Stack[0xc] (READ)
// 00601987: JZ 0x0060198e
//   XREF to: 0060198e (CONDITIONAL_JUMP)
// 00601989: OR AH,0x2
// 0060198c: JMP 0x00601991
//   XREF to: 00601991 (UNCONDITIONAL_JUMP)
// 0060198e: OR AH,0x1
//   Label: LAB_0060198e
// 00601991: PUSH 0x180
//   Label: LAB_00601991
// 00601996: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0060199a: PUSH ECX
// 0060199b: PUSH EAX
// 0060199c: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 006019a0: PUSH ESI
// 006019a1: CALL crt_stdio.c_CreateFileVariadic_FUN_00609074
//   Label: LAB_006019a1
//   XREF to: 00609074 (UNCONDITIONAL_CALL)
// 006019a6: ADD ESP,0x10
// 006019a9: MOV dword ptr [EBX + 0x10],EAX
// 006019ac: CMP dword ptr [EBX + 0x10],-0x1
// 006019b0: JNZ 0x006019c2
//   XREF to: 006019c2 (CONDITIONAL_JUMP)
// 006019b2: PUSH EBX
// 006019b3: CALL crt_stdio.c_DeallocateFileStruct_FUN_006093b0
//   XREF to: 006093b0 (UNCONDITIONAL_CALL)
// 006019b8: ADD ESP,0x4
// 006019bb: XOR EAX,EAX
// 006019bd: POP EBP
// 006019be: POP EDI
// 006019bf: POP ESI
// 006019c0: POP EBX
// 006019c1: RET
// 006019c2: MOV dword ptr [EBX + 0x4],0x0
//   Label: LAB_006019c2
// 006019c9: MOV EAX,dword ptr [EBX + 0x8]
// 006019cc: MOV dword ptr [EBX + 0x14],0x0
// 006019d3: MOV dword ptr [EAX + 0xc],0x0
// 006019da: MOV EAX,dword ptr [EBX + 0x8]
// 006019dd: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 006019e1: MOV dword ptr [EAX + 0x10],EDX
// 006019e4: MOV EAX,dword ptr [EBX + 0x8]
// 006019e7: MOV dword ptr [EAX + 0x15],0x0
// 006019ee: MOV EAX,dword ptr [EBX + 0x8]
// 006019f1: MOV DH,byte ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 006019f5: MOV dword ptr [EAX + 0x8],0x0
// 006019fc: TEST DH,0x80
// 006019ff: JZ 0x00601a0e
//   XREF to: 00601a0e (CONDITIONAL_JUMP)
// 00601a01: PUSH 0x2
// 00601a03: PUSH 0x0
// 00601a05: PUSH EBX
// 00601a06: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 00601a0b: ADD ESP,0xc
// 00601a0e: PUSH EBX
//   Label: LAB_00601a0e
// 00601a0f: CALL crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0
//   XREF to: 00608ee0 (UNCONDITIONAL_CALL)
// 00601a14: ADD ESP,0x4
// 00601a17: MOV EAX,EBX
// 00601a19: POP EBP
// 00601a1a: POP EDI
// 00601a1b: POP ESI
// 00601a1c: POP EBX
// 00601a1d: RET
