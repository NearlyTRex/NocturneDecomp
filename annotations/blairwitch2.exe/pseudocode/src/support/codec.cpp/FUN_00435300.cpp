// Name: support_codec.cpp_FUN_00435300
// Address: 00435300
// Address Range: [[00435300, 004353fa]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00435300(int param_1)

#include "nocturne.h"

uint support_codec_cpp_FUN_00435300(int param_1)

{
  int iVar1;
  COutStreamMemory local_24;
  
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    return 0xffffffff;
  }
  support_trstream_cpp_FUN_0057de80
            (&local_24,*(uint *)(param_1 + 0x10),*(uint *)(param_1 + 0x14));
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))
                    (*(int **)(param_1 + 4),*(uint *)(param_1 + 8),&local_24);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4),&local_24);
      if (iVar1 == 0) goto LAB_004353a6;
      if (iVar1 == 1) {
        *(uint *)(param_1 + 0x20) = 1;
      }
    }
    iVar1 = support_trstream_cpp_FUN_0057e0c0(&local_24);
    if (iVar1 < 0) {
      support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(&local_24,0);
      return 0xfffffffe;
    }
    if (iVar1 == 0) {
      support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(&local_24,0);
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x18) = iVar1;
    support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(&local_24,0);
    return 0;
  }
LAB_004353a6:
  support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(&local_24,0);
  return 0xfffffffe;
}
