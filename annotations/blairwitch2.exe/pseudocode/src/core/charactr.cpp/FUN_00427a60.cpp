// Name: core_charactr.cpp_FUN_00427a60
// Address: 00427a60
// Address Range: [[00427a60, 00427ab4]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00427a60(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00427a60(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  byte *puVar1;
  
  puVar1 = &this_ptr->field_0x2618;
  do {
    while (carrier == *(CDemonActor **)(puVar1 + 8)) {
      (**(code **)(*(int *)&(*(CDemonActor **)(puVar1 + 8))->field_0x2b0 + 0x94))
                (carrier,drop_position);
      *(uint *)(puVar1 + 8) = 0;
      puVar1 = puVar1 + 0x78;
      if (puVar1 == &this_ptr->field_0x2708) {
        return;
      }
    }
    puVar1 = puVar1 + 0x78;
  } while (puVar1 != &this_ptr->field_0x2708);
  return;
}
