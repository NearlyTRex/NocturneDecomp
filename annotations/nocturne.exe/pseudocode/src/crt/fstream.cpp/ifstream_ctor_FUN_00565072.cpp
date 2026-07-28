// Name: crt_fstream.cpp_ifstream_ctor_FUN_00565072
// Address: 00565072
// Address Range: [[00565072, 005650ef]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_ifstream_ctor_FUN_00565072(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)

#include "nocturne.h"

void __cdecl crt_fstream_cpp_ifstream_ctor_FUN_00565072(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)

{
  int iVar1;
  int *piVar2;
  ios *piVar3;
  
  if ((ctor_flags & 1U) == 0) {
    *(byte **)this_ptr = &DAT_005a47a4;
    *(byte **)((int)this_ptr + 0x44) = &DAT_005a47ac;
    piVar3 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)((int)this_ptr + 0x54));
    this_ptr = &piVar3[-2].__tied_stream;
  }
  iVar1 = crt_fstream_cpp_fstreambase_ctor_FUN_0056b75d
                    (this_ptr,1,filename,open_mode | 1,buffer_size);
  iVar1 = crt_iostream_cpp_istream_ctor_FUN_0056b67d(iVar1 + 0x44,1);
  piVar2 = (int *)(iVar1 + -0x44);
  *(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + -4) = *(int *)(*piVar2 + 4);
  *(byte ***)(iVar1 + -4) = &PTR_crt_fstream_cpp_ifstream_dtor_FUN_00565264_005a47b8;
  *(byte ***)(iVar1 + 8) = &PTR_crt_unknown_c_FUN_005650f0_005a47c0;
  *(byte ***)(*(int *)(*piVar2 + 4) + 0x28 + (int)piVar2) =
       &PTR_crt_unknown_c_FUN_00565106_005a47c8;
  return;
}
