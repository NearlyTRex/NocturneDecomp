// Name: core_vessel.cpp_CCryptVessel_FUN_005e8fc0
// Address: 005e8fc0
// Address Range: [[005e8fc0, 005e8fcd]]
// Convention: __cdecl
// Signature: void core_vessel.cpp_CCryptVessel_FUN_005e8fc0(CCryptVessel * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_FUN_005e8fc0(CCryptVessel *this_ptr)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  CBoundingBox3D CStack_1c;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)&this_ptr->model_name);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(this_ptr->field14_0x3c0 + 0x2ac));
  (*((this_ptr->base_actor).vtable)->getBoundingBox)(&this_ptr->base_actor,&CStack_1c);
  iVar3 = *(int *)this_ptr->start_loc;
  this_ptr->field3_0x2d4 = 0;
  if (iVar3 != 0) {
    pCVar1 = &(this_ptr->base_actor).location;
    fVar4 = *(float *)(iVar3 + 0x20) - (pCVar1->position).x;
    fVar5 = *(float *)(iVar3 + 0x24) - (this_ptr->base_actor).location.position.y;
    fVar6 = *(float *)(iVar3 + 0x28) - (this_ptr->base_actor).location.position.z;
    if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < (float)DOUBLE_00657029) {
      iVar3 = *(int *)this_ptr->start_loc;
      (pCVar1->position).x = *(float *)(iVar3 + 0x20);
      (this_ptr->base_actor).location.position.y = *(float *)(iVar3 + 0x24);
      (this_ptr->base_actor).location.position.z = *(float *)(iVar3 + 0x28);
      (this_ptr->base_actor).location.area_id = *(int *)(iVar3 + 0x2c);
      iVar3 = *(int *)this_ptr->start_loc;
      pCVar2 = &(this_ptr->base_actor).orient;
      if (pCVar2 != (COrientation *)(iVar3 + 0x30)) {
        pCVar2->pitch = *(float *)(iVar3 + 0x30);
        (this_ptr->base_actor).orient.bank = *(float *)(iVar3 + 0x34);
        (this_ptr->base_actor).orient.heading = *(float *)(iVar3 + 0x38);
      }
    }
  }
  this_ptr->field14_0x3c0[0] = '\x01';
  this_ptr->field14_0x3c0[1] = '\0';
  this_ptr->field14_0x3c0[2] = '\0';
  this_ptr->field14_0x3c0[3] = '\0';
  this_ptr->field14_0x3c0[0x1ac] = '\0';
  this_ptr->field14_0x3c0[0x1ad] = '\0';
  this_ptr->field14_0x3c0[0x1ae] = '\0';
  this_ptr->field14_0x3c0[0x1af] = '\0';
  this_ptr->field14_0x3c0[0x1b8] = '\x01';
  this_ptr->field14_0x3c0[0x1b9] = '\0';
  this_ptr->field14_0x3c0[0x1ba] = '\0';
  this_ptr->field14_0x3c0[0x1bb] = '\0';
  this_ptr->field14_0x3c0[0x1b0] = '\0';
  this_ptr->field14_0x3c0[0x1b1] = '\0';
  this_ptr->field14_0x3c0[0x1b2] = '\0';
  this_ptr->field14_0x3c0[0x1b3] = '\0';
  this_ptr->field14_0x3c0[0x15c] = '\0';
  this_ptr->field14_0x3c0[0x15d] = '\0';
  this_ptr->field14_0x3c0[0x15e] = '\0';
  this_ptr->field14_0x3c0[0x15f] = '?';
  CStack_1c.max.y = (float)(this_ptr->field14_0x3c0 + 4);
  this_ptr->field14_0x3c0[0x160] = '\0';
  this_ptr->field14_0x3c0[0x161] = '\0';
  this_ptr->field14_0x3c0[0x162] = -0x80;
  this_ptr->field14_0x3c0[0x163] = '?';
  this_ptr->field14_0x3c0[0x164] = '\0';
  this_ptr->field14_0x3c0[0x165] = '\0';
  this_ptr->field14_0x3c0[0x166] = '\0';
  this_ptr->field14_0x3c0[0x167] = '?';
  CStack_1c.max.x = 8.68452e-39;
  core_flame_cpp_FUN_004c9b90();
  (this_ptr->base_actor).is_transparent = 1;
  return;
}


// Assembly code:
// 005e8fc0: PUSH EBX
//   Label: core_vessel.cpp_CCryptVessel_FUN_005e8fc0
// 005e8fc1: SUB ESP,0x24
// 005e8fc4: MOV EBX,dword ptr [ESP + 0x2c]
// 005e8fc8: PUSH EBX
// 005e8fc9: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
