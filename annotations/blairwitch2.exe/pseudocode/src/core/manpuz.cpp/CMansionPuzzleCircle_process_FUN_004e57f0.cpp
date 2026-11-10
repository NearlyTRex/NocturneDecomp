// Name: core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_004e57f0
// Address: 004e57f0
// Address Range: [[004e57f0, 004e58fd]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_004e57f0(CMansionPuzzleCircle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_004e57f0(CMansionPuzzleCircle *this_ptr,float delta_time)

{
  byte *puVar1;
  byte *puVar2;
  int iVar3;
  
  iVar3 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100(&(this_ptr->base).field_0x20,0x41f00000);
  if (iVar3 != 0) {
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_004e68c0(this_ptr,iVar3,delta_time);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_004e7580(this_ptr,iVar3,delta_time);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_004e6f20(this_ptr,iVar3,delta_time);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40(this_ptr,iVar3,delta_time);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      core_manpuz_cpp_FUN_004e6240(this_ptr,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      core_manpuz_cpp_FUN_004e7600(this_ptr,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    puVar1 = &this_ptr->reflectors[1].field_0x28;
    puVar2 = &this_ptr->reflectors[0].field_0x28;
    if (puVar1 != puVar2) {
      *(uint *)puVar1 = *(uint *)puVar2;
      *(uint *)&this_ptr->reflectors[1].field_0x2c =
           *(uint *)&this_ptr->reflectors[0].field_0x2c;
      *(uint *)&this_ptr->reflectors[1].field_0x30 =
           *(uint *)&this_ptr->reflectors[0].field_0x30;
    }
    puVar1 = &this_ptr->reflectors[0].field_0x28;
    this_ptr->reflectors[1].field_0x2f = this_ptr->reflectors[1].field_0x2f ^ 0x80;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
              ((CMatrix3x3f *)&this_ptr->reflectors[0].field_0x34,(CVector3f *)puVar1);
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
              ((CMatrix3x3f *)&this_ptr->reflectors[1].field_0x34,
               (CVector3f *)&this_ptr->reflectors[1].field_0x28);
    core_game_cpp_CGame_setFudgeTarget_FUN_004b39b0(g_CGamePtr,(CVector3f *)puVar1,0.017453292);
  }
  return;
}
