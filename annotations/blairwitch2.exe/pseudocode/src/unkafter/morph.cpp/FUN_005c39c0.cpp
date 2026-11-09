// Name: unkafter_morph.cpp_FUN_005c39c0
// Address: 005c39c0
// Address Range: [[005c39c0, 005c3a2b]]
// Convention: unknown
// Signature: undefined4 unkafter_morph_cpp_FUN_005c39c0(int param_1)

#include "nocturne.h"

uint unkafter_morph_cpp_FUN_005c39c0(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2a8)(param_1);
  if (DAT_0061f414 != (code *)0x0) {
    iVar1 = (*DAT_0061f414)(param_1);
    if (iVar1 != 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(param_1);
      return 1;
    }
  }
  DVar2 = GetFileType(*(HANDLE *)(DAT_0061f4d8 + param_1 * 4));
  if (DVar2 == 2) {
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(param_1);
    return 1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(param_1);
  return 0;
}
