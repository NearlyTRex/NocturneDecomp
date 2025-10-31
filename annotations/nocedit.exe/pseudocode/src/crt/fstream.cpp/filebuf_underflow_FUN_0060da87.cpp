// Name: crt_fstream.cpp_filebuf_underflow_FUN_0060da87
// Address: 0060da87
// Address Range: [[0060da87, 0060db8b]]
// Convention: __watcallStack
// Signature: int crt_fstream.cpp_filebuf_underflow_FUN_0060da87(filebuf * this_ptr)
// Function calls:
//   crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930

#include "nocturne.h"

int __watcallStack crt_fstream_cpp_filebuf_underflow_FUN_0060da87(filebuf *this_ptr)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  
  pcVar3 = (this_ptr->streambuf).__put_ptr;
  pcVar2 = (this_ptr->streambuf).__put_base;
  if ((pcVar3 != pcVar2 && -1 < (int)pcVar3 - (int)pcVar2) &&
     (iVar4 = (*this_ptr->__vtable->sync)(&this_ptr->streambuf), iVar4 == -1)) {
    return -1;
  }
  (this_ptr->streambuf).__put_base = (char *)0x0;
  (this_ptr->streambuf).__put_ptr = (char *)0x0;
  pcVar3 = (this_ptr->streambuf).__reserve_base;
  (this_ptr->streambuf).__put_end = (char *)0x0;
  if (pcVar3 == (char *)0x0) {
    if (((pcVar3 == (char *)0x0) && (((this_ptr->streambuf).__flags & 1) == 0)) &&
       (iVar4 = (*this_ptr->__vtable->doallocate)(&this_ptr->streambuf), iVar4 == -1)) {
      return -1;
    }
    pcVar3 = (this_ptr->streambuf).__reserve_base;
    if (pcVar3 == (char *)0x0) {
      (this_ptr->streambuf).__get_ptr = this_ptr->__unbuffered_get_area + 4;
      (this_ptr->streambuf).__get_end = this_ptr->__unbuffered_get_area + 4;
      (this_ptr->streambuf).__get_base = this_ptr->__unbuffered_get_area;
      iVar4 = crt_unknown_c_ReadFileBytesMaybe_FUN_0060e930();
      if (iVar4 < 1) {
        return -1;
      }
      pbVar5 = (byte *)(this_ptr->streambuf).__get_ptr;
      (this_ptr->streambuf).__get_end = (this_ptr->streambuf).__get_end + iVar4;
      goto LAB_0060daf3;
    }
LAB_0060dac1:
    (this_ptr->streambuf).__get_base = pcVar3;
    (this_ptr->streambuf).__get_ptr = pcVar3 + 4;
    (this_ptr->streambuf).__get_end = pcVar3 + 4;
  }
  else if ((this_ptr->streambuf).__get_end <= (this_ptr->streambuf).__get_ptr) goto LAB_0060dac1;
  if ((int)(this_ptr->streambuf).__reserve_end - (int)(this_ptr->streambuf).__get_end < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = crt_unknown_c_ReadFileBytesMaybe_FUN_0060e930();
    if (iVar4 < 1) {
      return -1;
    }
  }
  pbVar1 = (byte *)((this_ptr->streambuf).__get_end + iVar4);
  pbVar5 = (byte *)(this_ptr->streambuf).__get_ptr;
  (this_ptr->streambuf).__get_end = (char *)pbVar1;
  if (pbVar1 <= pbVar5) {
    return -1;
  }
LAB_0060daf3:
  return (uint)*pbVar5;
}


