// Name: core_doc.cpp_FUN_0044febe
// Address: 0044febe
// Address Range: [[0044febe, 0044fed9] [0044fee0, 0044fee2] [0044ff06, 0044ff0b]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_0044febe(int param_1)

#include "nocturne.h"

uint core_doc_cpp_FUN_0044febe(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  switch(*(uint *)(param_1 + 0x43c)) {
  case 0:
  case 5:
  case 0xc:
    return 1;
  default:
    return 3;
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xd:
    break;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(param_1,g_CMeleeClassInfo.name_hash);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x6e4) != 0)) {
    return 5;
  }
  return 0;
}
