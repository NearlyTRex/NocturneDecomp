// Name: crt_stdio.c_stream_valid_FUN_00608cd1
// Address: 00608cd1
// Address Range: [[00608cd1, 00608d19]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_stream_valid_FUN_00608cd1(_FILE *stream,int operation_type)

#include "nocturne.h"

int __watcallStack stream_valid(_FILE *stream,int operation_type)

{
  int iVar1;
  
  if ((((operation_type != 0) ||
       ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 1) == 0)) &&
      (*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0)) &&
     (*(int *)((int)&stream->_link + *(int *)(stream->_ptr + 4)) == 0)) {
    return 1;
  }
  iVar1 = stream_setup(stream,operation_type);
  return iVar1;
}
