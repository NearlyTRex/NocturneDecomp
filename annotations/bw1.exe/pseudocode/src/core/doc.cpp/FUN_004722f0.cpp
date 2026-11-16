// Name: core_doc.cpp_FUN_004722f0
// Address: 004722f0
// Address Range: [[004722f0, 00472494]]
// Convention: unknown
// Signature: float * core_doc_cpp_FUN_004722f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float * core_doc_cpp_FUN_004722f0(void)

{
  float fVar1;
  float unaff_ESI;
  byte bVar2;
  double dVar3;
  CVector3f *in_stack_00000004;
  float *in_stack_00000008;
  float afStackY_1028 [3];
  float *apfStackY_101c [1002];
  float fStack_4c;
  CVector3f CStack_40;
  float afStack_34 [2];
  float *pfStack_2c;
  float fStack_20;
  
  bVar2 = 0;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(in_stack_00000004,&CStack_40);
  afStack_34[0] = CStack_40.x;
  afStack_34[(uint)bVar2 * -2 + 1] = afStack_34[(uint)bVar2 * -2 + -2];
  (&pfStack_2c)[(uint)bVar2 * -2 + (uint)bVar2 * -2] =
       (float *)afStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -1];
  fVar1 = SQRT(in_stack_00000004->z * in_stack_00000004->z +
               in_stack_00000004->x * in_stack_00000004->x +
               in_stack_00000004->y * in_stack_00000004->y);
  if ((float)_DAT_005da2bc < fVar1) {
    if ((((float)_DAT_005da2bc <= fVar1) &&
        (dVar3 = (double)(SQRT(fVar1 * fVar1 - -*in_stack_00000008 * -*in_stack_00000008) / fVar1),
        dVar3 < 1.0)) && (0.0 <= dVar3)) {
      dVar3 = acos(dVar3);
      unaff_ESI = (float)dVar3;
      if (0.0 <= fStack_20) {
        afStack_34[0] = afStack_34[0] + unaff_ESI;
      }
      else {
        afStack_34[0] = afStack_34[0] - unaff_ESI;
      }
      afStack_34[0] = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_34[0]);
    }
    fStack_4c = (float)((ulonglong)(double)fVar1 >> 0x20);
    if (((_DAT_005da2bc <= (double)fStack_4c) &&
        (dVar3 = (double)(SQRT(fStack_4c * fStack_4c - in_stack_00000008[1] * in_stack_00000008[1])
                         / fStack_4c), dVar3 < 1.0)) && (0.0 <= dVar3)) {
      dVar3 = acos(dVar3);
      if (0.0 <= unaff_ESI) {
        CStack_40.y = CStack_40.y + (float)dVar3;
      }
      else {
        CStack_40.y = CStack_40.y - (float)dVar3;
      }
      CStack_40.y = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(CStack_40.y);
    }
  }
  *pfStack_2c = CStack_40.z;
  pfStack_2c[(uint)bVar2 * -2 + 1] = afStack_34[(uint)bVar2 * -2];
  (pfStack_2c + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       afStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  return pfStack_2c;
}
