// Name: crt_strstream.cpp_istrstream_ctor_FUN_00564f32
// Address: 00564f32
// Address Range: [[00564f32, 00564fa9]]
// Convention: __cdecl
// Signature: _istrstream * __cdecl crt_strstream_cpp_istrstream_ctor_FUN_00564f32(void *this_ptr,int ctor_flags,char *buffer,int size)

#include "nocturne.h"

_istrstream * __cdecl crt_strstream_cpp_istrstream_ctor_FUN_00564f32(void *this_ptr,int ctor_flags,char *buffer,int size)

{
  int iVar1;
  WatcomVirtualBaseDescriptor *pWVar2;
  strstreambase *psVar3;
  int iVar4;
  _istrstream *p_Var5;
  ios *piVar6;
  
  if ((ctor_flags & 1U) == 0) {
    *(byte **)this_ptr = &DAT_005a4730;
    *(byte **)((int)this_ptr + 0x48) = &DAT_005a4738;
    piVar6 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)((int)this_ptr + 0x58));
    this_ptr = piVar6 + -2;
  }
  psVar3 = crt_strstream_cpp_strstreambase_ctor_FUN_0056b405(this_ptr,1,buffer,size,(char *)0x0);
  iVar4 = crt_iostream_cpp_istream_ctor_FUN_0056b67d(&psVar3->_ios,1);
  p_Var5 = (_istrstream *)(iVar4 + -0x48);
  iVar1 = ((p_Var5->_strstreambase_core).layout_info)->offset_to_vbase;
  *(int *)(p_Var5->padding + iVar1 + -0x58) = iVar1;
  *(byte ***)(iVar4 + -4) = &PTR_crt_strstream_cpp_istrstream_dtor_FUN_00564fd8_005a4744;
  pWVar2 = (p_Var5->_strstreambase_core).layout_info;
  *(byte ***)(iVar4 + 8) = &PTR_crt_unknown_c_FUN_00564faa_005a474c;
  *(byte ***)(p_Var5->padding + pWVar2->offset_to_vbase + -0x2c) =
       &PTR_crt_unknown_c_FUN_00564fc0_005a4754;
  return p_Var5;
}
