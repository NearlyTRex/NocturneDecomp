// Name: core_trigger.cpp_CTrigger_calculateTestRadius_FUN_0056eed0
// Address: 0056eed0
// Address Range: [[0056eed0, 0056ef90]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_calculateTestRadius_FUN_0056eed0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_calculateTestRadius_FUN_0056eed0(CTrigger *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  double dVar5;
  float afStackY_1010 [1003];
  CBoundingBox3D *in_stack_ffffffa0;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  switch(this_ptr->trigger_cause) {
  case TRIGGER_CAUSE_HERO:
  case TRIGGER_CAUSE_ACTOR:
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffffa0);
    puVar2 = (uint *)&stack0xffffffc0;
    puVar3 = (uint *)&stack0xffffffa0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_1c = fStack_4c - fStack_58;
    fStack_18 = local_48 - fStack_54;
    fStack_14 = fStack_44 - fStack_50;
    fStack_28 = fStack_4c - fStack_58;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    dVar5 = ceil
                      ((double)(SQRT(fStack_20 * fStack_20 +
                                     fStack_28 * fStack_28 + fStack_24 * fStack_24) +
                               (float)10));
    this_ptr->test_radius = (float)dVar5;
  }
  return;
}
