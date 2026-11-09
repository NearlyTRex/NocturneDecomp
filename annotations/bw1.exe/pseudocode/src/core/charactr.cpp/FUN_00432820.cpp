// Name: core_charactr.cpp_FUN_00432820
// Address: 00432820
// Address Range: [[00432820, 004328b0]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00432820(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_charactr_cpp_FUN_00432820(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1014 [1015];
  uint local_2c;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  bVar3 = 0;
  iVar1 = hand_index * 0x78;
  if (*(int *)(&this_ptr->field_0x25b0 + iVar1) != 0) {
    puVar2 = (uint *)0x0;
    if (drop_direction != (CVector3f *)0x0) {
      core_actor_cpp_FUN_00408ac0(this_ptr,drop_direction);
      local_20 = local_2c;
      (&stack0xffffffe4)[(uint)bVar3 * 0xfffffffe] =
           *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (&stack0xffffffec != &stack0xffffffe0) {
        local_14 = local_20;
        local_10 = local_1c;
        local_c = local_18;
      }
      puVar2 = &stack0xffffffec;
    }
    (**(code **)(*(int *)(*(int *)(&this_ptr->field_0x25b0 + iVar1) + 0x154) + 0x8c))
              (*(int *)(&this_ptr->field_0x25b0 + iVar1),puVar2);
    *(uint *)(&this_ptr->field_0x25b0 + iVar1) = 0;
  }
  return;
}
