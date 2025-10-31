// Name: crt_strstream.cpp_strstreambuf_setbuf_FUN_0060ba70
// Address: 0060ba70
// Address Range: [[0060ba70, 0060ba7f]]
// Convention: __watcallStack
// Signature: strstreambuf * crt_strstream.cpp_strstreambuf_setbuf_FUN_0060ba70(strstreambuf * this_ptr, char * ignored_buffer, int allocation_size)

#include "nocturne.h"

strstreambuf * __watcallStack
crt_strstream_cpp_strstreambuf_setbuf_FUN_0060ba70
          (strstreambuf *this_ptr,char *ignored_buffer,int allocation_size)

{
  if (0 < allocation_size) {
    this_ptr->__allocation_size = allocation_size;
  }
  return this_ptr;
}


// Assembly code:
// 0060ba70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_strstream.cpp_strstreambuf_setbuf_FUN_0060ba70
//   XREF to: Stack[0x4] (READ)
// 0060ba74: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0060ba78: TEST EDX,EDX
// 0060ba7a: JLE 0x0060ba7f
//   XREF to: 0060ba7f (CONDITIONAL_JUMP)
// 0060ba7c: MOV dword ptr [EAX + 0x34],EDX
// 0060ba7f: RET
//   Label: LAB_0060ba7f
