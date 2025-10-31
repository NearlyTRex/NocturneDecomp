// Name: crt_strstream.cpp_strstreambuf_seekoff_FUN_0060ba80
// Address: 0060ba80
// Address Range: [[0060ba80, 0060bb5e]]
// Convention: __watcallStack
// Signature: int crt_strstream.cpp_strstreambuf_seekoff_FUN_0060ba80(strstreambuf * this_ptr, int seek_distance, int seek_mode, int flags)
// Function calls:
//   crt_iostream.cpp_validateBufferSeek_FUN_0060d725

#include "nocturne.h"

int __watcallStack
crt_strstream_cpp_strstreambuf_seekoff_FUN_0060ba80
          (strstreambuf *this_ptr,int seek_distance,int seek_mode,int flags)

{
  int iVar1;
  char *pcVar2;
  int in_ECX;
  char *pcVar3;
  
  if (((flags & 3U) != 0) && ((seek_mode != 1 || ((flags & 3U) != 3)))) {
    if ((flags & 1U) != 0) {
      pcVar3 = (this_ptr->streambuf).__put_ptr;
      if ((pcVar3 == (char *)0x0) || (pcVar3 < (this_ptr->streambuf).__get_end)) {
        pcVar3 = (this_ptr->streambuf).__get_end;
      }
      in_ECX = crt_iostream_cpp_validateBufferSeek_FUN_0060d725
                         (seek_distance,seek_mode,(this_ptr->streambuf).__get_base,
                          (this_ptr->streambuf).__get_ptr,(this_ptr->streambuf).__get_end,pcVar3);
      if (in_ECX != -1) {
        pcVar3 = (this_ptr->streambuf).__get_end;
        pcVar2 = (this_ptr->streambuf).__get_base + in_ECX;
        if (pcVar3 < pcVar2) {
          pcVar3 = (this_ptr->streambuf).__put_end;
        }
        (this_ptr->streambuf).__get_ptr = pcVar2;
        (this_ptr->streambuf).__get_end = pcVar3;
      }
    }
    if (((flags & 2U) != 0) &&
       (pcVar3 = (this_ptr->streambuf).__put_end,
       in_ECX = crt_iostream_cpp_validateBufferSeek_FUN_0060d725
                          (seek_distance,seek_mode,(this_ptr->streambuf).__put_base,
                           (this_ptr->streambuf).__put_ptr,pcVar3,pcVar3), in_ECX != -1)) {
      (this_ptr->streambuf).__put_ptr = (this_ptr->streambuf).__put_base;
      (this_ptr->streambuf).__put_end = (this_ptr->streambuf).__put_end;
      iVar1._0_2_ = this_ptr->__minbuf_size;
      iVar1._2_1_ = this_ptr->__bit_flags;
      iVar1._3_1_ = this_ptr->padding;
      (this_ptr->streambuf).__put_ptr = (this_ptr->streambuf).__put_ptr + in_ECX;
      if (iVar1 < in_ECX) {
        this_ptr->__minbuf_size = (short)in_ECX;
        this_ptr->__bit_flags = (char)((uint)in_ECX >> 0x10);
        this_ptr->padding = (char)((uint)in_ECX >> 0x18);
      }
    }
    return in_ECX;
  }
  return -1;
}


