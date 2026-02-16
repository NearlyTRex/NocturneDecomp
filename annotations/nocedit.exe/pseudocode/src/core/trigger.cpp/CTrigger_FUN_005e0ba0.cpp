// Name: core_trigger.cpp_CTrigger_FUN_005e0ba0
// Address: 005e0ba0
// Address Range: [[005e0ba0, 005e0c29]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_FUN_005e0ba0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e0ba0(CTrigger *this_ptr)

{
  CBoundingBox3D *pCVar1;
  double dVar2;
  CBoundingBox3D CStack_30;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  switch(this_ptr->hero_triggers_me) {
  case 0:
  case 1:
    pCVar1 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_30);
    fStack_18 = (pCVar1->max).x - (pCVar1->min).x;
    fStack_14 = (pCVar1->max).y - (pCVar1->min).y;
    fStack_10 = (pCVar1->max).z - (pCVar1->min).z;
    dVar2 = ceil
                      ((double)(SQRT(fStack_10 * fStack_10 +
                                     fStack_18 * fStack_18 + fStack_14 * fStack_14) +
                               (float)10));
    this_ptr->test_radius = (float)dVar2;
  }
  return;
}
