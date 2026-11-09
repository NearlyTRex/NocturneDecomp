// Name: core_charactr.cpp_FUN_00431490
// Address: 00431490
// Address Range: [[00431490, 004314e4]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00431490(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00431490(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  byte *puVar1;
  
  puVar1 = &this_ptr->field_0x25a8;
  do {
    while (carrier == *(CDemonActor **)(puVar1 + 8)) {
      (**(code **)(*(int *)&(*(CDemonActor **)(puVar1 + 8))->field_0x154 + 0x8c))
                (carrier,drop_position);
      *(uint *)(puVar1 + 8) = 0;
      puVar1 = puVar1 + 0x78;
      if (puVar1 == &this_ptr->field_0x2698) {
        return;
      }
    }
    puVar1 = puVar1 + 0x78;
  } while (puVar1 != &this_ptr->field_0x2698);
  return;
}
