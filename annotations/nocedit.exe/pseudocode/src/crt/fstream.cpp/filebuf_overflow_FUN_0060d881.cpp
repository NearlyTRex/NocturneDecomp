// Name: crt_fstream.cpp_filebuf_overflow_FUN_0060d881
// Address: 0060d881
// Address Range: [[0060d881, 0060da86]]
// Convention: __watcallStack
// Signature: int crt_fstream.cpp_filebuf_overflow_FUN_0060d881(filebuf * this_ptr, int character)
// Function calls:
//   crt_io.c_tell_FUN_00606720
//   crt_io.c_write_FUN_006084ec
//   crt_stdio.c_lseek_FUN_00606690
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

int __watcallStack crt_fstream_cpp_filebuf_overflow_FUN_0060d881(filebuf *this_ptr,int character)

{
  char **ppcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint n;
  SIZE_T count;
  BADSPACEBASE *in_ESP;
  long unaff_EDI;
  
  pcVar4 = (this_ptr->streambuf).__get_end;
  pcVar2 = (this_ptr->streambuf).__get_ptr;
  if (pcVar4 == pcVar2 || (int)pcVar4 - (int)pcVar2 < 0) {
    (this_ptr->streambuf).__get_base = (char *)0x0;
    (this_ptr->streambuf).__get_ptr = (char *)0x0;
    (this_ptr->streambuf).__get_end = (char *)0x0;
  }
  else {
    iVar3 = (*this_ptr->__vtable->sync)(&this_ptr->streambuf);
    if (iVar3 == -1) {
      return -1;
    }
  }
  pcVar4 = (this_ptr->streambuf).__reserve_base;
  if (pcVar4 == (char *)0x0) {
    if (((pcVar4 == (char *)0x0) && (((this_ptr->streambuf).__flags & 1) == 0)) &&
       (iVar3 = (*this_ptr->__vtable->doallocate)(&this_ptr->streambuf), iVar3 == -1)) {
      return -1;
    }
    pcVar4 = (this_ptr->streambuf).__reserve_base;
    if (pcVar4 == (char *)0x0) {
      if (character != -1) {
        iVar3 = crt_io_c_write_FUN_006084ec(this_ptr->__file_handle,&stack0xffffffec,1);
        return (iVar3 == 1) - 1;
      }
      return 0;
    }
  }
  else if ((this_ptr->streambuf).__put_base < (this_ptr->streambuf).__put_ptr) goto LAB_0060d930;
  (this_ptr->streambuf).__put_base = pcVar4;
  (this_ptr->streambuf).__put_ptr = pcVar4;
  (this_ptr->streambuf).__put_end = (this_ptr->streambuf).__reserve_end;
LAB_0060d930:
  if (((this_ptr->__file_mode & 8) == 0) ||
     ((unaff_EDI = crt_io_c_tell_FUN_00606720(this_ptr->__file_handle), -1 < unaff_EDI &&
      (iVar3 = crt_stdio_c_lseek_FUN_00606690(this_ptr->__file_handle,0,2), -1 < iVar3)))) {
    if ((character != -1) &&
       (pcVar4 = (this_ptr->streambuf).__put_ptr, pcVar4 < (this_ptr->streambuf).__put_end)) {
      *pcVar4 = (char)character;
      character = -1;
      (this_ptr->streambuf).__put_ptr = (this_ptr->streambuf).__put_ptr + 1;
    }
    n = (int)(this_ptr->streambuf).__put_ptr - (int)(this_ptr->streambuf).__put_base;
    while (n != 0) {
      count = n;
      if (0x7fffffff < n) {
        count = 0x7fffffff;
      }
      iVar3 = crt_io_c_write_FUN_006084ec
                        (this_ptr->__file_handle,(this_ptr->streambuf).__put_base,count);
      if (iVar3 == -1) {
        return -1;
      }
      if (iVar3 == 0) break;
      n = n - iVar3;
      if (n == 0) {
        (this_ptr->streambuf).__put_ptr = (this_ptr->streambuf).__put_base;
        (this_ptr->streambuf).__put_end = (this_ptr->streambuf).__put_end;
      }
      else {
        pcVar4 = (this_ptr->streambuf).__put_base;
        crt_string_c_memmove_FUN_005fe5e0(pcVar4,pcVar4 + iVar3,n);
        (this_ptr->streambuf).__put_ptr = (this_ptr->streambuf).__put_base;
        (this_ptr->streambuf).__put_end = (this_ptr->streambuf).__put_end;
        (this_ptr->streambuf).__put_ptr = (this_ptr->streambuf).__put_ptr + n;
      }
    }
    if (character != -1) {
      pcVar4 = (this_ptr->streambuf).__put_ptr;
      if ((this_ptr->streambuf).__put_end <= pcVar4) {
        return -1;
      }
      *pcVar4 = (char)character;
      ppcVar1 = &(this_ptr->streambuf).__put_ptr;
      *ppcVar1 = *ppcVar1 + 1;
    }
    if ((((this_ptr->__file_mode & 8) == 0) ||
        (iVar3 = crt_stdio_c_lseek_FUN_00606690(this_ptr->__file_handle,unaff_EDI,0), -1 < iVar3))
       && (n == 0)) {
      return 0;
    }
  }
  return -1;
}


