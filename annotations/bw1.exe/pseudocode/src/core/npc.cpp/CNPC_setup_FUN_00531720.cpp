// Name: core_npc.cpp_CNPC_setup_FUN_00531720
// Address: 00531720
// Address Range: [[00531720, 005317bb]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_setup_FUN_00531720(CNPC *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_npc_cpp_CNPC_setup_FUN_00531720(CNPC *this_ptr)

{
  int iVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  
  core_charactr_cpp_CCharacter_setup_FUN_0042c510(&this_ptr->base);
  iVar2 = _stricmp
                    ((this_ptr->base).model.model_name,"priest.dfm");
  if (iVar2 == 0) {
    (this_ptr->base).blood_type = BLOOD_TYPE_NONE;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          (&(this_ptr->base).model);
  _DAT_01d81364 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Hand",0);
  _DAT_01d81368 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Hand",0);
  iVar1 = _DAT_01d81364;
  (this_ptr->base).carry_hands[1].bone_index = _DAT_01d81368;
  iVar2 = (this_ptr->base).is_spectral;
  (this_ptr->base).carry_hands[0].bone_index = iVar1;
  if (iVar2 == 0) {
    return;
  }
  (this_ptr->base).base.is_transparent = 1;
  return;
}
