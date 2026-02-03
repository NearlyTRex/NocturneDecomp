// Name: crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
// Address: 005ff7bc
// Address Range: [[005ff7bc, 005ff855]]
// Convention: __cdecl
// Signature: ofstream * __cdecl crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(ofstream *this_ptr,uint flags)

#include "nocturne.h"

ofstream * __cdecl crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(ofstream *this_ptr,uint flags)

{
  int iVar1;
  ostream *poVar2;
  void *pvVar3;
  ios *piVar4;
  
  if ((flags & 4) == 0) {
    iVar1 = *(int *)((int)(this_ptr->_fstreambase_core).layout_info + 4);
    *(int *)((this_ptr->_fstreambase_core)._filebuf.__unbuffered_get_area + iVar1 + -0x3c) = iVar1;
    (this_ptr->_fstreambase_core).destructor_vtable = &g_OFStream_FStreamBaseDestructor;
    pvVar3 = (this_ptr->_fstreambase_core).layout_info;
    (this_ptr->_ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OFStream_OStream;
    *(void ***)
     ((this_ptr->_fstreambase_core)._filebuf.__unbuffered_get_area +
     *(int *)((int)pvVar3 + 4) + -0x10) = &g_OFStream_IOS;
    poVar2 = crt_iostream_cpp_ostream_dtor_FUN_00606231((ostream *)&this_ptr->_ostream_core,1);
    this_ptr = (ofstream *)
               crt_fstream_cpp_fstreambase_dtor_FUN_00606509
                         ((fstreambase *)&poVar2[-2]._ios.__fill_character,1);
    if ((flags & 1) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&this_ptr->_ios,1);
      this_ptr = (ofstream *)&piVar4[-2].__format_flags;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    pvVar3 = __vec_delete(this_ptr,&g_OFStreamTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(pvVar3);
  }
  return this_ptr;
}
