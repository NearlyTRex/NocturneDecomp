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
  byte uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  CSkeleton *this_ptr_00;
  
  core_charactr_cpp_CCharacter_setup_FUN_0042c510(&this_ptr->base);
  iVar5 = _stricmp
                    ((this_ptr->base).model.model_name,"priest.dfm");
  if (iVar5 == 0) {
    *(uint *)&(this_ptr->base).field_0x27a0 = 2;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          (&(this_ptr->base).model);
  _DAT_01d81364 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Hand",0);
  _DAT_01d81368 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Hand",0);
  iVar1 = _DAT_01d81364;
  *(int *)&(this_ptr->base).field_0x2620 = _DAT_01d81368;
  iVar4 = _DAT_01d81364;
  iVar5 = *(int *)&(this_ptr->base).field_0x27a8;
  DAT_01d81364 = (byte)iVar1;
  DAT_01d81364_1 = SUB41(iVar1,1);
  uVar2 = DAT_01d81364_1;
  uRam01d81366 = SUB42(iVar1,2);
  uVar3 = uRam01d81366;
  (this_ptr->base).carry_hands[0] = (SCarryHand)DAT_01d81364;
  _DAT_01d81364 = iVar4;
  (this_ptr->base).carry_hands[1] = (SCarryHand)uVar2;
  *(ushort *)&(this_ptr->base).field_0x25aa = uVar3;
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.is_transparent = 1;
  return;
}
