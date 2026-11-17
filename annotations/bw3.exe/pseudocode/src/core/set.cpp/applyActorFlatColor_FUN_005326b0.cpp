// Name: core_set.cpp_applyActorFlatColor_FUN_005326b0
// Address: 005326b0
// Address Range: [[005326b0, 005327b7]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_applyActorFlatColor_FUN_005326b0(CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_set_cpp_applyActorFlatColor_FUN_005326b0(CDemonActor *actor)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iStack_1c = (actor->scale).x;
  iStack_18 = (actor->scale).y;
  iStack_20 = (actor->scale).z;
  if (actor == (CDemonActor *)g_INT_0207bab8) {
    iStack_1c = (iStack_1c * 3) / 2;
    iStack_18 = (iStack_18 * 3) / 2;
    iStack_20 = (iStack_20 * 3) / 2;
  }
  if (actor == (CDemonActor *)g_INT_0207babc) {
    fVar1 = 1.0 / g_FLOAT_0207bac0;
    round((double)((float)iStack_1c * g_FLOAT_0207bac0));
    iStack_28 = 0x532734;
    dVar2 = round((double)((float)iStack_18 * fVar1));
    dVar3 = round((double)((float)iStack_20 * fVar1));
    iStack_24 = (int)ROUND(dVar2);
    iStack_2c = (int)ROUND(dVar3);
  }
  core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(g_CDemonSetPtr,iStack_28,iStack_24,iStack_2c);
  return;
}
