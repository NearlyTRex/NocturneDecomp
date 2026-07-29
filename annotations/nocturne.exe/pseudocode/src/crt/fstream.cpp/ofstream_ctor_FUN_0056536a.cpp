// Name: crt_fstream.cpp_ofstream_ctor_FUN_0056536a
// Address: 0056536a
// Address Range: [[0056536a, 005653d5]]
// Convention: __cdecl
// Signature: ofstream * __cdecl crt_fstream_cpp_ofstream_ctor_FUN_0056536a(void *this_ptr,int c1)

#include "nocturne.h"

ofstream * __cdecl crt_fstream_cpp_ofstream_ctor_FUN_0056536a(void *this_ptr,int c1)

{
  int iVar1;
  fstreambase *pfVar2;
  _ostream *p_Var3;
  char *pcVar4;
  ios *piVar5;
  
  if ((c1 & 1U) == 0) {
    *(byte **)this_ptr = &DAT_005a4810;
    *(byte **)((int)this_ptr + 0x44) = &DAT_005a4818;
    piVar5 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)((int)this_ptr + 0x50));
    this_ptr = &piVar5[-2].__format_flags;
  }
  pfVar2 = crt_fstream_cpp_fstreambase_ctor_FUN_0056b896(this_ptr,1);
  p_Var3 = crt_iostream_cpp_ostream_ctor_FUN_0056b4a9((_ostream *)pfVar2->padding_0x44,1);
  pcVar4 = &p_Var3[-2]._ios.__fill_character;
  *(int *)(pcVar4 + *(int *)(*(int *)pcVar4 + 4) + -4) = *(int *)(*(int *)pcVar4 + 4);
  p_Var3[-1]._ios.cleanup_vtable = &PTR_crt_fstream_cpp_ofstream_dtor_FUN_005651ca_005a4824;
  iVar1 = *(int *)pcVar4;
  (p_Var3->_ostream_core).destructor_vtable =
       (WatcomThunkedDestructor *)&PTR_crt_unknown_c_FUN_0056519c_005a482c;
  *(byte ***)(pcVar4 + *(int *)(iVar1 + 4) + 0x28) = &PTR_crt_unknown_c_FUN_005651b2_005a4834;
  return (ofstream *)pcVar4;
}
