// Name: crt_fstream.cpp_ifstream_dtor_FUN_005ff856
// Address: 005ff856
// Address Range: [[005ff856, 005ff8ef]]
// Convention: __cdecl
// Signature: void * crt_fstream.cpp_ifstream_dtor_FUN_005ff856(ifstream * this_ptr, uint d1, uint d2, uint d3, uint d4)

#include "nocturne.h"

void * __cdecl
crt_fstream_cpp_ifstream_dtor_FUN_005ff856(ifstream *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  int iVar1;
  istream *piVar2;
  void *pvVar3;
  ios *piVar4;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) == 0) {
    iVar1 = *(int *)((int)(this_ptr->fstreambase_core).layout_info + 4);
    *(int *)((this_ptr->fstreambase_core).filebuf.__unbuffered_get_area + iVar1 + -0x3c) = iVar1;
    (this_ptr->fstreambase_core).destructor_vtable = &g_IFStream_FStreamBaseDestructor;
    pvVar3 = (this_ptr->fstreambase_core).layout_info;
    (this_ptr->istream_core).destructor_vtable =
         (WatcomThunkedDestructor *)&g_IFStream_IStreamDestructor;
    *(void ***)
     ((this_ptr->fstreambase_core).filebuf.__unbuffered_get_area + *(int *)((int)pvVar3 + 4) + -0x10
     ) = &g_IFStream_IOSDestructor;
    piVar2 = crt_iostream_cpp_istream_dtor_FUN_006063e1
                       ((istream *)&this_ptr->istream_core,1,unaff_EBX);
    this_ptr = (ifstream *)
               crt_fstream_cpp_fstreambase_dtor_FUN_00606509
                         ((fstreambase *)&piVar2[-2].ios.__i_lock,1,unaff_EBX,unaff_retaddr);
    if ((d1 & 1) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&this_ptr->ios,1,unaff_EBX);
      this_ptr = (ifstream *)&piVar4[-2].__tied_stream;
    }
    if ((d1 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    pvVar3 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_IFStreamTypeInfo);
    crt_memory_c_free_FUN_005fe659(pvVar3);
  }
  return this_ptr;
}
