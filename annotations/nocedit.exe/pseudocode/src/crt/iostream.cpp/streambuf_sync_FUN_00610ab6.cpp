// Name: crt_iostream.cpp_streambuf_sync_FUN_00610ab6
// Address: 00610ab6
// Address Range: [[00610ab6, 00610ad6]]
// Convention: __watcallStack
// Signature: int crt_iostream.cpp_streambuf_sync_FUN_00610ab6(streambuf * streambuf_ptr)

#include "nocturne.h"

int __watcallStack crt_iostream_cpp_streambuf_sync_FUN_00610ab6(streambuf *streambuf_ptr)

{
  if ((streambuf_ptr->__get_end <= streambuf_ptr->__get_ptr) &&
     (streambuf_ptr->__put_ptr <= streambuf_ptr->__put_base)) {
    return 0;
  }
  return -1;
}


// Assembly code:
// 00610ab6: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_iostream.cpp_streambuf_sync_FUN_00610ab6
//   XREF to: Stack[0x4] (READ)
// 00610aba: MOV EDX,dword ptr [EAX + 0x14]
// 00610abd: MOV ECX,dword ptr [EAX + 0x10]
// 00610ac0: CMP EDX,ECX
// 00610ac2: JC 0x00610ace
//   XREF to: 00610ace (CONDITIONAL_JUMP)
// 00610ac4: MOV EDX,dword ptr [EAX + 0x20]
// 00610ac7: MOV EAX,dword ptr [EAX + 0x18]
// 00610aca: CMP EDX,EAX
// 00610acc: JBE 0x00610ad4
//   XREF to: 00610ad4 (CONDITIONAL_JUMP)
// 00610ace: MOV EAX,0xffffffff
//   Label: LAB_00610ace
// 00610ad3: RET
// 00610ad4: XOR EAX,EAX
//   Label: LAB_00610ad4
// 00610ad6: RET
