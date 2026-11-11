// Name: core_npc.cpp_CNPC_setup_FUN_00510510
// Address: 00510510
// Address Range: [[00510510, 005105ab]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_setup_FUN_00510510(CNPC *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_npc_cpp_CNPC_setup_FUN_00510510(CNPC *this_ptr)

{
  int iVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  
  core_charactr_cpp_CCharacter_setup_FUN_00422930(&this_ptr->base);
  iVar2 = _stricmp
                    ((this_ptr->base).model.model_name,"priest.dfm");
  if (iVar2 == 0) {
    (this_ptr->base).blood_type = BLOOD_TYPE_NONE;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          (&(this_ptr->base).model);
  _DAT_01d653fc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Hand",0);
  _DAT_01d65400 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Hand",0);
  iVar1 = _DAT_01d653fc;
  (this_ptr->base).carry_hands[1].bone_index = _DAT_01d65400;
  iVar2 = (this_ptr->base).is_spectral;
  (this_ptr->base).carry_hands[0].bone_index = iVar1;
  if (iVar2 == 0) {
    return;
  }
  (this_ptr->base).base.is_transparent = 1;
  return;
}
