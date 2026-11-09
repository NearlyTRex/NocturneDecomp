// Name: core_doc.cpp_FUN_0046c980
// Address: 0046c980
// Address Range: [[0046c980, 0046c9cf]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_0046c980(int param_1)

#include "nocturne.h"

uint core_doc_cpp_FUN_0046c980(int param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)(param_1 + 0x25b0),DAT_007c5330);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x678) == 2 || (*(int *)(iVar1 + 0x678) == 3)))) {
    return 0xbf860a92;
  }
  return 0xbfc80fc6;
}
