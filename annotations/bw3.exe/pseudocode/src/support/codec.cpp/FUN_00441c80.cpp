// Name: support_codec.cpp_FUN_00441c80
// Address: 00441c80
// Address Range: [[00441c80, 00441d7a]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00441c80(int param_1)

#include "nocturne.h"

uint support_codec_cpp_FUN_00441c80(int param_1)

{
  int iVar1;
  COutStreamMemory local_24;
  
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    return 0xffffffff;
  }
  support_trstream_cpp_FUN_00574ac0
            (&local_24,*(uint *)(param_1 + 0x10),*(uint *)(param_1 + 0x14));
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))
                    (*(int **)(param_1 + 4),*(uint *)(param_1 + 8),&local_24);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4),&local_24);
      if (iVar1 == 0) goto LAB_00441d26;
      if (iVar1 == 1) {
        *(uint *)(param_1 + 0x20) = 1;
      }
    }
    iVar1 = support_trstream_cpp_FUN_00574d00(&local_24);
    if (iVar1 < 0) {
      support_trstream_cpp_COutStreamMemory_dtor_FUN_00574b50(&local_24,0);
      return 0xfffffffe;
    }
    if (iVar1 == 0) {
      support_trstream_cpp_COutStreamMemory_dtor_FUN_00574b50(&local_24,0);
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x18) = iVar1;
    support_trstream_cpp_COutStreamMemory_dtor_FUN_00574b50(&local_24,0);
    return 0;
  }
LAB_00441d26:
  support_trstream_cpp_COutStreamMemory_dtor_FUN_00574b50(&local_24,0);
  return 0xfffffffe;
}
