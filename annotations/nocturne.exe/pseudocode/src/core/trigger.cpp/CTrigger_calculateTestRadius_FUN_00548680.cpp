// Name: core_trigger.cpp_CTrigger_calculateTestRadius_FUN_00548680
// Address: 00548680
// Address Range: [[00548680, 00548709]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_calculateTestRadius_FUN_00548680(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_calculateTestRadius_FUN_00548680(CTrigger *this_ptr)

{
  double dVar1;
  CBoundingBox3D *pCVar2;
  CBoundingBox3D CStack_30;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  switch(this_ptr->hero_triggers_me) {
  case 0:
  case 1:
    pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_30);
    fStack_18 = (pCVar2->max).x - (pCVar2->min).x;
    fStack_14 = (pCVar2->max).y - (pCVar2->min).y;
    fStack_10 = (pCVar2->max).z - (pCVar2->min).z;
    dVar1 = (double)ceil
                              ((double)(SQRT(fStack_10 * fStack_10 +
                                             fStack_18 * fStack_18 + fStack_14 * fStack_14) +
                                       (float)10));
    this_ptr->test_radius = (float)dVar1;
  }
  return;
}
