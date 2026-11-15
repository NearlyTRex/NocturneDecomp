// Name: support_codec.cpp_CCodec_processFiles_FUN_00442e10
// Address: 00442e10
// Address Range: [[00442e10, 00442ef2]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processFiles_FUN_00442e10(CCodec *this_ptr,char *input_file_path,char *output_file_path)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processFiles_FUN_00442e10(CCodec *this_ptr,char *input_file_path,char *output_file_path)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  int iVar3;
  CInStreamFile CStack_38;
  COutStreamFile CStack_c;
  
  support_trstream_cpp_CInStreamFile_ctorOpen_FUN_005a0930(&CStack_38,input_file_path,1);
  bVar1 = support_trstream_cpp_CInStreamFile_isOpen_FUN_005a0d70(&CStack_38);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    iVar2 = 0;
    goto LAB_00442eb5;
  }
  support_trstream_cpp_COutStreamFile_ctorOpen_FUN_005a17f0
            (&CStack_c,output_file_path,&DAT_005d6a55);
  bVar1 = support_trstream_cpp_COutStreamFile_isOpen_FUN_005a1990(&CStack_c);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&CStack_c,0);
    support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&CStack_38,0);
    return 0;
  }
  (**(code **)((int)this_ptr->vtable + 4))(this_ptr);
  iVar2 = (**(code **)((int)this_ptr->vtable + 8))(this_ptr,&CStack_38,&CStack_c);
  if (iVar2 == 1) {
    iVar3 = (**(code **)((int)this_ptr->vtable + 0xc))(this_ptr,&CStack_c);
    iVar2 = 1;
    if (iVar3 != 1) goto LAB_00442e9b;
  }
  else {
LAB_00442e9b:
    iVar2 = 0;
  }
  support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&CStack_c,0);
LAB_00442eb5:
  support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&CStack_38,0);
  return iVar2;
}
