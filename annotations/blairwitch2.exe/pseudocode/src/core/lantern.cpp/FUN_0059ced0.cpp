// Name: core_lantern.cpp_FUN_0059ced0
// Address: 0059ced0
// Address Range: [[0059ced0, 0059cff8]]
// Convention: unknown
// Signature: void core_lantern_cpp_FUN_0059ced0(CDemonActor *param_1)

#include "nocturne.h"

void core_lantern_cpp_FUN_0059ced0(CDemonActor *param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float afStackY_1030 [1006];
  CMatrix3x3f CStack_70;
  CVector3f CStack_48;
  float fStack_3c;
  float afStack_38 [2];
  CVector3f CStack_30;
  float fStack_24;
  float afStack_20 [2];
  CVector3f CStack_18;
  
  bVar5 = 0;
  pfVar1 = &param_1[2].particle_systems[0].fade_end;
  if ((UOrientationVector *)pfVar1 != &param_1->orient) {
    *pfVar1 = (param_1->orient).vec.x;
    param_1[2].particle_systems[0].fade_duration = (param_1->orient).vec.y;
    param_1[2].particle_systems[0].fade_timer = (param_1->orient).vec.z;
  }
  param_1[2].particle_systems[0].fade_end = 0.3926991;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            (param_1,(CVector3f *)&DAT_0265370c,&CStack_18);
  piVar2 = &param_1[2].particle_systems[0].next_particle;
  fStack_3c = CStack_18.x;
  afStack_38[(uint)bVar5 * -2] = *(float *)((int)&CStack_18 + (uint)bVar5 * -8 + 4);
  afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_18 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if ((float *)piVar2 != &fStack_3c) {
    *piVar2 = (int)fStack_3c;
    *(float *)&param_1[2].particle_systems[0].field_0x20 = afStack_38[0];
    param_1[2].particle_systems[0].fade_start = afStack_38[1];
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            (&CStack_70,(CVector3f *)&param_1[2].particle_systems[0].fade_end);
  CStack_30.x = -0.05;
  CStack_30.z = 0.8;
  CStack_30.y = -0.8;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(&CStack_70,&CStack_30,&CStack_48);
  piVar2 = &param_1[2].particle_systems[0].next_particle;
  fStack_24 = CStack_48.x;
  afStack_20[(uint)bVar5 * -2] = *(float *)((int)&CStack_48 + (uint)bVar5 * -8 + 4);
  afStack_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_48 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  fVar3 = *(float *)&param_1[2].particle_systems[0].field_0x20;
  fVar4 = param_1[2].particle_systems[0].fade_start;
  *piVar2 = (int)((float)*piVar2 + fStack_24);
  *(float *)&param_1[2].particle_systems[0].field_0x20 = fVar3 + afStack_20[0];
  param_1[2].particle_systems[0].fade_start = fVar4 + afStack_20[1];
  fVar3 = param_1[2].particle_systems[1].position.y;
  if ((int *)((int)fVar3 + 4) != piVar2) {
    *(int *)((int)fVar3 + 4) = *piVar2;
    *(uint *)((int)fVar3 + 8) = *(uint *)&param_1[2].particle_systems[0].field_0x20;
    *(float *)((int)fVar3 + 0xc) = param_1[2].particle_systems[0].fade_start;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            ((CMatrix3x3f *)((int)param_1[2].particle_systems[1].position.y + 0x10),
             (CVector3f *)&param_1[2].particle_systems[0].fade_end);
  return;
}
