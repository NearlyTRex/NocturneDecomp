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
  byte uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  CSkeleton *this_ptr_00;
  float10 fVar6;
  
  core_charactr_cpp_CCharacter_setup_FUN_0042b0e0(&this_ptr->base);
  iVar5 = _stricmp
                    ((this_ptr->base).model.model_name,"priest.dfm");
  if (iVar5 == 0) {
    *(uint *)&(this_ptr->base).field_0x27a0 = 2;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          (&(this_ptr->base).model);
  _DAT_01dd6a3c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L Hand",0);
  _DAT_01dd6a40 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R Hand",0);
  iVar1 = _DAT_01dd6a3c;
  *(int *)&(this_ptr->base).field_0x2620 = _DAT_01dd6a40;
  iVar4 = _DAT_01dd6a3c;
  iVar5 = *(int *)&(this_ptr->base).field_0x27a8;
  DAT_01dd6a3c = (byte)iVar1;
  DAT_01dd6a3c_1 = SUB41(iVar1,1);
  uVar2 = DAT_01dd6a3c_1;
  uRam01dd6a3e = SUB42(iVar1,2);
  uVar3 = uRam01dd6a3e;
  (this_ptr->base).carry_hands[0] = (SCarryHand)DAT_01dd6a3c;
  _DAT_01dd6a3c = iVar4;
  (this_ptr->base).carry_hands[1] = (SCarryHand)uVar2;
  *(ushort *)&(this_ptr->base).field_0x25aa = uVar3;
  if (iVar5 != 0) {
    (this_ptr->base).base.is_transparent = 1;
  }
  fVar6 = (float10)*(int *)&this_ptr->field_0x206bc * (float10)_DAT_005cb558 *
          (float10)_DAT_005cb560;
  round();
  if ((int)ROUND(fVar6) == 0x10000) {
    return;
  }
  (this_ptr->base).base.is_renderable = 0;
  *(uint *)&this_ptr->field_0x206b8 = 0xfffffffe;
  *(uint *)&this_ptr->field_0x206c0 = 0;
  (this_ptr->base).base.is_transparent = 1;
  *(int *)&this_ptr->field_0x206b4 = (int)ROUND(fVar6);
  return;
}
