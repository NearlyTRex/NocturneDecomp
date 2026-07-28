// Name: core_elephant.cpp_FUN_00478120
// Address: 00478120
// Address Range: [[00478120, 00478302]]
// Convention: unknown
// Signature: void core_elephant_cpp_FUN_00478120(CDemonActor *param_1)

#include "nocturne.h"

void core_elephant_cpp_FUN_00478120(CDemonActor *param_1)

{
  float fVar1;
  int iVar2;
  CVector3f *input_local_point;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CVector3f aCStack_68 [2];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar2 != 0) {
    return;
  }
  input_local_point = (CVector3f *)(*((param_1->vtable)._ub)->initializeInEditor)(param_1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,aCStack_68,input_local_point);
  fStack_18 = param_1[2].orient_matrix.m[0].y;
  uStack_20 = 0;
  uStack_1c = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_74,&uStack_20);
  fStack_38 = -fStack_74;
  fStack_34 = -fStack_70;
  fStack_30 = -fStack_6c;
  CStack_2c.x = aCStack_68[0].x + fStack_74;
  CStack_2c.y = aCStack_68[0].y + fStack_70;
  CStack_2c.z = aCStack_68[0].z + fStack_6c;
  if (&fStack_50 != &fStack_38) {
    fStack_50 = fStack_38;
    fStack_4c = fStack_34;
    fStack_48 = fStack_30;
  }
  fVar1 = SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c);
  if (fVar1 <= 0.0) {
    fStack_4c = 0.0;
    fStack_50 = 0.0;
    fStack_48 = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    fStack_50 = fStack_50 * fVar1;
    fStack_4c = fStack_4c * fVar1;
    fStack_48 = fStack_48 * fVar1;
  }
  core_fire_cpp_CFireEffect_createLaserCone_FUN_0048b3e0
            (0x01C08D04,aCStack_68,&CStack_2c,1.0,0,0xff,0,
             param_1[4].orient.vec.x * (float)3.1415926535000001 * (float)0.0055555555555555497);
  param_1[4].orient.vec.y = 1.4013e-45;
  param_1[4].orient.vec.z =
       SQRT((CStack_2c.z - aCStack_68[0].z) * (CStack_2c.z - aCStack_68[0].z) +
            (CStack_2c.x - aCStack_68[0].x) * (CStack_2c.x - aCStack_68[0].x) +
            (CStack_2c.y - aCStack_68[0].y) * (CStack_2c.y - aCStack_68[0].y));
  return;
}
