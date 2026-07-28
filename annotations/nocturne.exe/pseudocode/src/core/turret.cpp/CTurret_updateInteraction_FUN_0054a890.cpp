// Name: core_turret.cpp_CTurret_updateInteraction_FUN_0054a890
// Address: 0054a890
// Address Range: [[0054a890, 0054a8f0]]
// Convention: unknown
// Signature: undefined4 core_turret_cpp_CTurret_updateInteraction_FUN_0054a890(CDemonActor *param_1,float *param_2,int param_3)

#include "nocturne.h"

uint core_turret_cpp_CTurret_updateInteraction_FUN_0054a890(CDemonActor *param_1,float *param_2,int param_3)

{
  int *unaff_EDI;
  
  if (*(int *)(param_3 + 0x10) == 0) {
    if (&param_1->orient != (UOrientationVector *)param_2) {
      (param_1->orient).vec.x = *param_2;
      (param_1->orient).vec.y = param_2[1];
      (param_1->orient).vec.z = param_2[2];
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
    if (*(int *)(param_3 + 0xc) != 0) {
      (*((param_1->vtable)._ub)->showEditorHelp)(param_1,unaff_EDI);
    }
    return 1;
  }
  *(uint *)(param_3 + 0x10) = 0;
  return 0;
}
