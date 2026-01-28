// Name: crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
// Address: 006062a6
// Address Range: [[006062a6, 0060632b]]
// Convention: __cdecl
// Signature: strstreambase * __cdecl crt_strstream_cpp_strstreambase_dtor_FUN_006062a6(strstreambase *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

strstreambase * __cdecl
crt_strstream_cpp_strstreambase_dtor_FUN_006062a6(strstreambase *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  WatcomVirtualBaseDescriptor *pWVar2;
  strstreambuf *psVar3;
  void *ptr;
  ios *piVar4;
  uint unaff_EBX;
  
  if ((d1 & 4) == 0) {
    iVar1 = ((this_ptr->_strstreambase_core).layout_info)->offset_to_vbase;
    *(int *)(this_ptr->padding + iVar1 + -0x48) = iVar1;
    pWVar2 = (this_ptr->_strstreambase_core).layout_info;
    *(void ***)this_ptr->padding = &g_StrStreamBase_Destructor;
    *(void ***)(this_ptr->padding + pWVar2->offset_to_vbase + -0x1c) =
         &g_StrStreamBase_IOSDestructor;
    psVar3 = crt_strstream_cpp_strstreambuf_dtor_FUN_0060bb7f
                       (&(this_ptr->_strstreambase_core)._strstreambuf,0);
    this_ptr = (strstreambase *)&psVar3[-1].__minbuf_size;
    if ((d1 & 1) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0060632c
                         ((ios *)&psVar3[1]._streambuf.__get_base,1,unaff_EBX);
      this_ptr = (strstreambase *)&piVar4[-2].__error_state;
    }
    if ((d1 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_StrStreamBaseTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
