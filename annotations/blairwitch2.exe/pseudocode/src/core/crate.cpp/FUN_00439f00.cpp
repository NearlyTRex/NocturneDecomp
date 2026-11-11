// Name: core_crate.cpp_FUN_00439f00
// Address: 00439f00
// Address Range: [[00439f00, 0043a12b]]
// Convention: unknown
// Signature: void core_crate_cpp_FUN_00439f00(CDemonActor *param_1)

#include "nocturne.h"

void core_crate_cpp_FUN_00439f00(CDemonActor *param_1)

{
  int *piVar1;
  void **ppvVar2;
  CPlatform *pCVar3;
  int iVar4;
  UOrientationVector *pUVar5;
  CBoundingBox3D *unaff_ESI;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float unaff_retaddr;
  uint auStack_28 [4];
  uint auStack_18 [3];
  float fStack_c;
  
  bVar8 = 0;
  if (param_1[1].particle_systems[0].fade_end != 0.0) {
    param_1[1].particle_systems[0].fade_timer = 0.0;
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
  if ((((((float)param_1[1].particle_systems[0].stop_after_fade == (param_1->location).position.x)
        && ((float)param_1[1].particle_systems[0].standalone == (param_1->location).position.y)) &&
       ((float)param_1[1].particle_systems[0].particles == (param_1->location).position.z)) &&
      (((float)param_1[1].particle_systems[0].vtable == (param_1->orient).vec.x &&
       (param_1[1].particle_systems[1].position.x == (param_1->orient).vec.y)))) &&
     (param_1[1].particle_systems[1].position.y == (param_1->orient).vec.z)) {
    fStack_c = param_1[1].particle_systems[1].position.z;
  }
  else {
    unaff_retaddr =
         (*((param_1->vtable)._ub)->cylinderGroundCheck)
                   (param_1,param_1[1].particle_systems[0].fade_duration,(CVector3f *)0x0);
    piVar1 = &param_1[1].particle_systems[0].stop_after_fade;
    if ((CLocation *)piVar1 != &param_1->location) {
      *piVar1 = (int)(param_1->location).position.x;
      param_1[1].particle_systems[0].standalone = (int)(param_1->location).position.y;
      param_1[1].particle_systems[0].particles = (void *)(param_1->location).position.z;
    }
    ppvVar2 = &param_1[1].particle_systems[0].vtable;
    if ((UOrientationVector *)ppvVar2 != &param_1->orient) {
      *ppvVar2 = (void *)(param_1->orient).vec.x;
      param_1[1].particle_systems[1].position.x = (param_1->orient).vec.y;
      param_1[1].particle_systems[1].position.y = (param_1->orient).vec.z;
    }
    param_1[1].particle_systems[1].position.z = unaff_retaddr;
  }
  if ((param_1[1].particle_systems[0].fade_timer == 0.0) &&
     (param_1->standing_platform != (CPlatform *)0x0)) {
    param_1[1].particle_systems[0].fade_timer = (float)param_1->standing_platform;
  }
  pCVar3 = (CPlatform *)param_1[1].particle_systems[0].fade_timer;
  if (pCVar3 != (CPlatform *)0x0) {
    param_1->standing_platform = pCVar3;
    (param_1->location).position.x = (pCVar3->base).location.position.x;
    (param_1->location).position.y = (pCVar3->base).location.position.y;
    (param_1->location).position.z = (pCVar3->base).location.position.z;
    (param_1->location).area_id = (pCVar3->base).location.area_id;
    pCVar3 = param_1->standing_platform;
    pUVar5 = &(pCVar3->base).orient;
    if (&param_1->orient != pUVar5) {
      (param_1->orient).vec.x = (pUVar5->vec).x;
      (param_1->orient).vec.y = (pCVar3->base).orient.vec.y;
      (param_1->orient).vec.z = (pCVar3->base).orient.vec.z;
    }
    (*((param_1->standing_platform->base).vtable._ub)->getBoundingBox)
              (&param_1->standing_platform->base,unaff_ESI);
    puVar6 = auStack_28;
    puVar7 = auStack_18;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    (param_1->location).position.y = (unaff_retaddr - fStack_c) + (param_1->location).position.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
    return;
  }
  (param_1->location).position.y = unaff_retaddr;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
  return;
}
