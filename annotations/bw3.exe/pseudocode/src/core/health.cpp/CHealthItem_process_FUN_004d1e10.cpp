// Name: core_health.cpp_CHealthItem_process_FUN_004d1e10
// Address: 004d1e10
// Address Range: [[004d1e10, 004d1f04]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_process_FUN_004d1e10(CHealthItem *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_health_cpp_CHealthItem_process_FUN_004d1e10(CHealthItem *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  float fVar4;
  CVector3f CStack_30;
  CVector3f CStack_24;
  float fStack_18;
  
  CStack_30.x = (this_ptr->base).location.position.x;
  CStack_30.y = (this_ptr->base).location.position.y + 1.0;
  CStack_30.z = (this_ptr->base).location.position.z;
  if (&CStack_24 != &CStack_30) {
    CStack_24.x = CStack_30.x;
    CStack_24.y = CStack_30.y;
    CStack_24.z = CStack_30.z;
  }
  core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0
            (0x01C73654,&CStack_24,(CVector3f *)&DAT_02cfd900,1,0,3);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  fStack_18 = delta_time * _DAT_005c4a89;
  iVar1 = pCVar3->frame_count;
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.95,1.05);
  fVar2 = (float)(iVar1 + -1);
  fVar4 = fVar4 * fStack_18 + this_ptr->anim_frame;
  this_ptr->anim_frame = fVar4;
  if (fVar4 < fVar2) {
    return;
  }
  this_ptr->anim_frame = this_ptr->anim_frame - fVar2;
  return;
}
