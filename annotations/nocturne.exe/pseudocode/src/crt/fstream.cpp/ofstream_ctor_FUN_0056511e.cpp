// Name: crt_fstream.cpp_ofstream_ctor_FUN_0056511e
// Address: 0056511e
// Address Range: [[0056511e, 0056519b]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_ofstream_ctor_FUN_0056511e(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)

#include "nocturne.h"

void __cdecl crt_fstream_cpp_ofstream_ctor_FUN_0056511e(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)

{
  int iVar1;
  int *piVar2;
  ios *piVar3;
  
  if ((ctor_flags & 1U) == 0) {
    *(byte **)this_ptr = &DAT_005a4810;
    *(byte **)((int)this_ptr + 0x44) = &DAT_005a4818;
    piVar3 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)((int)this_ptr + 0x50));
    this_ptr = &piVar3[-2].__format_flags;
  }
  iVar1 = crt_fstream_cpp_fstreambase_ctor_FUN_0056b75d
                    (this_ptr,1,filename,open_mode | 2,buffer_size);
  iVar1 = crt_iostream_cpp_ostream_ctor_FUN_0056b4a9(iVar1 + 0x44,1);
  piVar2 = (int *)(iVar1 + -0x44);
  *(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + -4) = *(int *)(*piVar2 + 4);
  *(byte ***)(iVar1 + -4) = &PTR_crt_fstream_cpp_ofstream_dtor_FUN_005651ca_005a4824;
  *(byte ***)(iVar1 + 4) = &PTR_crt_unknown_c_FUN_0056519c_005a482c;
  *(byte ***)(*(int *)(*piVar2 + 4) + 0x28 + (int)piVar2) =
       &PTR_crt_unknown_c_FUN_005651b2_005a4834;
  return;
}
