// Name: crt_iostream.cpp_validateBufferSeek_FUN_0060d725
// Address: 0060d725
// Address Range: [[0060d725, 0060d78c]]
// Convention: __watcallStack
// Signature: int crt_iostream.cpp_validateBufferSeek_FUN_0060d725(int seek_distance, int whence, char * buffer_start, char * current_ptr, char * buffer_end1, char * buffer_end2)
// Cross-references:
//   crt_strstream.cpp_strstreambuf_seekoff_FUN_0060ba80 (0060ba80) at 0060bb11 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __watcallStack
crt_iostream_cpp_validateBufferSeek_FUN_0060d725
          (int seek_distance,int whence,char *buffer_start,char *current_ptr,char *buffer_end1,
          char *buffer_end2)

{
  int iVar1;
  
  if (whence == 0) {
    if (seek_distance <= (int)buffer_end2 - (int)buffer_start) {
      return seek_distance;
    }
  }
  else if (whence == 2) {
    iVar1 = (int)buffer_end1 - (int)buffer_start;
    if (-iVar1 == seek_distance || -seek_distance < iVar1) {
LAB_0060d75a:
      return iVar1 + seek_distance;
    }
  }
  else if (whence == 1) {
    iVar1 = (int)current_ptr - (int)buffer_start;
    if (seek_distance < 0) {
      if (-iVar1 == seek_distance || -seek_distance < iVar1) goto LAB_0060d75a;
    }
    else {
      if (seek_distance < 1) {
        return iVar1;
      }
      if (seek_distance <= (int)buffer_end2 - (int)current_ptr) {
        return seek_distance + iVar1;
      }
    }
  }
  return -1;
}


// Assembly code:
// 0060d725: PUSH EBX
//   Label: crt_iostream.cpp_validateBufferSeek_FUN_0060d725
// 0060d726: PUSH EDI
// 0060d727: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060d72b: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0060d72f: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 0060d733: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0060d737: SUB EDX,EBX
// 0060d739: TEST ECX,ECX
// 0060d73b: JNZ 0x0060d749
//   XREF to: 0060d749 (CONDITIONAL_JUMP)
// 0060d73d: CMP EAX,EDX
// 0060d73f: JLE 0x0060d746
//   XREF to: 0060d746 (CONDITIONAL_JUMP)
// 0060d741: MOV EAX,0xffffffff
//   Label: LAB_0060d741
// 0060d746: POP EDI
//   Label: LAB_0060d746
// 0060d747: POP EBX
// 0060d748: RET
// 0060d749: CMP ECX,0x2
//   Label: LAB_0060d749
// 0060d74c: JNZ 0x0060d761
//   XREF to: 0060d761 (CONDITIONAL_JUMP)
// 0060d74e: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 0060d752: NEG EAX
// 0060d754: SUB EDX,EBX
// 0060d756: CMP EAX,EDX
// 0060d758: JG 0x0060d741
//   XREF to: 0060d741 (CONDITIONAL_JUMP)
// 0060d75a: SUB EDX,EAX
//   Label: LAB_0060d75a
// 0060d75c: MOV EAX,EDX
//   Label: LAB_0060d75c
// 0060d75e: POP EDI
// 0060d75f: POP EBX
// 0060d760: RET
// 0060d761: CMP ECX,0x1
//   Label: LAB_0060d761
// 0060d764: JNZ 0x0060d741
//   XREF to: 0060d741 (CONDITIONAL_JUMP)
// 0060d766: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0060d76a: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 0060d76e: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0060d772: SUB EDX,EBX
// 0060d774: SUB ECX,EDI
// 0060d776: TEST EAX,EAX
// 0060d778: JL 0x0060d785
//   XREF to: 0060d785 (CONDITIONAL_JUMP)
// 0060d77a: JLE 0x0060d75c
//   XREF to: 0060d75c (CONDITIONAL_JUMP)
// 0060d77c: CMP EAX,ECX
// 0060d77e: JG 0x0060d741
//   XREF to: 0060d741 (CONDITIONAL_JUMP)
// 0060d780: ADD EAX,EDX
// 0060d782: POP EDI
// 0060d783: POP EBX
// 0060d784: RET
// 0060d785: NEG EAX
//   Label: LAB_0060d785
// 0060d787: CMP EAX,EDX
// 0060d789: JLE 0x0060d75a
//   XREF to: 0060d75a (CONDITIONAL_JUMP)
// 0060d78b: JMP 0x0060d741
//   XREF to: 0060d741 (UNCONDITIONAL_JUMP)
