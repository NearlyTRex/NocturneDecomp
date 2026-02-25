// Name: support_codec.cpp_CCodec_processFiles_FUN_0043ec30
// Address: 0043ec30
// Address Range: [[0043ec30, 0043ed41]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processFiles_FUN_0043ec30(CCodec *this_ptr,char *input_file_path,char *output_file_path)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processFiles_FUN_0043ec30(CCodec *this_ptr,char *input_file_path,char *output_file_path)

{
  int iVar1;
  ifstream local_110;
  ofstream local_90;
  int iStack_14;
  
  crt_fstream_cpp_ifstream_ctor_FUN_005ff664
            (&local_110,0,input_file_path,0x101,g_DefaultStreamBufferSize);
  if (local_110._ios.__enabled_exceptions == 0) {
    crt_fstream_cpp_ofstream_ctor_FUN_005ff710
              (&local_90,0,output_file_path,0x112,g_DefaultStreamBufferSize);
    if (local_90._ios.__enabled_exceptions == 0) {
      (*this_ptr->vtable->init)(this_ptr);
      iStack_14 = 0x7fffffff;
      iVar1 = (*this_ptr->vtable->process)
                        (this_ptr,&local_110._istream_core,&iStack_14,&local_90._ostream_core);
      if (iVar1 != 0) {
        (*this_ptr->vtable->finalize)(this_ptr,&local_90._ostream_core);
      }
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(&local_90,0);
    }
    else {
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(&local_90,0);
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  crt_fstream_cpp_ifstream_dtor_FUN_005ff856(&local_110,0);
  return iVar1;
}
