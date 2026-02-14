// Name: crt_strstream.cpp_ostrstream_ctor_FUN_005ff384
// Address: 005ff384
// Address Range: [[005ff384, 005ff42e]]
// Convention: __cdecl
// Signature: ostrstream * __cdecl crt_strstream_cpp_ostrstream_ctor_FUN_005ff384(ostrstream *this_ptr,int flags,char *buffer,int buffer_size,int mode)

#include "nocturne.h"

ostrstream * __cdecl crt_strstream_cpp_ostrstream_ctor_FUN_005ff384(ostrstream *this_ptr,int flags,char *buffer,int buffer_size,int mode)

{
  void **ppvVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  strstreambase *psVar5;
  ostream *poVar6;
  ios *piVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  
  bVar10 = 0;
  if ((flags & 1U) == 0) {
    (this_ptr->_strstreambase_core).layout_info = &DAT_00665b68;
    (this_ptr->_ostream_core).destructor_vtable = &DAT_00665b70;
    piVar7 = crt_iostream_cpp_ios_ctor_FUN_006061fc((ios *)&(this_ptr->_ios).__tied_stream);
    this_ptr = (ostrstream *)&piVar7[-2].__tied_stream;
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
  psVar5 = crt_strstream_cpp_strstreambase_constructor_FUN_006060fe
                     ((strstreambase *)this_ptr,1,buffer,buffer_size,pcVar4);
  poVar6 = crt_iostream_cpp_ostream_ctor_FUN_006061a2((ostream *)&psVar5->_ios,1);
  ppvVar1 = &poVar6[-2]._ios.__xalloc_list;
  *(int *)((int)ppvVar1 + *(int *)((int)*ppvVar1 + 4) + -4) = *(int *)((int)*ppvVar1 + 4);
  poVar6[-1]._ios.cleanup_vtable = &PTR_FUN_00665b7c;
  pvVar3 = *ppvVar1;
  (poVar6->_ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&PTR_LAB_00665b84;
  *(void ***)((int)(&poVar6->_ios + -1) + *(int *)((int)pvVar3 + 4)) = &PTR_FUN_00665b8c;
  return (ostrstream *)ppvVar1;
}
