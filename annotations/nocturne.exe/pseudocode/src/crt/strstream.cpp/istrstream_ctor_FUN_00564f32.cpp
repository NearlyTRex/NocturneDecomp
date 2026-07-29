// Name: crt_strstream.cpp_istrstream_ctor_FUN_00564f32
// Address: 00564f32
// Address Range: [[00564f32, 00564fa9]]
// Convention: __cdecl
// Signature: _istrstream * __cdecl crt_strstream_cpp_istrstream_ctor_FUN_00564f32(void *this_ptr,int ctor_flags,char *buffer,int size)

#include "nocturne.h"

_istrstream * __cdecl crt_strstream_cpp_istrstream_ctor_FUN_00564f32(void *this_ptr,int ctor_flags,char *buffer,int size)

{
  int iVar1;
  strstreambase *psVar2;
  _istream *p_Var3;
  char *pcVar4;
  ios *piVar5;
  
  if ((ctor_flags & 1U) == 0) {
    *(byte **)this_ptr = &DAT_005a4730;
    *(byte **)((int)this_ptr + 0x48) = &DAT_005a4738;
    piVar5 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)((int)this_ptr + 0x58));
    this_ptr = piVar5 + -2;
  }
  psVar2 = crt_strstream_cpp_strstreambase_ctor_FUN_0056b405(this_ptr,1,buffer,size,(char *)0x0);
  p_Var3 = crt_iostream_cpp_istream_ctor_FUN_0056b67d((_istream *)&psVar2->_ios,1);
  pcVar4 = &p_Var3[-2]._ios.__fill_character;
  *(int *)(pcVar4 + *(int *)(*(int *)pcVar4 + 4) + -4) = *(int *)(*(int *)pcVar4 + 4);
  p_Var3[-1]._ios.cleanup_vtable = &PTR_crt_strstream_cpp_istrstream_dtor_FUN_00564fd8_005a4744;
  iVar1 = *(int *)pcVar4;
  (p_Var3->_istream_core).destructor_vtable =
       (WatcomThunkedDestructor *)&PTR_crt_unknown_c_FUN_00564faa_005a474c;
  *(byte ***)(pcVar4 + *(int *)(iVar1 + 4) + 0x28) = &PTR_crt_unknown_c_FUN_00564fc0_005a4754;
  return (_istrstream *)pcVar4;
}
