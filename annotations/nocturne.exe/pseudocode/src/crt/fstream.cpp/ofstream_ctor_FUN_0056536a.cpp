// Name: crt_fstream.cpp_ofstream_ctor_FUN_0056536a
// Address: 0056536a
// Address Range: [[0056536a, 005653d5]]
// Convention: __cdecl
// Signature: ofstream * __cdecl crt_fstream_cpp_ofstream_ctor_FUN_0056536a(void *this_ptr,int c1)

#include "nocturne.h"

ofstream * __cdecl crt_fstream_cpp_ofstream_ctor_FUN_0056536a(void *this_ptr,int c1)

{
  int iVar1;
  void *pvVar2;
  fstreambase *pfVar3;
  int iVar4;
  ofstream *poVar5;
  ios *piVar6;
  
  if ((c1 & 1U) == 0) {
    *(byte **)this_ptr = &DAT_005a4810;
    *(byte **)((int)this_ptr + 0x44) = &DAT_005a4818;
    piVar6 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)((int)this_ptr + 0x50));
    this_ptr = &piVar6[-2].__format_flags;
  }
  pfVar3 = crt_fstream_cpp_fstreambase_ctor_FUN_0056b896(this_ptr,1);
  iVar4 = crt_iostream_cpp_ostream_ctor_FUN_0056b4a9(pfVar3->padding_0x44,1);
  poVar5 = (ofstream *)(iVar4 + -0x44);
  iVar1 = *(int *)((int)(poVar5->_fstreambase_core).layout_info + 4);
  *(int *)((poVar5->_fstreambase_core)._filebuf.__unbuffered_get_area + iVar1 + -0x3c) = iVar1;
  *(byte ***)(iVar4 + -4) = &PTR_crt_fstream_cpp_ofstream_dtor_FUN_005651ca_005a4824;
  pvVar2 = (poVar5->_fstreambase_core).layout_info;
  *(byte ***)(iVar4 + 4) = &PTR_crt_unknown_c_FUN_0056519c_005a482c;
  *(byte ***)
   ((poVar5->_fstreambase_core)._filebuf.__unbuffered_get_area + *(int *)((int)pvVar2 + 4) + -0x10)
       = &PTR_crt_unknown_c_FUN_005651b2_005a4834;
  return poVar5;
}
