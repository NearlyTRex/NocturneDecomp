// Name: core_crate.cpp_CCrate_process_FUN_0043c9a0
// Address: 0043c9a0
// Address Range: [[0043c9a0, 0043cbbd]]
// Convention: unknown
// Signature: void core_crate_cpp_CCrate_process_FUN_0043c9a0(CDemonActor *param_1)

#include "nocturne.h"

void core_crate_cpp_CCrate_process_FUN_0043c9a0(CDemonActor *param_1)

{
  float *pfVar1;
  CPlatform *pCVar2;
  UOrientationVector *pUVar3;
  CBoundingBox3D CStack_24;
  float local_c;
  float fStack_8;
  
  if (param_1[2].location.area_id != 0) {
    param_1[2].orient.vec.y = 0.0;
    return;
  }
  (param_1->location).position.x =
       (param_1->platform_position_delta).x + (param_1->location).position.x;
  (param_1->location).position.y =
       (param_1->platform_position_delta).y + (param_1->location).position.y;
  (param_1->location).position.z =
       (param_1->platform_position_delta).z + (param_1->location).position.z;
  (param_1->platform_position_delta).z = 0.0;
  (param_1->platform_position_delta).y = (param_1->platform_position_delta).z;
  (param_1->platform_position_delta).x = (param_1->platform_position_delta).y;
  (param_1->orient).vec.x = (param_1->platform_orientation_delta).x + (param_1->orient).vec.x;
  (param_1->orient).vec.y = (param_1->platform_orientation_delta).y + (param_1->orient).vec.y;
  (param_1->orient).vec.z = (param_1->platform_orientation_delta).z + (param_1->orient).vec.z;
  (param_1->platform_orientation_delta).z = 0.0;
  (param_1->platform_orientation_delta).y = (param_1->platform_orientation_delta).z;
  (param_1->platform_orientation_delta).x = (param_1->platform_orientation_delta).y;
  if (((((param_1[2].orient.vec.z == (param_1->location).position.x) &&
        (param_1[2].orient_matrix.m[0].x == (param_1->location).position.y)) &&
       (param_1[2].orient_matrix.m[0].y == (param_1->location).position.z)) &&
      ((param_1[2].orient_matrix.m[0].z == (param_1->orient).vec.x &&
       (param_1[2].orient_matrix.m[1].x == (param_1->orient).vec.y)))) &&
     (param_1[2].orient_matrix.m[1].y == (param_1->orient).vec.z)) {
    local_c = param_1[2].orient_matrix.m[1].z;
  }
  else {
    local_c = (*((param_1->vtable)._ub)->cylinderGroundCheck)
                        (param_1,param_1[2].orient.vec.x,(CVector3f *)0x0);
    pfVar1 = &param_1[2].orient.vec.z;
    if ((CLocation *)pfVar1 != &param_1->location) {
      *pfVar1 = (param_1->location).position.x;
      param_1[2].orient_matrix.m[0].x = (param_1->location).position.y;
      param_1[2].orient_matrix.m[0].y = (param_1->location).position.z;
    }
    pfVar1 = &param_1[2].orient_matrix.m[0].z;
    if ((UOrientationVector *)pfVar1 != &param_1->orient) {
      *pfVar1 = (param_1->orient).vec.x;
      param_1[2].orient_matrix.m[1].x = (param_1->orient).vec.y;
      param_1[2].orient_matrix.m[1].y = (param_1->orient).vec.z;
    }
    param_1[2].orient_matrix.m[1].z = local_c;
    fStack_8 = local_c;
  }
  if ((param_1[2].orient.vec.y == 0.0) && (param_1->standing_platform != (CPlatform *)0x0)) {
    param_1[2].orient.vec.y = (float)param_1->standing_platform;
  }
  pCVar2 = *(CPlatform **)((int)&param_1[2].orient + 4);
  if (pCVar2 != (CPlatform *)0x0) {
    param_1->standing_platform = pCVar2;
    (param_1->location).position.x = (pCVar2->base).location.position.x;
    (param_1->location).position.y = (pCVar2->base).location.position.y;
    (param_1->location).position.z = (pCVar2->base).location.position.z;
    (param_1->location).area_id = (pCVar2->base).location.area_id;
    pCVar2 = param_1->standing_platform;
    pUVar3 = &(pCVar2->base).orient;
    if (&param_1->orient != pUVar3) {
      (param_1->orient).vec.x = (pUVar3->vec).x;
      (param_1->orient).vec.y = (pCVar2->base).orient.vec.y;
      (param_1->orient).vec.z = (pCVar2->base).orient.vec.z;
    }
    (*((param_1->standing_platform->base).vtable._ub)->getBoundingBox)
              (&param_1->standing_platform->base,&CStack_24);
    (param_1->location).position.y =
         (CStack_24.max.y - CStack_24.min.y) + (param_1->location).position.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
    return;
  }
  (param_1->location).position.y = local_c;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  return;
}