// Assembly code:
// 0060ba80: PUSH EBX
//   Label: crt_strstream.cpp_strstreambuf_seekoff_FUN_0060ba80
// 0060ba81: PUSH ESI
// 0060ba82: PUSH EDI
// 0060ba83: PUSH EBP
// 0060ba84: MOV EBP,ESP
// 0060ba86: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0060ba89: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0060ba8c: AND EDX,0x3
// 0060ba8f: MOV dword ptr [EBP + 0x20],EDX
//   XREF to: Stack[0x10] (WRITE)
// 0060ba92: JZ 0x0060bb45
//   XREF to: 0060bb45 (CONDITIONAL_JUMP)
// 0060ba98: CMP dword ptr [EBP + 0x1c],0x1
//   XREF to: Stack[0xc] (READ)
// 0060ba9c: JNZ 0x0060baa7
//   XREF to: 0060baa7 (CONDITIONAL_JUMP)
// 0060ba9e: CMP EDX,0x3
// 0060baa1: JZ 0x0060bb45
//   XREF to: 0060bb45 (CONDITIONAL_JUMP)
// 0060baa7: TEST byte ptr [EBP + 0x20],0x1
//   Label: LAB_0060baa7
//   XREF to: Stack[0x10] (READ)
// 0060baab: JZ 0x0060baf6
//   XREF to: 0060baf6 (CONDITIONAL_JUMP)
// 0060baad: MOV EAX,dword ptr [EBX + 0x20]
// 0060bab0: MOV EDX,EAX
// 0060bab2: TEST EAX,EAX
// 0060bab4: JNZ 0x0060bb4f
//   XREF to: 0060bb4f (CONDITIONAL_JUMP)
// 0060baba: MOV EDX,dword ptr [EBX + 0x10]
//   Label: LAB_0060baba
// 0060babd: PUSH EDX
//   Label: LAB_0060babd
// 0060babe: MOV EAX,dword ptr [EBX + 0x10]
// 0060bac1: PUSH EAX
// 0060bac2: MOV EAX,dword ptr [EBX + 0x14]
// 0060bac5: PUSH EAX
// 0060bac6: MOV EAX,dword ptr [EBX + 0xc]
// 0060bac9: PUSH EAX
// 0060baca: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0060bacd: PUSH EDX
// 0060bace: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060bad1: PUSH ECX
// 0060bad2: CALL crt_iostream.cpp_validateBufferSeek_FUN_0060d725
//   XREF to: 0060d725 (UNCONDITIONAL_CALL)
// 0060bad7: ADD ESP,0x18
// 0060bada: MOV ECX,EAX
// 0060badc: CMP EAX,-0x1
// 0060badf: JZ 0x0060baf6
//   XREF to: 0060baf6 (CONDITIONAL_JUMP)
// 0060bae1: MOV EDX,dword ptr [EBX + 0xc]
// 0060bae4: MOV ESI,dword ptr [EBX + 0x10]
// 0060bae7: ADD EAX,EDX
// 0060bae9: CMP EAX,ESI
// 0060baeb: JBE 0x0060baf0
//   XREF to: 0060baf0 (CONDITIONAL_JUMP)
// 0060baed: MOV ESI,dword ptr [EBX + 0x1c]
// 0060baf0: MOV dword ptr [EBX + 0x14],EAX
//   Label: LAB_0060baf0
// 0060baf3: MOV dword ptr [EBX + 0x10],ESI
// 0060baf6: TEST byte ptr [EBP + 0x20],0x2
//   Label: LAB_0060baf6
//   XREF to: Stack[0x10] (READ)
// 0060bafa: JZ 0x0060bb3e
//   XREF to: 0060bb3e (CONDITIONAL_JUMP)
// 0060bafc: MOV EAX,dword ptr [EBX + 0x1c]
// 0060baff: PUSH EAX
// 0060bb00: PUSH EAX
// 0060bb01: MOV EAX,dword ptr [EBX + 0x20]
// 0060bb04: PUSH EAX
// 0060bb05: MOV EAX,dword ptr [EBX + 0x18]
// 0060bb08: PUSH EAX
// 0060bb09: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0060bb0c: PUSH ESI
// 0060bb0d: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060bb10: PUSH EDI
// 0060bb11: CALL crt_iostream.cpp_validateBufferSeek_FUN_0060d725
//   XREF to: 0060d725 (UNCONDITIONAL_CALL)
// 0060bb16: ADD ESP,0x18
// 0060bb19: MOV ECX,EAX
// 0060bb1b: CMP EAX,-0x1
// 0060bb1e: JZ 0x0060bb3e
//   XREF to: 0060bb3e (CONDITIONAL_JUMP)
// 0060bb20: MOV EDX,dword ptr [EBX + 0x18]
// 0060bb23: MOV dword ptr [EBX + 0x20],EDX
// 0060bb26: MOV ESI,dword ptr [EBX + 0x1c]
// 0060bb29: MOV EDX,dword ptr [EBX + 0x20]
// 0060bb2c: MOV dword ptr [EBX + 0x1c],ESI
// 0060bb2f: ADD EDX,EAX
// 0060bb31: MOV ESI,dword ptr [EBX + 0x38]
// 0060bb34: MOV dword ptr [EBX + 0x20],EDX
// 0060bb37: CMP EAX,ESI
// 0060bb39: JLE 0x0060bb3e
//   XREF to: 0060bb3e (CONDITIONAL_JUMP)
// 0060bb3b: MOV dword ptr [EBX + 0x38],EAX
// 0060bb3e: MOV EAX,ECX
//   Label: LAB_0060bb3e
// 0060bb40: POP EBP
// 0060bb41: POP EDI
// 0060bb42: POP ESI
// 0060bb43: POP EBX
// 0060bb44: RET
// 0060bb45: MOV EAX,0xffffffff
//   Label: LAB_0060bb45
// 0060bb4a: POP EBP
// 0060bb4b: POP EDI
// 0060bb4c: POP ESI
// 0060bb4d: POP EBX
// 0060bb4e: RET
// 0060bb4f: MOV ECX,dword ptr [EBX + 0x10]
//   Label: LAB_0060bb4f
// 0060bb52: CMP EAX,ECX
// 0060bb54: JC 0x0060baba
//   XREF to: 0060baba (CONDITIONAL_JUMP)
// 0060bb5a: JMP 0x0060babd
//   XREF to: 0060babd (UNCONDITIONAL_JUMP)