// Assembly code:
// 0060d881: PUSH EBX
//   Label: crt_fstream.cpp_filebuf_overflow_FUN_0060d881
// 0060d882: PUSH ESI
// 0060d883: PUSH EDI
// 0060d884: PUSH EBP
// 0060d885: MOV EBP,ESP
// 0060d887: SUB ESP,0x4
// 0060d88a: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0060d88d: MOV EAX,dword ptr [EBX + 0x10]
// 0060d890: SUB EAX,dword ptr [EBX + 0x14]
// 0060d893: TEST EAX,EAX
// 0060d895: JG 0x0060d8cb
//   XREF to: 0060d8cb (CONDITIONAL_JUMP)
// 0060d897: MOV dword ptr [EBX + 0xc],0x0
// 0060d89e: MOV dword ptr [EBX + 0x14],0x0
// 0060d8a5: MOV dword ptr [EBX + 0x10],0x0
// 0060d8ac: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0060d8ac
// 0060d8af: TEST EAX,EAX
// 0060d8b1: JNZ 0x0060d9b7
//   XREF to: 0060d9b7 (CONDITIONAL_JUMP)
// 0060d8b7: JZ 0x0060d8df
//   XREF to: 0060d8df (CONDITIONAL_JUMP)
// 0060d8b9: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0060d8b9
// 0060d8bc: TEST EAX,EAX
// 0060d8be: JNZ 0x0060d924
//   XREF to: 0060d924 (CONDITIONAL_JUMP)
// 0060d8c0: CMP dword ptr [EBP + 0x18],-0x1
//   XREF to: Stack[0x8] (READ)
// 0060d8c4: JNZ 0x0060d8fb
//   XREF to: 0060d8fb (CONDITIONAL_JUMP)
// 0060d8c6: JMP 0x0060d9b0
//   XREF to: 0060d9b0 (UNCONDITIONAL_JUMP)
// 0060d8cb: PUSH EBX
//   Label: LAB_0060d8cb
// 0060d8cc: MOV EAX,dword ptr [EBX + 0x28]
// 0060d8cf: CALL dword ptr [EAX + 0x20]
// 0060d8d2: ADD ESP,0x4
// 0060d8d5: CMP EAX,-0x1
// 0060d8d8: JNZ 0x0060d8ac
//   XREF to: 0060d8ac (CONDITIONAL_JUMP)
// 0060d8da: JMP 0x0060d9b0
//   XREF to: 0060d9b0 (UNCONDITIONAL_JUMP)
// 0060d8df: MOV EAX,dword ptr [EBX + 0x24]
//   Label: LAB_0060d8df
// 0060d8e2: AND EAX,0x1
// 0060d8e5: JNZ 0x0060d8b9
//   XREF to: 0060d8b9 (CONDITIONAL_JUMP)
// 0060d8e7: PUSH EBX
// 0060d8e8: MOV EAX,dword ptr [EBX + 0x28]
// 0060d8eb: CALL dword ptr [EAX + 0x28]
// 0060d8ee: ADD ESP,0x4
// 0060d8f1: CMP EAX,-0x1
// 0060d8f4: JNZ 0x0060d8b9
//   XREF to: 0060d8b9 (CONDITIONAL_JUMP)
// 0060d8f6: JMP 0x0060d9b0
//   XREF to: 0060d9b0 (UNCONDITIONAL_JUMP)
// 0060d8fb: MOV AL,byte ptr [EBP + 0x18]
//   Label: LAB_0060d8fb
//   XREF to: Stack[0x8] (READ)
// 0060d8fe: PUSH 0x1
// 0060d900: MOV byte ptr [EBP + -0x4],AL
//   XREF to: Stack[-0x14] (WRITE)
// 0060d903: LEA EAX,[EBP + -0x4]
//   XREF to: Stack[-0x14] (DATA)
// 0060d906: PUSH EAX
// 0060d907: MOV EAX,dword ptr [EBX + 0x2c]
// 0060d90a: PUSH EAX
// 0060d90b: CALL crt_io.c_write_FUN_006084ec
//   XREF to: 006084ec (UNCONDITIONAL_CALL)
// 0060d910: ADD ESP,0xc
// 0060d913: CMP EAX,0x1
// 0060d916: SETZ AL
// 0060d919: AND EAX,0xff
// 0060d91e: DEC EAX
// 0060d91f: JMP 0x0060d9b0
//   XREF to: 0060d9b0 (UNCONDITIONAL_JUMP)
// 0060d924: MOV dword ptr [EBX + 0x18],EAX
//   Label: LAB_0060d924
// 0060d927: MOV EDX,dword ptr [EBX + 0x8]
// 0060d92a: MOV dword ptr [EBX + 0x20],EAX
// 0060d92d: MOV dword ptr [EBX + 0x1c],EDX
// 0060d930: TEST byte ptr [EBX + 0x30],0x8
//   Label: LAB_0060d930
// 0060d934: JNZ 0x0060d9ca
//   XREF to: 0060d9ca (CONDITIONAL_JUMP)
// 0060d93a: CMP dword ptr [EBP + 0x18],-0x1
//   Label: LAB_0060d93a
//   XREF to: Stack[0x8] (READ)
// 0060d93e: JNZ 0x0060d9f6
//   XREF to: 0060d9f6 (CONDITIONAL_JUMP)
// 0060d944: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_0060d944
// 0060d947: MOV ESI,dword ptr [EBX + 0x18]
// 0060d94a: SUB EAX,ESI
// 0060d94c: MOV ESI,EAX
// 0060d94e: TEST ESI,ESI
//   Label: LAB_0060d94e
// 0060d950: JBE 0x0060d981
//   XREF to: 0060d981 (CONDITIONAL_JUMP)
// 0060d952: CMP ESI,0x7fffffff
// 0060d958: JBE 0x0060da1d
//   XREF to: 0060da1d (CONDITIONAL_JUMP)
// 0060d95e: MOV EAX,0x7fffffff
// 0060d963: PUSH EAX
//   Label: LAB_0060d963
// 0060d964: MOV EAX,dword ptr [EBX + 0x18]
// 0060d967: PUSH EAX
// 0060d968: MOV EAX,dword ptr [EBX + 0x2c]
// 0060d96b: PUSH EAX
// 0060d96c: CALL crt_io.c_write_FUN_006084ec
//   XREF to: 006084ec (UNCONDITIONAL_CALL)
// 0060d971: ADD ESP,0xc
// 0060d974: CMP EAX,-0x1
// 0060d977: JZ 0x0060d9b0
//   XREF to: 0060d9b0 (CONDITIONAL_JUMP)
// 0060d979: TEST EAX,EAX
// 0060d97b: JNZ 0x0060da24
//   XREF to: 0060da24 (CONDITIONAL_JUMP)
// 0060d981: CMP dword ptr [EBP + 0x18],-0x1
//   Label: LAB_0060d981
//   XREF to: Stack[0x8] (READ)
// 0060d985: JZ 0x0060d999
//   XREF to: 0060d999 (CONDITIONAL_JUMP)
// 0060d987: MOV EAX,dword ptr [EBX + 0x20]
// 0060d98a: MOV EDX,dword ptr [EBX + 0x1c]
// 0060d98d: CMP EAX,EDX
// 0060d98f: JNC 0x0060d9ab
//   XREF to: 0060d9ab (CONDITIONAL_JUMP)
// 0060d991: MOV DL,byte ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060d994: MOV byte ptr [EAX],DL
// 0060d996: INC dword ptr [EBX + 0x20]
// 0060d999: TEST byte ptr [EBX + 0x30],0x8
//   Label: LAB_0060d999
// 0060d99d: JNZ 0x0060da64
//   XREF to: 0060da64 (CONDITIONAL_JUMP)
// 0060d9a3: TEST ESI,ESI
//   Label: LAB_0060d9a3
// 0060d9a5: JZ 0x0060da80
//   XREF to: 0060da80 (CONDITIONAL_JUMP)
// 0060d9ab: MOV EAX,0xffffffff
//   Label: LAB_0060d9ab
// 0060d9b0: MOV ESP,EBP
//   Label: LAB_0060d9b0
// 0060d9b2: POP EBP
// 0060d9b3: POP EDI
// 0060d9b4: POP ESI
// 0060d9b5: POP EBX
// 0060d9b6: RET
// 0060d9b7: MOV EDX,dword ptr [EBX + 0x20]
//   Label: LAB_0060d9b7
// 0060d9ba: MOV ESI,dword ptr [EBX + 0x18]
// 0060d9bd: CMP EDX,ESI
// 0060d9bf: JA 0x0060d930
//   XREF to: 0060d930 (CONDITIONAL_JUMP)
// 0060d9c5: JMP 0x0060d924
//   XREF to: 0060d924 (UNCONDITIONAL_JUMP)
// 0060d9ca: MOV EAX,dword ptr [EBX + 0x2c]
//   Label: LAB_0060d9ca
// 0060d9cd: PUSH EAX
// 0060d9ce: CALL crt_io.c_tell_FUN_00606720
//   XREF to: 00606720 (UNCONDITIONAL_CALL)
// 0060d9d3: ADD ESP,0x4
// 0060d9d6: MOV EDI,EAX
// 0060d9d8: TEST EAX,EAX
// 0060d9da: JL 0x0060d9ab
//   XREF to: 0060d9ab (CONDITIONAL_JUMP)
// 0060d9dc: PUSH 0x2
// 0060d9de: PUSH 0x0
// 0060d9e0: MOV EAX,dword ptr [EBX + 0x2c]
// 0060d9e3: PUSH EAX
// 0060d9e4: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 0060d9e9: ADD ESP,0xc
// 0060d9ec: TEST EAX,EAX
// 0060d9ee: JGE 0x0060d93a
//   XREF to: 0060d93a (CONDITIONAL_JUMP)
// 0060d9f4: JMP 0x0060d9ab
//   XREF to: 0060d9ab (UNCONDITIONAL_JUMP)
// 0060d9f6: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_0060d9f6
// 0060d9f9: MOV EDX,dword ptr [EBX + 0x1c]
// 0060d9fc: CMP EAX,EDX
// 0060d9fe: JNC 0x0060d944
//   XREF to: 0060d944 (CONDITIONAL_JUMP)
// 0060da04: MOV DL,byte ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060da07: MOV byte ptr [EAX],DL
// 0060da09: MOV ESI,dword ptr [EBX + 0x20]
// 0060da0c: MOV EAX,0xffffffff
// 0060da11: INC ESI
// 0060da12: MOV dword ptr [EBP + 0x18],EAX
//   XREF to: Stack[0x8] (WRITE)
// 0060da15: MOV dword ptr [EBX + 0x20],ESI
// 0060da18: JMP 0x0060d944
//   XREF to: 0060d944 (UNCONDITIONAL_JUMP)
// 0060da1d: MOV EAX,ESI
//   Label: LAB_0060da1d
// 0060da1f: JMP 0x0060d963
//   XREF to: 0060d963 (UNCONDITIONAL_JUMP)
// 0060da24: SUB ESI,EAX
//   Label: LAB_0060da24
// 0060da26: TEST ESI,ESI
// 0060da28: JA 0x0060da3b
//   XREF to: 0060da3b (CONDITIONAL_JUMP)
// 0060da2a: MOV EAX,dword ptr [EBX + 0x18]
// 0060da2d: MOV EDX,dword ptr [EBX + 0x1c]
// 0060da30: MOV dword ptr [EBX + 0x20],EAX
// 0060da33: MOV dword ptr [EBX + 0x1c],EDX
// 0060da36: JMP 0x0060d94e
//   XREF to: 0060d94e (UNCONDITIONAL_JUMP)
// 0060da3b: MOV EDX,dword ptr [EBX + 0x18]
//   Label: LAB_0060da3b
// 0060da3e: PUSH ESI
// 0060da3f: ADD EAX,EDX
// 0060da41: PUSH EAX
// 0060da42: PUSH EDX
// 0060da43: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0060da48: MOV EAX,dword ptr [EBX + 0x18]
// 0060da4b: MOV dword ptr [EBX + 0x20],EAX
// 0060da4e: MOV EDX,dword ptr [EBX + 0x1c]
// 0060da51: MOV ECX,dword ptr [EBX + 0x20]
// 0060da54: MOV dword ptr [EBX + 0x1c],EDX
// 0060da57: ADD ECX,ESI
// 0060da59: ADD ESP,0xc
// 0060da5c: MOV dword ptr [EBX + 0x20],ECX
// 0060da5f: JMP 0x0060d94e
//   XREF to: 0060d94e (UNCONDITIONAL_JUMP)
// 0060da64: PUSH 0x0
//   Label: LAB_0060da64
// 0060da66: PUSH EDI
// 0060da67: MOV EAX,dword ptr [EBX + 0x2c]
// 0060da6a: PUSH EAX
// 0060da6b: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 0060da70: ADD ESP,0xc
// 0060da73: TEST EAX,EAX
// 0060da75: JGE 0x0060d9a3
//   XREF to: 0060d9a3 (CONDITIONAL_JUMP)
// 0060da7b: JMP 0x0060d9ab
//   XREF to: 0060d9ab (UNCONDITIONAL_JUMP)
// 0060da80: XOR EAX,EAX
//   Label: LAB_0060da80
// 0060da82: JMP 0x0060d9b0
//   XREF to: 0060d9b0 (UNCONDITIONAL_JUMP)
