// Name: core_trigger.cpp_CTrigger_FUN_005e0ba0
// Address: 005e0ba0
// Address Range: [[005e0ba0, 005e0c29]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_FUN_005e0ba0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e0ba0(CTrigger *this_ptr)

{
  float fVar1;
  CBoundingBox3D *pCVar2;
  int extraout_EBX;
  double dVar3;
  CBoundingBox3D CStack_30;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  uint uStack_c;
  
  switch(this_ptr->hero_triggers_me) {
  case 0:
  case 1:
    pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_30);
    fStack_18 = (pCVar2->max).x - (pCVar2->min).x;
    fStack_14 = (pCVar2->max).y - (pCVar2->min).y;
    fVar1 = (pCVar2->max).z - (pCVar2->min).z;
    _fStack_10 = CONCAT44(uStack_c,fVar1);
    dVar3 = ceil
                      ((double)(SQRT(fVar1 * fVar1 + fStack_18 * fStack_18 + fStack_14 * fStack_14)
                               + (float)10));
    *(float *)(extraout_EBX + 0x158) = (float)dVar3;
  }
  return;
}
