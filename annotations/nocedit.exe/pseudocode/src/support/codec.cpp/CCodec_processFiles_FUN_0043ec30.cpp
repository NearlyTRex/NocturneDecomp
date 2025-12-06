// Name: support_codec.cpp_CCodec_processFiles_FUN_0043ec30
// Address: 0043ec30
// Address Range: [[0043ec30, 0043ed41]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CCodec_processFiles_FUN_0043ec30(CCodec * this_ptr, char * input_file_path, char * output_file_path)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_processFiles_FUN_0043ec30
          (CCodec *this_ptr,char *input_file_path,char *output_file_path)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  void *d2;
  CCodec *in_stack_fffffef4;
  char *in_stack_fffffef8;
  char *in_stack_fffffefc;
  char *in_stack_ffffff00;
  CCodec *pCStack_a8;
  byte local_90 [12];
  FILE FStack_84;
  FILE aFStack_60 [2];
  int iStack_28;
  
  crt_fstream_cpp_ifstream_constructor_FUN_005ff664
            ((ifstream *)&stack0xfffffef0,0,(int)input_file_path,(char *)0x101,
             g_DefaultStreamBufferSize);
  if (pCStack_a8 == (CCodec *)0x0) {
    d2 = (void *)g_DefaultStreamBufferSize;
    crt_fstream_cpp_ofstream_constructor_FUN_005ff710
              ((ofstream *)(local_90 + 4),0,in_stack_00000010,0x112,
               (char *)g_DefaultStreamBufferSize,(SIZE_T)in_stack_fffffef4);
    if (iStack_28 == 0) {
      pCStack_a8 = this_ptr;
      (*this_ptr->vtable->init)(this_ptr);
      aFStack_60[0]._bufsize = 0x7fffffff;
      iVar1 = (*this_ptr->vtable->process)
                        (this_ptr,(FILE *)&stack0xfffffefc,(int)&aFStack_60[0]._bufsize,&FStack_84);
      if (iVar1 != 0) {
        (*this_ptr->vtable->finalize)(this_ptr,aFStack_60);
      }
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
                ((ofstream *)local_90,0,(uint)d2,(uint)pCStack_a8,(uint)in_stack_fffffef8);
    }
    else {
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
                ((ofstream *)(local_90 + 8),0,(uint)in_stack_fffffef8,(uint)in_stack_fffffefc,
                 (uint)in_stack_ffffff00);
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
    pCStack_a8 = in_stack_fffffef4;
  }
  crt_fstream_cpp_ifstream_dtor_FUN_005ff856
            ((ifstream *)&stack0xfffffef4,0,(uint)pCStack_a8,(uint)in_stack_fffffef8,
             (uint)in_stack_fffffefc);
  return iVar1;
}
