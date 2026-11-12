// Name: core_doc.cpp_FUN_00468a90
// Address: 00468a90
// Address Range: [[00468a90, 00468aa9] [00468ab0, 00468ab2] [00468ad0, 00468ad5]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_00468a90(CDemonActor *param_1)

#include "nocturne.h"

uint core_doc_cpp_FUN_00468a90(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  
  if (param_1 == (CDemonActor *)0x0) {
    return 0;
  }
  switch(param_1[2].orient.vec.x) {
  case 0.0:
  case 7.00649e-45:
    return 1;
  case 9.80909e-45:
  case 1.12104e-44:
    pCVar1 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CMeleeClassInfo.name_hash);
    if (pCVar1 == (CDemonActor *)0x0) {
      return 0;
    }
    if (pCVar1[4].location.position.z == 0.0) {
      return 0;
    }
  }
  return 3;
}
