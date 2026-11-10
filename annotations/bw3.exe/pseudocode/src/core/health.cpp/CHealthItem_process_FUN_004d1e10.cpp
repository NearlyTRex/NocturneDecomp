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
  uint uStack_30;
  float fStack_2c;
  uint uStack_28;
  uint uStack_24;
  float fStack_20;
  uint uStack_1c;
  float fStack_18;
  
  uStack_30 = *(uint *)&this_ptr->field_0x20;
  fStack_2c = *(float *)&this_ptr->field_0x24 + 1.0;
  uStack_28 = *(uint *)&this_ptr->field_0x28;
  if (&uStack_24 != &uStack_30) {
    uStack_24 = uStack_30;
    fStack_20 = fStack_2c;
    uStack_1c = uStack_28;
  }
  core_fire_cpp_FUN_004a3af0(0x01C73654,&uStack_24,&DAT_02cfd900,1,0,3);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  fStack_18 = delta_time * _DAT_005c4a89;
  iVar1 = pCVar3->frame_count;
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.95,1.05);
  fVar2 = (float)(iVar1 + -1);
  fVar4 = fVar4 * fStack_18 + *(float *)&this_ptr->field_0x2dc;
  *(float *)&this_ptr->field_0x2dc = fVar4;
  if (fVar4 < fVar2) {
    return;
  }
  *(float *)&this_ptr->field_0x2dc = *(float *)&this_ptr->field_0x2dc - fVar2;
  return;
}
