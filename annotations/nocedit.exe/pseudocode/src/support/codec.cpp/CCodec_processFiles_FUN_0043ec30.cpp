// Name: support_codec.cpp_CCodec_processFiles_FUN_0043ec30
// Address: 0043ec30
// Address Range: [[0043ec30, 0043ed41]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processFiles_FUN_0043ec30 (CCodec *this_ptr,char *input_file_path,char *output_file_path)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_processFiles_FUN_0043ec30
          (CCodec *this_ptr,char *input_file_path,char *output_file_path)

{
  int iVar1;
  void *in_stack_fffffef0;
  _FILE _Stack_c8;
  int local_ac;
  byte local_90 [88];
  _FILE _Stack_38;
  
  crt_fstream_cpp_ifstream_constructor_FUN_005ff664
            ((ifstream *)&stack0xfffffef0,0,(int)input_file_path,(char *)0x101,
             g_DefaultStreamBufferSize);
  if (local_ac == 0) {
    crt_fstream_cpp_ofstream_constructor_FUN_005ff710
              ((ofstream *)local_90,0,(int)output_file_path,0x112,(char *)g_DefaultStreamBufferSize,
               (SIZE_T)in_stack_fffffef0);
    if (_Stack_38._link == (streambuf *)0x0) {
      (*this_ptr->vtable->init)(this_ptr);
      iVar1 = (*this_ptr->vtable->process)
                        (this_ptr,&_Stack_c8,(int)&stack0xfffffff0,(_FILE *)(local_90 + 0x48));
      if (iVar1 != 0) {
        (*this_ptr->vtable->finalize)(this_ptr,&_Stack_38);
      }
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc((ofstream *)local_90,0);
    }
    else {
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc((ofstream *)local_90,0);
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  crt_fstream_cpp_ifstream_dtor_FUN_005ff856((ifstream *)&stack0xfffffef0,0);
  return iVar1;
}
