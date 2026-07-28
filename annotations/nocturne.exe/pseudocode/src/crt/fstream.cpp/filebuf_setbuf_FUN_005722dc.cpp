// Name: crt_fstream.cpp_filebuf_setbuf_FUN_005722dc
// Address: 005722dc
// Address Range: [[005722dc, 00572337]]
// Convention: unknown
// Signature: streambuf * crt_fstream_cpp_filebuf_setbuf_FUN_005722dc(streambuf *param_1,void *param_2,int param_3)

#include "nocturne.h"

streambuf * crt_fstream_cpp_filebuf_setbuf_FUN_005722dc(streambuf *param_1,void *param_2,int param_3)

{
  void *buffer_end;
  
  if ((param_1[1].__reserve_base != (char *)0xffffffff) && (param_1->__reserve_base != (char *)0x0))
  {
    return (streambuf *)0x0;
  }
  if ((param_2 == (void *)0x0) || (param_3 < 1)) {
    buffer_end = (void *)0x0;
    param_2 = (void *)0x0;
  }
  else {
    if (param_3 < 5) {
      crt_iostream_cpp_setBuffer_FUN_00571df8(param_1,(void *)0x0,(void *)0x0,0);
      return (streambuf *)0x0;
    }
    buffer_end = (void *)((int)param_2 + param_3);
  }
  crt_iostream_cpp_setBuffer_FUN_00571df8(param_1,param_2,buffer_end,0);
  return param_1;
}
