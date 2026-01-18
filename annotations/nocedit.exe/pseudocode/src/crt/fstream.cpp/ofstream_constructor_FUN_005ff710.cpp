// Name: crt_fstream.cpp_ofstream_constructor_FUN_005ff710
// Address: 005ff710
// Address Range: [[005ff710, 005ff78d]]
// Convention: __cdecl
// Signature: void crt_fstream.cpp_ofstream_constructor_FUN_005ff710(ofstream * this_ptr, int ctor_flags, int fd, int mode, char * buffer, SIZE_T buffer_size)

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_ofstream_constructor_FUN_005ff710
          (ofstream *this_ptr,int ctor_flags,int fd,int mode,char *buffer,SIZE_T buffer_size)

{
  int iVar1;
  int extraout_EAX;
  ostream *poVar2;
  char *pcVar3;
  ios *piVar4;
  SIZE_T unaff_retaddr;
  
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->_fstreambase_core).layout_info = &g_OFStream_VirtualBaseLayout;
    (this_ptr->_ostream_core).layout_info =
         (WatcomInheritanceLayout *)&g_OFStream_OStreamSubobjectLayout;
    piVar4 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->_ios);
    this_ptr = (ofstream *)&piVar4[-2].__format_flags;
  }
  crt_fstream_cpp_fstreambase_constructor_FUN_00606456
            ((fstreambase *)this_ptr,1,fd,mode | 2,buffer,unaff_retaddr);
  poVar2 = crt_iostream_cpp_ostream_ctor_FUN_006061a2((ostream *)(extraout_EAX + 0x44),1);
  pcVar3 = &poVar2[-2]._ios.__fill_character;
  *(void **)(pcVar3 + (int)*(void **)(*(int *)pcVar3 + 4) + -4) = *(void **)(*(int *)pcVar3 + 4);
  poVar2[-1]._ios.cleanup_vtable = &g_OFStream_FStreamBaseDestructor;
  iVar1 = *(int *)pcVar3;
  (poVar2->_ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OFStream_OStream;
  *(void ***)(pcVar3 + *(int *)(iVar1 + 4) + 0x28) = &g_OFStream_IOS;
  return;
}
