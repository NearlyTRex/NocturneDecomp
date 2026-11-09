// Name: core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_00504400
// Address: 00504400
// Address Range: [[00504400, 0050450d]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_00504400(CMansionPuzzleCircle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_00504400(CMansionPuzzleCircle *this_ptr,float delta_time)

{
  int iVar1;
  
  iVar1 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0(&this_ptr->field_0x20,0x41f00000);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_00505560(this_ptr,iVar1,delta_time);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_00506220(this_ptr,iVar1,delta_time);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0(this_ptr,iVar1,delta_time);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0(this_ptr,iVar1,delta_time);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_00504ee0(this_ptr,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_005062a0(this_ptr,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if (&this_ptr->field_0x13c8 != &this_ptr->field_0x1368) {
      *(uint *)&this_ptr->field_0x13c8 = *(uint *)&this_ptr->field_0x1368;
      *(uint *)&this_ptr->field_0x13cc = *(uint *)&this_ptr->field_0x136c;
      *(uint *)&this_ptr->field_0x13d0 = *(uint *)&this_ptr->field_0x1370;
    }
    this_ptr->field_0x13cf = this_ptr->field_0x13cf ^ 0x80;
    core_dirmat_cpp_FUN_0045f3e0
              ((CMatrix3x3f *)&this_ptr->field_0x1374,(CVector3f *)&this_ptr->field_0x1368);
    core_dirmat_cpp_FUN_0045f3e0
              ((CMatrix3x3f *)&this_ptr->field_0x13d4,(CVector3f *)&this_ptr->field_0x13c8);
    core_game_cpp_CGame_setFudgeTarget_FUN_004cc9a0
              (g_CGamePtr,(CVector3f *)&this_ptr->field_0x1368,0.017453292);
  }
  return;
}
