// Name: core_npc.cpp_CNPC_setup_FUN_00509020
// Address: 00509020
// Address Range: [[00509020, 00509115]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_setup_FUN_00509020(CNPC *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_npc_cpp_CNPC_setup_FUN_00509020(CNPC *this_ptr)

{
  int iVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  float10 fVar3;
  
  core_charactr_cpp_CCharacter_setup_FUN_0042b0e0(&this_ptr->base);
  iVar2 = _stricmp
                    ((this_ptr->base).model.model_name,"priest.dfm");
  if (iVar2 == 0) {
    (this_ptr->base).blood_type = BLOOD_TYPE_NONE;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          (&(this_ptr->base).model);
  _DAT_01dd6a3c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L Hand",0);
  _DAT_01dd6a40 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R Hand",0);
  iVar1 = _DAT_01dd6a3c;
  (this_ptr->base).carry_hands[1].bone_index = _DAT_01dd6a40;
  iVar2 = (this_ptr->base).is_spectral;
  (this_ptr->base).carry_hands[0].bone_index = iVar1;
  if (iVar2 != 0) {
    (this_ptr->base).base.is_transparent = 1;
  }
  fVar3 = (float10)this_ptr->start_opcode * (float10)_DAT_005cb558 * (float10)_DAT_005cb560;
  round();
  if ((int)ROUND(fVar3) == 0x10000) {
    return;
  }
  (this_ptr->base).base.is_renderable = 0;
  this_ptr->fade_state = -2;
  this_ptr->fade_timer = 0.0;
  (this_ptr->base).base.is_transparent = 1;
  this_ptr->fade_alpha = (int)ROUND(fVar3);
  return;
}
