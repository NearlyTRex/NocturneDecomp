// Name: core_dtri.cpp_FUN_004922fc
// Address: 004922fc
// Address Range: [[004922fc, 0049244b]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_004922fc(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_004922fc(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  CDemonRenderer *this_ptr;
  SMRGLPrimitivePoly *poly;
  int iStack_74;
  UIntegerFloat UStack_70;
  UIntegerFloat UStack_6c;
  UIntegerFloat UStack_68;
  UIntegerFloat UStack_64;
  int iStack_60;
  int iStack_54;
  int iStack_48;
  CVector3i CStack_30;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  CStack_30.x = (int)ROUND(*param_1 * _DAT_005ff660);
  CStack_30.y = (int)ROUND(param_1[1] * _DAT_005ff660);
  CStack_30.z = (int)ROUND(param_1[2] * _DAT_005ff660);
  engine_special_cpp_FUN_00580173(&DAT_0061255c->vertex_buffer_ptr->projected_vertex,&CStack_30);
  CStack_18.x = (int)ROUND(param_1[3] * _DAT_005ff660);
  CStack_18.y = (int)ROUND(param_1[4] * _DAT_005ff660);
  CStack_18.z = (int)ROUND(param_1[5] * _DAT_005ff660);
  engine_special_cpp_FUN_00580173(&DAT_0061255c->vertex_buffer_ptr[1].projected_vertex,&CStack_18);
  CStack_24.x = (int)ROUND(param_1[6] * _DAT_005ff660);
  CStack_24.y = (int)ROUND(param_1[7] * _DAT_005ff660);
  CStack_24.z = (int)ROUND(param_1[8] * _DAT_005ff660);
  engine_special_cpp_FUN_00580173(&DAT_0061255c->vertex_buffer_ptr[2].projected_vertex,&CStack_24);
  poly = (SMRGLPrimitivePoly *)&stack0xffffff88;
  iStack_74 = 3;
  fVar1 = (float10)_DAT_005dbc1c;
  fVar2 = (float10)param_1[9] * fVar1;
  round();
  UStack_70.i = (int)ROUND(fVar2);
  fVar2 = (float10)param_1[10] * fVar1;
  round();
  UStack_6c.i = (int)ROUND(fVar2);
  fVar1 = fVar1 * (float10)param_1[0xb];
  round();
  UStack_68.i = (int)ROUND(fVar1);
  fVar2 = (float10)param_1[0xc] * (float10)_DAT_005dbc24 * (float10)_DAT_005dbc2c;
  iStack_60 = 0;
  iStack_54 = 1;
  iStack_48 = 2;
  this_ptr = 0x01BC120C;
  round();
  UStack_64.i = (int)ROUND(fVar2);
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(this_ptr,poly);
  return;
}
