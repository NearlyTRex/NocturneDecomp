// Name: support_codec.cpp_CCodec_processFiles_FUN_0043ec30
// Address: 0043ec30
// MANUAL RECONSTRUCTION
// Address Range: [[0043ec30, 0043ed41]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processFiles_FUN_0043ec30(CCodec *this_ptr,char *input_file_path,char *output_file_path)

#include "nocturne.h"
#include "stream_compat.h"

int __cdecl support_codec_cpp_CCodec_processFiles_FUN_0043ec30(CCodec *this_ptr,char *input_file_path,char *output_file_path)

{
  int iVar1;
  int iStack_14;

  std::ifstream ifs(input_file_path, std::ios::in | std::ios::binary);
  if (ifs.fail()) {
    return 0;
  }
  std::ofstream ofs(output_file_path, std::ios::out | std::ios::binary | std::ios::trunc);
  if (ofs.fail()) {
    return 0;
  }
  (*this_ptr->vtable->init)(this_ptr);
  iStack_14 = 0x7fffffff;
  iVar1 = (*this_ptr->vtable->process)
                    (this_ptr,watcom_istream_from(ifs),&iStack_14,watcom_ostream_from(ofs));
  if (iVar1 != 0) {
    (*this_ptr->vtable->finalize)(this_ptr,watcom_ostream_from(ofs));
  }
  return iVar1;
}
