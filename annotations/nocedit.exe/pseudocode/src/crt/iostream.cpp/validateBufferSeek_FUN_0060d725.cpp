// Name: crt_iostream.cpp_validateBufferSeek_FUN_0060d725
// Address: 0060d725
// Address Range: [[0060d725, 0060d78c]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_iostream_cpp_validateBufferSeek_FUN_0060d725(int seek_distance,int whence,char *buffer_start,char *current_ptr,char *buffer_end1,char *buffer_end2)

#include "nocturne.h"

int __watcallStack crt_iostream_cpp_validateBufferSeek_FUN_0060d725(int seek_distance,int whence,char *buffer_start,char *current_ptr,char *buffer_end1,char *buffer_end2)

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
