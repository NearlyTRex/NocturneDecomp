// Name: core_manpuz.cpp_FUN_004e57f0
// Address: 004e57f0
// Address Range: [[004e57f0, 004e58fd]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_004e57f0(CMansionPuzzleCircle *param_1,float param_2)

#include "nocturne.h"

void core_manpuz_cpp_FUN_004e57f0(CMansionPuzzleCircle *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100(&param_1->field_0x20,0x41f00000);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_004e68c0(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_004e7580(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_004e6f20(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_004e6c40(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_004e6240(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_004e7600(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if (&param_1->field_0x1524 != &param_1->field_0x14c4) {
      *(uint *)&param_1->field_0x1524 = *(uint *)&param_1->field_0x14c4;
      *(uint *)&param_1->field_0x1528 = *(uint *)&param_1->field_0x14c8;
      *(uint *)&param_1->field_0x152c = *(uint *)&param_1->field_0x14cc;
    }
    param_1->field_0x152b = param_1->field_0x152b ^ 0x80;
    core_dirmat_cpp_FUN_00449280
              ((CMatrix3x3f *)&param_1->field_0x14d0,(CVector3f *)&param_1->field_0x14c4);
    core_dirmat_cpp_FUN_00449280
              ((CMatrix3x3f *)&param_1->field_0x1530,(CVector3f *)&param_1->field_0x1524);
    core_game_cpp_FUN_004b39b0(g_CGamePtr,(CVector3f *)&param_1->field_0x14c4,0.017453292);
  }
  return;
}
