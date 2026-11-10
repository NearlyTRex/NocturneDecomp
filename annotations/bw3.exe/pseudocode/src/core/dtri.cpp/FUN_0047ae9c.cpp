// Name: core_dtri.cpp_FUN_0047ae9c
// Address: 0047ae9c
// Address Range: [[0047ae9c, 0047afeb]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0047ae9c(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0047ae9c(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  CDemonRenderer *this_ptr;
  SMRGLPrimitivePoly *poly;
  SMRGLPrimitivePoly aSStack_78 [4];
  uint uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  uint uStack_60;
  uint uStack_54;
  uint uStack_48;
  CVector3i CStack_30;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  CStack_30.x = (int)ROUND(*param_1 * _DAT_005dee70);
  CStack_30.y = (int)ROUND(param_1[1] * _DAT_005dee70);
  CStack_30.z = (int)ROUND(param_1[2] * _DAT_005dee70);
  engine_special_cpp_FUN_005632a3((SProjectedVertex *)0x01BDD7E4->vertex_buffer_ptr,&CStack_30);
  CStack_18.x = (int)ROUND(param_1[3] * _DAT_005dee70);
  CStack_18.y = (int)ROUND(param_1[4] * _DAT_005dee70);
  CStack_18.z = (int)ROUND(param_1[5] * _DAT_005dee70);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(0x01BDD7E4->vertex_buffer_ptr + 0x30),&CStack_18);
  CStack_24.x = (int)ROUND(param_1[6] * _DAT_005dee70);
  CStack_24.y = (int)ROUND(param_1[7] * _DAT_005dee70);
  CStack_24.z = (int)ROUND(param_1[8] * _DAT_005dee70);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(0x01BDD7E4->vertex_buffer_ptr + 0x60),&CStack_24);
  poly = aSStack_78;
  uStack_74 = 3;
  fVar1 = (float10)_DAT_005bccd9;
  fVar2 = (float10)param_1[9] * fVar1;
  round();
  iStack_70 = (int)ROUND(fVar2);
  fVar2 = (float10)param_1[10] * fVar1;
  round();
  iStack_6c = (int)ROUND(fVar2);
  fVar1 = fVar1 * (float10)param_1[0xb];
  round();
  iStack_68 = (int)ROUND(fVar1);
  fVar2 = (float10)param_1[0xc] * (float10)_DAT_005bcce1 * (float10)_DAT_005bcce9;
  uStack_60 = 0;
  uStack_54 = 1;
  uStack_48 = 2;
  this_ptr = 0x01BDD7E4;
  round();
  iStack_64 = (int)ROUND(fVar2);
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(this_ptr,poly);
  return;
}
