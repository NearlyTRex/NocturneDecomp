// Name: core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_004c9cf0
// Address: 004c9cf0
// Address Range: [[004c9cf0, 004c9dfd]]
// Convention: unknown
// Signature: void core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_004c9cf0(CMansionPuzzleCircle *param_1,float param_2)

#include "nocturne.h"

void core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_004c9cf0(CMansionPuzzleCircle *param_1,float param_2)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  
  iVar3 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0(&(param_1->base).location.position,30.0);
  if (iVar3 != 0) {
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90(param_1,iVar3,param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900(param_1,iVar3,param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0(param_1,iVar3,param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      core_manpuz_cpp_FUN_004cb010(param_1,iVar3,param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640(param_1,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980(param_1,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    pCVar1 = &param_1->reflectors[1].rotation;
    pCVar2 = &param_1->reflectors[0].rotation;
    if (pCVar1 != pCVar2) {
      pCVar1->x = pCVar2->x;
      param_1->reflectors[1].rotation.y = param_1->reflectors[0].rotation.y;
      param_1->reflectors[1].rotation.z = param_1->reflectors[0].rotation.z;
    }
    pCVar1 = &param_1->reflectors[0].rotation;
    *(byte *)((int)&param_1->reflectors[1].rotation.y + 3) =
         *(byte *)((int)&param_1->reflectors[1].rotation.y + 3) ^ 0x80;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
              (&param_1->reflectors[0].rotation_matrix,pCVar1);
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
              (&param_1->reflectors[1].rotation_matrix,&param_1->reflectors[1].rotation);
    core_game_cpp_CGame_setFudgeTarget_FUN_0049b240(0x01C775EC,pCVar1,0.017453292);
  }
  return;
}
