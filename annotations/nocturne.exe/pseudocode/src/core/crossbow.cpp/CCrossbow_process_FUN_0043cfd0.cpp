// Name: core_crossbow.cpp_CCrossbow_process_FUN_0043cfd0
// Address: 0043cfd0
// Address Range: [[0043cfd0, 0043d093]]
// Convention: unknown
// Signature: void core_crossbow_cpp_CCrossbow_process_FUN_0043cfd0(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_crossbow_cpp_CCrossbow_process_FUN_0043cfd0(CCharacter *param_1,float param_2)

{
  CVector3f *pCVar1;
  CVector3f aCStack_1c [2];
  
  core_weapon_cpp_CWeapon_process_FUN_00554030((CWeapon *)param_1,param_2);
  pCVar1 = (CVector3f *)(*(((param_1->base).vtable._uc)->_uc).canWalk)(param_1);
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     (&param_1->base,aCStack_1c,pCVar1);
  (param_1->model).transformed_vertices[0x53].z = pCVar1->x;
  (param_1->model).transformed_vertices[0x54].x = pCVar1->y;
  (param_1->model).transformed_vertices[0x54].y = pCVar1->z;
  if (((((param_1->model).transformed_vertices[0x18].y != 2.8026e-45) ||
       ((int)(param_1->model).transformed_vertices[0x4f].y < 1)) ||
      ((param_1->model).transformed_vertices[0x4f].z != 7.00649e-45)) ||
     (0.0 < (param_1->model).transformed_vertices[0x1c].x)) {
    core_flame_cpp_FUN_0048df10((CFlame *)((param_1->model).transformed_vertices + 0x51));
    (param_1->model).transformed_vertices[0x50].z = 0.0;
  }
  else {
    (param_1->model).transformed_vertices[0x50].z = 1.4013e-45;
  }
  core_flame_cpp_CFlame_process_FUN_0048d0c0
            ((CFlame *)((param_1->model).transformed_vertices + 0x51),param_2);
  (param_1->base).is_transparent = (int)(param_1->model).transformed_vertices[0x50].z;
  return;
}
