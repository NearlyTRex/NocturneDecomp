// Name: core_trigger.cpp_CTrigger_FUN_005e0ba0
// Address: 005e0ba0
// Address Range: [[005e0ba0, 005e0c29]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_FUN_005e0ba0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e0ba0(CTrigger *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CBoundingBox3D *pCVar4;
  int extraout_EBX;
  double dVar5;
  
  switch(this_ptr->hero_triggers_me) {
  case 0:
  case 1:
    pCVar4 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                       (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffd0);
    fVar1 = (pCVar4->max).x - (pCVar4->min).x;
    fVar2 = (pCVar4->max).y - (pCVar4->min).y;
    fVar3 = (pCVar4->max).z - (pCVar4->min).z;
    dVar5 = ceil
                      ((double)(SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) +
                               (float)10));
    *(float *)(extraout_EBX + 0x158) = (float)dVar5;
  }
  return;
}