// Assembly code:
// 0060da87: PUSH EBX
//   Label: crt_fstream.cpp_filebuf_underflow_FUN_0060da87
// 0060da88: PUSH EBP
// 0060da89: MOV EBP,ESP
// 0060da8b: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060da8e: MOV EAX,dword ptr [EBX + 0x20]
// 0060da91: SUB EAX,dword ptr [EBX + 0x18]
// 0060da94: TEST EAX,EAX
// 0060da96: JG 0x0060dafd
//   XREF to: 0060dafd (CONDITIONAL_JUMP)
// 0060da98: MOV dword ptr [EBX + 0x18],0x0
//   Label: LAB_0060da98
// 0060da9f: MOV dword ptr [EBX + 0x20],0x0
// 0060daa6: MOV EAX,dword ptr [EBX + 0x4]
// 0060daa9: MOV dword ptr [EBX + 0x1c],0x0
// 0060dab0: TEST EAX,EAX
// 0060dab2: JNZ 0x0060db61
//   XREF to: 0060db61 (CONDITIONAL_JUMP)
// 0060dab8: JZ 0x0060db0f
//   XREF to: 0060db0f (CONDITIONAL_JUMP)
// 0060daba: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0060daba
// 0060dabd: TEST EAX,EAX
// 0060dabf: JZ 0x0060db29
//   XREF to: 0060db29 (CONDITIONAL_JUMP)
// 0060dac1: LEA EDX,[EAX + 0x4]
//   Label: LAB_0060dac1
// 0060dac4: MOV dword ptr [EBX + 0xc],EAX
// 0060dac7: MOV dword ptr [EBX + 0x14],EDX
// 0060daca: MOV dword ptr [EBX + 0x10],EDX
// 0060dacd: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_0060dacd
// 0060dad0: MOV EDX,dword ptr [EBX + 0x10]
// 0060dad3: SUB EAX,EDX
// 0060dad5: TEST EAX,EAX
// 0060dad7: JG 0x0060db74
//   XREF to: 0060db74 (CONDITIONAL_JUMP)
// 0060dadd: XOR EAX,EAX
// 0060dadf: MOV EDX,dword ptr [EBX + 0x10]
//   Label: LAB_0060dadf
// 0060dae2: LEA ECX,[EDX + EAX*0x1]
// 0060dae5: MOV EAX,dword ptr [EBX + 0x14]
// 0060dae8: MOV dword ptr [EBX + 0x10],ECX
// 0060daeb: CMP EAX,ECX
// 0060daed: JNC 0x0060db59
//   XREF to: 0060db59 (CONDITIONAL_JUMP)
// 0060daf3: MOV AL,byte ptr [EAX]
//   Label: LAB_0060daf3
// 0060daf5: AND EAX,0xff
// 0060dafa: POP EBP
// 0060dafb: POP EBX
// 0060dafc: RET
// 0060dafd: PUSH EBX
//   Label: LAB_0060dafd
// 0060dafe: MOV EAX,dword ptr [EBX + 0x28]
// 0060db01: CALL dword ptr [EAX + 0x20]
// 0060db04: ADD ESP,0x4
// 0060db07: CMP EAX,-0x1
// 0060db0a: JNZ 0x0060da98
//   XREF to: 0060da98 (CONDITIONAL_JUMP)
// 0060db0c: POP EBP
// 0060db0d: POP EBX
// 0060db0e: RET
// 0060db0f: MOV EAX,dword ptr [EBX + 0x24]
//   Label: LAB_0060db0f
// 0060db12: AND EAX,0x1
// 0060db15: JNZ 0x0060daba
//   XREF to: 0060daba (CONDITIONAL_JUMP)
// 0060db17: PUSH EBX
// 0060db18: MOV EAX,dword ptr [EBX + 0x28]
// 0060db1b: CALL dword ptr [EAX + 0x28]
// 0060db1e: ADD ESP,0x4
// 0060db21: CMP EAX,-0x1
// 0060db24: JNZ 0x0060daba
//   XREF to: 0060daba (CONDITIONAL_JUMP)
// 0060db26: POP EBP
// 0060db27: POP EBX
// 0060db28: RET
// 0060db29: LEA EAX,[EBX + 0x38]
//   Label: LAB_0060db29
// 0060db2c: MOV dword ptr [EBX + 0x14],EAX
// 0060db2f: PUSH 0x1
// 0060db31: MOV dword ptr [EBX + 0x10],EAX
// 0060db34: PUSH EAX
// 0060db35: MOV EAX,dword ptr [EBX + 0x2c]
// 0060db38: LEA EDX,[EBX + 0x34]
// 0060db3b: PUSH EAX
// 0060db3c: MOV dword ptr [EBX + 0xc],EDX
// 0060db3f: CALL crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930
//   XREF to: 0060e930 (UNCONDITIONAL_CALL)
// 0060db44: ADD ESP,0xc
// 0060db47: TEST EAX,EAX
// 0060db49: JLE 0x0060db59
//   XREF to: 0060db59 (CONDITIONAL_JUMP)
// 0060db4b: MOV EDX,dword ptr [EBX + 0x10]
// 0060db4e: LEA ECX,[EDX + EAX*0x1]
// 0060db51: MOV EAX,dword ptr [EBX + 0x14]
// 0060db54: MOV dword ptr [EBX + 0x10],ECX
// 0060db57: JMP 0x0060daf3
//   XREF to: 0060daf3 (UNCONDITIONAL_JUMP)
// 0060db59: MOV EAX,0xffffffff
//   Label: LAB_0060db59
// 0060db5e: POP EBP
// 0060db5f: POP EBX
// 0060db60: RET
// 0060db61: MOV ECX,dword ptr [EBX + 0x14]
//   Label: LAB_0060db61
// 0060db64: MOV EDX,dword ptr [EBX + 0x10]
// 0060db67: CMP ECX,EDX
// 0060db69: JC 0x0060dacd
//   XREF to: 0060dacd (CONDITIONAL_JUMP)
// 0060db6f: JMP 0x0060dac1
//   XREF to: 0060dac1 (UNCONDITIONAL_JUMP)
// 0060db74: PUSH EAX
//   Label: LAB_0060db74
// 0060db75: PUSH EDX
// 0060db76: MOV EAX,dword ptr [EBX + 0x2c]
// 0060db79: PUSH EAX
// 0060db7a: CALL crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930
//   XREF to: 0060e930 (UNCONDITIONAL_CALL)
// 0060db7f: ADD ESP,0xc
// 0060db82: TEST EAX,EAX
// 0060db84: JG 0x0060dadf
//   XREF to: 0060dadf (CONDITIONAL_JUMP)
// 0060db8a: JMP 0x0060db59
//   XREF to: 0060db59 (UNCONDITIONAL_JUMP)
