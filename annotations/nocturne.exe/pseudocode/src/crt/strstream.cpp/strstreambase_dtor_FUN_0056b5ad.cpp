// Name: crt_strstream.cpp_strstreambase_dtor_FUN_0056b5ad
// Address: 0056b5ad
// Address Range: [[0056b5ad, 0056b632]]
// Convention: __cdecl
// Signature: strstreambase * __cdecl crt_strstream_cpp_strstreambase_dtor_FUN_0056b5ad(strstreambase *this_ptr,uint flags)

#include "nocturne.h"

strstreambase * __cdecl crt_strstream_cpp_strstreambase_dtor_FUN_0056b5ad(strstreambase *this_ptr,uint flags)

{
  int iVar1;
  WatcomVirtualBaseDescriptor *pWVar2;
  strstreambuf *psVar3;
  void *ptr;
  ios *piVar4;
  
  if ((flags & 4) == 0) {
    iVar1 = ((this_ptr->_strstreambase_core).layout_info)->offset_to_vbase;
    *(int *)(this_ptr->padding + iVar1 + -0x48) = iVar1;
    pWVar2 = (this_ptr->_strstreambase_core).layout_info;
    *(byte ***)this_ptr->padding =
         &PTR_crt_strstream_cpp_strstreambase_dtor_FUN_0056b5ad_005a48bc;
    *(byte ***)(this_ptr->padding + pWVar2->offset_to_vbase + -0x1c) =
         &PTR_crt_unknown_c_FUN_0056b491_005a48c4;
    psVar3 = crt_strstream_cpp_strstreambuf_dtor_FUN_005701cf
                       (&(this_ptr->_strstreambase_core)._strstreambuf,0);
    this_ptr = (strstreambase *)&psVar3[-1].__minbuf_size;
    if ((flags & 1) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0056b633((ios *)&psVar3[1]._streambuf.__get_base,1);
      this_ptr = (strstreambase *)&piVar4[-2].__error_state;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    operator_delete(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_strstreambaseTypeInfo_005a4980);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
  }
  return this_ptr;
}
