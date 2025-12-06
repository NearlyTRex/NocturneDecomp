// Name: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
// Address: 0048c4f0
// Address Range: [[0048c4f0, 0048c621]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
          (CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

{
  ushort rotY;
  int extraout_ECX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  ushort uVar7;
  int in_stack_ffffffec;
  int in_stack_fffffff0;
  int translateX;
  int iVar8;
  int translateY;
  
  if (rotation == (CVector3i *)0x0) {
    fVar1 = (float10)0.31830988619288902;
    fVar2 = (float10)32768;
    fVar3 = (float10)(float)position->y * fVar1 * fVar2;
    fVar4 = (float10)(float)position->z * fVar1 * fVar2;
    fVar2 = (float10)(float)position->x * fVar1 * fVar2;
    dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(rotation,position));
    uVar7 = (ushort)rotation;
    dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
    iVar8 = (int)ROUND(fVar4);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)ROUND(fVar3),SUB84 /* extract 2-byte value */(dVar6,0)));
    engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
              ((ushort)(int)ROUND(fVar2),rotY,uVar7,in_stack_ffffffec,in_stack_fffffff0,iVar8);
    return;
  }
  fVar4 = (float10)256;
  fVar1 = (float10)(float)rotation->z * fVar4;
  fVar3 = (float10)(float)rotation->y * fVar4;
  fVar4 = (float10)(float)rotation->x * fVar4;
  fVar2 = (float10)(float)position->z * (float10)0.31830988619288902 * (float10)32768;
  fVar5 = (float10)(float)position->x * (float10)0.31830988619288902 * (float10)32768;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(rotation,position));
  dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
  dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
  iVar8 = (int)ROUND(fVar1);
  translateX = (int)ROUND(fVar3);
  uVar7 = (ushort)(int)ROUND(fVar4);
  dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
  dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
  translateY = extraout_ECX;
  crt_math_c_round_FUN_005fe6b0(dVar6);
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            ((ushort)(int)ROUND(fVar5),(ushort)(int)ROUND(fVar2),uVar7,translateX,translateY,iVar8);
  return;
}
