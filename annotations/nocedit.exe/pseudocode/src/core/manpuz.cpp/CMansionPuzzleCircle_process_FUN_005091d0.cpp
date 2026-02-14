// Name: core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_005091d0
// Address: 005091d0
// Address Range: [[005091d0, 005092dd]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_005091d0(CMansionPuzzleCircle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_005091d0(CMansionPuzzleCircle *this_ptr,float delta_time)

{
  int iVar1;
  
  iVar1 = core_hero_cpp_FUN_004f2220();
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290(this_ptr);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af00(this_ptr);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a8d0(this_ptr);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a610(this_ptr);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509b20(this_ptr);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af80(this_ptr);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if (this_ptr->unk3 + 0xd80 != this_ptr->unk3 + 0xd20) {
      *(uint *)(this_ptr->unk3 + 0xd80) = *(uint *)(this_ptr->unk3 + 0xd20);
      *(uint *)(this_ptr->unk3 + 0xd84) = *(uint *)(this_ptr->unk3 + 0xd24);
      *(uint *)(this_ptr->unk3 + 0xd88) = *(uint *)(this_ptr->unk3 + 0xd28);
    }
    this_ptr->unk3[0xd87] = this_ptr->unk3[0xd87] ^ 0x80;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)(this_ptr->unk3 + 0xd2c),(CVector3f *)(this_ptr->unk3 + 0xd20));
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)(this_ptr->unk3 + 0xd8c),(CVector3f *)(this_ptr->unk3 + 0xd80));
    core_game_cpp_CGame_setFudgeTarget_FUN_004d8730
              (g_CGamePtr,(CVector3f *)(this_ptr->unk3 + 0xd20),0.017453292);
  }
  return;
}
