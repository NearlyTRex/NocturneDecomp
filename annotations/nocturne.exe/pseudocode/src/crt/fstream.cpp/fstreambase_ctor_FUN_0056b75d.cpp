// Name: crt_fstream.cpp_fstreambase_ctor_FUN_0056b75d
// Address: 0056b75d
// Address Range: [[0056b75d, 0056b7f7]]
// Convention: unknown
// Signature: char * crt_fstream_cpp_fstreambase_ctor_FUN_0056b75d(int *param_1,byte param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 )

#include "nocturne.h"

char * crt_fstream_cpp_fstreambase_ctor_FUN_0056b75d(int *param_1,byte param_2,uint param_3,uint param_4,uint param_5 )

{
  char *pcVar1;
  ios *piVar2;
  filebuf *buffer_ptr;
  int iVar3;
  
  if ((param_2 & 1) == 0) {
    *param_1 = (int)&DAT_005a4a18;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)(param_1 + 0x12));
    param_1 = &piVar2[-2].__enabled_exceptions;
  }
  buffer_ptr = crt_fstream_cpp_filebuf_ctor_FUN_0057042d((filebuf *)(param_1 + 1));
  pcVar1 = buffer_ptr[-1].__unbuffered_get_area + 4;
  *(int *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4) + -4) = *(int *)(*(int *)pcVar1 + 4);
  iVar3 = *(int *)pcVar1;
  buffer_ptr[1]._streambuf.__b_lock = &PTR_crt_fstream_cpp_fstreambase_dtor_FUN_0056b810_005a4a24;
  *(byte ***)(buffer_ptr->__unbuffered_get_area + *(int *)(iVar3 + 4) + -0x10) =
       &PTR_FUN_005a4a2c;
  crt_iostream_cpp_streambuf_initBuffer_FUN_0056ff2a
            ((streambuf *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4)),(char *)buffer_ptr);
  iVar3 = FUN_0056cd9b(buffer_ptr,param_3,param_4,param_5);
  if (iVar3 == 0) {
    reportStreamError
              ((FileEmbeddedData *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4)),3);
  }
  return pcVar1;
}
