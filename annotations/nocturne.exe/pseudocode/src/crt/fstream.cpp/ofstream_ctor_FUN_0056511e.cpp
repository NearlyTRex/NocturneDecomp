// Name: crt_fstream.cpp_ofstream_ctor_FUN_0056511e
// Address: 0056511e
// Address Range: [[0056511e, 0056519b]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_ofstream_ctor_FUN_0056511e(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)

#include "nocturne.h"

void __cdecl crt_fstream_cpp_ofstream_ctor_FUN_0056511e(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)

{
  int iVar1;
  _ostream *p_Var2;
  char *pcVar3;
  ios *piVar4;
  
  if ((ctor_flags & 1U) == 0) {
    *(byte **)this_ptr = &DAT_005a4810;
    *(byte **)((int)this_ptr + 0x44) = &DAT_005a4818;
    piVar4 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)((int)this_ptr + 0x50));
    this_ptr = &piVar4[-2].__format_flags;
  }
  iVar1 = crt_fstream_cpp_fstreambase_ctor_FUN_0056b75d
                    (this_ptr,1,filename,open_mode | 2,buffer_size);
  p_Var2 = crt_iostream_cpp_ostream_ctor_FUN_0056b4a9((_ostream *)(iVar1 + 0x44),1);
  pcVar3 = &p_Var2[-2]._ios.__fill_character;
  *(void **)(pcVar3 + (int)*(void **)(*(int *)pcVar3 + 4) + -4) = *(void **)(*(int *)pcVar3 + 4);
  p_Var2[-1]._ios.cleanup_vtable = &PTR_crt_fstream_cpp_ofstream_dtor_FUN_005651ca_005a4824;
  iVar1 = *(int *)pcVar3;
  (p_Var2->_ostream_core).destructor_vtable =
       (WatcomThunkedDestructor *)&PTR_crt_unknown_c_FUN_0056519c_005a482c;
  *(byte ***)(pcVar3 + *(int *)(iVar1 + 4) + 0x28) = &PTR_crt_unknown_c_FUN_005651b2_005a4834;
  return;
}
