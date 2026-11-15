// Name: core_manpuz.cpp_FUN_004e6240
// Address: 004e6240
// Address Range: [[004e6240, 004e6334]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_004e6240(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_manpuz_cpp_FUN_004e6240(CDemonActor *param_1,int param_2)

{
  CMatrix3x3f *this_ptr;
  float fVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1038 [1016];
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [4];
  uint uStack_30;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  int iStack_14;
  
  bVar4 = 0;
  iVar2 = param_2 * 100;
  iStack_14 = param_2;
  fVar1 = ((float)param_2 + *(float *)((int)param_1[2].particle_systems + iVar2 + 0x94)) *
          _DAT_005f98bc;
  *(uint *)((int)param_1[2].particle_systems + iVar2 + 0xa8) = 0;
  this_ptr = (CMatrix3x3f *)((int)param_1[2].particle_systems + iVar2 + 0xb4);
  *(uint *)((int)param_1[2].particle_systems + iVar2 + 0xb0) = 0;
  *(float *)((int)param_1[2].particle_systems + iVar2 + 0xac) = fVar1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            (this_ptr,(CVector3f *)((int)param_1[2].particle_systems + iVar2 + 0xa8));
  CStack_2c.z = *(float *)(param_1[8].create_event + 0x50);
  CStack_2c.x = 0.0;
  CStack_2c.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(this_ptr,&CStack_2c,&CStack_20);
  pfVar3 = (float *)((int)param_1[2].particle_systems + iVar2 + 0x9c);
  fStack_44 = CStack_20.x;
  afStack_40[(uint)bVar4 * -2] = *(float *)((int)&CStack_20 + (uint)bVar4 * -8 + 4);
  afStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if (pfVar3 != &fStack_44) {
    *pfVar3 = fStack_44;
    *(float *)((int)param_1[2].particle_systems + iVar2 + 0xa0) = afStack_40[0];
    *(float *)((int)param_1[2].particle_systems + iVar2 + 0xa4) = afStack_40[1];
  }
  pfVar3 = (float *)((int)param_1[2].particle_systems + iVar2 + 0xe8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            (param_1,(CVector3f *)((int)param_1[2].particle_systems + iVar2 + 0x9c),&CStack_50);
  afStack_40[2] = CStack_50.x;
  afStack_40[(uint)bVar4 * -2 + 3] = *(float *)((int)&CStack_50 + (uint)bVar4 * -8 + 4);
  afStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       *(float *)((int)&CStack_50 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if (pfVar3 == afStack_40 + 2) {
    return;
  }
  *pfVar3 = afStack_40[2];
  *(float *)((int)param_1[2].particle_systems + iVar2 + 0xec) = afStack_40[3];
  *(uint *)((int)param_1[2].particle_systems + iVar2 + 0xf0) = uStack_30;
  return;
}
