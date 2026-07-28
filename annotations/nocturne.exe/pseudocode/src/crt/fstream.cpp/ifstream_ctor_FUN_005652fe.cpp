// Name: crt_fstream.cpp_ifstream_ctor_FUN_005652fe
// Address: 005652fe
// Address Range: [[005652fe, 00565369]]
// Convention: __cdecl
// Signature: ifstream * __cdecl crt_fstream_cpp_ifstream_ctor_FUN_005652fe(void *this_ptr,int c1)

#include "nocturne.h"

ifstream * __cdecl crt_fstream_cpp_ifstream_ctor_FUN_005652fe(void *this_ptr,int c1)

{
  int iVar1;
  void *pvVar2;
  fstreambase *pfVar3;
  int iVar4;
  ifstream *piVar5;
  ios *piVar6;
  
  if ((c1 & 1U) == 0) {
    *(byte **)this_ptr = &DAT_005a47a4;
    *(byte **)((int)this_ptr + 0x44) = &DAT_005a47ac;
    piVar6 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)((int)this_ptr + 0x54));
    this_ptr = &piVar6[-2].__tied_stream;
  }
  pfVar3 = crt_fstream_cpp_fstreambase_ctor_FUN_0056b896(this_ptr,1);
  iVar4 = crt_iostream_cpp_istream_ctor_FUN_0056b67d(pfVar3->padding_0x44,1);
  piVar5 = (ifstream *)(iVar4 + -0x44);
  iVar1 = *(int *)((int)(piVar5->_fstreambase_core).layout_info + 4);
  *(int *)((piVar5->_fstreambase_core)._filebuf.__unbuffered_get_area + iVar1 + -0x3c) = iVar1;
  *(byte ***)(iVar4 + -4) = &PTR_crt_fstream_cpp_ifstream_dtor_FUN_00565264_005a47b8;
  pvVar2 = (piVar5->_fstreambase_core).layout_info;
  *(byte ***)(iVar4 + 8) = &PTR_crt_unknown_c_FUN_005650f0_005a47c0;
  *(byte ***)
   ((piVar5->_fstreambase_core)._filebuf.__unbuffered_get_area + *(int *)((int)pvVar2 + 4) + -0x10)
       = &PTR_crt_unknown_c_FUN_00565106_005a47c8;
  return piVar5;
}
