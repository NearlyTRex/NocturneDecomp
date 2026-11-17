// Name: support_codec.cpp_CCodec_processFiles_FUN_004340f0
// Address: 004340f0
// Address Range: [[004340f0, 004341d0]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processFiles_FUN_004340f0(CCodec *this_ptr,char *input_file_path,char *output_file_path)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processFiles_FUN_004340f0(CCodec *this_ptr,char *input_file_path,char *output_file_path)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  int iVar3;
  CInStreamFile CStack_34;
  COutStreamFile CStack_c;
  
  support_trstream_cpp_CInStreamFile_ctorOpen_FUN_0057cdb0(&CStack_34,input_file_path);
  bVar1 = support_trstream_cpp_CInStreamFile_isOpen_FUN_0057d130(&CStack_34);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    iVar2 = 0;
    goto LAB_00434193;
  }
  support_trstream_cpp_COutStreamFile_ctorOpen_FUN_0057dba0
            (&CStack_c,output_file_path,"wb");
  bVar1 = support_trstream_cpp_COutStreamFile_isOpen_FUN_0057dd40(&CStack_c);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&CStack_c,0);
    support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&CStack_34,0);
    return 0;
  }
  (**(code **)((int)this_ptr->vtable + 4))(this_ptr);
  iVar2 = (**(code **)((int)this_ptr->vtable + 8))(this_ptr,&CStack_34,&CStack_c);
  if (iVar2 == 1) {
    iVar3 = (**(code **)((int)this_ptr->vtable + 0xc))(this_ptr,&CStack_c);
    iVar2 = 1;
    if (iVar3 != 1) goto LAB_00434179;
  }
  else {
LAB_00434179:
    iVar2 = 0;
  }
  support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&CStack_c,0);
LAB_00434193:
  support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&CStack_34,0);
  return iVar2;
}
