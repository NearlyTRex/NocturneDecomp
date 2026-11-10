// Name: core_charactr.cpp_CCharacter_renderTransparent_FUN_004301e0
// Address: 004301e0
// Address Range: [[004301e0, 004303bf]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_004301e0(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_004301e0(CCharacter *this_ptr)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_74 [6];
  uint local_5c [6];
  CVector3f local_44;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  if ((DAT_007c61c0 & 1) == 0) {
    DAT_007c61c0 = DAT_007c61c0 | 1;
  }
  bVar1 = false;
  if ((*(int *)&this_ptr->field_0x27a8 != 0) && (this_ptr->smoke_occluded == 0)) {
    fVar6 = (float10)_DAT_007c6340 + (float10)_DAT_005d5a33;
    _DAT_007c6340 = (float)fVar6;
    fVar7 = (float10)fsin(fVar6);
    fVar6 = (float10)fcos(fVar6);
    local_44.y = 3.0;
    local_14 = (float)fVar7;
    local_18 = (float)fVar6;
    local_38.x = local_14 + (this_ptr->base).location.position.x;
    local_38.z = local_18 + (this_ptr->base).location.position.z;
    local_38.y = (this_ptr->base).location.position.y + _DAT_005d5a37;
    local_44.x = local_14;
    local_44.z = local_18;
    if (&local_44 != &local_38) {
      local_44.x = local_38.x;
      local_44.y = local_38.y;
      local_44.z = local_38.z;
    }
    local_2c = local_38.x;
    local_28 = local_38.y;
    local_24 = local_38.z;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970((CDemonGlobe *)&DAT_007c6180,&local_44);
    _DAT_007c61bc = 45000;
    DAT_007c619c = 0x2b;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0((CDemonGlobe *)&DAT_007c6180,3.0)
    ;
    _DAT_007c61a0 = 0;
    bVar1 = true;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(g_CDemonSetPtr,(CDemonGlobe *)&DAT_007c6180);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar3 = local_74;
  puVar4 = local_5c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_004207b0(local_5c);
  if (iVar2 != 0) {
    this_ptr->was_rendered_opaque = 1;
    core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960(this_ptr);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
  if (bVar1) {
    core_set_cpp_FUN_00551990(g_CDemonSetPtr,&DAT_007c6180);
  }
  if ((0 < this_ptr->fire_count) && (this_ptr->was_rendered_opaque != 0)) {
    core_charactr_cpp_CCharacter_renderFlames_FUN_004303c0(this_ptr);
    return this_ptr->was_rendered_opaque;
  }
  return this_ptr->was_rendered_opaque;
}
