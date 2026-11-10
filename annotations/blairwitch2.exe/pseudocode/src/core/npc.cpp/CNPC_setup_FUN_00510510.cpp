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
  byte uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  CSkeleton *this_ptr_00;
  
  core_charactr_cpp_CCharacter_setup_FUN_00422930(&this_ptr->base);
  iVar5 = _stricmp
                    (&(this_ptr->base).model.field_0x2260,"priest.dfm");
  if (iVar5 == 0) {
    (this_ptr->base).blood_type = BLOOD_TYPE_NONE;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          (&(this_ptr->base).model);
  _DAT_01d653fc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Hand",0);
  _DAT_01d65400 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Hand",0);
  iVar1 = _DAT_01d653fc;
  *(int *)&(this_ptr->base).field_0x2690 = _DAT_01d65400;
  iVar4 = _DAT_01d653fc;
  iVar5 = *(int *)&(this_ptr->base).field_0x2814;
  DAT_01d653fc = (byte)iVar1;
  DAT_01d653fc_1 = SUB41(iVar1,1);
  uVar2 = DAT_01d653fc_1;
  uRam01d653fe = SUB42(iVar1,2);
  uVar3 = uRam01d653fe;
  (this_ptr->base).carry_hands[0] = (SCarryHand)DAT_01d653fc;
  _DAT_01d653fc = iVar4;
  (this_ptr->base).carry_hands[1] = (SCarryHand)uVar2;
  *(ushort *)&(this_ptr->base).field_0x261a = uVar3;
  if (iVar5 == 0) {
    return;
  }
  *(uint *)&(this_ptr->base).base.field_0xfc = 1;
  return;
}
