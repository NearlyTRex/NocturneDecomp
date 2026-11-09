// Name: core_doc.cpp_FUN_00468a90
// Address: 00468a90
// Address Range: [[00468a90, 00468aa9] [00468ab0, 00468ab2] [00468ad0, 00468ad5]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_00468a90(int param_1)

#include "nocturne.h"

uint core_doc_cpp_FUN_00468a90(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  switch(*(uint *)(param_1 + 0x2e0)) {
  case 0:
  case 5:
    return 1;
  case 7:
  case 8:
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CMeleeClassInfo.name_hash);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x588) == 0) {
      return 0;
    }
  }
  return 3;
}
