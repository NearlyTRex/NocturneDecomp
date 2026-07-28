// Name: crt_iostream.cpp_validateBufferSeek_FUN_00571e75
// Address: 00571e75
// Address Range: [[00571e75, 00571edc]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_iostream_cpp_validateBufferSeek_FUN_00571e75(int seek_distance,int whence,char *buffer_start,char *current_ptr,char *buffer_end1,char *buffer_end2)

#include "nocturne.h"

int __watcallStack crt_iostream_cpp_validateBufferSeek_FUN_00571e75(int seek_distance,int whence,char *buffer_start,char *current_ptr,char *buffer_end1,char *buffer_end2)

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
LAB_00571eaa:
      return iVar1 + seek_distance;
    }
  }
  else if (whence == 1) {
    iVar1 = (int)current_ptr - (int)buffer_start;
    if (seek_distance < 0) {
      if (-iVar1 == seek_distance || -seek_distance < iVar1) goto LAB_00571eaa;
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
