// Name: core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_005091d0
// Address: 005091d0
// Address Range: [[005091d0, 005092dd]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_005091d0(CMansionPuzzleCircle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_005091d0(CMansionPuzzleCircle *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  
  iVar3 = core_hero_cpp_FUN_004f2220();
  if (iVar3 != 0) {
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290(this_ptr);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af00(this_ptr);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a8d0(this_ptr);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a610(this_ptr);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509b20(this_ptr);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af80(this_ptr);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    pCVar1 = &this_ptr->reflectors[1].rotation;
    pCVar2 = &this_ptr->reflectors[0].rotation;
    if (pCVar1 != pCVar2) {
      pCVar1->x = pCVar2->x;
      this_ptr->reflectors[1].rotation.y = this_ptr->reflectors[0].rotation.y;
      this_ptr->reflectors[1].rotation.z = this_ptr->reflectors[0].rotation.z;
    }
    pCVar1 = &this_ptr->reflectors[0].rotation;
    *(byte *)((int)&this_ptr->reflectors[1].rotation.y + 3) =
         *(byte *)((int)&this_ptr->reflectors[1].rotation.y + 3) ^ 0x80;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&this_ptr->reflectors[0].rotation_matrix,pCVar1);
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&this_ptr->reflectors[1].rotation_matrix,&this_ptr->reflectors[1].rotation);
    core_game_cpp_CGame_setFudgeTarget_FUN_004d8730(g_CGamePtr,pCVar1,0.017453292);
  }
  return;
}
