// Name: core_dtri.cpp_FUN_00479e10
// Address: 00479e10
// Address Range: [[00479e10, 00479f5b]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_00479e10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_dtri_cpp_FUN_00479e10(void)

{
  float10 fVar1;
  float10 fVar2;
  float *in_stack_00000004;
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
  
  CStack_30.x = (int)ROUND(*in_stack_00000004 * _DAT_005f5b50);
  CStack_30.y = (int)ROUND(in_stack_00000004[1] * _DAT_005f5b50);
  CStack_30.z = (int)ROUND(in_stack_00000004[2] * _DAT_005f5b50);
  engine_special_cpp_FUN_0055d723(&DAT_0060b27c->vertex_buffer_ptr->projected_vertex,&CStack_30);
  CStack_18.x = (int)ROUND(in_stack_00000004[3] * _DAT_005f5b50);
  CStack_18.y = (int)ROUND(in_stack_00000004[4] * _DAT_005f5b50);
  CStack_18.z = (int)ROUND(in_stack_00000004[5] * _DAT_005f5b50);
  engine_special_cpp_FUN_0055d723(&DAT_0060b27c->vertex_buffer_ptr[1].projected_vertex,&CStack_18);
  CStack_24.x = (int)ROUND(in_stack_00000004[6] * _DAT_005f5b50);
  CStack_24.y = (int)ROUND(in_stack_00000004[7] * _DAT_005f5b50);
  CStack_24.z = (int)ROUND(in_stack_00000004[8] * _DAT_005f5b50);
  engine_special_cpp_FUN_0055d723(&DAT_0060b27c->vertex_buffer_ptr[2].projected_vertex,&CStack_24);
  poly = (SMRGLPrimitivePoly *)&stack0xffffff88;
  iStack_74 = 3;
  fVar1 = (float10)_DAT_005d1e23;
  fVar2 = (float10)in_stack_00000004[9] * fVar1;
  round();
  UStack_70.i = (int)ROUND(fVar2);
  fVar2 = (float10)in_stack_00000004[10] * fVar1;
  round();
  UStack_6c.i = (int)ROUND(fVar2);
  fVar1 = fVar1 * (float10)in_stack_00000004[0xb];
  round();
  UStack_68.i = (int)ROUND(fVar1);
  fVar2 = (float10)in_stack_00000004[0xc] * (float10)_DAT_005d1e2b * (float10)_DAT_005d1e33;
  iStack_60 = 0;
  iStack_54 = 1;
  iStack_48 = 2;
  this_ptr = 0x01BA5C50;
  round();
  UStack_64.i = (int)ROUND(fVar2);
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(this_ptr,poly);
  return;
}
