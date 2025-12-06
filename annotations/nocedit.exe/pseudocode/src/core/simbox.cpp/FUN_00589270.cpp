// Name: core_simbox.cpp_FUN_00589270
// Address: 00589270
// Address Range: [[00589270, 005892c8]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_FUN_00589270(CSimBox * this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_FUN_00589270(CSimBox *this_ptr)

{
  char cVar1;
  float fVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  char *in_stack_0000000c;
  
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base_actor,g_CSimBoxClassInfo.name_hash);
  fVar2 = pCVar3[2].location.position.y;
  if (fVar2 == 0.0) {
    pcVar4 = "Demo";
  }
  else if (fVar2 == 1.4013e-45) {
    pcVar4 = "Coffin Lid";
  }
  else {
    pcVar4 = "Unknown";
  }
  do {
    cVar1 = *pcVar4;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
  return;
}
