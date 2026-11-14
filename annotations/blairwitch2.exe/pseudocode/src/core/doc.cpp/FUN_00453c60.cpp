// Name: core_doc.cpp_FUN_00453c60
// Address: 00453c60
// Address Range: [[00453c60, 00453caf]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_00453c60(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_doc_cpp_FUN_00453c60(void)

{
  float fVar1;
  CDemonActor *pCVar2;
  int in_stack_00000004;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (*(CDemonActor **)(in_stack_00000004 + 0x2620),DAT_007bcc84);
  if ((pCVar2 != (CDemonActor *)0x0) &&
     ((fVar1 = pCVar2[2].particle_systems[4].position.z, fVar1 == 2.8026e-45 ||
      (fVar1 == 4.2039e-45)))) {
    return 0xbf860a92;
  }
  return 0xbfc80fc6;
}
