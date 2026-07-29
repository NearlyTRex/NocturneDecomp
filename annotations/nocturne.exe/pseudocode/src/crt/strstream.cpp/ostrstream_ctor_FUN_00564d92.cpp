// Name: crt_strstream.cpp_ostrstream_ctor_FUN_00564d92
// Address: 00564d92
// Address Range: [[00564d92, 00564e3c]]
// Convention: __cdecl
// Signature: _ostrstream * __cdecl crt_strstream_cpp_ostrstream_ctor_FUN_00564d92(void *this_ptr,int flags,char *buffer,int buffer_size,int mode)

#include "nocturne.h"

_ostrstream * __cdecl crt_strstream_cpp_ostrstream_ctor_FUN_00564d92(void *this_ptr,int flags,char *buffer,int buffer_size,int mode)

{
  void **ppvVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  strstreambase *psVar5;
  _ostream *p_Var6;
  ios *piVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  
  bVar10 = 0;
  if ((flags & 1U) == 0) {
    *(byte **)this_ptr = &DAT_005a46b8;
    *(byte **)((int)this_ptr + 0x48) = &DAT_005a46c0;
    piVar7 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)((int)this_ptr + 0x54));
    this_ptr = &piVar7[-2].__tied_stream;
  }
  if (buffer == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    if ((mode & 0xcU) == 0) {
      iVar9 = 0;
    }
    else {
      uVar8 = 0xffffffff;
      pcVar4 = buffer;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
      } while (cVar2 != '\0');
      iVar9 = ~uVar8 - 1;
    }
    pcVar4 = buffer + iVar9;
  }
  psVar5 = crt_strstream_cpp_strstreambase_ctor_FUN_0056b405(this_ptr,1,buffer,buffer_size,pcVar4);
  p_Var6 = crt_iostream_cpp_ostream_ctor_FUN_0056b4a9((_ostream *)&psVar5->_ios,1);
  ppvVar1 = &p_Var6[-2]._ios.__xalloc_list;
  *(int *)((int)ppvVar1 + *(int *)((int)*ppvVar1 + 4) + -4) = *(int *)((int)*ppvVar1 + 4);
  p_Var6[-1]._ios.cleanup_vtable = &PTR_crt_strstream_cpp_ostrstream_dtor_FUN_00564e98_005a46cc;
  pvVar3 = *ppvVar1;
  (p_Var6->_ostream_core).destructor_vtable =
       (WatcomThunkedDestructor *)&PTR_crt_unknown_c_FUN_00564e3d_005a46d4;
  *(byte ***)((int)(&p_Var6->_ios + -1) + *(int *)((int)pvVar3 + 4)) =
       &PTR_crt_unknown_c_FUN_00564e53_005a46dc;
  return (_ostrstream *)ppvVar1;
}
