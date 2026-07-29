// Name: crt_fstream.cpp_ifstream_ctor_FUN_00565072
// Address: 00565072
// Address Range: [[00565072, 005650ef]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_ifstream_ctor_FUN_00565072(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)

#include "nocturne.h"

void __cdecl crt_fstream_cpp_ifstream_ctor_FUN_00565072(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)

{
  void *pvVar1;
  int iVar2;
  _istream *p_Var3;
  void **ppvVar4;
  ios *piVar5;
  
  if ((ctor_flags & 1U) == 0) {
    *(byte **)this_ptr = &DAT_005a47a4;
    *(byte **)((int)this_ptr + 0x44) = &DAT_005a47ac;
    piVar5 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)((int)this_ptr + 0x54));
    this_ptr = &piVar5[-2].__tied_stream;
  }
  iVar2 = crt_fstream_cpp_fstreambase_ctor_FUN_0056b75d
                    (this_ptr,1,filename,open_mode | 1,buffer_size);
  p_Var3 = crt_iostream_cpp_istream_ctor_FUN_0056b67d((_istream *)(iVar2 + 0x44),1);
  ppvVar4 = &p_Var3[-2]._ios.__i_lock;
  *(int *)((int)ppvVar4 + *(int *)((int)*ppvVar4 + 4) + -4) = *(int *)((int)*ppvVar4 + 4);
  p_Var3[-1]._ios.cleanup_vtable = &PTR_crt_fstream_cpp_ifstream_dtor_FUN_00565264_005a47b8;
  pvVar1 = *ppvVar4;
  (p_Var3->_istream_core).destructor_vtable =
       (WatcomThunkedDestructor *)&PTR_crt_unknown_c_FUN_005650f0_005a47c0;
  *(byte ***)(*(int *)((int)pvVar1 + 4) + 0x28 + (int)ppvVar4) =
       &PTR_crt_unknown_c_FUN_00565106_005a47c8;
  return;
}
