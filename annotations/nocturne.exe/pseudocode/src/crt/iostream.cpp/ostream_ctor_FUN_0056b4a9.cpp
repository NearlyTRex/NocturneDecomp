// Name: crt_iostream.cpp_ostream_ctor_FUN_0056b4a9
// Address: 0056b4a9
// Address Range: [[0056b4a9, 0056b4ea]]
// Convention: unknown
// Signature: void crt_iostream_cpp_ostream_ctor_FUN_0056b4a9(char *param_1,byte param_2)

#include "nocturne.h"

void crt_iostream_cpp_ostream_ctor_FUN_0056b4a9(char *param_1,byte param_2)

{
  ios *piVar1;
  
  if ((param_2 & 1) == 0) {
    *(byte **)param_1 = &DAT_005a4908;
    piVar1 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)(param_1 + 0xc));
    param_1 = &piVar1[-1].__fill_character;
  }
  *(void **)(param_1 + (int)*(void **)(*(int *)param_1 + 4) + -4) = *(void **)(*(int *)param_1 + 4);
  *(byte ***)(param_1 + 4) = &PTR_crt_iostream_cpp_ostream_dtor_FUN_0056b538_005a4914;
  *(byte ***)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x28) = &PTR_FUN_005a491c;
  return;
}
