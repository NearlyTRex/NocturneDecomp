// Name: core_doc.cpp_FUN_00453c5e
// Address: 00453c5e
// Address Range: [[00453c5e, 00453caf]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_00453c5e(int param_1)

#include "nocturne.h"

uint core_doc_cpp_FUN_00453c5e(int param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)(param_1 + 0x2620),DAT_007bcc84);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x7d4) == 2 || (*(int *)(iVar1 + 0x7d4) == 3)))) {
    return 0xbf860a92;
  }
  return 0xbfc80fc6;
}
