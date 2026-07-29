// Name: support_codec.cpp_CCodec_processFiles_FUN_004391b0
// Address: 004391b0
// Address Range: [[004391b0, 004392c1]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processFiles_FUN_004391b0(CCodec *this_ptr,char *input_file_path,char *output_file_path)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processFiles_FUN_004391b0(CCodec *this_ptr,char *input_file_path,char *output_file_path)

{
  int iVar1;
  byte local_110 [68];
  byte auStack_cc [32];
  int local_ac;
  byte local_90 [68];
  byte auStack_4c [28];
  int local_30;
  int iStack_14;
  
  crt_fstream_cpp_ifstream_ctor_FUN_00565072(local_110,0,input_file_path,0x101,0x000001A4);
  if (local_ac == 0) {
    crt_fstream_cpp_ofstream_ctor_FUN_0056511e(local_90,0,output_file_path,0x112,0x000001A4);
    if (local_30 == 0) {
      (*this_ptr->vtable->init)(this_ptr);
      iStack_14 = 0x7fffffff;
      iVar1 = (*this_ptr->vtable->process)(this_ptr,auStack_cc,&iStack_14,auStack_4c);
      if (iVar1 != 0) {
        (*this_ptr->vtable->finalize)(this_ptr,auStack_4c);
      }
      crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_90,0);
    }
    else {
      crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_90,0);
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_110,0);
  return iVar1;
}
