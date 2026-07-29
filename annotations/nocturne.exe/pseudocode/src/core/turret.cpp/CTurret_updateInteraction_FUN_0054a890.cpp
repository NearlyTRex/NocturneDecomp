// Name: core_turret.cpp_CTurret_updateInteraction_FUN_0054a890
// Address: 0054a890
// Address Range: [[0054a890, 0054a8f0]]
// Convention: unknown
// Signature: undefined4 core_turret_cpp_CTurret_updateInteraction_FUN_0054a890(CCharacter *param_1,float *param_2,int param_3)

#include "nocturne.h"

uint core_turret_cpp_CTurret_updateInteraction_FUN_0054a890(CCharacter *param_1,float *param_2,int param_3)

{
  UOrientationVector *pUVar1;
  CDemonActor *unaff_EDI;
  
  if (*(int *)(param_3 + 0x10) == 0) {
    pUVar1 = &(param_1->base).orient;
    if (pUVar1 != (UOrientationVector *)param_2) {
      (pUVar1->vec).x = *param_2;
      (param_1->base).orient.vec.y = param_2[1];
      (param_1->base).orient.vec.z = param_2[2];
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&param_1->base);
    if (*(int *)(param_3 + 0xc) != 0) {
      (*(((param_1->base).vtable._uc)->_uc).isGrabbable)(param_1,unaff_EDI);
    }
    return 1;
  }
  *(uint *)(param_3 + 0x10) = 0;
  return 0;
}
