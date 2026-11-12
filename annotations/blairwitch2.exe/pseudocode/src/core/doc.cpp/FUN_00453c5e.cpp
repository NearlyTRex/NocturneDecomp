// Name: core_doc.cpp_FUN_00453c5e
// Address: 00453c5e
// Address Range: [[00453c5e, 00453caf]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_00453c5e(int param_1)

#include "nocturne.h"

uint core_doc_cpp_FUN_00453c5e(int param_1)

{
  float fVar1;
  CDemonActor *pCVar2;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (*(CDemonActor **)(param_1 + 0x2620),DAT_007bcc84);
  if ((pCVar2 != (CDemonActor *)0x0) &&
     ((fVar1 = pCVar2[2].particle_systems[4].position.z, fVar1 == 2.8026e-45 ||
      (fVar1 == 4.2039e-45)))) {
    return 0xbf860a92;
  }
  return 0xbfc80fc6;
}
